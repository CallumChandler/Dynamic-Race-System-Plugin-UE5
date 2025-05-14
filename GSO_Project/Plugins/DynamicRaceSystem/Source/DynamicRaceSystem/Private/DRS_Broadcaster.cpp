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

void UDRS_Broadcaster::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicates Speed and Position, ensuring they're shared between Client and Server
	DOREPLIFETIME(UDRS_Broadcaster, RacerSpeed);
	DOREPLIFETIME(UDRS_Broadcaster, RacerPosition);
}

void UDRS_Broadcaster::BeginPlay()
{
	Super::BeginPlay();

	//Gets all active the Processor/s and add this Broadcaster to them
	for (TObjectIterator<UDRS_Processor> prc; prc; ++prc)
	{
		//If component is in current level
		if (prc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			prc->AddToBroadcasterArray(this);
		}
	}
}

void UDRS_Broadcaster::SetSpeed(int speed)
{
	RacerSpeed = FMath::Clamp(speed, 0, 999);
}

void UDRS_Broadcaster::SetPosition(int position)
{
	RacerPosition = FMath::Clamp(position, 0, 999);
}

int UDRS_Broadcaster::GetSpeed()
{
	return RacerSpeed;
}

int UDRS_Broadcaster::GetPosition()
{
	return RacerPosition;
}

