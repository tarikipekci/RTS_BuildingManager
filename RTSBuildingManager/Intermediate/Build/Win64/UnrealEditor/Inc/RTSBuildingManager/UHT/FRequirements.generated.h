// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FRequirements.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTSBUILDINGMANAGER_FRequirements_generated_h
#error "FRequirements.generated.h already included, missing '#pragma once' in FRequirements.h"
#endif
#define RTSBUILDINGMANAGER_FRequirements_generated_h

#define FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRequirements_Statics; \
	RTSBUILDINGMANAGER_API static class UScriptStruct* StaticStruct();


template<> RTSBUILDINGMANAGER_API UScriptStruct* StaticStruct<struct FRequirements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(EResourceType::None) \
	op(EResourceType::Gold) \
	op(EResourceType::Log) \
	op(EResourceType::Stone) \
	op(EResourceType::Max) 

enum class EResourceType : uint8;
template<> struct TIsUEnumClass<EResourceType> { enum { Value = true }; };
template<> RTSBUILDINGMANAGER_API UEnum* StaticEnum<EResourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
