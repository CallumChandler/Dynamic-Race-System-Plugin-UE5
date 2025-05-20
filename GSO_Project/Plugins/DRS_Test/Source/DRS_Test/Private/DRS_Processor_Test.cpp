// Fill out your copyright notice in the Description page of Project Settings.


#include "Prc_Testing.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "Rrc_Testing.h"
#include "DRS_Broadcaster.h"

//Test Flags to be Reused for All Tests
static const int TestFlagsP = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

//-------Tests to be Run-------
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_Work, "DRS.Processor.SimpleTest.0_IsTestingWorking", TestFlagsP)

bool Prc_Test_Work::RunTest(const FString& Parameters)
{
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_Init, "DRS.Processor.SimpleTest.1_InitProcessor", TestFlagsP)

bool Prc_Test_Init::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	UPrc_Testing* Prc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	//Result
	TestTrue("Processor shouldn't be nullptr", Prc != nullptr);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_Connected, "DRS.Processor.SimpleTest.2_ConnectedToProcessor", TestFlagsP)

bool Prc_Test_Connected::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	UPrc_Testing* Prc = nullptr;
	URrc_Testing* Rrc = nullptr;
	UDRS_Broadcaster* Brc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	PrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = PrcActor->GetComponentByClass<URrc_Testing>();
	Prc->AddToRecieverArray(Rrc);

	PrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = PrcActor->GetComponentByClass<UDRS_Broadcaster>();
	Prc->AddToBroadcasterArray(Brc);

	//Result
	TestTrue("Reciever wasn't Connected to Processor", Prc->Debug_IsRecieverPresent(Rrc));
	TestTrue("Broadcaster wasn't Connected to Processor", Prc->Debug_IsBroadcasterPresent(Brc));

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_GetSpeeds, "DRS.Processor.SimpleTest.3_GetRacersSpeeds", TestFlagsP)

bool Prc_Test_GetSpeeds::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	AActor* Brc1Actor = nullptr;
	AActor* Brc2Actor = nullptr;

	UPrc_Testing* Prc = nullptr;
	UDRS_Broadcaster* Brc1 = nullptr;
	UDRS_Broadcaster* Brc2 = nullptr;

	TArray<int> TargetRaceSpeeds = { 30, 50 };
	TArray<int> ResultingRaceSpeeds = { 0, 0 };

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	Brc1Actor = World->SpawnActor<AActor>();
	Brc1Actor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc1 = Brc1Actor->GetComponentByClass<UDRS_Broadcaster>();
	Prc->AddToBroadcasterArray(Brc1);

	Brc2Actor = World->SpawnActor<AActor>();
	Brc2Actor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc2 = Brc2Actor->GetComponentByClass<UDRS_Broadcaster>();
	Prc->AddToBroadcasterArray(Brc2);

	//Sets Broadcaster Values
	Brc1->SetSpeed(TargetRaceSpeeds[0]);
	Brc1->SetPosition(1);

	Brc2->SetSpeed(TargetRaceSpeeds[1]);
	Brc2->SetPosition(2);

	//Gets Array of values from the Processor
	ResultingRaceSpeeds = Prc->Debug_GetRacersSpeeds();

	//Result
	TestTrue("Processor not returning proper RaceSpeed", ResultingRaceSpeeds[0] == TargetRaceSpeeds[0]);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_ProduceRL, "DRS.Processor.SimpleTest.4_ProduceRaceLevel", TestFlagsP)

bool Prc_Test_ProduceRL::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	UPrc_Testing* Prc = nullptr;
	int TestSpeed = 70; //By default is RL 2, but with below bounds should be RL 3

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	Prc->LowerRaceBound = 20;
	Prc->UpperRaceBound = 40;

	//Result
	TestTrue("Race Level Bounds not setting", Prc->Debug_ProduceRaceLevel(TestSpeed) >= 2);
	TestTrue("Race Level not being Produced", Prc->Debug_ProduceRaceLevel(TestSpeed) == 3);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_MeanCalc, "DRS.Processor.SimpleTest.5_TestMeanCalc", TestFlagsP)

bool Prc_Test_MeanCalc::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	UPrc_Testing* Prc = nullptr;

	TArray<int> TestValues = { 30, 50, 70 }; //Should produce 50

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	//Result
	TestTrue("Mean Calc incorrect result", Prc->Debug_CalcMean(TestValues) == 50);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_UpdateAC, "DRS.Processor.SimpleTest.6_UpdateACs", TestFlagsP)

bool Prc_Test_UpdateAC::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* PrcActor = nullptr;
	UPrc_Testing* Prc = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	URrc_Testing* Rrc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	PrcActor = World->SpawnActor<AActor>();
	PrcActor->AddComponentByClass(UPrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Prc = PrcActor->GetComponentByClass<UPrc_Testing>();

	PrcActor->AddComponentByClass(URrc_Testing::StaticClass(), false, FTransform::Identity, false);
	Rrc = PrcActor->GetComponentByClass<URrc_Testing>();
	Prc->AddToRecieverArray(Rrc);

	PrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = PrcActor->GetComponentByClass<UDRS_Broadcaster>();
	Prc->AddToBroadcasterArray(Brc);

	Brc->SetSpeed(180); //Which should make RL 3
	
	Prc->UpdateAdaptiveComps(Mean); //Updates Reciever

	//Result
	TestTrue("Reciever not Updating", Rrc->Debug_GetRaceLevel() == 3);

	return true;
}