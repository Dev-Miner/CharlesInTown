// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatsPrimaryDataAsset.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FGhostStats
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GhostName = "Default Name";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int HP = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACharacter> BPClass;

public:
	FGhostStats(FString ghostName = "Default", int hp = 10);
};


/**
 * 
 */
UCLASS(/*Abstract,*/ BlueprintType, Blueprintable)
class CHARLESINTOWN_API UStatsPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UStatsPrimaryDataAsset();
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpawnedActorName = "Default";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ClassToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGhostStats TestSTats;
	

	//
	// UFUNCTION()
	// TSubclassOf<AActor> GetClass() const;

	UFUNCTION(BlueprintCallable)
	FString GetName();

};
