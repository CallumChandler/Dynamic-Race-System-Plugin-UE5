// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Processor.h"

// Sets default values for this component's properties
UDRS_Processor::UDRS_Processor()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UDRS_Processor::BeginPlay()
{
	ULevel* CurLevel = GetWorld()->GetCurrentLevel();

	//Gets all Reciever Components and puts them into an Array
	for (TObjectIterator<UDRS_Reciever> rrc; rrc; ++rrc)
	{
		//If component is in current level
		if (rrc->ComponentIsInLevel(CurLevel))
		{
			AddToRecieverArray(*rrc);
		}
	}
}

void UDRS_Processor::AddToRecieverArray(UDRS_Reciever* Reciever)
{
	//If it doesn't contain it then add it
	if(!RActorArray.Contains(Reciever))
	{
		RActorArray.Add(Reciever);
	}
}

void UDRS_Processor::AddToBroadcasterArray(UDRS_Broadcaster* Broadcaster)
{
	//If it doesn't contain it then add it
	if (!BrActorArray.Contains(Broadcaster))
	{
		BrActorArray.Add(Broadcaster);
	}
	
	//!!!FOR TESTING PURPOSES!!!, Sets position for Broadcasters
	Broadcaster->SetPosition(BrActorArray.Num());
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
			for (int i = 0; i < RActorArray.Num(); i++)
			{
				//UE_LOG(LogTemp, Warning, TEXT("AC Updates"));

				RActorArray[i]->UpdateRaceLevel(RaceLevel);
			}
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

	/*UE_LOG(LogTemp, Warning, TEXT("----Get Racers Speed Test----"));
	UE_LOG(LogTemp, Warning, TEXT("Speed Array Length: %d"), SpeedArray.Num());*/
	
	//Loop through all Broadcasters
	for (int i = 0; i < BrActorArray.Num(); i++)
	{
		/*UE_LOG(LogTemp, Warning, TEXT("Vehicle: %d"), i);
		UE_LOG(LogTemp, Warning, TEXT("Speed: %d"), BrActorArray[i]->GetSpeed());*/

		//Gets Speed & Position
		speed = BrActorArray[i]->GetSpeed();
		position = BrActorArray[i]->GetPosition();

		//Add Speed value to position in Array according to the Racers Position
		//This, practically speaking, lets a 1D Array hold the data of a 2D Array
		SpeedArray[position - 1] = speed;
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
	//Returns value accordint to Bounds
	if (val <= LowerRaceBound)
	{
		return 1;
	}
	else if (val <= UpperRaceBound)
	{
		return 2;
	}
	else if (val > UpperRaceBound)
	{
		return 3;
	}
	else
	{
		return 1;
	}
}







