// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/RTS_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTS_GameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding_NoRegister();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ARTS_GameMode();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ARTS_GameMode_NoRegister();
	RTSBUILDINGMANAGER_API UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	void ARTS_GameMode::StaticRegisterNativesARTS_GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTS_GameMode);
	UClass* Z_Construct_UClass_ARTS_GameMode_NoRegister()
	{
		return ARTS_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARTS_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Buildables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buildables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildables;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResourceTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResourceTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTS_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTS_GameMode.h" },
		{ "ModuleRelativePath", "RTS_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables_Inner = { "Buildables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBuilding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables_MetaData[] = {
		{ "Category", "RTS_GameMode" },
		{ "ModuleRelativePath", "RTS_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables = { "Buildables", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_GameMode, Buildables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_Inner = { "ResourceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_MetaData[] = {
		{ "Category", "RTS_GameMode" },
		{ "ModuleRelativePath", "RTS_GameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes = { "ResourceTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTS_GameMode, ResourceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_MetaData)) }; // 3614723126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTS_GameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_Buildables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTS_GameMode_Statics::NewProp_ResourceTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTS_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTS_GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTS_GameMode_Statics::ClassParams = {
		&ARTS_GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTS_GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_GameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARTS_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTS_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTS_GameMode()
	{
		if (!Z_Registration_Info_UClass_ARTS_GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTS_GameMode.OuterSingleton, Z_Construct_UClass_ARTS_GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTS_GameMode.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<ARTS_GameMode>()
	{
		return ARTS_GameMode::StaticClass();
	}
	ARTS_GameMode::ARTS_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTS_GameMode);
	ARTS_GameMode::~ARTS_GameMode() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTS_GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTS_GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTS_GameMode, ARTS_GameMode::StaticClass, TEXT("ARTS_GameMode"), &Z_Registration_Info_UClass_ARTS_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTS_GameMode), 3305613630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTS_GameMode_h_1561435425(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTS_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTS_GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
