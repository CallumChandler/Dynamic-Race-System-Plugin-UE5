// Fill out your copyright notice in the Description page of Project Settings.

#include "DRS_Reciever.h"
#include "DRS_Processor.h"

// Sets default values for this component's properties
UDRS_Reciever::UDRS_Reciever()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicated(true);

	OnRaceLevelChange.AddDynamic(this, &UDRS_Reciever::OnRaceSpeedChange);
}

void UDRS_Reciever::ConnectToProcessor()
{
	//Gets the Processor candidates and iterates
	for (TObjectIterator<UDRS_Processor> prc; prc; ++prc)
	{
		//If component is in current level
		if (prc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()))
		{
			prc->AddToRecieverArray(this);
		}
	}
}

void UDRS_Reciever::ConnectToProcessorByName(FString ProcessorName)
{
	//Gets the Processor candidates and iterates
	for (TObjectIterator<UDRS_Processor> prc; prc; ++prc)
	{
		//If component is in current level and has right name
		if (prc->ComponentIsInLevel(GetWorld()->GetCurrentLevel()) && prc->GetName() == ProcessorName)
		{
			prc->AddToRecieverArray(this);
		}
	}
}
