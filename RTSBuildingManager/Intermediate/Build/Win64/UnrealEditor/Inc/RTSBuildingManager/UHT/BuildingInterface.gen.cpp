// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/BuildingInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingInterface();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	void UBuildingInterface::StaticRegisterNativesUBuildingInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingInterface);
	UClass* Z_Construct_UClass_UBuildingInterface_NoRegister()
	{
		return UBuildingInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBuildingInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildingInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildingInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildingInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuildingInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingInterface_Statics::ClassParams = {
		&UBuildingInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildingInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildingInterface()
	{
		if (!Z_Registration_Info_UClass_UBuildingInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingInterface.OuterSingleton, Z_Construct_UClass_UBuildingInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildingInterface.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<UBuildingInterface>()
	{
		return UBuildingInterface::StaticClass();
	}
	UBuildingInterface::UBuildingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingInterface);
	UBuildingInterface::~UBuildingInterface() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingInterface, UBuildingInterface::StaticClass, TEXT("UBuildingInterface"), &Z_Registration_Info_UClass_UBuildingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingInterface), 3108289153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_1190016434(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
