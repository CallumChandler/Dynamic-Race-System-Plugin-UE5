// Fill out your copyright notice in the Description page of Project Settings.


#include "Rrc_Testing.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "Prc_Testing.h"

static const int TestFlagsR = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_Work, "DRS.Reciever.SimpleTest.0_IsTestingWorking", TestFlagsR)

bool Rrc_Test_Work::RunTest(const FString& Parameters)
{
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_Init, "DRS.Reciever.SimpleTest.1_InitReciever", TestFlagsR)

bool Rrc_Test_Init::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	URrc_Testing* Rrc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<URrc_Testing>();

	//Result
	TestTrue("Reciever shouldn't be nullptr", Rrc != nullptr);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_RLUpdate, "DRS.Reciever.SimpleTest.2_RaceLevelUpdate", TestFlagsR)

bool Rrc_Test_RLUpdate::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	URrc_Testing* Rrc = nullptr;
	int TargetRaceLevel = 3;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<URrc_Testing>();

	Rrc->UpdateRaceLevel(TargetRaceLevel);

	//Result
	TestTrue("Race Level should be Updated", TargetRaceLevel == Rrc->Debug_GetRaceLevel());

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_ProcConnect, "DRS.Reciever.SimpleTest.3_ProccessorConnect", TestFlagsR)

bool Rrc_Test_ProcConnect::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	URrc_Testing* Rrc = nullptr;
	UPrc_Testing* Prc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<URrc_Testing>();

	RrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = RrcActor->GetComponentByClass<UPrc_Testing>();
	
	Rrc->ConnectToProcessor();

	//Result
	TestTrue("Reciever wasn't Connected to Processor", Prc->Debug_IsRecieverPresent(Rrc));

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_ProcConnectName, "DRS.Reciever.SimpleTest.4_ProccessorConnectByName", TestFlagsR)

bool Rrc_Test_ProcConnectName::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	URrc_Testing* Rrc = nullptr;
	UPrc_Testing* Prc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<URrc_Testing>();

	RrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = RrcActor->GetComponentByClass<UPrc_Testing>();
	Prc->Rename(TEXT("Processor"));

	Rrc->ConnectToProcessorByName("Processor");

	//Result
	TestTrue("Reciever waasn't Connected to Processor by Name", Prc->Debug_IsRecieverPresent(Rrc));

	return true;
}