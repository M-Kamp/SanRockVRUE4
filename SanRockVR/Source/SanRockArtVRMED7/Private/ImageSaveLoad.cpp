// Fill out your copyright notice in the Description page of Project Settings.

#include "ImageSaveLoad.h"
#include "HighResScreenshot.h"

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

void UImageSaveLoad::SaveRenderTargetToDisk(UTextureRenderTarget2D* InRenderTarget, FString Filename)
{
	FTextureRenderTargetResource* RTResource = InRenderTarget->GameThread_GetRenderTargetResource();

	FReadSurfaceDataFlags ReadPixelFlags(RCM_UNorm);
	ReadPixelFlags.SetLinearToGamma(true);

	TArray<FColor> OutBMP;
	RTResource->ReadPixels(OutBMP, ReadPixelFlags);

	for (FColor& color : OutBMP)
	{
		color.A = 255;
	}


	FIntRect SourceRect;

	FIntPoint DestSize(InRenderTarget->GetSurfaceWidth(), InRenderTarget->GetSurfaceHeight());


	FString ResultPath;
	FHighResScreenshotConfig& HighResScreenshotConfig = GetHighResScreenshotConfig();
	//HighResScreenshotConfig.SaveImage(Filename, OutBMP, DestSize, &ResultPath);
}

