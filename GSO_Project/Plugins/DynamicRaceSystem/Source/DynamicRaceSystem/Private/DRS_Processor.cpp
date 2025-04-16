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
		UE_LOG(LogTemp, Warning, TEXT("Brodcaster: %s"), *brc->GetOwner()->GetName());

		//If component is in current level
		if (brc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			BrActorArray.Add(*brc);
		}
	}

	//Gets all Reciever Components and puts them into an Array
	for (TObjectIterator<UDRS_Reciever> rrc; rrc; ++rrc)
	{
		UE_LOG(LogTemp, Warning, TEXT("Reciever: %s"), *rrc->GetOwner()->GetName());

		//If component is in current level
		if (rrc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			RActorArray.Add(*rrc);
		}
	}
}

void UDRS_Processor::UpdateAdaptiveComps()
{
	if (!BrActorArray.IsEmpty()) //Check to ensure there are Brodcasters in the current Level
	{
		//Gets & converts Speed/s to a Level
		int value = CalcMean(GetRacersSpeeds());
		int TempLevel = ProduceRaceLevel(value);

		//Updates RaceLevel if different
		if (RaceLevel != TempLevel)
		{
			RaceLevel = TempLevel;

			//Call for all ACs to Update
			for (int i = 0; i < (RActorArray.Num() - 1); i++)
			{
				UE_LOG(LogTemp, Warning, TEXT("AC Updates"));

				RActorArray[i]->OnSpeedChangeDelegate.Broadcast(RaceLevel);
			}
		}
	}
}

TArray<int> UDRS_Processor::GetRacersSpeeds()
{
	//Makes and fills an Array accord to length of BrActorArray
	TArray<int> SpeedArray;
	SpeedArray.Init(0, (BrActorArray.Num() - 1));

	int speed = 0;
	int position = 1;

	for (int i = 0; i <= (BrActorArray.Num() - 1); i++)
	{
		speed = BrActorArray[i]->GetSpeed();
		position = BrActorArray[i]->GetPosition();

		//Add Speed value to position in Array according to the Racers Position
		//This, practically speaking, lets a 1D Array hold the data of a 2D Array
		SpeedArray.Insert(speed, (position - 1));
	}

	return SpeedArray;
}

int UDRS_Processor::CalcMean(TArray<int> RaceSpeeds)
{
	int value = 0;

	//Get the mean of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		value += RaceSpeeds[i];
	}

	//Returns Mean
	return value / RaceSpeeds.Num();
}

int UDRS_Processor::ProduceRaceLevel(int val)
{
	//Returns value accordint to linear conversion 0->180 => 1->3, rounded up
	return FMath::Clamp(FMath::DivideAndRoundUp(val, 60), 1, 3);
}

int UDRS_Processor::ProduceRaceLevelAdjustable(int val, int FirstCap, int SecondCap)
{
	if (val <= FirstCap)
	{
		return 1;
	}
	else if (val <= SecondCap)
	{
		return 2;
	}
	else if(val > SecondCap)
	{
		return 3;
	}
	else
	{
		return 1;
	}
}



