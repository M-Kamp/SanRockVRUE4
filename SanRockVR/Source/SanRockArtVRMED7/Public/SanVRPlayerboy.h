// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SanVRPlayerboy.generated.h"

/**
 * 
 */
UCLASS(config = Game)
class SANROCKARTVRMED7_API ASanVRPlayerboy : public APlayerController
{
	GENERATED_BODY()
	
public:
	ASanVRPlayerboy(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void InitilizeCSVTextFile(TArray<FString> Text, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void AppendTextFile(TArray<FString> Text, FString FileName);
};
