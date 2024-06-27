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
		if (BitTest(Global_8801, 1))
		{
			if (!BitTest(Global_8800, 20))
			{
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_20918)
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
						if (Global_20873)
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::CLEAR_BIT(&Global_8801, 1);
				}
			}
		}
		if (BitTest(Global_21152, 0))
		{
			if (!func_119())
			{
				if (!BitTest(Global_21152, 1))
				{
					MISC::SET_BIT(&Global_21152, 1);
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
					if (func_112(&Global_21740, &Global_22356, &Global_22276, Global_22289, Global_23271, Global_23272, 0))
					{
						Global_21152 = 0;
					}
				}
				else
				{
					Global_21152 = 0;
				}
			}
		}
		if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !BitTest(Global_4718592.f_17, 4)) && !func_111()) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			if (Global_22286 != 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_110();
				}
			}
		}
		if (iLocal_30 == 1)
		{
			func_106();
		}
		switch (Global_22286)
		{
			case 0:
				break;
			
			case 1:
				if (Global_22292)
				{
					if (Global_22282 == 0)
					{
						func_104();
					}
					else
					{
						func_103();
						func_104();
					}
				}
				else if (Global_22282 == 0)
				{
					func_91();
				}
				else
				{
					func_103();
					func_73();
				}
				break;
			
			case 2:
				func_67();
				break;
			
			case 3:
				func_63();
				break;
			
			case 4:
				if (Global_22292)
				{
					if (Global_22294)
					{
						func_62();
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
	Global_22296 = 0;
	Global_20929 = 0;
	func_2();
}

void func_2()//Position - 0x26D
{
	Global_2883585 = 0;
	Global_2883586 = 0;
	Global_22297 = 0;
	Global_22298 = 0;
	Global_22299 = 0;
	Global_22300 = 0;
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
	Global_22290 = 0;
	Global_22291 = 0;
	Global_22333 = 0;
	Global_22334 = 0;
	Global_22337 = 0;
	Global_22339 = 0;
	Global_22338 = 0;
	Global_22341 = 0;
	Global_22340 = 0;
	Global_23303 = 0;
	Global_22343 = 0;
	if (Global_20930.f_1 == 10)
	{
	}
	else if (BitTest(Global_8800, 11))
	{
		func_3();
	}
	Global_22292 = 0;
	Global_22293 = 0;
	Global_22294 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23276 = 0;
	Global_23283 = 0;
	Global_23282 = 0;
	Global_23279 = 0;
	Global_23278 = 0;
	Global_23280 = 0;
	Global_23281 = 0;
	Global_22282 = 0;
	Global_22283 = 0;
	Global_22284 = 0;
	Global_22285 = 0;
	Global_22544 = 0;
	Global_23307 = 5000;
	Global_20913 = 0;
	MISC::CLEAR_BIT(&Global_8800, 20);
	MISC::CLEAR_BIT(&Global_8800, 24);
	MISC::CLEAR_BIT(&Global_8801, 23);
	MISC::CLEAR_BIT(&Global_8802, 0);
	MISC::CLEAR_BIT(&Global_8801, 9);
	MISC::CLEAR_BIT(&Global_8801, 31);
	MISC::CLEAR_BIT(&Global_8801, 17);
	MISC::CLEAR_BIT(&Global_8802, 5);
	Global_23270 = 0;
	Global_23269 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_22286 = 4;
	}
	else
	{
		Global_22286 = 0;
		Global_23297 = 0;
		Global_23308 = MISC::GET_GAME_TIMER();
	}
}

void func_3()//Position - 0x3A0
{
	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_8800, 11))
			{
				if (!Global_20873)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_79389)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_8800, 11);
			}
		}
	}
}

void func_4()//Position - 0x407
{
	Global_22296 = 0;
	Global_20929 = 0;
	func_2();
}

void func_5()//Position - 0x41B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_22342 == 0)
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
	if (Global_23278 == 0)
	{
		if (iLocal_29 == 0)
		{
			if (Global_23297 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_29 = 1;
			}
		}
		else if (Global_23297 == 0)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_29 = 0;
		}
	}
	else if (Global_23280 > 0)
	{
		iLocal_35 = MISC::GET_GAME_TIMER();
		if ((iLocal_35 - iLocal_34) > Global_23280)
		{
			AUDIO::START_PRELOADED_CONVERSATION();
			Global_23278 = 0;
		}
	}
	if (Global_23297 == 0)
	{
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_22286 = 6;
		}
	}
}

void func_6()//Position - 0x4B5
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

void func_7()//Position - 0x4D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!BitTest(Global_8800, 11))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_79389 == 0)
					{
						func_60();
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (Global_79389 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_79389 == 0)
	{
		func_59();
	}
	if (iLocal_31 == 1)
	{
		func_54(0);
	}
	if (iLocal_29 == 0)
	{
		if (Global_23297 == 1)
		{
			if (Global_23298 == 1)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				iLocal_29 = 1;
				Global_23298 = 0;
			}
		}
	}
	else if (Global_23297 == 0)
	{
		if (Global_23298 == 1)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			iLocal_29 = 0;
			Global_23298 = 0;
		}
	}
	if (Global_22339 == 0)
	{
		if (!Global_22299)
		{
			if (!BitTest(Global_8801, 31))
			{
				if (!BitTest(Global_8801, 27))
				{
					if (func_53())
					{
						if (Global_20930.f_1 > 6)
						{
							MISC::SET_BIT(&Global_8801, 24);
							MISC::SET_BIT(&Global_8801, 27);
							MISC::CLEAR_BIT(&Global_8801, 26);
							MISC::CLEAR_BIT(&Global_8801, 25);
						}
					}
				}
			}
		}
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_22299 == 0)
	{
		if (Global_22339 == 1)
		{
			MISC::SET_BIT(&Global_8801, 23);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8801, 23);
		}
		if (Global_22343)
		{
			if (Global_22339 == 0)
			{
				Global_21905 = { Global_22344 };
				Global_22362 = { Global_22350 };
				Global_22296 = 0;
				Global_23303 = 6;
				func_52();
				return;
			}
		}
		if (!Global_22341)
		{
			while (Global_22339 == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_20930.f_1 < 6)
				{
					Global_22339 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_51();
						if (Global_22341)
						{
							iLocal_28 = 1;
							Global_23301 = 1;
							func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
							func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_20918)
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8800, 17);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								MISC::SET_BIT(&Global_8800, 17);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_28 = 1;
							Global_23299 = 1;
							if (func_49(Global_8115, Global_20930) == 0)
							{
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22428, "CELL_300" /* GXT: CHAR_DEFAULT */, &(Global_118[Global_8115 /*10*/].f_4), "CELL_195" /* GXT: Unknown */, 0);
								func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
								func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_20918)
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							MISC::CLEAR_BIT(&Global_8800, 17);
						}
					}
					if (func_48(2, Global_20899, 0))
					{
						func_46();
						Global_20856 = 0.19f;
						Global_22339 = 0;
						func_44();
						if (Global_22341)
						{
							Global_21905 = { Global_22422 };
							Global_23303 = 5;
						}
						else if (Global_22284 > 0)
						{
							Global_22544 = 1;
							Global_22286 = 0;
							Global_23307 = 0;
							if (BitTest(Global_8801, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_23270 + 1)
								{
									uLocal_109[iVar0] = func_43(&(Global_22545[iVar0 /*6*/]));
									uLocal_140[iVar0] = func_43(&(Global_22907[iVar0 /*6*/]));
									iVar0++;
								}
								func_42(Global_23270, &Global_21575, Global_8115, &Global_22362, &uLocal_109, &uLocal_140, 9, 0, 0, 0, 0);
							}
							else if (Global_22284 == 2)
							{
								func_24(&Global_21575, Global_8115, &Global_22362, &(Global_22440[0 /*6*/]), &(Global_22492[0 /*6*/]), &(Global_22440[1 /*6*/]), &(Global_22492[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23303 = 1;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							return;
						}
						else
						{
							Global_21905 = { Global_22380 };
							Global_23303 = 1;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20900, 0) || BitTest(Global_8800, 24))
					{
						func_46();
						Global_20856 = 0.19f;
						Global_22339 = 0;
						func_44();
						if (Global_22341)
						{
							Global_21905 = { Global_22416 };
							Global_23303 = 4;
						}
						else if (Global_22284 > 0)
						{
							Global_22544 = 1;
							Global_22286 = 0;
							Global_23307 = 0;
							if (BitTest(Global_8801, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_23269 + 1)
								{
									uLocal_171[iVar1] = func_43(&(Global_22726[iVar1 /*6*/]));
									uLocal_202[iVar1] = func_43(&(Global_23088[iVar1 /*6*/]));
									iVar1++;
								}
								func_42(Global_23269, &Global_21575, Global_8115, &Global_22362, &uLocal_171, &uLocal_202, 9, 0, 0, 0, 0);
							}
							else if (Global_22284 == 2)
							{
								func_24(&Global_21575, Global_8115, &Global_22362, &(Global_22453[0 /*6*/]), &(Global_22505[0 /*6*/]), &(Global_22453[1 /*6*/]), &(Global_22505[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_23303 = 2;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							return;
						}
						else
						{
							Global_21905 = { Global_22386 };
							Global_23303 = 2;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20902, 0))
					{
						if (Global_22341)
						{
							Global_20856 = 0.19f;
							Global_22339 = 0;
							func_44();
							func_46();
							Global_21905 = { Global_22410 };
							Global_23303 = 3;
							Global_23299 = 0;
							Global_23301 = 0;
							Global_22296 = 0;
							func_22();
							func_52();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_22339)
			{
				SYSTEM::WAIT(0);
				if (Global_20930.f_1 < 6)
				{
					Global_22339 = 0;
				}
				else
				{
					if (iLocal_28 == 0)
					{
						func_51();
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603" /* GXT: Fire Dept. */, 0, 0, 0, 0);
						func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602" /* GXT: Paramedic */, 0, 0, 0, 0);
						func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604" /* GXT: Police */, 0, 0, 0, 0);
						func_50(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_21(Global_20911, "SET_HEADER", "CELL_601" /* GXT: Which Service? */, 0, 0, 0, 0);
						if (Global_20918)
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
						}
						else
						{
							func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8800, 17);
						iLocal_233 = 0;
						iLocal_28 = 1;
					}
					func_15();
					if (func_48(2, Global_20899, 0))
					{
						func_46();
						Global_22339 = 0;
						func_44();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
						iLocal_234 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_234))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_234);
						switch (iVar2)
						{
							case 0:
								Global_21905 = { Global_22416 };
								Global_23303 = 4;
								break;
							
							case 1:
								Global_21905 = { Global_22410 };
								Global_23303 = 3;
								break;
							
							case 2:
								Global_21905 = { Global_22422 };
								Global_23303 = 5;
								break;
						}
						Global_23299 = 0;
						Global_23301 = 0;
						Global_22296 = 0;
						func_22();
						func_52();
						return;
					}
					if (func_48(2, Global_20900, 0))
					{
						Global_22339 = 0;
						func_44();
					}
				}
			}
		}
		if (Global_22287 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_20930.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_22286 = 6;
		}
		if (!Global_1574992)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20919, true);
		}
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
	else if (Global_21145 == 0)
	{
		if (func_48(2, Global_20898, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8800, 20))
					{
					}
					else
					{
						Global_20908 = 1;
						func_44();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_22335 = 1;
						Global_22336 = 1;
						Global_22286 = 6;
						func_14();
						Global_20930.f_1 = Global_20932;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()//Position - 0xE17
{
	int iVar0;
	char cVar1[24];
	
	if (Global_20913 == 1)
	{
		return;
	}
	if (Global_20930.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (Global_79389)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20930.f_1)
	{
		case 6:
			func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_9405);
			if (Global_9405 == 1)
			{
				func_50(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_50(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_50(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
				func_50(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_10();
				func_50(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					func_9("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_49(Global_8115, Global_20930) == 0)
				{
					func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_50(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					func_9("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22544)
					{
						StringCopy(&cVar1, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar1, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_49(Global_8115, Global_20930) == 0)
					{
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar1, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_50(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_22();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)//Position - 0x13D7
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0x13E9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930 == 0)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 1)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 2)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
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
		if (Global_20930 == 3)
		{
			switch (Global_4543360)
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

void func_11(int iParam0)//Position - 0x1660
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_13();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_9(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)//Position - 0x1BD6
{
	return Global_44042 == iParam0;
}

void func_13()//Position - 0x1BE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_14()//Position - 0x1C07
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return;
	}
	switch (Global_20932)
	{
		case 5:
			Global_20932 = 6;
			break;
		
		case 6:
			if (BitTest(Global_8801, 5))
			{
				Global_20932 = 6;
				MISC::CLEAR_BIT(&Global_8801, 5);
			}
			else
			{
				Global_20932 = 3;
			}
			break;
		
		case 7:
			Global_20932 = 3;
			break;
		
		case 3:
			if (BitTest(Global_8801, 5))
			{
				Global_20932 = 6;
				MISC::CLEAR_BIT(&Global_8801, 5);
			}
			else
			{
				Global_20932 = 3;
			}
			break;
		
		default:
			Global_20932 = 3;
			break;
	}
}

void func_15()//Position - 0x1C9A
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
		if (func_48(2, Global_20906, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			func_19();
			iLocal_233 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_48(2, Global_20907, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			func_16();
			iLocal_233 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_16()//Position - 0x1D03
{
	func_50(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_17();
}

void func_17()//Position - 0x1D40
{
	if (func_18())
	{
		if (Global_21150 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

int func_18()//Position - 0x1D63
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
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
	if (Global_4543362 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_19()//Position - 0x1DAA
{
	func_50(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_20();
}

void func_20()//Position - 0x1DE7
{
	if (func_18())
	{
		if (Global_21150 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_21(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x1E0A
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

void func_22()//Position - 0x1E65
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_23();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_23()//Position - 0x1FD8
{
	if (Global_79389)
	{
		func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
}

int func_24(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x2007
{
	var uVar0;
	var uVar11;
	
	func_41(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_40();
	if (iParam8 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_38(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_25(&uVar0, &uVar11, iParam7, bParam11);
}

int func_25(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2066
{
	int iVar0;
	
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam2 > Global_22288)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
				}
				else
				{
					func_110();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_36();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23282 = Global_23283;
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_21905.f_370 = Global_23275;
		Global_22282 = Global_22283;
		Global_22284 = Global_22285;
		if (Global_22544 == 0)
		{
			Global_22440[0 /*6*/] = { Global_22466[0 /*6*/] };
			Global_22440[1 /*6*/] = { Global_22466[1 /*6*/] };
			Global_22492[0 /*6*/] = { Global_22518[0 /*6*/] };
			Global_22492[1 /*6*/] = { Global_22518[1 /*6*/] };
			Global_22453[0 /*6*/] = { Global_22479[0 /*6*/] };
			Global_22453[1 /*6*/] = { Global_22479[1 /*6*/] };
			Global_22505[0 /*6*/] = { Global_22531[0 /*6*/] };
			Global_22505[1 /*6*/] = { Global_22531[1 /*6*/] };
		}
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam3)
			{
				func_29();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_28())
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
				if (!Global_79389)
				{
					if (Global_22544 == 0)
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
			if (func_27())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
			func_26();
			Global_22296 = bParam3;
		}
		Global_22288 = iParam2;
		if (Global_22282 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_22282)
			{
				StringCopy(&(Global_21905.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21905.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_21152 = 0;
		func_52();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_22288 || iParam2 == Global_22288)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_110();
	}
	return 0;
}

void func_26()//Position - 0x23D1
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_27()//Position - 0x2466
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_28()//Position - 0x248D
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_29()//Position - 0x2526
{
	if (func_12(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_30();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_30()//Position - 0x25C8
{
	func_31();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_31()//Position - 0x25E1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_33(PLAYER::PLAYER_PED_ID());
			if (func_32(iVar0) && (!func_12(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_32(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_32(int iParam0)//Position - 0x26DE
{
	return iParam0 < 3;
}

int func_33(int iParam0)//Position - 0x26EA
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)//Position - 0x2727
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)//Position - 0x274C
{
	return Global_2169[iParam0 /*29*/];
}

void func_36()//Position - 0x275B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_37(int iParam0, int iParam1)//Position - 0x27B3
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_38(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x27EB
{
	func_39(iParam0);
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

void func_39(var uParam0)//Position - 0x285B
{
	Global_22283 = uParam0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
}

void func_40()//Position - 0x2881
{
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_22300 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
}

void func_41(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28BA
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_42(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x2910
{
	func_41(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_40();
	if (iParam7 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	func_39(uParam0);
	return func_25(uParam4, uParam5, iParam6, bParam10);
}

var func_43(var uParam0)//Position - 0x294E
{
	return uParam0;
}

void func_44()//Position - 0x2958
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_45();
	}
}

void func_45()//Position - 0x297E
{
	if (func_18())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_46()//Position - 0x2992
{
	if (func_47())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_20873)
				{
					if (!BitTest(Global_8800, 11))
					{
						func_60();
					}
				}
			}
		}
	}
}

int func_47()//Position - 0x29CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			if (Global_20873 == 0)
			{
				if (Global_8115 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22286 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919896))))
		{
			return 0;
		}
		if (Global_113017)
		{
			return 0;
		}
	}
	if (Global_79389)
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
	if (Global_4543362 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113969.f_14054.f_89)
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

int func_48(int iParam0, int iParam1, int iParam2)//Position - 0x2C18
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

int func_49(int iParam0, int iParam1)//Position - 0x2C8A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_50(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2CB4
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

void func_51()//Position - 0x2D17
{
	if (func_47())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!Global_20873)
				{
					if (BitTest(Global_8800, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_52()//Position - 0x2D53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

int func_53()//Position - 0x2D85
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

void func_54(int iParam0)//Position - 0x2DB1
{
	if (func_58())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_57())
		{
			func_55(1, 1);
		}
		else
		{
			func_55(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_27())
	{
		Global_20930.f_1 = 3;
	}
}

void func_55(bool bParam0, bool bParam1)//Position - 0x2E3B
{
	if (bParam0)
	{
		if (func_56(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

int func_56(int iParam0)//Position - 0x2EAF
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_57()//Position - 0x2F06
{
	return BitTest(Global_1956920, 5);
}

bool func_58()//Position - 0x2F14
{
	return BitTest(Global_1956920, 19);
}

void func_59()//Position - 0x2F23
{
	if (func_48(2, Global_20907, 0))
	{
		if (Global_23297 == 0)
		{
			if (Global_22292)
			{
				if (BitTest(Global_8801, 17))
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

void func_60()//Position - 0x2F54
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_61() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79389)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79389)
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
			if (!Global_20873)
			{
				if (Global_8115 != 128)
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
								if (Global_79389)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8800, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_61()//Position - 0x3078
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

void func_62()//Position - 0x309C
{
	if (Global_79389 == 0)
	{
		func_59();
	}
	if (iLocal_31 == 1)
	{
		func_54(0);
	}
	if (iLocal_28 == 0)
	{
		iLocal_28 = 1;
		Global_23299 = 1;
		if (func_49(Global_8115, Global_20930) == 0)
		{
			func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22428, "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_195" /* GXT: Unknown */, "CELL_195" /* GXT: Unknown */, 0);
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_22428, &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
			func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_20856 = 0.2f;
		if (Global_20918)
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
		}
		else
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
	if (Global_22339 == 1)
	{
		if (Global_20930.f_1 < 6)
		{
			Global_22339 = 0;
		}
		else
		{
			if (Global_20870 == 0)
			{
				if (func_48(2, Global_20899, 0))
				{
					Global_20856 = 0.19f;
					Global_22339 = 0;
					func_44();
					Global_23304 = 1;
					iLocal_30 = 1;
				}
			}
			if (func_48(2, Global_20900, 0))
			{
				Global_20856 = 0.19f;
				Global_22339 = 0;
				func_44();
				Global_23304 = 2;
			}
		}
	}
	else if (Global_23304 == 2)
	{
		if (Global_22287 == 0)
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_22286 = 6;
		}
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
	else if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_30 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20919, true);
		func_14();
		Global_20930.f_1 = Global_20932;
		func_8();
	}
}

void func_63()//Position - 0x32C9
{
	if (Global_21153 == 1)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
			{
				Global_21153 = 0;
			}
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Global_21153 = 0;
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Global_22286 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_33)
	{
		if (Global_21153 == 1)
		{
			Global_21153 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_23307 || Global_21153 == 1)
	{
		if (func_48(2, Global_20898, 0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (BitTest(Global_8800, 20))
					{
					}
					else
					{
						Global_20908 = 1;
						func_44();
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						Global_22335 = 1;
						Global_22286 = 6;
						MISC::CLEAR_BIT(&Global_8800, 27);
						if (!Global_22297)
						{
							MISC::SET_BIT(&Global_8801, 5);
						}
						func_14();
						Global_20930.f_1 = Global_20932;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 27);
		Global_22286 = 4;
		Global_22343 = 0;
		func_66();
		func_65();
		if (!Global_22299)
		{
			if (Global_23303 == 0)
			{
				if (!BitTest(Global_8802, 5))
				{
					AUDIO::START_PRELOADED_CONVERSATION();
				}
				MISC::CLEAR_BIT(&Global_8802, 5);
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21905.f_368, Global_21905.f_369);
			}
		}
		func_64();
	}
}

void func_64()//Position - 0x33F0
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

void func_65()//Position - 0x340E
{
	if (Global_22299)
	{
		if (Global_79389)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2738934.f_1847), 15);
				}
			}
		}
	}
}

void func_66()//Position - 0x345C
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		if (!Global_22294)
		{
			func_120(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_120(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_120(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22299)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300" /* GXT: CHAR_DEFAULT */);
				func_9("CELL_219" /* GXT: CONNECTED */);
				func_9("CELL_219" /* GXT: CONNECTED */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_49(Global_8115, Global_20930) == 0)
			{
				func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_219" /* GXT: CONNECTED */, "CELL_195" /* GXT: Unknown */, 0);
			}
			else
			{
				func_120(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_219" /* GXT: CONNECTED */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
			}
		}
		func_50(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_67()//Position - 0x35F7
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
	if (Global_22333 == 1)
	{
		if (func_47())
		{
			if (iLocal_107 > 4000)
			{
				if (BitTest(Global_8800, 14))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
					{
						func_44();
						Global_20929 = 2;
						func_66();
						func_65();
					}
				}
			}
		}
		else if (iLocal_107 > 2000)
		{
			if (BitTest(Global_8800, 14))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
				{
					func_44();
					Global_20929 = 2;
					func_66();
					func_65();
				}
			}
		}
	}
	if (iLocal_108 > 10000)
	{
		Global_20929 = 3;
	}
	if (Global_20929 == 2)
	{
		iLocal_28 = 0;
		Global_22286 = 4;
		func_60();
		Global_22343 = 0;
		func_66();
		func_65();
		if (!Global_22299)
		{
			if (Global_23303 == 0)
			{
				AUDIO::START_PRELOADED_CONVERSATION();
			}
			else
			{
				AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21905.f_368, Global_21905.f_369);
			}
		}
		func_64();
		Global_23302 = 0;
	}
	if (Global_22333 == 0)
	{
		if (Global_20929 == 3)
		{
			if (Global_22299)
			{
				func_69();
				func_54(0);
			}
			else
			{
				func_68();
				Global_23302 = 1;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_22286 = 6;
				func_14();
				Global_20930.f_1 = Global_20932;
				func_8();
			}
		}
	}
	else if (Global_20929 == 3)
	{
	}
}

void func_68()//Position - 0x3745
{
}

void func_69()//Position - 0x374D
{
	Global_2746025.f_2 = 1;
	Global_2746025.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2746025 = 0;
			Global_2746025.f_2 = 0;
		}
		else if (func_72(Global_2746025.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2746025.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2746025.f_20)))
				{
					func_70();
				}
			}
		}
		else
		{
			func_70();
		}
	}
	else
	{
		func_70();
	}
	if (Global_2746025.f_37)
	{
		func_54(0);
	}
	Global_2746025.f_37 = 0;
	Global_2746025.f_3 = 0;
}

void func_70()//Position - 0x37ED
{
	Global_2746025.f_1 = 0;
	Global_2746025 = 0;
	Global_2746025.f_2 = 0;
	Global_2746025.f_33 = -1;
	Global_2746025.f_34 = -1;
	StringCopy(&(Global_2746025.f_4), "", 64);
	StringCopy(&(Global_2746025.f_39[0 /*16*/]), "", 64);
	Global_2746025.f_38 = 0;
	Global_2746025.f_56 = 0;
	Global_2746025.f_57 = 0;
	Global_2746025.f_58 = -2;
	Global_2746025.f_3 = 0;
	func_71(&(Global_2746025.f_20));
}

void func_71(var uParam0)//Position - 0x3860
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

bool func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x38A8
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_73()//Position - 0x38B8
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
	while (iLocal_90 < Global_22282)
	{
		func_90();
		func_89();
		func_88();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_27 == 0)
		{
			cLocal_42 = { Global_21905.f_6[iLocal_90 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_21154[iVar2 /*6*/] = { Global_21905.f_6[iLocal_90 /*6*/] };
			StringConCat(&(Global_21154[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_21154[iVar2 /*6*/]), iVar1, 24);
			cLocal_36 = { Global_21154[iVar2 /*6*/] };
			StringConCat(&cLocal_36, "A", 24);
			if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36))
			{
				StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
				iVar3 = func_87(iVar13);
				iVar4 = func_86(iVar13);
				iVar5 = func_84(iVar13);
				bLocal_80 = func_83();
				bLocal_81 = func_82();
				bLocal_82 = func_81();
				bVar6 = func_80(iVar13);
				bVar7 = func_79(iVar13);
				bVar8 = func_78(iVar13);
				iVar12 = func_77(iVar13);
				bVar9 = func_76(iVar13);
				bVar10 = func_75(iVar13);
				bVar11 = func_74(iVar13);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21154[iVar2 /*6*/])))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_21154[iVar2 /*6*/]), &(Global_21905.f_187[iLocal_90 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21154[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_42), 64);
				iVar3 = func_87(0);
				iVar4 = func_86(0);
				iVar5 = func_84(0);
				bLocal_80 = func_83();
				bLocal_81 = func_82();
				bLocal_82 = func_81();
				bVar6 = func_80(0);
				bVar7 = func_79(0);
				bVar8 = func_78(0);
				iVar12 = func_77(0);
				bVar9 = func_76(0);
				bVar10 = func_75(0);
				bVar11 = func_74(0);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21905.f_6[iLocal_90 /*6*/]), iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				StringCopy(&(Global_21154[iVar2 /*6*/]), "END", 24);
				iLocal_27 = 1;
			}
			else
			{
				StringCopy(&(Global_21154[iVar2 /*6*/]), "END", 24);
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
	if (Global_22292 == 0)
	{
		AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_81);
		AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_82);
		AUDIO::START_SCRIPT_CONVERSATION(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, bLocal_80);
		Global_22286 = 4;
	}
}

int func_74(int iParam0)//Position - 0x3B37
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)//Position - 0x3B6C
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)//Position - 0x3BA1
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)//Position - 0x3BD6
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

int func_78(int iParam0)//Position - 0x3C4C
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x3C81
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)//Position - 0x3CB6
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83), iParam0 * 7, iParam0 * 7 + 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81()//Position - 0x3CE9
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 2, 3);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()//Position - 0x3D14
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 1, 2);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()//Position - 0x3D3F
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_71), 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84(int iParam0)//Position - 0x3D6A
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_85(sVar0);
}

int func_85(char* sParam0)//Position - 0x3D90
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

int func_86(int iParam0)//Position - 0x402F
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_85(sVar0);
}

int func_87(int iParam0)//Position - 0x4055
{
	char* sVar0;
	
	sVar0 = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64), iParam0 * 3, iParam0 * 3 + 1);
	return func_85(sVar0);
}

void func_88()//Position - 0x4079
{
	cLocal_83 = { Global_21905.f_6[iLocal_90 /*6*/] };
	StringConCat(&cLocal_83, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

void func_89()//Position - 0x40B2
{
	cLocal_71 = { Global_21905.f_6[iLocal_90 /*6*/] };
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

void func_90()//Position - 0x411F
{
	cLocal_64 = { Global_21905.f_6[iLocal_90 /*6*/] };
	StringConCat(&cLocal_64, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_64))
	{
		sLocal_70 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64);
		if (MISC::IS_STRING_NULL(sLocal_70))
		{
		}
	}
}

void func_91()//Position - 0x4158
{
	func_92();
	AUDIO::SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(bLocal_81);
	AUDIO::SET_CONVERSATION_AUDIO_PLACEHOLDER(bLocal_82);
	if (Global_23278)
	{
		AUDIO::PRELOAD_SCRIPT_CONVERSATION(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, bLocal_80);
		iLocal_34 = MISC::GET_GAME_TIMER();
	}
	else
	{
		AUDIO::START_SCRIPT_CONVERSATION(Global_21905.f_368, Global_21905.f_369, Global_21905.f_370, bLocal_80);
	}
	Global_22286 = 4;
}

void func_92()//Position - 0x41B3
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
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_22362))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_22362, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
		iVar13 = 0;
		if (func_102() || func_101())
		{
			if (Global_1835500 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_79389 || func_100(0))
		{
			if (Global_1835500 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_98())
		{
			iVar14 = 1;
		}
		if (func_97(MISC::GET_HASH_KEY(&Global_22362)))
		{
			iVar14 = 0;
			Global_2883586 = 0;
			iVar13 = 1;
		}
		if (((Global_22288 < 5 || Global_22288 == 10) || Global_22288 == 12) || Global_22288 == 13)
		{
			if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
			{
				HUD::REQUEST_ADDITIONAL_TEXT(&Global_22362, 7);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22362, 15);
				while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2883586 == 1) || iVar13 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_22362, 6);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22362, 14);
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
	func_96();
	func_95();
	func_94();
	func_93();
	Global_23296 = 0;
	while (iVar2 < 70 && iLocal_27 == 0)
	{
		cLocal_42 = { Global_21905 };
		StringConCat(&cLocal_42, "A", 24);
		Global_21154[iVar2 /*6*/] = { Global_21905 };
		StringConCat(&(Global_21154[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_21154[iVar2 /*6*/]), iVar1, 24);
		cLocal_36 = { Global_21154[iVar2 /*6*/] };
		StringConCat(&cLocal_36, "A", 24);
		if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_36))
		{
			StringCopy(&cLocal_48, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_36), 64);
			iVar3 = func_87(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4543272 == 0)
				{
				}
			}
			iVar4 = func_86(iVar2);
			iVar5 = func_84(iVar2);
			bLocal_80 = func_83();
			bLocal_81 = func_82();
			bLocal_82 = func_81();
			bVar6 = func_80(iVar2);
			bVar7 = func_79(iVar2);
			bVar8 = func_78(iVar2);
			iVar12 = func_77(iVar2);
			bVar9 = func_76(iVar2);
			bVar10 = func_75(iVar2);
			bVar11 = func_74(iVar2);
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_21154[iVar2 /*6*/])))
			{
				if (Global_23276 == 0 && Global_23282 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21154[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&(Global_21154[iVar2 /*6*/]), &Global_23284))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &(Global_21154[iVar2 /*6*/]), iVar4, iVar5, false, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
					Global_23296 = iVar2;
					if (Global_23282 == 1)
					{
						Global_23282 = 0;
					}
				}
			}
			else if (Global_23282 == 0 && Global_23276 == 0)
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
				iVar3 = func_87(iVar2);
				iVar4 = func_86(iVar2);
				iVar5 = func_84(iVar2);
				bLocal_80 = func_83();
				bLocal_81 = func_82();
				bLocal_82 = func_81();
				bVar6 = func_80(iVar2);
				bVar7 = func_79(iVar2);
				bVar8 = func_78(iVar2);
				iVar12 = func_77(iVar2);
				bVar9 = func_76(iVar2);
				bVar10 = func_75(iVar2);
				bVar11 = func_74(iVar2);
				AUDIO::ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_48, &Global_21905, iVar4, iVar5, true, bVar6, bVar7, bVar8, iVar12, bVar9, bVar10, bVar11);
			}
			iLocal_27 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_93()//Position - 0x45CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_21575[iVar0 /*10*/].f_7 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_21575[iVar0 /*10*/]) || Global_21575[iVar0 /*10*/] == 0)
			{
				AUDIO::ADD_PED_TO_CONVERSATION(iVar0, Global_21575[iVar0 /*10*/], &(Global_21575[iVar0 /*10*/].f_1));
			}
			if (Global_21575.f_161 == iVar0)
			{
				if ((Global_21575.f_162 != 0f && Global_21575.f_162.f_1 != 0f) && Global_21575.f_162.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					AUDIO::SET_POSITION_FOR_NULL_CONV_PED(Global_21575.f_161, Global_21575.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4543272 == 1)
	{
		Global_4543272 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4543091[iVar0 /*9*/].f_7 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_4543091[iVar0 /*9*/]) || Global_4543091[iVar0 /*9*/] == 0)
				{
					AUDIO::ADD_PED_TO_CONVERSATION(Global_4543091[iVar0 /*9*/].f_8, Global_4543091[iVar0 /*9*/], &(Global_4543091[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_94()//Position - 0x46DC
{
	cLocal_83 = { Global_21905 };
	StringConCat(&cLocal_83, "LF", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_83))
	{
		sLocal_89 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_83);
		if (MISC::IS_STRING_NULL(sLocal_89))
		{
		}
	}
}

void func_95()//Position - 0x470F
{
	cLocal_71 = { Global_21905 };
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

void func_96()//Position - 0x4776
{
	cLocal_64 = { Global_21905 };
	StringConCat(&cLocal_64, "SL", 24);
	if (HUD::DOES_TEXT_LABEL_EXIST(&cLocal_64))
	{
		sLocal_70 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&cLocal_64);
		if (MISC::IS_STRING_NULL(sLocal_70))
		{
		}
	}
}

int func_97(int iParam0)//Position - 0x47A9
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
			return 1;
		
		default:
	}
	return 0;
}

int func_98()//Position - 0x4C7E
{
	if (Global_2883694)
	{
		if (func_12(0))
		{
			if (Global_3407872 || func_99(0))
			{
				return 1;
			}
		}
	}
	if (Global_2883693)
	{
		if (func_12(0))
		{
			if (Global_3932160 || func_99(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_99(bool bParam0)//Position - 0x4CD1
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

var func_100(bool bParam0)//Position - 0x4CF9
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

bool func_101()//Position - 0x4D0A
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_102()//Position - 0x4D20
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_103()//Position - 0x4D36
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_102() || func_101())
	{
		if (Global_1835500 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_79389)
	{
		if (Global_1835500 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_98())
	{
		iVar1 = 1;
	}
	if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_22362))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_22362, "CT_AUD"))
		{
			Global_2883586 = 1;
		}
	}
	if (func_97(MISC::GET_HASH_KEY(&Global_22362)))
	{
		iVar1 = 0;
		Global_2883586 = 0;
		iVar0 = 1;
	}
	if (((Global_22288 < 5 || Global_22288 == 10) || Global_22288 == 12) || Global_22288 == 13)
	{
		if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
		{
			HUD::REQUEST_ADDITIONAL_TEXT(&Global_22362, 7);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22362, 15);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2883586 == 1) || iVar0 == 2)
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_22362, 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC(&Global_22362, 14);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION();
	func_93();
}

void func_104()//Position - 0x4E9B
{
	while (Global_20913 == 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_20913 = 0;
	if (BitTest(Global_8800, 20))
	{
		MISC::SET_BIT(&Global_8801, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8801, 1);
	}
	Global_20914 = 0;
	if (Global_22282 == 0)
	{
		if (!Global_22299)
		{
			func_92();
		}
	}
	else
	{
		func_73();
	}
	Global_21153 = 0;
	if (Global_22296)
	{
		if (Global_23303 == 0)
		{
			if (Global_22299 == 0)
			{
				iLocal_32 = 5000;
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21905.f_368, Global_21905.f_369);
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
		Global_21153 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_21153 == 1 && Global_22286 == 1) && SYSTEM::TIMERB() < iLocal_32)
		{
			SYSTEM::WAIT(0);
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Global_21153 = 0;
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				Global_22286 = 6;
			}
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
				{
					Global_21153 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_32)
		{
		}
		if (Global_22286 != 1)
		{
		}
		if (Global_21153 == 0)
		{
		}
	}
	Global_21153 = 0;
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 0) || Global_22286 != 1) || Global_20896 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
	else
	{
		if (Global_22294)
		{
			Global_23304 = 0;
			iLocal_30 = 0;
		}
		if (Global_22296 == 0)
		{
			if (Global_22337 == 0)
			{
				Global_20932 = Global_20930.f_1;
				Global_22337 = 1;
			}
			iLocal_28 = 0;
			if (Global_23303 == 0)
			{
				AUDIO::PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_21905.f_368, Global_21905.f_369);
				SYSTEM::WAIT(0);
				Global_22286 = 3;
				Global_21153 = 1;
				SYSTEM::SETTIMERB(0);
				MISC::SET_BIT(&Global_8800, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_21153 = 0;
				Global_22286 = 4;
			}
			Global_20929 = 0;
			if (Global_22297 == 1)
			{
				if (Global_20930.f_1 == 10)
				{
				}
				if (!Global_20930.f_1 == 9)
				{
					if (Global_20930.f_1 > 4)
					{
						if (Global_20913 == 0)
						{
							Global_20930.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_20930.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_20930.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_21153 == 1)
					{
						if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								Global_21153 = 0;
							}
						}
					}
				}
				if (Global_20930.f_1 == 6)
				{
				}
				if (Global_20930.f_1 == 10)
				{
				}
				if (Global_20930.f_1 == 3)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_22286 = 6;
					Global_20914 = 1;
					return;
				}
				Global_20930.f_1 = 9;
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
			while (Global_20930.f_1 != 9 && Global_20913 == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_21153 == 1)
				{
					if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
						{
							Global_21153 = 0;
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
						Global_23302 = 1;
						Global_20913 = 1;
					}
				}
			}
			if (!BitTest(Global_8800, 11))
			{
				if (func_47() == 0)
				{
					func_60();
				}
			}
			if (Global_20913 == 0)
			{
				if (!Global_23303 == 0)
				{
					Global_22343 = 0;
					func_66();
					func_65();
					if (!Global_22299)
					{
						if (Global_23303 == 0)
						{
							AUDIO::START_PRELOADED_CONVERSATION();
						}
						else
						{
							AUDIO::START_SCRIPT_PHONE_CONVERSATION(Global_21905.f_368, Global_21905.f_369);
						}
					}
					func_64();
				}
			}
			else
			{
				func_105();
				Global_20914 = 1;
			}
		}
		else
		{
			Global_20929 = 1;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (Global_20930.f_1 == 3)
					{
					}
				}
				else
				{
					MISC::CLEAR_BIT(&Global_8801, 21);
				}
			}
			if (Global_22337 == 0)
			{
				Global_20932 = Global_20930.f_1;
				Global_22337 = 1;
			}
			if (Global_20930.f_1 == 3)
			{
				Global_20930.f_1 = 4;
			}
			else
			{
				while (Global_20930.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_20930.f_1 == 6)
				{
				}
				Global_20930.f_1 = 9;
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
			while (Global_20930.f_1 != 9 && Global_20913 == 0)
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
						Global_23302 = 1;
						Global_20913 = 1;
						MISC::CLEAR_BIT(&Global_8801, 21);
					}
				}
			}
			if (Global_20913 == 0)
			{
				Global_22286 = 2;
			}
			else
			{
				func_105();
				Global_20914 = 1;
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

void func_105()//Position - 0x532B
{
	Global_21152 = 0;
	func_110();
}

void func_106()//Position - 0x533B
{
	float fVar0;
	
	fVar0 = func_107(Global_20883[Global_20875 /*3*/], Global_20876[Global_20875 /*3*/], Global_20890, Global_20861, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_23300 == 0)
		{
			HUD::DISPLAY_RADAR(true);
		}
		iLocal_30 = 0;
	}
}

float func_107(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x5383
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4543363 == 0)
	{
		if (BitTest(Global_8800, 14) && Global_20930.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_20883[Global_20875 /*3*/].f_1 == Var0.f_1)
			{
				Global_4543363 = 1;
			}
		}
	}
	if (func_47() && Global_4543363 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_109((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
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
		Global_20858 = { func_108(Param0, Param3, fVar4) };
		Global_20861 = { func_108(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20858 = { Param3 };
		Global_20861 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20861, 0);
	return fVar3;
}

Vector3 func_108(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x5492
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_109(float fParam0, float fParam1, float fParam2)//Position - 0x54AC
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

void func_110()//Position - 0x54D3
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

bool func_111()//Position - 0x552A
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_112(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x553F
{
	func_41(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_113(sParam2, iParam3, 0);
}

int func_113(char* sParam0, int iParam1, bool bParam2)//Position - 0x558D
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_110();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_36();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_29();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_28())
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
				if (!Global_79389)
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
			if (func_27())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_26();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_52();
		func_114();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_110();
	}
	return 0;
}

void func_114()//Position - 0x585B
{
	if (!func_115())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_115()//Position - 0x5892
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_118())
	{
		return 0;
	}
	if (func_116(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_116(int iParam0)//Position - 0x58F5
{
	return func_117(iParam0, 20);
}

var func_117(int iParam0, int iParam1)//Position - 0x5905
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_118()//Position - 0x591D
{
	return -1;
}

int func_119()//Position - 0x5926
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x5948
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

