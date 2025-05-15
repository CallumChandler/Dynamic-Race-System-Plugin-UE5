// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(DRS_Broadcaster_Test, "DRS.Broadcaster.SimpleTest.IsTestingWorking", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool DRS_Broadcaster_Test::RunTest(const FString& Parameters)
{
	return true;
}
