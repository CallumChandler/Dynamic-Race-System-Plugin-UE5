// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DRS_Reciever.h"
#include "Components/PointLightComponent.h"
#include "ADRS_ColorShiftLight.generated.h"

UCLASS()
class DYNAMICRACESYSTEM_API AADRS_ColorShiftLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AADRS_ColorShiftLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void SetColor(int RaceLevel);

	//DRS_Reciever Reference
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "DRS")
	UDRS_Reciever* RecieverComponent;

	//PointLight Reference
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Light")
	UPointLightComponent* PointLight;
};
