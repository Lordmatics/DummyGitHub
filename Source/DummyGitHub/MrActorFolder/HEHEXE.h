// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "HEHEXE.generated.h"

UCLASS()
class DUMMYGITHUB_API AHEHEXE : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHEHEXE();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
