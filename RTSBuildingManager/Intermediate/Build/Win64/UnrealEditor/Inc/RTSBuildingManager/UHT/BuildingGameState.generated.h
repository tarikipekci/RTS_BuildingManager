// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EResourceType : uint8; 
#ifdef RTSBUILDINGMANAGER_BuildingGameState_generated_h
#error "BuildingGameState.generated.h already included, missing '#pragma once' in BuildingGameState.h"
#endif
#define RTSBUILDINGMANAGER_BuildingGameState_generated_h

#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_13_DELEGATE \
RTSBUILDINGMANAGER_API void FResourcesUpdated_DelegateWrapper(const FMulticastScriptDelegate& ResourcesUpdated);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_SPARSE_DATA
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCurrentBalance);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCurrentBalance);


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_ACCESSORS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingGameState(); \
	friend struct Z_Construct_UClass_ABuildingGameState_Statics; \
public: \
	DECLARE_CLASS(ABuildingGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(ABuildingGameState)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABuildingGameState(); \
	friend struct Z_Construct_UClass_ABuildingGameState_Statics; \
public: \
	DECLARE_CLASS(ABuildingGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), NO_API) \
	DECLARE_SERIALIZER(ABuildingGameState)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingGameState(ABuildingGameState&&); \
	NO_API ABuildingGameState(const ABuildingGameState&); \
public: \
	NO_API virtual ~ABuildingGameState();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingGameState(ABuildingGameState&&); \
	NO_API ABuildingGameState(const ABuildingGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingGameState) \
	NO_API virtual ~ABuildingGameState();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_15_PROLOG
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_RPC_WRAPPERS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_INCLASS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_INCLASS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSBUILDINGMANAGER_API UClass* StaticClass<class ABuildingGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
