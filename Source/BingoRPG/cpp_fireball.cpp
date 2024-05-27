#include "cpp_fireball.h"


Acpp_fireball::Acpp_fireball()
{
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<UArrowComponent>(TEXT("root"));
	RootComponent = root;
	
	ballColl = CreateDefaultSubobject<USphereComponent>(TEXT("ballColl"));
	ballColl->SetupAttachment(root);
	ballColl->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	
	ballImg = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("ballImg"));
	ballImg->SetupAttachment(root); 
	ballImg->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void Acpp_fireball::BeginPlay()
{
	Super::BeginPlay();

	AActor* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if(PlayerPawn)
	{

		FVector CharacterDirection = this->GetActorForwardVector();
		FVector RotatedDirection = RotationMatrix.TransformVector(CharacterDirection);

		FireballVelocity = RotatedDirection * FireballSpeed;
	}
	
}

void Acpp_fireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(isThrowing){throwBall(DeltaTime);}
}

void Acpp_fireball::throwBall(float deltatime)
{
	
	FireballVelocity = ballRotation() * FireballSpeed;

	FVector NewLocation = GetActorLocation() + (deltatime * FireballVelocity);
	SetActorLocation(NewLocation);
}

FVector Acpp_fireball::ballRotation_Implementation()
{
	FVector Direction = inputvalue ? -FVector::RightVector : FVector::RightVector;
	return Direction;
}

bool Acpp_fireball::SetInputValue(const bool& InputValue)
{
	inputvalue = InputValue;
	return inputvalue;
}

