// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/FRequirements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFRequirements() {}
// Cross Module References
	RTSBUILDINGMANAGER_API UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType();
	RTSBUILDINGMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FRequirements();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
	static UEnum* EResourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTSBuildingManager_EResourceType, (UObject*)Z_Construct_UPackage__Script_RTSBuildingManager(), TEXT("EResourceType"));
		}
		return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UEnum* StaticEnum<EResourceType>()
	{
		return EResourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enumerators[] = {
		{ "EResourceType::None", (int64)EResourceType::None },
		{ "EResourceType::Gold", (int64)EResourceType::Gold },
		{ "EResourceType::Log", (int64)EResourceType::Log },
		{ "EResourceType::Stone", (int64)EResourceType::Stone },
		{ "EResourceType::Max", (int64)EResourceType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gold.DisplayerName", "Gold" },
		{ "Gold.Name", "EResourceType::Gold" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EResourceType::Log" },
		{ "Max.DisplayName", "Max" },
		{ "Max.Name", "EResourceType::Max" },
		{ "ModuleRelativePath", "FRequirements.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EResourceType::None" },
		{ "Stone.DisplayName", "Stone" },
		{ "Stone.Name", "EResourceType::Stone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RTSBuildingManager,
		nullptr,
		"EResourceType",
		"EResourceType",
		Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType()
	{
		if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_RTSBuildingManager_EResourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Requirements;
class UScriptStruct* FRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Requirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Requirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequirements, (UObject*)Z_Construct_UPackage__Script_RTSBuildingManager(), TEXT("Requirements"));
	}
	return Z_Registration_Info_UScriptStruct_Requirements.OuterSingleton;
}
template<> RTSBUILDINGMANAGER_API UScriptStruct* StaticStruct<FRequirements>()
{
	return FRequirements::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRequirements_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RequiredResourceInfo_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredResourceInfo_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredResourceInfo_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredResourceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredResourceInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequirements_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FRequirements.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRequirements_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequirements>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_ValueProp = { "RequiredResourceInfo", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_Key_KeyProp = { "RequiredResourceInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_MetaData[] = {
		{ "Category", "Requirements" },
		{ "ModuleRelativePath", "FRequirements.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo = { "RequiredResourceInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRequirements, RequiredResourceInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_MetaData)) }; // 3614723126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequirements_Statics::NewProp_RequiredResourceInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequirements_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
		nullptr,
		&NewStructOps,
		"Requirements",
		sizeof(FRequirements),
		alignof(FRequirements),
		Z_Construct_UScriptStruct_FRequirements_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequirements_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRequirements_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequirements_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRequirements()
	{
		if (!Z_Registration_Info_UScriptStruct_Requirements.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Requirements.InnerSingleton, Z_Construct_UScriptStruct_FRequirements_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Requirements.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3614723126U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::ScriptStructInfo[] = {
		{ FRequirements::StaticStruct, Z_Construct_UScriptStruct_FRequirements_Statics::NewStructOps, TEXT("Requirements"), &Z_Registration_Info_UScriptStruct_Requirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequirements), 3940480143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_1060081486(TEXT("/Script/RTSBuildingManager"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_FRequirements_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
