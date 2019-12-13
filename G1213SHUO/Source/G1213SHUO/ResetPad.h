// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResetPad.generated.h"

UCLASS()
class G1213SHUO_API AResetPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AResetPad();

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		int Speed;

	UPROPERTY(EditAnywhere)
		float Distance;

	UPROPERTY(VisibleAnywhere)
		class AG1213SHUOCharacter* Player;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Activate();

	bool bInRange;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
