// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_Broadcaster.h"
#include "Misc/AutomationTest.h"
#include "DRS_Broadcaster.h"

//Runs this Test, in the Editor, for as long as ProductFilter allows (Not Working)
//IMPLEMENT_SIMPLE_AUTOMATION_TEST(Test_Broadcaster, "DRS_Broadcaster_Test", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter);

//Test that will be run
bool Test_Broadcaster::RunTest(const FString& Parameters)
{
	////Creates an Actor and adds the Broadcaster to it
	//AActor* Actor = NewObject<AActor>(AActor::StaticClass());
	//Actor->CreateDefaultSubobject<UDRS_Broadcaster>("Broadcaster");

	////If Broadcaster cannot be found
	//if (!(Actor->GetComponentByClass(UDRS_Broadcaster::StaticClass())))
	//{
	//	AddError(TEXT("Broadcaster Failed to Initalise"));
	//}

	return true;
}
