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
	DEFINE_FUNCTION(UDRS_Broadcaster::execGetPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPosition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDRS_Broadcaster::execGetSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDRS_Broadcaster::execSetPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDRS_Broadcaster::execSetSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	void UDRS_Broadcaster::StaticRegisterNativesUDRS_Broadcaster()
	{
		UClass* Class = UDRS_Broadcaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPosition", &UDRS_Broadcaster::execGetPosition },
			{ "GetSpeed", &UDRS_Broadcaster::execGetSpeed },
			{ "SetPosition", &UDRS_Broadcaster::execSetPosition },
			{ "SetSpeed", &UDRS_Broadcaster::execSetSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics
	{
		struct DRS_Broadcaster_eventGetPosition_Parms
		{
			int32 position;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventGetPosition_Parms, position), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "GetPosition", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::DRS_Broadcaster_eventGetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::DRS_Broadcaster_eventGetPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics
	{
		struct DRS_Broadcaster_eventGetSpeed_Parms
		{
			int32 speed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventGetSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::DRS_Broadcaster_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::DRS_Broadcaster_eventGetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics
	{
		struct DRS_Broadcaster_eventSetPosition_Parms
		{
			int32 position;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventSetPosition_Parms, position), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
		{ "ModuleRelativePath", "Public/DRS_Broadcaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "SetPosition", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::DRS_Broadcaster_eventSetPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::DRS_Broadcaster_eventSetPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics
	{
		struct DRS_Broadcaster_eventSetSpeed_Parms
		{
			int32 speed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DRS_Broadcaster_eventSetSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::Function_MetaDataParams[] = {
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Broadcaster, nullptr, "SetSpeed", nullptr, nullptr, Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::DRS_Broadcaster_eventSetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::DRS_Broadcaster_eventSetSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UDRS_Broadcaster_GetPosition, "GetPosition" }, // 3206255275
		{ &Z_Construct_UFunction_UDRS_Broadcaster_GetSpeed, "GetSpeed" }, // 2744877922
		{ &Z_Construct_UFunction_UDRS_Broadcaster_SetPosition, "SetPosition" }, // 579823127
		{ &Z_Construct_UFunction_UDRS_Broadcaster_SetSpeed, "SetSpeed" }, // 1970958202
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
		{ Z_Construct_UClass_UDRS_Broadcaster, UDRS_Broadcaster::StaticClass, TEXT("UDRS_Broadcaster"), &Z_Registration_Info_UClass_UDRS_Broadcaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRS_Broadcaster), 58513352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_455793646(TEXT("/Script/DynamicRaceSystem"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Broadcaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
