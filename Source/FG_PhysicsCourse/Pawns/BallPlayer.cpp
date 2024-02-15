// Fill out your copyright notice in the Description page of Project Settings.


#include "BallPlayer.h"

#include "Components/SphereComponent.h"
#include "FG_PhysicsCourse/Components/PhysicsMovementComponent.h"

ABallPlayer::ABallPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	SetRootComponent(SphereCollision);
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(GetRootComponent());
	PhysicsMovementComp = CreateDefaultSubobject<UPhysicsMovementComponent>(TEXT("Physics Movement Component"));
}

void ABallPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABallPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

