// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTSBUILDINGMANAGER_BuildingInterface_generated_h
#error "BuildingInterface.generated.h already included, missing '#pragma once' in BuildingInterface.h"
#endif
#define RTSBUILDINGMANAGER_BuildingInterface_generated_h

#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_SPARSE_DATA
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_RPC_WRAPPERS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_ACCESSORS
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RTSBUILDINGMANAGER_API UBuildingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RTSBUILDINGMANAGER_API, UBuildingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RTSBUILDINGMANAGER_API UBuildingInterface(UBuildingInterface&&); \
	RTSBUILDINGMANAGER_API UBuildingInterface(const UBuildingInterface&); \
public: \
	RTSBUILDINGMANAGER_API virtual ~UBuildingInterface();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RTSBUILDINGMANAGER_API UBuildingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RTSBUILDINGMANAGER_API UBuildingInterface(UBuildingInterface&&); \
	RTSBUILDINGMANAGER_API UBuildingInterface(const UBuildingInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RTSBUILDINGMANAGER_API, UBuildingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingInterface) \
	RTSBUILDINGMANAGER_API virtual ~UBuildingInterface();


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBuildingInterface(); \
	friend struct Z_Construct_UClass_UBuildingInterface_Statics; \
public: \
	DECLARE_CLASS(UBuildingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RTSBuildingManager"), RTSBUILDINGMANAGER_API) \
	DECLARE_SERIALIZER(UBuildingInterface)


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBuildingInterface() {} \
public: \
	typedef UBuildingInterface UClassType; \
	typedef IBuildingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IBuildingInterface() {} \
public: \
	typedef UBuildingInterface UClassType; \
	typedef IBuildingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_7_PROLOG
#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_RPC_WRAPPERS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_SPARSE_DATA \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_ACCESSORS \
	FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSBUILDINGMANAGER_API UClass* StaticClass<class UBuildingInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
