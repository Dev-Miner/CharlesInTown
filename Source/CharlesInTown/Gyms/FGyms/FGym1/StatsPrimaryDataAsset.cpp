// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsPrimaryDataAsset.h"

// UTestPrimaryDataAsset::UTestPrimaryDataAsset()
// {
// }
FGhostStats::FGhostStats(FString ghostName, int hp)
{
	GhostName = ghostName;
	HP = hp;
}

UStatsPrimaryDataAsset::UStatsPrimaryDataAsset()
{
}

FPrimaryAssetId UStatsPrimaryDataAsset::GetPrimaryAssetId() const
{
	return Super::GetPrimaryAssetId();
}

// TSubclassOf<AActor> UTestPrimaryDataAsset::GetClass() const
// {
// 	return ClassToSpawn;
// }

FString UStatsPrimaryDataAsset::GetName()
{
	return SpawnedActorName;
}
