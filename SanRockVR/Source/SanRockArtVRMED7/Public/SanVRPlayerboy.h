// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "FileHelper.h"
#include "Paths.h"

#include "SanVRPlayerboy.generated.h"

/**
 * 
 */
UCLASS()
class SANROCKARTVRMED7_API ASanVRPlayerboy : public APlayerController
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void InitilizeCSVTextFile(TArray<FString> Text, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void AppendTextFile(TArray<FString> Text, FString FileName);
};
