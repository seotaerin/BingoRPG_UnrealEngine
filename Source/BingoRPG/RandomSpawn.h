// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"
#include "PaperFlipbookComponent.h"
#include "PaperSpriteActor.h"
#include "RandomSpawn.generated.h"

UCLASS()
class BINGORPG_API ARandomSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomSpawn();

	UPROPERTY(VisibleAnywhere, Category = "Collision") USphereComponent* MonsterRangeColl;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Animation") UPaperFlipbookComponent* MonsterAtkImg;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Direcrtion") UArrowComponent* root;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<APaperSpriteActor> SpriteToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void SpawnActor();

};
