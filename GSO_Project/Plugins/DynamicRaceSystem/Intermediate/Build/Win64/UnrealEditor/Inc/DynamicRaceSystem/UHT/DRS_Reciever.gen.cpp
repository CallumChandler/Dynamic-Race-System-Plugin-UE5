// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRaceSystem/Public/DRS_Reciever.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDRS_Reciever() {}
// Cross Module References
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Reciever();
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Reciever_NoRegister();
	DYNAMICRACESYSTEM_API UFunction* Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DynamicRaceSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics
	{
		struct _Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms
		{
			int32 RaceLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RaceLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::NewProp_RaceLevel = { "RaceLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms, RaceLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::NewProp_RaceLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DRS_Reciever.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DynamicRaceSystem, nullptr, "ChangeRaceSpeed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::_Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::_Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FChangeRaceSpeed_DelegateWrapper(const FMulticastScriptDelegate& ChangeRaceSpeed, int32 RaceLevel)
{
	struct _Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms
	{
		int32 RaceLevel;
	};
	_Script_DynamicRaceSystem_eventChangeRaceSpeed_Parms Parms;
	Parms.RaceLevel=RaceLevel;
	ChangeRaceSpeed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDRS_Reciever::execOnRaceSpeedChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRaceLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRaceSpeedChange(Z_Param_NewRaceLevel);
		P_NATIVE_END;
	}
	void UDRS_Reciever::StaticRegisterNativesUDRS_Reciever()
	{
		UClass* Class = UDRS_Reciever::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRaceSpeedChange", &UDRS_Reciever::execOnRaceSpeedChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics
	{
		struct DRS_Reciever_eventOnRaceSpeedChange_Parms
		{
			int32 NewRaceLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRaceLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::NewProp_NewRaceLevel = { "NewRaceLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Reciever_eventOnRaceSpeedChange_Parms, NewRaceLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::NewProp_NewRaceLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Event that runs when RaceLevel updates\n" },
#endif
		{ "ModuleRelativePath", "Public/DRS_Reciever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that runs when RaceLevel updates" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Reciever, nullptr, "OnRaceSpeedChange", nullptr, nullptr, Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::DRS_Reciever_eventOnRaceSpeedChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::DRS_Reciever_eventOnRaceSpeedChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDRS_Reciever);
	UClass* Z_Construct_UClass_UDRS_Reciever_NoRegister()
	{
		return UDRS_Reciever::StaticClass();
	}
	struct Z_Construct_UClass_UDRS_Reciever_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpeedChangeDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpeedChangeDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDRS_Reciever_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicRaceSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDRS_Reciever_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDRS_Reciever_OnRaceSpeedChange, "OnRaceSpeedChange" }, // 223424552
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DRS_Reciever.h" },
		{ "ModuleRelativePath", "Public/DRS_Reciever.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Reciever_Statics::NewProp_OnSpeedChangeDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Updates Recievers\n" },
#endif
		{ "ModuleRelativePath", "Public/DRS_Reciever.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Recievers" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDRS_Reciever_Statics::NewProp_OnSpeedChangeDelegate = { "OnSpeedChangeDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDRS_Reciever, OnSpeedChangeDelegate), Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::NewProp_OnSpeedChangeDelegate_MetaData), Z_Construct_UClass_UDRS_Reciever_Statics::NewProp_OnSpeedChangeDelegate_MetaData) }; // 722714880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDRS_Reciever_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDRS_Reciever_Statics::NewProp_OnSpeedChangeDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDRS_Reciever_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDRS_Reciever>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDRS_Reciever_Statics::ClassParams = {
		&UDRS_Reciever::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDRS_Reciever_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams), Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDRS_Reciever()
	{
		if (!Z_Registration_Info_UClass_UDRS_Reciever.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDRS_Reciever.OuterSingleton, Z_Construct_UClass_UDRS_Reciever_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDRS_Reciever.OuterSingleton;
	}
	template<> DYNAMICRACESYSTEM_API UClass* StaticClass<UDRS_Reciever>()
	{
		return UDRS_Reciever::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDRS_Reciever);
	UDRS_Reciever::~UDRS_Reciever() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDRS_Reciever, UDRS_Reciever::StaticClass, TEXT("UDRS_Reciever"), &Z_Registration_Info_UClass_UDRS_Reciever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRS_Reciever), 3746530610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_3944835824(TEXT("/Script/DynamicRaceSystem"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
