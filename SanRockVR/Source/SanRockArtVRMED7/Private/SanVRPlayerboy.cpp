// Fill out your copyright notice in the Description page of Project Settings.


#include "SanVRPlayerboy.h"


void ASanVRPlayerboy::InitilizeCSVTextFile(TArray<FString> Text, FString FileName)
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

void ASanVRPlayerboy::AppendTextFile(TArray<FString> Text, FString FileName)
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