// Fill out your copyright notice in the Description page of Project Settings.

#include "SanVRPlayerboy.h"
#include "FileHelper.h"
#include "Misc/Paths.h"


ASanVRPlayerboy::ASanVRPlayerboy(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	// Fiddling around with a camera manger class because why not
};

void ASanVRPlayerboy::InitilizeCSVTextFile(TArray<FString> Text, FString FileName)
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

void ASanVRPlayerboy::AppendTextFile(TArray<FString> Text, FString FileName)
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