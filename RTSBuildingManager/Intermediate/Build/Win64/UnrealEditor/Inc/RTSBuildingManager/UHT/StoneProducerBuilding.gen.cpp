// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/StoneProducerBuilding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoneProducerBuilding() {}
// Cross Module References
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AStoneProducerBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AStoneProducerBuilding_NoRegister();
	RTSBUILDINGMANAGER_API UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	DEFINE_FUNCTION(AStoneProducerBuilding::execCheckRequiredState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckRequiredState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStoneProducerBuilding::execSetRewardClaimed)
	{
		P_GET_UBOOL(Z_Param_IsClaimed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardClaimed(Z_Param_IsClaimed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStoneProducerBuilding::execManageClaims)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManageClaims();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStoneProducerBuilding::execStartWork)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWork(Z_Param_LoopDuration);
		P_NATIVE_END;
	}
	void AStoneProducerBuilding::StaticRegisterNativesAStoneProducerBuilding()
	{
		UClass* Class = AStoneProducerBuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckRequiredState", &AStoneProducerBuilding::execCheckRequiredState },
			{ "ManageClaims", &AStoneProducerBuilding::execManageClaims },
			{ "SetRewardClaimed", &AStoneProducerBuilding::execSetRewardClaimed },
			{ "StartWork", &AStoneProducerBuilding::execStartWork },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoneProducerBuilding, nullptr, "CheckRequiredState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoneProducerBuilding, nullptr, "ManageClaims", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics
	{
		struct StoneProducerBuilding_eventSetRewardClaimed_Parms
		{
			bool IsClaimed;
		};
		static void NewProp_IsClaimed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsClaimed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::NewProp_IsClaimed_SetBit(void* Obj)
	{
		((StoneProducerBuilding_eventSetRewardClaimed_Parms*)Obj)->IsClaimed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::NewProp_IsClaimed = { "IsClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StoneProducerBuilding_eventSetRewardClaimed_Parms), &Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::NewProp_IsClaimed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::NewProp_IsClaimed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoneProducerBuilding, nullptr, "SetRewardClaimed", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::StoneProducerBuilding_eventSetRewardClaimed_Parms), Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics
	{
		struct StoneProducerBuilding_eventStartWork_Parms
		{
			float LoopDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::NewProp_LoopDuration = { "LoopDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StoneProducerBuilding_eventStartWork_Parms, LoopDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::NewProp_LoopDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStoneProducerBuilding, nullptr, "StartWork", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::StoneProducerBuilding_eventStartWork_Parms), Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStoneProducerBuilding_StartWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStoneProducerBuilding_StartWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStoneProducerBuilding);
	UClass* Z_Construct_UClass_AStoneProducerBuilding_NoRegister()
	{
		return AStoneProducerBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AStoneProducerBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClaimWidget;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HeldResources_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeldResources_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeldResources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldResources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HeldResources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStoneProducerBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStoneProducerBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStoneProducerBuilding_CheckRequiredState, "CheckRequiredState" }, // 2302208063
		{ &Z_Construct_UFunction_AStoneProducerBuilding_ManageClaims, "ManageClaims" }, // 3008058529
		{ &Z_Construct_UFunction_AStoneProducerBuilding_SetRewardClaimed, "SetRewardClaimed" }, // 3258182027
		{ &Z_Construct_UFunction_AStoneProducerBuilding_StartWork, "StartWork" }, // 2159044318
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoneProducerBuilding_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StoneProducerBuilding.h" },
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_ClaimWidget_MetaData[] = {
		{ "Category", "StoneProducerBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_ClaimWidget = { "ClaimWidget", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStoneProducerBuilding, ClaimWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_ClaimWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_ClaimWidget_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_ValueProp = { "HeldResources", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_Key_KeyProp = { "HeldResources_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_MetaData[] = {
		{ "Category", "StoneProducerBuilding" },
		{ "ModuleRelativePath", "StoneProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources = { "HeldResources", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStoneProducerBuilding, HeldResources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_MetaData)) }; // 3614723126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStoneProducerBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_ClaimWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoneProducerBuilding_Statics::NewProp_HeldResources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStoneProducerBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStoneProducerBuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStoneProducerBuilding_Statics::ClassParams = {
		&AStoneProducerBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStoneProducerBuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStoneProducerBuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStoneProducerBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStoneProducerBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStoneProducerBuilding()
	{
		if (!Z_Registration_Info_UClass_AStoneProducerBuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStoneProducerBuilding.OuterSingleton, Z_Construct_UClass_AStoneProducerBuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStoneProducerBuilding.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<AStoneProducerBuilding>()
	{
		return AStoneProducerBuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStoneProducerBuilding);
	AStoneProducerBuilding::~AStoneProducerBuilding() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_StoneProducerBuilding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_StoneProducerBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStoneProducerBuilding, AStoneProducerBuilding::StaticClass, TEXT("AStoneProducerBuilding"), &Z_Registration_Info_UClass_AStoneProducerBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStoneProducerBuilding), 2001727957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_StoneProducerBuilding_h_131789186(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_StoneProducerBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_StoneProducerBuilding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
