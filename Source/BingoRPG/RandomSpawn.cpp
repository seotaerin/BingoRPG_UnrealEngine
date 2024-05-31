// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomSpawn.h"
#include "PaperSpriteActor.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ARandomSpawn::ARandomSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<UArrowComponent>(TEXT("root"));
	RootComponent = root;

	MonsterRangeColl = CreateDefaultSubobject<USphereComponent>(TEXT("MonsterRange"));
	MonsterRangeColl->SetupAttachment(root);
	MonsterRangeColl->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	MonsterAtkImg = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("MonsterAtkImg"));
	MonsterAtkImg->SetupAttachment(root);
	MonsterAtkImg->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void ARandomSpawn::BeginPlay()
{
	Super::BeginPlay();
	SpawnActor();
}

// Called every frame
void ARandomSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARandomSpawn::SpawnActor()
{
	if (!SpriteToSpawn) return;

	const int32 SpawnCount = 10;  // 고정된 스폰 개수

	for (int32 i = 0; i < SpawnCount; i++)
	{
		float RandomX = FMath::RandRange(-250.0f, 270.0f);
		float RandomY = FMath::RandRange(-270.0f, 380.0f);
		FVector RandomLocation = FVector(RandomX, RandomY, 50.0f);  // Z는 고정

		FRotator SpawnRotation = FRotator::ZeroRotator;

		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<APaperSpriteActor>(SpriteToSpawn, RandomLocation, SpawnRotation, SpawnParams);
	}
}