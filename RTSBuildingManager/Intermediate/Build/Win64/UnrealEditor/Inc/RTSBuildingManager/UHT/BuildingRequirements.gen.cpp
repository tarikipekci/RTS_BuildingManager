// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/BuildingRequirements.h"
#include "RTSBuildingManager/FRequirements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingRequirements() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingRequirements();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingRequirements_NoRegister();
	RTSBUILDINGMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRequirements();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	void UBuildingRequirements::StaticRegisterNativesUBuildingRequirements()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuildingRequirements);
	UClass* Z_Construct_UClass_UBuildingRequirements_NoRegister()
	{
		return UBuildingRequirements::StaticClass();
	}
	struct Z_Construct_UClass_UBuildingRequirements_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorkDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildingRequirements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingRequirements_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BuildingRequirements.h" },
		{ "ModuleRelativePath", "BuildingRequirements.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_Requirements_MetaData[] = {
		{ "Category", "BuildingRequirements" },
		{ "ModuleRelativePath", "BuildingRequirements.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildingRequirements, Requirements), Z_Construct_UScriptStruct_FRequirements, METADATA_PARAMS(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_Requirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_Requirements_MetaData)) }; // 3940480143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildDuration_MetaData[] = {
		{ "Category", "BuildingRequirements" },
		{ "ModuleRelativePath", "BuildingRequirements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildDuration = { "BuildDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildingRequirements, BuildDuration), METADATA_PARAMS(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildingIcon_MetaData[] = {
		{ "Category", "BuildingRequirements" },
		{ "ModuleRelativePath", "BuildingRequirements.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildingIcon = { "BuildingIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildingRequirements, BuildingIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildingIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildingIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_WorkDuration_MetaData[] = {
		{ "Category", "BuildingRequirements" },
		{ "ModuleRelativePath", "BuildingRequirements.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_WorkDuration = { "WorkDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBuildingRequirements, WorkDuration), METADATA_PARAMS(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_WorkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_WorkDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildingRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_Requirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_BuildingIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildingRequirements_Statics::NewProp_WorkDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildingRequirements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingRequirements>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildingRequirements_Statics::ClassParams = {
		&UBuildingRequirements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuildingRequirements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBuildingRequirements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuildingRequirements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildingRequirements()
	{
		if (!Z_Registration_Info_UClass_UBuildingRequirements.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingRequirements.OuterSingleton, Z_Construct_UClass_UBuildingRequirements_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuildingRequirements.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<UBuildingRequirements>()
	{
		return UBuildingRequirements::StaticClass();
	}
	UBuildingRequirements::UBuildingRequirements(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildingRequirements);
	UBuildingRequirements::~UBuildingRequirements() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingRequirements_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingRequirements_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingRequirements, UBuildingRequirements::StaticClass, TEXT("UBuildingRequirements"), &Z_Registration_Info_UClass_UBuildingRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingRequirements), 1994016965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingRequirements_h_2299271167(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingRequirements_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingRequirements_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
