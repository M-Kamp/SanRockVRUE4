// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "ImageWriteQueue/Public/ImageWriteQueue.h"

#include "ImageSaveLoad.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SANROCKARTVRMED7_API UImageSaveLoad : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UImageSaveLoad();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
	void SaveRenderTargetToDisk(UTextureRenderTarget2D* InRenderTarget, FString path, FString Filename);


	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
	void LoadRenderTargetFromDisk(UTextureRenderTarget2D*& OutRenderTarget, FString path, FString Filename);
};
