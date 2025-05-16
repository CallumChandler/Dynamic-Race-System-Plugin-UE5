// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Processor.h"
#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"
#include "DRS_Reciever.h"
#include "DRS_Broadcaster.h"

//Test Flags to be Reused for All Tests
static const int TestFlagsP = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);


//bool Prc_Attach::Update()
//{
//	Prc->AddToBroadcasterArray(Brc);
//	Prc->AddToRecieverArray(Rrc);
//
//	return true;
//}


//-------Tests to be Run-------
IMPLEMENT_SIMPLE_AUTOMATION_TEST(Prc_Test_Work, "DRS.Processor.SimpleTest.IsTestingWorking", TestFlagsP)

bool Prc_Test_Work::RunTest(const FString& Parameters)
{
	return true;
}