// Fill out your copyright notice in the Description page of Project Settings.


#include "RarestCandy.h"
#include "G1213SHUOCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ARarestCandy::ARarestCandy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ARarestCandy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARarestCandy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARarestCandy::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<AG1213SHUOCharacter>(Other);
	if (player != nullptr)
	{
		player->CandyCount++;
		player->LevelOfPlayer += player->CandyCount;
		UGameplayStatics::PlaySoundAtLocation(this, Sound, this->GetActorLocation());
		Destroy();
	}
}

