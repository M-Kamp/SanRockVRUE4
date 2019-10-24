// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
#ifdef SANROCKARTVRMED7_ImageSaveLoad_generated_h
#error "ImageSaveLoad.generated.h already included, missing '#pragma once' in ImageSaveLoad.h"
#endif
#define SANROCKARTVRMED7_ImageSaveLoad_generated_h

#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAndroidFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAndroidFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadRenderTargetFromDisk) \
	{ \
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_OutRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadRenderTargetFromDisk(Z_Param_Out_OutRenderTarget,Z_Param_path,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveRenderTargetToDisk) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveRenderTargetToDisk(Z_Param_InRenderTarget,Z_Param_path,Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAndroidFilePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAndroidFilePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadRenderTargetFromDisk) \
	{ \
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_OutRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadRenderTargetFromDisk(Z_Param_Out_OutRenderTarget,Z_Param_path,Z_Param_Filename); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveRenderTargetToDisk) \
	{ \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget); \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Filename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveRenderTargetToDisk(Z_Param_InRenderTarget,Z_Param_path,Z_Param_Filename); \
		P_NATIVE_END; \
	}


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSaveLoad(); \
	friend struct Z_Construct_UClass_UImageSaveLoad_Statics; \
public: \
	DECLARE_CLASS(UImageSaveLoad, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(UImageSaveLoad)


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUImageSaveLoad(); \
	friend struct Z_Construct_UClass_UImageSaveLoad_Statics; \
public: \
	DECLARE_CLASS(UImageSaveLoad, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SanRockArtVRMED7"), NO_API) \
	DECLARE_SERIALIZER(UImageSaveLoad)


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSaveLoad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSaveLoad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSaveLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSaveLoad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSaveLoad(UImageSaveLoad&&); \
	NO_API UImageSaveLoad(const UImageSaveLoad&); \
public:


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSaveLoad(UImageSaveLoad&&); \
	NO_API UImageSaveLoad(const UImageSaveLoad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSaveLoad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSaveLoad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImageSaveLoad)


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_PRIVATE_PROPERTY_OFFSET
#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_15_PROLOG
#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_RPC_WRAPPERS \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_INCLASS \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_PRIVATE_PROPERTY_OFFSET \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_INCLASS_NO_PURE_DECLS \
	SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SANROCKARTVRMED7_API UClass* StaticClass<class UImageSaveLoad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SanRockVR_Source_SanRockArtVRMED7_Public_ImageSaveLoad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
