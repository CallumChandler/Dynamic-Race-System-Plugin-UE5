// Fill out your copyright notice in the Description page of Project Settings.


#include "DRS_Broadcaster.h"

// Sets default values for this component's properties
UDRS_Broadcaster::UDRS_Broadcaster()
{
	PrimaryComponentTick.bCanEverTick = false;

	RacerSpeed = 0;
	RacerPosition = 1;
}

void UDRS_Broadcaster::SetSpeed(int speed)
{
	RacerSpeed = speed;
}

void UDRS_Broadcaster::SetPosition(int position)
{
	RacerPosition = position;
}

void UDRS_Broadcaster::GetSpeed(int speed)
{
	speed = RacerSpeed;
}

void UDRS_Broadcaster::GetPosition(int position)
{
	position = RacerPosition;
}

