// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANROCKARTVRMED7_SanVRLogger_generated_h
#error "SanVRLogger.generated.h already included, missing '#pragma once' in SanVRLogger.h"
#endif
#define SANROCKARTVRMED7_SanVRLogger_generated_h

#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_RPC_WRAPPERS \
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


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSanVRLogger(); \
	friend struct Z_Construct_UClass_USanVRLogger_Statics; \
public: \
	DECLARE_CLASS(USanVRLogger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(USanVRLogger)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSanVRLogger(); \
	friend struct Z_Construct_UClass_USanVRLogger_Statics; \
public: \
	DECLARE_CLASS(USanVRLogger, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(USanVRLogger)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USanVRLogger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USanVRLogger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USanVRLogger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USanVRLogger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USanVRLogger(USanVRLogger&&); \
	NO_API USanVRLogger(const USanVRLogger&); \
public:


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USanVRLogger(USanVRLogger&&); \
	NO_API USanVRLogger(const USanVRLogger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USanVRLogger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USanVRLogger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USanVRLogger)


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_PRIVATE_PROPERTY_OFFSET
#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_14_PROLOG
#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_RPC_WRAPPERS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_INCLASS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_INCLASS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANROCKARTVRMED7_API UClass* StaticClass<class USanVRLogger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SanRockVR_Source_SanRockArtVRMED7_Public_SanVRLogger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
