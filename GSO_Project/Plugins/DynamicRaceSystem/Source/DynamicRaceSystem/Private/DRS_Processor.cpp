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
	
	//Sets Defaault position for Broadcasters in order spawned
	Broadcaster->SetPosition(BrActorArray.Num());
}

void UDRS_Processor::RemoveFromBroadcasterArray(UDRS_Broadcaster* Broadcaster)
{
	//If it does contain it then remove it
	if (BrActorArray.Contains(Broadcaster))
	{
		int Removed = BrActorArray.Remove(Broadcaster);

		UE_LOG(LogTemp, Warning, TEXT("%i Broadcasters Removed"), Removed)
	}
}

void UDRS_Processor::UpdateAdaptiveComps(CalcType CalcType)
{
	if (!BrActorArray.IsEmpty()) //Check to ensure there are Brodcasters in the current Level
	{
		//Gets & converts Speed/s to a Level
		TArray<int> RaceSpeeds = GetRacersSpeeds();
		int value;

		switch (CalcType)
		{
		case Mean:
			value = CalcMean(RaceSpeeds);
			break;

		case ForwardWeight:
			value = CalcForWeight(RaceSpeeds);
			break;

		case ExpandedForwardWeight:
			value = CalcExpForWeight(RaceSpeeds);
			break;

		case RearWeight:
			value = CalcRearWeight(RaceSpeeds);
			break;

		case ExpandedRearWeight:
			value = CalcExpRearWeight(RaceSpeeds);
			break;

		default:
			value = CalcMean(RaceSpeeds);
			break;
		}

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

int UDRS_Processor::CalcForWeight(TArray<int> RaceSpeeds)
{
	int sum = 0;
	int div = 0;

	//Get the weighted results of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		if (i <= 1) //If the first two Racers
		{
			sum += RaceSpeeds[i] * 8;
			div += 8;
		}
		else
		{
			sum += RaceSpeeds[i];
			div += 1;
		}
		
	}

	//Returns Sum / Div
	return sum / div;
}

int UDRS_Processor::CalcExpForWeight(TArray<int> RaceSpeeds)
{
	int sum = 0;
	int div = 0;

	//Get the weighted results of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		if (i <= 2) //If the first three Racers
		{
			sum += RaceSpeeds[i] * 8;
			div += 8;
		}
		else
		{
			sum += RaceSpeeds[i];
			div += 1;
		}

	}

	//Returns Sum / Div
	return sum / div;
}

int UDRS_Processor::CalcRearWeight(TArray<int> RaceSpeeds)
{
	int sum = 0;
	int div = 0;

	//Get the weighted results of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		if (i >= RaceSpeeds.Num() - 2) //If the last two Racers
		{
			sum += RaceSpeeds[i] * 8;
			div += 8;
		}
		else
		{
			sum += RaceSpeeds[i];
			div += 1;
		}

	}

	//Returns Sum / Div
	return sum / div;
}

int UDRS_Processor::CalcExpRearWeight(TArray<int> RaceSpeeds)
{
	int sum = 0;
	int div = 0;

	//Get the weighted results of Speed Array
	for (int i = 0; i < RaceSpeeds.Num(); i++)
	{
		if (i >= RaceSpeeds.Num() - 3) //If the last three Racers
		{
			sum += RaceSpeeds[i] * 8;
			div += 8;
		}
		else
		{
			sum += RaceSpeeds[i];
			div += 1;
		}

	}

	//Returns Sum / Div
	return sum / div;
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




