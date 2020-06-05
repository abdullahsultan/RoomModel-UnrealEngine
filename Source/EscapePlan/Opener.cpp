// Fill out your copyright notice in the Description page of Project Settings.


#include "Opener.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpener::UOpener()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpener::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Yaw = 90.0f;
	
}


// Called every frame
void UOpener::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UE_LOG(LogTemp, Warning, TEXT("In Opner \nName=%s \nRotation Yaw=%f"), *GetOwner()->GetName(), GetOwner()->GetActorRotation().Yaw);
	float StartYaw = GetOwner()->GetActorRotation().Yaw;
	FRotator Rotator = FRotator(0.0f, Yaw, 0.0f);
	Rotator.Yaw =	FMath::Lerp(StartYaw, Yaw, 0.010f);
	GetOwner()->SetActorRotation(Rotator);

	// ...
}

