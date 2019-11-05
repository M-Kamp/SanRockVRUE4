// Fill out your copyright notice in the Description page of Project Settings.
#include "MyLogger.h"
#include "FileHelper.h"
#include "Misc/Paths.h"


// Sets default values
AMyLogger::AMyLogger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLogger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyLogger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyLogger::InitilizeCSVTextFile(TArray<FString> Text, FString FileName)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir()) + FileName + ".txt";

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

void AMyLogger::AppendTextFile(TArray<FString> Text, FString FileName)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir()) + FileName + ".txt";

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

