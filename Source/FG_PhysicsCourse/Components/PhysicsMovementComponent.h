// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsMovementComponent.generated.h"


struct FBallPhysicsProperties;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable,BlueprintType)
class FG_PHYSICSCOURSE_API UPhysicsMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPhysicsMovementComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	void PhysicsMove(UPrimitiveComponent* RootComp,FBallPhysicsProperties CurrentBallProperties, FVector2D MoveInput);
};
