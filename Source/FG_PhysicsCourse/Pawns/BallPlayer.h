// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FG_PhysicsCourse/PhysicsStructs/BallPhysicsProperties.h"
#include "GameFramework/Pawn.h"
#include "BallPlayer.generated.h"

class USphereComponent;
class UPhysicsMovementComponent;

UCLASS()
class FG_PHYSICSCOURSE_API ABallPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABallPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(BlueprintReadWrite,EditAnywhere, DisplayName = "SphereCollision")
	TObjectPtr<USphereComponent> SphereCollision;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, DisplayName = "Mesh")
	TObjectPtr<UStaticMeshComponent> StaticMesh; 
	UPROPERTY(BlueprintReadWrite,EditAnywhere, DisplayName = "Physics Movement Component")
	TObjectPtr<UPhysicsMovementComponent> PhysicsMovementComp;

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TArray<FBallPhysicsProperties> BallPhysicsProperties;

};
