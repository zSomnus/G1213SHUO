// Fill out your copyright notice in the Description page of Project Settings.


#include "UnluckyTrap.h"
#include "G1213SHUOCharacter.h"
#include "Engine.h"

// Sets default values
AUnluckyTrap::AUnluckyTrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AUnluckyTrap::BeginPlay()
{
	Super::BeginPlay();

	Unlucky = 4;
	
}

// Called every frame
void AUnluckyTrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AUnluckyTrap::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<AG1213SHUOCharacter>(Other);
	if (player != nullptr)
	{
		if (player->LevelOfPlayer % Unlucky == 0)
		{

			GEngine->AddOnScreenDebugMessage(0, 1.0f, FColor::White, "2");
			player->LevelOfPlayer -= 2;
		}
		else
		{
			player->LevelOfPlayer -= 1;
		}
		Destroy();
	}
}

