// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRaceSystem/Public/DRS_Broadcaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDRS_Broadcaster() {}
// Cross Module References
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Broadcaster();
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Broadcaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DynamicRaceSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDRS_Broadcaster::execGetBroadcaster)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_position);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBroadcaster(Z_Param_Out_position,Z_Param_Out_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDRS_Broadcaster::execSetBroadcaster)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_position);
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBroadcaster(Z_Param_position,Z_Param_speed);
		P_NATIVE_END;
	}
	void UDRS_Broadcaster::StaticRegisterNativesUDRS_Broadcaster()
	{
		UClass* Class = UDRS_Broadcaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBroadcaster", &UDRS_Broadcaster::execGetBroadcaster },
			{ "SetBroadcaster", &UDRS_Broadcaster::execSetBroadcaster },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics
	{
		struct DRS_Broadcaster_eventGetBroadcaster_Parms
		{
			int32 position;
			int32 speed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_position;
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventGetBroadcaster_Parms, position), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventGetBroadcaster_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "GetBroadcaster", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::DRS_Broadcaster_eventGetBroadcaster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::DRS_Broadcaster_eventGetBroadcaster_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics
	{
		struct DRS_Broadcaster_eventSetBroadcaster_Parms
		{
			int32 position;
			int32 speed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_position;
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventSetBroadcaster_Parms, position), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventSetBroadcaster_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get/Set Broadcaster Values\n" },
#endif
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get/Set Broadcaster Values" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "SetBroadcaster", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::DRS_Broadcaster_eventSetBroadcaster_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::DRS_Broadcaster_eventSetBroadcaster_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDRS_Broadcaster);
	UClass* Z_Construct_UClass_UDRS_Broadcaster_NoRegister()
	{
		return UDRS_Broadcaster::StaticClass();
	}
	struct Z_Construct_UClass_UDRS_Broadcaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDRS_Broadcaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicRaceSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Broadcaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDRS_Broadcaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDRS_Broadcaster_GetBroadcaster, "GetBroadcaster" }, // 4023646585
		{ &Z_Construct_UFunction_UDRS_Broadcaster_SetBroadcaster, "SetBroadcaster" }, // 3323414421
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Broadcaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Broadcaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DRS_Broadcaster.h" },
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDRS_Broadcaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDRS_Broadcaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDRS_Broadcaster_Statics::ClassParams = {
		&UDRS_Broadcaster::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Broadcaster_Statics::Class_MetaDataParams), Z_Construct_UClass_UDRS_Broadcaster_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UDRS_Broadcaster()
	{
		if (!Z_Registration_Info_UClass_UDRS_Broadcaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDRS_Broadcaster.OuterSingleton, Z_Construct_UClass_UDRS_Broadcaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDRS_Broadcaster.OuterSingleton;
	}
	template<> DYNAMICRACESYSTEM_API UClass* StaticClass<UDRS_Broadcaster>()
	{
		return UDRS_Broadcaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDRS_Broadcaster);
	UDRS_Broadcaster::~UDRS_Broadcaster() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDRS_Broadcaster, UDRS_Broadcaster::StaticClass, TEXT("UDRS_Broadcaster"), &Z_Registration_Info_UClass_UDRS_Broadcaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRS_Broadcaster), 3895335418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_3844234378(TEXT("/Script/DynamicRaceSystem"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
