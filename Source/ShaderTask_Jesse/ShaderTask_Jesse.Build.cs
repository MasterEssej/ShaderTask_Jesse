// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShaderTask_Jesse : ModuleRules
{
	public ShaderTask_Jesse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
