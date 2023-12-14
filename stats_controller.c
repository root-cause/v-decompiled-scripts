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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		func_106();
		switch (iLocal_53)
		{
			case 0:
				func_101();
				break;
			
			case 1:
				func_92();
				func_2();
				Global_98656 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xCC
{
	iLocal_53 = 0;
}

void func_2()//Position - 0xD7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_59)
	{
		iLocal_59 = 0;
	}
	else
	{
		iLocal_54++;
	}
	bLocal_58 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_87();
	}
	if (iVar0 != iLocal_57)
	{
		iLocal_57 = iVar0;
		bLocal_58 = true;
		iLocal_65 = 0;
		iLocal_66 = 0;
		iLocal_73 = 0;
		iLocal_79 = 0;
	}
	if (iLocal_57 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_54 == 6 && func_86(64)) || (iLocal_54 == 5 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_59 = 1;
	}
	func_80();
	if (Global_98654 || (Global_98655 && !func_77(0)))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_76(iLocal_57, iVar2);
				iVar2++;
			}
			Global_98654 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_75(iLocal_57))) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_74()) || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || Global_79246) || Global_98656) || iLocal_60)
		{
			iLocal_81 = 1;
			iLocal_82 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_83 = NETWORK::GET_NETWORK_TIME();
			}
			return;
		}
		if (iLocal_81)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_82) > 3000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_83, 3000))))
			{
				iLocal_81 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_55) > 2000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_56, 2000)))) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_56 = NETWORK::GET_NETWORK_TIME();
			}
		}
		iVar11 = 1;
		if (bLocal_58)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_58)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_54;
			}
			func_73(iLocal_57, iVar8, &iVar6, &iVar7);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar3 = func_72(iVar7, -1);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_114370.f_2366.f_539.f_2387[iLocal_57];
			}
			else
			{
				STATS::STAT_GET_INT(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_71(iVar3, 0, 100);
			if (func_58(iLocal_57, iVar8, iVar3, &iVar4))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_56(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_114370.f_2366.f_539.f_2387[iLocal_57] == 0)
					{
						bVar13 = false;
					}
					Global_114370.f_2366.f_539.f_2387[iLocal_57] = iVar4;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (iVar4 > func_54(iLocal_57, iVar8, -1))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_114370.f_9088 && !func_53(0)) || !BitTest(Global_114370.f_9088.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_52(iLocal_57, iVar8)));
					if ((iVar14 % func_52(iLocal_57, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_52(iLocal_57, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_52(iLocal_57, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_58)
						{
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								if (func_45(117, -1) == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9())
									{
										func_8("STAT_HELP2" /* GXT: ~s~Character stats represent skill levels for your character. Increase individual stats by performing that activity throughout the game. */, -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_60 = 1;
							iLocal_63 = (iVar4 - iVar3);
							iLocal_63 = (iLocal_63 + (iVar3 % func_52(iLocal_57, iVar8)));
							iLocal_64 = iVar4;
							iLocal_61 = iLocal_57;
							iLocal_62 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_57, iVar8, &iVar9))
						{
							if (iLocal_57 == 0)
							{
								STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_57 == 1)
							{
								STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_57 == 2)
							{
								STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &iVar10, -1);
								STATS::STAT_SET_INT(iVar9, iVar10, true);
							}
							else if (iLocal_57 == 3)
							{
							}
						}
					}
				}
				func_76(iLocal_57, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_56(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_114370.f_2366.f_539.f_2387[iLocal_57] = iVar4;
					bVar16 = false;
				}
				else
				{
					STATS::STAT_SET_INT(iVar6, iVar4, true);
				}
				if (bVar16)
				{
					func_76(iLocal_57, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_59 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)//Position - 0x5CA
{
	*uParam2 = joaat("LAST_PLAYING_TIME");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_MAXED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA_MAXED");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY_MAXED");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH_MAXED");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY_MAXED");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY_MAXED");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY_MAXED");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY_MAXED");
					break;
			}
			break;
	}
	return *uParam2 != joaat("LAST_PLAYING_TIME");
}

void func_4(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x7B2
{
	int iVar0;
	
	iVar0 = func_5(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_5(int iParam0, var uParam1)//Position - 0x7D5
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_6(uParam1));
}

int func_6(var uParam0)//Position - 0x7EA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_7()//Position - 0x81E
{
	return Global_1574925;
}

void func_8(char* sParam0, int iParam1)//Position - 0x82A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_9()//Position - 0x841
{
	int iVar0;
	
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1927904 == iVar0)
	{
		return Global_1927905;
	}
	else
	{
		Global_1927904 = iVar0;
		Global_1927905 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
		{
			return 0;
		}
	}
	if ((HUD::IS_HUD_HIDDEN() && HUD::IS_RADAR_HIDDEN()) && !func_44(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1927906 == 1)
	{
		return 0;
	}
	if (Global_1927715 == 1)
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_MESSAGE_SHOWING())
	{
		return 0;
	}
	if (Global_1836655 == 1)
	{
		return 0;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		return 0;
	}
	if (Global_1057442)
	{
		return 0;
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 16))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2698614, 300000, 0) == 1)
				{
					func_36(&Global_2698612);
					func_34(3, -1);
				}
				else if (func_37(&Global_2698612, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_SNIPERRIFLE") || func_26(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_HEAVYSNIPER"))
		{
			return 0;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2))
	{
		return 0;
	}
	if (Global_1836446)
	{
		return 0;
	}
	if (Global_1836450)
	{
		return 0;
	}
	if (Global_1836452)
	{
		return 0;
	}
	if (Global_2672741.f_3698.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2738587.f_4069)
	{
		return 0;
	}
	if (Global_2672741.f_3564)
	{
		return 0;
	}
	if (!func_19(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2672741.f_3698.f_39 == 1)
	{
		return 0;
	}
	if (Global_2685249.f_2847.f_26 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		if (func_12("FHU_HELP3" /* GXT: Shout through your headset to make the store clerk fill the bag with cash faster. */))
		{
			return 0;
		}
	}
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 6))
	{
		return 0;
	}
	if (func_10(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	Global_1927905 = 1;
	return 1;
}

int func_10(int iParam0)//Position - 0xB91
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_368, 26);
	}
	return 0;
}

int func_11()//Position - 0xBB8
{
	return -1;
}

bool func_12(char* sParam0)//Position - 0xBC1
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13()//Position - 0xBD4
{
	return Global_2672741.f_1689.f_701 != 0;
}

bool func_14()//Position - 0xBE8
{
	return Global_2672741.f_2842.f_582;
}

bool func_15()//Position - 0xBFA
{
	return func_16();
}

bool func_16()//Position - 0xC06
{
	return Global_1663284.f_40 == 3;
}

bool func_17(bool bParam0)//Position - 0xC16
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

bool func_18(int iParam0)//Position - 0xC3F
{
	return BitTest(Global_1882422[iParam0 /*142*/].f_14, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)//Position - 0xC53
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_20()//Position - 0xCB3
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xCD0
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_22()//Position - 0xD27
{
	return Global_1668317.f_112;
}

bool func_23()//Position - 0xD35
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

int func_24(bool bParam0, int iParam1)//Position - 0xD4B
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1668317.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1668317.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (BitTest(Global_1668317.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1668317.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)//Position - 0xDB1
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

int func_26(int iParam0)//Position - 0xDE9
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

bool func_27()//Position - 0xDFD
{
	return Global_2684312.f_692;
}

bool func_28()//Position - 0xE0C
{
	return BitTest(Global_1048576.f_10, 13);
}

bool func_29()//Position - 0xE1D
{
	return Global_2684312.f_691;
}

int func_30()//Position - 0xE2C
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0xE4E
{
	return Global_1574632.f_18;
}

int func_32()//Position - 0xE5C
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0xE7E
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, int iParam1)//Position - 0xE98
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_56(1304, 0, iParam1, 1);
			func_56(7236, 0, iParam1, 1);
			break;
	}
}

int func_35(int iParam0)//Position - 0xF79
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_7();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_36(var uParam0)//Position - 0xFDC
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)//Position - 0xFE9
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)//Position - 0x1053
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_39(int iParam0, int iParam1)//Position - 0x1098
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = func_35(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_40()//Position - 0x10C1
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_41()//Position - 0x1179
{
	return Global_1575079;
}

bool func_42()//Position - 0x1185
{
	return Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_192 != 0;
}

bool func_43()//Position - 0x119C
{
	return Global_2707705;
}

bool func_44(int iParam0)//Position - 0x11A8
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_3, 13);
}

int func_45(int iParam0, int iParam1)//Position - 0x11C1
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_5(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()//Position - 0x11E5
{
	if (!func_50(1))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	return Global_1940363;
}

bool func_47()//Position - 0x1209
{
	return func_48(PLAYER::PLAYER_ID());
}

int func_48(int iParam0)//Position - 0x1219
{
	if (func_49(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_11())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_49(var uParam0)//Position - 0x124E
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_50(bool bParam0)//Position - 0x1270
{
	return func_51(PLAYER::PLAYER_ID(), bParam0);
}

bool func_51(int iParam0, bool bParam1)//Position - 0x1282
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_11();
}

int func_52(int iParam0, int iParam1)//Position - 0x12BB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_53(bool bParam0)//Position - 0x14CB
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x14F3
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_55(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(1225, iParam2);
					break;
				
				case 3:
					return func_72(1231, iParam2);
					break;
				
				case 2:
					return func_72(1227, iParam2);
					break;
				
				case 4:
					return func_72(1230, iParam2);
					break;
				
				case 5:
					return func_72(1229, iParam2);
					break;
				
				case 6:
					return func_72(1226, iParam2);
					break;
				
				case 7:
					return func_72(1228, iParam2);
					break;
			}
			break;
	}
	return 0;
}

bool func_55(int iParam0)//Position - 0x1739
{
	return Global_43922 == iParam0;
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1747
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_57(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_57(int iParam0, int iParam1)//Position - 0x1775
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(iParam1));
}

int func_58(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x178A
{
	*uParam3 = func_59(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x17AC
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &iVar3, -1);
				fVar0 = SYSTEM::TO_FLOAT(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = SYSTEM::TO_FLOAT(func_72(64, iParam3));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_69(20, iParam3) / 175f);
				func_66(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_SWIMMING"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_SWIMMING"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_SWIMMING"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(func_57(50, iParam3))));
				func_66(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_BICYCLE"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(func_65(func_57(47, iParam3))));
				func_66(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_24545 /* Tunable: -624142803 */) * IntToFloat(func_72(7237, -1))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP0_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP1_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(joaat("SP2_TIME_UNDERWATER"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_64(func_57(52, iParam3))) / 30f);
				func_66(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &iVar3, -1);
				fVar0 = (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_72(1500, iParam3)) / 20f);
				func_66(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &iVar3, -1);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_72(113, iParam3) / 50)));
				func_66(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_PLANE"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (SYSTEM::TO_FLOAT(func_65(func_57(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_65(joaat("SP0_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_65(joaat("SP1_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_65(joaat("SP2_TIME_DRIVING_HELI"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(func_65(func_57(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_PLANE_LANDINGS"), &iVar3, -1);
				fVar0 = (fVar0 + SYSTEM::TO_FLOAT(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_72(61, iParam3)));
				func_66(&fVar0);
			}
			if (iParam0 == 3)
			{
				if (BitTest(Global_1575005, 15))
				{
					fVar0 = 100f;
				}
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_63(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_63(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_114370.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_69(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &iVar3, -1);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT((iVar3 - Global_114370.f_2366.f_539.f_2371[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_72(34, iParam3);
				fVar0 = (fVar0 + ((SYSTEM::TO_FLOAT(iVar3) / 2f) * 1.5f));
				func_66(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114370.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114370.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP1_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114370.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114370.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &iVar5, -1);
				STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (SYSTEM::TO_FLOAT((iVar5 - Global_114370.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT((iVar6 - Global_114370.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_72(172, iParam3);
				fVar0 = (fVar0 + (SYSTEM::TO_FLOAT(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_62(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_61(joaat("MPPLY_SHOOTINGRANGE_WINS")) * 1));
				func_66(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_54(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_60(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_52(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_52(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_52(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_52(iParam0, iParam1)));
		}
	}
	iVar2 = SYSTEM::FLOOR(fVar0);
	iVar2 = func_71(iVar2, 0, 100);
	return iVar2;
}

int func_60(int iParam0, int iParam1, int iParam2)//Position - 0x24CF
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(72, iParam2);
					break;
				
				case 3:
					return func_72(74, iParam2);
					break;
				
				case 2:
					return func_72(73, iParam2);
					break;
				
				case 4:
					return func_72(75, iParam2);
					break;
				
				case 5:
					return func_72(76, iParam2);
					break;
				
				case 6:
					return func_72(77, iParam2);
					break;
				
				case 7:
					return func_72(78, iParam2);
					break;
			}
			break;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x25DC
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)//Position - 0x25FA
{
	return Global_114370.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_63(int iParam0, int iParam1)//Position - 0x2616
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_114370.f_1991[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_64(int iParam0)//Position - 0x2644
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 86400));
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 3600);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_SECONDS(iParam0));
	return iVar0;
}

int func_65(int iParam0)//Position - 0x2687
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(iParam0) * 1440);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(iParam0) * 60);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_MINUTES(iParam0));
	return iVar0;
}

var func_66(float fParam0)//Position - 0x26BA
{
	if (func_46())
	{
		if (func_67() < Global_262145.f_13370 /* Tunable: GB_BOSS_STAT_BOOST_MAX_RANK */)
		{
			if (*fParam0 + (IntToFloat(func_67()) * Global_262145.f_13369 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */)) <= IntToFloat(Global_262145.f_13379 /* Tunable: GB_BOSS_BOOST_MAX_FINAL_STAT */)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_67()) * Global_262145.f_13369 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_67()//Position - 0x2714
{
	if (func_50(1))
	{
		return Global_1845263[func_68() /*877*/].f_205.f_6;
	}
	return 0;
}

int func_68()//Position - 0x273A
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

float func_69(int iParam0, int iParam1)//Position - 0x274F
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_70(iParam0, iParam1);
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_70(int iParam0, var uParam1)//Position - 0x2773
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_6(uParam1));
}

int func_71(int iParam0, int iParam1, int iParam2)//Position - 0x2788
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_72(int iParam0, int iParam1)//Position - 0x27AD
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_57(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x27DC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_74()//Position - 0x2A33
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

bool func_75(int iParam0)//Position - 0x2A4F
{
	return iParam0 < 3;
}

void func_76(int iParam0, int iParam1)//Position - 0x2A5B
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_73(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_72(iVar3, -1);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), fVar1, true);
			break;
		
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("armenian3")) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("trevor3")) != 0)
			{
				Global_98655 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), fVar1);
			}
			break;
	}
}

int func_77(int iParam0)//Position - 0x2B47
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_78(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_78(int iParam0)//Position - 0x2B69
{
	return func_79(iParam0, Global_43922);
}

int func_79(int iParam0, int iParam1)//Position - 0x2B7A
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_80()//Position - 0x2D5B
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar0))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar0))))
		{
			iVar1 = 1;
		}
	}
	func_85(&iVar0, &iVar1);
	func_84(&iVar0, &iVar1);
	func_81();
}

void func_81()//Position - 0x2DFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_79)
	{
		if (iLocal_57 == 3)
		{
			if (Global_2359296[func_83() /*5569*/].f_681.f_7)
			{
				iLocal_76 = func_64(func_57(148, -1));
				Global_2359296[func_83() /*5569*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_83() /*5569*/].f_681.f_6;
			}
			if (Global_2359296[func_83() /*5569*/].f_681.f_4 == 0)
			{
				Global_2359296[func_83() /*5569*/].f_681.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_78 = Global_2359296[func_83() /*5569*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_83() /*5569*/].f_681.f_5;
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_2292[iLocal_57])
			{
				switch (iLocal_57)
				{
					case 0:
						iLocal_76 = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
						break;
					
					case 1:
						iLocal_76 = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
						break;
					
					case 2:
						iLocal_76 = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
						break;
				}
				Global_114370.f_2366.f_539.f_2292[iLocal_57] = 0;
			}
			else
			{
				iLocal_76 = Global_114370.f_2366.f_539.f_2288[iLocal_57];
			}
			if (Global_114370.f_2366.f_539.f_2280[iLocal_57] == 0)
			{
				Global_114370.f_2366.f_539.f_2280[iLocal_57] = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
			iLocal_78 = Global_114370.f_2366.f_539.f_2280[iLocal_57];
			iLocal_77 = Global_114370.f_2366.f_539.f_2284[iLocal_57];
		}
		iLocal_79 = 1;
		iLocal_80 = 1;
	}
	else if ((NETWORK::GET_CLOUD_TIME_AS_INT() - iLocal_78) > 86400)
	{
		iLocal_79 = 0;
		iLocal_80 = 0;
		iLocal_78 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iLocal_77 = 0;
		if (iLocal_57 == 3)
		{
			Global_2359296[func_83() /*5569*/].f_681.f_7 = 1;
		}
		else
		{
			Global_114370.f_2366.f_539.f_2292[iLocal_57] = 1;
		}
	}
	if (iLocal_80)
	{
		switch (iLocal_57)
		{
			case 0:
				iVar0 = func_64(joaat("SP0_TOTAL_WHEELIE_TIME"));
				break;
			
			case 1:
				iVar0 = func_64(joaat("SP1_TOTAL_WHEELIE_TIME"));
				break;
			
			case 2:
				iVar0 = func_64(joaat("SP2_TOTAL_WHEELIE_TIME"));
				break;
			
			case 3:
				iVar0 = func_64(func_57(148, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_76);
		iVar2 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) / 15f)) - iLocal_77);
		if (iVar2 > 0)
		{
			func_82(iLocal_57, 4, iVar2);
			iLocal_77 = (iLocal_77 + iVar2);
		}
		if (iVar0 > (iLocal_76 + (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() / 1000) * 60))
		{
			iLocal_80 = 0;
		}
	}
	if (iLocal_57 == 3)
	{
		Global_2359296[func_83() /*5569*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_83() /*5569*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_114370.f_2366.f_539.f_2280[iLocal_57] = iLocal_78;
		Global_114370.f_2366.f_539.f_2284[iLocal_57] = iLocal_77;
	}
}

void func_82(int iParam0, int iParam1, int iParam2)//Position - 0x30BC
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114370.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14626;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14626)
			{
				iVar0 = func_72(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_56(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_83()//Position - 0x31AA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0, int iParam1)//Position - 0x31B7
{
	bool bVar0;
	
	if (iLocal_73)
	{
		bVar0 = true;
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			bVar0 = false;
			if (ENTITY::GET_ENTITY_SPEED(*iParam0) >= 53f)
			{
				func_82(iLocal_57, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_73 = 0;
			iLocal_74 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_75 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && *iParam1) && ENTITY::GET_ENTITY_SPEED(*iParam0) < 20f) && !ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_74) > 10000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_75, 10000))))
		{
			iLocal_73 = 1;
		}
	}
}

void func_85(int iParam0, int iParam1)//Position - 0x3292
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_65)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_67) > 1500) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_68, 1500))))
				{
					iLocal_69 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_70 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_66 = 1;
				}
				iLocal_65 = 0;
			}
		}
		if (iLocal_66)
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
				{
					if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_69) > 20) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_69) == 0)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_70, 20)))) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_EQUAL_TO(NETWORK::GET_NETWORK_TIME(), iLocal_70)))
					{
					}
					else
					{
						func_82(iLocal_57, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_69), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_65 && !iLocal_66)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - iLocal_71) > 1000) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(iLocal_72, 1000))))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
				{
					if (!iLocal_65)
					{
						iLocal_67 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_68 = NETWORK::GET_NETWORK_TIME();
						}
						iLocal_65 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_65 || iLocal_66)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_71 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_72 = NETWORK::GET_NETWORK_TIME();
		}
		iLocal_65 = 0;
		iLocal_66 = 0;
	}
}

bool func_86(int iParam0)//Position - 0x3450
{
	return (Global_113455 && iParam0) != 0;
}

int func_87()//Position - 0x3461
{
	func_88();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_88()//Position - 0x347A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_90(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_89(PLAYER::PLAYER_PED_ID());
			if (func_75(iVar0) && (!func_55(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_75(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

int func_89(int iParam0)//Position - 0x3577
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_90(int iParam0)//Position - 0x35B4
{
	if (func_75(iParam0))
	{
		return func_91(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_91(int iParam0)//Position - 0x35D9
{
	return Global_2139[iParam0 /*29*/];
}

void func_92()//Position - 0x35E8
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_60)
	{
		if (iLocal_61 != iLocal_57)
		{
			iLocal_60 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_61)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_95(PLAYER::PLAYER_ID());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
				}
				break;
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PS_UPDATE" /* GXT: ~1~/100 */);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_64);
		HUD::END_TEXT_COMMAND_THEFEED_POST_STATS(func_94(iLocal_62), func_93(iLocal_62), iLocal_63, (iLocal_64 - iLocal_63), false, sVar0, sVar0);
		iLocal_81 = 1;
		iLocal_82 = MISC::GET_GAME_TIMER() + 5000;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_83 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
		}
		iLocal_60 = 0;
	}
}

int func_93(int iParam0)//Position - 0x36AC
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_94(int iParam0)//Position - 0x372B
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB" /* GXT: Special capacity + */;
			break;
		
		case 1:
			return "PSF_STAMINA" /* GXT: Stamina + */;
			break;
		
		case 3:
			return "PSF_LUNG" /* GXT: Lung Capacity + */;
			break;
		
		case 2:
			return "PSF_STRENGTH" /* GXT: Strength + */;
			break;
		
		case 4:
			return "PSF_DRIVING" /* GXT: Driving + */;
			break;
		
		case 5:
			return "PSF_FLYING" /* GXT: Flying + */;
			break;
		
		case 6:
			return "PSF_SHOOTING" /* GXT: Shooting + */;
			break;
		
		case 7:
			return "PSF_STEALTH" /* GXT: Stealth + */;
			break;
	}
	return "ERROR";
}

int func_95(int iParam0)//Position - 0x37B5
{
	int iVar0;
	
	iVar0 = func_98(iParam0);
	if (iVar0 == -1)
	{
		func_96(iParam0, 1);
		return 0;
	}
	Global_1680805[iVar0 /*5*/].f_4 = 1;
	return Global_1680805[iVar0 /*5*/].f_2;
}

void func_96(int iParam0, bool bParam1)//Position - 0x37EB
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_98(iParam0) != -1)
	{
		return;
	}
	if (Global_1680968)
	{
		if (iParam0 == Global_1680968.f_1)
		{
			return;
		}
	}
	if (func_97(iParam0))
	{
		return;
	}
	if (Global_1681006 >= 32)
	{
		return;
	}
	Global_1680973[Global_1681006] = iParam0;
	Global_1681006++;
	if (bParam1)
	{
	}
}

int func_97(int iParam0)//Position - 0x3857
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681006)
	{
		if (Global_1680973[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x3889
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1680966 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680966)
	{
		if (Global_1680805[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1680805[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_99(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_99(int iParam0)//Position - 0x3908
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1680966)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1680805[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1680805[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1680805[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1680805[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1680966)
	{
		Global_1680805[iVar32 /*5*/] = { Global_1680805[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_100(&(Global_1680805[iVar32 /*5*/]));
	Global_1680966 = (Global_1680966 - 1);
}

void func_100(var uParam0)//Position - 0x39BD
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_101()//Position - 0x39EA
{
	float fVar0;
	int iVar1;
	
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() != 1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_105(PLAYER::PLAYER_ID()))
		{
			return;
		}
		if (func_104() != 0)
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_104() == 0)
		{
			iLocal_52 = 1;
		}
	}
	else
	{
		iLocal_52 = 0;
	}
	if (!func_103())
	{
		func_102();
	}
	iLocal_54 = 0;
	iLocal_55 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_56 = NETWORK::GET_NETWORK_TIME();
	}
	iLocal_71 = MISC::GET_GAME_TIMER();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_72 = NETWORK::GET_NETWORK_TIME();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_2359296[func_83() /*5569*/].f_681.f_1274, 2))
		{
			fVar0 = (SYSTEM::TO_FLOAT(func_72(193, -1)) / 20f);
			iVar1 = SYSTEM::FLOOR(fVar0);
			iVar1 = func_71(iVar1, 0, 100);
			func_82(3, 2, iVar1);
			MISC::SET_BIT(&(Global_2359296[func_83() /*5569*/].f_681.f_1274), 2);
		}
	}
	bLocal_58 = true;
	iLocal_53 = 1;
}

void func_102()//Position - 0x3AD0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_73(3, iVar0, &uVar1, &iVar2);
				func_56(iVar2, func_54(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_98654 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_73(iVar3, iVar4, &iVar5, &uVar6);
					STATS::STAT_SET_INT(iVar5, func_54(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_114370.f_2366.f_539.f_2387[0] = func_54(0, 0, -1);
		Global_114370.f_2366.f_539.f_2387[1] = func_54(1, 0, -1);
		Global_114370.f_2366.f_539.f_2387[2] = func_54(2, 0, -1);
		Global_114370.f_2366.f_539.f_2354 = 1;
		Global_98654 = 1;
	}
}

int func_103()//Position - 0x3BC3
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_114370.f_2366.f_539.f_2354;
}

int func_104()//Position - 0x3BE6
{
	return Global_32828;
}

int func_105(int iParam0)//Position - 0x3BF1
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

void func_106()//Position - 0x3C10
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_52 = 2;
			}
			if (!func_103())
			{
				iLocal_52 = 2;
			}
		}
		else if (iLocal_52 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_105(PLAYER::PLAYER_ID())) || func_104() != 0)
			{
				iLocal_52 = 2;
			}
		}
		if (iLocal_52 == 2)
		{
			iLocal_53 = 2;
		}
	}
}

