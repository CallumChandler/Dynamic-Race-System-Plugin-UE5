// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DRS_Test/Public/Prc_Testing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrc_Testing() {}
// Cross Module References
	DRS_TEST_API UClass* Z_Construct_UClass_UPrc_Testing();
	DRS_TEST_API UClass* Z_Construct_UClass_UPrc_Testing_NoRegister();
	DYNAMICRACESYSTEM_API UClass* Z_Construct_UClass_UDRS_Processor();
	UPackage* Z_Construct_UPackage__Script_DRS_Test();
// End Cross Module References
	void UPrc_Testing::StaticRegisterNativesUPrc_Testing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrc_Testing);
	UClass* Z_Construct_UClass_UPrc_Testing_NoRegister()
	{
		return UPrc_Testing::StaticClass();
	}
	struct Z_Construct_UClass_UPrc_Testing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrc_Testing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDRS_Processor,
		(UObject* (*)())Z_Construct_UPackage__Script_DRS_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPrc_Testing_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrc_Testing_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Prc_Testing.h" },
		{ "ModuleRelativePath", "Public/Prc_Testing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrc_Testing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrc_Testing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrc_Testing_Statics::ClassParams = {
		&UPrc_Testing::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPrc_Testing_Statics::Class_MetaDataParams), Z_Construct_UClass_UPrc_Testing_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPrc_Testing()
	{
		if (!Z_Registration_Info_UClass_UPrc_Testing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrc_Testing.OuterSingleton, Z_Construct_UClass_UPrc_Testing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrc_Testing.OuterSingleton;
	}
	template<> DRS_TEST_API UClass* StaticClass<UPrc_Testing>()
	{
		return UPrc_Testing::StaticClass();
	}
	UPrc_Testing::UPrc_Testing() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrc_Testing);
	UPrc_Testing::~UPrc_Testing() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DRS_Test_Source_DRS_Test_Public_Prc_Testing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DRS_Test_Source_DRS_Test_Public_Prc_Testing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPrc_Testing, UPrc_Testing::StaticClass, TEXT("UPrc_Testing"), &Z_Registration_Info_UClass_UPrc_Testing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrc_Testing), 2534330504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DRS_Test_Source_DRS_Test_Public_Prc_Testing_h_2540665685(TEXT("/Script/DRS_Test"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DRS_Test_Source_DRS_Test_Public_Prc_Testing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Plugins_DRS_Test_Source_DRS_Test_Public_Prc_Testing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
