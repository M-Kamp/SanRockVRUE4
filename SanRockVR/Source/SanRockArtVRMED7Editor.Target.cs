// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SanRockArtVRMED7EditorTarget : TargetRules
{
	public SanRockArtVRMED7EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "SanRockArtVRMED7" } );
	}
}
