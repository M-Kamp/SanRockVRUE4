// Fill out your copyright notice in the Description page of Project Settings.


#include "SanVRLogger.h"

// Sets default values for this component's properties
USanVRLogger::USanVRLogger()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USanVRLogger::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USanVRLogger::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USanVRLogger::InitilizeCSVTextFile(TArray<FString> Text, FString FileName)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::GameSavedDir()) + FileName + ".txt";

	FString FileContent = "";

	for (size_t i = 0; i < Text.Num(); i++)
	{
		FileContent += Text[i];

		if (i + 1 != Text.Num())
		{
			FileContent += ",";
		}
	}

	FileContent += "\n";

	FFileHelper::SaveStringToFile(FileContent, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void USanVRLogger::AppendTextFile(TArray<FString> Text, FString FileName)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::GameSavedDir()) + FileName + ".txt";

	FString FileContent = "";

	for (size_t i = 0; i < Text.Num(); i++)
	{
		FileContent += Text[i];

		if (i + 1 != Text.Num())
		{
			FileContent += ",";
		}
	}

	FileContent += "\n";

	FFileHelper::SaveStringToFile(FileContent, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

