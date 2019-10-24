// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SanRockArtVRMED7/Public/ImageSaveLoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSaveLoad() {}
// Cross Module References
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_UImageSaveLoad_NoRegister();
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_UImageSaveLoad();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SanRockArtVRMED7();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_TextureFromImage();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_TextureFromRT();
// End Cross Module References
	void UImageSaveLoad::StaticRegisterNativesUImageSaveLoad()
	{
		UClass* Class = UImageSaveLoad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAndroidFilePath", &UImageSaveLoad::execGetAndroidFilePath },
			{ "LoadRenderTargetFromDisk", &UImageSaveLoad::execLoadRenderTargetFromDisk },
			{ "SaveRenderTargetToDisk", &UImageSaveLoad::execSaveRenderTargetToDisk },
			{ "TextureFromImage", &UImageSaveLoad::execTextureFromImage },
			{ "TextureFromRT", &UImageSaveLoad::execTextureFromRT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics
	{
		struct ImageSaveLoad_eventGetAndroidFilePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventGetAndroidFilePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSaveLoad, nullptr, "GetAndroidFilePath", nullptr, nullptr, sizeof(ImageSaveLoad_eventGetAndroidFilePath_Parms), Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics
	{
		struct ImageSaveLoad_eventLoadRenderTargetFromDisk_Parms
		{
			UTextureRenderTarget2D* OutRenderTarget;
			FString path;
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventLoadRenderTargetFromDisk_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventLoadRenderTargetFromDisk_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_OutRenderTarget = { "OutRenderTarget", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventLoadRenderTargetFromDisk_Parms, OutRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::NewProp_OutRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSaveLoad, nullptr, "LoadRenderTargetFromDisk", nullptr, nullptr, sizeof(ImageSaveLoad_eventLoadRenderTargetFromDisk_Parms), Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics
	{
		struct ImageSaveLoad_eventSaveRenderTargetToDisk_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FString path;
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSaveLoad, nullptr, "SaveRenderTargetToDisk", nullptr, nullptr, sizeof(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms), Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics
	{
		struct ImageSaveLoad_eventTextureFromImage_Parms
		{
			int32 SrcWidth;
			int32 SrcHeight;
			TArray<FColor> SrcData;
			bool UseAlpha;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAlpha_MetaData[];
#endif
		static void NewProp_UseAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SrcData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SrcData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SrcWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SrcWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha_SetBit(void* Obj)
	{
		((ImageSaveLoad_eventTextureFromImage_Parms*)Obj)->UseAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha = { "UseAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImageSaveLoad_eventTextureFromImage_Parms), &Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData = { "SrcData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromImage_Parms, SrcData), METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData_Inner = { "SrcData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcHeight = { "SrcHeight", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromImage_Parms, SrcHeight), METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcHeight_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcWidth = { "SrcWidth", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromImage_Parms, SrcWidth), METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcWidth_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_UseAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::NewProp_SrcWidth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSaveLoad, nullptr, "TextureFromImage", nullptr, nullptr, sizeof(ImageSaveLoad_eventTextureFromImage_Parms), Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSaveLoad_TextureFromImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageSaveLoad_TextureFromImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics
	{
		struct ImageSaveLoad_eventTextureFromRT_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			TArray<FColor> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromRT_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventTextureFromRT_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::NewProp_InRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSaveLoad, nullptr, "TextureFromRT", nullptr, nullptr, sizeof(ImageSaveLoad_eventTextureFromRT_Parms), Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSaveLoad_TextureFromRT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageSaveLoad_TextureFromRT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImageSaveLoad_NoRegister()
	{
		return UImageSaveLoad::StaticClass();
	}
	struct Z_Construct_UClass_UImageSaveLoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSaveLoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SanRockArtVRMED7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageSaveLoad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageSaveLoad_GetAndroidFilePath, "GetAndroidFilePath" }, // 2010577749
		{ &Z_Construct_UFunction_UImageSaveLoad_LoadRenderTargetFromDisk, "LoadRenderTargetFromDisk" }, // 571193310
		{ &Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk, "SaveRenderTargetToDisk" }, // 673645503
		{ &Z_Construct_UFunction_UImageSaveLoad_TextureFromImage, "TextureFromImage" }, // 2013692867
		{ &Z_Construct_UFunction_UImageSaveLoad_TextureFromRT, "TextureFromRT" }, // 3431876718
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSaveLoad_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ImageSaveLoad.h" },
		{ "ModuleRelativePath", "Public/ImageSaveLoad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSaveLoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSaveLoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSaveLoad_Statics::ClassParams = {
		&UImageSaveLoad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImageSaveLoad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSaveLoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSaveLoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSaveLoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSaveLoad, 3442010249);
	template<> SANROCKARTVRMED7_API UClass* StaticClass<UImageSaveLoad>()
	{
		return UImageSaveLoad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSaveLoad(Z_Construct_UClass_UImageSaveLoad, &UImageSaveLoad::StaticClass, TEXT("/Script/SanRockArtVRMED7"), TEXT("UImageSaveLoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSaveLoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
