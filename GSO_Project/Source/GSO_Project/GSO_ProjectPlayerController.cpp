// Copyright Epic Games, Inc. All Rights Reserved.


#include "GSO_ProjectPlayerController.h"
#include "GSO_ProjectPawn.h"
#include "GSO_ProjectUI.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void AGSO_ProjectPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}

	BindWidgetToLocal();
}

void AGSO_ProjectPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (VehicleUI)
	{
		FString nameUI = VehicleUI->GetName();
		UE_LOG(LogTemp, Warning, TEXT("Pawn is: %s"), *FString(nameUI));
	}

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}
}

void AGSO_ProjectPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (InPawn)
	{
		// get a pointer to the controlled pawn
		VehiclePawn = CastChecked<AGSO_ProjectPawn>(InPawn);
	}
}

void AGSO_ProjectPlayerController::BindWidgetToLocal_Implementation()
{
	// spawn the UI widget and add it to the viewport
	VehicleUI = CreateWidget<UGSO_ProjectUI>(this, VehicleUIClass);

	if (VehicleUI)
	{	
		//check(VehicleUI);
		VehicleUI->AddToPlayerScreen();
	}
}

bool AGSO_ProjectPlayerController::BindWidgetToLocal_Validate()
{
	return true;
}
