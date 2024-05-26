#include "cpp_fireball.h"


Acpp_fireball::Acpp_fireball()
{
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<UArrowComponent>(TEXT("root"));
	RootComponent = root;
	
	FireballColl = CreateDefaultSubobject<USphereComponent>(TEXT("FireballColl"));
	FireballColl->SetupAttachment(root);
	FireballColl->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	
	FireballImg = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("FireballImg"));
	FireballImg->SetupAttachment(root); 
	FireballImg->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void Acpp_fireball::BeginPlay()
{
	Super::BeginPlay();

	AActor* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if(PlayerPawn)
	{

		FVector CharacterDirection = PlayerPawn->GetActorForwardVector();
		FVector RotatedDirection = RotationMatrix.TransformVector(CharacterDirection);

		FireballVelocity = RotatedDirection * FireballSpeed;
	}
	
}

void Acpp_fireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Direction = inputvalue ? -FVector::RightVector : FVector::RightVector;
	FireballVelocity = Direction * FireballSpeed;

	FVector NewLocation = GetActorLocation() + (DeltaTime * FireballVelocity);
	SetActorLocation(NewLocation);

}

bool Acpp_fireball::SetInputValue(const bool& InputValue)
{
	inputvalue = InputValue;
	return inputvalue;
}

