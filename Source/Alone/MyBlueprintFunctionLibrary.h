#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

UCLASS()
class ALONE_API UMyBlueprintFunctionLibrary
    : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Damage|Fall")
    static float ApplyFallDamage(
        AActor* DamagedActor,
        FVector PreImpactVelocity,
        float SafeImpactSpeed = 1000.0f,
        float DamagePer100Speed = 10.0f,
        float MaxDamage = 100.0f,
        AActor* DamageCauser = nullptr
    );
};