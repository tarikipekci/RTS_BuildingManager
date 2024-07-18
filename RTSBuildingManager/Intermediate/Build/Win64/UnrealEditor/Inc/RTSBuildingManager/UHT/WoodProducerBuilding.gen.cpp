// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/WoodProducerBuilding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWoodProducerBuilding() {}
// Cross Module References
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AWoodProducerBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_AWoodProducerBuilding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	DEFINE_FUNCTION(AWoodProducerBuilding::execStartWork)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LoopDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWork(Z_Param_LoopDuration);
		P_NATIVE_END;
	}
	void AWoodProducerBuilding::StaticRegisterNativesAWoodProducerBuilding()
	{
		UClass* Class = AWoodProducerBuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartWork", &AWoodProducerBuilding::execStartWork },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics
	{
		struct WoodProducerBuilding_eventStartWork_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::NewProp_LoopDuration = { "LoopDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WoodProducerBuilding_eventStartWork_Parms, LoopDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::NewProp_LoopDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WoodProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWoodProducerBuilding, nullptr, "StartWork", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::WoodProducerBuilding_eventStartWork_Parms), Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWoodProducerBuilding_StartWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWoodProducerBuilding_StartWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWoodProducerBuilding);
	UClass* Z_Construct_UClass_AWoodProducerBuilding_NoRegister()
	{
		return AWoodProducerBuilding::StaticClass();
	}
	struct Z_Construct_UClass_AWoodProducerBuilding_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWoodProducerBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseBuilding,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWoodProducerBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWoodProducerBuilding_StartWork, "StartWork" }, // 2510133918
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodProducerBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WoodProducerBuilding.h" },
		{ "ModuleRelativePath", "WoodProducerBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWoodProducerBuilding_Statics::NewProp_ClaimWidget_MetaData[] = {
		{ "Category", "WoodProducerBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WoodProducerBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWoodProducerBuilding_Statics::NewProp_ClaimWidget = { "ClaimWidget", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWoodProducerBuilding, ClaimWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWoodProducerBuilding_Statics::NewProp_ClaimWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodProducerBuilding_Statics::NewProp_ClaimWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWoodProducerBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWoodProducerBuilding_Statics::NewProp_ClaimWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWoodProducerBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWoodProducerBuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWoodProducerBuilding_Statics::ClassParams = {
		&AWoodProducerBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWoodProducerBuilding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWoodProducerBuilding_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWoodProducerBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWoodProducerBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWoodProducerBuilding()
	{
		if (!Z_Registration_Info_UClass_AWoodProducerBuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWoodProducerBuilding.OuterSingleton, Z_Construct_UClass_AWoodProducerBuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWoodProducerBuilding.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<AWoodProducerBuilding>()
	{
		return AWoodProducerBuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWoodProducerBuilding);
	AWoodProducerBuilding::~AWoodProducerBuilding() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_WoodProducerBuilding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_WoodProducerBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWoodProducerBuilding, AWoodProducerBuilding::StaticClass, TEXT("AWoodProducerBuilding"), &Z_Registration_Info_UClass_AWoodProducerBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWoodProducerBuilding), 79141229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_WoodProducerBuilding_h_1749022400(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_WoodProducerBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_WoodProducerBuilding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
