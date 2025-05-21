// Fill out your copyright notice in the Description page of Project Settings.


#include "ADRS_ColorShiftLight.h"

// Sets default values
AADRS_ColorShiftLight::AADRS_ColorShiftLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bReplicates = true;

	RecieverComponent = CreateDefaultSubobject<UDRS_Reciever>("Reciever");
	PointLight = CreateDefaultSubobject<UPointLightComponent>("Light");

	PointLight->SetLightColor(ColorStates[0]);
	RootComponent = PointLight;
}

// Called when the game starts or when spawned
void AADRS_ColorShiftLight::BeginPlay()
{
	Super::BeginPlay();
	
	//Connect to Processor
	RecieverComponent->ConnectToProcessor();
	RecieverComponent->OnRaceLevelChange.AddDynamic(this, &AADRS_ColorShiftLight::SetColor);
}

void AADRS_ColorShiftLight::SetColor(int RaceLevel)
{
	FString val = FString::FromInt(RaceLevel);

	//Change LightColor according to RaceLevel
	switch (RaceLevel)
	{
	case 1:
		PointLight->SetLightColor(ColorStates[0]);
		break;

	case 2:
		PointLight->SetLightColor(ColorStates[1]);
		break;

	case 3:
		PointLight->SetLightColor(ColorStates[2]);
		break;

	default:
		PointLight->SetLightColor(ColorStates[0]);
		break;
	}
}
