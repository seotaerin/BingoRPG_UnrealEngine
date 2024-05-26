#include "cpp_Monster_Range.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
Acpp_Monster_Range::Acpp_Monster_Range()
{
 	
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<UArrowComponent>(TEXT("root"));
	RootComponent = root;

	MonsterRangeColl = CreateDefaultSubobject<USphereComponent>(TEXT("MonsterRange"));
	MonsterRangeColl->SetupAttachment(root);
	MonsterRangeColl->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	MonsterAtkImg = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("MonsterAtkImg"));
	MonsterAtkImg->SetupAttachment(root);
	MonsterAtkImg->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	MonsterSpeed = 100.0f;
	inputvalue = false;

}

// Called when the game starts or when spawned
void Acpp_Monster_Range::BeginPlay()
{
	Super::BeginPlay();

	AActor* MonsterPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (MonsterPawn)
	{
		FVector TargetLocation = MonsterPawn->GetActorLocation();
		FVector FireballLocation = GetActorLocation();

		FVector Direction = (TargetLocation - FireballLocation).GetSafeNormal();
		MonsterVelocity = Direction * MonsterSpeed;
	}


	
}

void Acpp_Monster_Range::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Direction = inputvalue ? -FVector::RightVector : FVector::RightVector;
	MonsterVelocity = Direction * MonsterSpeed;

	FVector NewLocation = GetActorLocation() + (DeltaTime * MonsterVelocity);
	SetActorLocation(NewLocation);
}

bool Acpp_Monster_Range::SetInputValue(const bool& inputValue)
{
	inputvalue = inputValue;
	return inputvalue;
}

