// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTSBUILDINGMANAGER_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define RTSBUILDINGMANAGER_PlayerPawn_generated_h

#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_SPARSE_DATA
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCameraBounds); \
	DECLARE_FUNCTION(execRotateVertical); \
	DECLARE_FUNCTION(execRotateHorizontal); \
	DECLARE_FUNCTION(execRotateLeft); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCameraBounds); \
	DECLARE_FUNCTION(execRotateVertical); \
	DECLARE_FUNCTION(execRotateHorizontal); \
	DECLARE_FUNCTION(execRotateLeft); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execZoom); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_ACCESSORS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	NO_API virtual ~APlayerPawn();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn) \
	NO_API virtual ~APlayerPawn();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_12_PROLOG
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_RPC_WRAPPERS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_INCLASS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSBUILDINGMANAGER_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
