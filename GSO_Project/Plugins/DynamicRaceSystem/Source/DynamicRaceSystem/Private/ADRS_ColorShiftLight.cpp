// Fill out your copyright notice in the Description page of Project Settings.


#include "ADRS_ColorShiftLight.h"

// Sets default values
AADRS_ColorShiftLight::AADRS_ColorShiftLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RecieverComponent = CreateDefaultSubobject<UDRS_Reciever>("Reciever");
	PointLight = CreateDefaultSubobject<UPointLightComponent>("Light");

	PointLight->SetLightColor(FLinearColor::White);
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
	UE_LOG(LogTemp, Warning, TEXT("The RaceLevel is: %s"), *val);

	//Change LightColor according to RaceLevel
	switch (RaceLevel)
	{
	case 1:
		PointLight->SetLightColor(FLinearColor::Green);
		break;

	case 2:
		PointLight->SetLightColor(FLinearColor::Yellow);
		break;

	case 3:
		PointLight->SetLightColor(FLinearColor::Red);
		break;

	default:
		PointLight->SetLightColor(FLinearColor::White);
		break;
	}
}
