//
//  Mission11.h
//
//  Finite state machine for "Mission11" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission11.kp by KAS2C Version 2.05
//


#ifndef __Mission11_H
#define __Mission11_H


//
//  types and exposed game functions
//
#include <string.h>
#include "Types.h"
#include "Vector.h"
#include "AITeam.h"
#include "AIMoves.h"
#include "CommandWrap.h"
#include "Timer.h"
#include "Volume.h"
#include "Objectives.h"
#include "Attributes.h"
#include "TradeMgr.h"


//
//  FSM prototypes
//
void Init_Mission11_FleetIntel(void);
void Watch_Mission11_FleetIntel(void);
void Init_Mission11_FleetIntel_FCIntro(void);
void Watch_Mission11_FleetIntel_FCIntro(void);
void Init_Mission11_FleetIntel_FIDefendTraders(void);
void Watch_Mission11_FleetIntel_FIDefendTraders(void);
void Init_Mission11_FleetIntel_FIResearchSuperHeavy(void);
void Watch_Mission11_FleetIntel_FIResearchSuperHeavy(void);
void Init_Mission11_FleetIntel_TradersThanks(void);
void Watch_Mission11_FleetIntel_TradersThanks(void);
void Init_Mission11_FleetIntel_TradersFirstWarning(void);
void Watch_Mission11_FleetIntel_TradersFirstWarning(void);
void Init_Mission11_FleetIntel_FICeaseFire(void);
void Watch_Mission11_FleetIntel_FICeaseFire(void);
void Init_Mission11_FleetIntel_TradersTellPlayer(void);
void Watch_Mission11_FleetIntel_TradersTellPlayer(void);
void Init_Mission11_FleetIntel_TradersPlayN08(void);
void Watch_Mission11_FleetIntel_TradersPlayN08(void);
void Init_Mission11_FleetIntel_TradersCouncilComin(void);
void Watch_Mission11_FleetIntel_TradersCouncilComin(void);
void Init_Mission11_FleetIntel_FIEngageHyperdrive(void);
void Watch_Mission11_FleetIntel_FIEngageHyperdrive(void);
void Init_Mission11_FleetIntel_FIIdle(void);
void Watch_Mission11_FleetIntel_FIIdle(void);
void Init_Mission11_Traders(void);
void Watch_Mission11_Traders(void);
void Init_Mission11_Traders_Flounder(void);
void Watch_Mission11_Traders_Flounder(void);
void Init_Mission11_Traders_FlyUpToPlayer(void);
void Watch_Mission11_Traders_FlyUpToPlayer(void);
void Init_Mission11_Traders_UnderAttackWatch(void);
void Watch_Mission11_Traders_UnderAttackWatch(void);
void Init_Mission11_Traders_TradersObliteratePlayer(void);
void Watch_Mission11_Traders_TradersObliteratePlayer(void);
void Init_Mission11_Traders_WaitToHyperspace(void);
void Watch_Mission11_Traders_WaitToHyperspace(void);
void Init_Mission11_Traders_HyperspaceOut(void);
void Watch_Mission11_Traders_HyperspaceOut(void);
void Init_Mission11_Traders_NullState(void);
void Watch_Mission11_Traders_NullState(void);
void Init_Mission11_Cruiser(void);
void Watch_Mission11_Cruiser(void);
void Init_Mission11_Cruiser_AttackTraders(void);
void Watch_Mission11_Cruiser_AttackTraders(void);
void Init_Mission11_Cruiser_DefendYourself(void);
void Watch_Mission11_Cruiser_DefendYourself(void);
void Init_Mission11_Cruiser_AttackPlayerMothership(void);
void Watch_Mission11_Cruiser_AttackPlayerMothership(void);
void Init_Mission11_Cruiser_NullState(void);
void Watch_Mission11_Cruiser_NullState(void);
void Init_Mission11(void);
void Watch_Mission11(void);


#endif
