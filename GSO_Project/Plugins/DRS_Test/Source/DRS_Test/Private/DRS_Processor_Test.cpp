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