// Fill out your copyright notice in the Description page of Project Settings.

#include "Character_Animal.h"


// Sets default values
ACharacter_Animal::ACharacter_Animal()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacter_Animal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_Animal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Animal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

