// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRaceSystem/Public/DRS_Processor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDRS_Processor() {}
// Cross Module References
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Processor();
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Processor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DynamicRaceSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDRS_Processor::execUpdateAdaptiveComps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAdaptiveComps();
		P_NATIVE_END;
	}
	void UDRS_Processor::StaticRegisterNativesUDRS_Processor()
	{
		UClass* Class = UDRS_Processor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAdaptiveComps", &UDRS_Processor::execUpdateAdaptiveComps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics::Function_MetaDataParams[] = {
		{ "Category", "DRS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Calls for the ACs to be updated, if they need to be\n" },
#endif
		{ "ModuleRelativePath", "Public/DRS_Processor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls for the ACs to be updated, if they need to be" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDRS_Processor, nullptr, "UpdateAdaptiveComps", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDRS_Processor);
	UClass* Z_Construct_UClass_UDRS_Processor_NoRegister()
	{
		return UDRS_Processor::StaticClass();
	}
	struct Z_Construct_UClass_UDRS_Processor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RaceLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDRS_Processor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicRaceSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDRS_Processor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDRS_Processor_UpdateAdaptiveComps, "UpdateAdaptiveComps" }, // 2134826459
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Processor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DRS_Processor.h" },
		{ "ModuleRelativePath", "Public/DRS_Processor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Processor_Statics::NewProp_RaceLevel_MetaData[] = {
		{ "Category", "DRS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Overall 'Level' of the Racers (1->3)\n" },
#endif
		{ "ModuleRelativePath", "Public/DRS_Processor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overall 'Level' of the Racers (1->3)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDRS_Processor_Statics::NewProp_RaceLevel = { "RaceLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDRS_Processor, RaceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::NewProp_RaceLevel_MetaData), Z_Construct_UClass_UDRS_Processor_Statics::NewProp_RaceLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDRS_Processor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDRS_Processor_Statics::NewProp_RaceLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDRS_Processor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDRS_Processor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDRS_Processor_Statics::ClassParams = {
		&UDRS_Processor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDRS_Processor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::Class_MetaDataParams), Z_Construct_UClass_UDRS_Processor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Processor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDRS_Processor()
	{
		if (!Z_Registration_Info_UClass_UDRS_Processor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDRS_Processor.OuterSingleton, Z_Construct_UClass_UDRS_Processor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDRS_Processor.OuterSingleton;
	}
	template<> DYNAMICRACESYSTEM_API UClass* StaticClass<UDRS_Processor>()
	{
		return UDRS_Processor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDRS_Processor);
	UDRS_Processor::~UDRS_Processor() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Processor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Processor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDRS_Processor, UDRS_Processor::StaticClass, TEXT("UDRS_Processor"), &Z_Registration_Info_UClass_UDRS_Processor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRS_Processor), 702005270U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Processor_h_1042524912(TEXT("/Script/DynamicRaceSystem"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Processor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Processor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
