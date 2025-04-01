// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSO_Project/GSO_ProjectWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSO_ProjectWheelFront() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectWheelFront();
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectWheelFront_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSO_Project();
// End Cross Module References
	void UGSO_ProjectWheelFront::StaticRegisterNativesUGSO_ProjectWheelFront()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSO_ProjectWheelFront);
	UClass* Z_Construct_UClass_UGSO_ProjectWheelFront_NoRegister()
	{
		return UGSO_ProjectWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UGSO_ProjectWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_GSO_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "GSO_ProjectWheelFront.h" },
		{ "ModuleRelativePath", "GSO_ProjectWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSO_ProjectWheelFront>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::ClassParams = {
		&UGSO_ProjectWheelFront::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSO_ProjectWheelFront()
	{
		if (!Z_Registration_Info_UClass_UGSO_ProjectWheelFront.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSO_ProjectWheelFront.OuterSingleton, Z_Construct_UClass_UGSO_ProjectWheelFront_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSO_ProjectWheelFront.OuterSingleton;
	}
	template<> GSO_PROJECT_API UClass* StaticClass<UGSO_ProjectWheelFront>()
	{
		return UGSO_ProjectWheelFront::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSO_ProjectWheelFront);
	UGSO_ProjectWheelFront::~UGSO_ProjectWheelFront() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelFront_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelFront_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSO_ProjectWheelFront, UGSO_ProjectWheelFront::StaticClass, TEXT("UGSO_ProjectWheelFront"), &Z_Registration_Info_UClass_UGSO_ProjectWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSO_ProjectWheelFront), 3244457877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelFront_h_3437960317(TEXT("/Script/GSO_Project"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectWheelFront_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
