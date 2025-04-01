// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSO_Project/GSO_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSO_ProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GSO_PROJECT_API UClass* Z_Construct_UClass_AGSO_ProjectGameMode();
	GSO_PROJECT_API UClass* Z_Construct_UClass_AGSO_ProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GSO_Project();
// End Cross Module References
	void AGSO_ProjectGameMode::StaticRegisterNativesAGSO_ProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSO_ProjectGameMode);
	UClass* Z_Construct_UClass_AGSO_ProjectGameMode_NoRegister()
	{
		return AGSO_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGSO_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSO_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GSO_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSO_ProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSO_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GSO_ProjectGameMode.h" },
		{ "ModuleRelativePath", "GSO_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSO_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSO_ProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSO_ProjectGameMode_Statics::ClassParams = {
		&AGSO_ProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSO_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSO_ProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGSO_ProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AGSO_ProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSO_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AGSO_ProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSO_ProjectGameMode.OuterSingleton;
	}
	template<> GSO_PROJECT_API UClass* StaticClass<AGSO_ProjectGameMode>()
	{
		return AGSO_ProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSO_ProjectGameMode);
	AGSO_ProjectGameMode::~AGSO_ProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSO_ProjectGameMode, AGSO_ProjectGameMode::StaticClass, TEXT("AGSO_ProjectGameMode"), &Z_Registration_Info_UClass_AGSO_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSO_ProjectGameMode), 659556760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectGameMode_h_1692155858(TEXT("/Script/GSO_Project"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
