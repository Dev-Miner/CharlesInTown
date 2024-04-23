// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnerActor.h"

#include "StatsPrimaryDataAsset.h"

// Sets default values
ASpawnerActor::ASpawnerActor()//: TestDataAsset(nullptr)
	: TestStats(nullptr)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// UStatsPrimaryDataAsset ble = UStatsPrimaryDataAsset();
	// TSharedPtr<UStatsPrimaryDataAsset> stats = MakeShareable(&ble);
	// TestStats = stats.Get();
}

// Called when the game starts or when spawned
void ASpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

