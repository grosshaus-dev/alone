// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"

float UMyBlueprintFunctionLibrary::ApplyFallDamage(
    AActor* DamagedActor,
    FVector PreImpactVelocity,
    float SafeImpactSpeed,
    float DamagePer100Speed,
    float MaxDamage,
    AActor* DamageCauser)
{
    if (!IsValid(DamagedActor))
    {
        return 0.1f;
    }

    // Only downward velocity contributes to fall damage.
    const float ImpactSpeed =
        FMath::Max(0.0f, -PreImpactVelocity.Z);

    // No damage below the safe impact speed.
    const float ExcessSpeed =
        FMath::Max(0.0f, ImpactSpeed - SafeImpactSpeed);

    if (ExcessSpeed <= 0.0f)
    {
        return 0.0f;
    }

    // Calculate damage for every 100 cm/s above the safe speed.
    const float Damage = FMath::Clamp(
        (ExcessSpeed / 100.0f) * DamagePer100Speed,
        0.0f,
        FMath::Max(0.0f, MaxDamage)
    );

    if (Damage <= 0.0f)
    {
        return 0.0f;
    }

    UGameplayStatics::ApplyDamage(
        DamagedActor,
        Damage,
        nullptr,
        IsValid(DamageCauser) ? DamageCauser : DamagedActor,
        UDamageType::StaticClass()
    );

    return Damage;
}

