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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_51[4] = { 0, 0, 0, 0 };
	int iLocal_56[4] = { 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	bool bLocal_80 = 0;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<57> Var0;
	int iVar314;
	
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	fLocal_37 = 0f;
	fLocal_38 = 0f;
	fLocal_84 = 0.95f;
	fLocal_85 = 0.07f;
	fLocal_86 = 0.755f;
	iLocal_95 = 9999;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_113911 = MISC::GET_GAME_TIMER();
	func_138();
	func_135();
	func_133();
	Global_20930.f_1 = 3;
	Global_20918 = 0;
	Global_21147 = 0;
	Global_23321 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20930.f_1 > 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 353 /*INPUT_VEH_PARACHUTE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 353 /*INPUT_VEH_PARACHUTE*/, true);
		}
		if (iLocal_93 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_93 = 1;
				iLocal_95 = func_129(12927, -1);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_93 == 1)
			{
				switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
				{
					case -1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
					
					case 0:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
					
					case 1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
						break;
					
					case 2:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
						break;
					
					case 3:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
						break;
					
					case 4:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
						break;
					
					case 5:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
						break;
					
					case 6:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
						break;
					
					case 7:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
						break;
					
					case 8:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
						break;
					
					case 9:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
						break;
					
					case 10:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
						break;
					
					case 11:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
						break;
					
					case 12:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
						break;
				}
				if (Global_2738934.f_5078)
				{
					SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
				}
				iLocal_93 = 2;
			}
			if (iLocal_93 == 2)
			{
				iLocal_94 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
				switch (iLocal_94)
				{
					case 3:
						break;
					
					case 0:
						if (SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0)
						{
							SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &Var0);
							if (Var0.f_1 != iLocal_95)
							{
								Global_4541818 = 1;
							}
							else
							{
								Global_4541818 = 0;
							}
						}
						iLocal_93 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4541818 = 0;
						iLocal_93 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4541818 = 0;
			iLocal_93 = 0;
		}
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_20930.f_1 == 6)
				{
					Global_20930.f_1 = 3;
				}
			}
		}
		if (func_128(146))
		{
			if (Global_79389 == 0)
			{
				iVar314 = func_94(0, 0, 119);
				if (iVar314 != 0)
				{
					func_92(iVar314);
				}
				else
				{
					func_91();
				}
				func_87(0);
			}
		}
		if (Global_2738934.f_4664 == 1)
		{
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 3;
			}
		}
		if (Global_79389 == 1)
		{
			if (Global_20930.f_1 == 3)
			{
				if (BitTest(Global_4543084, 15))
				{
					MISC::SET_BIT(&Global_4543084, 14);
					SYSTEM::WAIT(0);
					while (!func_85(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4543084, 14);
					MISC::CLEAR_BIT(&Global_4543084, 15);
				}
				if (BitTest(Global_4543084, 16))
				{
					MISC::SET_BIT(&Global_4543084, 14);
					SYSTEM::WAIT(0);
					while (!func_85(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4543084, 14);
					MISC::CLEAR_BIT(&Global_4543084, 16);
					MISC::CLEAR_BIT(&Global_4543084, 27);
				}
				if (BitTest(Global_4543084, 27))
				{
					MISC::SET_BIT(&Global_4543084, 14);
					SYSTEM::WAIT(0);
					while (!func_85(23, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4543084, 14);
					MISC::CLEAR_BIT(&Global_4543084, 16);
					MISC::CLEAR_BIT(&Global_4543084, 27);
				}
				if (BitTest(Global_4543084, 29))
				{
					MISC::SET_BIT(&Global_4543084, 14);
					SYSTEM::WAIT(0);
					while (!func_85(1, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_BIT(&Global_4543084, 14);
					MISC::CLEAR_BIT(&Global_4543084, 29);
				}
			}
		}
		if (Global_79389 == 0)
		{
			if (BitTest(Global_4543084, 11))
			{
				if ((Global_20930.f_1 != 10 && Global_20930.f_1 != 9) || func_84() == 0)
				{
					MISC::CLEAR_BIT(&Global_4543084, 11);
					MISC::SET_BIT(&Global_8801, 11);
				}
			}
			else if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
			{
				if (func_84())
				{
					MISC::SET_BIT(&Global_4543084, 11);
					MISC::SET_BIT(&Global_8801, 11);
				}
			}
			if (BitTest(Global_4543084, 12))
			{
				MISC::CLEAR_BIT(&Global_4543084, 12);
				MISC::SET_BIT(&Global_8801, 11);
			}
		}
		else if (BitTest(Global_4543084, 12))
		{
			if ((Global_23349 == 0 || Global_23350 == 0) && !Global_23351)
			{
				MISC::CLEAR_BIT(&Global_4543084, 12);
				MISC::SET_BIT(&Global_8801, 11);
			}
		}
		else if (Global_23351 || (Global_23349 > 0 && Global_23350 == 1))
		{
			MISC::SET_BIT(&Global_4543084, 12);
			MISC::SET_BIT(&Global_8801, 11);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_PUSH_TO_TALK_ACTIVE())
			{
				if (!BitTest(Global_4543084, 19))
				{
					MISC::SET_BIT(&Global_4543084, 19);
					MISC::SET_BIT(&Global_8801, 11);
				}
			}
			else if (BitTest(Global_4543084, 19))
			{
				MISC::CLEAR_BIT(&Global_4543084, 19);
				MISC::SET_BIT(&Global_8801, 11);
			}
		}
		if (iLocal_91 == 0)
		{
			if (BitTest(Global_8800, 25))
			{
				STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_90, -1);
				iLocal_88 = MISC::GET_GAME_TIMER();
				iLocal_91 = 1;
			}
		}
		else if (!BitTest(Global_8800, 25))
		{
			STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_90, -1);
			iLocal_89 = MISC::GET_GAME_TIMER();
			iLocal_91 = 0;
			STATS::STAT_SET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), (iLocal_90 + (iLocal_89 - iLocal_88)), true);
		}
		func_83();
		func_82();
		func_81();
		func_79();
		func_61();
		func_60();
		func_59();
		if (BitTest(Global_8801, 21))
		{
			if (!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE())
			{
				MISC::CLEAR_BIT(&Global_8801, 21);
			}
		}
		if (BitTest(Global_8800, 7))
		{
			func_54();
			MISC::CLEAR_BIT(&Global_8800, 7);
		}
		if (BitTest(Global_8800, 0))
		{
			func_53();
		}
		if (BitTest(Global_4543084, 0))
		{
			func_52();
		}
		if (BitTest(Global_8801, 11))
		{
			Global_9504 = 0;
			if (BitTest(Global_8800, 25))
			{
				Global_9504++;
			}
			if (BitTest(Global_4543084, 11))
			{
				if (Global_79389 == 0)
				{
					Global_9504++;
				}
			}
			if (BitTest(Global_4543084, 28))
			{
				if (Global_79389 == 1)
				{
					Global_9504++;
				}
			}
			if (BitTest(Global_4543084, 12))
			{
				if (Global_79389 && (Global_23350 || Global_23351))
				{
					Global_9504++;
				}
			}
			if (BitTest(Global_4543084, 19))
			{
				Global_9504++;
			}
			if (Global_9504 == 0)
			{
				MISC::CLEAR_BIT(&Global_8801, 11);
				iLocal_39 = 0;
			}
			else
			{
				iLocal_39 = 1;
			}
		}
		if (!func_51())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_20930.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_79389)
								{
									func_36();
								}
								else
								{
									func_36();
								}
							}
						}
					}
				}
			}
			if (Global_20930.f_1 == 4)
			{
				if (BitTest(Global_8801, 21))
				{
					func_36();
				}
			}
			func_23();
		}
		else if (func_16())
		{
		}
		switch (Global_23321)
		{
			case 0:
				func_15();
				if (Global_23323 == 1)
				{
					func_14();
				}
				break;
			
			case 1:
				func_13();
				break;
			
			case 2:
				func_12();
				break;
			
			case 3:
				func_11();
				break;
			
			case 4:
				func_10();
				break;
			
			case 5:
				func_9();
				break;
			
			case 14:
				func_14();
				break;
			
			case 6:
				if (Global_23323 == 1)
				{
					func_14();
				}
				if (Global_23324 == 1)
				{
					Global_23321 = 9;
					Global_23324 = 0;
				}
				break;
			
			case 8:
				func_8();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x850
{
	iLocal_68 = GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_23325);
	switch (iLocal_68)
	{
		case 0:
			Global_23321 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			MISC::SET_BIT(&Global_8801, 15);
			func_14();
			break;
	}
}

void func_2()//Position - 0x894
{
	if (GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_23325))
	{
		Global_23321 = 13;
	}
	else
	{
		func_14();
	}
}

void func_3()//Position - 0x8B2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_66 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_64);
	}
	else
	{
		iLocal_65 = MISC::GET_GAME_TIMER();
		iLocal_66 = (iLocal_65 - iLocal_63);
	}
	if (iLocal_66 > 3000)
	{
		HUD::BUSYSPINNER_OFF();
	}
	if (iLocal_66 > 3200)
	{
		Global_23321 = 6;
	}
}

void func_4()//Position - 0x8F5
{
	iLocal_68 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
	switch (iLocal_68)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_64 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_63 = MISC::GET_GAME_TIMER();
			}
			Global_23321 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_5()//Position - 0x949
{
	Global_23326 = -1;
	if (Global_79389)
	{
		if (func_7())
		{
			GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Global_4718592.f_178456, Global_4718592.f_178456.f_1);
		}
		if (func_6(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_444), 0))
		{
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
		}
		else
		{
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
		}
	}
	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_23326))
	{
		Global_23321 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278" /* GXT: Saving Photo to Gallery */);
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_14();
	}
}

bool func_6(var uParam0, int iParam1)//Position - 0x9C1
{
	return BitTest(*uParam0, iParam1);
}

bool func_7()//Position - 0x9CF
{
	return BitTest(Global_4718592.f_178389, 12);
}

void func_8()//Position - 0x9E4
{
	iLocal_68 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
	switch (iLocal_68)
	{
		case 0:
			Global_23321 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_9()//Position - 0xA1E
{
	iLocal_68 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_69);
	switch (iLocal_68)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, true);
			Global_23321 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_69 == 3)
			{
				MISC::SET_BIT(&Global_8801, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_23321 = 6;
			}
			if (Global_23321 == 5)
			{
				if (iLocal_69 == 0)
				{
					Global_23321 = 4;
					iLocal_69 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_23321 == 5)
			{
				if (iLocal_69 == 1)
				{
					Global_23321 = 4;
					iLocal_69 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_23321 == 5)
			{
				if (iLocal_69 == 2)
				{
					Global_23321 = 4;
					iLocal_69 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_10()//Position - 0xAD2
{
	if (GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_69))
	{
		Global_23321 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_8801, 15);
		func_14();
	}
}

void func_11()//Position - 0xAF7
{
	iLocal_68 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
	switch (iLocal_68)
	{
		case 0:
			Global_23321 = 4;
			iLocal_69 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20930.f_1 = 3;
			func_14();
			break;
	}
}

void func_12()//Position - 0xB38
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
	{
		Global_23321 = 3;
	}
}

void func_13()//Position - 0xB4B
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_23321 = 2;
	}
}

void func_14()//Position - 0xB5F
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_23322 = 0;
	Global_23323 = 0;
	Global_23324 = 0;
	Global_23321 = 0;
}

void func_15()//Position - 0xB89
{
	if (Global_23322)
	{
		Global_23321 = 1;
		MISC::CLEAR_BIT(&Global_8801, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_16()//Position - 0xBA9
{
	char* sVar0;
	
	if ((func_22(2, Global_20897, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				sVar0 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A" /* GXT: ALERT! */);
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH" /* GXT: You haven't paid your phone bill. Phone use may be impeded. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, sVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_21(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
		Global_23345 = 0;
		Global_23346 = 0;
		if (HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() == Global_23343 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() != -1)
		{
			Global_23345 = Global_23344;
			iLocal_72 = MISC::GET_GAME_TIMER();
			iLocal_74 = 0;
			iLocal_75 = 0;
			while (((func_20(2, Global_20897) && iLocal_74 < 250) && Global_21153 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_9504 > 0)
				{
					func_17();
				}
				SYSTEM::WAIT(0);
				iLocal_73 = MISC::GET_GAME_TIMER();
				iLocal_74 = (iLocal_73 - iLocal_72);
				if (Global_9504 > 0)
				{
					func_17();
				}
			}
			if ((func_20(2, Global_20897) && Global_21153 == 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_75 = 1;
			}
			if (Global_21153 == 0)
			{
				if (iLocal_75 == 1)
				{
					Global_23346 = 1;
					Global_23345 = Global_23344;
					if (Global_23345 == 1)
					{
					}
					if (Global_23345 == 2)
					{
					}
					if (Global_23345 == 3)
					{
					}
					if (Global_23345 == 0)
					{
					}
					if (Global_23345 == 4)
					{
					}
				}
				else
				{
					Global_23345 = 0;
				}
			}
			else
			{
				Global_23345 = 0;
			}
		}
		else
		{
			Global_23345 = 0;
		}
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_23345 = 0;
			Global_23346 = 0;
			return 0;
		}
	}
	return 0;
}

void func_17()//Position - 0xD62
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_23351)
	{
		fLocal_85 = -0.055f;
		fLocal_86 = 0.745f;
		fLocal_81 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_87 = ((100f * fLocal_84) - (100f * fLocal_81));
		fLocal_82 = (fLocal_85 + (fLocal_87 * 0.005f));
		fLocal_83 = (fLocal_86 - (fLocal_87 * 0.005f));
		if (!func_19())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			if (Global_2647061.f_1593)
			{
				bLocal_36 = false;
			}
			else if (BitTest(Global_8800, 13))
			{
				if (BitTest(Global_4543084, 19))
				{
					bLocal_36 = false;
				}
				else
				{
					bLocal_36 = true;
				}
			}
			else
			{
				bLocal_36 = false;
			}
		}
		else if (Global_2647061.f_1593 || BitTest(Global_8800, 13))
		{
			bLocal_36 = true;
		}
		else
		{
			bLocal_36 = false;
		}
		if (func_51())
		{
			bLocal_36 = true;
		}
		if (BitTest(Global_4543084, 28))
		{
			iVar0 = 125;
			if (bLocal_36 == 1)
			{
				bLocal_36 = false;
			}
		}
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_36)
				{
					if (!func_18())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
								if (MISC::IS_PC_VERSION() && Global_2647061.f_1593)
								{
									fLocal_85 = 0.165f;
									fLocal_86 = 0.755f;
								}
								else
								{
									fLocal_85 = 0.07f;
									fLocal_86 = 0.755f;
								}
								fLocal_81 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								fLocal_87 = ((100f * fLocal_84) - (100f * fLocal_81));
								fLocal_82 = (fLocal_85 + (fLocal_87 * 0.005f));
								fLocal_83 = (fLocal_86 - (fLocal_87 * 0.005f));
								if (!func_19())
								{
									if (MISC::IS_PC_VERSION())
									{
										GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
									}
									if (Global_2647061.f_1593)
									{
										fLocal_37 = 0.09f;
										fLocal_38 = -0.25f;
										if (MISC::IS_PC_VERSION())
										{
											if (BitTest(Global_4543084, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_35, (fLocal_82 + fLocal_37), (fLocal_83 + fLocal_38), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_35, fLocal_82, fLocal_83, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_18()//Position - 0xFB1
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xFCE
{
	if (BitTest(Global_8802, 3))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, int iParam1)//Position - 0xFE6
{
	if (PAD::IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
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

int func_21(int iParam0)//Position - 0x102C
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2)//Position - 0x1089
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

void func_23()//Position - 0x10FB
{
	switch (Global_20930.f_1)
	{
		case 4:
			if (BitTest(Global_8801, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_20927))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_20927))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_9504 > 0)
								{
									func_17();
								}
							}
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_20927 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					func_35(0);
				}
				if (Global_22296 || Global_22297)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_20927))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_9504 > 0)
								{
									func_17();
								}
							}
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_20927 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) && Global_20913 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_9504 > 0)
						{
							func_17();
						}
					}
					if (Global_20913 == 0)
					{
						Global_20930.f_1 = 9;
						func_24();
					}
				}
				else
				{
					bLocal_80 = false;
					if (Global_79389 && (Global_23348 || Global_1882108.f_5))
					{
						bLocal_80 = true;
					}
					if (((Global_113969.f_14054[Global_20930 /*20*/].f_18 == 1 || Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1) || bLocal_80 == 1) || Global_23345 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) && Global_20913 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_9504 > 0)
							{
								func_17();
							}
						}
						if (Global_20913 == 0)
						{
							if (Global_20930.f_1 > 3)
							{
								Global_20930.f_1 = 6;
								if (Global_23345 == 0)
								{
									if (bLocal_80)
									{
									}
									else if (Global_79389 == 0)
									{
										if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
										{
											func_85(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_23345 == 3)
									{
									}
									if (Global_23345 == 1)
									{
									}
									if (Global_23345 == 2)
									{
									}
									if (Global_23345 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911) && Global_20913 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_9504 > 0)
							{
								func_17();
							}
						}
						if (Global_20913 == 0)
						{
							if (Global_20930.f_1 > 3)
							{
								if (Global_22296 || Global_22297)
								{
									Global_20930.f_1 = 9;
								}
								else
								{
									Global_20930.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_24()//Position - 0x1384
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
			func_34(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_31(Global_9405);
			if (Global_9405 == 1)
			{
				func_34(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_34(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_30(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_30(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_30(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_30(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_34(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
				func_34(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_34(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_30(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_29();
				func_34(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_28("CELL_217" /* GXT: INCOMING CALL */);
					func_28("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_27(Global_8115, Global_20930) == 0)
				{
					func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_34(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_34(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_29();
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_28("CELL_219" /* GXT: CONNECTED */);
					func_28("CELL_219" /* GXT: CONNECTED */);
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
					if (func_27(Global_8115, Global_20930) == 0)
					{
						func_34(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar1, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_34(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_34(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_25();
			break;
		
		default:
			break;
	}
}

void func_25()//Position - 0x1980
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_26();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_30(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_30(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_26()//Position - 0x1B0E
{
	if (Global_79389)
	{
		func_30(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
}

int func_27(int iParam0, int iParam1)//Position - 0x1B3F
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_28(char* sParam0)//Position - 0x1B69
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_29()//Position - 0x1B7B
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

void func_30(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1DF2
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
		func_28(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_28(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_28(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_28(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_28(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_31(int iParam0)//Position - 0x1EA5
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
	func_33();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_32(14))
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
								func_28(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&(Global_8807[iVar1 /*15*/]));
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
								func_28(&(Global_8807[iVar1 /*15*/]));
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
								func_28(&(Global_8807[iVar1 /*15*/]));
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
								func_28(&(Global_8807[iVar1 /*15*/]));
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
								func_28(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_30(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_32(int iParam0)//Position - 0x2428
{
	return Global_44042 == iParam0;
}

void func_33()//Position - 0x2436
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_34(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2459
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

void func_35(bool bParam0)//Position - 0x24BC
{
	if (bParam0)
	{
		if (Global_20930.f_1 == 9)
		{
			Global_21145 = 1;
		}
	}
	else
	{
		Global_21145 = 0;
	}
}

void func_36()//Position - 0x24DE
{
	if (func_16() || BitTest(Global_8800, 8))
	{
		MISC::CLEAR_BIT(&Global_8800, 8);
		func_44();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_43())
				{
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (BitTest(Global_8801, 21))
					{
						MISC::CLEAR_BIT(&Global_8801, 21);
					}
					if (Global_21153 == 1)
					{
						Global_21153 = 0;
					}
					switch (Global_20930.f_1)
					{
						case 3:
							Global_20930.f_1 = 4;
							if (iLocal_92 == 0)
							{
								func_37();
								iLocal_92 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_21143 = 1;
				}
			}
		}
	}
}

void func_37()//Position - 0x2580
{
	if (Global_4541818 == 1)
	{
		if (!func_42())
		{
			return;
		}
		if (func_38(PLAYER::PLAYER_ID()))
		{
			if (MISC::GET_PROFILE_SETTING(803) == 1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_EMAIL_EVENT" /* GXT: You have received an Eyefind message. Check your Eyefind inbox from the GTAO Eyefind website via a laptop or your cellphone's Internet application. */);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
			}
			else if (MISC::GET_PROFILE_SETTING(803) != 1)
			{
			}
		}
	}
}

int func_38(int iParam0)//Position - 0x25CE
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || func_41())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || func_40())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_39(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_39(int iParam0)//Position - 0x26A7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_40()//Position - 0x26BE
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_41()//Position - 0x26D4
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

int func_42()//Position - 0x26EA
{
	if (func_41())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (func_40())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			return 1;
		}
	}
	return 0;
}

int func_43()//Position - 0x2731
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
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

void func_44()//Position - 0x279C
{
	if (func_32(14))
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
		Global_20930 = func_45();
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

var func_45()//Position - 0x283E
{
	func_46();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_46()//Position - 0x2857
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_49(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_48(PLAYER::PLAYER_PED_ID());
			if (func_47(iVar0) && (!func_32(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_47(Global_113969.f_2366.f_539.f_4321))
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

bool func_47(int iParam0)//Position - 0x2954
{
	return iParam0 < 3;
}

int func_48(int iParam0)//Position - 0x2960
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)//Position - 0x299D
{
	if (func_47(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)//Position - 0x29C2
{
	return Global_2169[iParam0 /*29*/];
}

int func_51()//Position - 0x29D1
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52()//Position - 0x29F8
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	MISC::CLEAR_BIT(&Global_4543084, 0);
	if (Global_23347 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_23347))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_23347))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_23347), 64);
				Global_23355[Global_23353] = Global_23347;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_23355[Global_4543068] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_23355[Global_4543068] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_4541819[Global_4543068 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_23355[Global_4543068] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4541819[Global_4543068 /*104*/].f_32 == 4 || Global_4541819[Global_4543068 /*104*/].f_32 == 5) || Global_4541819[Global_4543068 /*104*/].f_32 == 6) || Global_4541819[Global_4543068 /*104*/].f_32 == 7) || Global_4541819[Global_4543068 /*104*/].f_32 == 8) || Global_4541819[Global_4543068 /*104*/].f_32 == 9) || Global_4541819[Global_4543068 /*104*/].f_32 == 10) || Global_4541819[Global_4543068 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_4541819[Global_4543068 /*104*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541819[Global_4543068 /*104*/]));
		while (iVar16 < Global_4541819[Global_4543068 /*104*/].f_49)
		{
			switch (Global_4541819[Global_4543068 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2738934.f_1777[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928452[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928493[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928514[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928531[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928544[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928557[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928570[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_4541819[Global_4543068 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar17, 0);
		MISC::SET_BIT(&Global_4543084, 1);
		Global_23344 = 1;
		Global_23343 = iLocal_62;
		Global_23347 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_4541819[Global_4543068 /*104*/]));
		switch (Global_4541819[Global_4543068 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_33));
				if (Global_4541819[Global_4543068 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_67));
				}
				if ((Global_4541819[Global_4543068 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541819[Global_4543068 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541819[Global_4543068 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541819[Global_4543068 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541819[Global_4543068 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541819[Global_4543068 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541819[Global_4543068 /*104*/].f_49);
				if (Global_4541819[Global_4543068 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_67));
				}
				if ((Global_4541819[Global_4543068 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_4541819[Global_4543068 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541819[Global_4543068 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541819[Global_4543068 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541819[Global_4543068 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541819[Global_4543068 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541819[Global_4543068 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4541819[Global_4543068 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_9488, 64);
			StringConCat(&cVar33, "</C>", 64);
			iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar33, 0);
			MISC::SET_BIT(&Global_4543084, 1);
			Global_23344 = 1;
			Global_23343 = iLocal_62;
		}
		else
		{
			StringCopy(&cVar49, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_4541819[Global_4543068 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4541819[Global_4543068 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar65, 0);
			}
			else
			{
				iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 2, &cVar49, 0);
			}
			MISC::SET_BIT(&Global_4543084, 1);
			Global_23344 = 1;
			Global_23343 = iLocal_62;
			Global_23347 = 0;
		}
	}
	Global_4541819[Global_4543068 /*104*/].f_16 = iLocal_62;
}

void func_53()//Position - 0x3042
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, 0);
}

void func_54()//Position - 0x30BF
{
	if (BitTest(Global_8800, 1))
	{
		func_57();
		func_55();
		Global_113969.f_14054[Global_20930 /*20*/].f_18 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_51[Global_20930] = NETWORK::GET_NETWORK_TIME();
			iLocal_41[Global_20930] = 1;
		}
		else if (!BitTest(Global_8800, 10))
		{
			iLocal_46[Global_20930] = MISC::GET_GAME_TIMER();
			iLocal_41[Global_20930] = 1;
		}
		else
		{
			iLocal_46[0] = MISC::GET_GAME_TIMER();
			iLocal_46[2] = MISC::GET_GAME_TIMER();
			iLocal_46[1] = MISC::GET_GAME_TIMER();
			iLocal_41[0] = 1;
			iLocal_41[2] = 1;
			iLocal_41[1] = 1;
		}
		MISC::CLEAR_BIT(&Global_8800, 1);
	}
}

void func_55()//Position - 0x3158
{
	func_44();
	if (Global_79389)
	{
		Global_113969.f_14054[3 /*20*/].f_10 = func_129(1198, -1);
	}
	if (Global_113969.f_14054[Global_20930 /*20*/].f_10 == 1)
	{
		if (!func_56(0))
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 2000, 100);
		}
	}
}

int func_56(int iParam0)//Position - 0x31A4
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

void func_57()//Position - 0x31FB
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	char cVar18[64];
	char cVar34[64];
	char cVar50[64];
	char cVar66[64];
	
	if (Global_23347 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_23347))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_23347))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_23347), 64);
				Global_23355[Global_23353] = Global_23347;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_23355[Global_23353] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_23355[Global_23353] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_113969.f_14144[Global_23353 /*104*/].f_17 /*29*/].f_7)), 64);
		if (Global_113969.f_14144[Global_23353 /*104*/].f_17 == 159)
		{
			StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */), 64);
		}
		Global_23355[Global_23353] = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if ((((((((Global_113969.f_14144[Global_23353 /*104*/].f_32 == 4 || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 5) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 6) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 7) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 8) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 9) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 10) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 11) || Global_113969.f_14144[Global_23353 /*104*/].f_32 == 12)
	{
		iVar16 = 0;
		iVar17 = func_58(9, Global_113969.f_14144[Global_23353 /*104*/].f_49);
		switch (iVar17)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /* GXT: ~a~ ~a~. */);
				break;
			
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
				break;
			
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
				break;
			
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
			
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
				break;
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[Global_23353 /*104*/]));
		while (iVar16 < iVar17)
		{
			switch (Global_113969.f_14144[Global_23353 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2738934.f_1777[iVar16 /*4*/]));
					break;
				
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928452[iVar16 /*4*/]));
					break;
				
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928493[iVar16 /*4*/]));
					break;
				
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928514[iVar16 /*4*/]));
					break;
				
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928531[iVar16 /*4*/]));
					break;
				
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928544[iVar16 /*4*/]));
					break;
				
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928557[iVar16 /*4*/]));
					break;
				
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928570[iVar16 /*4*/]));
					break;
				
				case 12:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928583[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar18, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_113969.f_14144[Global_23353 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar18, 0);
		Global_23344 = 3;
		Global_23343 = iLocal_62;
		Global_23347 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Global_113969.f_14144[Global_23353 /*104*/]));
		switch (Global_113969.f_14144[Global_23353 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_33));
				if (Global_113969.f_14144[Global_23353 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
				}
				if ((Global_113969.f_14144[Global_23353 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[Global_23353 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[Global_23353 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[Global_23353 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[Global_23353 /*104*/].f_49);
				break;
			
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[Global_23353 /*104*/].f_49);
				if (Global_113969.f_14144[Global_23353 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), "NULL"))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
				}
				if ((Global_113969.f_14144[Global_23353 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[Global_23353 /*104*/].f_67)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_67));
					}
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[Global_23353 /*104*/].f_83)))
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[Global_23353 /*104*/].f_83));
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[Global_23353 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_113969.f_14144[Global_23353 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar34, "<C>", 64);
			StringConCat(&cVar34, &Global_9488, 64);
			StringConCat(&cVar34, "</C>", 64);
			iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar34, 0);
			Global_23344 = 3;
			Global_23343 = iLocal_62;
		}
		else
		{
			StringCopy(&cVar50, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_113969.f_14144[Global_23353 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_113969.f_14144[Global_23353 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar66, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar66, &cVar50, 64);
				iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar66, 0);
			}
			else
			{
				iLocal_62 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 1, &cVar50, 0);
			}
			Global_23344 = 3;
			Global_23343 = iLocal_62;
			Global_23347 = 0;
		}
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_16 = iLocal_62;
}

int func_58(int iParam0, int iParam1)//Position - 0x38C7
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	else if (iParam1 < iParam0)
	{
		return iParam1;
	}
	return iParam0;
}

void func_59()//Position - 0x38EC
{
	if (BitTest(Global_8800, 19))
	{
		MISC::CLEAR_BIT(&Global_8800, 19);
		func_44();
		Global_113969.f_14054[3 /*20*/].f_18 = 0;
		Global_113969.f_14054[3 /*20*/].f_17 = 0;
	}
}

void func_60()//Position - 0x3924
{
	if (iLocal_41[Global_20930] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_61 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_51[Global_20930]);
		}
		else
		{
			iLocal_56[Global_20930] = MISC::GET_GAME_TIMER();
			iLocal_61 = (iLocal_56[Global_20930] - iLocal_46[Global_20930]);
		}
		if (iLocal_61 > 300000)
		{
			Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
			Global_113969.f_14054[Global_20930 /*20*/].f_17 = 0;
			iLocal_41[Global_20930] = 0;
		}
	}
}

void func_61()//Position - 0x399D
{
	int iVar0;
	
	func_44();
	if (Global_79389 == 0)
	{
		if (!func_51())
		{
			if (iLocal_67 == 0)
			{
				if ((Global_113969.f_14144[21 /*104*/].f_24 != 0 || Global_113969.f_14144[22 /*104*/].f_24 != 0) || Global_113969.f_14144[23 /*104*/].f_24 != 0)
				{
					switch (Global_20930)
					{
						case 0:
							if (Global_113969.f_14144[21 /*104*/].f_24 != 0)
							{
								iLocal_40 = 21;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 1:
							if (Global_113969.f_14144[22 /*104*/].f_24 != 0)
							{
								iLocal_40 = 22;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 2:
							if (Global_113969.f_14144[23 /*104*/].f_24 != 0)
							{
								iLocal_40 = 23;
								iLocal_67 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_67 = 0;
				iVar0 = 0;
				func_44();
				if (iLocal_40 == 21 && Global_20930 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_40 == 22 && Global_20930 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_40 == 23 && Global_20930 != 2)
				{
					iVar0 = 1;
				}
				if (Global_113969.f_14144[iLocal_40 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_32(14))
					{
						if (func_64(Global_113969.f_14144[iLocal_40 /*104*/].f_17, &(Global_113969.f_14144[iLocal_40 /*104*/]), Global_113969.f_14144[iLocal_40 /*104*/].f_24, Global_113969.f_14144[iLocal_40 /*104*/].f_25, Global_113969.f_14144[iLocal_40 /*104*/].f_26, Global_113969.f_14144[iLocal_40 /*104*/].f_29, 0, 1, Global_113969.f_14144[iLocal_40 /*104*/].f_31, Global_113969.f_14144[iLocal_40 /*104*/].f_30))
						{
							Global_113969.f_14144[iLocal_40 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_78 == 0)
			{
				if (Global_9476[Global_20930])
				{
					iLocal_78 = 1;
					iLocal_79 = Global_20930;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_76 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_70 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_77 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_76);
				}
				else
				{
					iLocal_71 = MISC::GET_GAME_TIMER();
					iLocal_77 = (iLocal_71 - iLocal_70);
				}
				if (iLocal_77 > 7000)
				{
					if (func_62(0))
					{
						Global_9410[1 /*6*/] = { Global_9459[Global_20930 /*4*/] };
						Global_9486 = Global_9481[Global_20930];
						Global_9476[Global_20930] = 0;
						iLocal_78 = 0;
					}
				}
				if (iLocal_79 != Global_20930)
				{
					iLocal_78 = 0;
				}
			}
		}
	}
}

bool func_62(int iParam0)//Position - 0x3C09
{
	return func_63(iParam0, Global_44042);
}

int func_63(int iParam0, int iParam1)//Position - 0x3C1A
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

int func_64(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)//Position - 0x3DFB
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_66(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_65(iParam0) };
			Global_9487 = iParam0;
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_65(int iParam0)//Position - 0x3E8A
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_66(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3E9D
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_44();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_78() == 0)
	{
		func_76();
		return 0;
	}
	func_75(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_74(0);
		func_74(2);
		func_74(1);
	}
	else
	{
		func_44();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_74(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_74(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_74(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_74(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_44();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_73())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_34(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_31(1);
			func_34(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_67(iParam0, sParam1, bVar1, func_72(PLAYER::PLAYER_ID()));
	return 1;
}

void func_67(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x4378
{
	struct<14> Var0;
	
	if (!func_68())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_68()//Position - 0x4413
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_71())
	{
		return 0;
	}
	if (func_69(PLAYER::PLAYER_ID()))
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

bool func_69(int iParam0)//Position - 0x4476
{
	return func_70(iParam0, 20);
}

var func_70(int iParam0, int iParam1)//Position - 0x4486
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_71()//Position - 0x449E
{
	return -1;
}

var func_72(int iParam0)//Position - 0x44A7
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

bool func_73()//Position - 0x44BC
{
	return Global_1575083;
}

void func_74(int iParam0)//Position - 0x44C8
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_75(int iParam0)//Position - 0x44E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_76()//Position - 0x4579
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_77(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_77(struct<6> Param0, struct<6> Param6)//Position - 0x4644
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_78()//Position - 0x472F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_77(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

void func_79()//Position - 0x4897
{
	if (BitTest(Global_8800, 6))
	{
		if (Global_9504 > 0)
		{
			if (BitTest(Global_8801, 11))
			{
				if (iLocal_39)
				{
					func_80(iLocal_35, "CLEAR_ALL");
					if (BitTest(Global_8800, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (BitTest(Global_4543084, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_79389 == 1)
					{
						if (BitTest(Global_4543084, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_35, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						if (BitTest(Global_4543084, 28))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_35, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (BitTest(Global_4543084, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_35, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						if ((BitTest(Global_4543084, 12) || BitTest(Global_4543084, 11)) || BitTest(Global_8800, 25))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					MISC::CLEAR_BIT(&Global_8801, 11);
					iLocal_39 = 0;
				}
			}
		}
		if (Global_9504 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_35);
			MISC::CLEAR_BIT(&Global_8800, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_9504 > 0)
	{
		iLocal_35 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_35))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_8800, 6);
	}
}

void func_80(int iParam0, char* sParam1)//Position - 0x4A4C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_81()//Position - 0x4A61
{
	if (BitTest(Global_8801, 7))
	{
		MISC::SET_BIT(&Global_8801, 6);
		MISC::CLEAR_BIT(&Global_8801, 7);
		return;
	}
	if (!BitTest(Global_8801, 7))
	{
		MISC::CLEAR_BIT(&Global_8801, 6);
		return;
	}
}

void func_82()//Position - 0x4A98
{
	if (BitTest(Global_8801, 4))
	{
		MISC::SET_BIT(&Global_8801, 3);
		MISC::CLEAR_BIT(&Global_8801, 4);
		return;
	}
	if (!BitTest(Global_8801, 4))
	{
		MISC::CLEAR_BIT(&Global_8801, 3);
		return;
	}
}

void func_83()//Position - 0x4ACF
{
	if (BitTest(Global_8801, 2))
	{
		if (!Global_20930.f_1 == 1)
		{
			Global_20930.f_1 = 0;
		}
		MISC::CLEAR_BIT(&Global_8801, 2);
		return;
	}
	if (!BitTest(Global_8801, 2))
	{
		if (!Global_20930.f_1 == 1)
		{
			if (Global_20930.f_1 < 4)
			{
				Global_20930.f_1 = 3;
			}
		}
		return;
	}
}

int func_84()//Position - 0x4B21
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
		if (func_32(14))
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

int func_85(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4D6A
{
	func_44();
	if (Global_79389 == 0)
	{
		if (func_32(14))
		{
			if (Global_23345 == 2 || Global_23345 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_20930.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_56(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20896 == 1)
	{
		return 0;
	}
	if (Global_20930.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20927))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20930.f_1 < 4)
			{
				func_86("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20927 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20912)
	{
		SYSTEM::WAIT(0);
	}
	func_135();
	func_133();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
	{
		Global_9406 = 0;
		Global_20930.f_1 = 7;
		func_86(&(Global_8807[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
			{
				Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
		{
			Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8807[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_86(char* sParam0)//Position - 0x4ECD
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_87(int iParam0)//Position - 0x4EED
{
	if (func_90())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_89())
		{
			func_88(1, 1);
		}
		else
		{
			func_88(0, 0);
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
	if (!func_51())
	{
		Global_20930.f_1 = 3;
	}
}

void func_88(bool bParam0, bool bParam1)//Position - 0x4F77
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

bool func_89()//Position - 0x4FEB
{
	return BitTest(Global_1956920, 5);
}

bool func_90()//Position - 0x4FF9
{
	return BitTest(Global_1956920, 19);
}

void func_91()//Position - 0x5008
{
	float fVar0;
	
	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	fVar0 = 0f;
	while ((!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || fVar0 < 1f)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /* GXT: ALERT */, "VE_DIR_MODE_SURE" /* GXT: Are you sure you want to launch Director Mode? */, 18, 0, false, -1, 0, 0, true, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(false);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_112911 = 1;
	}
}

void func_92(int iParam0)//Position - 0x5087
{
	float fVar0;
	char* sVar1;
	
	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	fVar0 = 0f;
	while (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || fVar0 < 1f)
	{
		sVar1 = func_93(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /* GXT: ~a~ is not available while ~a~. */, 16384, 0, false, -1, "FBR_DIR_MODE" /* GXT: Director Mode */, sVar1, true, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(false);
}

char* func_93(int iParam0, int iParam1)//Position - 0x50E9
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG" /* GXT: feature is already running */;
			break;
		
		case 13:
			return "FBR_BLK_DEAD" /* GXT: dead */;
			break;
		
		case 3:
			return "FBR_BLK_MISS" /* GXT: playing a mission */;
			break;
		
		case 5:
			return "FBR_BLK_SHOP" /* GXT: browsing a shop */;
			break;
		
		case 4:
			return "FBR_BLK_CUTS" /* GXT: watching a cutscene */;
			break;
		
		case 6:
			return "FBR_BLK_WANT" /* GXT: wanted */;
			break;
		
		case 7:
			return "FBR_BLK_ONLI" /* GXT: playing GTA Online */;
			break;
		
		case 8:
			return "FBR_BLK_ACT" /* GXT: performing this action */;
			break;
		
		case 9:
			return "FBR_BLK_LOC" /* GXT: in this location */;
			break;
		
		case 10:
			return "FBR_BLK_VEH" /* GXT: in a vehicle */;
			break;
		
		case 11:
			return "FBR_BLK_PARA" /* GXT: skydiving */;
			break;
		
		case 12:
			return "FBR_BLK_FALL" /* GXT: falling */;
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_94(int iParam0, bool bParam1, int iParam2)//Position - 0x51DA
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (func_127() && !func_32(14))
	{
		return 3;
	}
	if (func_126())
	{
		return 3;
	}
	if (func_125())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_124())
		{
			return 8;
		}
	}
	if (Global_98433)
	{
		return 3;
	}
	if (Global_33206)
	{
		return 8;
	}
	if (Global_33097)
	{
		return 8;
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2883693)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_123(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (func_122(Global_112993, 256))
	{
		return 3;
	}
	if (((func_121() || func_120()) || func_115()) || func_114())
	{
		return 5;
	}
	if (func_114())
	{
		return 5;
	}
	if (func_113())
	{
		return 5;
	}
	if (func_112())
	{
		return 5;
	}
	if (func_120())
	{
		return 5;
	}
	if (func_111() && !Global_112916)
	{
		return 8;
	}
	if (func_115())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_110())
	{
		return 4;
	}
	if (func_73())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_98(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || Global_113016)
			{
				return 10;
			}
		}
	}
	if (Global_33204)
	{
		return 8;
	}
	if (Global_79387)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_97())
	{
		return 8;
	}
	if (Global_32951)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, false, true, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_95(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

int func_95(bool bParam0)//Position - 0x5516
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if ((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		return 0;
	}
	if ((((((func_73() || Global_23692.f_4) || func_96()) || MISC::IS_MEMORY_CARD_IN_USE()) || MISC::IS_AUTO_SAVE_IN_PROGRESS()) || func_110()) || func_126())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
	}
	return 1;
}

int func_96()//Position - 0x5626
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

bool func_97()//Position - 0x5642
{
	return Global_61347;
}

int func_98(int iParam0)//Position - 0x564D
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 5;
	}
	Var0 = { func_109(PLAYER::PLAYER_ID()) };
	if (Global_113056[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_108(2) && !func_108(17))
	{
		if (SYSTEM::VDIST2(Var0, -59.966286f, -1099.0055f, 25.520878f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, false, true))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5599.4263f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5590.4263f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.32654f, 5566.35f, 780.21515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.32654f, 5577.35f, 780.21515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(Var0, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_107(26))
	{
		return 9;
	}
	if (!iLocal_25)
	{
		func_99(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_112931 || iVar3 == Global_112932) || iVar3 == Global_112933)
	{
		return 9;
	}
	else if (iVar3 == Global_112922)
	{
		return 9;
	}
	else if (iVar3 == Global_112923)
	{
		return 9;
	}
	else if (iVar3 == Global_112926)
	{
		return 9;
	}
	else if (iVar3 == Global_112925)
	{
		return 9;
	}
	else if (iVar3 == Global_112927)
	{
		return 9;
	}
	else if (iVar3 == Global_112928)
	{
		return 9;
	}
	else if (iVar3 == Global_112929)
	{
		return 9;
	}
	else if (iVar3 == Global_112930)
	{
		return 9;
	}
	else if (iVar3 == Global_112934)
	{
		return 9;
	}
	else if (iVar3 == Global_112935)
	{
		return 9;
	}
	else if (iVar3 == Global_112936)
	{
		return 9;
	}
	else if (iVar3 == Global_112937)
	{
		return 9;
	}
	else if (iVar3 == Global_112938)
	{
		return 9;
	}
	else if ((iVar3 == Global_112939 || iVar3 == Global_112940) && func_108(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_112941[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_99(var uParam0)//Position - 0x5A75
{
	int iVar0;
	
	uParam0 = uParam0;
	func_102(24, &Global_112922);
	func_102(47, &Global_112923);
	func_102(10, &Global_112931);
	func_102(9, &Global_112932);
	func_102(8, &Global_112933);
	func_102(21, &Global_112934);
	func_102(11, &Global_112935);
	func_102(18, &Global_112939);
	func_102(19, &Global_112940);
	Global_112926 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_112925 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_112927 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_112928 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_112929 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_112930 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_112936 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_112937 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_112938 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_112941[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(func_100(iVar0));
		iVar0++;
	}
	iLocal_25 = 1;
}

Vector3 func_100(int iParam0)//Position - 0x5C01
{
	if (!func_101(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
		
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
		
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
		
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
		
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
		
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
		
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_101(int iParam0)//Position - 0x5DEB
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_102(int iParam0, var uParam1)//Position - 0x5E0C
{
	struct<5> Var0;
	
	Var0 = { func_103(iParam0) };
	*uParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_103(int iParam0)//Position - 0x5E31
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.7858f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.7559f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.3986f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.9338f, -1714.7256f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.3704f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.5645f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.2789f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.2538f, 3686.7385f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.8452f, 3707.9653f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.7852f, 4983.8247f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.1952f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.3816f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.8253f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.6632f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_106(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_106(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_106(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_106(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_106(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_106(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_106(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312298[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_106(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_106(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_106(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_106(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_106(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_106(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_106(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_106(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_106(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.295849f, -684.0385f, 33.508316f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.97156f, -1018.95416f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.0013f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_106(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_106(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_106(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_106(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_106(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_106(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_106(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_106(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_106(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_106(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_106(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_106(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_106(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_106(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_106(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_106(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_106(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_106(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_106(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_106(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_106(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_106(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.1116f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.5997f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.8022f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.0647f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.4111f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.9966f, -3100.0117f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.9949f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.0083f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.4902f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.6643f, -3012.5828f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.5867f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.16413f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.5624f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930.1f, -2269.9f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930.1f, -2240.1f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930.1f, -2213.2f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930.1f, -2183.4f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421.0149f, -3012.5867f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113.2f, 27.6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_222620[0 /*160*/].f_16 };
			Var0.f_3 = func_105(&(Global_4718592.f_222620[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_222620[1 /*160*/].f_16 };
			Var0.f_3 = func_105(&(Global_4718592.f_222620[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_222620[2 /*160*/].f_16 };
			Var0.f_3 = func_105(&(Global_4718592.f_222620[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_222620[3 /*160*/].f_16 };
			Var0.f_3 = func_105(&(Global_4718592.f_222620[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_222620[4 /*160*/].f_16 };
			Var0.f_3 = func_105(&(Global_4718592.f_222620[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196.14f, -580.65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
			if (func_104(Var0))
			{
			}
			return Var0;
	}
}

int func_104(struct<3> Param0)//Position - 0x8A94
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_105(var uParam0)//Position - 0x8ABE
{
	return uParam0;
}

struct<6> func_106(int iParam0, bool bParam1)//Position - 0x8AC8
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_107(int iParam0)//Position - 0x967E
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95498[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92265)
	{
		if (Global_92265[iVar0 /*5*/] != -1)
		{
			if (Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x96E6
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

Vector3 func_109(int iParam0)//Position - 0x9712
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_110()//Position - 0x9725
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_111()//Position - 0x973F
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

bool func_112()//Position - 0x9754
{
	return BitTest(Global_79638, 9);
}

bool func_113()//Position - 0x9763
{
	return BitTest(Global_79638, 8);
}

int func_114()//Position - 0x9772
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_115()//Position - 0x9907
{
	int iVar0;
	
	if (func_121())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_116(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_116(int iParam0)//Position - 0x9937
{
	return func_117(iParam0, 20, 1);
}

int func_117(int iParam0, int iParam1, bool bParam2)//Position - 0x9948
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_119() == 0)
		{
			return BitTest(func_129(func_118(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x99A8
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_119()//Position - 0x9D50
{
	return Global_32948;
}

bool func_120()//Position - 0x9D5B
{
	return Global_101585.f_394 > 0;
}

bool func_121()//Position - 0x9D6C
{
	return Global_101585.f_393 > 0;
}

bool func_122(var uParam0, int iParam1)//Position - 0x9D7D
{
	return (uParam0 && iParam1) != 0;
}

int func_123(bool bParam0)//Position - 0x9D8C
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

bool func_124()//Position - 0x9DB4
{
	return Global_101572.f_1;
}

bool func_125()//Position - 0x9DC2
{
	return Global_79657;
}

int func_126()//Position - 0x9DCE
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x9DF8
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0)//Position - 0x9E0D
{
	if ((Global_23400 || Global_23399) || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
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
	return 0;
}

int func_129(int iParam0, int iParam1)//Position - 0x9E71
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_130(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_130(int iParam0, var uParam1)//Position - 0x9EA0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_131(uParam1));
}

int func_131(var uParam0)//Position - 0x9EB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_132();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

var func_132()//Position - 0x9EE9
{
	return Global_1574926;
}

void func_133()//Position - 0x9EF5
{
	if (Global_79389 == 0)
	{
		Global_8807[14 /*15*/].f_4 = -99;
		Global_8807[4 /*15*/].f_4 = -99;
		if (Global_2696167)
		{
			if (func_32(14))
			{
				func_134(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_134(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_134(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_134(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_134(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x9F83
{
	StringCopy(&(Global_8807[iParam0 /*15*/]), sParam1, 16);
	Global_8807[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8807[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8807[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8807[iParam0 /*15*/].f_10 = iParam4;
	Global_8807[iParam0 /*15*/].f_11 = iParam5;
	Global_8807[iParam0 /*15*/].f_12 = iParam6;
	Global_8807[iParam0 /*15*/].f_13 = iParam7;
	Global_8807[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8807[iParam0 /*15*/].f_12 == 0)
	{
		Global_8807[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_13 == 0)
	{
		Global_8807[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_14 == 0)
	{
		Global_8807[iParam0 /*15*/].f_14 = 0;
	}
}

void func_135()//Position - 0xA039
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8807[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79389 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_137(iVar2, Global_20930) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_134(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_134(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_134(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44042 == 15 && func_123(0) == 0) && Global_8805 == 0)
		{
			func_134(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 0;
			Global_8806 = 255;
		}
		else
		{
			func_134(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 1;
			Global_8806 = 42;
		}
		if (iVar1 == 1)
		{
			func_134(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_134(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_134(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_134(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_134(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113969.f_14054.f_89 == 1)
		{
			func_134(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113969.f_14054.f_88 == 1)
		{
			func_134(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_134(25, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_134(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_134(27, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(29, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_134(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_134(32, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_134(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_134(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_134(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_134(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_134(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_134(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_134(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		func_134(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4543084, 4))
		{
			func_134(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_134(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_134(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_134(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_134(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_134(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_134(23, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_134(24, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_134(25, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_134(26, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_134(27, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_134(28, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_134(29, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_134(30, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_134(31, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_134(32, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_134(33, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4543084, 4))
		{
			if (Global_1836172)
			{
				func_134(23, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 20))
			{
				func_134(23, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 22))
			{
				func_134(23, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 26))
			{
				if (func_136())
				{
					func_134(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_134(23, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4543084, 4) == 0 && Global_1836172 == 0) && BitTest(Global_4543084, 20) == 0) && BitTest(Global_4543084, 22) == 0) && BitTest(Global_4543084, 26) == 0)
		{
			if (func_136())
			{
				func_134(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_134(23, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_136()//Position - 0xA5E4
{
	if (Global_79389)
	{
		if (Global_1836576 || Global_1836577 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0, int iParam1)//Position - 0xA60B
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_19[iParam1];
}

void func_138()//Position - 0xA635
{
}

