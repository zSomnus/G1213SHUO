// Fill out your copyright notice in the Description page of Project Settings.


#include "BlackHole.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "G1213SHUOCharacter.h"
#include "Engine.h"

// Sets default values
ABlackHole::ABlackHole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

	Impulse = FVector(0.0f, 0.0f, 0.0f);
}

// Called when the game starts or when spawned
void ABlackHole::BeginPlay()
{
	Super::BeginPlay();
	if (Material != nullptr)
	{
		Material->SetScalarParameterValue(TEXT("Value"), 0.0f);
	}

	Material = MeshComponent->CreateDynamicMaterialInstance(0);
}

void ABlackHole::Activate()
{
	auto player = Cast<AG1213SHUOCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	TArray<TEnumAsByte<EObjectTypeQuery>> query;
	TArray<AActor*> ignore;
	TArray<AActor*> out;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());
	UKismetSystemLibrary::SphereOverlapActors(this, this->GetActorLocation(), Distance, query, AG1213SHUOCharacter::StaticClass(), ignore, out);

	for (auto actor : out)
	{
		auto player = Cast<AG1213SHUOCharacter>(actor);

		if (player != nullptr)
		{
			//Player->HP -= 0.1f;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "Player");
			Material->SetScalarParameterValue(TEXT("Value"), 1.0f);

			FTimerHandle timer;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "hhhhhhhhhhh");
			GetWorldTimerManager().SetTimer(timer, this, &ABlackHole::Pulses, Period, true);
			//GetWorldTimerManager().SetTimer(TimerHandle, this, &AProximityMine::Explode, Delay, false);
		}
	}

}

void ABlackHole::Pulses()
{
	auto player = Cast<AG1213SHUOCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	Impulse = FVector(-StringForce);
}

// Called every frame
void ABlackHole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

