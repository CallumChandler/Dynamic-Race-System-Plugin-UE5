// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"
#include "Misc/AutomationTest.h"

//Test Flags to be Reused for All Tests
static const int TestFlags = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

//----Latent Tests (Functions to be called in Tests)----

//Initalises the Brc
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(Brc_Init, AActor*, Actor, UDRS_Broadcaster*, Brc);
bool Brc_Init::Update()
{
	Actor = NewObject<AActor>(AActor::StaticClass());
	Brc = Actor->CreateDefaultSubobject<UDRS_Broadcaster>("Broadcaster");

	return true;
}

//Gets Brc Speed
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(Brc_GetSpeed, UDRS_Broadcaster*, Brc, int, Speed);
bool Brc_GetSpeed::Update()
{
	Speed = Brc->GetSpeed();

	return true;
}

//Gets Brc Position
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(Brc_GetPosition, UDRS_Broadcaster*, Brc, int, Position);
bool Brc_GetPosition::Update()
{
	Position = Brc->GetPosition();

	return true;
}

//Sets Brc Speed
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(Brc_SetSpeed, UDRS_Broadcaster*, Brc, int, Speed);
bool Brc_SetSpeed::Update()
{
	Brc->SetSpeed(Speed);

	return true;
}

//Sets Brc Position
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(Brc_SetPosition, UDRS_Broadcaster*, Brc, int, Position);
bool Brc_SetPosition::Update()
{
	Brc->SetPosition(Position);

	return true;
}


//-------Tests to be Run-------
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_Work, "DRS.Broadcaster.SimpleTest.IsTestingWorking", TestFlags)

bool Brc_Test_Work::RunTest(const FString& Parameters)
{
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_Init, "DRS.Broadcaster.SimpleTest.InitBroadcaster", TestFlags)

bool Brc_Test_Init::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));

	//Result
	return !(Brc == nullptr);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetS, "DRS.Broadcaster.SimpleTest.GetSpeed", TestFlags)

bool Brc_Test_GetS::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int SpeedResult = NULL;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_GetSpeed(Brc, SpeedResult));

	//Result
	return !(SpeedResult == NULL);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetP, "DRS.Broadcaster.SimpleTest.GetPosition", TestFlags)

bool Brc_Test_GetP::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int PositionResult = NULL;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_GetPosition(Brc, PositionResult));

	//Result
	return !(PositionResult == NULL);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_SetS100, "DRS.Broadcaster.SimpleTest.SetSpeed100", TestFlags)

bool Brc_Test_SetS100::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int TargetSpeed = 100;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_SetSpeed(Brc, TargetSpeed));

	//Result
	return (Brc->GetSpeed() != TargetSpeed);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_SetP5, "DRS.Broadcaster.SimpleTest.SetPosition5", TestFlags)

bool Brc_Test_SetP5::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int TargetPosition = 100;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_SetPosition(Brc, TargetPosition));

	//Result
	return (Brc->GetPosition() == TargetPosition);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetS100, "DRS.Broadcaster.SimpleTest.GetSpeed100", TestFlags)

bool Brc_Test_GetS100::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int TargetSpeed = 100;
	int SpeedResult = NULL;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_SetSpeed(Brc, TargetSpeed));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_GetSpeed(Brc, SpeedResult));

	//Result
	return (SpeedResult == TargetSpeed);
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(Brc_Test_GetP5, "DRS.Broadcaster.SimpleTest.GetPosition5", TestFlags)

bool Brc_Test_GetP5::RunTest(const FString& Parameters)
{
	//Init
	AActor* BrcActor = nullptr;
	UDRS_Broadcaster* Brc = nullptr;
	int TargetPosition = 100;
	int PositionResult = NULL;

	//Act
	ADD_LATENT_AUTOMATION_COMMAND(Brc_Init(BrcActor, Brc));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_SetPosition(Brc, TargetPosition));
	ADD_LATENT_AUTOMATION_COMMAND(Brc_GetPosition(Brc, PositionResult));

	//Result
	return (PositionResult == TargetPosition);
}

