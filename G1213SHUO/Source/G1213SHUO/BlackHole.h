// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlackHole.generated.h"

UCLASS()
class G1213SHUO_API ABlackHole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlackHole();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
		float Distance;

	UPROPERTY(EditAnywhere)
		float Period;

	UPROPERTY(EditAnywhere)
		float StringForce;

	UPROPERTY(VisibleAnywhere)
		FVector Impulse;
private:

	UMaterialInstanceDynamic* Material;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Activate();

	void Pulses();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
