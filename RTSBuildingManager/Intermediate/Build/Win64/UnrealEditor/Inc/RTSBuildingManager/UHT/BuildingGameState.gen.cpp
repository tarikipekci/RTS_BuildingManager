// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/BuildingGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABuildingGameState();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABuildingGameState_NoRegister();
	RTSBUILDINGMANAGER_API UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType();
	RTSBUILDINGMANAGER_API UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "BuildingGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RTSBuildingManager, nullptr, "ResourcesUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResourcesUpdated_DelegateWrapper(const FMulticastScriptDelegate& ResourcesUpdated)
{
	ResourcesUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ABuildingGameState::execUpdateCurrentBalance)
	{
		P_GET_TMAP_REF(EResourceType,int32,Z_Param_Out_StackedBalance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentBalance(Z_Param_Out_StackedBalance);
		P_NATIVE_END;
	}
	void ABuildingGameState::StaticRegisterNativesABuildingGameState()
	{
		UClass* Class = ABuildingGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCurrentBalance", &ABuildingGameState::execUpdateCurrentBalance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics
	{
		struct BuildingGameState_eventUpdateCurrentBalance_Parms
		{
			TMap<EResourceType,int32> StackedBalance;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StackedBalance_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackedBalance_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackedBalance_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackedBalance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_ValueProp = { "StackedBalance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_Key_KeyProp = { "StackedBalance_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance = { "StackedBalance", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingGameState_eventUpdateCurrentBalance_Parms, StackedBalance), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3614723126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::NewProp_StackedBalance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildingGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingGameState, nullptr, "UpdateCurrentBalance", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::BuildingGameState_eventUpdateCurrentBalance_Parms), Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingGameState);
	UClass* Z_Construct_UClass_ABuildingGameState_NoRegister()
	{
		return ABuildingGameState::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentBalance_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentBalance_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentBalance_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBalance_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentBalance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourcesUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResourcesUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingGameState_UpdateCurrentBalance, "UpdateCurrentBalance" }, // 3963544371
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BuildingGameState.h" },
		{ "ModuleRelativePath", "BuildingGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_ValueProp = { "CurrentBalance", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_Key_KeyProp = { "CurrentBalance_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_MetaData[] = {
		{ "Category", "BuildingGameState" },
		{ "ModuleRelativePath", "BuildingGameState.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance = { "CurrentBalance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingGameState, CurrentBalance), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_MetaData)) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingGameState_Statics::NewProp_ResourcesUpdated_MetaData[] = {
		{ "ModuleRelativePath", "BuildingGameState.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuildingGameState_Statics::NewProp_ResourcesUpdated = { "ResourcesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingGameState, ResourcesUpdated), Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABuildingGameState_Statics::NewProp_ResourcesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingGameState_Statics::NewProp_ResourcesUpdated_MetaData)) }; // 1139730718
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingGameState_Statics::NewProp_CurrentBalance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingGameState_Statics::NewProp_ResourcesUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingGameState_Statics::ClassParams = {
		&ABuildingGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingGameState()
	{
		if (!Z_Registration_Info_UClass_ABuildingGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingGameState.OuterSingleton, Z_Construct_UClass_ABuildingGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingGameState.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<ABuildingGameState>()
	{
		return ABuildingGameState::StaticClass();
	}
	ABuildingGameState::ABuildingGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingGameState);
	ABuildingGameState::~ABuildingGameState() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingGameState, ABuildingGameState::StaticClass, TEXT("ABuildingGameState"), &Z_Registration_Info_UClass_ABuildingGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingGameState), 124155655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_267104403(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
