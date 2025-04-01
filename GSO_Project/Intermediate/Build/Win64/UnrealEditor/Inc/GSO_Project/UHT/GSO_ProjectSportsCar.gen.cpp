// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSO_Project/GSO_ProjectSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSO_ProjectSportsCar() {}
// Cross Module References
	GSO_PROJECT_API UClass* Z_Construct_UClass_AGSO_ProjectPawn();
	GSO_PROJECT_API UClass* Z_Construct_UClass_AGSO_ProjectSportsCar();
	GSO_PROJECT_API UClass* Z_Construct_UClass_AGSO_ProjectSportsCar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSO_Project();
// End Cross Module References
	void AGSO_ProjectSportsCar::StaticRegisterNativesAGSO_ProjectSportsCar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSO_ProjectSportsCar);
	UClass* Z_Construct_UClass_AGSO_ProjectSportsCar_NoRegister()
	{
		return AGSO_ProjectSportsCar::StaticClass();
	}
	struct Z_Construct_UClass_AGSO_ProjectSportsCar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGSO_ProjectPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GSO_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GSO_ProjectSportsCar.h" },
		{ "ModuleRelativePath", "GSO_ProjectSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSO_ProjectSportsCar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::ClassParams = {
		&AGSO_ProjectSportsCar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGSO_ProjectSportsCar()
	{
		if (!Z_Registration_Info_UClass_AGSO_ProjectSportsCar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSO_ProjectSportsCar.OuterSingleton, Z_Construct_UClass_AGSO_ProjectSportsCar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSO_ProjectSportsCar.OuterSingleton;
	}
	template<> GSO_PROJECT_API UClass* StaticClass<AGSO_ProjectSportsCar>()
	{
		return AGSO_ProjectSportsCar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSO_ProjectSportsCar);
	AGSO_ProjectSportsCar::~AGSO_ProjectSportsCar() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectSportsCar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectSportsCar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSO_ProjectSportsCar, AGSO_ProjectSportsCar::StaticClass, TEXT("AGSO_ProjectSportsCar"), &Z_Registration_Info_UClass_AGSO_ProjectSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSO_ProjectSportsCar), 2626860962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectSportsCar_h_2897490682(TEXT("/Script/GSO_Project"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectSportsCar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
