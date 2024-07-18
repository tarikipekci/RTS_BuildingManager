// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseBuilding;
#ifdef RTSBUILDINGMANAGER_BuildingManager_generated_h
#error "BuildingManager.generated.h already included, missing '#pragma once' in BuildingManager.h"
#endif
#define RTSBUILDINGMANAGER_BuildingManager_generated_h

#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_SPARSE_DATA
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBuildingLocationAtMouse); \
	DECLARE_FUNCTION(execConsumeResource); \
	DECLARE_FUNCTION(execSpawnBuilding);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBuildingLocationAtMouse); \
	DECLARE_FUNCTION(execConsumeResource); \
	DECLARE_FUNCTION(execSpawnBuilding);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_ACCESSORS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingManager(); \
	friend struct Z_Construct_UClass_ABuildingManager_Statics; \
public: \
	DECLARE_CLASS(ABuildingManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(ABuildingManager)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABuildingManager(); \
	friend struct Z_Construct_UClass_ABuildingManager_Statics; \
public: \
	DECLARE_CLASS(ABuildingManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(ABuildingManager)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingManager(ABuildingManager&&); \
	NO_API ABuildingManager(const ABuildingManager&); \
public: \
	NO_API virtual ~ABuildingManager();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingManager(ABuildingManager&&); \
	NO_API ABuildingManager(const ABuildingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingManager) \
	NO_API virtual ~ABuildingManager();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_12_PROLOG
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_RPC_WRAPPERS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_INCLASS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSBUILDINGMANAGER_API UClass* StaticClass<class ABuildingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
