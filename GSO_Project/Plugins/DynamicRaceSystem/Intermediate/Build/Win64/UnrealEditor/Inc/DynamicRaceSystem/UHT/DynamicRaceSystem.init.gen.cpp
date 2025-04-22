// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicRaceSystem_init() {}
	DYNAMICRACESYSTEM_API UFunction* Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DynamicRaceSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DynamicRaceSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_DynamicRaceSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DynamicRaceSystem_ChangeRaceSpeed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DynamicRaceSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7CA322E3,
				0x516FECD7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DynamicRaceSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DynamicRaceSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DynamicRaceSystem(Z_Construct_UPackage__Script_DynamicRaceSystem, TEXT("/Script/DynamicRaceSystem"), Z_Registration_Info_UPackage__Script_DynamicRaceSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7CA322E3, 0x516FECD7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
