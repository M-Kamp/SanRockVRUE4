// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SanRockVRMED7/Public/HelloWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloWorld() {}
// Cross Module References
	SANROCKVRMED7_API UClass* Z_Construct_UClass_UHelloWorld_NoRegister();
	SANROCKVRMED7_API UClass* Z_Construct_UClass_UHelloWorld();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SanRockVRMED7();
// End Cross Module References
	void UHelloWorld::StaticRegisterNativesUHelloWorld()
	{
	}
	UClass* Z_Construct_UClass_UHelloWorld_NoRegister()
	{
		return UHelloWorld::StaticClass();
	}
	struct Z_Construct_UClass_UHelloWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHelloWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SanRockVRMED7,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHelloWorld_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HelloWorld.h" },
		{ "ModuleRelativePath", "Public/HelloWorld.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHelloWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHelloWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHelloWorld_Statics::ClassParams = {
		&UHelloWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHelloWorld_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHelloWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHelloWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHelloWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHelloWorld, 4181435876);
	template<> SANROCKVRMED7_API UClass* StaticClass<UHelloWorld>()
	{
		return UHelloWorld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHelloWorld(Z_Construct_UClass_UHelloWorld, &UHelloWorld::StaticClass, TEXT("/Script/SanRockVRMED7"), TEXT("UHelloWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHelloWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
