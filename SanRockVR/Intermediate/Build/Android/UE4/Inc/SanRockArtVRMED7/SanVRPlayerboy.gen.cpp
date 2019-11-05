// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SanRockArtVRMED7/Public/SanVRPlayerboy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanVRPlayerboy() {}
// Cross Module References
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_ASanVRPlayerboy_NoRegister();
	SANROCKARTVRMED7_API UClass* Z_Construct_UClass_ASanVRPlayerboy();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SanRockArtVRMED7();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile();
	SANROCKARTVRMED7_API UFunction* Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile();
// End Cross Module References
	void ASanVRPlayerboy::StaticRegisterNativesASanVRPlayerboy()
	{
		UClass* Class = ASanVRPlayerboy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTextFile", &ASanVRPlayerboy::execAppendTextFile },
			{ "InitilizeCSVTextFile", &ASanVRPlayerboy::execInitilizeCSVTextFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics
	{
		struct SanVRPlayerboy_eventAppendTextFile_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRPlayerboy_eventAppendTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRPlayerboy_eventAppendTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/SanVRPlayerboy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASanVRPlayerboy, nullptr, "AppendTextFile", nullptr, nullptr, sizeof(SanVRPlayerboy_eventAppendTextFile_Parms), Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics
	{
		struct SanVRPlayerboy_eventInitilizeCSVTextFile_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRPlayerboy_eventInitilizeCSVTextFile_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SanVRPlayerboy_eventInitilizeCSVTextFile_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_Text_Inner = { "Text", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::NewProp_Text_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "Public/SanVRPlayerboy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASanVRPlayerboy, nullptr, "InitilizeCSVTextFile", nullptr, nullptr, sizeof(SanVRPlayerboy_eventInitilizeCSVTextFile_Parms), Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASanVRPlayerboy_NoRegister()
	{
		return ASanVRPlayerboy::StaticClass();
	}
	struct Z_Construct_UClass_ASanVRPlayerboy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASanVRPlayerboy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SanRockArtVRMED7,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASanVRPlayerboy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASanVRPlayerboy_AppendTextFile, "AppendTextFile" }, // 3631371220
		{ &Z_Construct_UFunction_ASanVRPlayerboy_InitilizeCSVTextFile, "InitilizeCSVTextFile" }, // 4228679799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASanVRPlayerboy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SanVRPlayerboy.h" },
		{ "ModuleRelativePath", "Public/SanVRPlayerboy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASanVRPlayerboy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASanVRPlayerboy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASanVRPlayerboy_Statics::ClassParams = {
		&ASanVRPlayerboy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASanVRPlayerboy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASanVRPlayerboy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASanVRPlayerboy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASanVRPlayerboy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASanVRPlayerboy, 196135709);
	template<> SANROCKARTVRMED7_API UClass* StaticClass<ASanVRPlayerboy>()
	{
		return ASanVRPlayerboy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASanVRPlayerboy(Z_Construct_UClass_ASanVRPlayerboy, &ASanVRPlayerboy::StaticClass, TEXT("/Script/SanRockArtVRMED7"), TEXT("ASanVRPlayerboy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASanVRPlayerboy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
