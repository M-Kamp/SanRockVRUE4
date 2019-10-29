// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "FileHelper.h"
#include "Paths.h"

#include "SanVRLogger.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SANROCKARTVRMED7_API USanVRLogger : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USanVRLogger();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void InitilizeCSVTextFile(TArray<FString> Text, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void AppendTextFile(TArray<FString> Text, FString FileName);
		
};
