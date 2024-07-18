// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/RTSBuildingManagerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBuildingManagerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ARTSBuildingManagerGameMode();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ARTSBuildingManagerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	void ARTSBuildingManagerGameMode::StaticRegisterNativesARTSBuildingManagerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBuildingManagerGameMode);
	UClass* Z_Construct_UClass_ARTSBuildingManagerGameMode_NoRegister()
	{
		return ARTSBuildingManagerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSBuildingManagerGameMode.h" },
		{ "ModuleRelativePath", "RTSBuildingManagerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBuildingManagerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::ClassParams = {
		&ARTSBuildingManagerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSBuildingManagerGameMode()
	{
		if (!Z_Registration_Info_UClass_ARTSBuildingManagerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBuildingManagerGameMode.OuterSingleton, Z_Construct_UClass_ARTSBuildingManagerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBuildingManagerGameMode.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<ARTSBuildingManagerGameMode>()
	{
		return ARTSBuildingManagerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBuildingManagerGameMode);
	ARTSBuildingManagerGameMode::~ARTSBuildingManagerGameMode() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTSBuildingManagerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTSBuildingManagerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBuildingManagerGameMode, ARTSBuildingManagerGameMode::StaticClass, TEXT("ARTSBuildingManagerGameMode"), &Z_Registration_Info_UClass_ARTSBuildingManagerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBuildingManagerGameMode), 2025542111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTSBuildingManagerGameMode_h_2251593053(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTSBuildingManagerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_RTSBuildingManagerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
