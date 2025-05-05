// Fill out your copyright notice in the Description page of Project Settings.

#include "DRS_Processor.h"
#include "DRS_Reciever.h"

// Sets default values for this component's properties
UDRS_Reciever::UDRS_Reciever()
{
	PrimaryComponentTick.bCanEverTick = false;

	OnSpeedChange.AddDynamic(this, &UDRS_Reciever::OnRaceSpeedChange);
}

void UDRS_Reciever::ConnectToProcessor()
{
	//Gets the Processor and puits
	for (TObjectIterator<UDRS_Processor> prc; prc; ++prc)
	{
		//If component is in current level
		if (prc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			prc->AddToRecieverArray(this);
		}
	}
}
