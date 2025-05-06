// Fill out your copyright notice in the Description page of Project Settings.


#include "ADRS_ColorShiftLight.h"

// Sets default values
AADRS_ColorShiftLight::AADRS_ColorShiftLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RecieverComponent = CreateDefaultSubobject<UDRS_Reciever>("Reciever");
	PointLight = CreateDefaultSubobject<APointLight>("Light");

	if (PointLight)
	{
		PointLight->SetLightColor(LightColor);
		PointLight->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
}

// Called when the game starts or when spawned
void AADRS_ColorShiftLight::BeginPlay()
{
	Super::BeginPlay();
	
	//Connect to Processor
	RecieverComponent->ConnectToProcessor();
	RecieverComponent->OnSpeedChange.AddDynamic(this, &AADRS_ColorShiftLight::SetColor);
}

void AADRS_ColorShiftLight::SetColor(int RaceLevel)
{
	//Change LightColor according to RaceLevel
	switch (RaceLevel)
	{
	case 1:
		LightColor = FLinearColor::Green;

	case 2:
		LightColor = FLinearColor::Yellow;

	case 3:
		LightColor = FLinearColor::Red;

	default:
		LightColor = FLinearColor::White;
	}

	PointLight->SetLightColor(LightColor);
}
