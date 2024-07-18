// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSBuildingManager/BaseBuilding.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseBuilding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_ABaseBuilding_NoRegister();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingInterface_NoRegister();
	RTSBUILDINGMANAGER_API UClass* Z_Construct_UClass_UBuildingRequirements_NoRegister();
	RTSBUILDINGMANAGER_API UEnum* Z_Construct_UEnum_RTSBuildingManager_EResourceType();
	RTSBUILDINGMANAGER_API UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSBuildingManager();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RTSBuildingManager, nullptr, "ResourceClaimed__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FResourceClaimed_DelegateWrapper(const FMulticastScriptDelegate& ResourceClaimed)
{
	ResourceClaimed.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ABaseBuilding::execBroadcastDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseBuilding::execIsThereEnoughResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsThereEnoughResource();
		P_NATIVE_END;
	}
	static FName NAME_ABaseBuilding_StartBuilding = FName(TEXT("StartBuilding"));
	void ABaseBuilding::StartBuilding()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseBuilding_StartBuilding),NULL);
	}
	static FName NAME_ABaseBuilding_StartWorking = FName(TEXT("StartWorking"));
	void ABaseBuilding::StartWorking()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseBuilding_StartWorking),NULL);
	}
	void ABaseBuilding::StaticRegisterNativesABaseBuilding()
	{
		UClass* Class = ABaseBuilding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastDelegates", &ABaseBuilding::execBroadcastDelegates },
			{ "IsThereEnoughResource", &ABaseBuilding::execIsThereEnoughResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "BroadcastDelegates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics
	{
		struct BaseBuilding_eventIsThereEnoughResource_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseBuilding_eventIsThereEnoughResource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseBuilding_eventIsThereEnoughResource_Parms), &Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "IsThereEnoughResource", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::BaseBuilding_eventIsThereEnoughResource_Parms), Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "StartBuilding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseBuilding_StartBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_StartBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseBuilding, nullptr, "StartWorking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseBuilding_StartWorking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseBuilding_StartWorking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseBuilding);
	UClass* Z_Construct_UClass_ABaseBuilding_NoRegister()
	{
		return ABaseBuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABaseBuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkingTimerHandle;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Rewards_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rewards_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rewards_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Rewards;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RewardRequirements_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RewardRequirements_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RewardRequirements_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RewardRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RewardRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requirements_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Requirements;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StackedResources_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackedResources_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackedResources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackedResources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackedResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceClaimed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResourceClaimed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseBuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSBuildingManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseBuilding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseBuilding_BroadcastDelegates, "BroadcastDelegates" }, // 290590252
		{ &Z_Construct_UFunction_ABaseBuilding_IsThereEnoughResource, "IsThereEnoughResource" }, // 2506409597
		{ &Z_Construct_UFunction_ABaseBuilding_StartBuilding, "StartBuilding" }, // 4189911292
		{ &Z_Construct_UFunction_ABaseBuilding_StartWorking, "StartWorking" }, // 3406396023
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseBuilding.h" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_BuildingRoot_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_BuildingRoot = { "BuildingRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, BuildingRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_BuildingRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_BuildingRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WidgetComp_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WidgetComp = { "WidgetComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, WidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WidgetComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WidgetComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WorkingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WorkingTimerHandle = { "WorkingTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, WorkingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WorkingTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WorkingTimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_ValueProp = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_Key_KeyProp = { "Rewards_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, Rewards), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_MetaData)) }; // 3614723126
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_ValueProp = { "RewardRequirements", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_Key_KeyProp = { "RewardRequirements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements = { "RewardRequirements", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, RewardRequirements), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_MetaData)) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Requirements_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Requirements = { "Requirements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, Requirements), Z_Construct_UClass_UBuildingRequirements_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Requirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Requirements_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_ValueProp = { "StackedResources", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_Key_KeyProp = { "StackedResources_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_RTSBuildingManager_EResourceType, METADATA_PARAMS(nullptr, 0) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources = { "StackedResources", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, StackedResources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_MetaData)) }; // 3614723126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseBuilding_Statics::NewProp_ResourceClaimed_MetaData[] = {
		{ "Category", "BaseBuilding" },
		{ "ModuleRelativePath", "BaseBuilding.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABaseBuilding_Statics::NewProp_ResourceClaimed = { "ResourceClaimed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseBuilding, ResourceClaimed), Z_Construct_UDelegateFunction_RTSBuildingManager_ResourceClaimed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_ResourceClaimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::NewProp_ResourceClaimed_MetaData)) }; // 995168262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_BuildingRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WidgetComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_WorkingTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Rewards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_RewardRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_Requirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_StackedResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseBuilding_Statics::NewProp_ResourceClaimed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseBuilding_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuildingInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseBuilding, IBuildingInterface), false },  // 3108289153
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseBuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseBuilding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseBuilding_Statics::ClassParams = {
		&ABaseBuilding::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseBuilding_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseBuilding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseBuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseBuilding()
	{
		if (!Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton, Z_Construct_UClass_ABaseBuilding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseBuilding.OuterSingleton;
	}
	template<> RTSBUILDINGMANAGER_API UClass* StaticClass<ABaseBuilding>()
	{
		return ABaseBuilding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseBuilding);
	ABaseBuilding::~ABaseBuilding() {}
	struct Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BaseBuilding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BaseBuilding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseBuilding, ABaseBuilding::StaticClass, TEXT("ABaseBuilding"), &Z_Registration_Info_UClass_ABaseBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseBuilding), 3759683433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BaseBuilding_h_2904708870(TEXT("/Script/RTSBuildingManager"),
		Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BaseBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTS_BuildingManager_RTSBuildingManager_Source_RTSBuildingManager_BaseBuilding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
