// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MMO : ModuleRules
{
	public MMO(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { 
            "Core",
            "CoreUObject",
            "ApplicationCore",
            "Engine",
            "PhysicsCore",
            "GameplayTags",
            "GameplayTasks",
            "GameplayAbilities",
            "AIModule",
            "DataRegistry",
            "ReplicationGraph",
            "CommonLoadingScreen",
            "Niagara",
            "AsyncMixin",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
            "InputCore",
            "Slate",
            "SlateCore",
            "DeveloperSettings",
            "EnhancedInput",
            "UMG",
            "CommonUI",
            "GameplayMessageRuntime",
            "AudioMixer",
            "AudioModulation",
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
