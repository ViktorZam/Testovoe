// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseObject.h"

bool UBaseObject::ChangeOuter(UObject* NewOuter)
{
	return Rename(nullptr, NewOuter);
}
