// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/GoldProducerBuilding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldProducerBuilding() {}
// Cross Module References
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AGoldProducerBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AGoldProducerBuilding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	DEFINE_FUNCTION(AGoldProducerBuilding::execStartWork)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWork(Z_Param_LoopDuration);
		P_NATIVE_END;
	}
	void AGoldProducerBuilding::StaticRegisterNativesAGoldProducerBuilding()
	{
		UClass* Class = AGoldProducerBuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartWork", &AGoldProducerBuilding::execStartWork },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics
	{
		struct GoldProducerBuilding_eventStartWork_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::NewProp_LoopDuration = { "LoopDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoldProducerBuilding_eventStartWork_Parms, LoopDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::NewProp_LoopDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoldProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoldProducerBuilding, nullptr, "StartWork", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::GoldProducerBuilding_eventStartWork_Parms), Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoldProducerBuilding_StartWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoldProducerBuilding_StartWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoldProducerBuilding);
	UClass* Z_Construct_UClass_AGoldProducerBuilding_NoRegister()
	{
		return AGoldProducerBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AGoldProducerBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoldProducerBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoldProducerBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoldProducerBuilding_StartWork, "StartWork" }, // 2016318514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoldProducerBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoldProducerBuilding.h" },
		{ "ModuleRelativePath", "GoldProducerBuilding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoldProducerBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoldProducerBuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoldProducerBuilding_Statics::ClassParams = {
		&AGoldProducerBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoldProducerBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoldProducerBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoldProducerBuilding()
	{
		if (!Z_Registration_Info_UClass_AGoldProducerBuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoldProducerBuilding.OuterSingleton, Z_Construct_UClass_AGoldProducerBuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoldProducerBuilding.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<AGoldProducerBuilding>()
	{
		return AGoldProducerBuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoldProducerBuilding);
	AGoldProducerBuilding::~AGoldProducerBuilding() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_GoldProducerBuilding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_GoldProducerBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoldProducerBuilding, AGoldProducerBuilding::StaticClass, TEXT("AGoldProducerBuilding"), &Z_Registration_Info_UClass_AGoldProducerBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoldProducerBuilding), 1783371215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_GoldProducerBuilding_h_1759232398(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_GoldProducerBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_GoldProducerBuilding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
