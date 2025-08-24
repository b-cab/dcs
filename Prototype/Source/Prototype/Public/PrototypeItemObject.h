// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/Interfaces/PrototypeInteractable.h"
#include "Public/Interfaces/PrototypeItem.h"
#include "PrototypeItemObject.generated.h"

UCLASS()
class PROTOTYPE_API APrototypeItemObject : public AActor, public IPrototypeItem, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APrototypeItemObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Prototype|Game Object")
	FName ItemName = "Item Name";

	/** Item Id data */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category ="Items")
	int ItemId = -1;
};
