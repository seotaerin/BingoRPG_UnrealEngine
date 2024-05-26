// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"
#include "PaperFlipbookComponent.h"
#include "cpp_Monster_Range.generated.h"

UCLASS()
class BINGORPG_API Acpp_Monster_Range : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acpp_Monster_Range();

	UPROPERTY(VisibleAnywhere, Category = "Collision") USphereComponent* MonsterRangeColl;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Animation") UPaperFlipbookComponent* MonsterAtkImg;
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Direcrtion") UArrowComponent* root;
	UFUNCTION(BlueprintCallable, Category = "Input") bool SetInputValue(const bool& inputValue);

private:
	FVector MonsterVelocity;
	FMatrix RotationMatrix;
	bool inputvalue;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components") float MonsterSpeed;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
