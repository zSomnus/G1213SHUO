// Fill out your copyright notice in the Description page of Project Settings.


#include "ResetPad.h"
#include "Kismet/GameplayStatics.h"
#include "G1213SHUOCharacter.h"
#include "Engine.h"

// Sets default values
AResetPad::AResetPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;

}

// Called when the game starts or when spawned
void AResetPad::BeginPlay()
{
	Super::BeginPlay();

	Speed = 1;

	Distance = 200.f;
	
}

void AResetPad::Activate()
{

	TArray<TEnumAsByte<EObjectTypeQuery>> query;
	TArray<AActor*> ignore;
	TArray<AActor*> out;
	//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetTransform());
	UKismetSystemLibrary::SphereOverlapActors(this, this->GetActorLocation(), Distance, query, AG1213SHUOCharacter::StaticClass(), ignore, out);

	for (auto actor : out)
	{
		auto player = Cast<AG1213SHUOCharacter>(actor);

		if (player != nullptr)
		{
			//Player->HP -= 0.1f;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "Player");
			//Material->SetScalarParameterValue(TEXT("AlphaValue"), 1.0f);
			bInRange = true;
			/*FTimerHandle timer;
			GEngine->AddOnScreenDebugMessage(0, 0.1f, FColor::Black, "hhhhhhhhhhh");
			GetWorldTimerManager().SetTimer(timer, this, &AProximityMine::Explode, Delay, false);*/
			//GetWorldTimerManager().SetTimer(TimerHandle, this, &AProximityMine::Explode, Delay, false);
		}
	}
}

// Called every frame
void AResetPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Activate();
	if (bInRange)
	{
		auto player = Cast<AG1213SHUOCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
		if (player->LevelOfPlayer > 10 && player->LevelOfPlayer != 10)
		{
			player->LevelOfPlayer -= Speed * DeltaTime;
		}
		if (player->LevelOfPlayer < 10 && player->LevelOfPlayer != 10)
		{
			player->LevelOfPlayer += Speed * DeltaTime;
		}
	}
}

void AResetPad::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	auto player = Cast<AG1213SHUOCharacter>(Other);
	if (player != nullptr)
	{
		bInRange = true;
	}
}

