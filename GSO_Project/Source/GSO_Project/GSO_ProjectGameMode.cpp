// Copyright Epic Games, Inc. All Rights Reserved.

#include "GSO_ProjectGameMode.h"
#include "GSO_ProjectPlayerController.h"

AGSO_ProjectGameMode::AGSO_ProjectGameMode()
{
	PlayerControllerClass = AGSO_ProjectPlayerController::StaticClass();
}
