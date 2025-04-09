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
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DynamicRaceSystem();
// End Cross Module References
	void UDRS_Reciever::StaticRegisterNativesUDRS_Reciever()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDRS_Reciever);
	UClass* Z_Construct_UClass_UDRS_Reciever_NoRegister()
	{
		return UDRS_Reciever::StaticClass();
	}
	struct Z_Construct_UClass_UDRS_Reciever_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDRS_Reciever_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicRaceSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DRS_Reciever.h" },
		{ "ModuleRelativePath", "Public/DRS_Reciever.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDRS_Reciever_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDRS_Reciever>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDRS_Reciever_Statics::ClassParams = {
		&UDRS_Reciever::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams), Z_Construct_UClass_UDRS_Reciever_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_UDRS_Reciever, UDRS_Reciever::StaticClass, TEXT("UDRS_Reciever"), &Z_Registration_Info_UClass_UDRS_Reciever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDRS_Reciever), 1329812512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_193490412(TEXT("/Script/DynamicRaceSystem"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DynamicRaceSystem_Source_DynamicRaceSystem_Public_DRS_Reciever_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
