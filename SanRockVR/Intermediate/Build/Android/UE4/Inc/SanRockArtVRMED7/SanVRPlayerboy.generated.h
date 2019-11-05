// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANROCKARTVRMED7_SanVRPlayerboy_generated_h
#error "SanVRPlayerboy.generated.h already included, missing '#pragma once' in SanVRPlayerboy.h"
#endif
#define SANROCKARTVRMED7_SanVRPlayerboy_generated_h

#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitilizeCSVTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitilizeCSVTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AppendTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitilizeCSVTextFile) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Text); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitilizeCSVTextFile(Z_Param_Text,Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASanVRPlayerboy(); \
	friend struct Z_Construct_UClass_ASanVRPlayerboy_Statics; \
public: \
	DECLARE_CLASS(ASanVRPlayerboy, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(ASanVRPlayerboy)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASanVRPlayerboy(); \
	friend struct Z_Construct_UClass_ASanVRPlayerboy_Statics; \
public: \
	DECLARE_CLASS(ASanVRPlayerboy, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(ASanVRPlayerboy)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASanVRPlayerboy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASanVRPlayerboy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASanVRPlayerboy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASanVRPlayerboy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASanVRPlayerboy(ASanVRPlayerboy&&); \
	NO_API ASanVRPlayerboy(const ASanVRPlayerboy&); \
public:


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASanVRPlayerboy(ASanVRPlayerboy&&); \
	NO_API ASanVRPlayerboy(const ASanVRPlayerboy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASanVRPlayerboy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASanVRPlayerboy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASanVRPlayerboy)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_PRIVATE_PROPERTY_OFFSET
#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_12_PROLOG
#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_RPC_WRAPPERS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_INCLASS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_INCLASS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANROCKARTVRMED7_API UClass* StaticClass<class ASanVRPlayerboy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SanRockVR_Source_SanRockArtVRMED7_Public_SanVRPlayerboy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
