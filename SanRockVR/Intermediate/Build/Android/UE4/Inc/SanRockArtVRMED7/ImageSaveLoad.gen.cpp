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
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void UImageSaveLoad::StaticRegisterNativesUImageSaveLoad()
	{
		UClass* Class = UImageSaveLoad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveRenderTargetToDisk", &UImageSaveLoad::execSaveRenderTargetToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics
	{
		struct ImageSaveLoad_eventSaveRenderTargetToDisk_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FString Filename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImageSaveLoad_eventSaveRenderTargetToDisk_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk_Statics::NewProp_Filename,
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
		{ &Z_Construct_UFunction_UImageSaveLoad_SaveRenderTargetToDisk, "SaveRenderTargetToDisk" }, // 3785512602
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
	IMPLEMENT_CLASS(UImageSaveLoad, 3471574133);
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
