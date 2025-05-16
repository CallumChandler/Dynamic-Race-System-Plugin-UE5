// Fill out your copyright notice in the Description page of Project Settings.

#include "DRS_Reciever.h"
#include "DRS_Processor.h"

// Sets default values for this component's properties
UDRS_Reciever::UDRS_Reciever()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicated(true);

	RaceLevel = 0;
	OnRaceLevelChange.AddDynamic(this, &UDRS_Reciever::OnRaceSpeedChange);
}

void UDRS_Reciever::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicates Delegate to ensure both Client and Server are triggered
	DOREPLIFETIME(UDRS_Reciever, RaceLevel);
}

void UDRS_Reciever::UpdateRaceLevel(int NewRaceLevel)
{
	RaceLevel = NewRaceLevel;

	//Calls for Update on Servers
	if (GetOwnerRole() == ROLE_Authority)
	{
		OnRaceLevelUpdate();
	}
}

void UDRS_Reciever::OnRep_RaceLevel()
{
	//Calls for Update on Clients
	OnRaceLevelUpdate();
}

void UDRS_Reciever::OnRaceLevelUpdate()
{
	//Updates the ACs
	OnRaceLevelChange.Broadcast(RaceLevel);
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

//Test only functions
#if UE_BUILD_TEST
int UDRS_Reciever::Debug_GetRaceLevel()
{
	return RaceLevel;
}
#endif
