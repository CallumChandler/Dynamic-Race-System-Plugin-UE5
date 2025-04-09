// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"

// Sets default values for this component's properties
UDRS_Broadcaster::UDRS_Broadcaster()
{
	PrimaryComponentTick.bCanEverTick = false;

	RacerSpeed = 0;
	RacerPosition = 1;
}

void UDRS_Broadcaster::SetBroadcaster(int speed, int position)
{
	RacerSpeed = speed;
	RacerPosition = position;
}

void UDRS_Broadcaster::GetBroadcaster(int& speed, int& position)
{
	speed = RacerSpeed;
	position = RacerPosition;
}

