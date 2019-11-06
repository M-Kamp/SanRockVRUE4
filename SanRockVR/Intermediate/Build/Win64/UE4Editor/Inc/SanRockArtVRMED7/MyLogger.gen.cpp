// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SanRockArtVRMED7/Public/MyLogger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLogger() {}
// Cross Module References
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_AMyLogger_NoRegister();
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_AMyLogger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SanRockArtVRMED7();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_AMyLogger_AppendTextFile();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile();
// End Cross Module References
	void AMyLogger::StaticRegisterNativesAMyLogger()
	{
		UClass* Class = AMyLogger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTextFile", &AMyLogger::execAppendTextFile },
			{ "InitilizeCSVTextFile", &AMyLogger::execInitilizeCSVTextFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics
	{
		struct MyLogger_eventAppendTextFile_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLogger_eventAppendTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLogger_eventAppendTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/MyLogger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLogger, nullptr, "AppendTextFile", nullptr, nullptr, sizeof(MyLogger_eventAppendTextFile_Parms), Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLogger_AppendTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyLogger_AppendTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics
	{
		struct MyLogger_eventInitilizeCSVTextFile_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLogger_eventInitilizeCSVTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyLogger_eventInitilizeCSVTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/MyLogger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLogger, nullptr, "InitilizeCSVTextFile", nullptr, nullptr, sizeof(MyLogger_eventInitilizeCSVTextFile_Parms), Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyLogger_NoRegister()
	{
		return AMyLogger::StaticClass();
	}
	struct Z_Construct_UClass_AMyLogger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLogger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SanRockArtVRMED7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyLogger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLogger_AppendTextFile, "AppendTextFile" }, // 2757740503
		{ &Z_Construct_UFunction_AMyLogger_InitilizeCSVTextFile, "InitilizeCSVTextFile" }, // 2519923192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLogger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyLogger.h" },
		{ "ModuleRelativePath", "Public/MyLogger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLogger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLogger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyLogger_Statics::ClassParams = {
		&AMyLogger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyLogger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyLogger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLogger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyLogger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyLogger, 1641865995);
	template<> SANROCKARTVRMED7_API UClass* StaticClass<AMyLogger>()
	{
		return AMyLogger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyLogger(Z_Construct_UClass_AMyLogger, &AMyLogger::StaticClass, TEXT("/Script/SanRockArtVRMED7"), TEXT("AMyLogger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLogger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
