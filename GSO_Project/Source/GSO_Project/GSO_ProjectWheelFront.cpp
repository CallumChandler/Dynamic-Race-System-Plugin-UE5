// Copyright Epic Games, Inc. All Rights Reserved.

#include "GSO_ProjectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGSO_ProjectWheelFront::UGSO_ProjectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}