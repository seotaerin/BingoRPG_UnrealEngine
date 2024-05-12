#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"
#include "PaperFlipbookComponent.h"
#include "cpp_fireball.generated.h"

UCLASS()
class BINGORPG_API Acpp_fireball : public AActor
{
	GENERATED_BODY()
	
public:	
	Acpp_fireball();

	UPROPERTY(VisibleAnywhere, Category = "Collision") USphereComponent* FireballColl;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation") UPaperFlipbookComponent* FireballImg;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Direction") UArrowComponent* root;
	UFUNCTION(BlueprintCallable, Category="Input") bool SetInputValue(const bool& InputValue);

private:
	FVector FireballVelocity;
	FMatrix RotationMatrix;
	bool inputvalue;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Fireball") float FireballSpeed;

public:	
	virtual void Tick(float DeltaTime) override;

};
