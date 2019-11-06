// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyLogger.generated.h"

UCLASS()
class SANROCKARTVRMED7_API AMyLogger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyLogger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void InitilizeCSVTextFile(TArray<FString> Text, FString FileName);

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
		void AppendTextFile(TArray<FString> Text, FString FileName);

};
