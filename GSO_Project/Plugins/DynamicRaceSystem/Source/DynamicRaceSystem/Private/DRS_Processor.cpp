// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Processor.h"

// Sets default values for this component's properties
UDRS_Processor::UDRS_Processor()
{
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UDRS_Processor::BeginPlay()
{


	//Set length of SpeedArray accordingly
	SpeedArray.SetNum(BroadcastActors.Num());
}

void UDRS_Processor::GetRacersSpeeds()
{
	int speed = 0;
	int position = 1; //1 -> Number of Racers

	for (int i = 0; i < SpeedArray.Num(); i++)
	{
		//Add Speed value to position in Array according to the Racers Position
		SpeedArray.Insert(speed, (position - 1));
	}
}

