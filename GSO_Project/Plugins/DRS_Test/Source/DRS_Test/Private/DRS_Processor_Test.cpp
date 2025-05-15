// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Processor.h"
#include "Misc/AutomationTest.h"
#include "DRS_Reciever.h"
#include "DRS_Broadcaster.h"

//Test Flags to be Reused for All Tests
static const int TestFlags = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

//----Latent Tests (Functions to be called in Tests)----
DEFINE_LATENT_AUTOMATION_COMMAND_THREE_PARAMETER(Prc_Attach, UDRS_Processor*, Prc, UDRS_Broadcaster*, Brc, UDRS_Reciever*, Rrc);
bool Prc_Attach::Update()
{
	Prc->AddToBroadcasterArray(Brc);
	Prc->AddToRecieverArray(Rrc);

	return true;
}


//-------Tests to be Run-------
IMPLEMENT_SIMPLE_AUTOMATION_TEST(DRS_Processor_Test, "DRS.Processor.SimpleTest.IsTestingWorking", TestFlags)

bool DRS_Processor_Test::RunTest(const FString& Parameters)
{
	return true;
}