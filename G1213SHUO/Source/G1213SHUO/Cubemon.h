// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubemon.generated.h"

UCLASS()
class G1213SHUO_API ACubemon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubemon();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* BodyMeshComponent;
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* HeadMeshComponent;

	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* WidgetComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
