// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GSO_Project : ModuleRules
{
	public GSO_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore", "DynamicRaceSystem" });
	}
}
