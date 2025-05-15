// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Processor.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(DRS_Processor_Test, "DRS.Processor.SimpleTest.IsTestingWorking", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool DRS_Processor_Test::RunTest(const FString& Parameters)
{
	return true;
}
