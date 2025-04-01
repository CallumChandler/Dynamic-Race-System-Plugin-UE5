// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSO_Project/GSO_ProjectWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSO_ProjectWheelRear() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectWheelRear();
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectWheelRear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSO_Project();
// End Cross Module References
	void UGSO_ProjectWheelRear::StaticRegisterNativesUGSO_ProjectWheelRear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSO_ProjectWheelRear);
	UClass* Z_Construct_UClass_UGSO_ProjectWheelRear_NoRegister()
	{
		return UGSO_ProjectWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UGSO_ProjectWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GSO_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "GSO_ProjectWheelRear.h" },
		{ "ModuleRelativePath", "GSO_ProjectWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSO_ProjectWheelRear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::ClassParams = {
		&UGSO_ProjectWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSO_ProjectWheelRear()
	{
		if (!Z_Registration_Info_UClass_UGSO_ProjectWheelRear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSO_ProjectWheelRear.OuterSingleton, Z_Construct_UClass_UGSO_ProjectWheelRear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSO_ProjectWheelRear.OuterSingleton;
	}
	template<> GSO_PROJECT_API UClass* StaticClass<UGSO_ProjectWheelRear>()
	{
		return UGSO_ProjectWheelRear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSO_ProjectWheelRear);
	UGSO_ProjectWheelRear::~UGSO_ProjectWheelRear() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelRear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelRear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSO_ProjectWheelRear, UGSO_ProjectWheelRear::StaticClass, TEXT("UGSO_ProjectWheelRear"), &Z_Registration_Info_UClass_UGSO_ProjectWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSO_ProjectWheelRear), 399261998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelRear_h_3724954947(TEXT("/Script/GSO_Project"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelRear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
