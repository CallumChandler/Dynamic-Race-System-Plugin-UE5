// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Reciever.h"
#include "Misc/AutomationTest.h"

static const int TestFlagsR = (EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter);

IMPLEMENT_SIMPLE_AUTOMATION_TEST(DRS_Reciever_Test, "DRS.Reciever.SimpleTest.IsTestingWorking", TestFlagsR)

bool DRS_Reciever_Test::RunTest(const FString& Parameters)
{
	return true;
}
