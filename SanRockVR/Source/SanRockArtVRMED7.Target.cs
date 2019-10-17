// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SanRockArtVRMED7Target : TargetRules
{
	public SanRockArtVRMED7Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SanRockArtVRMED7" } );
	}
}
