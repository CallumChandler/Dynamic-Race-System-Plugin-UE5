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
	//Gets all Broadcaster Components and puts them into an Array
	for (TObjectIterator<UDRS_Broadcaster> brc; brc; ++brc)
	{
		//If component is in current level
		if (brc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			BrActorArray.Add(*brc);
		}
	}	
}

void UDRS_Processor::UpdateAdaptiveComps()
{
	if (!BrActorArray.IsEmpty()) //Check to ensure there are Brodcasters in the current Level
	{
		//Gets & converts Speed/s to a Level
		int TempLevel = ProcessDefault(GetRacersSpeeds());

		//Updates RaceLevel if different
		if (RaceLevel != TempLevel)
		{
			RaceLevel = TempLevel;

			//Call for ACs to Update
			//TBD
		}
	}
}

TArray<int> UDRS_Processor::GetRacersSpeeds()
{
	//Makes and fills an Array accord to length of BrActorArray
	TArray<int> SpeedArray;
	SpeedArray.Init(0, BrActorArray.Num());

	int speed = 0;
	int position = 1;

	for (int i = 0; i < BrActorArray.Num(); i++)
	{
		BrActorArray[i]->GetSpeed(speed);
		BrActorArray[i]->GetPosition(position);

		//Add Speed value to position in Array according to the Racers Position
		//This, practically speaking, lets a 1D Array hold the data of a 2D Array
		SpeedArray.Insert(speed, (position - 1));
	}

	return SpeedArray;
}

int UDRS_Processor::ProcessDefault(TArray<int> RaceSpeeds)
{
	int value = 0;

	//Get the mean of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		value += RaceSpeeds[i];
	}
	
	//Gets Mean
	value = value / RaceSpeeds.Num();

	//Returns value accordint to linear conversion 0->180 => 1->3, rounded up
	return FMath::Clamp(FMath::DivideAndRoundUp(value, 60), 1, 3);
}



