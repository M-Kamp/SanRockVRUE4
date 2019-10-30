// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SanRockArtVRMED7/Public/SanVRLogger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanVRLogger() {}
// Cross Module References
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_USanVRLogger_NoRegister();
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_USanVRLogger();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SanRockArtVRMED7();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_USanVRLogger_AppendTextFile();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile();
// End Cross Module References
	void USanVRLogger::StaticRegisterNativesUSanVRLogger()
	{
		UClass* Class = USanVRLogger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTextFile", &USanVRLogger::execAppendTextFile },
			{ "InitilizeCSVTextFile", &USanVRLogger::execInitilizeCSVTextFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics
	{
		struct SanVRLogger_eventAppendTextFile_Parms
		{
			TArray<FString> Text;
			FString FileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRLogger_eventAppendTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRLogger_eventAppendTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/SanVRLogger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USanVRLogger, nullptr, "AppendTextFile", nullptr, nullptr, sizeof(SanVRLogger_eventAppendTextFile_Parms), Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USanVRLogger_AppendTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USanVRLogger_AppendTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics
	{
		struct SanVRLogger_eventInitilizeCSVTextFile_Parms
		{
			TArray<FString> Text;
			FString FileName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRLogger_eventInitilizeCSVTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRLogger_eventInitilizeCSVTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/SanVRLogger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USanVRLogger, nullptr, "InitilizeCSVTextFile", nullptr, nullptr, sizeof(SanVRLogger_eventInitilizeCSVTextFile_Parms), Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USanVRLogger_NoRegister()
	{
		return USanVRLogger::StaticClass();
	}
	struct Z_Construct_UClass_USanVRLogger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USanVRLogger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SanRockArtVRMED7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USanVRLogger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USanVRLogger_AppendTextFile, "AppendTextFile" }, // 4246448864
		{ &Z_Construct_UFunction_USanVRLogger_InitilizeCSVTextFile, "InitilizeCSVTextFile" }, // 112154664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanVRLogger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SanVRLogger.h" },
		{ "ModuleRelativePath", "Public/SanVRLogger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USanVRLogger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USanVRLogger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USanVRLogger_Statics::ClassParams = {
		&USanVRLogger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USanVRLogger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USanVRLogger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USanVRLogger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USanVRLogger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USanVRLogger, 2174020501);
	template<> SANROCKARTVRMED7_API UClass* StaticClass<USanVRLogger>()
	{
		return USanVRLogger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USanVRLogger(Z_Construct_UClass_USanVRLogger, &USanVRLogger::StaticClass, TEXT("/Script/SanRockArtVRMED7"), TEXT("USanVRLogger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USanVRLogger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
