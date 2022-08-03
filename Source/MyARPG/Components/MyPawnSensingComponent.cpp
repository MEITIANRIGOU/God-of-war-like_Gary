// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/MyPawnSensingComponent.h"

bool UMyPawnSensingComponent::HasLineOfSightTo_BP(const AActor* Other) const
{
	return HasLineOfSightTo(Other);
}