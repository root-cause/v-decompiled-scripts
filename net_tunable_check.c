#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	while (true)
	{
		if (func_7() || Global_1957703 == 1)
		{
			func_6();
		}
		if (func_1(&uLocal_21, &Global_295821))
		{
			func_6();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0, var uParam1)//Position - 0x6D
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (uParam0->f_2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), uParam0->f_1)) >= uParam0->f_3)
		{
			func_5();
		}
	}
	else
	{
		if (!*uParam1)
		{
			return 0;
		}
		iVar4 = 5;
		if (NETWORK::NETWORK_CAN_BAIL())
		{
			iVar5 = 2348;
			iVar6 = (uParam0->f_4 + iVar4);
			iVar7 = func_4(*uParam0);
			iVar2 = uParam0->f_4;
			while (iVar2 <= iVar6)
			{
				if (iVar2 < iVar5)
				{
					func_2(iVar2, &Var3);
					if (iVar2 >= Var3.f_4 && iVar2 != 27)
					{
						if (iVar7 != 0 && Var3.f_5 != 0)
						{
							if (unk_0xA0D79393A2E01ED3(iVar7, Var3.f_5, &fVar0))
							{
								if (fVar0 > Var3.f_1 || fVar0 < Var3.f_0)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
							else if (NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar7, Var3.f_5, &iVar1))
							{
								if (iVar1 > Var3.f_3 || iVar1 < Var3.f_2)
								{
									uParam0->f_2 = 1;
									uParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
									uParam0->f_1 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				uParam0->f_4++;
				iVar2++;
			}
			if (uParam0->f_4 >= 2348)
			{
				uParam0->f_4 = 0;
				*uParam0++;
				if (*uParam0 >= 29)
				{
					*uParam0 = 0;
					*uParam1 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_2(int iParam0, var uParam1)//Position - 0x1CD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CASH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 2:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAX_HEALTH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 3:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAX_ARMOR_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 4:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("HOLD_UP_CASH_REWARD_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 5:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("HEALTH_REGEN_RATE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 6:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("HEALTH_REGEN_MAX_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 7:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("PED_DROP_CASH_MULTIPLIER");
			uParam1->f_4 = 0;
			break;
		
		case 8:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 813685198;
			uParam1->f_4 = 1;
			break;
		
		case 9:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_1_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 10:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_2_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 11:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_3_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 12:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_4_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 13:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BOUNTY_AWARD_LEVEL_5_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 14:
			*uParam1 = 2000f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 15:
			*uParam1 = 2000f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("LOW_TUTORIAL_WALLET_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 16:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("HIGH_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 17:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("LOW_TUTORIAL_BANK_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 18:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WIN_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 19:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_DEATHMATCH_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 20:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WIN_RACE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 21:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("CASH_MODIFIER_CRATE_DROP_GANG_ATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 22:
			*uParam1 = 0f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("HIGH_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 23:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("LOW_ROCKSTAR_MISSIONS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 24:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("CARMOD_CAR_VAL_SELL_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 27:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("IMP_EXP_EARN_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 28:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("EARNINGS_IMPORT_EXPORT_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 29:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("HIGH_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 30:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("LOW_HOLD_UPS_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 31:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("HIGH_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 32:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("LOW_LESTER_NPC_TARGET_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 33:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_CASH_AWARD_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 34:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 35:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_LO");
			uParam1->f_4 = 1;
			break;
		
		case 36:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("ARMOURED_TRUCK_EARNINGS_MULTIPLIER_HI");
			uParam1->f_4 = 1;
			break;
		
		case 37:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPROMPTU_DM_ENTRY_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 38:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_EXPENSES_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 39:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("IMPROMPTU_RACE_ENTRY_FEE_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 40:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("MAX_BET_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 41:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("MIN_BET_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 42:
			*uParam1 = 50f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SHORT_ODDS_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 43:
			*uParam1 = 1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("LONG_ODDS_LIMIT");
			uParam1->f_4 = 1;
			break;
		
		case 44:
			*uParam1 = 10f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("BOOKIE_RAKE");
			uParam1->f_4 = 1;
			break;
		
		case 45:
			*uParam1 = 0f;
			uParam1->f_1 = 120000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 120000;
			uParam1->f_5 = joaat("MAX_BET_TOTAL_AMOUNT_ON_A_SINGLE_PLAYER");
			uParam1->f_4 = 1;
			break;
		
		case 46:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 47:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW");
			uParam1->f_4 = 1;
			break;
		
		case 48:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ARMORED_TRUCK");
			uParam1->f_4 = 1;
			break;
		
		case 49:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_KILLER");
			uParam1->f_4 = 1;
			break;
		
		case 50:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BOUNTIES_TARGET");
			uParam1->f_4 = 1;
			break;
		
		case 51:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP");
			uParam1->f_4 = 1;
			break;
		
		case 52:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CRATE_DROP_ENEMY_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 53:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 54:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GANG_ATTACK_ENEMY_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 55:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_HOLD_UPS");
			uParam1->f_4 = 1;
			break;
		
		case 56:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_IMPORTEXPORT");
			uParam1->f_4 = 1;
			break;
		
		case 57:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LESTER_NPC_TARGET");
			uParam1->f_4 = 1;
			break;
		
		case 58:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ARM_WRESTLING");
			uParam1->f_4 = 1;
			break;
		
		case 59:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_GOLF");
			uParam1->f_4 = 1;
			break;
		
		case 60:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_ALL_GOLF_BONUSES");
			uParam1->f_4 = 1;
			break;
		
		case 61:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_SHOOTING_RANGE");
			uParam1->f_4 = 1;
			break;
		
		case 62:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_WIN");
			uParam1->f_4 = 1;
			break;
		
		case 63:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_TAKING_PART");
			uParam1->f_4 = 1;
			break;
		
		case 64:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_GAME");
			uParam1->f_4 = 1;
			break;
		
		case 65:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_SET");
			uParam1->f_4 = 1;
			break;
		
		case 66:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_MINIGAMES_TENNIS_RALLY");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_DEAD_CENTRE");
			uParam1->f_4 = 1;
			break;
		
		case 68:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_IN_THE_CIRCLE");
			uParam1->f_4 = 1;
			break;
		
		case 69:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_TUNABLE_PARACHUTING_CLIP_THE_OUTER_RING");
			uParam1->f_4 = 1;
			break;
		
		case 70:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RACE_TO_POINT");
			uParam1->f_4 = 1;
			break;
		
		case 71:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_KILL");
			uParam1->f_4 = 1;
			break;
		
		case 72:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 73:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_2ND_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 74:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DEATHMATCH_3RD_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 75:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_3_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 76:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_6_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 77:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_10_KILLS");
			uParam1->f_4 = 1;
			break;
		
		case 78:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_HEADSHOT");
			uParam1->f_4 = 1;
			break;
		
		case 79:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_END_KILLSTREAK");
			uParam1->f_4 = 1;
			break;
		
		case 80:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_REVENGE_KILLSTREAK");
			uParam1->f_4 = 1;
			break;
		
		case 81:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_POWER_PLAY_PLAYER");
			uParam1->f_4 = 1;
			break;
		
		case 85:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PODIUM_FINISH");
			uParam1->f_4 = 1;
			break;
		
		case 86:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_WITHOUT_DYING");
			uParam1->f_4 = 1;
			break;
		
		case 87:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_POWER_PLAYS");
			uParam1->f_4 = 1;
			break;
		
		case 88:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_DM_FINAL_KILL_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 89:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RUNOVERUSINGVEHICLEDM");
			uParam1->f_4 = 1;
			break;
		
		case 90:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_2_WITHIN_10_SECONDSDM");
			uParam1->f_4 = 1;
			break;
		
		case 91:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_FIRST_30_SECONDSDM");
			uParam1->f_4 = 1;
			break;
		
		case 92:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CLOSE_TO_DEATHDM");
			uParam1->f_4 = 1;
			break;
		
		case 93:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LEAST_5_HEADSHOT_KILLSDM");
			uParam1->f_4 = 1;
			break;
		
		case 94:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERMELEEATTACK");
			uParam1->f_4 = 1;
			break;
		
		case 95:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_MORE_KILLS_NO_HEALTH_PACKSDM");
			uParam1->f_4 = 1;
			break;
		
		case 96:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_WITH_A_KD_RATIO_OF_AT_LEAST_2DM");
			uParam1->f_4 = 1;
			break;
		
		case 97:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_WIN_USING_ONLY_PISTOLDM");
			uParam1->f_4 = 1;
			break;
		
		case 98:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISH_TOP_3DM");
			uParam1->f_4 = 1;
			break;
		
		case 99:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GET_A_KILL_STREAKVDM");
			uParam1->f_4 = 1;
			break;
		
		case 100:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_TWO_ENEMIES_WITHIN_10SEC_OF_EACH_OTHERVDM");
			uParam1->f_4 = 1;
			break;
		
		case 101:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ENEMY_WITHIN_THE_60_SECONDSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 102:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLENEMY_WHILE_YOUR_VEHICLE_IS_ON_FIREVDM");
			uParam1->f_4 = 1;
			break;
		
		case 103:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_RECOVER_FROM_DEATHSTREAK_FINISH_WITH_MORE_KILLS_THAN_DEATHSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 104:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPLAYERWHENDEADVDM");
			uParam1->f_4 = 1;
			break;
		
		case 105:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHMOREKILLSTHANDEATHSVDM");
			uParam1->f_4 = 1;
			break;
		
		case 106:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GETFIRSTKILLVDM");
			uParam1->f_4 = 1;
			break;
		
		case 107:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILLPOWERPLAYERVDM");
			uParam1->f_4 = 1;
			break;
		
		case 108:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FINISHVDMINTOP3VDM");
			uParam1->f_4 = 1;
			break;
		
		case 109:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_MISSIONS_BONUSES");
			uParam1->f_4 = 1;
			break;
		
		case 110:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_ALL_ENEMIES_ON_A_MISSION");
			uParam1->f_4 = 1;
			break;
		
		case 111:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_INDIVIDUAL");
			uParam1->f_4 = 1;
			break;
		
		case 112:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ONLY_KILL_ENEMIES_WITH_HEADSHOTS_TEAM");
			uParam1->f_4 = 1;
			break;
		
		case 113:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_NOT_LOSING_ANY_LIVES_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 114:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DELIVER_A_PACKAGE_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 115:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DIFFICULTY_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_WINNERS");
			uParam1->f_4 = 1;
			break;
		
		case 117:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_LOSERS");
			uParam1->f_4 = 1;
			break;
		
		case 118:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LAST_TEAM_STANDING_SURVIVOR_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 119:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 120:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_2ND_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 121:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_ROCKSTAR_RACES_3RD_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 122:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_5_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 123:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_10_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 124:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_OVERTAKE_ANOTHER_PLAYER_15_TIMES");
			uParam1->f_4 = 1;
			break;
		
		case 125:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SLIPSTREAM_FOR_5_SECONDS");
			uParam1->f_4 = 1;
			break;
		
		case 126:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BE_IN_FIRST_PLACE_FOR_A_WHOLE_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 127:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_GO_IN_TO_1ST_PLACE");
			uParam1->f_4 = 1;
			break;
		
		case 128:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_CLEAN_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 129:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FASTEST_LAP");
			uParam1->f_4 = 1;
			break;
		
		case 130:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_PERSONAL_BEST_LAP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_FLYING_UNDER_BRIDGES");
			uParam1->f_4 = 1;
			break;
		
		case 132:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_WAVE_REACHED");
			uParam1->f_4 = 1;
			break;
		
		case 133:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_ENEMY_KILL");
			uParam1->f_4 = 1;
			break;
		
		case 134:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_SURVIVAL_VEHICLE_DESTROYED");
			uParam1->f_4 = 1;
			break;
		
		case 135:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_BRONZE");
			uParam1->f_4 = 1;
			break;
		
		case 136:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_SILVER");
			uParam1->f_4 = 1;
			break;
		
		case 137:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_GOLD");
			uParam1->f_4 = 1;
			break;
		
		case 138:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 1;
			break;
		
		case 139:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_1_BUDDY");
			uParam1->f_4 = 1;
			break;
		
		case 140:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_2_BUDDIES");
			uParam1->f_4 = 1;
			break;
		
		case 141:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_BUDDY_IN_CAR_RESPECT_3_BUDDIES");
			uParam1->f_4 = 1;
			break;
		
		case 142:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_1_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 143:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_2_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 144:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_3_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 145:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_4_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 146:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_LOSE_WANTED_LEVEL_5_STAR");
			uParam1->f_4 = 1;
			break;
		
		case 147:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_TIME_WITH_5STAR_WANTED_LEVEL");
			uParam1->f_4 = 1;
			break;
		
		case 148:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_STUNT_JUMPS");
			uParam1->f_4 = 1;
			break;
		
		case 149:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -623433531;
			uParam1->f_4 = 1;
			break;
		
		case 150:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("PSANDQS_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 151:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("EGOCHASER_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 152:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("METEORITE_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 153:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("REDWOOD_HEALTH_DEPLETE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 154:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("ORANGOTANG_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 155:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("BOURGEOIX_HEALTH_REPLENISH_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 156:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("XP_TUNABLE_AWARDS_PLATINUM");
			uParam1->f_4 = 1;
			break;
		
		case 157:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_MAX");
			uParam1->f_4 = 1;
			break;
		
		case 158:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("CRATE_DROP_CASH_TOTAL_MAX");
			uParam1->f_4 = 1;
			break;
		
		case 159:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 160:
			*uParam1 = -1f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("CRATE_DROP_XP");
			uParam1->f_4 = 1;
			break;
		
		case 161:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("CRATE_DROP_SPECIAL_XP");
			uParam1->f_4 = 1;
			break;
		
		case 162:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_BULLSEYE");
			uParam1->f_4 = 1;
			break;
		
		case 163:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_LEG_WON");
			uParam1->f_4 = 1;
			break;
		
		case 164:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_TAKING_PART");
			uParam1->f_4 = 1;
			break;
		
		case 165:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("XP_TUNABLE_DARTS_MATCH_WIN");
			uParam1->f_4 = 1;
			break;
		
		case 166:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("XP_MODIFIER_BUDDY_IN_CAR");
			uParam1->f_4 = 1;
			break;
		
		case 167:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("KILLSTREAK_BONUS_ON_MISSION_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 168:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("HOSPITAL_BILL_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 169:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("CASH_DROP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 170:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("WANTED_LEVEL_BAIL_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 171:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 172:
			*uParam1 = 50f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("RACE_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 173:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("RACE_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 174:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 175:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("RACE_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 176:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 177:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("RACE_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 178:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("RACE_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 179:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 180:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("DM_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 181:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("DM_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 182:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 183:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("DM_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 184:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 185:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("DM_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 186:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("DM_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 187:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 188:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 189:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("PARACHUTING_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 190:
			*uParam1 = 4f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 191:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("PARACHUTING_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 192:
			*uParam1 = 200f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 193:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("PARACHUTING_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 194:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("PARACHUTING_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 195:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 196:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_RP_POINT_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 197:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_RP_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 198:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("LTS_RP_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 199:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("LTS_RP_MIN_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 200:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("LTS_RP_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 201:
			*uParam1 = 10f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 30;
			uParam1->f_5 = joaat("LTS_RP_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 202:
			*uParam1 = 20f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 203:
			*uParam1 = 50f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("LTS_RP_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 204:
			*uParam1 = 0.5f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("LTS_RP_END_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 205:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("RACE_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 206:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("RACE_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 207:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 208:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 209:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("RACE_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 210:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("RACE_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 211:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("RACE_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 212:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("DM_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 213:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("DM_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 214:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 1124:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = -140847750;
			uParam1->f_4 = 1;
			break;
		
		case 1125:
			*uParam1 = 4f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 4;
			uParam1->f_3 = 16;
			uParam1->f_5 = -190820730;
			uParam1->f_4 = 1;
			break;
		
		case 215:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 216:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("DM_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 217:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("DM_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 218:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("DM_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 219:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("PARACHUTING_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 220:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PARACHUTING_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 221:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 222:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 223:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("PARACHUTING_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 224:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("PARACHUTING_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 225:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("PARACHUTING_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 226:
			*uParam1 = 1f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("LTS_PLAYER_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 227:
			*uParam1 = 50f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 50;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("LTS_BASIC");
			uParam1->f_4 = 1;
			break;
		
		case 228:
			*uParam1 = 2f;
			uParam1->f_1 = 12f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 12;
			uParam1->f_5 = joaat("LTS_MAX_PLAYERS");
			uParam1->f_4 = 1;
			break;
		
		case 229:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_MAX_JOB_DECIDER");
			uParam1->f_4 = 1;
			break;
		
		case 230:
			*uParam1 = 20f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("LTS_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 231:
			*uParam1 = 20f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 20;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("LTS_RANK_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 232:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("LTS_END_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 233:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 234:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 235:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 236:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 237:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 238:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 239:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RACE_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 240:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("RACE_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 241:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 242:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 243:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 244:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 245:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 246:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 247:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("DM_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 248:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("DM_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 249:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 250:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 251:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 252:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 253:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 254:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 255:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 256:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 257:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 258:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 259:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 260:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 261:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 262:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 263:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_RP_TIME_PERIOD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 264:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_RP_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 265:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_1");
			uParam1->f_4 = 1;
			break;
		
		case 266:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 267:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_2");
			uParam1->f_4 = 1;
			break;
		
		case 268:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 269:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_3");
			uParam1->f_4 = 1;
			break;
		
		case 270:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 271:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_RACE_MINUTES_UNDER_4");
			uParam1->f_4 = 1;
			break;
		
		case 272:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_RACE_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 273:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_1");
			uParam1->f_4 = 1;
			break;
		
		case 274:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_1MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 275:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_2");
			uParam1->f_4 = 1;
			break;
		
		case 276:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_2MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 277:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_3");
			uParam1->f_4 = 1;
			break;
		
		case 278:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_3MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 279:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("TIMESCALE_DM_MINUTES_UNDER_4");
			uParam1->f_4 = 1;
			break;
		
		case 280:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("TIMESCALE_DM_UNDER_4MIN_CASH_MOD_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 281:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 282:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 283:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 284:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 285:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 286:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 287:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("LTS_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 288:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("LTS_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 289:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 290:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_1");
			uParam1->f_4 = 1;
			break;
		
		case 291:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 292:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_2");
			uParam1->f_4 = 1;
			break;
		
		case 293:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 294:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_3");
			uParam1->f_4 = 1;
			break;
		
		case 295:
			*uParam1 = 1f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("PARACHUTING_TIME_PERIOD_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 296:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("PARACHUTING_PERCENTAGE_CASH_REWARD_MODIFIER_4");
			uParam1->f_4 = 1;
			break;
		
		case 297:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = joaat("RP_REWARD_PER_LIKE");
			uParam1->f_4 = 1;
			break;
		
		case 299:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_HEAD_TO_HEAD");
			uParam1->f_4 = 1;
			break;
		
		case 298:
			*uParam1 = 1f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("ELO_BANDING_SPACING");
			uParam1->f_4 = 1;
			break;
		
		case 300:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("MAX_CASH_WAGER_FOR_CREW_CHALLENGES");
			uParam1->f_4 = 1;
			break;
		
		case 301:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("RP_REWARD_LIKE_CAP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 25:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("HIGH_SELLING_VEHICLES_MAX_VALUE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 26:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -723379143;
			uParam1->f_4 = 1;
			break;
		
		case 303:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 304:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("CHEAT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 1;
			break;
		
		case 305:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("CHEAT_RESET_MINUTES");
			uParam1->f_4 = 1;
			break;
		
		case 306:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY");
			uParam1->f_4 = 1;
			break;
		
		case 307:
			*uParam1 = 0f;
			uParam1->f_1 = 6000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6000;
			uParam1->f_5 = joaat("GOOD_BOY_CASH_AWARD");
			uParam1->f_4 = 1;
			break;
		
		case 308:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_HELPFUL");
			uParam1->f_4 = 1;
			break;
		
		case 309:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BY_FRIENDLY");
			uParam1->f_4 = 1;
			break;
		
		case 310:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_GRIEFING");
			uParam1->f_4 = 1;
			break;
		
		case 311:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_LANGUAGE");
			uParam1->f_4 = 1;
			break;
		
		case 312:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("AMOUNT_TO_DESTORYED_PVEHICLE");
			uParam1->f_4 = 1;
			break;
		
		case 313:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_VOTED_OUT");
			uParam1->f_4 = 1;
			break;
		
		case 314:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_VC_ANNOY");
			uParam1->f_4 = 1;
			break;
		
		case 315:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_TAG");
			uParam1->f_4 = 1;
			break;
		
		case 316:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("AMOUNT_TO_PUNISH_BY_OFFENSIVE_UGC");
			uParam1->f_4 = 1;
			break;
		
		case 317:
			*uParam1 = 45f;
			uParam1->f_1 = 55f;
			uParam1->f_2 = 45;
			uParam1->f_3 = 55;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 318:
			*uParam1 = 30f;
			uParam1->f_1 = 49f;
			uParam1->f_2 = 30;
			uParam1->f_3 = 49;
			uParam1->f_5 = joaat("BADSPORT_THRESHOLD_NOTCHEATER");
			uParam1->f_4 = 1;
			break;
		
		case 319:
			*uParam1 = 15f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 15;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("BADSPORT_RESET_MINUTES");
			uParam1->f_4 = 1;
			break;
		
		case 320:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_1ST_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 321:
			*uParam1 = 0f;
			uParam1->f_1 = 8f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 8;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_2ND_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 322:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_3RD_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 323:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_4TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 324:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_5TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 325:
			*uParam1 = 0f;
			uParam1->f_1 = 64f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 64;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_6TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 326:
			*uParam1 = 0f;
			uParam1->f_1 = 128f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 128;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_7TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 327:
			*uParam1 = 0f;
			uParam1->f_1 = 256f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 256;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_8TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 328:
			*uParam1 = 0f;
			uParam1->f_1 = 512f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 512;
			uParam1->f_5 = joaat("BADSPORT_NUMDAYS_9TH_OFFENCE");
			uParam1->f_4 = 1;
			break;
		
		case 329:
			*uParam1 = 0f;
			uParam1->f_1 = 1024f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1024;
			uParam1->f_5 = 872194479;
			uParam1->f_4 = 1;
			break;
		
		case 330:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("AMOUNT_TO_FORGIVE_BADSPORT_BY");
			uParam1->f_4 = 1;
			break;
		
		case 331:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("KICK_VOTES_NEEDED_RATIO");
			uParam1->f_4 = 1;
			break;
		
		case 332:
			*uParam1 = 400f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 400;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1307500572;
			uParam1->f_4 = 1;
			break;
		
		case 333:
			*uParam1 = 70f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 70;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SHOP_DISCOUNT_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 334:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("SHOP_GOODBOY_DISCOUNT_PERCENT");
			uParam1->f_4 = 1;
			break;
		
		case 335:
			*uParam1 = 200f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 300;
			uParam1->f_5 = 1882659457;
			uParam1->f_4 = 1;
			break;
		
		case 336:
			*uParam1 = 10f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 10;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("COMMENDREPORT_MAX_STRENGTH");
			uParam1->f_4 = 1;
			break;
		
		case 337:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("MAX_NUMBER_STOLEN_VEHICLES_SOLD_DAILY");
			uParam1->f_4 = 1;
			break;
		
		case 338:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("SURVIVAL_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 339:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("ROCKSTAR_VERIFIED_RP_BONUS");
			uParam1->f_4 = 1;
			break;
		
		case 340:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("IDLE_DM_BOUNTY");
			uParam1->f_4 = 1;
			break;
		
		case 342:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Stolen_Personal_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
		
		case 341:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Purchased_Personal_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
		
		case 343:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("Selling_Stolen_Vehicle_Cap");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 344:
			*uParam1 = 6000f;
			uParam1->f_1 = 15700f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15700;
			uParam1->f_5 = joaat("ASSAULT_SMG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 345:
			*uParam1 = 6000f;
			uParam1->f_1 = 16300f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 16300;
			uParam1->f_5 = joaat("CARBINE_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 346:
			*uParam1 = 7000f;
			uParam1->f_1 = 17800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 17800;
			uParam1->f_5 = joaat("ADVANCED_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 347:
			*uParam1 = 7000f;
			uParam1->f_1 = 16900f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 16900;
			uParam1->f_5 = joaat("MG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 348:
			*uParam1 = 7000f;
			uParam1->f_1 = 18500f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18500;
			uParam1->f_5 = joaat("COMBAT_MG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 349:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("ASSAULT_SHOTGUN_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 350:
			*uParam1 = 19000f;
			uParam1->f_1 = 47700f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47700;
			uParam1->f_5 = joaat("HEAVY_SNIPER_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 351:
			*uParam1 = 10000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("SNIPER_RIFLE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 352:
			*uParam1 = 16000f;
			uParam1->f_1 = 40500f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40500;
			uParam1->f_5 = joaat("GRENADE_LAUNCHER_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 353:
			*uParam1 = 13000f;
			uParam1->f_1 = 32800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32800;
			uParam1->f_5 = joaat("RPG_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 354:
			*uParam1 = 25000f;
			uParam1->f_1 = 62500f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 62500;
			uParam1->f_5 = joaat("MINIGUN_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 355:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 356:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_PISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 357:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 358:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 359:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 360:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 361:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 362:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 363:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 364:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 365:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 366:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 367:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 368:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 369:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 370:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 371:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 372:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 373:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 374:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 375:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 376:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 377:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 378:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 379:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 380:
			*uParam1 = 185000f;
			uParam1->f_1 = 466300f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 466300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 381:
			*uParam1 = 194000f;
			uParam1->f_1 = 488800f;
			uParam1->f_2 = 194000;
			uParam1->f_3 = 488800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 382:
			*uParam1 = 189000f;
			uParam1->f_1 = 477500f;
			uParam1->f_2 = 189000;
			uParam1->f_3 = 477500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 383:
			*uParam1 = 107000f;
			uParam1->f_1 = 271300f;
			uParam1->f_2 = 107000;
			uParam1->f_3 = 271300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 384:
			*uParam1 = 110000f;
			uParam1->f_1 = 278800f;
			uParam1->f_2 = 110000;
			uParam1->f_3 = 278800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 385:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 386:
			*uParam1 = 99000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 387:
			*uParam1 = 166000f;
			uParam1->f_1 = 418800f;
			uParam1->f_2 = 166000;
			uParam1->f_3 = 418800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 388:
			*uParam1 = 158000f;
			uParam1->f_1 = 398800f;
			uParam1->f_2 = 158000;
			uParam1->f_3 = 398800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_10_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 389:
			*uParam1 = 150000f;
			uParam1->f_1 = 380000f;
			uParam1->f_2 = 150000;
			uParam1->f_3 = 380000;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_11_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 390:
			*uParam1 = 116000f;
			uParam1->f_1 = 293800f;
			uParam1->f_2 = 116000;
			uParam1->f_3 = 293800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_12_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 391:
			*uParam1 = 122000f;
			uParam1->f_1 = 308800f;
			uParam1->f_2 = 122000;
			uParam1->f_3 = 308800;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_13_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 392:
			*uParam1 = 119000f;
			uParam1->f_1 = 301300f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 301300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 393:
			*uParam1 = 125000f;
			uParam1->f_1 = 316300f;
			uParam1->f_2 = 125000;
			uParam1->f_3 = 316300;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_15_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 394:
			*uParam1 = 134000f;
			uParam1->f_1 = 337500f;
			uParam1->f_2 = 134000;
			uParam1->f_3 = 337500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 395:
			*uParam1 = 142000f;
			uParam1->f_1 = 357500f;
			uParam1->f_2 = 142000;
			uParam1->f_3 = 357500;
			uParam1->f_5 = joaat("PROPERTY_HIGH_APT_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 396:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 397:
			*uParam1 = 63000f;
			uParam1->f_1 = 160000f;
			uParam1->f_2 = 63000;
			uParam1->f_3 = 160000;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 398:
			*uParam1 = 62000f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 399:
			*uParam1 = 72000f;
			uParam1->f_1 = 182500f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 182500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 400:
			*uParam1 = 62000f;
			uParam1->f_1 = 156300f;
			uParam1->f_2 = 62000;
			uParam1->f_3 = 156300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 401:
			*uParam1 = 70000f;
			uParam1->f_1 = 176300f;
			uParam1->f_2 = 70000;
			uParam1->f_3 = 176300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 402:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 403:
			*uParam1 = 68000f;
			uParam1->f_1 = 171300f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 171300;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 404:
			*uParam1 = 66000f;
			uParam1->f_1 = 167500f;
			uParam1->f_2 = 66000;
			uParam1->f_3 = 167500;
			uParam1->f_5 = joaat("PROPERTY_MEDIUM_APT_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 405:
			*uParam1 = 57000f;
			uParam1->f_1 = 143800f;
			uParam1->f_2 = 57000;
			uParam1->f_3 = 143800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 406:
			*uParam1 = 49000f;
			uParam1->f_1 = 123800f;
			uParam1->f_2 = 49000;
			uParam1->f_3 = 123800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 407:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 408:
			*uParam1 = 43000f;
			uParam1->f_1 = 108800f;
			uParam1->f_2 = 43000;
			uParam1->f_3 = 108800;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 409:
			*uParam1 = 55000f;
			uParam1->f_1 = 140000f;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 140000;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 410:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 411:
			*uParam1 = 46000f;
			uParam1->f_1 = 116300f;
			uParam1->f_2 = 46000;
			uParam1->f_3 = 116300;
			uParam1->f_5 = joaat("PROPERTY_LOW_APT_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 412:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 413:
			*uParam1 = 38000f;
			uParam1->f_1 = 96900f;
			uParam1->f_2 = 38000;
			uParam1->f_3 = 96900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 414:
			*uParam1 = 71000f;
			uParam1->f_1 = 178100f;
			uParam1->f_2 = 71000;
			uParam1->f_3 = 178100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 415:
			*uParam1 = 67000f;
			uParam1->f_1 = 168800f;
			uParam1->f_2 = 67000;
			uParam1->f_3 = 168800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_4_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 416:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 417:
			*uParam1 = 14750f;
			uParam1->f_1 = 36900f;
			uParam1->f_2 = 14750;
			uParam1->f_3 = 36900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 418:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 419:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_EAST_LOS_SANTOS_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 420:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 421:
			*uParam1 = 36000f;
			uParam1->f_1 = 90600f;
			uParam1->f_2 = 36000;
			uParam1->f_3 = 90600;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 422:
			*uParam1 = 13000f;
			uParam1->f_1 = 33100f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 423:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 424:
			*uParam1 = 13750f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 425:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_5_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 426:
			*uParam1 = 15750f;
			uParam1->f_1 = 39400f;
			uParam1->f_2 = 15750;
			uParam1->f_3 = 39400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_6_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 427:
			*uParam1 = 14000f;
			uParam1->f_1 = 36300f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 36300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_7_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 428:
			*uParam1 = 31000f;
			uParam1->f_1 = 78100f;
			uParam1->f_2 = 31000;
			uParam1->f_3 = 78100;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_8_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 429:
			*uParam1 = 14000f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 14000;
			uParam1->f_3 = 35000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_9_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 430:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_14_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 431:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_16_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 432:
			*uParam1 = 52000f;
			uParam1->f_1 = 131300f;
			uParam1->f_2 = 52000;
			uParam1->f_3 = 131300;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_17_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 433:
			*uParam1 = 33000f;
			uParam1->f_1 = 84400f;
			uParam1->f_2 = 33000;
			uParam1->f_3 = 84400;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_18_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 434:
			*uParam1 = 56000f;
			uParam1->f_1 = 140600f;
			uParam1->f_2 = 56000;
			uParam1->f_3 = 140600;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_19_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 435:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_20_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 436:
			*uParam1 = 17000f;
			uParam1->f_1 = 42500f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 42500;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_21_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 437:
			*uParam1 = 16750f;
			uParam1->f_1 = 41900f;
			uParam1->f_2 = 16750;
			uParam1->f_3 = 41900;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_22_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 438:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("PROPERTY_GARAGE_NEW_23_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 439:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("ADDER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 440:
			*uParam1 = 272000f;
			uParam1->f_1 = 687500f;
			uParam1->f_2 = 272000;
			uParam1->f_3 = 687500;
			uParam1->f_5 = joaat("AIRBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 441:
			*uParam1 = 903000f;
			uParam1->f_1 = 2281300f;
			uParam1->f_2 = 903000;
			uParam1->f_3 = 2281300;
			uParam1->f_5 = joaat("ANNIHILATOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 442:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("BALLER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 443:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("BARRACKS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 444:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BATI_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 445:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BATI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 446:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BFINJECTION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 447:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("BISON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 448:
			*uParam1 = 77000f;
			uParam1->f_1 = 193800f;
			uParam1->f_2 = 77000;
			uParam1->f_3 = 193800;
			uParam1->f_5 = joaat("BULLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 449:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("BUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 450:
			*uParam1 = 866000f;
			uParam1->f_1 = 2187500f;
			uParam1->f_2 = 866000;
			uParam1->f_3 = 2187500;
			uParam1->f_5 = joaat("BUZZARD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 451:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("CARBONIZZARE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 452:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("CAVALCADE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 453:
			*uParam1 = 322000f;
			uParam1->f_1 = 812500f;
			uParam1->f_2 = 322000;
			uParam1->f_3 = 812500;
			uParam1->f_5 = joaat("CHEETAH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 454:
			*uParam1 = 260000f;
			uParam1->f_1 = 656300f;
			uParam1->f_2 = 260000;
			uParam1->f_3 = 656300;
			uParam1->f_5 = joaat("COACH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 455:
			*uParam1 = 92000f;
			uParam1->f_1 = 231300f;
			uParam1->f_2 = 92000;
			uParam1->f_3 = 231300;
			uParam1->f_5 = joaat("COGCABRIO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 456:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 125000;
			uParam1->f_5 = joaat("COMET2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 457:
			*uParam1 = 68000f;
			uParam1->f_1 = 172500f;
			uParam1->f_2 = 68000;
			uParam1->f_3 = 172500;
			uParam1->f_5 = joaat("COQUETTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 458:
			*uParam1 = 111000f;
			uParam1->f_1 = 281300f;
			uParam1->f_2 = 111000;
			uParam1->f_3 = 281300;
			uParam1->f_5 = joaat("CRUSADER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 459:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("CUBAN800_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 460:
			*uParam1 = 12000f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DILETTANTE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 461:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("DOUBLE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 462:
			*uParam1 = 495000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 495000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = joaat("DUMP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 463:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("DUSTER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 464:
			*uParam1 = 394000f;
			uParam1->f_1 = 993800f;
			uParam1->f_2 = 394000;
			uParam1->f_3 = 993800;
			uParam1->f_5 = joaat("ENTITYXF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 465:
			*uParam1 = 101000f;
			uParam1->f_1 = 256300f;
			uParam1->f_2 = 101000;
			uParam1->f_3 = 256300;
			uParam1->f_5 = joaat("EXEMPLAR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 466:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("FELON_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 467:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("FELON2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 468:
			*uParam1 = 72000f;
			uParam1->f_1 = 181300f;
			uParam1->f_2 = 72000;
			uParam1->f_3 = 181300;
			uParam1->f_5 = joaat("FELTZER2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 469:
			*uParam1 = 644000f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 644000;
			uParam1->f_3 = 1625000;
			uParam1->f_5 = joaat("FROGGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 470:
			*uParam1 = 12000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("FUGITIVE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 471:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("GAUNTLET_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 472:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("HEXER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 473:
			*uParam1 = 218000f;
			uParam1->f_1 = 550000f;
			uParam1->f_2 = 218000;
			uParam1->f_3 = 550000;
			uParam1->f_5 = joaat("INFERNUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 474:
			*uParam1 = 9000f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("ISSI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 475:
			*uParam1 = 173000f;
			uParam1->f_1 = 437500f;
			uParam1->f_2 = 173000;
			uParam1->f_3 = 437500;
			uParam1->f_5 = joaat("JB700_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 476:
			*uParam1 = 148000f;
			uParam1->f_1 = 373800f;
			uParam1->f_2 = 148000;
			uParam1->f_3 = 373800;
			uParam1->f_5 = joaat("JETMAX_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 477:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("JOURNEY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 478:
			*uParam1 = 804000f;
			uParam1->f_1 = 2031300f;
			uParam1->f_2 = 804000;
			uParam1->f_3 = 2031300;
			uParam1->f_5 = joaat("LUXOR_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 479:
			*uParam1 = 149000f;
			uParam1->f_1 = 375000f;
			uParam1->f_2 = 149000;
			uParam1->f_3 = 375000;
			uParam1->f_5 = joaat("MAMMATUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 480:
			*uParam1 = 205000f;
			uParam1->f_1 = 517500f;
			uParam1->f_2 = 205000;
			uParam1->f_3 = 517500;
			uParam1->f_5 = joaat("MARQUIS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 481:
			*uParam1 = 386000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 386000;
			uParam1->f_3 = 975000;
			uParam1->f_5 = joaat("MAVERICK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 482:
			*uParam1 = 243000f;
			uParam1->f_1 = 612500f;
			uParam1->f_2 = 243000;
			uParam1->f_3 = 612500;
			uParam1->f_5 = joaat("MONROE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 483:
			*uParam1 = 13000f;
			uParam1->f_1 = 33800f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 33800;
			uParam1->f_5 = joaat("MULE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 484:
			*uParam1 = 59000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 59000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = joaat("NINEF_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 485:
			*uParam1 = 64000f;
			uParam1->f_1 = 162500f;
			uParam1->f_2 = 64000;
			uParam1->f_3 = 162500;
			uParam1->f_5 = joaat("NINEF2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 486:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("ORACLE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 487:
			*uParam1 = 69000f;
			uParam1->f_1 = 175000f;
			uParam1->f_2 = 69000;
			uParam1->f_3 = 175000;
			uParam1->f_5 = joaat("RAPIDGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 488:
			*uParam1 = 65000f;
			uParam1->f_1 = 165000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 165000;
			uParam1->f_5 = joaat("RAPIDGT2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 489:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("RENTALBUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 490:
			*uParam1 = 743000f;
			uParam1->f_1 = 1875000f;
			uParam1->f_2 = 743000;
			uParam1->f_3 = 1875000;
			uParam1->f_5 = joaat("RHINO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 491:
			*uParam1 = 42000f;
			uParam1->f_1 = 106300f;
			uParam1->f_2 = 42000;
			uParam1->f_3 = 106300;
			uParam1->f_5 = joaat("ROCOTO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 492:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("RUFFIAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 493:
			*uParam1 = 22000f;
			uParam1->f_1 = 56300f;
			uParam1->f_2 = 22000;
			uParam1->f_3 = 56300;
			uParam1->f_5 = joaat("SANDKING_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 494:
			*uParam1 = 40000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("SCHWARZER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 495:
			*uParam1 = 8000f;
			uParam1->f_1 = 21100f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 21100;
			uParam1->f_5 = joaat("SEASHARK_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 496:
			*uParam1 = 569000f;
			uParam1->f_1 = 1437500f;
			uParam1->f_2 = 569000;
			uParam1->f_3 = 1437500;
			uParam1->f_5 = joaat("SHAMAL_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 497:
			*uParam1 = 97000f;
			uParam1->f_1 = 245800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 245800;
			uParam1->f_5 = joaat("SQUALO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 498:
			*uParam1 = 421000f;
			uParam1->f_1 = 1062500f;
			uParam1->f_2 = 421000;
			uParam1->f_3 = 1062500;
			uParam1->f_5 = joaat("STINGER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 499:
			*uParam1 = 433000f;
			uParam1->f_1 = 1093800f;
			uParam1->f_2 = 433000;
			uParam1->f_3 = 1093800;
			uParam1->f_5 = joaat("STINGERGT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 500:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("STRETCH_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 501:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("STUNT_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 502:
			*uParam1 = 12000f;
			uParam1->f_1 = 31500f;
			uParam1->f_2 = 12000;
			uParam1->f_3 = 31500;
			uParam1->f_5 = joaat("SUNTRAP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 503:
			*uParam1 = 124000f;
			uParam1->f_1 = 312500f;
			uParam1->f_2 = 124000;
			uParam1->f_3 = 312500;
			uParam1->f_5 = joaat("SUPERD_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 504:
			*uParam1 = 54000f;
			uParam1->f_1 = 137500f;
			uParam1->f_2 = 54000;
			uParam1->f_3 = 137500;
			uParam1->f_5 = joaat("SURANO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 505:
			*uParam1 = 990000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 990000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("TITAN_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 506:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 507:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 508:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("TRIBIKE3_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 509:
			*uParam1 = 11000f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("TROPIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 510:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("VACCA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 511:
			*uParam1 = 223000f;
			uParam1->f_1 = 562500f;
			uParam1->f_2 = 223000;
			uParam1->f_3 = 562500;
			uParam1->f_5 = joaat("VELUM_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 512:
			*uParam1 = 10000f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("VIGERO_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 513:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("VOLTIC_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 514:
			*uParam1 = 30000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("ZION_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 515:
			*uParam1 = 32000f;
			uParam1->f_1 = 81300f;
			uParam1->f_2 = 32000;
			uParam1->f_3 = 81300;
			uParam1->f_5 = joaat("ZION2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 516:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("ZTYPE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 517:
			*uParam1 = 6000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("ASEA_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 518:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 519:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 520:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 521:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 522:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 523:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 524:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 525:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 526:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 527:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 528:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 529:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 530:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 531:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 532:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 533:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 534:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 535:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 536:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 537:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSHIGHEND_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 538:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSPORT_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 539:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSLOWRIDER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 540:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSSUV_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 541:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSMUSCLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 542:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSTUNER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 543:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSOFFROAD_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 544:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELSBIKE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 545:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 546:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 547:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 548:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 549:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 550:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 551:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 552:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 553:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 554:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 555:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 556:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 557:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 558:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 559:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 560:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 561:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 562:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 563:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 564:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 565:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 566:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 567:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 568:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 569:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 570:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SUV");
			uParam1->f_4 = 1;
			break;
		
		case 571:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 572:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 573:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 574:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 575:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 576:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 577:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 578:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 579:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 580:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 581:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 582:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 583:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 584:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 585:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 586:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 587:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 588:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 589:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 590:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 591:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 592:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 593:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 594:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 595:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 596:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 597:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 598:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPORT");
			uParam1->f_4 = 1;
			break;
		
		case 599:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_40_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 600:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_60_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 601:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 602:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 603:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 604:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 605:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BRAKES_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 606:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 607:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 608:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 609:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_F_BUMPER_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 610:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 611:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_R_BUMPER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 612:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 613:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 614:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_ENGINE_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 615:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 616:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BONNET_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 617:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 618:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 619:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 620:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 621:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 622:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 623:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 624:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 625:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 626:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SKIRTS_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 627:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 628:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 629:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 630:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SPOILER_L5_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 631:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L2_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 632:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L3_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 633:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_GEAR_BOX_L4_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 634:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 635:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 636:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 637:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 638:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 639:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 640:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 641:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_SPECIAL");
			uParam1->f_4 = 1;
			break;
		
		case 642:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_80_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 643:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BODY_ARMOUR_100_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 644:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L5_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 645:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L6_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 646:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L7_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 647:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L8_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 648:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_HORN_L9_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 649:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_PRIMARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 650:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_SECONDARYCOLORCREW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 651:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWEMBLEM_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 652:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TURBO_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 653:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_WHEELCOLOURS_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 654:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_BULLET_PROOF_TYRES_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 655:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_BLUE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 656:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_YELLOW_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 657:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_ORANGE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 658:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_TYRE_SMOKE_RED_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 659:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("CARMOD_UNLOCK_CREWSMOKE_EXPENDITURE_TUNABLE_BIKE");
			uParam1->f_4 = 1;
			break;
		
		case 660:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Bone_Skull");
			uParam1->f_4 = 1;
			break;
		
		case 661:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pogo");
			uParam1->f_4 = 1;
			break;
		
		case 662:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Green_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 663:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Pink_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 664:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Male_Masks_Red_Monster");
			uParam1->f_4 = 1;
			break;
		
		case 665:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Bone_Skull");
			uParam1->f_4 = 1;
			break;
		
		case 666:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pogo");
			uParam1->f_4 = 1;
			break;
		
		case 667:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Green_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 668:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Pink_Ape");
			uParam1->f_4 = 1;
			break;
		
		case 669:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("Discount_Female_Masks_Red_Monster");
			uParam1->f_4 = 1;
			break;
		
		case 670:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_SERPENTINE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 671:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_TRAPPEDINABOX_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 672:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("MAKEUP_UNLOCKS_CLOWNING_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 673:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HEAD_BANGER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 674:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HUSTLER_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 675:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_WIN_EVER_MODE_ONCE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 676:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_HOLD_UP_SHOPS_4_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 677:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1914127564;
			uParam1->f_4 = 1;
			break;
		
		case 678:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 983218273;
			uParam1->f_4 = 1;
			break;
		
		case 679:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 178678567;
			uParam1->f_4 = 1;
			break;
		
		case 680:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_13_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 681:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_16_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 682:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_17_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 683:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_19_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 684:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1411998323;
			uParam1->f_4 = 1;
			break;
		
		case 685:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_25_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 686:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_38_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 687:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("TATTOO_MP_FM_46_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 688:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_RED_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 689:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_ORANGE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 690:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_YELLOW_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 691:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLACK_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 692:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_PARASMOKE_BLUE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 693:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RAINBOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 694:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_RED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 695:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_YELLOWWHITEBLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 696:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_WHITEREDBROWN_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 697:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUEWHITERED_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 698:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLUE_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 699:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BLACK_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 700:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_FM_BROWNYELLOW_PARACHUTE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 701:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 702:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_WEAPON_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 703:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 704:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 705:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 706:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 707:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 708:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 709:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 710:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 711:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 712:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 713:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 714:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 715:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 716:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 717:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 718:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 719:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 720:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 721:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 722:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_APPISTOL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 723:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MICROSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 724:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 725:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 726:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CRBNRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 727:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ADVRRIFLE_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 728:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 729:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_CMBTMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 730:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_PUMP_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 731:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SAWOFF_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 732:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_ASLTSHTGN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 733:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_SNIPERRFL_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 734:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_GRNLAUNCH_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 735:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_RPG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 736:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_MINIGUN_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 737:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_GOLD_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 738:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = joaat("PLAYERKIT_PLATINUM_DLC_ASSAULTSMG_EXPENDITURE_TUNABLE");
			uParam1->f_4 = 1;
			break;
		
		case 739:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 193513430;
			uParam1->f_4 = 1;
			break;
		
		case 740:
			*uParam1 = 0.5f;
			uParam1->f_1 = 1.2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1232863007;
			uParam1->f_4 = 1;
			break;
		
		case 741:
			*uParam1 = 5000f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 32000;
			uParam1->f_5 = joaat("BODHI2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 742:
			*uParam1 = 10000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = joaat("DUNE_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 743:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("SADLER_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 744:
			*uParam1 = 19000f;
			uParam1->f_1 = 47500f;
			uParam1->f_2 = 19000;
			uParam1->f_3 = 47500;
			uParam1->f_5 = joaat("SANDKING2_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 745:
			*uParam1 = 371000f;
			uParam1->f_1 = 937500f;
			uParam1->f_2 = 371000;
			uParam1->f_3 = 937500;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_SEDAN");
			uParam1->f_4 = 1;
			break;
		
		case 746:
			*uParam1 = 7000f;
			uParam1->f_1 = 18300f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18300;
			uParam1->f_5 = joaat("VALENTINE_MODIFIER_CADDY_GUSENBERG");
			uParam1->f_4 = 1;
			break;
		
		case 747:
			*uParam1 = 74000f;
			uParam1->f_1 = 187500f;
			uParam1->f_2 = 74000;
			uParam1->f_3 = 187500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ALPHA");
			uParam1->f_4 = 1;
			break;
		
		case 748:
			*uParam1 = 97000f;
			uParam1->f_1 = 243800f;
			uParam1->f_2 = 97000;
			uParam1->f_3 = 243800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_HUNTLEY");
			uParam1->f_4 = 1;
			break;
		
		case 749:
			*uParam1 = 119000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 119000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_JESTER");
			uParam1->f_4 = 1;
			break;
		
		case 750:
			*uParam1 = 136000f;
			uParam1->f_1 = 343800f;
			uParam1->f_2 = 136000;
			uParam1->f_3 = 343800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MASSACRO");
			uParam1->f_4 = 1;
			break;
		
		case 751:
			*uParam1 = 248000f;
			uParam1->f_1 = 625000f;
			uParam1->f_2 = 248000;
			uParam1->f_3 = 625000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_TURISMOR");
			uParam1->f_4 = 1;
			break;
		
		case 752:
			*uParam1 = 359000f;
			uParam1->f_1 = 906300f;
			uParam1->f_2 = 359000;
			uParam1->f_3 = 906300;
			uParam1->f_5 = joaat("business_vehicles_Zentorno");
			uParam1->f_4 = 1;
			break;
		
		case 753:
			*uParam1 = 13000f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 13000;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_ASTEROPE");
			uParam1->f_4 = 1;
			break;
		
		case 754:
			*uParam1 = 11000f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11000;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_BOBCATXL");
			uParam1->f_4 = 1;
			break;
		
		case 755:
			*uParam1 = 35000f;
			uParam1->f_1 = 87500f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 87500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_CAVALCADE2");
			uParam1->f_4 = 1;
			break;
		
		case 756:
			*uParam1 = 17000f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17000;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_GRANGER");
			uParam1->f_4 = 1;
			break;
		
		case 757:
			*uParam1 = 8000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_INTRUDER");
			uParam1->f_4 = 1;
			break;
		
		case 758:
			*uParam1 = 15000f;
			uParam1->f_1 = 37500f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 37500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_MINIVAN");
			uParam1->f_4 = 1;
			break;
		
		case 759:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_PREMIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 760:
			*uParam1 = 16000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 16000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_RADI");
			uParam1->f_4 = 1;
			break;
		
		case 761:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STANIER");
			uParam1->f_4 = 1;
			break;
		
		case 762:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_STRATUM");
			uParam1->f_4 = 1;
			break;
		
		case 763:
			*uParam1 = 7000f;
			uParam1->f_1 = 18800f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 18800;
			uParam1->f_5 = joaat("BUSINESS_VEHICLES_WASHINGTON");
			uParam1->f_4 = 1;
			break;
		
		case 764:
			*uParam1 = 470000f;
			uParam1->f_1 = 1187500f;
			uParam1->f_2 = 470000;
			uParam1->f_3 = 1187500;
			uParam1->f_5 = joaat("BUSINESS_VEHICLE_VESTRA");
			uParam1->f_4 = 1;
			break;
		
		case 765:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("XP_TUNABLE_COLLECT_MISSION_PACKAGE");
			uParam1->f_4 = 1;
			break;
		
		case 766:
			*uParam1 = 0f;
			uParam1->f_1 = 150f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 150;
			uParam1->f_5 = joaat("XP_TUNABLE_VOTE_FOR_CONTENT");
			uParam1->f_4 = 1;
			break;
		
		case 767:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 768:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("XP_TUNABLE_CTF_XP_REWARD_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 769:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("XP_TUNABLE_KILL_CTF_PED");
			uParam1->f_4 = 1;
			break;
		
		case 770:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("EXPIRED_CHALLENGE_BASIC_XP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 771:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("JOB_RP_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 772:
			*uParam1 = 0f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_DM_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 773:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_RACE_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 774:
			*uParam1 = 0f;
			uParam1->f_1 = 7500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 7500;
			uParam1->f_5 = joaat("PLAYER_KILL_RP_MISSION_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 775:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MISSION_AI_KILL_RP");
			uParam1->f_4 = 1;
			break;
		
		case 776:
			*uParam1 = 0f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300;
			uParam1->f_5 = joaat("MISSION_AI_KILL_AMOUNT_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 777:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = joaat("RACE_WORLD_RECORD_RP");
			uParam1->f_4 = 1;
			break;
		
		case 778:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("KILL_A_MUGGER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 779:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("SING_IN_SHOWER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 780:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PLAYLIST_WINNER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 781:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("LESTER_BOUNTY_CUT");
			uParam1->f_4 = 1;
			break;
		
		case 782:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("REQUEST_A_JOB_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 783:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("MECHANIC_DAILY_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 784:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("PLAYER_CASHDROP_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 785:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("PLAYLIST_ENTRY_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 786:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = joaat("MUGGER_AMOUNT_STEAL");
			uParam1->f_4 = 1;
			break;
		
		case 787:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("MUGGER_STEAL_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 788:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_1_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 789:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_2_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 790:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_3_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 791:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_4_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 792:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("LOSE_WANTED_LEVEL_5_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 793:
			*uParam1 = 37000f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37000;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("BUSINESS2_THRUST_PRICE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 794:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_FASHION_HOCKEY");
			uParam1->f_4 = 1;
			break;
		
		case 795:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("DLC_METAL_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 796:
			*uParam1 = 5600f;
			uParam1->f_1 = 14100f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14100;
			uParam1->f_5 = joaat("DLC_CIRCUIT_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 797:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_CARBON_WARRIOR");
			uParam1->f_4 = 1;
			break;
		
		case 798:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SNS_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 799:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SNS_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 800:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 801:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 802:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_HEAVY_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 803:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_HEAVY_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 804:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_GOLD_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 805:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_TINT_PLATINUM_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 806:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 2261411;
			uParam1->f_4 = 1;
			break;
		
		case 807:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = -948414722;
			uParam1->f_4 = 1;
			break;
		
		case 808:
			*uParam1 = 5900f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 15000;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_PIRATE_SKULL");
			uParam1->f_4 = 1;
			break;
		
		case 809:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 1;
			break;
		
		case 810:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("DLC_MALE_TATTOO_CREW_EMBLEM_ARM");
			uParam1->f_4 = 1;
			break;
		
		case 811:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_1");
			uParam1->f_4 = 1;
			break;
		
		case 812:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_2");
			uParam1->f_4 = 1;
			break;
		
		case 813:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_3");
			uParam1->f_4 = 1;
			break;
		
		case 814:
			*uParam1 = 12100f;
			uParam1->f_1 = 30600f;
			uParam1->f_2 = 12100;
			uParam1->f_3 = 30600;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_4");
			uParam1->f_4 = 1;
			break;
		
		case 815:
			*uParam1 = 12900f;
			uParam1->f_1 = 32500f;
			uParam1->f_2 = 12900;
			uParam1->f_3 = 32500;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_5");
			uParam1->f_4 = 1;
			break;
		
		case 816:
			*uParam1 = 13600f;
			uParam1->f_1 = 34400f;
			uParam1->f_2 = 13600;
			uParam1->f_3 = 34400;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_6");
			uParam1->f_4 = 1;
			break;
		
		case 817:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_CAR_MODS_CLASSICAL_HORN_7");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 818:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("DLC_VEHICLE_BF_BIFTA");
			uParam1->f_4 = 1;
			break;
		
		case 819:
			*uParam1 = 19800f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 19800;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("DLC_VEHICLE_CANIS_KALAHARI");
			uParam1->f_4 = 1;
			break;
		
		case 820:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_PARADISE");
			uParam1->f_4 = 1;
			break;
		
		case 821:
			*uParam1 = 160900f;
			uParam1->f_1 = 406300f;
			uParam1->f_2 = 160900;
			uParam1->f_3 = 406300;
			uParam1->f_5 = joaat("DLC_VEHICLE_PEGASSI_SPEEDER");
			uParam1->f_4 = 1;
			break;
		
		case 822:
			*uParam1 = 37100f;
			uParam1->f_1 = 93800f;
			uParam1->f_2 = 37100;
			uParam1->f_3 = 93800;
			uParam1->f_5 = joaat("DLC_VEHICLE_DINKA_THRUST");
			uParam1->f_4 = 1;
			break;
		
		case 823:
			*uParam1 = 85100f;
			uParam1->f_1 = 215000f;
			uParam1->f_2 = 85100;
			uParam1->f_3 = 215000;
			uParam1->f_5 = joaat("DLC_VEHICLE_COIL_VOLTIC_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 824:
			*uParam1 = 62400f;
			uParam1->f_1 = 157500f;
			uParam1->f_2 = 62400;
			uParam1->f_3 = 157500;
			uParam1->f_5 = joaat("DLC_VEHICLE_BRAVADO_BANSHEE_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 825:
			*uParam1 = 78700f;
			uParam1->f_1 = 198800f;
			uParam1->f_2 = 78700;
			uParam1->f_3 = 198800;
			uParam1->f_5 = joaat("DLC_VEHICLE_INVERTO_COQUETTE_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 826:
			*uParam1 = 431100f;
			uParam1->f_1 = 1088800f;
			uParam1->f_2 = 431100;
			uParam1->f_3 = 1088800;
			uParam1->f_5 = joaat("DLC_VEHICLE_GROTTI_STINGER_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 827:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("DLC_VEHICLE_VAPID_DOMINATOR");
			uParam1->f_4 = 1;
			break;
		
		case 828:
			*uParam1 = 39600f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 39600;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1630934099;
			uParam1->f_4 = 1;
			break;
		
		case 829:
			*uParam1 = 17800f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 17800;
			uParam1->f_3 = 45000;
			uParam1->f_5 = joaat("DLC_VEHICLE_SCHYSTER_FUSILADE");
			uParam1->f_4 = 1;
			break;
		
		case 830:
			*uParam1 = 11900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 11900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("DLC_VEHICLE_MAIBATSU_PENUMBRA");
			uParam1->f_4 = 1;
			break;
		
		case 831:
			*uParam1 = 29700f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 29700;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL_XS");
			uParam1->f_4 = 1;
			break;
		
		case 832:
			*uParam1 = 47000f;
			uParam1->f_1 = 118800f;
			uParam1->f_2 = 47000;
			uParam1->f_3 = 118800;
			uParam1->f_5 = joaat("DLC_VEHICLE_UBERMACHT_SENTINEL");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 833:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 834:
			*uParam1 = 6000f;
			uParam1->f_1 = 15100f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15100;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 835:
			*uParam1 = 5700f;
			uParam1->f_1 = 14400f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 14400;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE");
			uParam1->f_4 = 1;
			break;
		
		case 836:
			*uParam1 = 6200f;
			uParam1->f_1 = 15600f;
			uParam1->f_2 = 6200;
			uParam1->f_3 = 15600;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 837:
			*uParam1 = 5600f;
			uParam1->f_1 = 14200f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 14200;
			uParam1->f_5 = joaat("DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE");
			uParam1->f_4 = 1;
			break;
		
		case 838:
			*uParam1 = 7300f;
			uParam1->f_1 = 18400f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 18400;
			uParam1->f_5 = joaat("DLC_WEAPON_SPECIAL_CARBINE");
			uParam1->f_4 = 1;
			break;
		
		case 839:
			*uParam1 = 7200f;
			uParam1->f_1 = 18100f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 18100;
			uParam1->f_5 = joaat("DLC_WEAPON_BULLPUP_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 840:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("REQUEST_COPS_TURN_BLIND_EYE_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 841:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_CHEST");
			uParam1->f_4 = 1;
			break;
		
		case 842:
			*uParam1 = 9700f;
			uParam1->f_1 = 24400f;
			uParam1->f_2 = 9700;
			uParam1->f_3 = 24400;
			uParam1->f_5 = joaat("DLC_FEMALE_TATTOOS_CREW_EMBLEM_ARM");
			uParam1->f_4 = 1;
			break;
		
		case 843:
			*uParam1 = 0.1f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 844:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_RP_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 845:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("SURVIVAL_RP_CAP_PER_WAVE");
			uParam1->f_4 = 1;
			break;
		
		case 1065:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("REQUEST_A_HEIST_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 846:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 847:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 848:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_UNDER_THRESHOLD");
			uParam1->f_4 = 1;
			break;
		
		case 849:
			*uParam1 = 5f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 5;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PLAYER_INCREASE_DIVIDER");
			uParam1->f_4 = 1;
			break;
		
		case 850:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_BLOW_UP_VEHICLE_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 851:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("MENTAL_STATE_KILL_PED_INCREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 852:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_AMOUNT");
			uParam1->f_4 = 1;
			break;
		
		case 853:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("MENTAL_STATE_DECREASE_RATE");
			uParam1->f_4 = 1;
			break;
		
		case 854:
			*uParam1 = 198000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 198000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("DLC_hipster_modifier_Vulcar_Pigalle");
			uParam1->f_4 = 1;
			break;
		
		case 855:
			*uParam1 = 0f;
			uParam1->f_1 = 40f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 40;
			uParam1->f_5 = joaat("NUMBER_OF_CHALLENGES_PER_DAY");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 856:
			*uParam1 = 5200f;
			uParam1->f_1 = 13100f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 13100;
			uParam1->f_5 = joaat("DLC_HIPSTER_CLOTHING_FEMALE_PURPLE_FLORAL_BABYDOLL");
			uParam1->f_4 = 1;
			break;
		
		case 857:
			*uParam1 = 79200f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = joaat("ss1_03_98_lod");
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VAPID_BLADE");
			uParam1->f_4 = 1;
			break;
		
		case 858:
			*uParam1 = 99000f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 99000;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_GLENDA");
			uParam1->f_4 = 1;
			break;
		
		case 859:
			*uParam1 = 69300f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 69300;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DECLASSE_RHAPSODY");
			uParam1->f_4 = 1;
			break;
		
		case 860:
			*uParam1 = 59400f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 59400;
			uParam1->f_3 = 300000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_VULCAR_WARRENER");
			uParam1->f_4 = 1;
			break;
		
		case 861:
			*uParam1 = 42100f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 42100;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BENEFACTOR_PANTO");
			uParam1->f_4 = 1;
			break;
		
		case 862:
			*uParam1 = 123300f;
			uParam1->f_1 = 400000f;
			uParam1->f_2 = 123300;
			uParam1->f_3 = 400000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_DUBSTA3");
			uParam1->f_4 = 1;
			break;
		
		case 863:
			*uParam1 = 24800f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 24800;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BLAZER3");
			uParam1->f_4 = 1;
			break;
		
		case 864:
			*uParam1 = 17300f;
			uParam1->f_1 = 43800f;
			uParam1->f_2 = 17300;
			uParam1->f_3 = 43800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO");
			uParam1->f_4 = 1;
			break;
		
		case 865:
			*uParam1 = 47500f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 47500;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BUFFALO2");
			uParam1->f_4 = 1;
			break;
		
		case 866:
			*uParam1 = 10900f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_REBEL2");
			uParam1->f_4 = 1;
			break;
		
		case 867:
			*uParam1 = 5400f;
			uParam1->f_1 = 13800f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 13800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_SURFER");
			uParam1->f_4 = 1;
			break;
		
		case 868:
			*uParam1 = 27200f;
			uParam1->f_1 = 68800f;
			uParam1->f_2 = 27200;
			uParam1->f_3 = 68800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_TAILGATER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 869:
			*uParam1 = 7900f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 7900;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_YOUGA");
			uParam1->f_4 = 1;
			break;
		
		case 870:
			*uParam1 = 5000f;
			uParam1->f_1 = 12500f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 12500;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PURE_BLACK");
			uParam1->f_4 = 1;
			break;
		
		case 871:
			*uParam1 = 9900f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 9900;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_1");
			uParam1->f_4 = 1;
			break;
		
		case 872:
			*uParam1 = 10600f;
			uParam1->f_1 = 26900f;
			uParam1->f_2 = 10600;
			uParam1->f_3 = 26900;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_2");
			uParam1->f_4 = 1;
			break;
		
		case 873:
			*uParam1 = 11400f;
			uParam1->f_1 = 28800f;
			uParam1->f_2 = 11400;
			uParam1->f_3 = 28800;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_3");
			uParam1->f_4 = 1;
			break;
		
		case 874:
			*uParam1 = 25000f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 60000;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_JAZZ_HORN_4");
			uParam1->f_4 = 1;
			break;
		
		case 875:
			*uParam1 = 11100f;
			uParam1->f_1 = 28100f;
			uParam1->f_2 = 11100;
			uParam1->f_3 = 28100;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE");
			uParam1->f_4 = 1;
			break;
		
		case 876:
			*uParam1 = 8200f;
			uParam1->f_1 = 20600f;
			uParam1->f_2 = 8200;
			uParam1->f_3 = 20600;
			uParam1->f_5 = joaat("DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE");
			uParam1->f_4 = 1;
			break;
		
		case 877:
			*uParam1 = 6000f;
			uParam1->f_1 = 15200f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 15200;
			uParam1->f_5 = joaat("DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 878:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GREY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 879:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_TABBY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 880:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_RED_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 881:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 882:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_BROWN_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 883:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_WHITE_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 884:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 885:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_MASK_BLACK_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 886:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 887:
			*uParam1 = 10400f;
			uParam1->f_1 = 26300f;
			uParam1->f_2 = 10400;
			uParam1->f_3 = 26300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_TABBY_CAT");
			uParam1->f_4 = 1;
			break;
		
		case 888:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_RED_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 889:
			*uParam1 = 10900f;
			uParam1->f_1 = 27500f;
			uParam1->f_2 = 10900;
			uParam1->f_3 = 27500;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_FOX");
			uParam1->f_4 = 1;
			break;
		
		case 890:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BROWN_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 891:
			*uParam1 = 11600f;
			uParam1->f_1 = 29400f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 29400;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_WHITE_OWL");
			uParam1->f_4 = 1;
			break;
		
		case 892:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_GRAY_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 893:
			*uParam1 = 12400f;
			uParam1->f_1 = 31300f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 31300;
			uParam1->f_5 = joaat("DLC_HIPSTER_FEMALE_MASK_BLACK_RACOON");
			uParam1->f_4 = 1;
			break;
		
		case 894:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_PURE_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 1;
			break;
		
		case 895:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("HIPSTER_VEHICLE_BRUSHED_GOLD_METAL_RESPRAY");
			uParam1->f_4 = 1;
			break;
		
		case 896:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -188849823;
			uParam1->f_4 = 1;
			break;
		
		case 897:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("Car_impound_fee");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 898:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_HYDRA");
			uParam1->f_4 = 1;
			break;
		
		case 899:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_BESRA");
			uParam1->f_4 = 1;
			break;
		
		case 900:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_MILJET");
			uParam1->f_4 = 1;
			break;
		
		case 901:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_VEHICLE_COQUETTE2");
			uParam1->f_4 = 1;
			break;
		
		case 902:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_1");
			uParam1->f_4 = 1;
			break;
		
		case 903:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_2");
			uParam1->f_4 = 1;
			break;
		
		case 904:
			*uParam1 = 10000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PILOT_SCHOOL_PLAYER_KIT_PARACHUTE_CANOPY_COLOR_3");
			uParam1->f_4 = 1;
			break;
		
		case 905:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardxp");
			uParam1->f_4 = 1;
			break;
		
		case 906:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("rollercoasterridescreamrewardcap");
			uParam1->f_4 = 1;
			break;
		
		case 907:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PURCHASED_TATTOO_APPLICATION_FEE");
			uParam1->f_4 = 1;
			break;
		
		case 908:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("SURVIVAL_COMPLETE_BONUS");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 909:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_1_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 910:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_2_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 911:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_3_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 912:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_4_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 913:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_5_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 914:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_6_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 915:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_7_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 916:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_8_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 917:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_9_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 918:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_TIME_PERIOD_10_PERCENTAGE");
			uParam1->f_4 = 1;
			break;
		
		case 919:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 920:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_EASY");
			uParam1->f_4 = 1;
			break;
		
		case 921:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_NORMAL");
			uParam1->f_4 = 1;
			break;
		
		case 922:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_DIFFICULTY_MULTIPLIER_HARD");
			uParam1->f_4 = 1;
			break;
		
		case 923:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_RANK_CAP");
			uParam1->f_4 = 1;
			break;
		
		case 924:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("CONTACT_MISSION_RP_BASIC_VALUE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 949:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_FLIGHT_SCHOOL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 948:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ELITAS_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 947:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_BRAZIL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 946:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_JAPAN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 945:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_AUSTRALIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 944:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SPAIN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 943:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_GERMANY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 942:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_FRANCE_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 941:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_CANADA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 940:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SCOTLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 939:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_UNITED_KINGDOM_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 938:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_USA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 937:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_SUNRISE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 936:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_AIRBORNE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 935:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_HIGH_ALTITUDE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 934:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_SHADOW_CHUTE");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 933:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_DESERT_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 932:
			*uParam1 = 7500f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 7500;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("PS_AIR_FORCE_CHUTE");
			uParam1->f_4 = 1;
			break;
		
		case 931:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_2");
			uParam1->f_4 = 1;
			break;
		
		case 930:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_SWIFT_LIVERY_1");
			uParam1->f_4 = 1;
			break;
		
		case 929:
			*uParam1 = 500000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_BUCKINGHAM_MILJET");
			uParam1->f_4 = 1;
			break;
		
		case 925:
			*uParam1 = 10000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("PS_FLIGHT_SUIT");
			uParam1->f_4 = 1;
			break;
		
		case 926:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC");
			uParam1->f_4 = 1;
			break;
		
		case 927:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("PS_INVERTO_COQUETTE_CLASSIC_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 928:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("PS_WESTERN_BESRA");
			uParam1->f_4 = 1;
			break;
		
		case 1020:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("REQUEST_HELI_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1021:
			*uParam1 = 0f;
			uParam1->f_1 = 750f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 750;
			uParam1->f_5 = joaat("REQUEST_BOAT_PICKUP_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1022:
			*uParam1 = 0f;
			uParam1->f_1 = 600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600;
			uParam1->f_5 = joaat("REQUEST_PEGASUS_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1023:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = joaat("REQUEST_THIEF1_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1024:
			*uParam1 = 0f;
			uParam1->f_1 = 22500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 22500;
			uParam1->f_5 = joaat("REQUEST_ARMY_EXPENDITURE_MODIFIER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 950:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 951:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 952:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_MISSION_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 953:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 954:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 955:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 956:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_MISSION_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 957:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 958:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 959:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 960:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 961:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 962:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 963:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_DEATHMATCH_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 964:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 965:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 966:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_RACE_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 967:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 968:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 969:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 970:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_RACE_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 971:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 972:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 973:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_SURVIVAL_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 974:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 975:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 976:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 977:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_SURVIVAL_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 978:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 979:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 980:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CTF_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 981:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 982:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 983:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 984:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CTF_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 985:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 986:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 987:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_LTS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 988:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 989:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 990:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_3");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 991:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_LTS_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 992:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 993:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 994:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_BASEJUMP_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 995:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 996:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 997:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 998:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_BASEJUMP_STAGE_4");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 999:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1000:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1001:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_CONTACT_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1002:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1003:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1004:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1005:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_CONTACT_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1006:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_1");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1007:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1008:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_VS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1009:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1010:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1011:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1012:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_VS_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1013:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1014:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1015:
			*uParam1 = 0f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = joaat("ON_CALL_TIMEOUT_PLAYLIST_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1016:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_1");
			uParam1->f_4 = 1;
			break;
		
		case 1017:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_2");
			uParam1->f_4 = 1;
			break;
		
		case 1018:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_3");
			uParam1->f_4 = 1;
			break;
		
		case 1019:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("ON_CALL_RATIO_PLAYLIST_STAGE_4");
			uParam1->f_4 = 1;
			break;
		
		case 1025:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CARS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1026:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CARMOD_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1027:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("CLOTHES_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1028:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("HAIRDO_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1029:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("TATTOO_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1030:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("WEAPONS_SHOP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1031:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("PLANES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1032:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("HELIS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1033:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("BOATS_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1034:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("PROPERTY_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1035:
			*uParam1 = 0.6f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("BIKES_WEBSITE_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1036:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 1037:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1038:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("ELEGY2_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1039:
			*uParam1 = 50000f;
			uParam1->f_1 = 125000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 125000;
			uParam1->f_5 = joaat("KHAMELION_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1040:
			*uParam1 = 45000f;
			uParam1->f_1 = 112500f;
			uParam1->f_2 = 45000;
			uParam1->f_3 = 112500;
			uParam1->f_5 = joaat("HOTKNIFE_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1041:
			*uParam1 = 20000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("CARBONRS_WEB_PRICE_MODIFIER");
			uParam1->f_4 = 1;
			break;
		
		case 1042:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CRATEDROPBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1043:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("SECURITYVANBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1044:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("IMPORTEXPORTBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1045:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("JOYRIDERBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1046:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("LESTERKILLTARGETBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1047:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("PLANETAKEDOWNBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1048:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("DISTRACTPOLICEBASEWEIGHTING");
			uParam1->f_4 = 1;
			break;
		
		case 1049:
			*uParam1 = 0f;
			uParam1->f_1 = 19f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 19;
			uParam1->f_5 = joaat("NUMBER_OF_SCRIPTS_IN_HISTORY_LIST");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1050:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ITALY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1051:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SWITZERLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1052:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_JAMAICA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1053:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_COLOMBIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1054:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_NORWAY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1055:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_SWEDEN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1056:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_BELGIUM_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1057:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_MEXICO_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1058:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_AUSTRIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1059:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_RUSSIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1060:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ARGENTINA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1061:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_TURKEY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1062:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_IRELAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1063:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_WALES_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1064:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("PS_ENGLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1072:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = joaat("CASH_REWARD_BET_STAKE_GIFT");
			uParam1->f_4 = 1;
			break;
		
		case 1073:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 1075:
			*uParam1 = 2f;
			uParam1->f_1 = SYSTEM::TO_FLOAT(32);
			uParam1->f_2 = 2;
			uParam1->f_3 = func_3();
			uParam1->f_5 = 869147615;
			uParam1->f_4 = 1;
			break;
		
		case 1074:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1414317463;
			uParam1->f_4 = 1;
			break;
		
		case 1076:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_BLACK_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1077:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_GRAY_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1078:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1079:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_TAN_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1080:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_M_FOREST_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1081:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_BLACK_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1082:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_GRAY_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1083:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_CHARCOAL_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1084:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_TAN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1085:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_M_GREEN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1086:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_BLACK_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1087:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_GRAY_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1088:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1089:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_TAN_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1090:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = joaat("LTS_F_FOREST_BULLETPROOF");
			uParam1->f_4 = 1;
			break;
		
		case 1091:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_BLACK_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1092:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_GRAY_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1093:
			*uParam1 = 5000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_CHARCOAL_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1094:
			*uParam1 = 5100f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5100;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_TAN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1095:
			*uParam1 = 5200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 5200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = joaat("LTS_F_GREEN_SKELETAL");
			uParam1->f_4 = 1;
			break;
		
		case 1096:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("LTS_LCC_INNOVATION");
			uParam1->f_4 = 1;
			break;
		
		case 1097:
			*uParam1 = 40000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 40000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("LTS_SHITZU_HAKUCHOU");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1098:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("LTS_LAMPADATI_FURORE_GT");
			uParam1->f_4 = 1;
			break;
		
		case 1099:
			*uParam1 = 25000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("LTS_CANIS_KALAHARI_TOPLESS");
			uParam1->f_4 = 1;
			break;
		
		case 1100:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN");
			uParam1->f_4 = 1;
			break;
		
		case 1101:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_HEAVY_SHOTGUN_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 1102:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE");
			uParam1->f_4 = 1;
			break;
		
		case 1103:
			*uParam1 = 6000f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 25000;
			uParam1->f_5 = joaat("LTS_MARKSMAN_RIFLE_SUPPRESSOR");
			uParam1->f_4 = 1;
			break;
		
		case 1104:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_FINLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1105:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_DENMARK_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1106:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NETHERLANDS_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1107:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PORTUGAL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1108:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CHINA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1109:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CROATIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1110:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_CZECH_REPUBLIC_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1111:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_HUNGARY_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1112:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_LIECHTENSTEIN_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1113:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_MALTA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1114:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NEW_ZEALAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1115:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_NIGERIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1116:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_POLAND_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1117:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PUERTO_RICO_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1118:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SLOVAKIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1119:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SLOVENIA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1120:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SOUTH_AFRICA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1121:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_SOUTH_KOREA_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1122:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_PALESTINE_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1123:
			*uParam1 = 5000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = joaat("LTS_ISRAEL_CHUTE_BAG");
			uParam1->f_4 = 1;
			break;
		
		case 1126:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1467004393;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1127:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BRUTE_BOXVILLE");
			uParam1->f_4 = 1;
			break;
		
		case 1128:
			*uParam1 = 300000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = -1877970625;
			uParam1->f_4 = 1;
			break;
		
		case 1129:
			*uParam1 = 60000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 60000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 639828788;
			uParam1->f_4 = 1;
			break;
		
		case 1130:
			*uParam1 = 20000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_DINKA_ENDURO");
			uParam1->f_4 = 1;
			break;
		
		case 1131:
			*uParam1 = 30000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 290523077;
			uParam1->f_4 = 1;
			break;
		
		case 1132:
			*uParam1 = 185000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -768747205;
			uParam1->f_4 = 1;
			break;
		
		case 1133:
			*uParam1 = 120000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAMMOTH_HYDRA");
			uParam1->f_4 = 1;
			break;
		
		case 1134:
			*uParam1 = 65000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT_PICKUP");
			uParam1->f_4 = 1;
			break;
		
		case 1135:
			*uParam1 = 330000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 330000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_HVY_INSURGENT");
			uParam1->f_4 = 1;
			break;
		
		case 1136:
			*uParam1 = 35000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 35000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -644832470;
			uParam1->f_4 = 1;
			break;
		
		case 1137:
			*uParam1 = 65000f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 65000;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -842117179;
			uParam1->f_4 = 1;
			break;
		
		case 1138:
			*uParam1 = 200000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_PRINCIPE_LECTRO");
			uParam1->f_4 = 1;
			break;
		
		case 1139:
			*uParam1 = 15000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_MAIBATSU_MULE");
			uParam1->f_4 = 1;
			break;
		
		case 1140:
			*uParam1 = 800000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 800000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_SAVAGE");
			uParam1->f_4 = 1;
			break;
		
		case 1141:
			*uParam1 = 350000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 350000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_KARIN_TECHNICAL");
			uParam1->f_4 = 1;
			break;
		
		case 1142:
			*uParam1 = 900000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 900000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("VEHICLES_HEIST_BUCKINGHAM_VALKYRIE");
			uParam1->f_4 = 1;
			break;
		
		case 1143:
			*uParam1 = 200000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1531297517;
			uParam1->f_4 = 1;
			break;
		
		case 1066:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -1369228807;
			uParam1->f_4 = 1;
			break;
		
		case 1067:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 15605478;
			uParam1->f_4 = 1;
			break;
		
		case 1068:
			*uParam1 = 0f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 40165126;
			uParam1->f_4 = 1;
			break;
		
		case 1069:
			*uParam1 = 0f;
			uParam1->f_1 = 2E+07f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000000;
			uParam1->f_5 = 1109954891;
			uParam1->f_4 = 1;
			break;
		
		case 1144:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1779378572;
			uParam1->f_4 = 1;
			break;
		
		case 1145:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -736791602;
			uParam1->f_4 = 1;
			break;
		
		case 1146:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1697146966;
			uParam1->f_4 = 1;
			break;
		
		case 1147:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -478542030;
			uParam1->f_4 = 1;
			break;
		
		case 1148:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("HEIST_SERIES_A_FUNDING_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1149:
			*uParam1 = 0f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = -1535523991;
			uParam1->f_4 = 1;
			break;
		
		case 1036:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_CASH");
			uParam1->f_4 = 1;
			break;
		
		case 1037:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = joaat("PLANE_TAKEDOWN_REWARDS_XP");
			uParam1->f_4 = 1;
			break;
		
		case 1073:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("DISABLE_EVENT_DISTRACT_COPS");
			break;
		
		case 1074:
			*uParam1 = 25f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 25;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1414317463;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1150:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -1108389569;
			uParam1->f_4 = 1;
			break;
		
		case 1151:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -927762540;
			uParam1->f_4 = 1;
			break;
		
		case 1152:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -691376018;
			uParam1->f_4 = 1;
			break;
		
		case 1153:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("CASH_REWARD_OVERRIDE_ELITE_OBJECTIVES_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1154:
			*uParam1 = -1f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -1188165573;
			uParam1->f_4 = 1;
			break;
		
		case 1155:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -461998205;
			uParam1->f_4 = 1;
			break;
		
		case 1156:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 732304828;
			uParam1->f_4 = 1;
			break;
		
		case 1157:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1749060561;
			uParam1->f_4 = 1;
			break;
		
		case 1158:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -489806450;
			uParam1->f_4 = 1;
			break;
		
		case 1159:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1236345409;
			uParam1->f_4 = 1;
			break;
		
		case 1160:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = -1140254079;
			uParam1->f_4 = 1;
			break;
		
		case 1161:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 201975816;
			uParam1->f_4 = 1;
			break;
		
		case 1162:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -36998299;
			uParam1->f_4 = 1;
			break;
		
		case 1163:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = 862138175;
			uParam1->f_4 = 1;
			break;
		
		case 1164:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1056121904;
			uParam1->f_4 = 1;
			break;
		
		case 1165:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 241292275;
			uParam1->f_4 = 1;
			break;
		
		case 1166:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 140847792;
			uParam1->f_4 = 1;
			break;
		
		case 1167:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1910687798;
			uParam1->f_4 = 1;
			break;
		
		case 1168:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -1964597960;
			uParam1->f_4 = 1;
			break;
		
		case 1169:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -2014262411;
			uParam1->f_4 = 1;
			break;
		
		case 1170:
			*uParam1 = -1f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 1026862599;
			uParam1->f_4 = 1;
			break;
		
		case 1171:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = 1305296770;
			uParam1->f_4 = 1;
			break;
		
		case 1172:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1536718037;
			uParam1->f_4 = 1;
			break;
		
		case 1173:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = 331939322;
			uParam1->f_4 = 1;
			break;
		
		case 1174:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -2098242609;
			uParam1->f_4 = 1;
			break;
		
		case 1175:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -367313129;
			uParam1->f_4 = 1;
			break;
		
		case 1176:
			*uParam1 = -1f;
			uParam1->f_1 = 1200000f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 1200000;
			uParam1->f_5 = -1868925097;
			uParam1->f_4 = 1;
			break;
		
		case 1177:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -707243232;
			uParam1->f_4 = 1;
			break;
		
		case 1178:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1669356470;
			uParam1->f_4 = 1;
			break;
		
		case 1179:
			*uParam1 = -1f;
			uParam1->f_1 = 300f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 300;
			uParam1->f_5 = -1138011519;
			uParam1->f_4 = 1;
			break;
		
		case 1180:
			*uParam1 = -1f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = -1;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1944119143;
			uParam1->f_4 = 1;
			break;
		
		case 1188:
			*uParam1 = 0f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 72000;
			uParam1->f_5 = -365813198;
			uParam1->f_4 = 1;
			break;
		
		case 1187:
			*uParam1 = 0f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 36000;
			uParam1->f_5 = -118287201;
			uParam1->f_4 = 1;
			break;
		
		case 1192:
			*uParam1 = 0f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1241897426;
			uParam1->f_4 = 1;
			break;
		
		case 1193:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -284978087;
			uParam1->f_4 = 1;
			break;
		
		case 1189:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -76405223;
			uParam1->f_4 = 1;
			break;
		
		case 1190:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1215175122;
			uParam1->f_4 = 1;
			break;
		
		case 1191:
			*uParam1 = 0f;
			uParam1->f_1 = 45f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 45;
			uParam1->f_5 = -527933388;
			uParam1->f_4 = 1;
			break;
		
		case 1225:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 1596686975;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1070:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 1949822091;
			uParam1->f_4 = 1;
			break;
		
		case 1071:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1282713733;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1194:
			*uParam1 = 20790f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 20790;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -682446881;
			uParam1->f_4 = 1;
			break;
		
		case 1195:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 116463396;
			uParam1->f_4 = 1;
			break;
		
		case 1196:
			*uParam1 = 30690f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 30690;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 715349067;
			uParam1->f_4 = 1;
			break;
		
		case 1197:
			*uParam1 = 247500f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 247500;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("CGTONG_CHEVAL_MARSHALL");
			uParam1->f_4 = 1;
			break;
		
		case 1198:
			*uParam1 = 35145f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 35145;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -575136563;
			uParam1->f_4 = 1;
			break;
		
		case 1199:
			*uParam1 = 655875f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 655875;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -1711319395;
			uParam1->f_4 = 1;
			break;
		
		case 1200:
			*uParam1 = 200f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 200;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -1885561778;
			uParam1->f_4 = 1;
			break;
		
		case 1201:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -64032203;
			uParam1->f_4 = 1;
			break;
		
		case 1202:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 563884031;
			uParam1->f_4 = 1;
			break;
		
		case 1203:
			*uParam1 = 0f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 833422834;
			uParam1->f_4 = 1;
			break;
		
		case 1204:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 675628469;
			uParam1->f_4 = 1;
			break;
		
		case 1205:
			*uParam1 = 0f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1942782413;
			uParam1->f_4 = 1;
			break;
		
		case 1206:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1012074199;
			uParam1->f_4 = 1;
			break;
		
		case 1207:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1060446307;
			uParam1->f_4 = 1;
			break;
		
		case 1208:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 2120301072;
			uParam1->f_4 = 1;
			break;
		
		case 1209:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -863377025;
			uParam1->f_4 = 1;
			break;
		
		case 1210:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 79198076;
			uParam1->f_4 = 1;
			break;
		
		case 1211:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -222535300;
			uParam1->f_4 = 1;
			break;
		
		case 1212:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1942366844;
			uParam1->f_4 = 1;
			break;
		
		case 1213:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = -441395635;
			uParam1->f_4 = 1;
			break;
		
		case 1214:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -633145824;
			uParam1->f_4 = 1;
			break;
		
		case 1215:
			*uParam1 = 10000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 275702167;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1216:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DINKA_JESTER_RACECAR");
			uParam1->f_4 = 1;
			break;
		
		case 1217:
			*uParam1 = 100000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR");
			uParam1->f_4 = 1;
			break;
		
		case 1218:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_RAT_TRUCK");
			uParam1->f_4 = 1;
			break;
		
		case 1219:
			*uParam1 = 15000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_SLAMVAN");
			uParam1->f_4 = 1;
			break;
		
		case 1220:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_SPRUNK_BUFFALO");
			uParam1->f_4 = 1;
			break;
		
		case 1221:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_VAPID_PISSWASSER_DOMINATOR");
			uParam1->f_4 = 1;
			break;
		
		case 1222:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_BRAVADO_REDWOOD_GAUNTLET");
			uParam1->f_4 = 1;
			break;
		
		case 1223:
			*uParam1 = 50000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("VEHICLE_XMAS14_DECLASSE_BURGER_SHOT_STALLION");
			uParam1->f_4 = 1;
			break;
		
		case 1224:
			*uParam1 = 30000f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 30000;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("WEAPONS_XMAS14_HOMING_LAUNCHER");
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1226:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_FIRST_PLAY_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1227:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_REPLAY_CASH_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1228:
			*uParam1 = 0f;
			uParam1->f_1 = 200000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200000;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MINIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 1;
			break;
		
		case 1229:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = joaat("EARNINGS_HEISTS_FINALE_MAXIMUM_TOTAL_CASH_TAKE");
			uParam1->f_4 = 1;
			break;
		
		case 1230:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_1");
			uParam1->f_4 = 1;
			break;
		
		case 1231:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_2");
			uParam1->f_4 = 1;
			break;
		
		case 1232:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_3");
			uParam1->f_4 = 1;
			break;
		
		case 1233:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_4");
			uParam1->f_4 = 1;
			break;
		
		case 1234:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_5");
			uParam1->f_4 = 1;
			break;
		
		case 1235:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = joaat("RP_HEISTS_HEIST_FAIL_RP_TIME_PERIOD_6");
			uParam1->f_4 = 1;
			break;
		
		case 1236:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -402353485;
			uParam1->f_4 = 1;
			break;
		
		case 1237:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 430863878;
			uParam1->f_4 = 1;
			break;
		
		case 1238:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 2083142404;
			uParam1->f_4 = 1;
			break;
		
		case 1239:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -326111676;
			uParam1->f_4 = 1;
			break;
		
		case 1240:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1656333677;
			uParam1->f_4 = 1;
			break;
		
		case 1241:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1852964703;
			uParam1->f_4 = 1;
			break;
		
		case 1242:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1787114410;
			uParam1->f_4 = 1;
			break;
		
		case 1243:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -849109764;
			uParam1->f_4 = 1;
			break;
		
		case 1244:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = 599942040;
			uParam1->f_4 = 1;
			break;
		
		case 1245:
			*uParam1 = 0f;
			uParam1->f_1 = 4.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1189510226;
			uParam1->f_4 = 1;
			break;
		
		case 1246:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 633502183;
			uParam1->f_4 = 1;
			break;
		
		case 1247:
			*uParam1 = 0f;
			uParam1->f_1 = 5.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = -1019356302;
			uParam1->f_4 = 1;
			break;
		
		case 1248:
			*uParam1 = 0f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 6;
			uParam1->f_5 = -217455654;
			uParam1->f_4 = 1;
			break;
		
		case 1249:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_GOLD_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1250:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_SILVER_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1251:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("RP_HEISTS_BRONZE_MEDAL_RP_MULTIPLIER");
			uParam1->f_4 = 1;
			break;
		
		case 1252:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1585383603;
			uParam1->f_4 = 1;
			break;
		
		case 1253:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 1667263936;
			uParam1->f_4 = 1;
			break;
		
		case 1254:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -662029971;
			uParam1->f_4 = 1;
			break;
		
		case 1255:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 1479256181;
			uParam1->f_4 = 1;
			break;
		
		case 1256:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 2116066248;
			uParam1->f_4 = 1;
			break;
		
		case 1257:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1062623225;
			uParam1->f_4 = 1;
			break;
		
		case 1258:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -397274584;
			uParam1->f_4 = 1;
			break;
		
		case 1259:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -170073122;
			uParam1->f_4 = 1;
			break;
		
		case 1260:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 2131625723;
			uParam1->f_4 = 1;
			break;
		
		case 1261:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1821454383;
			uParam1->f_4 = 1;
			break;
		
		case 1262:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1138422695;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1263:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1269060505;
			uParam1->f_4 = 1;
			break;
		
		case 1264:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = -1954484836;
			uParam1->f_4 = 1;
			break;
		
		case 1265:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 281319684;
			uParam1->f_4 = 1;
			break;
		
		case 1266:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -262054156;
			uParam1->f_4 = 1;
			break;
		
		case 1267:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -247589881;
			uParam1->f_4 = 1;
			break;
		
		case 1268:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1308507187;
			uParam1->f_4 = 1;
			break;
		
		case 1269:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1083949574;
			uParam1->f_4 = 1;
			break;
		
		case 1270:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 420923772;
			uParam1->f_4 = 1;
			break;
		
		case 1271:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -1886472598;
			uParam1->f_4 = 1;
			break;
		
		case 1272:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 2133726633;
			uParam1->f_4 = 1;
			break;
		
		case 1273:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -199819395;
			uParam1->f_4 = 1;
			break;
		
		case 1274:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = -507946302;
			uParam1->f_4 = 1;
			break;
		
		case 1275:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 1039930178;
			uParam1->f_4 = 1;
			break;
		
		case 1276:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 596116364;
			uParam1->f_4 = 1;
			break;
		
		case 1277:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 475493675;
			uParam1->f_4 = 1;
			break;
		
		case 1278:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 118835879;
			uParam1->f_4 = 1;
			break;
		
		case 1279:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 537918616;
			uParam1->f_4 = 1;
			break;
		
		case 1280:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 164679706;
			uParam1->f_4 = 1;
			break;
		
		case 1281:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1005337439;
			uParam1->f_4 = 1;
			break;
		
		case 1282:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -177821882;
			uParam1->f_4 = 1;
			break;
		
		case 1283:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 605775880;
			uParam1->f_4 = 1;
			break;
		
		case 1284:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 994350686;
			uParam1->f_4 = 1;
			break;
		
		case 1285:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 703591349;
			uParam1->f_4 = 1;
			break;
		
		case 1286:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 386584043;
			uParam1->f_4 = 1;
			break;
		
		case 1287:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 89860748;
			uParam1->f_4 = 1;
			break;
		
		case 1288:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -263389072;
			uParam1->f_4 = 1;
			break;
		
		case 1289:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -553198108;
			uParam1->f_4 = 1;
			break;
		
		case 1290:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1969611153;
			uParam1->f_4 = 1;
			break;
		
		case 1291:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -528257471;
			uParam1->f_4 = 1;
			break;
		
		case 1292:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1499559503;
			uParam1->f_4 = 1;
			break;
		
		case 1293:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1946052474;
			uParam1->f_4 = 1;
			break;
		
		case 1294:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1708744574;
			uParam1->f_4 = 1;
			break;
		
		case 1295:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -2064452993;
			uParam1->f_4 = 1;
			break;
		
		case 1296:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 2039519006;
			uParam1->f_4 = 1;
			break;
		
		case 1297:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1187949946;
			uParam1->f_4 = 1;
			break;
		
		case 1298:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -1440816611;
			uParam1->f_4 = 1;
			break;
		
		case 1299:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1542235699;
			uParam1->f_4 = 1;
			break;
		
		case 1300:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1721859582;
			uParam1->f_4 = 1;
			break;
		
		case 1301:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -17216460;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1302:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 2135517534;
			uParam1->f_4 = 1;
			break;
		
		case 1303:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -2013854817;
			uParam1->f_4 = 1;
			break;
		
		case 1304:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 1299723789;
			uParam1->f_4 = 1;
			break;
		
		case 1305:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1343230522;
			uParam1->f_4 = 1;
			break;
		
		case 1306:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1006143612;
			uParam1->f_4 = 1;
			break;
		
		case 1307:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1310928081;
			uParam1->f_4 = 1;
			break;
		
		case 1308:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1145413714;
			uParam1->f_4 = 1;
			break;
		
		case 1309:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -91243912;
			uParam1->f_4 = 1;
			break;
		
		case 1310:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1471181088;
			uParam1->f_4 = 1;
			break;
		
		case 1311:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1537238317;
			uParam1->f_4 = 1;
			break;
		
		case 1312:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -236186605;
			uParam1->f_4 = 1;
			break;
		
		case 1313:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1845534777;
			uParam1->f_4 = 1;
			break;
		
		case 1314:
			*uParam1 = 0f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 4;
			uParam1->f_5 = 1432380296;
			uParam1->f_4 = 1;
			break;
		
		case 1315:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -815423306;
			uParam1->f_4 = 1;
			break;
		
		case 1316:
			*uParam1 = 0f;
			uParam1->f_1 = 12000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 12000;
			uParam1->f_5 = 542824547;
			uParam1->f_4 = 1;
			break;
		
		case 1317:
			*uParam1 = 0.1f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1651561769;
			uParam1->f_4 = 1;
			break;
		
		case 1318:
			*uParam1 = 0.0001f;
			uParam1->f_1 = 1.5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 373723198;
			uParam1->f_4 = 1;
			break;
		
		case 1319:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1964434213;
			uParam1->f_4 = 1;
			break;
		
		case 1320:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -2110655325;
			uParam1->f_4 = 1;
			break;
		
		case 1321:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -945941977;
			uParam1->f_4 = 1;
			break;
		
		case 1322:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1543624979;
			uParam1->f_4 = 1;
			break;
		
		case 1323:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = joaat("EXPENSES_HEIST_COST_PERCENTAGE_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1324:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = 162756378;
			uParam1->f_4 = 1;
			break;
		
		case 1325:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1198047495;
			uParam1->f_4 = 1;
			break;
		
		case 1326:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1236056555;
			uParam1->f_4 = 1;
			break;
		
		case 1327:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1805291589;
			uParam1->f_4 = 1;
			break;
		
		case 1328:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = joaat("HEISTS_PREP_PERCENTAGE_CUT_SERIES_A");
			uParam1->f_4 = 1;
			break;
		
		case 1329:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 268818202;
			uParam1->f_4 = 1;
			break;
		
		case 1330:
			*uParam1 = 0f;
			uParam1->f_1 = 16f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 16;
			uParam1->f_5 = -1770038462;
			uParam1->f_4 = 1;
			break;
		
		case 1331:
			*uParam1 = 0f;
			uParam1->f_1 = 32f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 32;
			uParam1->f_5 = -1757323514;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1332:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -1729596367;
			uParam1->f_4 = 1;
			break;
		
		case 1333:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -1718001628;
			uParam1->f_4 = 1;
			break;
		
		case 1334:
			*uParam1 = 6250f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6250;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -1575846672;
			uParam1->f_4 = 1;
			break;
		
		case 1335:
			*uParam1 = 5900f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 36000;
			uParam1->f_5 = 823111805;
			uParam1->f_4 = 1;
			break;
		
		case 1336:
			*uParam1 = 6150f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 37000;
			uParam1->f_5 = -8427937;
			uParam1->f_4 = 1;
			break;
		
		case 1337:
			*uParam1 = 5750f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5750;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -871806160;
			uParam1->f_4 = 1;
			break;
		
		case 1338:
			*uParam1 = 6050f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 37000;
			uParam1->f_5 = -463233030;
			uParam1->f_4 = 1;
			break;
		
		case 1339:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -193691263;
			uParam1->f_4 = 1;
			break;
		
		case 1340:
			*uParam1 = 5850f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5850;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -397055287;
			uParam1->f_4 = 1;
			break;
		
		case 1341:
			*uParam1 = 5600f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -661216548;
			uParam1->f_4 = 1;
			break;
		
		case 1342:
			*uParam1 = 6000f;
			uParam1->f_1 = 36000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 36000;
			uParam1->f_5 = -536846871;
			uParam1->f_4 = 1;
			break;
		
		case 1343:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = 1037974626;
			uParam1->f_4 = 1;
			break;
		
		case 1344:
			*uParam1 = 6400f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6400;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -758174303;
			uParam1->f_4 = 1;
			break;
		
		case 1345:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 1566897804;
			uParam1->f_4 = 1;
			break;
		
		case 1346:
			*uParam1 = 5050f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5050;
			uParam1->f_3 = 31000;
			uParam1->f_5 = -2111510718;
			uParam1->f_4 = 1;
			break;
		
		case 1347:
			*uParam1 = 5150f;
			uParam1->f_1 = 31000f;
			uParam1->f_2 = 5150;
			uParam1->f_3 = 31000;
			uParam1->f_5 = -1028732531;
			uParam1->f_4 = 1;
			break;
		
		case 1348:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -46284235;
			uParam1->f_4 = 1;
			break;
		
		case 1349:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -237381221;
			uParam1->f_4 = 1;
			break;
		
		case 1350:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = 242573637;
			uParam1->f_4 = 1;
			break;
		
		case 1351:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 1022653368;
			uParam1->f_4 = 1;
			break;
		
		case 1352:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -201919806;
			uParam1->f_4 = 1;
			break;
		
		case 1353:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -1431057455;
			uParam1->f_4 = 1;
			break;
		
		case 1354:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 1549920548;
			uParam1->f_4 = 1;
			break;
		
		case 1355:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 2102711115;
			uParam1->f_4 = 1;
			break;
		
		case 1356:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 438329486;
			uParam1->f_4 = 1;
			break;
		
		case 1357:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 738158216;
			uParam1->f_4 = 1;
			break;
		
		case 1358:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -918926708;
			uParam1->f_4 = 1;
			break;
		
		case 1359:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1373128818;
			uParam1->f_4 = 1;
			break;
		
		case 1360:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 494546616;
			uParam1->f_4 = 1;
			break;
		
		case 1361:
			*uParam1 = 4400f;
			uParam1->f_1 = 26000f;
			uParam1->f_2 = 4400;
			uParam1->f_3 = 26000;
			uParam1->f_5 = -1284435538;
			uParam1->f_4 = 1;
			break;
		
		case 1362:
			*uParam1 = 4650f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4650;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -365514956;
			uParam1->f_4 = 1;
			break;
		
		case 1363:
			*uParam1 = 4700f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4700;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -1943656460;
			uParam1->f_4 = 1;
			break;
		
		case 1364:
			*uParam1 = 4600f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 4600;
			uParam1->f_3 = 28000;
			uParam1->f_5 = 1061694457;
			uParam1->f_4 = 1;
			break;
		
		case 1365:
			*uParam1 = 3550f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3550;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -462275974;
			uParam1->f_4 = 1;
			break;
		
		case 1366:
			*uParam1 = 3500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 3500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 174638335;
			uParam1->f_4 = 1;
			break;
		
		case 1367:
			*uParam1 = 3700f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 3700;
			uParam1->f_3 = 22000;
			uParam1->f_5 = -466789562;
			uParam1->f_4 = 1;
			break;
		
		case 1368:
			*uParam1 = 3400f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3400;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1266026401;
			uParam1->f_4 = 1;
			break;
		
		case 1369:
			*uParam1 = 4150f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4150;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 844534447;
			uParam1->f_4 = 1;
			break;
		
		case 1370:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1044673943;
			uParam1->f_4 = 1;
			break;
		
		case 1371:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = -1850514921;
			uParam1->f_4 = 1;
			break;
		
		case 1372:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 1756201683;
			uParam1->f_4 = 1;
			break;
		
		case 1373:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 372185970;
			uParam1->f_4 = 1;
			break;
		
		case 1374:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = 1562446673;
			uParam1->f_4 = 1;
			break;
		
		case 1375:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = 1431347163;
			uParam1->f_4 = 1;
			break;
		
		case 1376:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = -2018857623;
			uParam1->f_4 = 1;
			break;
		
		case 1377:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = 1121234308;
			uParam1->f_4 = 1;
			break;
		
		case 1378:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = 16087852;
			uParam1->f_4 = 1;
			break;
		
		case 1379:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = -1506306818;
			uParam1->f_4 = 1;
			break;
		
		case 1380:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 615535070;
			uParam1->f_4 = 1;
			break;
		
		case 1381:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = 1420361769;
			uParam1->f_4 = 1;
			break;
		
		case 1382:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = 1354405463;
			uParam1->f_4 = 1;
			break;
		
		case 1383:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = 588752792;
			uParam1->f_4 = 1;
			break;
		
		case 1384:
			*uParam1 = 6450f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6450;
			uParam1->f_3 = 39000;
			uParam1->f_5 = -45476468;
			uParam1->f_4 = 1;
			break;
		
		case 1385:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 951218996;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1386:
			*uParam1 = 5800f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 35000;
			uParam1->f_5 = 1006612972;
			uParam1->f_4 = 1;
			break;
		
		case 1387:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = -1591209532;
			uParam1->f_4 = 1;
			break;
		
		case 1388:
			*uParam1 = 8350f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1643342144;
			uParam1->f_4 = 1;
			break;
		
		case 1389:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 387600112;
			uParam1->f_4 = 1;
			break;
		
		case 1390:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -630209226;
			uParam1->f_4 = 1;
			break;
		
		case 1391:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -1518640763;
			uParam1->f_4 = 1;
			break;
		
		case 1392:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 147778759;
			uParam1->f_4 = 1;
			break;
		
		case 1393:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -623557692;
			uParam1->f_4 = 1;
			break;
		
		case 1394:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -457563433;
			uParam1->f_4 = 1;
			break;
		
		case 1395:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 1272142809;
			uParam1->f_4 = 1;
			break;
		
		case 1396:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 868761443;
			uParam1->f_4 = 1;
			break;
		
		case 1397:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -530226293;
			uParam1->f_4 = 1;
			break;
		
		case 1398:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1177716250;
			uParam1->f_4 = 1;
			break;
		
		case 1399:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 1397316083;
			uParam1->f_4 = 1;
			break;
		
		case 1400:
			*uParam1 = 4900f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4900;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1814667424;
			uParam1->f_4 = 1;
			break;
		
		case 1401:
			*uParam1 = 4950f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 4950;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -92922076;
			uParam1->f_4 = 1;
			break;
		
		case 1402:
			*uParam1 = 4800f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 4800;
			uParam1->f_3 = 29000;
			uParam1->f_5 = -325789041;
			uParam1->f_4 = 1;
			break;
		
		case 1403:
			*uParam1 = 7400f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7400;
			uParam1->f_3 = 44000;
			uParam1->f_5 = 1079257332;
			uParam1->f_4 = 1;
			break;
		
		case 1404:
			*uParam1 = 7150f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7150;
			uParam1->f_3 = 43000;
			uParam1->f_5 = 390774800;
			uParam1->f_4 = 1;
			break;
		
		case 1405:
			*uParam1 = 6800f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6800;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 1348540931;
			uParam1->f_4 = 1;
			break;
		
		case 1406:
			*uParam1 = 7050f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 7050;
			uParam1->f_3 = 42000;
			uParam1->f_5 = -607564288;
			uParam1->f_4 = 1;
			break;
		
		case 1407:
			*uParam1 = 6650f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6650;
			uParam1->f_3 = 40000;
			uParam1->f_5 = 646238916;
			uParam1->f_4 = 1;
			break;
		
		case 1408:
			*uParam1 = 6950f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6950;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 168933341;
			uParam1->f_4 = 1;
			break;
		
		case 1409:
			*uParam1 = 6550f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 6550;
			uParam1->f_3 = 40000;
			uParam1->f_5 = 240704550;
			uParam1->f_4 = 1;
			break;
		
		case 1410:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = 1870450114;
			uParam1->f_4 = 1;
			break;
		
		case 1411:
			*uParam1 = 6500f;
			uParam1->f_1 = 39000f;
			uParam1->f_2 = 6500;
			uParam1->f_3 = 39000;
			uParam1->f_5 = 1659202257;
			uParam1->f_4 = 1;
			break;
		
		case 1412:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 1719875364;
			uParam1->f_4 = 1;
			break;
		
		case 1413:
			*uParam1 = 7200f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 7200;
			uParam1->f_3 = 43000;
			uParam1->f_5 = -206626676;
			uParam1->f_4 = 1;
			break;
		
		case 1414:
			*uParam1 = 7300f;
			uParam1->f_1 = 44000f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 44000;
			uParam1->f_5 = -858654121;
			uParam1->f_4 = 1;
			break;
		
		case 1415:
			*uParam1 = 5400f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 32000;
			uParam1->f_5 = 1362868671;
			uParam1->f_4 = 1;
			break;
		
		case 1416:
			*uParam1 = 5650f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 5650;
			uParam1->f_3 = 34000;
			uParam1->f_5 = 1318738727;
			uParam1->f_4 = 1;
			break;
		
		case 1417:
			*uParam1 = 5250f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 5250;
			uParam1->f_3 = 32000;
			uParam1->f_5 = -696473003;
			uParam1->f_4 = 1;
			break;
		
		case 1418:
			*uParam1 = 5550f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5550;
			uParam1->f_3 = 33000;
			uParam1->f_5 = 1073348675;
			uParam1->f_4 = 1;
			break;
		
		case 1419:
			*uParam1 = 10650f;
			uParam1->f_1 = 64000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 64000;
			uParam1->f_5 = -985532639;
			uParam1->f_4 = 1;
			break;
		
		case 1420:
			*uParam1 = 11600f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 183500134;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1421:
			*uParam1 = 6750f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6750;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -164210352;
			uParam1->f_4 = 1;
			break;
		
		case 1422:
			*uParam1 = 7800f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7800;
			uParam1->f_3 = 47000;
			uParam1->f_5 = 1872053592;
			uParam1->f_4 = 1;
			break;
		
		case 1423:
			*uParam1 = 11950f;
			uParam1->f_1 = 72000f;
			uParam1->f_2 = 11950;
			uParam1->f_3 = 72000;
			uParam1->f_5 = -1375849199;
			uParam1->f_4 = 1;
			break;
		
		case 1424:
			*uParam1 = 16050f;
			uParam1->f_1 = 97000f;
			uParam1->f_2 = 16050;
			uParam1->f_3 = 97000;
			uParam1->f_5 = -1589468666;
			uParam1->f_4 = 1;
			break;
		
		case 1425:
			*uParam1 = 16200f;
			uParam1->f_1 = 98000f;
			uParam1->f_2 = 16200;
			uParam1->f_3 = 98000;
			uParam1->f_5 = -931642865;
			uParam1->f_4 = 1;
			break;
		
		case 1426:
			*uParam1 = 13750f;
			uParam1->f_1 = 83000f;
			uParam1->f_2 = 13750;
			uParam1->f_3 = 83000;
			uParam1->f_5 = -192875152;
			uParam1->f_4 = 1;
			break;
		
		case 1427:
			*uParam1 = 14950f;
			uParam1->f_1 = 90000f;
			uParam1->f_2 = 14950;
			uParam1->f_3 = 90000;
			uParam1->f_5 = -1805484546;
			uParam1->f_4 = 1;
			break;
		
		case 1428:
			*uParam1 = 6850f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 6850;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -1252693940;
			uParam1->f_4 = 1;
			break;
		
		case 1429:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = 1188109527;
			uParam1->f_4 = 1;
			break;
		
		case 1430:
			*uParam1 = 10300f;
			uParam1->f_1 = 62000f;
			uParam1->f_2 = 10300;
			uParam1->f_3 = 62000;
			uParam1->f_5 = 1887430707;
			uParam1->f_4 = 1;
			break;
		
		case 1431:
			*uParam1 = 11200f;
			uParam1->f_1 = 68000f;
			uParam1->f_2 = 11200;
			uParam1->f_3 = 68000;
			uParam1->f_5 = 1348348209;
			uParam1->f_4 = 1;
			break;
		
		case 1432:
			*uParam1 = 8700f;
			uParam1->f_1 = 53000f;
			uParam1->f_2 = 8700;
			uParam1->f_3 = 53000;
			uParam1->f_5 = 416578167;
			uParam1->f_4 = 1;
			break;
		
		case 1433:
			*uParam1 = 6900f;
			uParam1->f_1 = 42000f;
			uParam1->f_2 = 6900;
			uParam1->f_3 = 42000;
			uParam1->f_5 = 844638271;
			uParam1->f_4 = 1;
			break;
		
		case 1434:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -27925398;
			uParam1->f_4 = 1;
			break;
		
		case 1435:
			*uParam1 = 7450f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 45000;
			uParam1->f_5 = -97710512;
			uParam1->f_4 = 1;
			break;
		
		case 1436:
			*uParam1 = 9450f;
			uParam1->f_1 = 57000f;
			uParam1->f_2 = 9450;
			uParam1->f_3 = 57000;
			uParam1->f_5 = -1560965010;
			uParam1->f_4 = 1;
			break;
		
		case 1437:
			*uParam1 = 6300f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 38000;
			uParam1->f_5 = 628262743;
			uParam1->f_4 = 1;
			break;
		
		case 1438:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 499519505;
			uParam1->f_4 = 1;
			break;
		
		case 1439:
			*uParam1 = 2750f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 202689733;
			uParam1->f_4 = 1;
			break;
		
		case 1440:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -1722815609;
			uParam1->f_4 = 1;
			break;
		
		case 1441:
			*uParam1 = 4100f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 4100;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1991533546;
			uParam1->f_4 = 1;
			break;
		
		case 1442:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -1791754603;
			uParam1->f_4 = 1;
			break;
		
		case 1443:
			*uParam1 = 4450f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 4450;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 1813423691;
			uParam1->f_4 = 1;
			break;
		
		case 1444:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1623792009;
			uParam1->f_4 = 1;
			break;
		
		case 1445:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2073796128;
			uParam1->f_4 = 1;
			break;
		
		case 1446:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1992504606;
			uParam1->f_4 = 1;
			break;
		
		case 1447:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 867076051;
			uParam1->f_4 = 1;
			break;
		
		case 1448:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2086339040;
			uParam1->f_4 = 1;
			break;
		
		case 1449:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2054389455;
			uParam1->f_4 = 1;
			break;
		
		case 1450:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1893802109;
			uParam1->f_4 = 1;
			break;
		
		case 1451:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1185920970;
			uParam1->f_4 = 1;
			break;
		
		case 1452:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1077619944;
			uParam1->f_4 = 1;
			break;
		
		case 1453:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -232563180;
			uParam1->f_4 = 1;
			break;
		
		case 1454:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1025128029;
			uParam1->f_4 = 1;
			break;
		
		case 1455:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1184224905;
			uParam1->f_4 = 1;
			break;
		
		case 1456:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1837989889;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1457:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1468325815;
			uParam1->f_4 = 1;
			break;
		
		case 1458:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1489577493;
			uParam1->f_4 = 1;
			break;
		
		case 1459:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1442218045;
			uParam1->f_4 = 1;
			break;
		
		case 1460:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -270424695;
			uParam1->f_4 = 1;
			break;
		
		case 1461:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1554855494;
			uParam1->f_4 = 1;
			break;
		
		case 1462:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -419251367;
			uParam1->f_4 = 1;
			break;
		
		case 1463:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1156096398;
			uParam1->f_4 = 1;
			break;
		
		case 1464:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -301512982;
			uParam1->f_4 = 1;
			break;
		
		case 1465:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 2078262605;
			uParam1->f_4 = 1;
			break;
		
		case 1466:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -113903074;
			uParam1->f_4 = 1;
			break;
		
		case 1467:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 145823683;
			uParam1->f_4 = 1;
			break;
		
		case 1468:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -1778646383;
			uParam1->f_4 = 1;
			break;
		
		case 1469:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 215034897;
			uParam1->f_4 = 1;
			break;
		
		case 1470:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1898021273;
			uParam1->f_4 = 1;
			break;
		
		case 1471:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 571859420;
			uParam1->f_4 = 1;
			break;
		
		case 1472:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 2061753098;
			uParam1->f_4 = 1;
			break;
		
		case 1473:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 310707750;
			uParam1->f_4 = 1;
			break;
		
		case 1474:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1096195218;
			uParam1->f_4 = 1;
			break;
		
		case 1475:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1303464864;
			uParam1->f_4 = 1;
			break;
		
		case 1476:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 332547550;
			uParam1->f_4 = 1;
			break;
		
		case 1477:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1109079635;
			uParam1->f_4 = 1;
			break;
		
		case 1478:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -501042997;
			uParam1->f_4 = 1;
			break;
		
		case 1479:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1829780298;
			uParam1->f_4 = 1;
			break;
		
		case 1480:
			*uParam1 = 7450f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 7450;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1466060103;
			uParam1->f_4 = 1;
			break;
		
		case 1481:
			*uParam1 = 5900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -693611144;
			uParam1->f_4 = 1;
			break;
		
		case 1482:
			*uParam1 = 7100f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7100;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 1924117099;
			uParam1->f_4 = 1;
			break;
		
		case 1483:
			*uParam1 = 6050f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 6050;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 1153855224;
			uParam1->f_4 = 1;
			break;
		
		case 1484:
			*uParam1 = 12400f;
			uParam1->f_1 = 38000f;
			uParam1->f_2 = 12400;
			uParam1->f_3 = 38000;
			uParam1->f_5 = -1623493982;
			uParam1->f_4 = 1;
			break;
		
		case 1485:
			*uParam1 = 6150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1433836543;
			uParam1->f_4 = 1;
			break;
		
		case 1486:
			*uParam1 = 8900f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 8900;
			uParam1->f_3 = 27000;
			uParam1->f_5 = 399093662;
			uParam1->f_4 = 1;
			break;
		
		case 1487:
			*uParam1 = 9500f;
			uParam1->f_1 = 29000f;
			uParam1->f_2 = 9500;
			uParam1->f_3 = 29000;
			uParam1->f_5 = -1230281035;
			uParam1->f_4 = 1;
			break;
		
		case 1488:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = 1574338118;
			uParam1->f_4 = 1;
			break;
		
		case 1489:
			*uParam1 = 9000f;
			uParam1->f_1 = 27000f;
			uParam1->f_2 = 9000;
			uParam1->f_3 = 27000;
			uParam1->f_5 = -280547334;
			uParam1->f_4 = 1;
			break;
		
		case 1490:
			*uParam1 = 8050f;
			uParam1->f_1 = 24000f;
			uParam1->f_2 = 8050;
			uParam1->f_3 = 24000;
			uParam1->f_5 = 295997592;
			uParam1->f_4 = 1;
			break;
		
		case 1491:
			*uParam1 = 8350f;
			uParam1->f_1 = 25000f;
			uParam1->f_2 = 8350;
			uParam1->f_3 = 25000;
			uParam1->f_5 = -1693174653;
			uParam1->f_4 = 1;
			break;
		
		case 1492:
			*uParam1 = 11150f;
			uParam1->f_1 = 34000f;
			uParam1->f_2 = 11150;
			uParam1->f_3 = 34000;
			uParam1->f_5 = -245039713;
			uParam1->f_4 = 1;
			break;
		
		case 1493:
			*uParam1 = 6350f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6350;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 258805324;
			uParam1->f_4 = 1;
			break;
		
		case 1494:
			*uParam1 = 13500f;
			uParam1->f_1 = 41000f;
			uParam1->f_2 = 13500;
			uParam1->f_3 = 41000;
			uParam1->f_5 = -1421508725;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1495:
			*uParam1 = 480000f;
			uParam1->f_1 = 1463000f;
			uParam1->f_2 = 480000;
			uParam1->f_3 = 1463000;
			uParam1->f_5 = 1325082693;
			uParam1->f_4 = 1;
			break;
		
		case 1496:
			*uParam1 = 2500000f;
			uParam1->f_1 = 1.25E+07f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 12500000;
			uParam1->f_5 = joaat("LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE");
			uParam1->f_4 = 1;
			break;
		
		case 1497:
			*uParam1 = 950000f;
			uParam1->f_1 = 2925000f;
			uParam1->f_2 = 950000;
			uParam1->f_3 = 2925000;
			uParam1->f_5 = -644339642;
			uParam1->f_4 = 1;
			break;
		
		case 1498:
			*uParam1 = 2500000f;
			uParam1->f_1 = 7725000f;
			uParam1->f_2 = 2500000;
			uParam1->f_3 = 7725000;
			uParam1->f_5 = -1809229921;
			uParam1->f_4 = 1;
			break;
		
		case 1499:
			*uParam1 = 95000f;
			uParam1->f_1 = 293000f;
			uParam1->f_2 = 95000;
			uParam1->f_3 = 293000;
			uParam1->f_5 = 1992732606;
			uParam1->f_4 = 1;
			break;
		
		case 1500:
			*uParam1 = 400000f;
			uParam1->f_1 = 1268000f;
			uParam1->f_2 = 400000;
			uParam1->f_3 = 1268000;
			uParam1->f_5 = 956103291;
			uParam1->f_4 = 1;
			break;
		
		case 1501:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1213298425;
			uParam1->f_4 = 1;
			break;
		
		case 1502:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -1701382164;
			uParam1->f_4 = 1;
			break;
		
		case 1503:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -2116304043;
			uParam1->f_4 = 1;
			break;
		
		case 1504:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1525818559;
			uParam1->f_4 = 1;
			break;
		
		case 1505:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 473787773;
			uParam1->f_4 = 1;
			break;
		
		case 1506:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -2079394194;
			uParam1->f_4 = 1;
			break;
		
		case 1507:
			*uParam1 = 25000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1995714857;
			uParam1->f_4 = 1;
			break;
		
		case 1508:
			*uParam1 = 5800f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 5800;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -273899566;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1509:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -622253716;
			uParam1->f_4 = 1;
			break;
		
		case 1510:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1627691056;
			uParam1->f_4 = 1;
			break;
		
		case 1511:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 399246382;
			uParam1->f_4 = 1;
			break;
		
		case 1512:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = -1793368988;
			uParam1->f_4 = 1;
			break;
		
		case 1513:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1364365401;
			uParam1->f_4 = 1;
			break;
		
		case 1514:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 2044461341;
			uParam1->f_4 = 1;
			break;
		
		case 1515:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -1731591700;
			uParam1->f_4 = 1;
			break;
		
		case 1516:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 511542655;
			uParam1->f_4 = 1;
			break;
		
		case 1517:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1937886234;
			uParam1->f_4 = 1;
			break;
		
		case 1518:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -770984932;
			uParam1->f_4 = 1;
			break;
		
		case 1519:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1730028949;
			uParam1->f_4 = 1;
			break;
		
		case 1520:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1594317759;
			uParam1->f_4 = 1;
			break;
		
		case 1521:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1746078541;
			uParam1->f_4 = 1;
			break;
		
		case 1522:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 420790512;
			uParam1->f_4 = 1;
			break;
		
		case 1523:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 67637077;
			uParam1->f_4 = 1;
			break;
		
		case 1524:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1081069775;
			uParam1->f_4 = 1;
			break;
		
		case 1525:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1477118872;
			uParam1->f_4 = 1;
			break;
		
		case 1526:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 396035835;
			uParam1->f_4 = 1;
			break;
		
		case 1527:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -535591151;
			uParam1->f_4 = 1;
			break;
		
		case 1528:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -277350803;
			uParam1->f_4 = 1;
			break;
		
		case 1529:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1866753085;
			uParam1->f_4 = 1;
			break;
		
		case 1530:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -279851098;
			uParam1->f_4 = 1;
			break;
		
		case 1531:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 1701979727;
			uParam1->f_4 = 1;
			break;
		
		case 1532:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -1894272120;
			uParam1->f_4 = 1;
			break;
		
		case 1533:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 325995035;
			uParam1->f_4 = 1;
			break;
		
		case 1534:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1834923172;
			uParam1->f_4 = 1;
			break;
		
		case 1535:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1226561546;
			uParam1->f_4 = 1;
			break;
		
		case 1536:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -821205110;
			uParam1->f_4 = 1;
			break;
		
		case 1537:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -132197608;
			uParam1->f_4 = 1;
			break;
		
		case 1538:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 37000;
			uParam1->f_5 = 415703263;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1539:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 33000;
			uParam1->f_5 = 1385217028;
			uParam1->f_4 = 1;
			break;
		
		case 1540:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = 642554522;
			uParam1->f_4 = 1;
			break;
		
		case 1541:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1723307126;
			uParam1->f_4 = 1;
			break;
		
		case 1542:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1571556859;
			uParam1->f_4 = 1;
			break;
		
		case 1543:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1697982160;
			uParam1->f_4 = 1;
			break;
		
		case 1544:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2950;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 491458810;
			uParam1->f_4 = 1;
			break;
		
		case 1545:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 1636412319;
			uParam1->f_4 = 1;
			break;
		
		case 1546:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 876551036;
			uParam1->f_4 = 1;
			break;
		
		case 1547:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 2091744836;
			uParam1->f_4 = 1;
			break;
		
		case 1548:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = -1105659840;
			uParam1->f_4 = 1;
			break;
		
		case 1549:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 1649856226;
			uParam1->f_4 = 1;
			break;
		
		case 1550:
			*uParam1 = 8150f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8150;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1340584067;
			uParam1->f_4 = 1;
			break;
		
		case 1551:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 29001067;
			uParam1->f_4 = 1;
			break;
		
		case 1552:
			*uParam1 = 3150f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3150;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1638852953;
			uParam1->f_4 = 1;
			break;
		
		case 1553:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1611179743;
			uParam1->f_4 = 1;
			break;
		
		case 1554:
			*uParam1 = 3100f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3100;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 18325263;
			uParam1->f_4 = 1;
			break;
		
		case 1555:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -837168973;
			uParam1->f_4 = 1;
			break;
		
		case 1556:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 1053240799;
			uParam1->f_4 = 1;
			break;
		
		case 1557:
			*uParam1 = 2600f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2600;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 223375334;
			uParam1->f_4 = 1;
			break;
		
		case 1558:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = -1655754048;
			uParam1->f_4 = 1;
			break;
		
		case 1559:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -836299130;
			uParam1->f_4 = 1;
			break;
		
		case 1560:
			*uParam1 = 2750f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2750;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 782279512;
			uParam1->f_4 = 1;
			break;
		
		case 1561:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1369424797;
			uParam1->f_4 = 1;
			break;
		
		case 1562:
			*uParam1 = 3250f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3250;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 1041382958;
			uParam1->f_4 = 1;
			break;
		
		case 1563:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -1748895312;
			uParam1->f_4 = 1;
			break;
		
		case 1564:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 190102475;
			uParam1->f_4 = 1;
			break;
		
		case 1565:
			*uParam1 = 3200f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 1102060585;
			uParam1->f_4 = 1;
			break;
		
		case 1566:
			*uParam1 = 3200f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3200;
			uParam1->f_3 = 19000;
			uParam1->f_5 = -1936071814;
			uParam1->f_4 = 1;
			break;
		
		case 1567:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 1083353164;
			uParam1->f_4 = 1;
			break;
		
		case 1568:
			*uParam1 = 3300f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 3300;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -417660330;
			uParam1->f_4 = 1;
			break;
		
		case 1569:
			*uParam1 = 2500f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 1932743496;
			uParam1->f_4 = 1;
			break;
		
		case 1570:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -72691188;
			uParam1->f_4 = 1;
			break;
		
		case 1571:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -602293245;
			uParam1->f_4 = 1;
			break;
		
		case 1572:
			*uParam1 = 2850f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 1398134415;
			uParam1->f_4 = 1;
			break;
		
		case 1573:
			*uParam1 = 2700f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 16000;
			uParam1->f_5 = 413711434;
			uParam1->f_4 = 1;
			break;
		
		case 1574:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 803677525;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1575:
			*uParam1 = 2650f;
			uParam1->f_1 = 16000f;
			uParam1->f_2 = 2650;
			uParam1->f_3 = 16000;
			uParam1->f_5 = -620078051;
			uParam1->f_4 = 1;
			break;
		
		case 1576:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -628103623;
			uParam1->f_4 = 1;
			break;
		
		case 1577:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -66304196;
			uParam1->f_4 = 1;
			break;
		
		case 1578:
			*uParam1 = 3000f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 800556459;
			uParam1->f_4 = 1;
			break;
		
		case 1579:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = -824264527;
			uParam1->f_4 = 1;
			break;
		
		case 1580:
			*uParam1 = 6000f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 6000;
			uParam1->f_3 = 37000;
			uParam1->f_5 = 755031110;
			uParam1->f_4 = 1;
			break;
		
		case 1581:
			*uParam1 = 5400f;
			uParam1->f_1 = 33000f;
			uParam1->f_2 = 5400;
			uParam1->f_3 = 33000;
			uParam1->f_5 = -1068587067;
			uParam1->f_4 = 1;
			break;
		
		case 1582:
			*uParam1 = 5700f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 35000;
			uParam1->f_5 = 1875074953;
			uParam1->f_4 = 1;
			break;
		
		case 1583:
			*uParam1 = 2700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 99755424;
			uParam1->f_4 = 1;
			break;
		
		case 1584:
			*uParam1 = 2850f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2850;
			uParam1->f_3 = 17000;
			uParam1->f_5 = -476349454;
			uParam1->f_4 = 1;
			break;
		
		case 1585:
			*uParam1 = 2800f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 2800;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1115705246;
			uParam1->f_4 = 1;
			break;
		
		case 1586:
			*uParam1 = 2950f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2950;
			uParam1->f_3 = 18000;
			uParam1->f_5 = -8245662;
			uParam1->f_4 = 1;
			break;
		
		case 1587:
			*uParam1 = 2900f;
			uParam1->f_1 = 18000f;
			uParam1->f_2 = 2900;
			uParam1->f_3 = 18000;
			uParam1->f_5 = 1380386970;
			uParam1->f_4 = 1;
			break;
		
		case 1588:
			*uParam1 = 3050f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 3050;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 1063931600;
			uParam1->f_4 = 1;
			break;
		
		case 1589:
			*uParam1 = 8000f;
			uParam1->f_1 = 49000f;
			uParam1->f_2 = 8000;
			uParam1->f_3 = 49000;
			uParam1->f_5 = 467758279;
			uParam1->f_4 = 1;
			break;
		
		case 1590:
			*uParam1 = 9800f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 9800;
			uParam1->f_3 = 60000;
			uParam1->f_5 = -1319543371;
			uParam1->f_4 = 1;
			break;
		
		case 1591:
			*uParam1 = 6950f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 6950;
			uParam1->f_3 = 43000;
			uParam1->f_5 = -215858403;
			uParam1->f_4 = 1;
			break;
		
		case 1592:
			*uParam1 = 5950f;
			uParam1->f_1 = 37000f;
			uParam1->f_2 = 5950;
			uParam1->f_3 = 37000;
			uParam1->f_5 = -1081958808;
			uParam1->f_4 = 1;
			break;
		
		case 1593:
			*uParam1 = 7750f;
			uParam1->f_1 = 47000f;
			uParam1->f_2 = 7750;
			uParam1->f_3 = 47000;
			uParam1->f_5 = -1413988397;
			uParam1->f_4 = 1;
			break;
		
		case 1594:
			*uParam1 = 8250f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 8250;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1656371392;
			uParam1->f_4 = 1;
			break;
		
		case 1595:
			*uParam1 = 9500f;
			uParam1->f_1 = 58000f;
			uParam1->f_2 = 9500;
			uParam1->f_3 = 58000;
			uParam1->f_5 = -272486755;
			uParam1->f_4 = 1;
			break;
		
		case 1596:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1242936773;
			uParam1->f_4 = 1;
			break;
		
		case 1597:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -330255991;
			uParam1->f_4 = 1;
			break;
		
		case 1598:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1403743541;
			uParam1->f_4 = 1;
			break;
		
		case 1599:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -853299791;
			uParam1->f_4 = 1;
			break;
		
		case 1600:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -342699350;
			uParam1->f_4 = 1;
			break;
		
		case 1601:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 546969328;
			uParam1->f_4 = 1;
			break;
		
		case 1602:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1436767744;
			uParam1->f_4 = 1;
			break;
		
		case 1603:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1142176347;
			uParam1->f_4 = 1;
			break;
		
		case 1604:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1989937423;
			uParam1->f_4 = 1;
			break;
		
		case 1605:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -367171541;
			uParam1->f_4 = 1;
			break;
		
		case 1606:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1489565880;
			uParam1->f_4 = 1;
			break;
		
		case 1607:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 99570882;
			uParam1->f_4 = 1;
			break;
		
		case 1608:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -2115936932;
			uParam1->f_4 = 1;
			break;
		
		case 1609:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1967937907;
			uParam1->f_4 = 1;
			break;
		
		case 1610:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -1870797418;
			uParam1->f_4 = 1;
			break;
		
		case 1611:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -588103474;
			uParam1->f_4 = 1;
			break;
		
		case 1612:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 825754880;
			uParam1->f_4 = 1;
			break;
		
		case 1613:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -591343606;
			uParam1->f_4 = 1;
			break;
		
		case 1614:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 761909348;
			uParam1->f_4 = 1;
			break;
		
		case 1615:
			*uParam1 = 0.5f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 688997908;
			uParam1->f_4 = 1;
			break;
		
		case 1616:
			*uParam1 = 350000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 350000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1778850088;
			uParam1->f_4 = 1;
			break;
		
		case 1617:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 340000;
			uParam1->f_5 = 145064713;
			uParam1->f_4 = 1;
			break;
		
		case 1618:
			*uParam1 = 340000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 340000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 215838966;
			uParam1->f_4 = 1;
			break;
		
		case 1619:
			*uParam1 = 1000000f;
			uParam1->f_1 = 3300000f;
			uParam1->f_2 = 1000000;
			uParam1->f_3 = 3300000;
			uParam1->f_5 = 1145833376;
			uParam1->f_4 = 1;
			break;
		
		case 1620:
			*uParam1 = 850000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 850000;
			uParam1->f_3 = 2625000;
			uParam1->f_5 = -486041956;
			uParam1->f_4 = 1;
			break;
		
		case 1621:
			*uParam1 = 300000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = joaat("LUXE2_DINKA_VINDICATOR");
			uParam1->f_4 = 1;
			break;
		
		case 1622:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = -1328179168;
			uParam1->f_4 = 1;
			break;
		
		case 1623:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = 1612971844;
			uParam1->f_4 = 1;
			break;
		
		case 1624:
			*uParam1 = 15000f;
			uParam1->f_1 = 70000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 70000;
			uParam1->f_5 = -2042311803;
			uParam1->f_4 = 1;
			break;
		
		case 1625:
			*uParam1 = 3000f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 881393295;
			uParam1->f_4 = 1;
			break;
		
		case 1626:
			*uParam1 = 2000f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1236341588;
			uParam1->f_4 = 1;
			break;
		
		case 1627:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -173149373;
			uParam1->f_4 = 1;
			break;
		
		case 1628:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 1449657666;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1629:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 1038396324;
			uParam1->f_4 = 1;
			break;
		
		case 1630:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 1750327899;
			uParam1->f_4 = 1;
			break;
		
		case 1631:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -1059335443;
			uParam1->f_4 = 1;
			break;
		
		case 1632:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = 763836153;
			uParam1->f_4 = 1;
			break;
		
		case 1633:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -537772567;
			uParam1->f_4 = 1;
			break;
		
		case 1634:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -1976352020;
			uParam1->f_4 = 1;
			break;
		
		case 1635:
			*uParam1 = 2500f;
			uParam1->f_1 = 21000f;
			uParam1->f_2 = 2500;
			uParam1->f_3 = 21000;
			uParam1->f_5 = -1568393457;
			uParam1->f_4 = 1;
			break;
		
		case 1636:
			*uParam1 = 5450f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5450;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 1537969659;
			uParam1->f_4 = 1;
			break;
		
		case 1637:
			*uParam1 = 5050f;
			uParam1->f_1 = 15000f;
			uParam1->f_2 = 5050;
			uParam1->f_3 = 15000;
			uParam1->f_5 = 2052881604;
			uParam1->f_4 = 1;
			break;
		
		case 1638:
			*uParam1 = 7250f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7250;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 1657765060;
			uParam1->f_4 = 1;
			break;
		
		case 1639:
			*uParam1 = 6550f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 6550;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 118699681;
			uParam1->f_4 = 1;
			break;
		
		case 1640:
			*uParam1 = 13100f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 13100;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -93488432;
			uParam1->f_4 = 1;
			break;
		
		case 1641:
			*uParam1 = 9200f;
			uParam1->f_1 = 28000f;
			uParam1->f_2 = 9200;
			uParam1->f_3 = 28000;
			uParam1->f_5 = -111901410;
			uParam1->f_4 = 1;
			break;
		
		case 1642:
			*uParam1 = 10650f;
			uParam1->f_1 = 32000f;
			uParam1->f_2 = 10650;
			uParam1->f_3 = 32000;
			uParam1->f_5 = -776037061;
			uParam1->f_4 = 1;
			break;
		
		case 1643:
			*uParam1 = 11600f;
			uParam1->f_1 = 35000f;
			uParam1->f_2 = 11600;
			uParam1->f_3 = 35000;
			uParam1->f_5 = 1850662394;
			uParam1->f_4 = 1;
			break;
		
		case 1644:
			*uParam1 = 14100f;
			uParam1->f_1 = 43000f;
			uParam1->f_2 = 14100;
			uParam1->f_3 = 43000;
			uParam1->f_5 = 249366521;
			uParam1->f_4 = 1;
			break;
		
		case 1645:
			*uParam1 = 7700f;
			uParam1->f_1 = 23000f;
			uParam1->f_2 = 7700;
			uParam1->f_3 = 23000;
			uParam1->f_5 = -1861456710;
			uParam1->f_4 = 1;
			break;
		
		case 1646:
			*uParam1 = 5700f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5700;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 721710253;
			uParam1->f_4 = 1;
			break;
		
		case 1647:
			*uParam1 = 7300f;
			uParam1->f_1 = 22000f;
			uParam1->f_2 = 7300;
			uParam1->f_3 = 22000;
			uParam1->f_5 = 648351172;
			uParam1->f_4 = 1;
			break;
		
		case 1648:
			*uParam1 = 6300f;
			uParam1->f_1 = 19000f;
			uParam1->f_2 = 6300;
			uParam1->f_3 = 19000;
			uParam1->f_5 = 811933701;
			uParam1->f_4 = 1;
			break;
		
		case 1649:
			*uParam1 = 5600f;
			uParam1->f_1 = 17000f;
			uParam1->f_2 = 5600;
			uParam1->f_3 = 17000;
			uParam1->f_5 = 600606008;
			uParam1->f_4 = 1;
			break;
		
		case 1650:
			*uParam1 = 14850f;
			uParam1->f_1 = 45000f;
			uParam1->f_2 = 14850;
			uParam1->f_3 = 45000;
			uParam1->f_5 = 444644043;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1651:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -1796142600;
			uParam1->f_4 = 1;
			break;
		
		case 1652:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = -2083994968;
			uParam1->f_4 = 1;
			break;
		
		case 1653:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1180975104;
			uParam1->f_4 = 1;
			break;
		
		case 1654:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1214377042;
			uParam1->f_4 = 1;
			break;
		
		case 1655:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1188197228;
			uParam1->f_4 = 1;
			break;
		
		case 1656:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1626249723;
			uParam1->f_4 = 1;
			break;
		
		case 1657:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -839874448;
			uParam1->f_4 = 1;
			break;
		
		case 1658:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1519843898;
			uParam1->f_4 = 1;
			break;
		
		case 1659:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -598150985;
			uParam1->f_4 = 1;
			break;
		
		case 1660:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1720731272;
			uParam1->f_4 = 1;
			break;
		
		case 1661:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 50604843;
			uParam1->f_4 = 1;
			break;
		
		case 1662:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -439842609;
			uParam1->f_4 = 1;
			break;
		
		case 1663:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1194098350;
			uParam1->f_4 = 1;
			break;
		
		case 1664:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 637649026;
			uParam1->f_4 = 1;
			break;
		
		case 1665:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1487989945;
			uParam1->f_4 = 1;
			break;
		
		case 1666:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 551445108;
			uParam1->f_4 = 1;
			break;
		
		case 1667:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1407964436;
			uParam1->f_4 = 1;
			break;
		
		case 1668:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -151795864;
			uParam1->f_4 = 1;
			break;
		
		case 1669:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1936047123;
			uParam1->f_4 = 1;
			break;
		
		case 1670:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1945014605;
			uParam1->f_4 = 1;
			break;
		
		case 1671:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -524766832;
			uParam1->f_4 = 1;
			break;
		
		case 1992:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 1757338906;
			uParam1->f_4 = 1;
			break;
		
		case 1993:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 495363390;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1672:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1929693776;
			uParam1->f_4 = 1;
			break;
		
		case 1673:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 890993601;
			uParam1->f_4 = 1;
			break;
		
		case 1674:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1711057271;
			uParam1->f_4 = 1;
			break;
		
		case 1675:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -308103488;
			uParam1->f_4 = 1;
			break;
		
		case 1676:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -859948801;
			uParam1->f_4 = 1;
			break;
		
		case 1677:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -675019553;
			uParam1->f_4 = 1;
			break;
		
		case 1678:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 143457223;
			uParam1->f_4 = 1;
			break;
		
		case 1679:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 955337218;
			uParam1->f_4 = 1;
			break;
		
		case 1680:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1584234058;
			uParam1->f_4 = 1;
			break;
		
		case 1681:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 886307808;
			uParam1->f_4 = 1;
			break;
		
		case 1682:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1141546862;
			uParam1->f_4 = 1;
			break;
		
		case 1683:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 889332592;
			uParam1->f_4 = 1;
			break;
		
		case 1684:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -655241405;
			uParam1->f_4 = 1;
			break;
		
		case 1685:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 1192321747;
			uParam1->f_4 = 1;
			break;
		
		case 1686:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 480261308;
			uParam1->f_4 = 1;
			break;
		
		case 1687:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1724047327;
			uParam1->f_4 = 1;
			break;
		
		case 1688:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -2099792811;
			uParam1->f_4 = 1;
			break;
		
		case 1689:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1961248601;
			uParam1->f_4 = 1;
			break;
		
		case 1690:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -394742090;
			uParam1->f_4 = 1;
			break;
		
		case 1691:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -973670437;
			uParam1->f_4 = 1;
			break;
		
		case 1692:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 545710573;
			uParam1->f_4 = 1;
			break;
		
		case 1693:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1719514608;
			uParam1->f_4 = 1;
			break;
		
		case 1694:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1277989416;
			uParam1->f_4 = 1;
			break;
		
		case 1695:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 213080347;
			uParam1->f_4 = 1;
			break;
		
		case 1696:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -490956780;
			uParam1->f_4 = 1;
			break;
		
		case 1697:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1186946699;
			uParam1->f_4 = 1;
			break;
		
		case 1698:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1278555348;
			uParam1->f_4 = 1;
			break;
		
		case 1699:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1131328367;
			uParam1->f_4 = 1;
			break;
		
		case 1700:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -2040003478;
			uParam1->f_4 = 1;
			break;
		
		case 1701:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -1653484993;
			uParam1->f_4 = 1;
			break;
		
		case 1933:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 320217226;
			uParam1->f_4 = 1;
			break;
		
		case 1934:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1158399726;
			uParam1->f_4 = 1;
			break;
		
		case 1935:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1216770442;
			uParam1->f_4 = 1;
			break;
		
		case 1936:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = -922363854;
			uParam1->f_4 = 1;
			break;
		
		case 1937:
			*uParam1 = 100f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1967099974;
			uParam1->f_4 = 1;
			break;
		
		case 1938:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 260082416;
			uParam1->f_4 = 1;
			break;
		
		case 1939:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -27625201;
			uParam1->f_4 = 1;
			break;
		
		case 1940:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1998734607;
			uParam1->f_4 = 1;
			break;
		
		case 1941:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -925005551;
			uParam1->f_4 = 1;
			break;
		
		case 1942:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -1399622480;
			uParam1->f_4 = 1;
			break;
		
		case 1943:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -1682569610;
			uParam1->f_4 = 1;
			break;
		
		case 1944:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 495241932;
			uParam1->f_4 = 1;
			break;
		
		case 1945:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -765305944;
			uParam1->f_4 = 1;
			break;
		
		case 1946:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1884840135;
			uParam1->f_4 = 1;
			break;
		
		case 1947:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -132120248;
			uParam1->f_4 = 1;
			break;
		
		case 1948:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -1843934621;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1702:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1727296174;
			uParam1->f_4 = 1;
			break;
		
		case 1703:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1048469778;
			uParam1->f_4 = 1;
			break;
		
		case 1704:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = 322846059;
			uParam1->f_4 = 1;
			break;
		
		case 1705:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1911436297;
			uParam1->f_4 = 1;
			break;
		
		case 1706:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1580158853;
			uParam1->f_4 = 1;
			break;
		
		case 1707:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 1121013465;
			uParam1->f_4 = 1;
			break;
		
		case 1708:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1388995326;
			uParam1->f_4 = 1;
			break;
		
		case 1709:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = -65551831;
			uParam1->f_4 = 1;
			break;
		
		case 1710:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = -295033138;
			uParam1->f_4 = 1;
			break;
		
		case 1711:
			*uParam1 = 1f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 30;
			uParam1->f_5 = -489943150;
			uParam1->f_4 = 1;
			break;
		
		case 1712:
			*uParam1 = 1f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1390734977;
			uParam1->f_4 = 1;
			break;
		
		case 1713:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = 211099614;
			uParam1->f_4 = 1;
			break;
		
		case 1714:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -578889034;
			uParam1->f_4 = 1;
			break;
		
		case 1715:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -1186161278;
			uParam1->f_4 = 1;
			break;
		
		case 1716:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -334499479;
			uParam1->f_4 = 1;
			break;
		
		case 1717:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 880085553;
			uParam1->f_4 = 1;
			break;
		
		case 1718:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1722324857;
			uParam1->f_4 = 1;
			break;
		
		case 1719:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1948960799;
			uParam1->f_4 = 1;
			break;
		
		case 1720:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -263258563;
			uParam1->f_4 = 1;
			break;
		
		case 1721:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -1917431628;
			uParam1->f_4 = 1;
			break;
		
		case 1722:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = 1897633070;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1723:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 557283307;
			uParam1->f_4 = 1;
			break;
		
		case 1724:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -60314277;
			uParam1->f_4 = 1;
			break;
		
		case 1725:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1310549886;
			uParam1->f_4 = 1;
			break;
		
		case 1726:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 2086896008;
			uParam1->f_4 = 1;
			break;
		
		case 1727:
			*uParam1 = 0f;
			uParam1->f_1 = 300000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 300000;
			uParam1->f_5 = -26109514;
			uParam1->f_4 = 1;
			break;
		
		case 1728:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1290137458;
			uParam1->f_4 = 1;
			break;
		
		case 1729:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1382916859;
			uParam1->f_4 = 1;
			break;
		
		case 1730:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1218910284;
			uParam1->f_4 = 1;
			break;
		
		case 1731:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -525178140;
			uParam1->f_4 = 1;
			break;
		
		case 1732:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1628079583;
			uParam1->f_4 = 1;
			break;
		
		case 1733:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = 1916279352;
			uParam1->f_4 = 1;
			break;
		
		case 1734:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -1289675913;
			uParam1->f_4 = 1;
			break;
		
		case 1735:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1128513602;
			uParam1->f_4 = 1;
			break;
		
		case 1736:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 28832192;
			uParam1->f_4 = 1;
			break;
		
		case 1737:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1492550833;
			uParam1->f_4 = 1;
			break;
		
		case 1738:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1268568013;
			uParam1->f_4 = 1;
			break;
		
		case 1739:
			*uParam1 = 0f;
			uParam1->f_1 = 1800000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1800000;
			uParam1->f_5 = -8124520;
			uParam1->f_4 = 1;
			break;
		
		case 1740:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = 561455601;
			uParam1->f_4 = 1;
			break;
		
		case 1741:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = 621349432;
			uParam1->f_4 = 1;
			break;
		
		case 1742:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -989671040;
			uParam1->f_4 = 1;
			break;
		
		case 1743:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 554717096;
			uParam1->f_4 = 1;
			break;
		
		case 1744:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1575349005;
			uParam1->f_4 = 1;
			break;
		
		case 1745:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -665347075;
			uParam1->f_4 = 1;
			break;
		
		case 1746:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -887233685;
			uParam1->f_4 = 1;
			break;
		
		case 1747:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1917136479;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1748:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = 200947888;
			uParam1->f_4 = 1;
			break;
		
		case 1749:
			*uParam1 = 0f;
			uParam1->f_1 = 600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 600000;
			uParam1->f_5 = -443330993;
			uParam1->f_4 = 1;
			break;
		
		case 1750:
			*uParam1 = 2f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1912384101;
			uParam1->f_4 = 1;
			break;
		
		case 1751:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1105000653;
			uParam1->f_4 = 1;
			break;
		
		case 1752:
			*uParam1 = 100f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 100;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -535325223;
			uParam1->f_4 = 1;
			break;
		
		case 1753:
			*uParam1 = 1f;
			uParam1->f_1 = 1.15f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1757252586;
			uParam1->f_4 = 1;
			break;
		
		case 1754:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = -593534965;
			uParam1->f_4 = 1;
			break;
		
		case 1755:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = 438768970;
			uParam1->f_4 = 1;
			break;
		
		case 1756:
			*uParam1 = 3f;
			uParam1->f_1 = 15f;
			uParam1->f_2 = 3;
			uParam1->f_3 = 15;
			uParam1->f_5 = -70115571;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1757:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 49022266;
			uParam1->f_4 = 1;
			break;
		
		case 1758:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -1371345779;
			uParam1->f_4 = 1;
			break;
		
		case 1759:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1839842279;
			uParam1->f_4 = 1;
			break;
		
		case 1760:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 2002824917;
			uParam1->f_4 = 1;
			break;
		
		case 1761:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -794980589;
			uParam1->f_4 = 1;
			break;
		
		case 1762:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("HOT_TARGET_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1763:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 112600253;
			uParam1->f_4 = 1;
			break;
		
		case 1764:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 847156826;
			uParam1->f_4 = 1;
			break;
		
		case 1765:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -371181851;
			uParam1->f_4 = 1;
			break;
		
		case 1766:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -1645516985;
			uParam1->f_4 = 1;
			break;
		
		case 1767:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -70753559;
			uParam1->f_4 = 1;
			break;
		
		case 1768:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 958196479;
			uParam1->f_4 = 1;
			break;
		
		case 1769:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -567297957;
			uParam1->f_4 = 1;
			break;
		
		case 1770:
			*uParam1 = 0f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1149870437;
			uParam1->f_4 = 1;
			break;
		
		case 1771:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 1125084275;
			uParam1->f_4 = 1;
			break;
		
		case 1772:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 174922285;
			uParam1->f_4 = 1;
			break;
		
		case 1773:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 706669832;
			uParam1->f_4 = 1;
			break;
		
		case 1774:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1033159501;
			uParam1->f_4 = 1;
			break;
		
		case 1775:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -906430342;
			uParam1->f_4 = 1;
			break;
		
		case 1776:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1396097979;
			uParam1->f_4 = 1;
			break;
		
		case 1777:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1103964256;
			uParam1->f_4 = 1;
			break;
		
		case 1778:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -527353388;
			uParam1->f_4 = 1;
			break;
		
		case 1779:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1671652413;
			uParam1->f_4 = 1;
			break;
		
		case 1780:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1291271460;
			uParam1->f_4 = 1;
			break;
		
		case 1781:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = -1256504408;
			uParam1->f_4 = 1;
			break;
		
		case 1782:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = 1194826691;
			uParam1->f_4 = 1;
			break;
		
		case 1783:
			*uParam1 = 0f;
			uParam1->f_1 = 3000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000;
			uParam1->f_5 = 163433928;
			uParam1->f_4 = 1;
			break;
		
		case 1784:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = -1929874458;
			uParam1->f_4 = 1;
			break;
		
		case 1785:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = -1121408659;
			uParam1->f_4 = 1;
			break;
		
		case 1786:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 457527056;
			uParam1->f_4 = 1;
			break;
		
		case 1787:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = -958784577;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1788:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -1350123057;
			uParam1->f_4 = 1;
			break;
		
		case 1789:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1468556153;
			uParam1->f_4 = 1;
			break;
		
		case 1790:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("CHECKPOINT_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1791:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 909181821;
			uParam1->f_4 = 1;
			break;
		
		case 1792:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -1271696786;
			uParam1->f_4 = 1;
			break;
		
		case 1793:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -191052162;
			uParam1->f_4 = 1;
			break;
		
		case 1794:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1629828880;
			uParam1->f_4 = 1;
			break;
		
		case 1795:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -550389908;
			uParam1->f_4 = 1;
			break;
		
		case 1796:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -817636381;
			uParam1->f_4 = 1;
			break;
		
		case 1797:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1500983243;
			uParam1->f_4 = 1;
			break;
		
		case 1798:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -1809499441;
			uParam1->f_4 = 1;
			break;
		
		case 1799:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1903299406;
			uParam1->f_4 = 1;
			break;
		
		case 1800:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("HELICOPTER_HOT_TARGET_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1801:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -543373498;
			uParam1->f_4 = 1;
			break;
		
		case 1802:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -138800758;
			uParam1->f_4 = 1;
			break;
		
		case 1803:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -784376595;
			uParam1->f_4 = 1;
			break;
		
		case 1804:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -1029433510;
			uParam1->f_4 = 1;
			break;
		
		case 1805:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 1551148962;
			uParam1->f_4 = 1;
			break;
		
		case 1806:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -624029344;
			uParam1->f_4 = 1;
			break;
		
		case 1807:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -317409811;
			uParam1->f_4 = 1;
			break;
		
		case 1808:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1056823742;
			uParam1->f_4 = 1;
			break;
		
		case 1809:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1353743651;
			uParam1->f_4 = 1;
			break;
		
		case 1810:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1117888762;
			uParam1->f_4 = 1;
			break;
		
		case 1811:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 877134919;
			uParam1->f_4 = 1;
			break;
		
		case 1812:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 916916489;
			uParam1->f_4 = 1;
			break;
		
		case 1813:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1760619932;
			uParam1->f_4 = 1;
			break;
		
		case 1814:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1380696146;
			uParam1->f_4 = 1;
			break;
		
		case 1815:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1356372648;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1816:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 400510769;
			uParam1->f_4 = 1;
			break;
		
		case 1817:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -36074459;
			uParam1->f_4 = 1;
			break;
		
		case 1818:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 66985186;
			uParam1->f_4 = 1;
			break;
		
		case 1819:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 2137376174;
			uParam1->f_4 = 1;
			break;
		
		case 1820:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -552608155;
			uParam1->f_4 = 1;
			break;
		
		case 1821:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -1324158733;
			uParam1->f_4 = 1;
			break;
		
		case 1822:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 1247126551;
			uParam1->f_4 = 1;
			break;
		
		case 1823:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = 1024539497;
			uParam1->f_4 = 1;
			break;
		
		case 1824:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 764734914;
			uParam1->f_4 = 1;
			break;
		
		case 1825:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("DEAD_DROP_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1826:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -848335300;
			uParam1->f_4 = 1;
			break;
		
		case 1827:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 1893448227;
			uParam1->f_4 = 1;
			break;
		
		case 1828:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = 1243877018;
			uParam1->f_4 = 1;
			break;
		
		case 1829:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 461422908;
			uParam1->f_4 = 1;
			break;
		
		case 1830:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -946050157;
			uParam1->f_4 = 1;
			break;
		
		case 1831:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -402223749;
			uParam1->f_4 = 1;
			break;
		
		case 1949:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 646169103;
			uParam1->f_4 = 1;
			break;
		
		case 1950:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = -1433029493;
			uParam1->f_4 = 1;
			break;
		
		case 1951:
			*uParam1 = 2f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 2;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1972582119;
			uParam1->f_4 = 1;
			break;
		
		case 1994:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -813381895;
			uParam1->f_4 = 1;
			break;
		
		case 1995:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 713981593;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1832:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -2099399271;
			uParam1->f_4 = 1;
			break;
		
		case 1833:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1625031529;
			uParam1->f_4 = 1;
			break;
		
		case 1834:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 807391048;
			uParam1->f_4 = 1;
			break;
		
		case 1835:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("CHALLENGE_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1836:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -146856185;
			uParam1->f_4 = 1;
			break;
		
		case 1837:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 293886865;
			uParam1->f_4 = 1;
			break;
		
		case 1838:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 581631454;
			uParam1->f_4 = 1;
			break;
		
		case 1839:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1393028486;
			uParam1->f_4 = 1;
			break;
		
		case 1840:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1278747742;
			uParam1->f_4 = 1;
			break;
		
		case 1841:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -424169619;
			uParam1->f_4 = 1;
			break;
		
		case 1842:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -415366945;
			uParam1->f_4 = 1;
			break;
		
		case 1843:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -219790116;
			uParam1->f_4 = 1;
			break;
		
		case 1844:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -896971152;
			uParam1->f_4 = 1;
			break;
		
		case 1845:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1949103279;
			uParam1->f_4 = 1;
			break;
		
		case 1846:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1157887976;
			uParam1->f_4 = 1;
			break;
		
		case 1847:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1271557296;
			uParam1->f_4 = 1;
			break;
		
		case 1848:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 167772523;
			uParam1->f_4 = 1;
			break;
		
		case 1849:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -581450675;
			uParam1->f_4 = 1;
			break;
		
		case 1850:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1432658223;
			uParam1->f_4 = 1;
			break;
		
		case 1851:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1713062556;
			uParam1->f_4 = 1;
			break;
		
		case 1852:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -695013579;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1853:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 225483868;
			uParam1->f_4 = 1;
			break;
		
		case 1854:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 1853185507;
			uParam1->f_4 = 1;
			break;
		
		case 1855:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1135746193;
			uParam1->f_4 = 1;
			break;
		
		case 1856:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -762430062;
			uParam1->f_4 = 1;
			break;
		
		case 1857:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 962395548;
			uParam1->f_4 = 1;
			break;
		
		case 1858:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 2067457727;
			uParam1->f_4 = 1;
			break;
		
		case 1859:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("HOT_PROPERTY_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1860:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = -7571418;
			uParam1->f_4 = 1;
			break;
		
		case 1861:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 578748666;
			uParam1->f_4 = 1;
			break;
		
		case 1862:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1063006106;
			uParam1->f_4 = 1;
			break;
		
		case 1863:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -553513706;
			uParam1->f_4 = 1;
			break;
		
		case 1864:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -314791541;
			uParam1->f_4 = 1;
			break;
		
		case 1865:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -71612792;
			uParam1->f_4 = 1;
			break;
		
		case 1866:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -79804119;
			uParam1->f_4 = 1;
			break;
		
		case 1867:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = -304493237;
			uParam1->f_4 = 1;
			break;
		
		case 1868:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 489654460;
			uParam1->f_4 = 1;
			break;
		
		case 1869:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -423979231;
			uParam1->f_4 = 1;
			break;
		
		case 1870:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -434735387;
			uParam1->f_4 = 1;
			break;
		
		case 1871:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 286235315;
			uParam1->f_4 = 1;
			break;
		
		case 1872:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 2147162014;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1873:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1832115227;
			uParam1->f_4 = 1;
			break;
		
		case 1874:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -1557405435;
			uParam1->f_4 = 1;
			break;
		
		case 1875:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -2058524347;
			uParam1->f_4 = 1;
			break;
		
		case 1876:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -970674872;
			uParam1->f_4 = 1;
			break;
		
		case 1877:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -462230490;
			uParam1->f_4 = 1;
			break;
		
		case 1878:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -34324859;
			uParam1->f_4 = 1;
			break;
		
		case 1879:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("PASS_THE_PARCEL_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1880:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -2045844833;
			uParam1->f_4 = 1;
			break;
		
		case 1881:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("KING_OF_THE_CASTLE_EOM_DEFAULT_RP_REWARD");
			uParam1->f_4 = 1;
			break;
		
		case 1882:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 360636588;
			uParam1->f_4 = 1;
			break;
		
		case 1883:
			*uParam1 = 0f;
			uParam1->f_1 = 500f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 500;
			uParam1->f_5 = 703165455;
			uParam1->f_4 = 1;
			break;
		
		case 1884:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 484294612;
			uParam1->f_4 = 1;
			break;
		
		case 1885:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 705976897;
			uParam1->f_4 = 1;
			break;
		
		case 1886:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1601225977;
			uParam1->f_4 = 1;
			break;
		
		case 1887:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = 1445334380;
			uParam1->f_4 = 1;
			break;
		
		case 1888:
			*uParam1 = 0f;
			uParam1->f_1 = 2f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2;
			uParam1->f_5 = 1909784936;
			uParam1->f_4 = 1;
			break;
		
		case 1889:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = 1185039747;
			uParam1->f_4 = 1;
			break;
		
		case 1890:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = -1727860393;
			uParam1->f_4 = 1;
			break;
		
		case 1891:
			*uParam1 = 0f;
			uParam1->f_1 = 200f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 200;
			uParam1->f_5 = 453017200;
			uParam1->f_4 = 1;
			break;
		
		case 1892:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -703666841;
			uParam1->f_4 = 1;
			break;
		
		case 1893:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 387221552;
			uParam1->f_4 = 1;
			break;
		
		case 1894:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1966994651;
			uParam1->f_4 = 1;
			break;
		
		case 1895:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 61329934;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1896:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 819896056;
			uParam1->f_4 = 1;
			break;
		
		case 1897:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 2046086243;
			uParam1->f_4 = 1;
			break;
		
		case 1898:
			*uParam1 = 0f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -504543012;
			uParam1->f_4 = 1;
			break;
		
		case 1899:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 1226949810;
			uParam1->f_4 = 1;
			break;
		
		case 1900:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = -139507733;
			uParam1->f_4 = 1;
			break;
		
		case 1901:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = 1584620117;
			uParam1->f_4 = 1;
			break;
		
		case 1902:
			*uParam1 = 0f;
			uParam1->f_1 = 50f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 50;
			uParam1->f_5 = -1639547578;
			uParam1->f_4 = 1;
			break;
		
		case 1903:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1070896653;
			uParam1->f_4 = 1;
			break;
		
		case 1904:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 572414621;
			uParam1->f_4 = 1;
			break;
		
		case 1905:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 763457891;
			uParam1->f_4 = 1;
			break;
		
		case 1906:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 1741317624;
			uParam1->f_4 = 1;
			break;
		
		case 1907:
			*uParam1 = 0f;
			uParam1->f_1 = 30f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30;
			uParam1->f_5 = 292665668;
			uParam1->f_4 = 1;
			break;
		
		case 1908:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -893112419;
			uParam1->f_4 = 1;
			break;
		
		case 1909:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -579185399;
			uParam1->f_4 = 1;
			break;
		
		case 1910:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -298322300;
			uParam1->f_4 = 1;
			break;
		
		case 1911:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -2125980506;
			uParam1->f_4 = 1;
			break;
		
		case 1912:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = -1895122901;
			uParam1->f_4 = 1;
			break;
		
		case 1913:
			*uParam1 = 0f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5;
			uParam1->f_5 = 1186342787;
			uParam1->f_4 = 1;
			break;
		
		case 1914:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = -849702794;
			uParam1->f_4 = 1;
			break;
		
		case 1915:
			*uParam1 = 0f;
			uParam1->f_1 = 2000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2000;
			uParam1->f_5 = joaat("HUNT_THE_BEAST_MINIMUM_PARTICIPATION_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1916:
			*uParam1 = 0f;
			uParam1->f_1 = 10000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10000;
			uParam1->f_5 = 1192171372;
			uParam1->f_4 = 1;
			break;
		
		case 1917:
			*uParam1 = 0f;
			uParam1->f_1 = 60000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60000;
			uParam1->f_5 = 1323155669;
			uParam1->f_4 = 1;
			break;
		
		case 1918:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 1554381493;
			uParam1->f_4 = 1;
			break;
		
		case 1919:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1326045406;
			uParam1->f_4 = 1;
			break;
		
		case 1920:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = 2029199907;
			uParam1->f_4 = 1;
			break;
		
		case 1921:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -476954019;
			uParam1->f_4 = 1;
			break;
		
		case 1922:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -333815755;
			uParam1->f_4 = 1;
			break;
		
		case 1923:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = -408264973;
			uParam1->f_4 = 1;
			break;
		
		case 1924:
			*uParam1 = 0f;
			uParam1->f_1 = 1000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1000;
			uParam1->f_5 = -238750388;
			uParam1->f_4 = 1;
			break;
		
		case 1925:
			*uParam1 = 0f;
			uParam1->f_1 = 20f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 20;
			uParam1->f_5 = -1987740489;
			uParam1->f_4 = 1;
			break;
		
		case 1926:
			*uParam1 = 0f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100;
			uParam1->f_5 = 1419650767;
			uParam1->f_4 = 1;
			break;
		
		case 1988:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600;
			uParam1->f_5 = 1663231217;
			uParam1->f_4 = 1;
			break;
		
		case 1989:
			*uParam1 = 0f;
			uParam1->f_1 = 3600f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600;
			uParam1->f_5 = -1618562503;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1927:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 484538711;
			uParam1->f_4 = 1;
			break;
		
		case 1928:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 1934376194;
			uParam1->f_4 = 1;
			break;
		
		case 1929:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = 1558507414;
			uParam1->f_4 = 1;
			break;
		
		case 1930:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = -1233079339;
			uParam1->f_4 = 1;
			break;
		
		case 1931:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = -1202419739;
			uParam1->f_4 = 1;
			break;
		
		case 1932:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_1 = 3f;
			uParam1->f_5 = -279448462;
			uParam1->f_4 = 1;
			break;
		
		case 1952:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = 1567687456;
			uParam1->f_4 = 1;
			break;
		
		case 1953:
			*uParam1 = 0f;
			uParam1->f_1 = 3600000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3600000;
			uParam1->f_5 = 511788735;
			uParam1->f_4 = 1;
			break;
		
		case 1954:
			*uParam1 = 0f;
			uParam1->f_1 = 60f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 60;
			uParam1->f_5 = 1186198366;
			uParam1->f_4 = 1;
			break;
		
		case 1955:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1720254891;
			uParam1->f_4 = 1;
			break;
		
		case 1956:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CRIMINAL_DAMAGE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1957:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1268775162;
			uParam1->f_4 = 1;
			break;
		
		case 1958:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("HUNT_THE_BEAST_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1959:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1419158012;
			uParam1->f_4 = 1;
			break;
		
		case 1960:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("KILL_LIST_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1961:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1195650876;
			uParam1->f_4 = 1;
			break;
		
		case 1962:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("KILL_LIST_COMPETITIVE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1963:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 874154398;
			uParam1->f_4 = 1;
			break;
		
		case 1964:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("PENNED_IN_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1965:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1389028830;
			uParam1->f_4 = 1;
			break;
		
		case 1966:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CHECKPOINTS_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1967:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1435050690;
			uParam1->f_4 = 1;
			break;
		
		case 1968:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("CHALLENGE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1969:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 1185535624;
			uParam1->f_4 = 1;
			break;
		
		case 1970:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1673351342;
			uParam1->f_4 = 1;
			break;
		
		case 1971:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -882173420;
			uParam1->f_4 = 1;
			break;
		
		case 1972:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("MOVING_TARGET_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1973:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 520648049;
			uParam1->f_4 = 1;
			break;
		
		case 1974:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("HELI_MOVING_TARGET_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1975:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1888029212;
			uParam1->f_4 = 1;
			break;
		
		case 1976:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("HOLD_THE_WHEEL_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1977:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -1979201435;
			uParam1->f_4 = 1;
			break;
		
		case 1978:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("HOT_PROPERTY_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1979:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = 357772325;
			uParam1->f_4 = 1;
			break;
		
		case 1980:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("DEAD_DROP_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1981:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = -233932265;
			uParam1->f_4 = 1;
			break;
		
		case 1982:
			*uParam1 = 0f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3;
			uParam1->f_5 = joaat("KING_OF_THE_CASTLE_EVENT_MULTIPLIER_RP");
			uParam1->f_4 = 1;
			break;
		
		case 1983:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = -876619479;
			uParam1->f_4 = 1;
			break;
		
		case 1984:
			*uParam1 = 0f;
			uParam1->f_1 = 1f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1;
			uParam1->f_5 = 1287440918;
			uParam1->f_4 = 1;
			break;
		
		case 1985:
			*uParam1 = 0f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 30000;
			uParam1->f_5 = -1068097748;
			uParam1->f_4 = 1;
			break;
		
		case 1986:
			*uParam1 = 0f;
			uParam1->f_1 = 5000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000;
			uParam1->f_5 = 885071385;
			uParam1->f_4 = 1;
			break;
		
		case 1987:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = 992776116;
			uParam1->f_4 = 1;
			break;
		
		case 1990:
			*uParam1 = 0f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = 548442192;
			uParam1->f_4 = 1;
			break;
		
		case 1991:
			*uParam1 = 0f;
			uParam1->f_1 = 10f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 10;
			uParam1->f_5 = -1759580058;
			uParam1->f_4 = 1;
			break;
		
		case 1996:
			*uParam1 = 1f;
			uParam1->f_1 = 100f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 100;
			uParam1->f_5 = -1943297345;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 1997:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -173922587;
			uParam1->f_4 = 1;
			break;
		
		case 1998:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 907276681;
			uParam1->f_4 = 1;
			break;
		
		case 1999:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -2137268844;
			uParam1->f_4 = 1;
			break;
		
		case 2000:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 332150836;
			uParam1->f_4 = 1;
			break;
		
		case 2001:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 2138856017;
			uParam1->f_4 = 1;
			break;
		
		case 2002:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1324812423;
			uParam1->f_4 = 1;
			break;
		
		case 2003:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 724415285;
			uParam1->f_4 = 1;
			break;
		
		case 2004:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 43990373;
			uParam1->f_4 = 1;
			break;
		
		case 2005:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -267783003;
			uParam1->f_4 = 1;
			break;
		
		case 2006:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -1753871973;
			uParam1->f_4 = 1;
			break;
		
		case 2007:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -165238417;
			uParam1->f_4 = 1;
			break;
		
		case 2008:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 1766325229;
			uParam1->f_4 = 1;
			break;
		
		case 2009:
			*uParam1 = 2000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 672597852;
			uParam1->f_4 = 1;
			break;
		
		case 2010:
			*uParam1 = 3000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 3000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 555019835;
			uParam1->f_4 = 1;
			break;
		
		case 2011:
			*uParam1 = 100000f;
			uParam1->f_1 = 340000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 340000;
			uParam1->f_5 = 2089809122;
			uParam1->f_4 = 1;
			break;
		
		case 2012:
			*uParam1 = 195000f;
			uParam1->f_1 = 468000f;
			uParam1->f_2 = 195000;
			uParam1->f_3 = 468000;
			uParam1->f_5 = 1784942865;
			uParam1->f_4 = 1;
			break;
		
		case 2013:
			*uParam1 = 92500f;
			uParam1->f_1 = 222000f;
			uParam1->f_2 = 92500;
			uParam1->f_3 = 222000;
			uParam1->f_5 = -16605981;
			uParam1->f_4 = 1;
			break;
		
		case 2014:
			*uParam1 = 167500f;
			uParam1->f_1 = 402000f;
			uParam1->f_2 = 167500;
			uParam1->f_3 = 402000;
			uParam1->f_5 = 1416295068;
			uParam1->f_4 = 1;
			break;
		
		case 2015:
			*uParam1 = 185000f;
			uParam1->f_1 = 444000f;
			uParam1->f_2 = 185000;
			uParam1->f_3 = 444000;
			uParam1->f_5 = -890111734;
			uParam1->f_4 = 1;
			break;
		
		case 2016:
			*uParam1 = 200000f;
			uParam1->f_1 = 480000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 480000;
			uParam1->f_5 = 1098098280;
			uParam1->f_4 = 1;
			break;
		
		case 2017:
			*uParam1 = 210000f;
			uParam1->f_1 = 504000f;
			uParam1->f_2 = 210000;
			uParam1->f_3 = 504000;
			uParam1->f_5 = -725430499;
			uParam1->f_4 = 1;
			break;
		
		case 2018:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 547394594;
			uParam1->f_4 = 1;
			break;
		
		case 2019:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 1826680801;
			uParam1->f_4 = 1;
			break;
		
		case 2020:
			*uParam1 = 7000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 7000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1118450116;
			uParam1->f_4 = 1;
			break;
		
		case 2021:
			*uParam1 = 1500f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 1500;
			uParam1->f_3 = 30000;
			uParam1->f_5 = joaat("PRIMARY_MACHINE_PISTOL");
			uParam1->f_4 = 1;
			break;
		
		case 2022:
			*uParam1 = 2000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = 1072594687;
			uParam1->f_4 = 1;
			break;
		
		case 2023:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -478571293;
			uParam1->f_4 = 1;
			break;
		
		case 2024:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 848801415;
			uParam1->f_4 = 1;
			break;
		
		case 2025:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1300863920;
			uParam1->f_4 = 1;
			break;
		
		case 2026:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -534709815;
			uParam1->f_4 = 1;
			break;
		
		case 2027:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1421023232;
			uParam1->f_4 = 1;
			break;
		
		case 2028:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1602715547;
			uParam1->f_4 = 1;
			break;
		
		case 2029:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -340008193;
			uParam1->f_4 = 1;
			break;
		
		case 2030:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1588734453;
			uParam1->f_4 = 1;
			break;
		
		case 2031:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1614892838;
			uParam1->f_4 = 1;
			break;
		
		case 2032:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1617486606;
			uParam1->f_4 = 1;
			break;
		
		case 2033:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -256649283;
			uParam1->f_4 = 1;
			break;
		
		case 2034:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -256341759;
			uParam1->f_4 = 1;
			break;
		
		case 2035:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -340095595;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2036:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 497433617;
			uParam1->f_4 = 1;
			break;
		
		case 2037:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1296657880;
			uParam1->f_4 = 1;
			break;
		
		case 2038:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1849579795;
			uParam1->f_4 = 1;
			break;
		
		case 2039:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 2114589303;
			uParam1->f_4 = 1;
			break;
		
		case 2040:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -606965109;
			uParam1->f_4 = 1;
			break;
		
		case 2041:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1489214832;
			uParam1->f_4 = 1;
			break;
		
		case 2042:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 286015615;
			uParam1->f_4 = 1;
			break;
		
		case 2043:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -202932451;
			uParam1->f_4 = 1;
			break;
		
		case 2044:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -963220399;
			uParam1->f_4 = 1;
			break;
		
		case 2045:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1330763176;
			uParam1->f_4 = 1;
			break;
		
		case 2046:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1851865533;
			uParam1->f_4 = 1;
			break;
		
		case 2047:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1321035761;
			uParam1->f_4 = 1;
			break;
		
		case 2048:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 621347832;
			uParam1->f_4 = 1;
			break;
		
		case 2049:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -775260672;
			uParam1->f_4 = 1;
			break;
		
		case 2050:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 55277820;
			uParam1->f_4 = 1;
			break;
		
		case 2051:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1246261725;
			uParam1->f_4 = 1;
			break;
		
		case 2052:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 301082109;
			uParam1->f_4 = 1;
			break;
		
		case 2053:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1653556941;
			uParam1->f_4 = 1;
			break;
		
		case 2054:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -257446039;
			uParam1->f_4 = 1;
			break;
		
		case 2055:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1641192032;
			uParam1->f_4 = 1;
			break;
		
		case 2056:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -148487088;
			uParam1->f_4 = 1;
			break;
		
		case 2057:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1197550925;
			uParam1->f_4 = 1;
			break;
		
		case 2058:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1665703549;
			uParam1->f_4 = 1;
			break;
		
		case 2059:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1090593685;
			uParam1->f_4 = 1;
			break;
		
		case 2060:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 2028142545;
			uParam1->f_4 = 1;
			break;
		
		case 2061:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1889431274;
			uParam1->f_4 = 1;
			break;
		
		case 2062:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 931114659;
			uParam1->f_4 = 1;
			break;
		
		case 2063:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1387883820;
			uParam1->f_4 = 1;
			break;
		
		case 2064:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -366147552;
			uParam1->f_4 = 1;
			break;
		
		case 2065:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 191681310;
			uParam1->f_4 = 1;
			break;
		
		case 2066:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1974666408;
			uParam1->f_4 = 1;
			break;
		
		case 2067:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1381329009;
			uParam1->f_4 = 1;
			break;
		
		case 2068:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -1052600052;
			uParam1->f_4 = 1;
			break;
		
		case 2069:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1780143083;
			uParam1->f_4 = 1;
			break;
		
		case 2070:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1101275009;
			uParam1->f_4 = 1;
			break;
		
		case 2071:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = -773558617;
			uParam1->f_4 = 1;
			break;
		
		case 2072:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 1571011756;
			uParam1->f_4 = 1;
			break;
		
		case 2073:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 50829484;
			uParam1->f_4 = 1;
			break;
		
		case 2074:
			*uParam1 = 5000f;
			uParam1->f_1 = 75000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 75000;
			uParam1->f_5 = 398774745;
			uParam1->f_4 = 1;
			break;
		
		case 2075:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 565873505;
			uParam1->f_4 = 1;
			break;
		
		case 2076:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1800793302;
			uParam1->f_4 = 1;
			break;
		
		case 2077:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = 202807229;
			uParam1->f_4 = 1;
			break;
		
		case 2078:
			*uParam1 = 15000f;
			uParam1->f_1 = 150000f;
			uParam1->f_2 = 15000;
			uParam1->f_3 = 150000;
			uParam1->f_5 = -795238204;
			uParam1->f_4 = 1;
			break;
		
		case 2079:
			*uParam1 = 1000f;
			uParam1->f_1 = 20000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 20000;
			uParam1->f_5 = -1337774198;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2080:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1510202222;
			uParam1->f_4 = 1;
			break;
		
		case 2081:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1218770498;
			uParam1->f_4 = 1;
			break;
		
		case 2082:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 798687242;
			uParam1->f_4 = 1;
			break;
		
		case 2083:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1749452099;
			uParam1->f_4 = 1;
			break;
		
		case 2084:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1750226859;
			uParam1->f_4 = 1;
			break;
		
		case 2085:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -794271288;
			uParam1->f_4 = 1;
			break;
		
		case 2086:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -216557143;
			uParam1->f_4 = 1;
			break;
		
		case 2087:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -420844818;
			uParam1->f_4 = 1;
			break;
		
		case 2088:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1553770841;
			uParam1->f_4 = 1;
			break;
		
		case 2089:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -705177366;
			uParam1->f_4 = 1;
			break;
		
		case 2090:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 549151207;
			uParam1->f_4 = 1;
			break;
		
		case 2091:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -728771457;
			uParam1->f_4 = 1;
			break;
		
		case 2092:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1843944390;
			uParam1->f_4 = 1;
			break;
		
		case 2093:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1265223998;
			uParam1->f_4 = 1;
			break;
		
		case 2094:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -375534719;
			uParam1->f_4 = 1;
			break;
		
		case 2095:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 114956437;
			uParam1->f_4 = 1;
			break;
		
		case 2096:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -659896376;
			uParam1->f_4 = 1;
			break;
		
		case 2097:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -899294946;
			uParam1->f_4 = 1;
			break;
		
		case 2098:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 2057613080;
			uParam1->f_4 = 1;
			break;
		
		case 2099:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1224836558;
			uParam1->f_4 = 1;
			break;
		
		case 2100:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1781437997;
			uParam1->f_4 = 1;
			break;
		
		case 2101:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1279962792;
			uParam1->f_4 = 1;
			break;
		
		case 2102:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1928359499;
			uParam1->f_4 = 1;
			break;
		
		case 2103:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 656071312;
			uParam1->f_4 = 1;
			break;
		
		case 2104:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 174262507;
			uParam1->f_4 = 1;
			break;
		
		case 2105:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 386867214;
			uParam1->f_4 = 1;
			break;
		
		case 2106:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -493128385;
			uParam1->f_4 = 1;
			break;
		
		case 2107:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1790886836;
			uParam1->f_4 = 1;
			break;
		
		case 2108:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -34681602;
			uParam1->f_4 = 1;
			break;
		
		case 2109:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 339047683;
			uParam1->f_4 = 1;
			break;
		
		case 2110:
			*uParam1 = 5000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -182233353;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2111:
			*uParam1 = 5000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1195141826;
			uParam1->f_4 = 1;
			break;
		
		case 2112:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -2124076705;
			uParam1->f_4 = 1;
			break;
		
		case 2113:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -1135080970;
			uParam1->f_4 = 1;
			break;
		
		case 2114:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -163516679;
			uParam1->f_4 = 1;
			break;
		
		case 2115:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -1845867885;
			uParam1->f_4 = 1;
			break;
		
		case 2116:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -1617351994;
			uParam1->f_4 = 1;
			break;
		
		case 2117:
			*uParam1 = 1000f;
			uParam1->f_1 = 40000f;
			uParam1->f_2 = 1000;
			uParam1->f_3 = 40000;
			uParam1->f_5 = -2104712890;
			uParam1->f_4 = 1;
			break;
		
		case 2118:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1425310186;
			uParam1->f_4 = 1;
			break;
		
		case 2119:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1804383882;
			uParam1->f_4 = 1;
			break;
		
		case 2120:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1955030355;
			uParam1->f_4 = 1;
			break;
		
		case 2121:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1436099355;
			uParam1->f_4 = 1;
			break;
		
		case 2122:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 930951930;
			uParam1->f_4 = 1;
			break;
		
		case 2123:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1574934541;
			uParam1->f_4 = 1;
			break;
		
		case 2124:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1883243522;
			uParam1->f_4 = 1;
			break;
		
		case 2125:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1673844906;
			uParam1->f_4 = 1;
			break;
		
		case 2126:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 611348408;
			uParam1->f_4 = 1;
			break;
		
		case 2127:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1741768512;
			uParam1->f_4 = 1;
			break;
		
		case 2128:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -308338968;
			uParam1->f_4 = 1;
			break;
		
		case 2129:
			*uParam1 = 5000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1605272146;
			uParam1->f_4 = 1;
			break;
		
		case 2130:
			*uParam1 = 1f;
			uParam1->f_1 = 3f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 3;
			uParam1->f_5 = -518171772;
			uParam1->f_4 = 1;
			break;
		
		case 2131:
			*uParam1 = 1f;
			uParam1->f_1 = 4f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 4;
			uParam1->f_5 = -788216091;
			uParam1->f_4 = 1;
			break;
		
		case 2132:
			*uParam1 = 1f;
			uParam1->f_1 = 6f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 6;
			uParam1->f_5 = -301443607;
			uParam1->f_4 = 1;
			break;
		
		case 2133:
			*uParam1 = 1f;
			uParam1->f_1 = 5f;
			uParam1->f_2 = 1;
			uParam1->f_3 = 5;
			uParam1->f_5 = -20913835;
			uParam1->f_4 = 1;
			break;
		
		case 2213:
			*uParam1 = 5000f;
			uParam1->f_3 = 100000;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -478393512;
			uParam1->f_4 = 1;
			break;
		
		case 2214:
			*uParam1 = 200000f;
			uParam1->f_3 = 2000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -1449462873;
			uParam1->f_4 = 1;
			break;
		
		case 2215:
			*uParam1 = 50000f;
			uParam1->f_3 = 500000;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -1799704196;
			uParam1->f_4 = 1;
			break;
		
		case 2216:
			*uParam1 = 200000f;
			uParam1->f_3 = 2000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -1781440390;
			uParam1->f_4 = 1;
			break;
		
		case 2217:
			*uParam1 = 200000f;
			uParam1->f_3 = 4000000;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 4000000;
			uParam1->f_5 = -1739834394;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2134:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -1500441824;
			uParam1->f_4 = 1;
			break;
		
		case 2135:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -124124851;
			uParam1->f_4 = 1;
			break;
		
		case 2136:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 500606852;
			uParam1->f_4 = 1;
			break;
		
		case 2137:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1580321384;
			uParam1->f_4 = 1;
			break;
		
		case 2138:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = -348526927;
			uParam1->f_4 = 1;
			break;
		
		case 2139:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1795576843;
			uParam1->f_4 = 1;
			break;
		
		case 2140:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 1136731901;
			uParam1->f_4 = 1;
			break;
		
		case 2141:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 331669480;
			uParam1->f_4 = 1;
			break;
		
		case 2142:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO");
			uParam1->f_4 = 1;
			break;
		
		case 2143:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 491770944;
			uParam1->f_4 = 1;
			break;
		
		case 2144:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -868533286;
			uParam1->f_4 = 1;
			break;
		
		case 2145:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 1573736830;
			uParam1->f_4 = 1;
			break;
		
		case 2146:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1484532217;
			uParam1->f_4 = 1;
			break;
		
		case 2147:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 925865262;
			uParam1->f_4 = 1;
			break;
		
		case 2148:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 667281475;
			uParam1->f_4 = 1;
			break;
		
		case 2149:
			*uParam1 = 50000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1636766480;
			uParam1->f_4 = 1;
			break;
		
		case 2150:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO");
			uParam1->f_4 = 1;
			break;
		
		case 2151:
			*uParam1 = 300000f;
			uParam1->f_1 = 7500000f;
			uParam1->f_2 = 300000;
			uParam1->f_3 = 7500000;
			uParam1->f_5 = joaat("APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON");
			uParam1->f_4 = 1;
			break;
		
		case 2152:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -71038278;
			uParam1->f_4 = 1;
			break;
		
		case 2153:
			*uParam1 = 5000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1400761675;
			uParam1->f_4 = 1;
			break;
		
		case 2154:
			*uParam1 = 2000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1375110520;
			uParam1->f_4 = 1;
			break;
		
		case 2155:
			*uParam1 = 100000f;
			uParam1->f_1 = 3E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 30000000;
			uParam1->f_5 = -976367201;
			uParam1->f_4 = 1;
			break;
		
		case 2156:
			*uParam1 = 100000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = 1587047182;
			uParam1->f_4 = 1;
			break;
		
		case 2157:
			*uParam1 = 100000f;
			uParam1->f_1 = 3.5E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 35000000;
			uParam1->f_5 = -1112039416;
			uParam1->f_4 = 1;
			break;
		
		case 2158:
			*uParam1 = 100000f;
			uParam1->f_1 = 5000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 5000000;
			uParam1->f_5 = 1577150952;
			uParam1->f_4 = 1;
			break;
		
		case 2159:
			*uParam1 = 100000f;
			uParam1->f_1 = 4E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 40000000;
			uParam1->f_5 = -1946823177;
			uParam1->f_4 = 1;
			break;
		
		case 2160:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = 1262037594;
			uParam1->f_4 = 1;
			break;
		
		case 2161:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -70960120;
			uParam1->f_4 = 1;
			break;
		
		case 2162:
			*uParam1 = 100000f;
			uParam1->f_1 = 3750000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3750000;
			uParam1->f_5 = 1831571379;
			uParam1->f_4 = 1;
			break;
		
		case 2163:
			*uParam1 = 25000f;
			uParam1->f_1 = 1750000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1750000;
			uParam1->f_5 = 530533026;
			uParam1->f_4 = 1;
			break;
		
		case 2164:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1575000;
			uParam1->f_5 = 1734623841;
			uParam1->f_4 = 1;
			break;
		
		case 2165:
			*uParam1 = 25000f;
			uParam1->f_1 = 1650000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1650000;
			uParam1->f_5 = 1717802375;
			uParam1->f_4 = 1;
			break;
		
		case 2166:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1162246131;
			uParam1->f_4 = 1;
			break;
		
		case 2167:
			*uParam1 = 25000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1402096652;
			uParam1->f_4 = 1;
			break;
		
		case 2168:
			*uParam1 = 25000f;
			uParam1->f_1 = 2625000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2625000;
			uParam1->f_5 = -1669355876;
			uParam1->f_4 = 1;
			break;
		
		case 2169:
			*uParam1 = 25000f;
			uParam1->f_1 = 2750000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2750000;
			uParam1->f_5 = -1667338230;
			uParam1->f_4 = 1;
			break;
		
		case 2170:
			*uParam1 = 25000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = 1360163048;
			uParam1->f_4 = 1;
			break;
		
		case 2171:
			*uParam1 = 25000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -386504470;
			uParam1->f_4 = 1;
			break;
		
		case 2172:
			*uParam1 = 25000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1373873834;
			uParam1->f_4 = 1;
			break;
		
		case 2173:
			*uParam1 = 25000f;
			uParam1->f_1 = 675000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 675000;
			uParam1->f_5 = 1484028079;
			uParam1->f_4 = 1;
			break;
		
		case 2174:
			*uParam1 = 25000f;
			uParam1->f_1 = 2250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2250000;
			uParam1->f_5 = 1376975486;
			uParam1->f_4 = 1;
			break;
		
		case 2175:
			*uParam1 = 25000f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2375000;
			uParam1->f_5 = 229408028;
			uParam1->f_4 = 1;
			break;
		
		case 2176:
			*uParam1 = 25000f;
			uParam1->f_1 = 3175000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3175000;
			uParam1->f_5 = -1083613953;
			uParam1->f_4 = 1;
			break;
		
		case 2177:
			*uParam1 = 25000f;
			uParam1->f_1 = 1575000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1575000;
			uParam1->f_5 = -2118994523;
			uParam1->f_4 = 1;
			break;
		
		case 2178:
			*uParam1 = 25000f;
			uParam1->f_1 = 3100000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3100000;
			uParam1->f_5 = -2030136040;
			uParam1->f_4 = 1;
			break;
		
		case 2179:
			*uParam1 = 25000f;
			uParam1->f_1 = 1825000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1825000;
			uParam1->f_5 = -852462379;
			uParam1->f_4 = 1;
			break;
		
		case 2180:
			*uParam1 = 25000f;
			uParam1->f_1 = 2475000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2475000;
			uParam1->f_5 = 1443511899;
			uParam1->f_4 = 1;
			break;
		
		case 2181:
			*uParam1 = 25000f;
			uParam1->f_1 = 850000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 850000;
			uParam1->f_5 = -1026918136;
			uParam1->f_4 = 1;
			break;
		
		case 2182:
			*uParam1 = 25000f;
			uParam1->f_1 = 1700000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1700000;
			uParam1->f_5 = -1329392565;
			uParam1->f_4 = 1;
			break;
		
		case 2183:
			*uParam1 = 25000f;
			uParam1->f_1 = 2125000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2125000;
			uParam1->f_5 = 1520256615;
			uParam1->f_4 = 1;
			break;
		
		case 2184:
			*uParam1 = 25000f;
			uParam1->f_1 = 1100000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1100000;
			uParam1->f_5 = 1027802695;
			uParam1->f_4 = 1;
			break;
		
		case 2185:
			*uParam1 = 25000f;
			uParam1->f_1 = 975000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 975000;
			uParam1->f_5 = 448700919;
			uParam1->f_4 = 1;
			break;
		
		case 2186:
			*uParam1 = 25000f;
			uParam1->f_1 = 3250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 3250000;
			uParam1->f_5 = 2126507810;
			uParam1->f_4 = 1;
			break;
		
		case 2187:
			*uParam1 = 25000f;
			uParam1->f_1 = 1250000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 1250000;
			uParam1->f_5 = 196821080;
			uParam1->f_4 = 1;
			break;
		
		case 2188:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_1");
			uParam1->f_4 = 1;
			break;
		
		case 2189:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_2");
			uParam1->f_4 = 1;
			break;
		
		case 2190:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSECLIPSE_TOWERS_PENTHOUSE_SUITE_3");
			uParam1->f_4 = 1;
			break;
		
		case 2191:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_3655_WILD_OATS_DRIVE");
			uParam1->f_4 = 1;
			break;
		
		case 2192:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2044_NORTH_CONKER_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2193:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2868_HILLCREST_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2194:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2862_HILLCREST_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2195:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_3677_WHISPYMOUND_DRIVE");
			uParam1->f_4 = 1;
			break;
		
		case 2196:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2117_MILTON_ROAD");
			uParam1->f_4 = 1;
			break;
		
		case 2197:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2866_HILLCREST_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2198:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2874_HILLCREST_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2199:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2113_MAD_WAYNE_THUNDER_DRIVE");
			uParam1->f_4 = 1;
			break;
		
		case 2200:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = joaat("APARTMENT_CAR_MODSSTILT_2045_NORTH_CONKER_AVENUE");
			uParam1->f_4 = 1;
			break;
		
		case 2201:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -660218489;
			uParam1->f_4 = 1;
			break;
		
		case 2202:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 780521842;
			uParam1->f_4 = 1;
			break;
		
		case 2203:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1052138724;
			uParam1->f_4 = 1;
			break;
		
		case 2204:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -258328892;
			uParam1->f_4 = 1;
			break;
		
		case 2205:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -552995245;
			uParam1->f_4 = 1;
			break;
		
		case 2206:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1950302737;
			uParam1->f_4 = 1;
			break;
		
		case 2207:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = -1924310762;
			uParam1->f_4 = 1;
			break;
		
		case 2208:
			*uParam1 = 100000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 1248618798;
			uParam1->f_4 = 1;
			break;
		
		case 2209:
			*uParam1 = 25000f;
			uParam1->f_1 = 2000000f;
			uParam1->f_2 = 25000;
			uParam1->f_3 = 2000000;
			uParam1->f_5 = 472317652;
			uParam1->f_4 = 1;
			break;
		
		case 2210:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 2048560513;
			uParam1->f_4 = 1;
			break;
		
		case 2211:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -2015418102;
			uParam1->f_4 = 1;
			break;
		
		case 2212:
			*uParam1 = 0f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -687749298;
			uParam1->f_4 = 1;
			break;
	}
	switch (iParam0)
	{
		case 2218:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 858646893;
			uParam1->f_4 = 1;
			break;
		
		case 2219:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1141300700;
			uParam1->f_4 = 1;
			break;
		
		case 2220:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1221648951;
			uParam1->f_4 = 1;
			break;
		
		case 2221:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1007917739;
			uParam1->f_4 = 1;
			break;
		
		case 2222:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 979155635;
			uParam1->f_4 = 1;
			break;
		
		case 2223:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 532759465;
			uParam1->f_4 = 1;
			break;
		
		case 2224:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -896121855;
			uParam1->f_4 = 1;
			break;
		
		case 2225:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1007669447;
			uParam1->f_4 = 1;
			break;
		
		case 2226:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 402655953;
			uParam1->f_4 = 1;
			break;
		
		case 2227:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1614852695;
			uParam1->f_4 = 1;
			break;
		
		case 2228:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1653410894;
			uParam1->f_4 = 1;
			break;
		
		case 2229:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1084038466;
			uParam1->f_4 = 1;
			break;
		
		case 2230:
			*uParam1 = 50000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -1431316553;
			uParam1->f_4 = 1;
			break;
		
		case 2231:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -1713083858;
			uParam1->f_4 = 1;
			break;
		
		case 2232:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -129342669;
			uParam1->f_4 = 1;
			break;
		
		case 2233:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -973497615;
			uParam1->f_4 = 1;
			break;
		
		case 2234:
			*uParam1 = 5000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 1023107911;
			uParam1->f_4 = 1;
			break;
		
		case 2235:
			*uParam1 = 170000f;
			uParam1->f_1 = 2500000f;
			uParam1->f_2 = 170000;
			uParam1->f_3 = 2500000;
			uParam1->f_5 = -1000293354;
			uParam1->f_4 = 1;
			break;
		
		case 2236:
			*uParam1 = 80000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 80000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -322801741;
			uParam1->f_4 = 1;
			break;
		
		case 2237:
			*uParam1 = 120000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 120000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1779270360;
			uParam1->f_4 = 1;
			break;
		
		case 2238:
			*uParam1 = 100000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -595438251;
			uParam1->f_4 = 1;
			break;
		
		case 2239:
			*uParam1 = 90000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 90000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1608836980;
			uParam1->f_4 = 1;
			break;
		
		case 2240:
			*uParam1 = 55000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 55000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1800957270;
			uParam1->f_4 = 1;
			break;
		
		case 2241:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 226750252;
			uParam1->f_4 = 1;
			break;
		
		case 2242:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 565896526;
			uParam1->f_4 = 1;
			break;
		
		case 2243:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1891985936;
			uParam1->f_4 = 1;
			break;
		
		case 2244:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 422023516;
			uParam1->f_4 = 1;
			break;
		
		case 2245:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1719817002;
			uParam1->f_4 = 1;
			break;
		
		case 2246:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1112332780;
			uParam1->f_4 = 1;
			break;
		
		case 2247:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1111805910;
			uParam1->f_4 = 1;
			break;
		
		case 2248:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1161309987;
			uParam1->f_4 = 1;
			break;
		
		case 2249:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 564419787;
			uParam1->f_4 = 1;
			break;
		
		case 2250:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1988086665;
			uParam1->f_4 = 1;
			break;
		
		case 2251:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 407270079;
			uParam1->f_4 = 1;
			break;
		
		case 2252:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 227974550;
			uParam1->f_4 = 1;
			break;
		
		case 2253:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 8444166;
			uParam1->f_4 = 1;
			break;
		
		case 2254:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1352855437;
			uParam1->f_4 = 1;
			break;
		
		case 2255:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -1123558353;
			uParam1->f_4 = 1;
			break;
		
		case 2256:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 265222133;
			uParam1->f_4 = 1;
			break;
		
		case 2257:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 431081889;
			uParam1->f_4 = 1;
			break;
		
		case 2258:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = -651139583;
			uParam1->f_4 = 1;
			break;
		
		case 2259:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 489413612;
			uParam1->f_4 = 1;
			break;
		
		case 2260:
			*uParam1 = 10000f;
			uParam1->f_1 = 80000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 80000;
			uParam1->f_5 = 1883688394;
			uParam1->f_4 = 1;
			break;
		
		case 2261:
			*uParam1 = 10000f;
			uParam1->f_1 = 1500000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 1500000;
			uParam1->f_5 = 215000849;
			uParam1->f_4 = 1;
			break;
		
		case 2262:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 1816070514;
			uParam1->f_4 = 1;
			break;
		
		case 2263:
			*uParam1 = 5000f;
			uParam1->f_1 = 30000f;
			uParam1->f_2 = 5000;
			uParam1->f_3 = 30000;
			uParam1->f_5 = 117408879;
			uParam1->f_4 = 1;
			break;
		
		case 2264:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 1309603139;
			uParam1->f_4 = 1;
			break;
		
		case 2265:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -793692562;
			uParam1->f_4 = 1;
			break;
		
		case 2266:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = 168631431;
			uParam1->f_4 = 1;
			break;
		
		case 2267:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -104499381;
			uParam1->f_4 = 1;
			break;
		
		case 2268:
			*uParam1 = 2000f;
			uParam1->f_1 = 50000f;
			uParam1->f_2 = 2000;
			uParam1->f_3 = 50000;
			uParam1->f_5 = -1634707666;
			uParam1->f_4 = 1;
			break;
		
		case 2269:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1018805699;
			uParam1->f_4 = 1;
			break;
		
		case 2270:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1573512647;
			uParam1->f_4 = 1;
			break;
		
		case 2271:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1647104739;
			uParam1->f_4 = 1;
			break;
		
		case 2272:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -1259976497;
			uParam1->f_4 = 1;
			break;
		
		case 2273:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 189438753;
			uParam1->f_4 = 1;
			break;
		
		case 2274:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1910275663;
			uParam1->f_4 = 1;
			break;
		
		case 2275:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = -497136012;
			uParam1->f_4 = 1;
			break;
		
		case 2276:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1670170118;
			uParam1->f_4 = 1;
			break;
		
		case 2277:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 470206542;
			uParam1->f_4 = 1;
			break;
		
		case 2278:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 1125064346;
			uParam1->f_4 = 1;
			break;
		
		case 2279:
			*uParam1 = 10000f;
			uParam1->f_1 = 100000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 100000;
			uParam1->f_5 = 613457149;
			uParam1->f_4 = 1;
			break;
		
		case 2280:
			*uParam1 = 20000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -78329031;
			uParam1->f_4 = 1;
			break;
		
		case 2281:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -1722331110;
			uParam1->f_4 = 1;
			break;
		
		case 2282:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -687625947;
			uParam1->f_4 = 1;
			break;
		
		case 2283:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = -2020967597;
			uParam1->f_4 = 1;
			break;
		
		case 2284:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1382016796;
			uParam1->f_4 = 1;
			break;
		
		case 2285:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1772063132;
			uParam1->f_4 = 1;
			break;
		
		case 2286:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 469998148;
			uParam1->f_4 = 1;
			break;
		
		case 2287:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = -1616988346;
			uParam1->f_4 = 1;
			break;
		
		case 2288:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 620345044;
			uParam1->f_4 = 1;
			break;
		
		case 2289:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1352887220;
			uParam1->f_4 = 1;
			break;
		
		case 2290:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 603859625;
			uParam1->f_4 = 1;
			break;
		
		case 2291:
			*uParam1 = 100000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = -412514399;
			uParam1->f_4 = 1;
			break;
		
		case 2292:
			*uParam1 = 500000f;
			uParam1->f_1 = 1E+07f;
			uParam1->f_2 = 500000;
			uParam1->f_3 = 10000000;
			uParam1->f_5 = joaat("BIKER_WEBSITE_NAGASAKI_SHOTARO");
			uParam1->f_4 = 1;
			break;
		
		case 2293:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -554097411;
			uParam1->f_4 = 1;
			break;
		
		case 2294:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 859016740;
			uParam1->f_4 = 1;
			break;
		
		case 2295:
			*uParam1 = 10000f;
			uParam1->f_1 = 250000f;
			uParam1->f_2 = 10000;
			uParam1->f_3 = 250000;
			uParam1->f_5 = 670403363;
			uParam1->f_4 = 1;
			break;
		
		case 2296:
			*uParam1 = 20000f;
			uParam1->f_1 = 500000f;
			uParam1->f_2 = 20000;
			uParam1->f_3 = 500000;
			uParam1->f_5 = 2134170442;
			uParam1->f_4 = 1;
			break;
		
		case 2297:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1219608517;
			uParam1->f_4 = 1;
			break;
		
		case 2298:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 2033735347;
			uParam1->f_4 = 1;
			break;
		
		case 2299:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 2023136086;
			uParam1->f_4 = 1;
			break;
		
		case 2300:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1390109608;
			uParam1->f_4 = 1;
			break;
		
		case 2301:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 819519215;
			uParam1->f_4 = 1;
			break;
		
		case 2302:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 813618473;
			uParam1->f_4 = 1;
			break;
		
		case 2303:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 471352940;
			uParam1->f_4 = 1;
			break;
		
		case 2304:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1241258301;
			uParam1->f_4 = 1;
			break;
		
		case 2305:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1058611921;
			uParam1->f_4 = 1;
			break;
		
		case 2306:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 1669688233;
			uParam1->f_4 = 1;
			break;
		
		case 2307:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = -1767762009;
			uParam1->f_4 = 1;
			break;
		
		case 2308:
			*uParam1 = 50000f;
			uParam1->f_1 = 1000000f;
			uParam1->f_2 = 50000;
			uParam1->f_3 = 1000000;
			uParam1->f_5 = 217858651;
			uParam1->f_4 = 1;
			break;
		
		case 2309:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1488685993;
			uParam1->f_4 = 1;
			break;
		
		case 2310:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -931206847;
			uParam1->f_4 = 1;
			break;
		
		case 2311:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1713675550;
			uParam1->f_4 = 1;
			break;
		
		case 2312:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -281008956;
			uParam1->f_4 = 1;
			break;
		
		case 2313:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 342242048;
			uParam1->f_4 = 1;
			break;
		
		case 2314:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 2109658967;
			uParam1->f_4 = 1;
			break;
		
		case 2315:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -575946903;
			uParam1->f_4 = 1;
			break;
		
		case 2316:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -348877060;
			uParam1->f_4 = 1;
			break;
		
		case 2317:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1306609736;
			uParam1->f_4 = 1;
			break;
		
		case 2318:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1704466501;
			uParam1->f_4 = 1;
			break;
		
		case 2319:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1259696400;
			uParam1->f_4 = 1;
			break;
		
		case 2320:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1603482977;
			uParam1->f_4 = 1;
			break;
		
		case 2321:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -553590544;
			uParam1->f_4 = 1;
			break;
		
		case 2322:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1497709697;
			uParam1->f_4 = 1;
			break;
		
		case 2323:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1194986364;
			uParam1->f_4 = 1;
			break;
		
		case 2324:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 101220655;
			uParam1->f_4 = 1;
			break;
		
		case 2325:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -892925008;
			uParam1->f_4 = 1;
			break;
		
		case 2326:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1084179903;
			uParam1->f_4 = 1;
			break;
		
		case 2327:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 689755754;
			uParam1->f_4 = 1;
			break;
		
		case 2328:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -910238678;
			uParam1->f_4 = 1;
			break;
		
		case 2329:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -2040295245;
			uParam1->f_4 = 1;
			break;
		
		case 2330:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 211627492;
			uParam1->f_4 = 1;
			break;
		
		case 2331:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -898516364;
			uParam1->f_4 = 1;
			break;
		
		case 2332:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1682607606;
			uParam1->f_4 = 1;
			break;
		
		case 2333:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 290299699;
			uParam1->f_4 = 1;
			break;
		
		case 2334:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -780784305;
			uParam1->f_4 = 1;
			break;
		
		case 2335:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -388968324;
			uParam1->f_4 = 1;
			break;
		
		case 2336:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 414132173;
			uParam1->f_4 = 1;
			break;
		
		case 2337:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -640767349;
			uParam1->f_4 = 1;
			break;
		
		case 2338:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1503149478;
			uParam1->f_4 = 1;
			break;
		
		case 2339:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -2009823399;
			uParam1->f_4 = 1;
			break;
		
		case 2340:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 795028526;
			uParam1->f_4 = 1;
			break;
		
		case 2341:
			*uParam1 = 200000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 200000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 1685493909;
			uParam1->f_4 = 1;
			break;
		
		case 2342:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1557159022;
			uParam1->f_4 = 1;
			break;
		
		case 2343:
			*uParam1 = 100000f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 100000;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = -1233922190;
			uParam1->f_4 = 1;
			break;
		
		case 2345:
			*uParam1 = 0f;
			uParam1->f_1 = 1625000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 1625000;
			uParam1->f_5 = 419800513;
			uParam1->f_4 = 1;
			break;
		
		case 2346:
			*uParam1 = 0f;
			uParam1->f_1 = 2375000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 2375000;
			uParam1->f_5 = -829097151;
			uParam1->f_4 = 1;
			break;
		
		case 2347:
			*uParam1 = 0f;
			uParam1->f_1 = 3000000f;
			uParam1->f_2 = 0;
			uParam1->f_3 = 3000000;
			uParam1->f_5 = 287993374;
			uParam1->f_4 = 1;
			break;
	}
}

int func_3()//Position - 0x1D148
{
	if (Global_2722673)
	{
		return 32;
	}
	return (32 - Global_2722674);
}

int func_4(int iParam0)//Position - 0x1D163
{
	char cVar0[64];
	
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return 190769267;
			break;
		
		case 1:
			return joaat("MP_Global");
			break;
		
		case 2:
			return 1398379561;
			break;
		
		case 3:
			return -295628664;
			break;
		
		case 4:
			return -1157311665;
			break;
		
		case 5:
			return 988790432;
			break;
		
		case 6:
			return 1140746429;
			break;
		
		case 7:
			return 1882254284;
			break;
		
		case 8:
			return -1021097824;
			break;
		
		case 9:
			return 1031194139;
			break;
		
		case 10:
			return -946481156;
			break;
		
		case 11:
			return -364624190;
			break;
		
		case 12:
			return -199795525;
			break;
		
		case 13:
			return -866645446;
			break;
		
		case 14:
			return 1144300534;
			break;
		
		case 15:
			return 539878179;
			break;
		
		case 16:
			return 571975921;
			break;
		
		case 17:
			return 818280646;
			break;
		
		case 18:
			return -183978087;
			break;
		
		case 19:
			return -52527117;
			break;
		
		case 26:
			return -395434754;
			break;
		
		case 20:
			return -1110334219;
			break;
		
		case 21:
			return -1382306730;
			break;
		
		case 22:
			return 1453550531;
			break;
		
		case 23:
			break;
		
		case 24:
			return 1744317449;
			break;
		
		case 25:
			return -1679896800;
			break;
		
		case 27:
			return 2;
			break;
		
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

void func_5()//Position - 0x1D372
{
	MISC::CLEAR_TACTICAL_NAV_MESH_POINTS();
	MISC::ADD_STUNT_JUMP(-9f, -9f, -9f, -10f, -10f, -10f, -25f, -25f, -25f, -28f, -28f, -28f, 0f, 0f, 0f, 0, 0, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(-9f, -9f, -9f, -10f, -10f, -10f, false, true, true, true);
	func_5();
}

void func_6()//Position - 0x1D3F0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_7()//Position - 0x1D3FC
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()//Position - 0x1D480
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()//Position - 0x1D4B3
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()//Position - 0x1D4D7
{
	return Global_31959;
}

bool func_11()//Position - 0x1D4E2
{
	return Global_2714762.f_698;
}

int func_12(int iParam0)//Position - 0x1D4F1
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()//Position - 0x1D508
{
	return Global_2725403;
}

bool func_14()//Position - 0x1D514
{
	return Global_2714762.f_693;
}

