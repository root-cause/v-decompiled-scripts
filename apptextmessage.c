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
	int iLocal_17[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<6> Local_82[180];
	struct<6> Local_1163[180];
	struct<8> Local_2244[19];
	int iLocal_2397 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_62();
	}
	func_46();
	Global_23352 = 0;
	Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
	Global_21144 = 0;
	func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_43();
	func_42();
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 7;
	}
	iLocal_63 = MISC::GET_GAME_TIMER();
	Global_20934 = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_62 == 0)
		{
			iLocal_64 = MISC::GET_GAME_TIMER();
			if ((iLocal_64 - iLocal_63) > 500)
			{
				iLocal_62 = 1;
			}
		}
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (Global_23352 == 0)
					{
						if (Global_2749862 == 0)
						{
							func_37();
							func_32();
						}
					}
					break;
				
				case 8:
					if (Global_23352 == 1)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_23352 == 0)
			{
				if (func_4())
				{
					func_62();
				}
			}
			else if (func_3(2, Global_20898, 0) || BitTest(Global_8801, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8801, 12);
					func_2();
					Global_20908 = 1;
					Global_23352 = 0;
					if (Global_20930.f_1 > 3)
					{
						Global_20930.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_62();
					}
					func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_43();
					func_42();
					if (Global_113969.f_14144[iLocal_56 /*104*/].f_29 > 0)
					{
						if (Global_113969.f_14144[iLocal_56 /*104*/].f_31 == 1)
						{
							Global_113969.f_14144[iLocal_56 /*104*/].f_29 = 4;
							Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 1;
						}
						else
						{
							Global_113969.f_14144[iLocal_56 /*104*/].f_29 = 4;
							Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 1;
						}
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_62();
		}
		if (func_1())
		{
			func_62();
		}
	}
}

int func_1()//Position - 0x237
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x27A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x29B
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

int func_4()//Position - 0x30D
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x336
{
	func_6();
}

void func_6()//Position - 0x342
{
	if (Global_113969.f_14144[iLocal_56 /*104*/].f_24 == 1)
	{
		if (Global_20908 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20901))
			{
				func_2();
				Global_20908 = 1;
				func_25();
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_27 == 1)
				{
					Global_113969.f_14144[iLocal_56 /*104*/].f_99[0] = 0;
					Global_113969.f_14144[iLocal_56 /*104*/].f_99[1] = 0;
					Global_113969.f_14144[iLocal_56 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_113969.f_14144[iLocal_56 /*104*/].f_99[Global_20930] = 0;
				}
				if (func_24(iLocal_56))
				{
				}
				else
				{
					Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 0;
					Global_113969.f_14144[iLocal_56 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_113969.f_14144[iLocal_56 /*104*/].f_16);
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				if (iLocal_54 > 0)
				{
					iLocal_54 = (iLocal_54 - 1);
				}
				func_42();
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
					Global_23352 = 0;
				}
			}
		}
	}
	else if (Global_20908 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20902))
		{
			if (iLocal_58 == 1)
			{
				if (Global_20930.f_1 > 3)
				{
					StringCopy(&Global_76481, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_23327), 64);
					Global_76612 = 7;
					MISC::SET_BIT(&Global_8801, 10);
					Global_20930.f_1 = 6;
				}
				func_62();
			}
		}
	}
	if (Global_113969.f_14144[iLocal_56 /*104*/].f_31 == 1)
	{
		if (Global_20908 == 0)
		{
			if (func_3(2, Global_20902, 0))
			{
				func_21();
				Global_20908 = 1;
				Global_113969.f_14144[iLocal_56 /*104*/].f_29 = 2;
				Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 1;
				Global_113969.f_14144[iLocal_56 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_8800, 17);
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
		}
	}
	if (Global_20908 == 0 && iLocal_62 == 1)
	{
		if (func_3(2, Global_20899, 0))
		{
			Global_20908 = 1;
			if (Global_113969.f_14144[iLocal_56 /*104*/].f_29 > 0)
			{
				func_21();
				Global_113969.f_14144[iLocal_56 /*104*/].f_29 = 3;
				Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 1;
				Global_23352 = 0;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 7;
				}
				func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_43();
				func_42();
			}
			else if (Global_113969.f_14144[iLocal_56 /*104*/].f_30 == 1)
			{
				func_21();
				Global_8115 = 144;
				if (Global_20930.f_1 > 3)
				{
					Global_20930.f_1 = 10;
					if (func_20() == 0)
					{
						func_18();
					}
				}
				func_17("appContacts");
				Global_20928 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_8115 = Global_113969.f_14144[iLocal_56 /*104*/].f_17;
				if (func_16(Global_8115, Global_20930) == 0)
				{
					func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_211" /* GXT: DIALING... */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_211" /* GXT: DIALING... */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_7();
				func_62();
			}
		}
	}
}

void func_7()//Position - 0x6A6
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
			func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_12(Global_9405);
			if (Global_9405 == 1)
			{
				func_45(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_45(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_45(Global_20911, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
				func_45(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_11();
				func_45(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_10("CELL_217" /* GXT: INCOMING CALL */);
					func_10("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_16(Global_8115, Global_20930) == 0)
				{
					func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_45(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_22299)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22301);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_10("CELL_219" /* GXT: CONNECTED */);
					func_10("CELL_219" /* GXT: CONNECTED */);
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
					if (func_16(Global_8115, Global_20930) == 0)
					{
						func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar1, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_45(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_45(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()//Position - 0xC72
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20911))
	{
		func_9();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20873)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()//Position - 0xDF0
{
	if (Global_79389)
	{
		func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
	}
}

void func_10(char* sParam0)//Position - 0xE20
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_11()//Position - 0xE32
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

void func_12(int iParam0)//Position - 0x10A9
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
	func_14();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_13(14))
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
								func_10(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
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
								func_10(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_15(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_13(int iParam0)//Position - 0x161E
{
	return Global_44042 == iParam0;
}

void func_14()//Position - 0x162C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_15(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x164F
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
		func_10(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_10(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_10(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_10(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_10(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_16(int iParam0, int iParam1)//Position - 0x1702
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_17(char* sParam0)//Position - 0x172C
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_18()//Position - 0x174C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
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

int func_19()//Position - 0x1870
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

int func_20()//Position - 0x1894
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
		if (func_13(14))
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

void func_21()//Position - 0x1ADD
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_22();
	}
}

void func_22()//Position - 0x1B02
{
	if (func_23())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_23()//Position - 0x1B16
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

int func_24(int iParam0)//Position - 0x1B5D
{
	if ((Global_113969.f_14144[iParam0 /*104*/].f_99[0] == 1 || Global_113969.f_14144[iParam0 /*104*/].f_99[1] == 1) || Global_113969.f_14144[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_25()//Position - 0x1BB2
{
	if (func_13(14))
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
		Global_20930 = func_26();
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

var func_26()//Position - 0x1C54
{
	func_27();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_27()//Position - 0x1C6D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_13(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_28(Global_113969.f_2366.f_539.f_4321))
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

bool func_28(int iParam0)//Position - 0x1D6A
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x1D76
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1DB3
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)//Position - 0x1DD8
{
	return Global_2169[iParam0 /*29*/];
}

void func_32()//Position - 0x1DE7
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_20908 == 0)
	{
		if ((func_3(2, Global_20899, 0) || Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1) || Global_23346 == 1)
		{
			if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 0 && Global_23346 == 0)
			{
				func_21();
			}
			Global_20908 = 1;
			iLocal_62 = 0;
			iLocal_56 = iLocal_17[iLocal_54];
			if (Global_113969.f_14144[iLocal_56 /*104*/].f_24 != 0)
			{
				if (Global_20930.f_1 > 3)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8800, 17);
					Global_20930.f_1 = 8;
				}
				if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1 || Global_23346 == 1)
				{
					iLocal_56 = iLocal_17[0];
					iLocal_55 = 0;
					if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
					{
					}
					Global_23346 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_60 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
					iLocal_65 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_65) && iLocal_60 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_60 = 1;
						}
					}
					if (iLocal_60 == 1)
					{
						iLocal_61 = 0;
					}
					else
					{
						iLocal_61 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_65);
					}
					if (iLocal_61 < 0)
					{
						iLocal_61 = 0;
					}
					iLocal_56 = iLocal_17[iLocal_61];
					iLocal_55 = iLocal_61;
				}
				Global_113969.f_14144[iLocal_56 /*104*/].f_28 = 1;
				iLocal_58 = 0;
				StringCopy(&Global_23327, "NO_HYPERLINK", 64);
				Var0 = { Global_113969.f_14144[iLocal_56 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_23327 = { Var0 };
					iLocal_58 = 1;
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267" /* GXT: LINK */, 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8800, 17);
					Global_113969.f_14144[iLocal_56 /*104*/].f_26 = 1;
					Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 2;
				}
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_26 == 0)
				{
					Global_113969.f_14144[iLocal_56 /*104*/].f_24 = 1;
				}
				func_36();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2169[Global_113969.f_14144[iLocal_56 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113969.f_14144[iLocal_56 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113969.f_14144[iLocal_56 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_33));
						if (Global_113969.f_14144[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[iLocal_56 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[iLocal_56 /*104*/].f_49);
						if (Global_113969.f_14144[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_35(iLocal_56);
						break;
					
					case 5:
						func_35(iLocal_56);
						break;
					
					case 6:
						func_35(iLocal_56);
						break;
					
					case 7:
						func_35(iLocal_56);
						break;
					
					case 8:
						func_35(iLocal_56);
						break;
					
					case 9:
						func_35(iLocal_56);
						break;
					
					case 10:
						func_35(iLocal_56);
						break;
					
					case 11:
						func_35(iLocal_56);
						break;
					
					case 12:
						func_34(iLocal_56);
						break;
				}
				if (Global_23355[iLocal_56] == 0)
				{
					if (Global_113969.f_14144[iLocal_56 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */);
					}
					else
					{
						func_10(&(Global_2169[Global_113969.f_14144[iLocal_56 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_23355[iLocal_56]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_23355[iLocal_56]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_23355[iLocal_56]);
						}
						else
						{
							sVar16 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar16 = "CHAR_DEFAULT";
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar16);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				Global_23352 = 1;
				func_45(Global_20911, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_33(Global_20911, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_113969.f_14144[iLocal_56 /*104*/].f_16);
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_29 > 0)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_113969.f_14144[iLocal_56 /*104*/].f_30 == 1)
				{
					if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/]), "CELL_FINV"))
					{
						if (Global_20918)
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
						}
						else
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20918)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
					}
					else
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_113969.f_14144[iLocal_56 /*104*/].f_24 == 2)
				{
					if (Global_113969.f_14144[iLocal_56 /*104*/].f_31 == 1)
					{
						iLocal_58 = 0;
						if (Global_20918)
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264" /* GXT: BARTER */, 0, 0, 0, 0);
						}
						else
						{
							func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8800, 17);
					}
					else if (iLocal_58 == 0)
					{
						func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8800, 17);
					}
				}
				else if (Global_20918)
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216" /* GXT: DELETE */, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8800, 17);
				}
				else
				{
					func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8800, 17);
				}
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_113969.f_14054[Global_20930 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1 || Global_23346 == 1)
				{
					if (Global_23346)
					{
					}
					iVar17 = 1;
				}
				Global_113969.f_14054[Global_20930 /*20*/].f_18 = 0;
				Global_113969.f_14054[Global_20930 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_20930.f_1 = 3;
				}
			}
		}
		if (Global_2749862 == 0)
		{
			if (Global_79389)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20902);
				if (func_3(2, Global_20902, 0))
				{
					Global_20908 = 1;
					Global_2749862 = 1;
				}
			}
		}
	}
}

void func_33(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x278B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_10(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_10(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_10(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_10(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_10(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_34(int iParam0)//Position - 0x27E6
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L01" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~. */);
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L02" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~. */);
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L03" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~. */);
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L04" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L05" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L06" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L07" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L08" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L09" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 10:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TUN_CBL_L10" /* GXT: Here's the list of Exotic Exports vehicles you're looking for: ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
	}
	while (iVar0 < Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_113969.f_14144[iParam0 /*104*/].f_32)
		{
			case 12:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928583[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_35(int iParam0)//Position - 0x28F3
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		case 1:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL01" /* GXT: ~a~ ~a~. */);
			break;
		
		case 2:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL02" /* GXT: ~a~ ~a~, ~a~. */);
			break;
		
		case 3:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL03" /* GXT: ~a~ ~a~, ~a~, ~a~. */);
			break;
		
		case 4:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL04" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 5:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL05" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 6:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL06" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 7:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL07" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 8:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL08" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
		
		case 9:
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CL09" /* GXT: ~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~. */);
			break;
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iParam0 /*104*/]));
	while (iVar0 < Global_113969.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_113969.f_14144[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2738934.f_1777[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928452[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928493[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928514[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928531[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928544[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928557[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1928570[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_36()//Position - 0x2A94
{
	int iVar0;
	
	if (iLocal_2397)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	iLocal_2397 = 0;
	if (Global_113969.f_14144[iLocal_56 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 180)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_82[iVar0 /*6*/])) && MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iLocal_56 /*104*/]), &(Local_82[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_66, {Local_2244[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_66, {Local_1163[iVar0 /*6*/]}, 16);
				}
				iLocal_2397 = 1;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uLocal_66, false);
				while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uLocal_66))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

void func_37()//Position - 0x2B3F
{
	if (iLocal_59)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_59 = 0;
		}
	}
	if (iLocal_59 == 0)
	{
		if (func_3(2, Global_20906, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			if (iLocal_54 > 0)
			{
				iLocal_54 = (iLocal_54 - 1);
			}
			func_40();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_20907, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			iLocal_54++;
			if (iLocal_54 == iLocal_53)
			{
				iLocal_54 = 0;
			}
			func_38();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_38()//Position - 0x2BC4
{
	func_45(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_39();
}

void func_39()//Position - 0x2C01
{
	if (func_23())
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

void func_40()//Position - 0x2C24
{
	func_45(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_41();
}

void func_41()//Position - 0x2C61
{
	if (func_23())
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

void func_42()//Position - 0x2C84
{
	if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 0)
	{
		if (iLocal_55 < 0)
		{
			iLocal_55 = 0;
		}
		func_45(Global_20911, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_55), -1082130432, -1082130432, -1082130432);
		func_33(Global_20911, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
		if (Global_20918)
		{
			if (iLocal_53 > 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214" /* GXT: OPTIONS */, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_53 > 0)
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_15(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_15(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_79389)
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
		else
		{
			func_15(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8800, 17);
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_43()//Position - 0x2DC0
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_53 = 0;
	func_25();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_62();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_113969.f_14144[iVar38 /*104*/].f_18 = -1;
		Global_113969.f_14144[iVar38 /*104*/].f_18.f_1 = 0;
		Global_113969.f_14144[iVar38 /*104*/].f_18.f_2 = 0;
		Global_113969.f_14144[iVar38 /*104*/].f_18.f_3 = 0;
		Global_113969.f_14144[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_62();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_113969.f_14144[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_113969.f_14144[iVar37 /*104*/].f_99[Global_20930] == 1)
					{
						if (func_44(Global_113969.f_14144[iVar37 /*104*/].f_18, Global_113969.f_14144[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_113969.f_14144[iVar38 /*104*/].f_28 == 0)
							{
								iLocal_57 = 33;
							}
							else
							{
								iLocal_57 = 34;
							}
						}
					}
				}
			}
			iVar37++;
		}
		iLocal_17[iVar36] = iVar38;
		iVar0[iVar38] = 1;
		if (Global_113969.f_14144[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_113969.f_14144[iVar38 /*104*/].f_99[Global_20930] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_113969.f_14144[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_113969.f_14144[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_57);
				if (Global_113969.f_14144[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH" /* GXT: <C>~a~</C> */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2169[Global_113969.f_14144[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_113969.f_14144[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_113969.f_14144[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_33));
						if (Global_113969.f_14144[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_113969.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113969.f_14144[iVar38 /*104*/].f_49);
						if (Global_113969.f_14144[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
						}
						if ((Global_113969.f_14144[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14144[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_113969.f_14144[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113969.f_14144[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113969.f_14144[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_35(iVar38);
						break;
					
					case 5:
						func_35(iVar38);
						break;
					
					case 6:
						func_35(iVar38);
						break;
					
					case 7:
						func_35(iVar38);
						break;
					
					case 8:
						func_35(iVar38);
						break;
					
					case 9:
						func_35(iVar38);
						break;
					
					case 10:
						func_35(iVar38);
						break;
					
					case 11:
						func_35(iVar38);
						break;
					
					case 12:
						func_34(iVar38);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_113969.f_14144[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_113969.f_14144[iVar36 /*104*/].f_99[Global_20930] == 1)
			{
				iLocal_53++;
			}
		}
		iVar36++;
	}
}

int func_44(struct<6> Param0, struct<6> Param6)//Position - 0x3311
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

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x33FC
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

void func_46()//Position - 0x345F
{
	StringCopy(&(Local_82[0 /*6*/]), "SXT_JUL_1ST" /* GXT: I can't wait until you cum again! ~nrt~ <img src='img://05_a_sext_stripperJuliet/05_a_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[1 /*6*/]), "SXT_JUL_2ND" /* GXT: Just when I thought that it couldn't get any better! ~nrt~ <img src='img://05_b_sext_stripperJuliet/05_b_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[2 /*6*/]), "SXT_JUL_NEED" /* GXT: Missing you badly! I want you inside me. ~nrt~ <img src='img://05_c_sext_stripperJuliet/05_c_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[3 /*6*/]), "SXT_NIK_1ST" /* GXT: I just wanted you to know that I miss you already :-* ~nrt~ <img src='img://06_a_sext_stripperNikki/06_a_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_82[4 /*6*/]), "SXT_NIK_2ND" /* GXT: You're the man that I've been looking for my entire life! ~nrt~ <img src='img://06_b_sext_stripperNikki/06_b_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_82[5 /*6*/]), "SXT_NIK_NEED" /* GXT: Maybe this will get your attention! ~nrt~ <img src='img://06_c_sext_stripperNikki/06_c_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_82[6 /*6*/]), "SXT_SAP_1ST" /* GXT: That was deliciously yummy. Next time, I want to be on top. What do you think of this position? ~nrt~ <img src='img://08_a_sext_stripperSapphire/08_a_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[7 /*6*/]), "SXT_SAP_2ND" /* GXT: Here don't show this to anyone else. ~nrt~ <img src='img://08_b_sext_stripperSapphire/08_b_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[8 /*6*/]), "SXT_SAP_NEED" /* GXT: My body aches for you! ~nrt~ <img src='img://08_c_sext_stripperSapphire/08_c_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[9 /*6*/]), "SXT_INF_1ST" /* GXT: This body is all yours and only yours baby! ~nrt~ <img src='img://04_a_sext_stripperInfernus/04_a_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[10 /*6*/]), "SXT_INF_2ND" /* GXT: I can hardly walk, that was amazing! ~nrt~ <img src='img://04_b_sext_stripperInfernus/04_b_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[11 /*6*/]), "SXT_INF_NEED" /* GXT: My loins quiver with the thought of you! ~nrt~ <img src='img://04_c_sext_stripperInfernus/04_c_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[12 /*6*/]), "SXT_TXI_1ST" /* GXT: I can't stop thinking about the last time. ~nrt~ <img src='img://11_a_sext_taxiLiz/11_a_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_82[13 /*6*/]), "SXT_TXI_2ND" /* GXT: You're so amazing! I've been missing out. ~nrt~ <img src='img://11_b_sext_taxiLiz/11_b_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_82[14 /*6*/]), "SXT_TXI_NEED" /* GXT: Hey babe, I need a study break... ~nrt~ <img src='img://11_c_sext_taxiLiz/11_c_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_82[15 /*6*/]), "SXT_HCH_1ST" /* GXT: You always know how to give a good ride ;) ~nrt~ <img src='img://10_a_sext_hitcherGirl/10_a_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[16 /*6*/]), "SXT_HCH_2ND" /* GXT: Can't wait to meet again honey. ~nrt~ <img src='img://10_b_sext_hitcherGirl/10_b_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[17 /*6*/]), "SXT_HCH_NEED" /* GXT: I've been thinking... you should let me ride you. ~nrt~ <img src='img://10_c_sext_hitcherGirl/10_c_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[18 /*6*/]), "SOL2_PASS" /* GXT: Michael I have put your name in the credits for the film. ~nrt~ <img src='img://ExecutiveProducer/executiveproducer' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2244[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_82[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1163[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_82[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1163[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_82[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1163[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_82[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1163[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_82[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1163[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_82[24 /*6*/]), "SAD_SMS_0" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_01/MP_SND_TARGET_01' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_82[25 /*6*/]), "SAD_SMS_1" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_02/MP_SND_TARGET_02' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_82[26 /*6*/]), "SAD_SMS_2" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_03/MP_SND_TARGET_03' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_82[27 /*6*/]), "SAD_SMS_3" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_04/MP_SND_TARGET_04' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_82[28 /*6*/]), "SAD_SMS_4" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_05/MP_SND_TARGET_05' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_82[29 /*6*/]), "SAD_SMS_5" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_06/MP_SND_TARGET_06' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_82[30 /*6*/]), "SAD_SMS_6" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_07/MP_SND_TARGET_07' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_82[31 /*6*/]), "SAD_SMS_7" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_08/MP_SND_TARGET_08' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_82[32 /*6*/]), "SAD_SMS_8" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_09/MP_SND_TARGET_09' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_82[33 /*6*/]), "SAD_SMS_9" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_10/MP_SND_TARGET_10' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_82[34 /*6*/]), "SAD_SMS_10" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_11/MP_SND_TARGET_11' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_82[35 /*6*/]), "SAD_SMS_11" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_12/MP_SND_TARGET_12' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_82[36 /*6*/]), "SAD_SMS_12" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_13/MP_SND_TARGET_13' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_82[37 /*6*/]), "SAD_SMS_13" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_14/MP_SND_TARGET_14' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_82[38 /*6*/]), "SAD_SMS_14" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_15/MP_SND_TARGET_15' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_82[39 /*6*/]), "SAD_SMS_15" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_16/MP_SND_TARGET_16' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_82[40 /*6*/]), "SAD_SMS_16" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_17/MP_SND_TARGET_17' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_82[41 /*6*/]), "SAD_SMS_17" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_18/MP_SND_TARGET_18' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_82[42 /*6*/]), "SAD_SMS_18" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_19/MP_SND_TARGET_19' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_82[43 /*6*/]), "SAD_SMS_19" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_20/MP_SND_TARGET_20' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_82[44 /*6*/]), "VEX_PM_PHOTO0" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Del Perro Beach ~nrt~ <img src='img://MP_EX_LOCATION_01/MP_EX_LOCATION_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_82[45 /*6*/]), "VEX_PM_PHOTO1" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_02/MP_EX_LOCATION_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_82[46 /*6*/]), "VEX_PM_PHOTO2" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vinewood Hills ~nrt~ <img src='img://MP_EX_LOCATION_03/MP_EX_LOCATION_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_82[47 /*6*/]), "VEX_PM_PHOTO3" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Mount Gordo ~nrt~ <img src='img://MP_EX_LOCATION_04/MP_EX_LOCATION_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_82[48 /*6*/]), "VEX_PM_PHOTO4" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Los Santos International Airport ~nrt~ <img src='img://MP_EX_LOCATION_05/MP_EX_LOCATION_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_82[49 /*6*/]), "VEX_PM_PHOTO5" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_06/MP_EX_LOCATION_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_82[50 /*6*/]), "VEX_PM_PHOTO6" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Bay ~nrt~ <img src='img://MP_EX_LOCATION_07/MP_EX_LOCATION_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_82[51 /*6*/]), "VEX_PM_PHOTO7" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Ron Alternates Wind Farm ~nrt~ <img src='img://MP_EX_LOCATION_08/MP_EX_LOCATION_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_82[52 /*6*/]), "VEX_PM_PHOTO8" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Grand Senora Desert ~nrt~ <img src='img://MP_EX_LOCATION_09/MP_EX_LOCATION_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_82[53 /*6*/]), "VEX_PM_PHOTO9" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Sandy Shores ~nrt~ <img src='img://MP_EX_LOCATION_10/MP_EX_LOCATION_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_82[54 /*6*/]), "VEX_PM_PHOTO10" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Legion Square ~nrt~ <img src='img://MP_EX_LOCATION_11/MP_EX_LOCATION_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_82[55 /*6*/]), "VEX_PM_PHOTO11" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: GWC and Golfing Society ~nrt~ <img src='img://MP_EX_LOCATION_12/MP_EX_LOCATION_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_82[56 /*6*/]), "VEX_PM_PHOTO12" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vespucci Beach ~nrt~ <img src='img://MP_EX_LOCATION_13/MP_EX_LOCATION_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_82[57 /*6*/]), "VEX_PM_PHOTO13" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Tongva Hills ~nrt~ <img src='img://MP_EX_LOCATION_14/MP_EX_LOCATION_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_82[58 /*6*/]), "VEX_1_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_01/IE_TEXTVECH_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_82[59 /*6*/]), "VEX_2_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_02/IE_TEXTVECH_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_82[60 /*6*/]), "VEX_3_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_03/IE_TEXTVECH_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_82[61 /*6*/]), "VEX_4_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_04/IE_TEXTVECH_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_82[62 /*6*/]), "VEX_5_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_05/IE_TEXTVECH_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_82[63 /*6*/]), "VEX_6_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_06/IE_TEXTVECH_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_82[64 /*6*/]), "VEX_7_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_07/IE_TEXTVECH_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_82[65 /*6*/]), "VEX_8_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_08/IE_TEXTVECH_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_82[66 /*6*/]), "VEX_9_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_09/IE_TEXTVECH_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_82[67 /*6*/]), "VEX_10_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_10/IE_TEXTVECH_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_82[68 /*6*/]), "VEX_11_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_11/IE_TEXTVECH_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_82[69 /*6*/]), "VEX_12_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_12/IE_TEXTVECH_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_82[70 /*6*/]), "VEX_13_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_13/IE_TEXTVECH_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_82[71 /*6*/]), "VEX_14_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_14/IE_TEXTVECH_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_82[72 /*6*/]), "VEX_15_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_15/IE_TEXTVECH_15' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_82[73 /*6*/]), "VEX_16_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_16/IE_TEXTVECH_16' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_82[74 /*6*/]), "VEX_17_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_17/IE_TEXTVECH_17' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_82[75 /*6*/]), "VEX_18_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_18/IE_TEXTVECH_18' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_82[76 /*6*/]), "VEX_19_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_19/IE_TEXTVECH_19' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_82[77 /*6*/]), "VEX_20_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_20/IE_TEXTVECH_20' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_82[78 /*6*/]), "VEX_21_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_21/IE_TEXTVECH_21' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_82[79 /*6*/]), "VEX_22_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_22/IE_TEXTVECH_22' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_82[80 /*6*/]), "VEX_23_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_23/IE_TEXTVECH_23' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_82[81 /*6*/]), "VEX_24_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_24/IE_TEXTVECH_24' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_82[82 /*6*/]), "VEX_25_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_25/IE_TEXTVECH_25' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_82[83 /*6*/]), "VEX_26_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_26/IE_TEXTVECH_26' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_82[84 /*6*/]), "VEX_27_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_27/IE_TEXTVECH_27' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_82[85 /*6*/]), "VEX_28_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_28/IE_TEXTVECH_28' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_82[86 /*6*/]), "VEX_29_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_29/IE_TEXTVECH_29' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_82[87 /*6*/]), "VEX_30_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_30/IE_TEXTVECH_30' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_82[88 /*6*/]), "VEX_31_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_31/IE_TEXTVECH_31' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_82[89 /*6*/]), "VEX_32_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_32/IE_TEXTVECH_32' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_82[90 /*6*/]), "VEX_33_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_33/IE_TEXTVECH_33' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_82[91 /*6*/]), "VEX_34_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_34/IE_TEXTVECH_34' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_82[92 /*6*/]), "VEX_35_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_35/IE_TEXTVECH_35' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_82[93 /*6*/]), "VEX_36_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_36/IE_TEXTVECH_36' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_82[94 /*6*/]), "VEX_37_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_37/IE_TEXTVECH_37' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_82[95 /*6*/]), "VEX_38_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_38/IE_TEXTVECH_38' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_82[96 /*6*/]), "VEX_39_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_39/IE_TEXTVECH_39' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_82[97 /*6*/]), "VEX_40_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_40/IE_TEXTVECH_40' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_82[98 /*6*/]), "VEX_41_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_41/IE_TEXTVECH_41' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_82[99 /*6*/]), "VEX_42_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_42/IE_TEXTVECH_42' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_82[100 /*6*/]), "VEX_43_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_43/IE_TEXTVECH_43' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_82[101 /*6*/]), "VEX_44_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_44/IE_TEXTVECH_44' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_82[102 /*6*/]), "VEX_45_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_45/IE_TEXTVECH_45' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_82[103 /*6*/]), "VEX_46_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_46/IE_TEXTVECH_46' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_82[104 /*6*/]), "VEX_47_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_47/IE_TEXTVECH_47' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_82[105 /*6*/]), "VEX_48_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_48/IE_TEXTVECH_48' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_82[106 /*6*/]), "VEX_49_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_49/IE_TEXTVECH_49' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_82[107 /*6*/]), "VEX_50_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_50/IE_TEXTVECH_50' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_82[108 /*6*/]), "VEX_51_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_51/IE_TEXTVECH_51' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_82[109 /*6*/]), "VEX_52_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_52/IE_TEXTVECH_52' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_82[110 /*6*/]), "VEX_53_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_53/IE_TEXTVECH_53' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_82[111 /*6*/]), "VEX_54_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_54/IE_TEXTVECH_54' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_82[112 /*6*/]), "VEX_55_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_55/IE_TEXTVECH_55' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_82[113 /*6*/]), "VEX_56_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_56/IE_TEXTVECH_56' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_82[114 /*6*/]), "VEX_57_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_57/IE_TEXTVECH_57' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_82[115 /*6*/]), "VEX_58_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_58/IE_TEXTVECH_58' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_82[116 /*6*/]), "VEX_59_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_59/IE_TEXTVECH_59' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_82[117 /*6*/]), "VEX_60_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_60/IE_TEXTVECH_60' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_82[118 /*6*/]), "VEX_61_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_61/IE_TEXTVECH_61' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_82[119 /*6*/]), "VEX_62_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_62/IE_TEXTVECH_62' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_82[120 /*6*/]), "VEX_63_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_63/IE_TEXTVECH_63' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_82[121 /*6*/]), "VEX_64_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_64/IE_TEXTVECH_64' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_82[122 /*6*/]), "VEX_65_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_65/IE_TEXTVECH_65' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_82[123 /*6*/]), "VEX_66_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_66/IE_TEXTVECH_66' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_82[124 /*6*/]), "VEX_67_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_67/IE_TEXTVECH_67' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_82[125 /*6*/]), "VEX_68_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_68/IE_TEXTVECH_68' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_82[126 /*6*/]), "VEX_69_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_69/IE_TEXTVECH_69' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_82[127 /*6*/]), "VEX_70_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_70/IE_TEXTVECH_70' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_82[128 /*6*/]), "VEX_71_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_71/IE_TEXTVECH_71' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_82[129 /*6*/]), "VEX_72_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_72/IE_TEXTVECH_72' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_82[130 /*6*/]), "VEX_73_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_73/IE_TEXTVECH_73' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_82[131 /*6*/]), "VEX_74_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_74/IE_TEXTVECH_74' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_82[132 /*6*/]), "VEX_75_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_75/IE_TEXTVECH_75' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_82[133 /*6*/]), "VEX_76_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_76/IE_TEXTVECH_76' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_82[134 /*6*/]), "VEX_77_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_77/IE_TEXTVECH_77' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_82[135 /*6*/]), "VEX_78_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_78/IE_TEXTVECH_78' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_82[136 /*6*/]), "VEX_79_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_79/IE_TEXTVECH_79' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_82[137 /*6*/]), "VEX_80_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_80/IE_TEXTVECH_80' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_82[138 /*6*/]), "VEX_81_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_81/IE_TEXTVECH_81' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_82[139 /*6*/]), "VEX_82_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_82/IE_TEXTVECH_82' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_82[140 /*6*/]), "VEX_83_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_84/IE_TEXTVECH_84' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_82[141 /*6*/]), "VEX_84_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_85/IE_TEXTVECH_85' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_82[142 /*6*/]), "VEX_82_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_83/IE_TEXTVECH_83' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_82[143 /*6*/]), "VEX_86_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_86/IE_TEXTVECH_86' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_82[144 /*6*/]), "VEX_87_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_87/IE_TEXTVECH_87' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_82[145 /*6*/]), "VEX_88_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_88/IE_TEXTVECH_88' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_82[146 /*6*/]), "VEX_89_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_89/IE_TEXTVECH_89' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_82[147 /*6*/]), "VEX_90_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_90/IE_TEXTVECH_90' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_82[148 /*6*/]), "VEX_91_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_91/IE_TEXTVECH_91' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_82[149 /*6*/]), "VEX_92_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_92/IE_TEXTVECH_92' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_82[150 /*6*/]), "VEX_93_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_93/IE_TEXTVECH_93' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_82[151 /*6*/]), "VEX_94_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_94/IE_TEXTVECH_94' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_82[152 /*6*/]), "VEX_95_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_95/IE_TEXTVECH_95' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_82[153 /*6*/]), "VEX_96_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_96/IE_TEXTVECH_96' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_82[154 /*6*/]), "GO_AS_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_autosalvage/NHP_prep_autosalvage' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_82[155 /*6*/]), "GO_DR_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://nhp_prep_daylightrob/nhp_prep_daylightrob' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_82[156 /*6*/]), "FHTXT_DDR00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_deaddrop/NHP_prep_deaddrop' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_82[157 /*6*/]), "BBTXT_CPS00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_1/BAT_carpark_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_82[158 /*6*/]), "BBTXT_CPS10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_2/BAT_carpark_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_82[159 /*6*/]), "BBTXT_CPS20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_3/BAT_carpark_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_82[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1163[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_82[161 /*6*/]), "XM22FLOW_TXT_0" /* GXT: WELCOME TO THE TROUPE ~nrt~ <img src='img://PHONE_MESSAGE_D_DUDE/PHONE_MESSAGE_D_DUDE' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	StringCopy(&(Local_82[162 /*6*/]), "CHM6_PMSG_TR", 24);
	StringCopy(&(Local_1163[162 /*6*/]), "UPDT1_2023_TEXT_LSA6_1", 24);
	StringCopy(&(Local_82[163 /*6*/]), "CBR2_PMSG_P1", 24);
	StringCopy(&(Local_1163[163 /*6*/]), "UPDT2_2023_TEXT_IMG_2", 24);
	StringCopy(&(Local_82[164 /*6*/]), "CBR2_PMSG_P2", 24);
	StringCopy(&(Local_1163[164 /*6*/]), "UPDT2_2023_TEXT_IMG_3", 24);
	StringCopy(&(Local_82[165 /*6*/]), "CBR2_PMSG_P3", 24);
	StringCopy(&(Local_1163[165 /*6*/]), "UPDT2_2023_TEXT_IMG_4", 24);
	StringCopy(&(Local_82[166 /*6*/]), "CBR2_PMSG_TB", 24);
	StringCopy(&(Local_1163[166 /*6*/]), "UPDT2_2023_TEXT_IMG_5", 24);
	StringCopy(&(Local_82[167 /*6*/]), "CBR3_PMSG", 24);
	StringCopy(&(Local_1163[167 /*6*/]), "UPDT2_2023_TEXT_IMG_6", 24);
	StringCopy(&(Local_82[168 /*6*/]), "CBR4_PMSG", 24);
	StringCopy(&(Local_1163[168 /*6*/]), "UPDT2_2023_TEXT_IMG_7", 24);
	StringCopy(&(Local_82[169 /*6*/]), "BTY_HVTM_CEO" /* GXT: Target: Grace Whitney~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[169 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[170 /*6*/]), "BTY_HVTM_RESCUE" /* GXT: Target: Chaz Lieberman~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[170 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[171 /*6*/]), "BTY_HVTM_AMBUSH" /* GXT: Target: Leroy O'Neil~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[171 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[172 /*6*/]), "BTY_HVTM_HEAVY" /* GXT: Target: Brock Thompson~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[172 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[173 /*6*/]), "BTY_HVTM_MOVIE" /* GXT: Target: Cleo Song~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[173 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[174 /*6*/]), "BTY_HVTM_LFINV" /* GXT: Target: Omar Garcia~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_HV/IMG_HV_6' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[174 /*6*/]), "UPDT1_24_TEXT_HV", 24);
	StringCopy(&(Local_82[175 /*6*/]), "BTY_HVTM_TOWER" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_TOWER/UPDT1_24_TEXT_TOWER' vspace='0' width='256' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1163[175 /*6*/]), "UPDT1_24_TEXT_TOWER", 24);
	if (func_61(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SNP_IMG_0_0" /* GXT: ~nrt~ <img src='img://SCLUB_1/DEL_PERRO_PIER_1_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "SNP_IMG_0_1" /* GXT: ~nrt~ <img src='img://SCLUB_1/ORIENTAL_THEATER_1_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[46 /*6*/]), "SNP_IMG_0_2" /* GXT: ~nrt~ <img src='img://SCLUB_1/GALILEO_OBSERVATORY_1_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[47 /*6*/]), "SNP_IMG_0_3" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_ARENA_1_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[48 /*6*/]), "SNP_IMG_0_4" /* GXT: ~nrt~ <img src='img://SCLUB_1/CHUMASH_PIER_1_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[49 /*6*/]), "SNP_IMG_0_5" /* GXT: ~nrt~ <img src='img://SCLUB_1/RICHMAN_HOTEL_1_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[50 /*6*/]), "SNP_IMG_0_6" /* GXT: ~nrt~ <img src='img://SCLUB_1/ROCKFORD_HILLS_CITY_HALL_1_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[51 /*6*/]), "SNP_IMG_0_7" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_TOWER_1_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[52 /*6*/]), "SNP_IMG_0_8" /* GXT: ~nrt~ <img src='img://SCLUB_1/PIPELINE_INN_1_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[53 /*6*/]), "SNP_IMG_0_9" /* GXT: ~nrt~ <img src='img://SCLUB_1/THE_VICEROY_HOTEL_1_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[54 /*6*/]), "SNP_IMG_1_0" /* GXT: ~nrt~ <img src='img://SCLUB_2/VENETIAN_2_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[55 /*6*/]), "SNP_IMG_1_1" /* GXT: ~nrt~ <img src='img://SCLUB_2/OPIUM_NIGHTS_HOTEL_2_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[56 /*6*/]), "SNP_IMG_1_2" /* GXT: ~nrt~ <img src='img://SCLUB_2/VINEWOOD_SIGN_2_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[57 /*6*/]), "SNP_IMG_1_3" /* GXT: ~nrt~ <img src='img://SCLUB_2/LEGION_SQUARE_2_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[58 /*6*/]), "SNP_IMG_1_4" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON_CRASTENBURG_HOTEL_2_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[59 /*6*/]), "SNP_IMG_1_5" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON-CRASTENBURG-RICHMAN_2_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[60 /*6*/]), "SNP_IMG_1_6" /* GXT: ~nrt~ <img src='img://SCLUB_2/RANCHO_TOWERS_2_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[61 /*6*/]), "SNP_IMG_1_7" /* GXT: ~nrt~ <img src='img://SCLUB_2/MIRROR_PARK_2_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[62 /*6*/]), "SNP_IMG_1_8" /* GXT: ~nrt~ <img src='img://SCLUB_2/BJ_SMITH_REC_CENTER_2_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[64 /*6*/]), "SNP_IMG_1_9" /* GXT: ~nrt~ <img src='img://SCLUB_2/ROCKFORD_DORSET_HOTEL_2_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[65 /*6*/]), "SNP_IMG_2_0" /* GXT: ~nrt~ <img src='img://SCLUB_3/KOREAN_PAVILLION_3_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[66 /*6*/]), "SNP_IMG_2_1" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BEACH_3_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[67 /*6*/]), "SNP_IMG_2_2" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_RACETRACK_3_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[68 /*6*/]), "SNP_IMG_2_3" /* GXT: ~nrt~ <img src='img://SCLUB_3/SISYPHUS_THEATER_3_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[69 /*6*/]), "SNP_IMG_2_4" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BOULEVARD_BRIDGE_3_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[70 /*6*/]), "SNP_IMG_2_5" /* GXT: ~nrt~ <img src='img://SCLUB_3/ROCKFORD_HILLS_CHURCH_3_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[71 /*6*/]), "SNP_IMG_2_6" /* GXT: ~nrt~ <img src='img://SCLUB_3/LAST_TRAIN_DINER_3_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[72 /*6*/]), "SNP_IMG_2_7" /* GXT: ~nrt~ <img src='img://SCLUB_3/VON-CRASTENBURG-HOTEL_3_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[73 /*6*/]), "SNP_IMG_2_8" /* GXT: ~nrt~ <img src='img://SCLUB_3/METEOR_STREET_APARTMENTS_3_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[74 /*6*/]), "SNP_IMG_2_9" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_HILLS_3_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1163[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_60(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_82[44 /*6*/]), "GBC_TM_TC100" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[45 /*6*/]), "GBC_TM_TC101" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[46 /*6*/]), "GBC_TM_TC102" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[47 /*6*/]), "GBC_TM_TC103" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[48 /*6*/]), "GBC_TM_TC104" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[49 /*6*/]), "GBC_TM_TC105" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[50 /*6*/]), "GBC_TM_TC110" /* GXT: This one should be easy - we have the make and model of the car. It's an orange Rhapsody. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[51 /*6*/]), "GBC_TM_TC111" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[52 /*6*/]), "GBC_TM_TC120" /* GXT: Stay sharp, this one was last seen on a yellow Vindicator. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[53 /*6*/]), "GBC_TM_TC121" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[54 /*6*/]), "GBC_TM_TC130" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at the graveyard a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[55 /*6*/]), "GBC_TM_TC140" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[56 /*6*/]), "GBC_TM_TC200" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[57 /*6*/]), "GBC_TM_TC201" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[58 /*6*/]), "GBC_TM_TC202" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[59 /*6*/]), "GBC_TM_TC203" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[60 /*6*/]), "GBC_TM_TC204" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[61 /*6*/]), "GBC_TM_TC205" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[62 /*6*/]), "GBC_TM_TC210" /* GXT: This one should be easy - we have the make and model of the car. It's a white 9F. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[63 /*6*/]), "GBC_TM_TC211" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[64 /*6*/]), "GBC_TM_TC220" /* GXT: Stay sharp, this one was last seen on a pink Faggio. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[65 /*6*/]), "GBC_TM_TC221" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[66 /*6*/]), "GBC_TM_TC230" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at IAA headquarters a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[67 /*6*/]), "GBC_TM_TC240" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_59(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSH_TXT_MD_01M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid01/heist3_prep_maid01' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSH_TXT_MD_02M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid02/heist3_prep_maid02' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_59(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSHT_IMC_00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier1/heist3_cashier1' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSHT_IMC_10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier2/heist3_cashier2' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "CSHT_IMC_20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier3/heist3_cashier3' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_82[47 /*6*/]), "CSHT_IMC_30M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier4/heist3_cashier4' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_58(PLAYER::PLAYER_ID()) == 17)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ILHTEXT_SFE00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist4_sec_guard/heist4_sec_guard' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_57(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "TR_TXT_CV1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS/TUNER_TEXT_IMG_VIRUS' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_82[45 /*6*/]), "TR_TXT_CV2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_02/TUNER_TEXT_IMG_VIRUS_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_82[46 /*6*/]), "TR_TXT_CV3" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_03/TUNER_TEXT_IMG_VIRUS_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_57(PLAYER::PLAYER_ID()) == 11)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ROBTEXT_IAA00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_IAA/TUNER_TEXT_IMG_IAA' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_56(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "FXR_TXT_WI1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://FXR_WAYIN/FXR_WAYIN' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_55(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "DL_TXT_PHOTO1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_1/UPDT2_2022_TEXT_IMG_1' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "DL_TXT_PHOTO2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_2/UPDT2_2022_TEXT_IMG_2' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "DL_TXT_PHOTO3" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_3/UPDT2_2022_TEXT_IMG_3' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
	else if (func_54(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_82[44 /*6*/]), "S23_SOAD_TXT0" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_1/UPDT1_2023_TEXT_IMG_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_2023_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "S23_SOAD_TXT1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_2/UPDT1_2023_TEXT_IMG_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_2023_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "S23_SOAD_TXT2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_3/UPDT1_2023_TEXT_IMG_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_2023_TEXT_IMG_3", 24);
	}
	else if (func_54(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ACR_TXT_IMG" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_4/UPDT1_2023_TEXT_IMG_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_2023_TEXT_IMG_4", 24);
	}
	else if (func_53(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SALV_SUBF_T_HOS" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2023_TEXT_IMG_1/UPDT2_2023_TEXT_IMG_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT2_2023_TEXT_IMG_1", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_00" /* GXT: Target: Beau Duggan~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ARCADE/IMG_ARCADE_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_01" /* GXT: Target: Bill Duggan~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ARCADE/IMG_ARCADE_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_02" /* GXT: Target: Hunter Duggan~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ARCADE/IMG_ARCADE_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_ARCADE", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_10" /* GXT: Target: Lil Prince~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CCTV/IMG_CCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_11" /* GXT: Target: Xavier Fremond~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CCTV/IMG_CCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_12" /* GXT: Target: Jalen Kennedy~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CCTV/IMG_CCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_CCTV", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 2)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_20" /* GXT: Target: Rylee Rose~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CLUB/IMG_CLUB_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_21" /* GXT: Target: Serenity Pierce~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CLUB/IMG_CLUB_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_22" /* GXT: Target: Angel Kenney~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_CLUB/IMG_CLUB_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_CLUB", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 3)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_30" /* GXT: Target: Sabrina Gray~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_INTIM/IMG_INTIMIDATION_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_31" /* GXT: Target: India Wood~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_INTIM/IMG_INTIMIDATION_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_32" /* GXT: Target: Brigitte Foster~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_INTIM/IMG_INTIMIDATION_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_INTIM", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_40" /* GXT: Target: Cook Kenzie~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_PRISON/IMG_PRISON_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_41" /* GXT: Target: Marquel Green~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_PRISON/IMG_PRISON_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_42" /* GXT: Target: Colby Wright~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_PRISON/IMG_PRISON_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_PRISON", 24);
	}
	else if (func_50(PLAYER::PLAYER_ID()) == 5)
	{
		StringCopy(&(Local_82[44 /*6*/]), "BTFM_TXT_50" /* GXT: Target: Ricky Ji~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ROBBERY/IMG_ROBBERY_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_82[45 /*6*/]), "BTFM_TXT_51" /* GXT: Target: Tommy Lim~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ROBBERY/IMG_ROBBERY_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
		StringCopy(&(Local_82[46 /*6*/]), "BTFM_TXT_52" /* GXT: Target: LJ Ha~n~~n~IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_24_TEXT_ROBBERY/IMG_ROBBERY_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_ROBBERY", 24);
	}
	else if (func_47(PLAYER::PLAYER_ID()) == 338)
	{
		StringCopy(&(Local_82[44 /*6*/]), "DLYBTTXTMAR20" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_0/BOUNTY_0' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[44 /*6*/]), "UPDT1_24_TEXT_BOUNTY_0", 24);
		StringCopy(&(Local_82[45 /*6*/]), "DLYBTTXTMAR21" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_1/BOUNTY_1' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[45 /*6*/]), "UPDT1_24_TEXT_BOUNTY_1", 24);
		StringCopy(&(Local_82[46 /*6*/]), "DLYBTTXTMAR22" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_2/BOUNTY_2' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[46 /*6*/]), "UPDT1_24_TEXT_BOUNTY_2", 24);
		StringCopy(&(Local_82[47 /*6*/]), "DLYBTTXTMAR23" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_3/BOUNTY_3' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[47 /*6*/]), "UPDT1_24_TEXT_BOUNTY_3", 24);
		StringCopy(&(Local_82[48 /*6*/]), "DLYBTTXTMAR24" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_4/BOUNTY_4' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[48 /*6*/]), "UPDT1_24_TEXT_BOUNTY_4", 24);
		StringCopy(&(Local_82[49 /*6*/]), "DLYBTTXTMAR25" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_5/BOUNTY_5' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[49 /*6*/]), "UPDT1_24_TEXT_BOUNTY_5", 24);
		StringCopy(&(Local_82[50 /*6*/]), "DLYBTTXTMAR26" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_6/BOUNTY_6' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[50 /*6*/]), "UPDT1_24_TEXT_BOUNTY_6", 24);
		StringCopy(&(Local_82[51 /*6*/]), "DLYBTTXTMAR27" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_7/BOUNTY_7' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[51 /*6*/]), "UPDT1_24_TEXT_BOUNTY_7", 24);
		StringCopy(&(Local_82[52 /*6*/]), "DLYBTTXTMAR28" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_8/BOUNTY_8' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[52 /*6*/]), "UPDT1_24_TEXT_BOUNTY_8", 24);
		StringCopy(&(Local_82[53 /*6*/]), "DLYBTTXTMAR29" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_9/BOUNTY_9' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[53 /*6*/]), "UPDT1_24_TEXT_BOUNTY_9", 24);
		StringCopy(&(Local_82[54 /*6*/]), "DLYBTTXTMAR210" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_10/BOUNTY_10' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[54 /*6*/]), "UPDT1_24_TEXT_BOUNTY_10", 24);
		StringCopy(&(Local_82[55 /*6*/]), "DLYBTTXTMAR211" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_11/BOUNTY_11' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[55 /*6*/]), "UPDT1_24_TEXT_BOUNTY_11", 24);
		StringCopy(&(Local_82[56 /*6*/]), "DLYBTTXTMAR212" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_12/BOUNTY_12' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[56 /*6*/]), "UPDT1_24_TEXT_BOUNTY_12", 24);
		StringCopy(&(Local_82[57 /*6*/]), "DLYBTTXTMAR213" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_13/BOUNTY_13' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[57 /*6*/]), "UPDT1_24_TEXT_BOUNTY_13", 24);
		StringCopy(&(Local_82[58 /*6*/]), "DLYBTTXTMAR214" /* GXT: This is who you are looking for.~n~~nrt~ <img src='img://UPDT1_24_TEXT_BOUNTY_14/BOUNTY_14' vspace='0' width='320' height='200'/> ~nrt~ */, 24);
		StringCopy(&(Local_1163[58 /*6*/]), "UPDT1_24_TEXT_BOUNTY_14", 24);
	}
}

int func_47(int iParam0)//Position - 0x511D
{
	if (func_49(iParam0))
	{
		if (func_48(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_48(int iParam0, int iParam1)//Position - 0x5149
{
	if (func_49(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_49(var uParam0)//Position - 0x518D
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

int func_50(int iParam0)//Position - 0x51AF
{
	if (func_47(iParam0) == 337)
	{
		return func_51(iParam0, 337);
	}
	return -1;
}

int func_51(int iParam0, int iParam1)//Position - 0x51D0
{
	if (func_47(iParam0) == iParam1)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_52(int iParam0)//Position - 0x51ED
{
	if (func_48(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_53(int iParam0)//Position - 0x5210
{
	switch (func_47(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_52(iParam0);
		
		default:
	}
	return -1;
}

int func_54(int iParam0)//Position - 0x524B
{
	if (func_47(iParam0) == 317)
	{
		return func_51(iParam0, 317);
	}
	return -1;
}

int func_55(int iParam0)//Position - 0x526C
{
	if (func_47(iParam0) == 307)
	{
		return func_51(iParam0, 307);
	}
	return -1;
}

int func_56(int iParam0)//Position - 0x528D
{
	if (func_47(iParam0) == 264)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_57(int iParam0)//Position - 0x52AB
{
	if (func_47(iParam0) == 271)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_58(int iParam0)//Position - 0x52C9
{
	if (func_47(iParam0) == 256)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_59(int iParam0)//Position - 0x52E7
{
	if (func_47(iParam0) == 158)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x5304
{
	if (func_47(iParam0) == 243)
	{
		return func_52(iParam0);
	}
	return -1;
}

int func_61(int iParam0)//Position - 0x5321
{
	if (func_47(iParam0) == 237 || func_47(iParam0) == 250)
	{
		return func_52(iParam0);
	}
	return -1;
}

void func_62()//Position - 0x534E
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_63(0);
	}
	if (iLocal_2397)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_63(int iParam0)//Position - 0x5378
{
	if (func_68())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_67())
		{
			func_65(1, 1);
		}
		else
		{
			func_65(0, 0);
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
	if (!func_64())
	{
		Global_20930.f_1 = 3;
	}
}

int func_64()//Position - 0x5402
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1)//Position - 0x5429
{
	if (bParam0)
	{
		if (func_66(0))
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

int func_66(int iParam0)//Position - 0x549D
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

bool func_67()//Position - 0x54F4
{
	return BitTest(Global_1956920, 5);
}

bool func_68()//Position - 0x5502
{
	return BitTest(Global_1956920, 19);
}

