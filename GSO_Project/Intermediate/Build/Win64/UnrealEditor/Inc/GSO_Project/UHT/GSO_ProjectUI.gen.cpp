// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GSO_Project/GSO_ProjectUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSO_ProjectUI() {}
// Cross Module References
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectUI();
	GSO_PROJECT_API UClass* Z_Construct_UClass_UGSO_ProjectUI_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GSO_Project();
// End Cross Module References
	struct GSO_ProjectUI_eventOnGearUpdate_Parms
	{
		int32 NewGear;
	};
	struct GSO_ProjectUI_eventOnSpeedUpdate_Parms
	{
		float NewSpeed;
	};
	static FName NAME_UGSO_ProjectUI_OnGearUpdate = FName(TEXT("OnGearUpdate"));
	void UGSO_ProjectUI::OnGearUpdate(int32 NewGear)
	{
		GSO_ProjectUI_eventOnGearUpdate_Parms Parms;
		Parms.NewGear=NewGear;
		ProcessEvent(FindFunctionChecked(NAME_UGSO_ProjectUI_OnGearUpdate),&Parms);
	}
	static FName NAME_UGSO_ProjectUI_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
	void UGSO_ProjectUI::OnSpeedUpdate(float NewSpeed)
	{
		GSO_ProjectUI_eventOnSpeedUpdate_Parms Parms;
		Parms.NewSpeed=NewSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UGSO_ProjectUI_OnSpeedUpdate),&Parms);
	}
	void UGSO_ProjectUI::StaticRegisterNativesUGSO_ProjectUI()
	{
	}
	struct Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSO_ProjectUI_eventOnGearUpdate_Parms, NewGear), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::NewProp_NewGear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new gear */" },
#endif
		{ "ModuleRelativePath", "GSO_ProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new gear" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSO_ProjectUI, nullptr, "OnGearUpdate", nullptr, nullptr, Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::PropPointers), sizeof(GSO_ProjectUI_eventOnGearUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSO_ProjectUI_eventOnGearUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GSO_ProjectUI_eventOnSpeedUpdate_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new speed */" },
#endif
		{ "ModuleRelativePath", "GSO_ProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSO_ProjectUI, nullptr, "OnSpeedUpdate", nullptr, nullptr, Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::PropPointers), sizeof(GSO_ProjectUI_eventOnSpeedUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(GSO_ProjectUI_eventOnSpeedUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSO_ProjectUI);
	UClass* Z_Construct_UClass_UGSO_ProjectUI_NoRegister()
	{
		return UGSO_ProjectUI::StaticClass();
	}
	struct Z_Construct_UClass_UGSO_ProjectUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMPH_MetaData[];
#endif
		static void NewProp_bIsMPH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMPH;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSO_ProjectUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GSO_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSO_ProjectUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSO_ProjectUI_OnGearUpdate, "OnGearUpdate" }, // 2707360058
		{ &Z_Construct_UFunction_UGSO_ProjectUI_OnSpeedUpdate, "OnSpeedUpdate" }, // 447306358
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSO_ProjectUI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Vehicle HUD class\n *  Displays the current speed and gear.\n *  Widget setup is handled in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "GSO_ProjectUI.h" },
		{ "ModuleRelativePath", "GSO_ProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Vehicle HUD class\nDisplays the current speed and gear.\nWidget setup is handled in a Blueprint subclass." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the display of speed in Km/h or MPH */" },
#endif
		{ "ModuleRelativePath", "GSO_ProjectUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the display of speed in Km/h or MPH" },
#endif
	};
#endif
	void Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH_SetBit(void* Obj)
	{
		((UGSO_ProjectUI*)Obj)->bIsMPH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH = { "bIsMPH", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSO_ProjectUI), &Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH_MetaData), Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSO_ProjectUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSO_ProjectUI_Statics::NewProp_bIsMPH,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSO_ProjectUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSO_ProjectUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSO_ProjectUI_Statics::ClassParams = {
		&UGSO_ProjectUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSO_ProjectUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSO_ProjectUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSO_ProjectUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSO_ProjectUI()
	{
		if (!Z_Registration_Info_UClass_UGSO_ProjectUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSO_ProjectUI.OuterSingleton, Z_Construct_UClass_UGSO_ProjectUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSO_ProjectUI.OuterSingleton;
	}
	template<> GSO_PROJECT_API UClass* StaticClass<UGSO_ProjectUI>()
	{
		return UGSO_ProjectUI::StaticClass();
	}
	UGSO_ProjectUI::UGSO_ProjectUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSO_ProjectUI);
	UGSO_ProjectUI::~UGSO_ProjectUI() {}
	struct Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSO_ProjectUI, UGSO_ProjectUI::StaticClass, TEXT("UGSO_ProjectUI"), &Z_Registration_Info_UClass_UGSO_ProjectUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSO_ProjectUI), 540306909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectUI_h_3823962640(TEXT("/Script/GSO_Project"),
		Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_0_FinalYearProject_Project_GearShiftOverdrive_GSO_Project_Source_GSO_Project_GSO_ProjectUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
