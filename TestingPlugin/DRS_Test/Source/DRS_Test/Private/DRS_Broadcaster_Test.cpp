// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

//Test Flags to be Reused for All Tests
static const int TestFlagsB = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

//-------Tests to be Run-------
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_Work, "DRS.Broadcaster.SimpleTest.0_IsTestingWorking", TestFlagsB)

bool Brc_Test_Work::RunTest(const FString& Parameters)
{
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_Init, "DRS.Broadcaster.SimpleTest.1_InitBroadcaster", TestFlagsB)

bool Brc_Test_Init::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	BrcActor = World->SpawnActor<AActor>();
	BrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = BrcActor->GetComponentByClass<UDRS_Broadcaster>();

	//Result
	TestTrue("Broadcaster shouldn't be nullptr", Brc != nullptr);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetS, "DRS.Broadcaster.SimpleTest.2_GetSpeed", TestFlagsB)

bool Brc_Test_GetS::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int Speed = 5000;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	BrcActor = World->SpawnActor<AActor>();
	BrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = BrcActor->GetComponentByClass<UDRS_Broadcaster>();

	Speed = Brc->GetSpeed();

	//Result
	TestTrue("Speed shouldn't be null", Speed != 5000);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetP, "DRS.Broadcaster.SimpleTest.3_GetPosition", TestFlagsB)

bool Brc_Test_GetP::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int Position = NULL;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	BrcActor = World->SpawnActor<AActor>();
	BrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = BrcActor->GetComponentByClass<UDRS_Broadcaster>();

	Position = Brc->GetPosition();

	//Result
	TestTrue("Position shouldn't be null", Position != NULL);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_SetS100, "DRS.Broadcaster.SimpleTest.4_SetSpeed100", TestFlagsB)

bool Brc_Test_SetS100::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int Speed = 100;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	BrcActor = World->SpawnActor<AActor>();
	BrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = BrcActor->GetComponentByClass<UDRS_Broadcaster>();

	Brc->SetSpeed(Speed);

	//Result
	TestTrue("Speed should be Set", Brc->GetSpeed() == Speed);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_SetP5, "DRS.Broadcaster.SimpleTest.5_SetPosition5", TestFlagsB)

bool Brc_Test_SetP5::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int Position = 100;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	BrcActor = World->SpawnActor<AActor>();
	BrcActor->AddComponentByClass(UDRS_Broadcaster::StaticClass(), false, FTransform::Identity, false);
	Brc = BrcActor->GetComponentByClass<UDRS_Broadcaster>();

	Brc->SetPosition(Position);

	//Result
	TestTrue("Position should be Set", Brc->GetPosition() == Position);
	return true;
}


