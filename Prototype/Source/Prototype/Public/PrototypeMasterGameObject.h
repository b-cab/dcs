// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PrototypeInteractable.h"
#include "GameFramework/Actor.h"
#include "PrototypeMasterGameObject.generated.h"

UCLASS()
class PROTOTYPE_API APrototypeMasterGameObject : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APrototypeMasterGameObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Prototype| Game Object")
	FName Name = "Item Name";
};
