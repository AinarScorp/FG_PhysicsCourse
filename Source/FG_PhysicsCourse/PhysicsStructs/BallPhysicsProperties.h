// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "BallPhysicsProperties.generated.h"

UENUM(BlueprintType)
enum EBallType : uint8
{
	EBT_Wood UMETA(DisplayName = "Wood"),
	EBT_Rock UMETA(DisplayName = "Rock"),
	EBT_Grass UMETA(DisplayName = "Grass"),
	
};
USTRUCT(BlueprintType)
struct FBallPhysicsProperties
{
	GENERATED_BODY()


	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Defaults")
	TEnumAsByte<EBallType> BallType;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Appearance")
	UMaterialInterface* MeshMaterial;
	UPROPERTY(BlueprintReadOnly,EditAnywhere, Category = "Physics Params")
	UPhysicalMaterial* PhysicalMaterial;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Physics Params")
	float MassValue =100.f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Physics Params")
	float LinearDamping =0.01f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Physics Params")
	float AngularDamping =0.f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Physics Movement")
	float MoveForceMultiplier = 1.f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category = "Physics Movement")
	float MaxLinearVelocity = 1000.f;
	
	
};