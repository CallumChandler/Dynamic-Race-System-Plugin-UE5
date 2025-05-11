// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"
#include "DRS_Processor.h"

// Sets default values for this component's properties
UDRS_Broadcaster::UDRS_Broadcaster()
{
	PrimaryComponentTick.bCanEverTick = false;

	RacerSpeed = 0;
	RacerPosition = 1;

	SetIsReplicated(true);
}

void UDRS_Broadcaster::BeginPlay()
{
	//Gets the Processor and adds it to them
	for (TObjectIterator<UDRS_Processor> prc; prc; ++prc)
	{
		//If component is in current level
		if (prc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			prc->AddToBroadcasterArray(this);
		}
	}
}

void UDRS_Broadcaster::SetSpeed_Implementation(int speed)
{
	RacerSpeed = speed;
}

bool UDRS_Broadcaster::SetSpeed_Validate(int speed)
{
	if (speed)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UDRS_Broadcaster::SetPosition_Implementation(int position)
{
	RacerPosition = position;
}

bool UDRS_Broadcaster::SetPosition_Validate(int position)
{
	if (position)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int UDRS_Broadcaster::GetSpeed()
{
	return RacerSpeed;
}

int UDRS_Broadcaster::GetPosition()
{
	return RacerPosition;
}

