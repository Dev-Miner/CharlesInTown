// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatsPrimaryDataAsset.h"
#include "GameFramework/Actor.h"
#include "SpawnerActor.generated.h"

UCLASS(Blueprintable, BlueprintType)
class CHARLESINTOWN_API ASpawnerActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UStatsPrimaryDataAsset> TestStats;

	// UPROPERTY(EditAnywhere, BlueprintReadWrite)
	// TSoftClassPtr<UStatsPrimaryDataAsset> TestSoftClassRef;
	//
public:	
	// Sets default values for this actor's properties
	ASpawnerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
