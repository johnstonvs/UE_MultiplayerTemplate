// Stephen Johnston


#include "MP_Actor.h"


// Sets default values
AMP_Actor::AMP_Actor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Allow the actor to be loaded on the client side
	bNetLoadOnClient = true;
	
	// Allow this actor's variables to replicate
	bReplicates = true;

	// Allows this actor's movement to be replicated
	// SeReplicateMovement is a virtual function that should not be called in a constructor
	// SetReplicatingMovement must be used
	SetReplicatingMovement(true);
}

// Called when the game starts or when spawned
void AMP_Actor::BeginPlay()
{
	Super::BeginPlay();
	
	const bool bAuth = HasAuthority();
	const ENetRole LocalRole = GetLocalRole();
}

// Called every frame
void AMP_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

