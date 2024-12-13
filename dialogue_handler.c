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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	char cLocal_36[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char cLocal_42[24] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	char cLocal_48[64] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char cLocal_64[24] = "";
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	char* sLocal_70 = NULL;
	char cLocal_71[24] = "";
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	char* sLocal_77 = NULL;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	char cLocal_83[24] = "";
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char* sLocal_89 = NULL;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_140[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_171[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_202[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_233 = 0;
	int iLocal_234 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_32 = 5000;
	iLocal_33 = 5000;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_8920, 1))
		{
			if (!BitTest(Global_8919, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_21054)
					{
						func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
						if (Global_21009)
						{
							func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_8920, 1);
				}
			}
		}
		if (BitTest(Global_21291, 0))
		{
			if (!func_128())
			{
				if (!BitTest(Global_21291, 1))
				{
					MISC::SET_BIT(&Global_21291, 1);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_104 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_100 = MISC::GET_GAME_TIMER();
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_106 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_104);
				}
				else
				{
					iLocal_101 = MISC::GET_GAME_TIMER();
					iLocal_106 = (iLocal_101 - iLocal_100);
				}
				if (iLocal_106 < 3000)
				{
					if (func_121(&Global_21879, &Global_22495, &Global_22415, Global_22428, Global_23410, Global_23411, 0))
					{
						Global_21291 = 0;
					}
				}
				else
				{
					Global_21291 = 0;
				}
			}
		}
		if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !BitTest(Global_4718592.f_17, 4)) && !func_120()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_22425 != 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_119();
				}
			}
		}
		if (iLocal_30 == 1)
		{
			func_115();
		}
		switch (Global_22425)
		{
			case 0:
				break;
			
			case 1:
				if (Global_22431)
				{
					if (Global_22421 == 0)
					{
						func_113();
					}
					else
					{
						func_112();
						func_113();
					}
				}
				else if (Global_22421 == 0)
				{
					func_100();
				}
				else
				{
					func_112();
					func_82();
				}
				break;
			
			case 2:
				func_76();
				break;
			
			case 3:
				func_72();
				break;
			
			case 4:
				if (Global_22431)
				{
					if (Global_22433)
					{
						func_71();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()//Position - 0x259
{
	Global_22435 = 0;
	Global_21065 = 0;
	func_2();
}

void func_2()//Position - 0x26D
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_22436 = 0;
	Global_22437 = 0;
	Global_22438 = 0;
	Global_22439 = 0;
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
	Global_22429 = 0;
	Global_22430 = 0;
	Global_22472 = 0;
	Global_22473 = 0;
	Global_22476 = 0;
	Global_22478 = 0;
	Global_22477 = 0;
	Global_22480 = 0;
	Global_22479 = 0;
	Global_23442 = 0;
	Global_22482 = 0;
	if (Global_21066.f_1 == 10)
	{
	}
	else if (BitTest(Global_8919, 11))
	{
		func_3();
	}
	Global_22431 = 0;
	Global_22432 = 0;
	Global_22433 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23415 = 0;
	Global_23422 = 0;
	Global_23421 = 0;
	Global_23418 = 0;
	Global_23417 = 0;
	Global_23419 = 0;
	Global_23420 = 0;
	Global_22421 = 0;
	Global_22422 = 0;
	Global_22423 = 0;
	Global_22424 = 0;
	Global_22683 = 0;
	Global_23446 = 5000;
	Global_21049 = 0;
	MISC::CLEAR_BIT(&Global_8919, 20);
	MISC::CLEAR_BIT(&Global_8919, 24);
	MISC::CLEAR_BIT(&Global_8920, 23);
	MISC::CLEAR_BIT(&Global_8921, 0);
	MISC::CLEAR_BIT(&Global_8920, 9);
	MISC::CLEAR_BIT(&Global_8920, 31);
	MISC::CLEAR_BIT(&Global_8920, 17);
	MISC::CLEAR_BIT(&Global_8921, 5);
	Global_23409 = 0;
	Global_23408 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_22425 = 4;
	}
	else
	{
		Global_22425 = 0;
		Global_23436 = 0;
		Global_23447 = MISC::GET_GAME_TIMER();
	}
}

void func_3()//Position - 0x3A0
{
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_8919, 11))
			{
				if (!Global_21009)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_79539)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_8919, 11);
			}
		}
	}
}

void func_4()//Position - 0x407
{
	Global_22435 = 0;
	Global_21065 = 0;
	func_2();
}

void func_5()//Position - 0x41B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_22481 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_31 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_23417 == 0)
	{
		if (iLocal_29 == 0)
		{
			if (Global_23436 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_29 = 1;
			}
		}
		else if (Global_23436 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_29 = 0;
		}
	}
	else if (Global_23419 > 0)
	{
		iLocal_35 = MISC::GET_GAME_TIMER();
		if ((iLocal_35 - iLocal_34) > Global_23419)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_23417 = 0;
		}
	}
	if (Global_23436 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_22425 = 6;
		}
	}
}

void func_6()//Position - 0x4B5
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
	}
}

void func_7()//Position - 0x4D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!BitTest(Global_8919, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_79539 == 0)
					{
						func_69();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_79539 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_79539 == 0)
	{
		func_68();
	}
	if (iLocal_31 == 1)
	{
		func_63(0);
	}
	if (iLocal_29 == 0)
	{
		if (Global_23436 == 1)
		{
			if (Global_23437 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_29 = 1;
				Global_23437 = 0;
			}
		}
	}
	else if (Global_23436 == 0)
	{
		if (Global_23437 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_29 = 0;
			Global_23437 = 0;
		}
	}
	if (Global_22478 == 0)
	{
		if (!Global_22438)
		{
			if (!BitTest(Global_8920, 31))
			{
				if (!BitTest(Global_8920, 27))
				{
					if (func_62())
					{
						if (Global_21066.f_1 > 6)
						{
							MISC::SET_BIT(&Global_8920, 24);
							MISC::SET_BIT(&Global_8920, 27);
							MISC::CLEAR_BIT(&Global_8920, 26);
							MISC::CLEAR_BIT(&Global_8920, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_22438 == 0)
	{
		if (Global_22478 == 1)
		{
			MISC::SET_BIT(&Global_8920, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8920, 23);
		}
		if (Global_22482)
		{
			if (Global_22478 == 0)
			{
				Global_22044 = { Global_22483 };
				Global_22501 = { Global_22489 };
				Global_22435 = 0;
				Global_23442 = 6;
				func_61();
				return;
			}
		}
		if (!Global_22480)
		{
			while (Global_22478 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_21066.f_1 < 6)
				{
					Global_22478 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_60();
						if (Global_22480)
						{
							iLocal_28 = 1;
							Global_23440 = 1;
							func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22567, &(Global_2201[Global_8234 /*29*/].f_7), &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_3), 0);
							func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_21054)
							{
								func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
								func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8919, 17);
								func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
							}
							else
							{
								func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8919, 17);
								func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_28 = 1;
							Global_23438 = 1;
							if (func_58(Global_8234, Global_21066) == 0)
							{
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22567, "CELL_300" /* GXT: CHAR_DEFAULT */, &(Global_120[Global_8234 /*10*/].f_4), "CELL_195" /* GXT: Unknown */, 0);
								func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22567, &(Global_2201[Global_8234 /*29*/].f_7), &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_3), 0);
								func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_21054)
							{
								func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
								func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
							}
							else
							{
								func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_8919, 17);
						}
					}
					if (func_57(2, Global_21035, 0))
					{
						func_55();
						Global_20992 = 0.19f;
						Global_22478 = 0;
						func_53();
						if (Global_22480)
						{
							Global_22044 = { Global_22561 };
							Global_23442 = 5;
						}
						else if (Global_22423 > 0)
						{
							Global_22683 = 1;
							Global_22425 = 0;
							Global_23446 = 0;
							if (BitTest(Global_8920, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_23409 + 1)
								{
									uLocal_109[iVar0] = func_52(&(Global_22684[iVar0 /*6*/]));
									uLocal_140[iVar0] = func_52(&(Global_23046[iVar0 /*6*/]));
									iVar0++;
								}
								func_51(Global_23409, &Global_21714, Global_8234, &Global_22501, &uLocal_109, &uLocal_140, 9, 0, 0, 0, 0);
							}
							else if (Global_22423 == 2)
							{
								func_33(&Global_21714, Global_8234, &Global_22501, &(Global_22579[0 /*6*/]), &(Global_22631[0 /*6*/]), &(Global_22579[1 /*6*/]), &(Global_22631[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23442 = 1;
							Global_23438 = 0;
							Global_23440 = 0;
							Global_22435 = 0;
							func_31();
							return;
						}
						else
						{
							Global_22044 = { Global_22519 };
							Global_23442 = 1;
						}
						Global_23438 = 0;
						Global_23440 = 0;
						Global_22435 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21036, 0) || BitTest(Global_8919, 24))
					{
						func_55();
						Global_20992 = 0.19f;
						Global_22478 = 0;
						func_53();
						if (Global_22480)
						{
							Global_22044 = { Global_22555 };
							Global_23442 = 4;
						}
						else if (Global_22423 > 0)
						{
							Global_22683 = 1;
							Global_22425 = 0;
							Global_23446 = 0;
							if (BitTest(Global_8920, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_23408 + 1)
								{
									uLocal_171[iVar1] = func_52(&(Global_22865[iVar1 /*6*/]));
									uLocal_202[iVar1] = func_52(&(Global_23227[iVar1 /*6*/]));
									iVar1++;
								}
								func_51(Global_23408, &Global_21714, Global_8234, &Global_22501, &uLocal_171, &uLocal_202, 9, 0, 0, 0, 0);
							}
							else if (Global_22423 == 2)
							{
								func_33(&Global_21714, Global_8234, &Global_22501, &(Global_22592[0 /*6*/]), &(Global_22644[0 /*6*/]), &(Global_22592[1 /*6*/]), &(Global_22644[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23442 = 2;
							Global_23438 = 0;
							Global_23440 = 0;
							Global_22435 = 0;
							func_31();
							return;
						}
						else
						{
							Global_22044 = { Global_22525 };
							Global_23442 = 2;
						}
						Global_23438 = 0;
						Global_23440 = 0;
						Global_22435 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21038, 0))
					{
						if (Global_22480)
						{
							Global_20992 = 0.19f;
							Global_22478 = 0;
							func_53();
							func_55();
							Global_22044 = { Global_22549 };
							Global_23442 = 3;
							Global_23438 = 0;
							Global_23440 = 0;
							Global_22435 = 0;
							func_31();
							func_61();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_22478)
			{
				SYSTEM::WAIT(0);
				if (Global_21066.f_1 < 6)
				{
					Global_22478 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_60();
						func_59(Global_21047, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
						func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
						func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
						func_59(Global_21047, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_21047, "SET_HEADER", "CELL_601" /* GXT: Which Service? */, 0, 0, 0, 0);
						if (Global_21054)
						{
							func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
						}
						else
						{
							func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8919, 17);
						iLocal_233 = 0;
						iLocal_28 = 1;
					}
					func_24();
					if (func_57(2, Global_21035, 0))
					{
						func_55();
						Global_22478 = 0;
						func_53();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
						iLocal_234 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_234))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_234);
						switch (iVar2)
						{
							case 0:
								Global_22044 = { Global_22555 };
								Global_23442 = 4;
								break;
							
							case 1:
								Global_22044 = { Global_22549 };
								Global_23442 = 3;
								break;
							
							case 2:
								Global_22044 = { Global_22561 };
								Global_23442 = 5;
								break;
						}
						Global_23438 = 0;
						Global_23440 = 0;
						Global_22435 = 0;
						func_31();
						func_61();
						return;
					}
					if (func_57(2, Global_21036, 0))
					{
						Global_22478 = 0;
						func_53();
					}
				}
			}
		}
		if (Global_22426 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_21066.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_22425 = 6;
		}
		if (!Global_1574992)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21055, true);
		}
		func_23();
		Global_21066.f_1 = Global_21068;
		func_8();
	}
	else if (Global_21284 == 0)
	{
		if (func_57(2, Global_21034, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8919, 20))
					{
					}
					else
					{
						Global_21044 = 1;
						func_53();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_22474 = 1;
						Global_22475 = 1;
						Global_22425 = 6;
						func_23();
						Global_21066.f_1 = Global_21068;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE17
{
	char cVar0[24];
	
	if (Global_21049 == 1)
	{
		return;
	}
	if (Global_21066.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (Global_79539)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21066.f_1)
	{
		case 6:
			func_59(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_21(Global_9541);
			if (Global_9541 == 1)
			{
				func_59(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21070;
			}
			else
			{
				func_59(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21071;
			}
			if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21286 == 0)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else if (Global_79539)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else
			{
				if (Global_21285 == 1)
				{
					if (Global_21054)
					{
						func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21054)
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8919, 17);
			}
			if (Global_79539)
			{
				Global_21046 = Global_21070;
				if (func_16() && BitTest(Global_8921, 9))
				{
					func_11(0);
				}
				func_59(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				func_59(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_129(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21065 == 1)
			{
				func_10();
				func_59(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_58(Global_8234, Global_21066) == 0)
				{
					func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
				}
				func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22425 == 4 || Global_22425 == 3)
			{
				func_59(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22683)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_58(Global_8234, Global_21066) == 0)
					{
						func_59(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_59(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), &cVar0, &(Global_2201[Global_8234 /*29*/].f_3), 0);
					}
				}
				func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_31();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13F4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0x1406
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066 == 0)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 1)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 2)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 3)
		{
			switch (Global_4546299)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(bool bParam0)//Position - 0x167D
{
	int iVar0;
	
	MISC::SET_BIT(&Global_8921, 9);
	if (bParam0)
	{
		func_59(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_15();
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9467[iVar0] = 0;
		Global_9504[iVar0] = 0;
		iVar0++;
	}
	func_12(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24);
	if (bParam0)
	{
		func_59(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		func_59(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	}
}

void func_12(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1735
{
	func_13(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9504[iParam2] = 1;
	Global_9467[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_9(&(Global_8926[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x17A4
{
	StringCopy(&(Global_8926[iParam0 /*15*/]), sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = uParam2;
	StringCopy(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = uParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8926[iParam0 /*15*/].f_12 == 0)
	{
		Global_8926[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_13 == 0)
	{
		Global_8926[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_14 == 0)
	{
		Global_8926[iParam0 /*15*/].f_14 = 0;
	}
}

void func_14()//Position - 0x185A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9504[iVar0] = 0;
		iVar0++;
	}
}

void func_15()//Position - 0x187D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_9(&(Global_8926[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_59(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_59(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_16()//Position - 0x190C
{
	if (func_17())
	{
		return 1;
	}
	return 0;
}

bool func_17()//Position - 0x1920
{
	return (func_18() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_18()//Position - 0x1936
{
	return func_19(9539, -1);
}

bool func_19(int iParam0, int iParam1)//Position - 0x1946
{
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_20()//Position - 0x1962
{
	return Global_1574926;
}

void func_21(int iParam0)//Position - 0x196E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23493 = 0;
	Global_9541 = iParam0;
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_22(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar2 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696411)
							{
								if (iVar1 == 14)
								{
									func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114135.f_14145[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114135.f_14145[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114135.f_14145[iVar3 /*104*/].f_99[Global_21066] == 1)
											{
												Global_23493++;
											}
										}
									}
									iVar3++;
								}
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79539)
								{
									iVar4 = 0;
									iVar4 = Global_4542452;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4542454[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4542454[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4542454[iVar5 /*296*/].f_291[Global_21066] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case 0:
											iVar6 = Global_45403;
											break;
										
										case 1:
											iVar6 = Global_45404;
											break;
										
										case 2:
											iVar6 = Global_45405;
											break;
										
										default:
											break;
									}
									func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8920, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar8 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_8926[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882240.f_1;
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_22(int iParam0)//Position - 0x1EE8
{
	return Global_44181 == iParam0;
}

void func_23()//Position - 0x1EF6
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return;
	}
	switch (Global_21068)
	{
		case 5:
			Global_21068 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8920, 5))
			{
				Global_21068 = 6;
				MISC::CLEAR_BIT(&Global_8920, 5);
			}
			else
			{
				Global_21068 = 3;
			}
			break;
		
		case 7:
			Global_21068 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8920, 5))
			{
				Global_21068 = 6;
				MISC::CLEAR_BIT(&Global_8920, 5);
			}
			else
			{
				Global_21068 = 3;
			}
			break;
		
		default:
			Global_21068 = 3;
			break;
	}
}

void func_24()//Position - 0x1F89
{
	if (iLocal_233)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_233 = 0;
		}
	}
	if (iLocal_233 == 0)
	{
		if (func_57(2, Global_21042, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			func_28();
			iLocal_233 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_57(2, Global_21043, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			func_25();
			iLocal_233 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_25()//Position - 0x1FF2
{
	func_59(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_26();
}

void func_26()//Position - 0x202F
{
	if (func_27())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

int func_27()//Position - 0x2052
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79539)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4546301 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_28()//Position - 0x2099
{
	func_59(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_29();
}

void func_29()//Position - 0x20D6
{
	if (func_27())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_30(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x20F9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_31()//Position - 0x2154
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		func_32();
		if (Global_21065 == 1)
		{
			if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22472)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8919, 20))
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			func_129(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_32()//Position - 0x22C7
{
	if (Global_79539)
	{
		func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
}

int func_33(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x22F6
{
	var uVar0;
	var uVar11;
	
	func_50(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_49();
	if (iParam8 == 1)
	{
		Global_22437 = 1;
	}
	else
	{
		Global_22437 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_47(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_34(&uVar0, &uVar11, iParam7, bParam11);
}

int func_34(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2355
{
	int iVar0;
	
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam2 > Global_22427)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
				}
				else
				{
					func_119();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_45();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23421 = Global_23422;
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22044.f_370 = Global_23414;
		Global_22421 = Global_22422;
		Global_22423 = Global_22424;
		if (Global_22683 == 0)
		{
			Global_22579[0 /*6*/] = { Global_22605[0 /*6*/] };
			Global_22579[1 /*6*/] = { Global_22605[1 /*6*/] };
			Global_22631[0 /*6*/] = { Global_22657[0 /*6*/] };
			Global_22631[1 /*6*/] = { Global_22657[1 /*6*/] };
			Global_22592[0 /*6*/] = { Global_22618[0 /*6*/] };
			Global_22592[1 /*6*/] = { Global_22618[1 /*6*/] };
			Global_22644[0 /*6*/] = { Global_22670[0 /*6*/] };
			Global_22644[1 /*6*/] = { Global_22670[1 /*6*/] };
		}
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
			if (bParam3)
			{
				func_38();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_37())
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_79539)
				{
					if (Global_22683 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						{
							return 0;
						}
						if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						{
							return 0;
						}
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_36())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_35();
			Global_22435 = bParam3;
		}
		Global_22427 = iParam2;
		if (Global_22421 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_22421)
			{
				StringCopy(&(Global_22044.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_22044.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21291 = 0;
		func_61();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_22427 || iParam2 == Global_22427)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_119();
	}
	return 0;
}

void func_35()//Position - 0x26C0
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
}

int func_36()//Position - 0x2755
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x277C
{
	int iVar0;
	int iVar1;
	
	if (Global_79539)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_38()//Position - 0x2815
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_39();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

var func_39()//Position - 0x28B7
{
	func_40();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_40()//Position - 0x28D0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_22(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_41(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_41(int iParam0)//Position - 0x29CD
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x29D9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)//Position - 0x2A16
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)//Position - 0x2A3B
{
	return Global_2201[iParam0 /*29*/];
}

void func_45()//Position - 0x2A4A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21714[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21714[iVar0 /*10*/].f_1), "", 24);
		Global_21714[iVar0 /*10*/].f_7 = 0;
		Global_21714[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
}

bool func_46(int iParam0, int iParam1)//Position - 0x2AA2
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

void func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x2ADA
{
	func_48(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_48(var uParam0)//Position - 0x2B4A
{
	Global_22422 = uParam0;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
}

void func_49()//Position - 0x2B70
{
	Global_22473 = 0;
	Global_22432 = 1;
	Global_22439 = 0;
	Global_22434 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_22439 = 0;
	Global_23422 = 0;
	Global_22430 = 0;
	Global_22477 = 0;
	Global_22479 = 0;
	Global_2883585 = 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BA9
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	StringCopy(&Global_22495, sParam2, 24);
	Global_23414 = iParam5;
	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}
}

int func_51(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2BFF
{
	func_50(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_49();
	if (iParam7 == 1)
	{
		Global_22437 = 1;
	}
	else
	{
		Global_22437 = 0;
	}
	func_48(uParam0);
	return func_34(uParam4, uParam5, iParam6, bParam10);
}

var func_52(var uParam0)//Position - 0x2C3D
{
	return uParam0;
}

void func_53()//Position - 0x2C47
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21055, true);
		func_54();
	}
}

void func_54()//Position - 0x2C6D
{
	if (func_27())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_55()//Position - 0x2C81
{
	if (func_56())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_21009)
				{
					if (!BitTest(Global_8919, 11))
					{
						func_69();
					}
				}
			}
		}
	}
}

int func_56()//Position - 0x2CBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			if (Global_21009 == 0)
			{
				if (Global_8234 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22425 != 2)
						{
						}
					}
				}
			}
		}
		if (func_22(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))))
		{
			return 0;
		}
		if (Global_113183)
		{
			return 0;
		}
	}
	if (Global_79539)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4546301 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114135.f_14055.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x2F07
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1)//Position - 0x2F79
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_59(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2FA3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_60()//Position - 0x3006
{
	if (func_56())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_21009)
				{
					if (BitTest(Global_8919, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_61()//Position - 0x3042
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21293[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
}

int func_62()//Position - 0x3074
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_106 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_105);
	}
	else
	{
		iLocal_103 = MISC::GET_GAME_TIMER();
		iLocal_106 = (iLocal_103 - iLocal_102);
	}
	return 0;
}

void func_63(int iParam0)//Position - 0x30A0
{
	if (func_67())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
		}
	}
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_36())
	{
		Global_21066.f_1 = 3;
	}
}

void func_64(bool bParam0, bool bParam1)//Position - 0x312A
{
	if (bParam0)
	{
		if (func_65(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

int func_65(int iParam0)//Position - 0x319E
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_66()//Position - 0x31F5
{
	return BitTest(Global_1957675, 5);
}

bool func_67()//Position - 0x3203
{
	return BitTest(Global_1957675, 19);
}

void func_68()//Position - 0x3212
{
	if (func_57(2, Global_21043, 0))
	{
		if (Global_23436 == 0)
		{
			if (Global_22431)
			{
				if (BitTest(Global_8920, 17))
				{
				}
				else
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_69()//Position - 0x3243
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79539)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21009)
			{
				if (Global_8234 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_79539)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8919, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_70()//Position - 0x3367
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_71()//Position - 0x338B
{
	if (Global_79539 == 0)
	{
		func_68();
	}
	if (iLocal_31 == 1)
	{
		func_63(0);
	}
	if (iLocal_28 == 0)
	{
		iLocal_28 = 1;
		Global_23438 = 1;
		if (func_58(Global_8234, Global_21066) == 0)
		{
			func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22567, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_195" /* GXT: Unknown */, "CELL_195" /* GXT: Unknown */, 0);
			func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22567, &(Global_2201[Global_8234 /*29*/].f_7), &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_3), 0);
			func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20992 = 0.2f;
		if (Global_21054)
		{
			func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
			func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
		}
		else
		{
			func_129(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
	if (Global_22478 == 1)
	{
		if (Global_21066.f_1 < 6)
		{
			Global_22478 = 0;
		}
		else
		{
			if (Global_21006 == 0)
			{
				if (func_57(2, Global_21035, 0))
				{
					Global_20992 = 0.19f;
					Global_22478 = 0;
					func_53();
					Global_23443 = 1;
					iLocal_30 = 1;
				}
			}
			if (func_57(2, Global_21036, 0))
			{
				Global_20992 = 0.19f;
				Global_22478 = 0;
				func_53();
				Global_23443 = 2;
			}
		}
	}
	else if (Global_23443 == 2)
	{
		if (Global_22426 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_22425 = 6;
		}
		func_23();
		Global_21066.f_1 = Global_21068;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_30 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21055, true);
		func_23();
		Global_21066.f_1 = Global_21068;
		func_8();
	}
}

void func_72()//Position - 0x35B8
{
	if (Global_21292 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_21292 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_21292 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_22425 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_33)
	{
		if (Global_21292 == 1)
		{
			Global_21292 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_23446 || Global_21292 == 1)
	{
		if (func_57(2, Global_21034, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8919, 20))
					{
					}
					else
					{
						Global_21044 = 1;
						func_53();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_22474 = 1;
						Global_22425 = 6;
						MISC::CLEAR_BIT(&Global_8919, 27);
						if (!Global_22436)
						{
							MISC::SET_BIT(&Global_8920, 5);
						}
						func_23();
						Global_21066.f_1 = Global_21068;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 27);
		Global_22425 = 4;
		Global_22482 = 0;
		func_75();
		func_74();
		if (!Global_22438)
		{
			if (Global_23442 == 0)
			{
				if (!BitTest(Global_8921, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_8921, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22044.f_368, Global_22044.f_369);
			}
		}
		func_73();
	}
}

void func_73()//Position - 0x36DF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_105 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_102 = MISC::GET_GAME_TIMER();
	}
}

void func_74()//Position - 0x36FD
{
	if (Global_22438)
	{
		if (Global_79539)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2739811.f_1863), 15);
				}
			}
		}
	}
}

void func_75()//Position - 0x374B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (!Global_22433)
		{
			func_129(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_129(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_129(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22438)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
				func_9("CELL_219" /* GXT: CONNECTED */);
				func_9("CELL_219" /* GXT: CONNECTED */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_58(Global_8234, Global_21066) == 0)
			{
				func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_219" /* GXT: CONNECTED */, "CELL_195" /* GXT: Unknown */, 0);
			}
			else
			{
				func_129(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_219" /* GXT: CONNECTED */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
			}
		}
		func_59(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_76()//Position - 0x38E6
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_93);
		iLocal_108 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_96);
	}
	else
	{
		iLocal_92 = MISC::GET_GAME_TIMER();
		iLocal_107 = (iLocal_92 - iLocal_91);
		iLocal_95 = MISC::GET_GAME_TIMER();
		iLocal_108 = (iLocal_95 - iLocal_94);
	}
	if (Global_22472 == 1)
	{
		if (func_56())
		{
			if (iLocal_107 > 4000)
			{
				if (BitTest(Global_8919, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
					{
						func_53();
						Global_21065 = 2;
						func_75();
						func_74();
					}
				}
			}
		}
		else if (iLocal_107 > 2000)
		{
			if (BitTest(Global_8919, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
				{
					func_53();
					Global_21065 = 2;
					func_75();
					func_74();
				}
			}
		}
	}
	if (iLocal_108 > 10000)
	{
		Global_21065 = 3;
	}
	if (Global_21065 == 2)
	{
		iLocal_28 = 0;
		Global_22425 = 4;
		func_69();
		Global_22482 = 0;
		func_75();
		func_74();
		if (!Global_22438)
		{
			if (Global_23442 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22044.f_368, Global_22044.f_369);
			}
		}
		func_73();
		Global_23441 = 0;
	}
	if (Global_22472 == 0)
	{
		if (Global_21065 == 3)
		{
			if (Global_22438)
			{
				func_78();
				func_63(0);
			}
			else
			{
				func_77();
				Global_23441 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_22425 = 6;
				func_23();
				Global_21066.f_1 = Global_21068;
				func_8();
			}
		}
	}
	else if (Global_21065 == 3)
	{
	}
}

void func_77()//Position - 0x3A34
{
}

void func_78()//Position - 0x3A3C
{
	Global_2746945.f_2 = 1;
	Global_2746945.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2746945 = 0;
			Global_2746945.f_2 = 0;
		}
		else if (func_81(Global_2746945.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2746945.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2746945.f_20)))
				{
					func_79();
				}
			}
		}
		else
		{
			func_79();
		}
	}
	else
	{
		func_79();
	}
	if (Global_2746945.f_37)
	{
		func_63(0);
	}
	Global_2746945.f_37 = 0;
	Global_2746945.f_3 = 0;
}

void func_79()//Position - 0x3ADC
{
	Global_2746945.f_1 = 0;
	Global_2746945 = 0;
	Global_2746945.f_2 = 0;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;
	StringCopy(&(Global_2746945.f_4), "", 64);
	StringCopy(&(Global_2746945.f_39[0 /*16*/]), "", 64);
	Global_2746945.f_38 = 0;
	Global_2746945.f_56 = 0;
	Global_2746945.f_57 = 0;
	Global_2746945.f_58 = -2;
	Global_2746945.f_3 = 0;
	func_80(&(Global_2746945.f_20));
}

void func_80(var uParam0)//Position - 0x3B4F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

bool func_81(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3B97
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_82()//Position - 0x3BA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	
	iLocal_90 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_27 = 0;
	iLocal_29 = 0;
	while (iLocal_90 < Global_22421)
	{
		func_99();
		func_98();
		func_97();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_27 == 0)
		{
			cLocal_42 = { Global_22044.f_6[iLocal_90 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_21293[iVar2 /*6*/] = { Global_22044.f_6[iLocal_90 /*6*/] };
			StringConCat(&(Global_21293[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_21293[iVar2 /*6*/]), iVar1, 24);
			cLocal_36 = { Global_21293[iVar2 /*6*/] };
			StringConCat(&cLocal_36, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36))
			{
				StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
				iVar3 = func_96(iVar13);
				iVar4 = func_95(iVar13);
				iVar5 = func_93(iVar13);
				bLocal_80 = func_92();
				bLocal_81 = func_91();
				bLocal_82 = func_90();
				bVar6 = func_89(iVar13);
				bVar7 = func_88(iVar13);
				bVar8 = func_87(iVar13);
				iVar12 = func_86(iVar13);
				bVar9 = func_85(iVar13);
				bVar10 = func_84(iVar13);
				bVar11 = func_83(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21293[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_21293[iVar2 /*6*/]), &(Global_22044.f_187[iLocal_90 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21293[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_42), 64);
				iVar3 = func_96(0);
				iVar4 = func_95(0);
				iVar5 = func_93(0);
				bLocal_80 = func_92();
				bLocal_81 = func_91();
				bLocal_82 = func_90();
				bVar6 = func_89(0);
				bVar7 = func_88(0);
				bVar8 = func_87(0);
				iVar12 = func_86(0);
				bVar9 = func_85(0);
				bVar10 = func_84(0);
				bVar11 = func_83(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_22044.f_6[iLocal_90 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_21293[iVar2 /*6*/]), "END", 24);
				iLocal_27 = 1;
			}
			else
			{
				StringCopy(&(Global_21293[iVar2 /*6*/]), "END", 24);
				iLocal_27 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_90++;
		iLocal_27 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_22431 == 0)
	{
		AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_81);
		AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_82);
		AUDIO::START_SCRIPT_CONVERSATION(Global_22044.f_368, Global_22044.f_369, Global_22044.f_370, bLocal_80);
		Global_22425 = 4;
	}
}

int func_83(int iParam0)//Position - 0x3E26
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84(int iParam0)//Position - 0x3E5B
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x3E90
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_86(int iParam0)//Position - 0x3EC5
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x3F3B
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_88(int iParam0)//Position - 0x3F70
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_89(int iParam0)//Position - 0x3FA5
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_90()//Position - 0x3FD8
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_91()//Position - 0x4004
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_92()//Position - 0x402F
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_93(int iParam0)//Position - 0x405A
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_94(sVar0);
}

int func_94(char* sParam0)//Position - 0x4080
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_95(int iParam0)//Position - 0x431D
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_94(sVar0);
}

int func_96(int iParam0)//Position - 0x4343
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3, iParam0 * 3 + 1);
	return func_94(sVar0);
}

void func_97()//Position - 0x4367
{
	cLocal_83 = { Global_22044.f_6[iLocal_90 /*6*/] };
	StringConCat(&cLocal_83, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

void func_98()//Position - 0x43A0
{
	cLocal_71 = { Global_22044.f_6[iLocal_90 /*6*/] };
	StringConCat(&cLocal_71, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_71))
	{
		sLocal_77 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_77))
		{
		}
		sLocal_78 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_78))
		{
		}
		sLocal_79 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
	}
}

void func_99()//Position - 0x440D
{
	cLocal_64 = { Global_22044.f_6[iLocal_90 /*6*/] };
	StringConCat(&cLocal_64, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_64))
	{
		sLocal_70 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64);
		if (MISC::IS_STRING_NULL(sLocal_70))
		{
		}
	}
}

void func_100()//Position - 0x4446
{
	func_101();
	AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_81);
	AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_82);
	if (Global_23417)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_22044.f_368, Global_22044.f_369, Global_22044.f_370, bLocal_80);
		iLocal_34 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_22044.f_368, Global_22044.f_369, Global_22044.f_370, bLocal_80);
	}
	Global_22425 = 4;
}

void func_101()//Position - 0x44A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_27 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_22501))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_22501, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_111() || func_110())
		{
			if (Global_1835504 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_79539 || func_109(0))
		{
			if (Global_1835504 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_107())
		{
			iVar14 = 1;
		}
		if (func_106(MISC::GET_HASH_KEY(&Global_22501)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_22427 < 5 || Global_22427 == 10) || Global_22427 == 12) || Global_22427 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_22501, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22501, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_22501, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22501, 14);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_31 = 1;
		return;
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_105();
	func_104();
	func_103();
	func_102();
	Global_23435 = 0;
	while (iVar2 < 70 && iLocal_27 == 0)
	{
		cLocal_42 = { Global_22044 };
		StringConCat(&cLocal_42, "A", 24);
		Global_21293[iVar2 /*6*/] = { Global_22044 };
		StringConCat(&(Global_21293[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_21293[iVar2 /*6*/]), iVar1, 24);
		cLocal_36 = { Global_21293[iVar2 /*6*/] };
		StringConCat(&cLocal_36, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36))
		{
			StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
			iVar3 = func_96(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4546211 == 0)
				{
				}
			}
			iVar4 = func_95(iVar2);
			iVar5 = func_93(iVar2);
			bLocal_80 = func_92();
			bLocal_81 = func_91();
			bLocal_82 = func_90();
			bVar6 = func_89(iVar2);
			bVar7 = func_88(iVar2);
			bVar8 = func_87(iVar2);
			iVar12 = func_86(iVar2);
			bVar9 = func_85(iVar2);
			bVar10 = func_84(iVar2);
			bVar11 = func_83(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21293[iVar2 /*6*/])))
			{
				if (Global_23415 == 0 && Global_23421 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21293[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_21293[iVar2 /*6*/]), &Global_23423))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21293[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_23435 = iVar2;
					if (Global_23421 == 1)
					{
						Global_23421 = 0;
					}
				}
			}
			else if (Global_23421 == 0 && Global_23415 == 0)
			{
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &cLocal_48, iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_42), 64);
				iVar3 = func_96(iVar2);
				iVar4 = func_95(iVar2);
				iVar5 = func_93(iVar2);
				bLocal_80 = func_92();
				bLocal_81 = func_91();
				bLocal_82 = func_90();
				bVar6 = func_89(iVar2);
				bVar7 = func_88(iVar2);
				bVar8 = func_87(iVar2);
				iVar12 = func_86(iVar2);
				bVar9 = func_85(iVar2);
				bVar10 = func_84(iVar2);
				bVar11 = func_83(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &Global_22044, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_27 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_102()//Position - 0x48BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_21714[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_21714[iVar0 /*10*/]) || Global_21714[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_21714[iVar0 /*10*/], &(Global_21714[iVar0 /*10*/].f_1));
			}
			if (Global_21714.f_161 == iVar0)
			{
				if ((Global_21714.f_162 != 0f && Global_21714.f_162.f_1 != 0f) && Global_21714.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::SET_POSITION_FOR_NULL_CONV_PED(Global_21714.f_161, Global_21714.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4546211 == 1)
	{
		Global_4546211 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4546030[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4546030[iVar0 /*9*/]) || Global_4546030[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4546030[iVar0 /*9*/].f_8, Global_4546030[iVar0 /*9*/], &(Global_4546030[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_103()//Position - 0x49CA
{
	cLocal_83 = { Global_22044 };
	StringConCat(&cLocal_83, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

void func_104()//Position - 0x49FD
{
	cLocal_71 = { Global_22044 };
	StringConCat(&cLocal_71, "IF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_71))
	{
		sLocal_77 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 0, 1);
		if (MISC::IS_STRING_NULL(sLocal_77))
		{
		}
		sLocal_78 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 1, 2);
		if (MISC::IS_STRING_NULL(sLocal_78))
		{
		}
		sLocal_79 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 2, 3);
		if (MISC::IS_STRING_NULL(sLocal_79))
		{
		}
	}
}

void func_105()//Position - 0x4A64
{
	cLocal_64 = { Global_22044 };
	StringConCat(&cLocal_64, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_64))
	{
		sLocal_70 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64);
		if (MISC::IS_STRING_NULL(sLocal_70))
		{
		}
	}
}

int func_106(int iParam0)//Position - 0x4A97
{
	switch (iParam0)
	{
		case joaat("apcutau"):
		case joaat("apair"):
		case joaat("apcalau"):
		case joaat("pbpau"):
		case joaat("pbbau"):
		case joaat("expowau"):
		case joaat("excalau"):
		case joaat("excpaau"):
		case joaat("exhelau"):
		case joaat("bplesau"):
		case joaat("bpmalau"):
		case joaat("lowreau"):
		case joaat("IMTRAAU"):
		case joaat("IMAMPAU"):
		case joaat("IMWEDAU"):
		case joaat("IMBUSAU"):
		case joaat("IMROCAU"):
		case joaat("IMFLIAU"):
		case joaat("impaaud"):
		case joaat("imdunau"):
		case joaat("imruiau"):
		case joaat("immecau"):
		case joaat("imarmau"):
		case joaat("imblzau"):
		case joaat("imphaau"):
		case joaat("imtecau"):
		case joaat("imvolau"):
		case joaat("imwasau"):
		case joaat("gnrcaud"):
		case joaat("gnrweau"):
		case joaat("grapcau"):
		case joaat("grhalau"):
		case joaat("grdunau"):
		case joaat("grmocau"):
		case joaat("groppau"):
		case joaat("grop2au"):
		case joaat("grtamau"):
		case joaat("grtrsau"):
		case joaat("smgcaud"):
		case joaat("smgfzau"):
		case joaat("iaafiau"):
		case joaat("iaamoau"):
		case joaat("iaasfau"):
		case joaat("iaadeau"):
		case joaat("silprau"):
		case joaat("subbmau"):
		case joaat("subfiau"):
		case joaat("subfoau"):
		case joaat("subosau"):
		case joaat("subcaau"):
		case joaat("xmfmaud"):
		case joaat("tufin"):
		case joaat("subriau"):
		case joaat("silbcau"):
		case joaat("silspau"):
		case joaat("siltaau"):
		case joaat("silfiau"):
		case joaat("h2cutau"):
		case joaat("batfmau"):
		case joaat("lazfmau"):
		case joaat("paifmau"):
		case joaat("arintau"):
		case joaat("arannau"):
		case joaat("arasau"):
		case 1931750438:
		case joaat("cagtau"):
		case joaat("ctomau"):
		case joaat("caspaud"):
		case joaat("cas1aud"):
		case joaat("cas2aud"):
		case joaat("cas3aud"):
		case joaat("cas4aud"):
		case joaat("cas5aud"):
		case joaat("cas6aud"):
		case joaat("casuiau"):
		case joaat("casinau"):
		case 365230037:
		case joaat("casbkau"):
		case joaat("hs3faau"):
		case joaat("hs3prau"):
		case joaat("hs3cwau"):
		case joaat("hs3leau"):
		case joaat("HS3SPAU"):
		case joaat("hs3ceau"):
		case joaat("hs3reau"):
		case joaat("hs3fiau"):
		case joaat("hs3mnau"):
		case joaat("hs3vnau"):
		case joaat("ccycaud"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case 1971768146:
		case joaat("hs4paau"):
		case joaat("HS4C1AU"):
		case joaat("HS4C2AU"):
		case joaat("hs4edau"):
		case joaat("hs4bpau"):
		case joaat("hs4moau"):
		case joaat("hs4piau"):
		case joaat("hs4fiau"):
		case joaat("h4scpau"):
		case joaat("hs4faud"):
		case joaat("hs4csau"):
		case joaat("hs4psau"):
		case joaat("tnssaud"):
		case joaat("tnmmaud"):
		case joaat("tnrpaud"):
		case joaat("tnfudau"):
		case joaat("tnfmcau"):
		case joaat("tnfiaau"):
		case joaat("tnfftau"):
		case joaat("tnfboau"):
		case joaat("tnfflau"):
		case joaat("tnfbkau"):
		case joaat("tnfmhau"):
		case joaat("tnfbbau"):
		case joaat("tncutau"):
		case joaat("tnheaud"):
		case joaat("tnaraud"):
		case joaat("tumsaud"):
		case joaat("tncsbau"):
		case joaat("lowcaau"):
		case joaat("lcau"):
		case joaat("fxdl0au"):
		case joaat("fxdl1au"):
		case joaat("fxdl2au"):
		case joaat("fxdl3au"):
		case joaat("fxdl4au"):
		case joaat("fxdl5au"):
		case joaat("fxflaud"):
		case joaat("fxfraud"):
		case joaat("fximaud"):
		case joaat("fxlmaud"):
		case joaat("fxbaaud"):
		case joaat("fxfaaud"):
		case joaat("fxcutau"):
		case joaat("fxigaud"):
		case joaat("SM2AGAU"):
		case joaat("SM2MAAU"):
		case joaat("SM2TOAU"):
		case joaat("SM2WBAU"):
		case joaat("SM2YOAU"):
		case joaat("SM2ULAU"):
		case joaat("SM2U1AU"):
		case joaat("SM2U2AU"):
		case joaat("SM2U3AU"):
		case joaat("SM2U4AU"):
		case joaat("SM2U5AU"):
		case joaat("SM2U6AU"):
		case joaat("XM31AUD"):
		case joaat("XM32AUD"):
		case joaat("XM33AUD"):
		case joaat("XM34AUD"):
		case joaat("XM35AUD"):
		case joaat("XM36AUD"):
		case joaat("XM37AUD"):
		case joaat("XM38AUD"):
		case joaat("XM39AUD"):
		case joaat("XM310AU"):
		case joaat("XM311AU"):
		case joaat("XM3IGAU"):
		case joaat("XM3LAAU"):
		case joaat("XM3DXAU"):
		case joaat("XM3GVAU"):
		case joaat("XM3LRAU"):
		case joaat("XM3LDAU"):
		case joaat("XM3RNAU"):
		case joaat("XM3TXAU"):
		case joaat("SR2CHAU"):
		case joaat("SR21AUD"):
		case joaat("SR22AUD"):
		case joaat("SR23AUD"):
		case joaat("SR24AUD"):
		case joaat("SR25AUD"):
		case joaat("SR26AUD"):
		case joaat("SR2RNAU"):
		case joaat("SR2ROAU"):
		case joaat("XM4JAU"):
		case joaat("XM4R1AU"):
		case joaat("XM4R2AU"):
		case joaat("XM4R3AU"):
		case joaat("XM4R4AU"):
		case joaat("XM4R5AU"):
		case joaat("XM4YAU"):
		case joaat("XM4VAU"):
		case joaat("XM4C1AU"):
		case joaat("XM4C2AU"):
		case joaat("XM4C3AU"):
		case joaat("XM4C4AU"):
		case joaat("XM4C5AU"):
		case joaat("XM4C6AU"):
		case joaat("XM4IGAU"):
		case joaat("XM4DPAU"):
		case joaat("S24MAUD"):
		case joaat("S24VAUD"):
		case joaat("S24JAUD"):
		case 1990037697:
		case 349249063:
		case -1398692094:
		case -1257187312:
		case -574963840:
		case -528969183:
		case -1953444711:
		case joaat("X24MOAU"):
		case joaat("X24H2AU"):
		case joaat("X24H1AU"):
		case joaat("X24FAU"):
		case joaat("X24DAU"):
		case joaat("X24CAAU"):
		case joaat("X24VAU"):
		case joaat("X24PAUD"):
		case joaat("X24OAU"):
		case joaat("X24JAU"):
		case joaat("X24IGAU"):
		case joaat("X24LAAU"):
			return 1;
		
		default:
	}
	return 0;
}

int func_107()//Position - 0x4FB4
{
	if (Global_2883694)
	{
		if (func_22(0))
		{
			if (Global_3407872 || func_108(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_22(0))
		{
			if (Global_3932160 || func_108(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108(bool bParam0)//Position - 0x5007
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

var func_109(bool bParam0)//Position - 0x502F
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

bool func_110()//Position - 0x5040
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_111()//Position - 0x5056
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_112()//Position - 0x506C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_111() || func_110())
	{
		if (Global_1835504 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_79539)
	{
		if (Global_1835504 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_107())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_22501))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_22501, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_106(MISC::GET_HASH_KEY(&Global_22501)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_22427 < 5 || Global_22427 == 10) || Global_22427 == 12) || Global_22427 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_22501, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22501, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_22501, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22501, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_102();
}

void func_113()//Position - 0x51D1
{
	while (Global_21049 == 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_21049 = 0;
	if (BitTest(Global_8919, 20))
	{
		MISC::SET_BIT(&Global_8920, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8920, 1);
	}
	Global_21050 = 0;
	if (Global_22421 == 0)
	{
		if (!Global_22438)
		{
			func_101();
		}
	}
	else
	{
		func_82();
	}
	Global_21292 = 0;
	if (Global_22435)
	{
		if (Global_23442 == 0)
		{
			if (Global_22438 == 0)
			{
				iLocal_32 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_22044.f_368, Global_22044.f_369);
			}
			else
			{
				iLocal_32 = 0;
			}
		}
		else
		{
			iLocal_32 = 0;
		}
		Global_21292 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_21292 == 1 && Global_22425 == 1) && SYSTEM::TIMERB() < iLocal_32)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_21292 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_22425 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_21292 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_32)
		{
		}
		if (Global_22425 != 1)
		{
		}
		if (Global_21292 == 0)
		{
		}
	}
	Global_21292 = 0;
	if (((Global_21066.f_1 == 1 || Global_21066.f_1 == 0) || Global_22425 != 1) || Global_21032 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
	}
	else
	{
		if (Global_22433)
		{
			Global_23443 = 0;
			iLocal_30 = 0;
		}
		if (Global_22435 == 0)
		{
			if (Global_22476 == 0)
			{
				Global_21068 = Global_21066.f_1;
				Global_22476 = 1;
			}
			iLocal_28 = 0;
			if (Global_23442 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_22044.f_368, Global_22044.f_369);
				SYSTEM::WAIT(0);
				Global_22425 = 3;
				Global_21292 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_8919, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_21292 = 0;
				Global_22425 = 4;
			}
			Global_21065 = 0;
			if (Global_22436 == 1)
			{
				if (Global_21066.f_1 == 10)
				{
				}
				if (!Global_21066.f_1 == 9)
				{
					if (Global_21066.f_1 > 4)
					{
						if (Global_21049 == 0)
						{
							Global_21066.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_21066.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_21066.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_21292 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_21292 = 0;
							}
						}
					}
				}
				if (Global_21066.f_1 == 6)
				{
				}
				if (Global_21066.f_1 == 10)
				{
				}
				if (Global_21066.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_22425 = 6;
					Global_21050 = 1;
					return;
				}
				Global_21066.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_99 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_97 = MISC::GET_GAME_TIMER();
			}
			while (Global_21066.f_1 != 9 && Global_21049 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_21292 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_21292 = 0;
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_106 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_99);
				}
				else
				{
					iLocal_98 = MISC::GET_GAME_TIMER();
					iLocal_106 = (iLocal_98 - iLocal_97);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_106 > 15000)
					{
						Global_23441 = 1;
						Global_21049 = 1;
					}
				}
			}
			if (!BitTest(Global_8919, 11))
			{
				if (func_56() == 0)
				{
					func_69();
				}
			}
			if (Global_21049 == 0)
			{
				if (!Global_23442 == 0)
				{
					Global_22482 = 0;
					func_75();
					func_74();
					if (!Global_22438)
					{
						if (Global_23442 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_22044.f_368, Global_22044.f_369);
						}
					}
					func_73();
				}
			}
			else
			{
				func_114();
				Global_21050 = 1;
			}
		}
		else
		{
			Global_21065 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_21066.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_8920, 21);
				}
			}
			if (Global_22476 == 0)
			{
				Global_21068 = Global_21066.f_1;
				Global_22476 = 1;
			}
			if (Global_21066.f_1 == 3)
			{
				Global_21066.f_1 = 4;
			}
			else
			{
				while (Global_21066.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_21066.f_1 == 6)
				{
				}
				Global_21066.f_1 = 9;
				func_8();
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_99 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_97 = MISC::GET_GAME_TIMER();
			}
			while (Global_21066.f_1 != 9 && Global_21049 == 0)
			{
				SYSTEM::WAIT(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_106 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_99);
				}
				else
				{
					iLocal_98 = MISC::GET_GAME_TIMER();
					iLocal_106 = (iLocal_98 - iLocal_97);
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_106 > 20000)
					{
						Global_23441 = 1;
						Global_21049 = 1;
						MISC::CLEAR_BIT(&Global_8920, 21);
					}
				}
			}
			if (Global_21049 == 0)
			{
				Global_22425 = 2;
			}
			else
			{
				func_114();
				Global_21050 = 1;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_93 = NETWORK::GET_NETWORK_TIME();
				iLocal_96 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_91 = MISC::GET_GAME_TIMER();
				iLocal_94 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_114()//Position - 0x5661
{
	Global_21291 = 0;
	func_119();
}

void func_115()//Position - 0x5671
{
	float fVar0;
	
	fVar0 = func_116(Global_21019[Global_21011 /*3*/], Global_21012[Global_21011 /*3*/], Global_21026, Global_20997, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_23439 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_30 = 0;
	}
}

float func_116(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x56B9
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4546302 == 0)
	{
		if (BitTest(Global_8919, 14) && Global_21066.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21019[Global_21011 /*3*/].f_1 == Var0.f_1)
			{
				Global_4546302 = 1;
			}
		}
	}
	if (func_56() && Global_4546302 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_118((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_20994 = { func_117(Param0, Param3, fVar4) };
		Global_20997 = { func_117(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20994 = { Param3 };
		Global_20997 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20997, 0);
	return fVar3;
}

Vector3 func_117(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x57C8
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_118(float fParam0, float fParam1, float fParam2)//Position - 0x57E2
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_119()//Position - 0x5809
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

bool func_120()//Position - 0x5860
{
	return BitTest(Global_4718592.f_180429, 12);
}

bool func_121(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5875
{
	func_50(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_122(sParam2, iParam3, 0);
}

int func_122(char* sParam0, int iParam1, bool bParam2)//Position - 0x58C3
{
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = 0;
					Global_21065 = 0;
				}
				else
				{
					func_119();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_46(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_45();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, 0);
			if (bParam2)
			{
				func_38();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_37())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_79539)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_36())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8919, 9))
				{
					return 0;
				}
			}
			func_35();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_61();
		func_123();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22427 || iParam1 == Global_22427)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_119();
	}
	return 0;
}

void func_123()//Position - 0x5B91
{
	if (!func_124())
	{
		return;
	}
	if (Global_22431)
	{
		MemCopy(&(Global_1972230.f_1), {Global_22044}, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}
}

int func_124()//Position - 0x5BC8
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_127())
	{
		return 0;
	}
	if (func_125(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_125(int iParam0)//Position - 0x5C2B
{
	return func_126(iParam0, 20);
}

var func_126(int iParam0, int iParam1)//Position - 0x5C3B
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_127()//Position - 0x5C53
{
	return -1;
}

int func_128()//Position - 0x5C5C
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x5C7E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_9(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

