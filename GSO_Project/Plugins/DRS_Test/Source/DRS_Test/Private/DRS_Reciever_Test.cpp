// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Reciever.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "DRS_Processor.h"

static const int TestFlagsR = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_Work, "DRS.Reciever.SimpleTest.0_IsTestingWorking", TestFlagsR)

bool Rrc_Test_Work::RunTest(const FString& Parameters)
{
#if UE_BUILD_TEST
	UE_LOG(LogTemp, Warning, TEXT("Running on UE_BUILD_TEST"));
#elif UE_BUILD_DEBUG
	UE_LOG(LogTemp, Warning, TEXT("Running on UE_BUILD_DEBUG"));
#elif UE_BUILD_SHIPPING
	UE_LOG(LogTemp, Warning, TEXT("Running on UE_BUILD_TEST"));
#elif UE_BUILD_DEVELOPMENT
	UE_LOG(LogTemp, Warning, TEXT("Running on UE_BUILD_DEVELOPMENT"));
#else
	UE_LOG(LogTemp, Warning, TEXT("Not Running on Build"));
#endif

#if WITH_EDITOR
	UE_LOG(LogTemp, Warning, TEXT("WITH_EDITOR"));
#else
	UE_LOG(LogTemp, Warning, TEXT("Not With Editor"));
#endif

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_Init, "DRS.Reciever.SimpleTest.1_InitReciever", TestFlagsR)

bool Rrc_Test_Init::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	UDRS_Reciever* Rrc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(UDRS_Reciever::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<UDRS_Reciever>();

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
	UDRS_Reciever* Rrc = nullptr;
	int TargetRaceLevel = 3;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(UDRS_Reciever::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<UDRS_Reciever>();

	Rrc->UpdateRaceLevel(TargetRaceLevel);

	//Result
#if UE_BUILD_TEST
	TestTrue("Race Level should be Updated", TargetRaceLevel == Rrc->Debug_GetRaceLevel());
#endif

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_ProcConnect, "DRS.Reciever.SimpleTest.3_ProccessorConnect", TestFlagsR)

bool Rrc_Test_ProcConnect::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	UDRS_Reciever* Rrc = nullptr;
	UDRS_Processor* Prc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(UDRS_Reciever::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<UDRS_Reciever>();

	RrcActor->AddComponentByClass(UDRS_Processor::StaticClass(), false, FTransform::Identity, false);
	Prc = RrcActor->GetComponentByClass<UDRS_Processor>();
	
	Rrc->ConnectToProcessor();

	//Result
#if UE_BUILD_TEST
	TestTrue("Reciever wasn't Connected to Processor", Prc->Debug_IsRecieverPresent(Rrc));
#endif

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Rrc_Test_ProcConnectName, "DRS.Reciever.SimpleTest.4_ProccessorConnectByName", TestFlagsR)

bool Rrc_Test_ProcConnectName::RunTest(const FString& Parameters)
{
	//Init
	UWorld* World = nullptr;
	AActor* RrcActor = nullptr;
	UDRS_Reciever* Rrc = nullptr;
	UDRS_Processor* Prc = nullptr;

	//Act
	World = FAutomationEditorCommonUtils::CreateNewMap();
	RrcActor = World->SpawnActor<AActor>();
	RrcActor->AddComponentByClass(UDRS_Reciever::StaticClass(), false, FTransform::Identity, false);
	Rrc = RrcActor->GetComponentByClass<UDRS_Reciever>();

	RrcActor->AddComponentByClass(UDRS_Processor::StaticClass(), false, FTransform::Identity, false);
	Prc = RrcActor->GetComponentByClass<UDRS_Processor>();
	Prc->Rename(TEXT("Processor"));

	Rrc->ConnectToProcessorByName("Processor");

	//Result
#if UE_BUILD_TEST
	TestTrue("Reciever waasn't Connected to Processor by Name", Prc->Debug_IsRecieverPresent(Rrc));
#endif
	return true;
}