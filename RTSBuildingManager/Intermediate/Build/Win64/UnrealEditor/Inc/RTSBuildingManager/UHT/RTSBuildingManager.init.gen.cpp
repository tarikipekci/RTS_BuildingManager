// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBuildingManager_init() {}
	RTSBUILDINGMANAGER_API UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature();
	RTSBUILDINGMANAGER_API UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RTSBuildingManager;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RTSBuildingManager()
	{
		if (!Z_Registration_Info_UPackage__Script_RTSBuildingManager.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RTSBuildingManager_ResourcesUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RTSBuildingManager",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x61B394C1,
				0x841C317A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RTSBuildingManager.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RTSBuildingManager.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RTSBuildingManager(Z_Construct_UPackage__Script_RTSBuildingManager, TEXT("/Script/RTSBuildingManager"), Z_Registration_Info_UPackage__Script_RTSBuildingManager, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x61B394C1, 0x841C317A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
