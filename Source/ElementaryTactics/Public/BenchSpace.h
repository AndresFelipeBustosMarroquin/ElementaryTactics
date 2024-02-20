#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BenchSpace.generated.h"


UENUM(BlueprintType)
enum CreatureType
{
	Empty UMETA(DisplayName = "Empty"),
	Hi UMETA(DisplayName = "Hi"),
	Hiur UMETA(DisplayName = "Hiur"),
	Hiurur UMETA(DisplayName = "Hiurur")
};

UCLASS()
class ELEMENTARYTACTICS_API ABenchSpace : public AActor
{
	GENERATED_BODY()
	
public:	
	ABenchSpace();

public:
	UPROPERTY(BlueprintReadWrite)
	float Position;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<CreatureType> Creature;

	UPROPERTY(BlueprintReadWrite)
	AActor* Actor;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};
