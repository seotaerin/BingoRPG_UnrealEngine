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

	UPROPERTY(VisibleAnywhere, Category = "Collision") USphereComponent* ballColl;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animation") UPaperFlipbookComponent* ballImg;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Direction") UArrowComponent* root;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "throw") bool isThrowing=true;
	UFUNCTION(BlueprintCallable, Category="Input") bool SetInputValue(const bool& InputValue);

private:
	FVector FireballVelocity;
	FMatrix RotationMatrix;
	bool inputvalue;
	void throwBall(float deltatime);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Fireball") float FireballSpeed;
	UFUNCTION(BlueprintNativeEvent, Category = "direction")
	FVector ballRotation();

public:	
	virtual void Tick(float DeltaTime) override;

};
