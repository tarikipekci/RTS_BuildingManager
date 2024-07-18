// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/BuildingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding_NoRegister();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABuildingManager();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABuildingManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	DEFINE_FUNCTION(ABuildingManager::execSetBuildingLocationAtMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuildingLocationAtMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingManager::execConsumeResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsumeResource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingManager::execSpawnBuilding)
	{
		P_GET_OBJECT(UClass,Z_Param_Building);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBuilding(Z_Param_Building);
		P_NATIVE_END;
	}
	void ABuildingManager::StaticRegisterNativesABuildingManager()
	{
		UClass* Class = ABuildingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConsumeResource", &ABuildingManager::execConsumeResource },
			{ "SetBuildingLocationAtMouse", &ABuildingManager::execSetBuildingLocationAtMouse },
			{ "SpawnBuilding", &ABuildingManager::execSpawnBuilding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildingManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingManager, nullptr, "ConsumeResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingManager_ConsumeResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingManager_ConsumeResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildingManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingManager, nullptr, "SetBuildingLocationAtMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics
	{
		struct BuildingManager_eventSpawnBuilding_Parms
		{
			TSubclassOf<ABaseBuilding>  Building;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Building;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingManager_eventSpawnBuilding_Parms, Building), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseBuilding_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::NewProp_Building,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuildingManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingManager, nullptr, "SpawnBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::BuildingManager_eventSpawnBuilding_Parms), Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingManager_SpawnBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingManager_SpawnBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingManager);
	UClass* Z_Construct_UClass_ABuildingManager_NoRegister()
	{
		return ABuildingManager::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingManager_ConsumeResource, "ConsumeResource" }, // 1115690476
		{ &Z_Construct_UFunction_ABuildingManager_SetBuildingLocationAtMouse, "SetBuildingLocationAtMouse" }, // 3260867991
		{ &Z_Construct_UFunction_ABuildingManager_SpawnBuilding, "SpawnBuilding" }, // 1513249488
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildingManager.h" },
		{ "ModuleRelativePath", "BuildingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingManager_Statics::ClassParams = {
		&ABuildingManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingManager()
	{
		if (!Z_Registration_Info_UClass_ABuildingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingManager.OuterSingleton, Z_Construct_UClass_ABuildingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingManager.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<ABuildingManager>()
	{
		return ABuildingManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingManager);
	ABuildingManager::~ABuildingManager() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingManager, ABuildingManager::StaticClass, TEXT("ABuildingManager"), &Z_Registration_Info_UClass_ABuildingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingManager), 1676947146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_4268351564(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BuildingManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
