// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "DRS_Broadcaster.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DYNAMICRACESYSTEM_API UDRS_Broadcaster : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDRS_Broadcaster();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
	void BeginPlay();

protected:
	//Broadcaster Values
	UPROPERTY(Replicated)
	int RacerSpeed;

	UPROPERTY(Replicated)
	int RacerPosition;

public:
	//Get/Set Broadcaster Values
	// 
	//Set Speed for DRS
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void SetSpeed(int speed);

	//Set Position for DRS
	UFUNCTION(BlueprintCallable, Category = "DRS")
	void SetPosition(int position);

	//Get Speed for DRS
	UFUNCTION(BlueprintCallable, Category = "DRS")
	int GetSpeed();
	
	//Get Position for DRS
	UFUNCTION(BlueprintCallable, Category = "DRS")
	int GetPosition();

};
