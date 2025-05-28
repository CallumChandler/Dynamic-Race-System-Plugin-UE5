// Fill out your copyright notice in the Description page of Project Settings.


#include "Prc_Testing.h"

bool UPrc_Testing::Debug_IsRecieverPresent(UDRS_Reciever* Rrc)
{
	return RActorArray.Contains(Rrc);
}

bool UPrc_Testing::Debug_IsBroadcasterPresent(UDRS_Broadcaster* Rrc)
{
	return BrActorArray.Contains(Rrc);
}