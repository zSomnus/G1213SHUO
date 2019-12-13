// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnluckyTrap.generated.h"

UCLASS()
class G1213SHUO_API AUnluckyTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnluckyTrap();


	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
		int Unlucky;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AG1213SHUOCharacter* Player;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

};
