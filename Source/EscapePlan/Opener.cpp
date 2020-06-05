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
	FRotator DoorOpen = GetOwner()->GetActorRotation();
	UE_LOG(LogTemp, Warning, TEXT("In Opner \nName=%s \nDesc=%f"), *GetOwner()->GetName(),DoorOpen.Yaw);
	DoorOpen.Yaw += 90.0f;
	GetOwner()->SetActorRotation(DoorOpen);
	
}


// Called every frame
void UOpener::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

