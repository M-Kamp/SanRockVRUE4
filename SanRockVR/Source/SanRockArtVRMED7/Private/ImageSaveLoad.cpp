// Fill out your copyright notice in the Description page of Project Settings.

#include "ImageSaveLoad.h"
#include "HighResScreenshot.h"
#include "Runtime/ImageWriteQueue/Public/ImageWriteQueue.h"
#include "Runtime/ImageWriteQueue/Public/ImageWriteTask.h"
#include "Templates/UniquePtr.h"
#include "Engine/Texture2D.h"
//#include "Runtime/Launch/Private/Android/AndroidJNI.cpp"


// Sets default values for this component's properties
UImageSaveLoad::UImageSaveLoad()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UImageSaveLoad::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UImageSaveLoad::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UImageSaveLoad::SaveRenderTargetToDisk(UTextureRenderTarget2D* InRenderTarget, FString path, FString Filename)
{
	FTextureRenderTargetResource* RTResource = InRenderTarget->GameThread_GetRenderTargetResource();

	// We're reading back depth in centimeters from alpha, and linear lighting.
	const ERangeCompressionMode kDontRangeCompress = RCM_MinMax;
	FReadSurfaceDataFlags ReadPixelFlags(kDontRangeCompress);

	// We always want linear output.
	ReadPixelFlags.SetLinearToGamma(false);

	// Create a bitmap
	TArray<FLinearColor> OutBMP;
	RTResource->ReadLinearColorPixels(OutBMP, ReadPixelFlags);

	FIntRect SourceRect;
	FIntPoint DestSize(InRenderTarget->GetSurfaceWidth(), InRenderTarget->GetSurfaceHeight());

	FString ResultPath;
	FHighResScreenshotConfig& HighResScreenshotConfig = GetHighResScreenshotConfig();
	HighResScreenshotConfig.bCaptureHDR = false;

	//HighResScreenshotConfig.SaveImage(Filename, OutBMP, DestSize); -- DEPRECATED 4.21 so using ImageWriteTask instead

	// New Code by vMattC

		// Check to see if ImageWriteQueue has been initialised
	if (!ensureMsgf(HighResScreenshotConfig.ImageWriteQueue, TEXT("Unable to write images unless FHighResScreenshotConfig::Init has been called.")))
	{
		// Do something
	}

	// Create ImageTask
	TUniquePtr<FImageWriteTask> ImageTask = MakeUnique<FImageWriteTask>();

	// Pass bitmap to pixeldata
	ImageTask->PixelData = MakeUnique<TImagePixelData<FLinearColor>>(DestSize, MoveTemp(OutBMP));

	// Populate Task with config data
	HighResScreenshotConfig.PopulateImageTaskParams(*ImageTask);
	ImageTask->Filename = path + Filename;

	// Specify HDR as output format
	ImageTask->Format = EImageFormat::EXR;

	// Save the bitmap to disc
	TFuture<bool> CompletionFuture = HighResScreenshotConfig.ImageWriteQueue->Enqueue(MoveTemp(ImageTask));
	if (CompletionFuture.IsValid())
	{
		CompletionFuture.Wait();
	}
}

TArray<FColor> UImageSaveLoad::TextureFromRT(UTextureRenderTarget2D * InRenderTarget)
{

	TArray<FColor> SurfData;
	auto RenderTarget = InRenderTarget->GameThread_GetRenderTargetResource();
	RenderTarget->ReadPixels(SurfData);
	return SurfData;
}

UTexture2D* UImageSaveLoad::TextureFromImage(const int32 SrcWidth, const int32 SrcHeight, const TArray<FColor> &SrcData, const bool UseAlpha)
{
	// Create the texture
	auto MyScreenshot = UTexture2D::CreateTransient(
		SrcWidth,
		SrcHeight,
		PF_B8G8R8A8
	);

	// Lock the texture so it can be modified
	uint8* MipData = static_cast<uint8*>(MyScreenshot->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));

	// Create base mip.
	uint8* DestPtr = NULL;
	const FColor* SrcPtr = NULL;
	for (int32 y = 0; y < SrcHeight; y++)
	{
		DestPtr = &MipData[(SrcHeight - 1 - y) * SrcWidth * sizeof(FColor)];
		SrcPtr = const_cast<FColor*>(&SrcData[(SrcHeight - 1 - y) * SrcWidth]);
		for (int32 x = 0; x < SrcWidth; x++)
		{
			*DestPtr++ = SrcPtr->B;
			*DestPtr++ = SrcPtr->G;
			*DestPtr++ = SrcPtr->R;
			if (UseAlpha)
			{
				*DestPtr++ = SrcPtr->A;
			}
			else
			{
				*DestPtr++ = 0xFF;
			}
			SrcPtr++;
		}
	}

	// Unlock the texture
	MyScreenshot->PlatformData->Mips[0].BulkData.Unlock();
	MyScreenshot->UpdateResource();

	return MyScreenshot;
}


void UImageSaveLoad::LoadRenderTargetFromDisk(UTextureRenderTarget2D*& OutRenderTarget, FString path, FString Filename)
{
}

FString UImageSaveLoad::GetAndroidFilePath()
{
	/*
	FString filepath = GFilePathBase;

	UE_LOG(LogTemp, Warning, TEXT("file path: %s"), *filepath);

	
	*/
	return FString();
}


