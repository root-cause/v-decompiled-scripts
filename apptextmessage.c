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
	struct<6> Local_82[170];
	struct<6> Local_1103[170];
	struct<8> Local_2124[19];
	int iLocal_2277 = 0;
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
	func_47();
	Global_23232 = 0;
	Global_114372.f_14054[Global_20813 /*20*/].f_18 = 0;
	Global_21024 = 0;
	func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	func_43();
	if (Global_20813.f_1 > 3)
	{
		Global_20813.f_1 = 7;
	}
	iLocal_63 = MISC::GET_GAME_TIMER();
	Global_20817 = 1;
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
		if (Global_20813.f_1 != 9)
		{
			switch (Global_20813.f_1)
			{
				case 7:
					if (Global_23232 == 0)
					{
						if (Global_2749459 == 0)
						{
							func_38();
							func_33();
						}
					}
					break;
				
				case 8:
					if (Global_23232 == 1)
					{
						func_5();
						func_38();
					}
					break;
				
				default:
					break;
			}
			if (Global_23232 == 0)
			{
				if (func_4())
				{
					func_62();
				}
			}
			else if (func_3(2, Global_20781, 0) || BitTest(Global_8684, 12))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					MISC::CLEAR_BIT(&Global_8684, 12);
					func_2();
					Global_20791 = 1;
					Global_23232 = 0;
					if (Global_20813.f_1 > 3)
					{
						Global_20813.f_1 = 7;
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					{
						func_62();
					}
					func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_44();
					func_43();
					if (Global_114372.f_14144[iLocal_56 /*104*/].f_29 > 0)
					{
						if (Global_114372.f_14144[iLocal_56 /*104*/].f_31 == 1)
						{
							Global_114372.f_14144[iLocal_56 /*104*/].f_29 = 4;
							Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 1;
						}
						else
						{
							Global_114372.f_14144[iLocal_56 /*104*/].f_29 = 4;
							Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 1;
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
	if (((Global_20813.f_1 == 1 || Global_20813.f_1 == 3) || Global_20813.f_1 == 0) || Global_20757 == 1)
	{
		Global_20800 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x27A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20802, true);
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
	if (Global_9289 == 1 || Global_20813.f_1 < 7)
	{
		Global_20800 = 1;
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
	if (Global_114372.f_14144[iLocal_56 /*104*/].f_24 == 1)
	{
		if (Global_20791 == 0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20784))
			{
				func_2();
				Global_20791 = 1;
				func_26();
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_27 == 1)
				{
					Global_114372.f_14144[iLocal_56 /*104*/].f_99[0] = 0;
					Global_114372.f_14144[iLocal_56 /*104*/].f_99[1] = 0;
					Global_114372.f_14144[iLocal_56 /*104*/].f_99[2] = 0;
				}
				else
				{
					Global_114372.f_14144[iLocal_56 /*104*/].f_99[Global_20813] = 0;
				}
				if (func_25(iLocal_56))
				{
				}
				else
				{
					Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 0;
					Global_114372.f_14144[iLocal_56 /*104*/].f_28 = 0;
				}
				HUD::THEFEED_REMOVE_ITEM(Global_114372.f_14144[iLocal_56 /*104*/].f_16);
				func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				if (iLocal_54 > 0)
				{
					iLocal_54 = (iLocal_54 - 1);
				}
				func_43();
				if (Global_20813.f_1 > 3)
				{
					Global_20813.f_1 = 7;
					Global_23232 = 0;
				}
			}
		}
	}
	else if (Global_20791 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20785))
		{
			if (iLocal_58 == 1)
			{
				if (Global_20813.f_1 > 3)
				{
					StringCopy(&Global_76352, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_23207), 64);
					Global_76482 = 7;
					MISC::SET_BIT(&Global_8684, 10);
					Global_20813.f_1 = 6;
				}
				func_62();
			}
		}
	}
	if (Global_114372.f_14144[iLocal_56 /*104*/].f_31 == 1)
	{
		if (Global_20791 == 0)
		{
			if (func_3(2, Global_20785, 0))
			{
				func_22();
				Global_20791 = 1;
				Global_114372.f_14144[iLocal_56 /*104*/].f_29 = 2;
				Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 1;
				Global_114372.f_14144[iLocal_56 /*104*/].f_31 = 0;
				MISC::CLEAR_BIT(&Global_8683, 17);
				Global_23232 = 0;
				if (Global_20813.f_1 > 3)
				{
					Global_20813.f_1 = 7;
				}
				func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
		}
	}
	if (Global_20791 == 0 && iLocal_62 == 1)
	{
		if (func_3(2, Global_20782, 0))
		{
			Global_20791 = 1;
			if (Global_114372.f_14144[iLocal_56 /*104*/].f_29 > 0)
			{
				func_22();
				Global_114372.f_14144[iLocal_56 /*104*/].f_29 = 3;
				Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 1;
				Global_23232 = 0;
				if (Global_20813.f_1 > 3)
				{
					Global_20813.f_1 = 7;
				}
				func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 6f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_44();
				func_43();
			}
			else if (Global_114372.f_14144[iLocal_56 /*104*/].f_30 == 1)
			{
				func_22();
				Global_7998 = 144;
				if (Global_20813.f_1 > 3)
				{
					Global_20813.f_1 = 10;
					if (func_21() == 0)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_20811 = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appContacts");
				Global_7998 = Global_114372.f_14144[iLocal_56 /*104*/].f_17;
				if (func_17(Global_7998, Global_20813) == 0)
				{
					func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_211" /* GXT: DIALING... */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_211" /* GXT: DIALING... */, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
				func_7();
				func_62();
			}
		}
	}
}

void func_7()//Position - 0x6A6
{
	char cVar0[24];
	
	if (Global_20796 == 1)
	{
		return;
	}
	if (Global_20813.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		if (Global_79248)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20813.f_1)
	{
		case 6:
			func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_9288);
			if (Global_9288 == 1)
			{
				func_46(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20817;
			}
			else
			{
				func_46(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20818), -1082130432, -1082130432, -1082130432);
				Global_20793 = Global_20818;
			}
			if (Global_20801)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21027 == 0)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else if (Global_79248)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8683, 17);
			}
			else
			{
				if (Global_21026 == 1)
				{
					if (Global_20801)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20801)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8683, 17);
			}
			if (Global_79248)
			{
				func_12();
				MISC::CLEAR_BIT(&Global_8685, 9);
				func_46(Global_20794, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20817), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_46(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_16(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20756)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20812 == 1)
			{
				func_11();
				func_46(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_10("CELL_217" /* GXT: INCOMING CALL */);
					func_10("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_17(Global_7998, Global_20813) == 0)
				{
					func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2139[Global_7998 /*29*/].f_3), 0);
				}
				func_46(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22166 == 4 || Global_22166 == 3)
			{
				func_46(Global_20794, "SET_THEME", SYSTEM::TO_FLOAT(Global_114372.f_14054[Global_20813 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_11();
				if (Global_22179)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22181);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_10("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_10("CELL_219" /* GXT: CONNECTED */);
					func_10("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22424)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_17(Global_7998, Global_20813) == 0)
					{
						func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_7998 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_46(Global_20794, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2139[Global_7998 /*29*/].f_3), &(Global_2139[Global_7998 /*29*/].f_7), &cVar0, &(Global_2139[Global_7998 /*29*/].f_3), 0);
					}
				}
				func_46(Global_20794, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()//Position - 0xC5B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20794))
	{
		func_9();
		if (Global_20812 == 1)
		{
			if (Global_20801)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22213)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8683, 20))
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			func_16(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
			if (BitTest(Global_8683, 20))
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20801)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_20756)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_9()//Position - 0xDD9
{
	if (Global_79248)
	{
		func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8683, 17);
	}
}

void func_10(char* sParam0)//Position - 0xE09
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_11()//Position - 0xE1B
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813 == 0)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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
		if (Global_20813 == 1)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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
		if (Global_20813 == 2)
		{
			switch (Global_114372.f_14054[Global_20813 /*20*/].f_6)
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
		if (Global_20813 == 3)
		{
			switch (Global_4543259)
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

void func_12()//Position - 0x1092
{
	if (Global_79248)
	{
		if (func_13() == 0)
		{
			return;
		}
		func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8683, 17);
	}
}

int func_13()//Position - 0x10CD
{
	return 0;
}

void func_14(int iParam0)//Position - 0x10D6
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
	
	Global_23234 = 0;
	Global_9288 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9252[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_15(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar2 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2695946)
							{
								if (iVar1 == 14)
								{
									func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9252[iVar0] = 1;
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
				if (iParam0 == Global_8690[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8690[iVar1 /*15*/].f_4)
					{
						if (Global_9252[iVar0] == 0)
						{
							Global_9216[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114372.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114372.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114372.f_14144[iVar3 /*104*/].f_99[Global_20813] == 1)
											{
												Global_23234++;
											}
										}
									}
									iVar3++;
								}
								func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23234), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79248)
								{
									iVar4 = 0;
									iVar4 = Global_4541717;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541718[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541718[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541718[iVar5 /*104*/].f_99[Global_20813] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20813)
									{
										case 0:
											iVar6 = Global_45133;
											break;
										
										case 1:
											iVar6 = Global_45134;
											break;
										
										case 2:
											iVar6 = Global_45135;
											break;
										
										default:
											break;
									}
									func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23229), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8689);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8684, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8684, 3))
								{
									iVar8 = 42;
									Global_21029 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21029 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8690[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8684, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8690[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_10(&(Global_8690[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8690[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1881898.f_1;
								func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_16(Global_20794, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8690[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8690[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9252[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_15(int iParam0)//Position - 0x1662
{
	return Global_43922 == iParam0;
}

void func_16(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1670
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

int func_17(int iParam0, int iParam1)//Position - 0x1723
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_24[iParam1];
}

void func_18(char* sParam0)//Position - 0x174D
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()//Position - 0x176D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79248)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79248)
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
			if (!Global_20756)
			{
				if (Global_7998 != 128)
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
								if (Global_79248)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8683, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_20()//Position - 0x1891
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

int func_21()//Position - 0x18B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			if (Global_20756 == 0)
			{
				if (Global_7998 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22166 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
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
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1919171))))
		{
			return 0;
		}
		if (Global_113420)
		{
			return 0;
		}
	}
	if (Global_79248)
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
	if (Global_4543261 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114372.f_14054.f_89)
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

void func_22()//Position - 0x1AFE
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20802, true);
		func_23();
	}
}

void func_23()//Position - 0x1B23
{
	if (func_24())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_24()//Position - 0x1B37
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79248)
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
	if (Global_4543261 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0x1B7E
{
	if ((Global_114372.f_14144[iParam0 /*104*/].f_99[0] == 1 || Global_114372.f_14144[iParam0 /*104*/].f_99[1] == 1) || Global_114372.f_14144[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_26()//Position - 0x1BD3
{
	if (func_15(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_27();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

var func_27()//Position - 0x1C75
{
	func_28();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_28()//Position - 0x1C8E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_31(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER::PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_15(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_29(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_29(int iParam0)//Position - 0x1D8B
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1D97
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_31(int iParam0)//Position - 0x1DD4
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x1DF9
{
	return Global_2139[iParam0 /*29*/];
}

void func_33()//Position - 0x1E08
{
	struct<16> Var0;
	char* sVar16;
	int iVar17;
	
	if (Global_20791 == 0)
	{
		if ((func_3(2, Global_20782, 0) || Global_114372.f_14054[Global_20813 /*20*/].f_17 == 1) || Global_23226 == 1)
		{
			if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 0 && Global_23226 == 0)
			{
				func_22();
			}
			Global_20791 = 1;
			iLocal_62 = 0;
			iLocal_56 = iLocal_17[iLocal_54];
			if (Global_114372.f_14144[iLocal_56 /*104*/].f_24 != 0)
			{
				if (Global_20813.f_1 > 3)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8683, 17);
					Global_20813.f_1 = 8;
				}
				if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 1 || Global_23226 == 1)
				{
					iLocal_56 = iLocal_17[0];
					iLocal_55 = 0;
					if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 1)
					{
					}
					Global_23226 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_60 = 0;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "GET_CURRENT_SELECTION");
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
				Global_114372.f_14144[iLocal_56 /*104*/].f_28 = 1;
				iLocal_58 = 0;
				StringCopy(&Global_23207, "NO_HYPERLINK", 64);
				Var0 = { Global_114372.f_14144[iLocal_56 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (HUD::DOES_TEXT_LABEL_EXIST(&Var0))
				{
					Global_23207 = { Var0 };
					iLocal_58 = 1;
					if (Global_20801)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267" /* GXT: LINK */, 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					MISC::SET_BIT(&Global_8683, 17);
					Global_114372.f_14144[iLocal_56 /*104*/].f_26 = 1;
					Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 2;
				}
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_26 == 0)
				{
					Global_114372.f_14144[iLocal_56 /*104*/].f_24 = 1;
				}
				func_37();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2139[Global_114372.f_14144[iLocal_56 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114372.f_14144[iLocal_56 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114372.f_14144[iLocal_56 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_33));
						if (Global_114372.f_14144[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
						}
						if ((Global_114372.f_14144[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114372.f_14144[iLocal_56 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iLocal_56 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114372.f_14144[iLocal_56 /*104*/].f_49);
						if (Global_114372.f_14144[iLocal_56 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
						}
						if ((Global_114372.f_14144[iLocal_56 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iLocal_56 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_36(iLocal_56);
						break;
					
					case 5:
						func_36(iLocal_56);
						break;
					
					case 6:
						func_36(iLocal_56);
						break;
					
					case 7:
						func_36(iLocal_56);
						break;
					
					case 8:
						func_36(iLocal_56);
						break;
					
					case 9:
						func_36(iLocal_56);
						break;
					
					case 10:
						func_36(iLocal_56);
						break;
					
					case 11:
						func_36(iLocal_56);
						break;
					
					case 12:
						func_35(iLocal_56);
						break;
				}
				if (Global_23235[iLocal_56] == 0)
				{
					if (Global_114372.f_14144[iLocal_56 /*104*/].f_17 == 159)
					{
						func_10("CELL_COMIC_P" /* GXT: CHAR_COMIC_STORE */);
					}
					else
					{
						func_10(&(Global_2139[Global_114372.f_14144[iLocal_56 /*104*/].f_17 /*29*/].f_7));
					}
				}
				else
				{
					if (PED::IS_PEDHEADSHOT_VALID(Global_23235[iLocal_56]))
					{
						if (PED::IS_PEDHEADSHOT_READY(Global_23235[iLocal_56]))
						{
							sVar16 = PED::GET_PEDHEADSHOT_TXD_STRING(Global_23235[iLocal_56]);
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
				Global_23232 = 1;
				func_46(Global_20794, "DISPLAY_VIEW", 7f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_34(Global_20794, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
				HUD::THEFEED_REMOVE_ITEM(Global_114372.f_14144[iLocal_56 /*104*/].f_16);
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_29 > 0)
				{
					if (Global_20801)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212" /* GXT: YES */, 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_114372.f_14144[iLocal_56 /*104*/].f_30 == 1)
				{
					if (Global_20801)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_29 > 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/]), "CELL_FINV"))
					{
						if (Global_20801)
						{
							func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20794, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_20801)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /* GXT: NO */, 0, 0, 0, 0);
					}
					else
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20801)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
				}
				else
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_114372.f_14144[iLocal_56 /*104*/].f_24 == 2)
				{
					if (Global_114372.f_14144[iLocal_56 /*104*/].f_31 == 1)
					{
						iLocal_58 = 0;
						if (Global_20801)
						{
							func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264" /* GXT: BARTER */, 0, 0, 0, 0);
						}
						else
						{
							func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						MISC::SET_BIT(&Global_8683, 17);
					}
					else if (iLocal_58 == 0)
					{
						func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8683, 17);
					}
				}
				else if (Global_20801)
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216" /* GXT: DELETE */, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8683, 17);
				}
				else
				{
					func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_8683, 17);
				}
				Global_114372.f_14054[Global_20813 /*20*/].f_18 = 0;
				Global_114372.f_14054[Global_20813 /*20*/].f_17 = 0;
			}
			else
			{
				iVar17 = 0;
				if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 1 || Global_23226 == 1)
				{
					if (Global_23226)
					{
					}
					iVar17 = 1;
				}
				Global_114372.f_14054[Global_20813 /*20*/].f_18 = 0;
				Global_114372.f_14054[Global_20813 /*20*/].f_17 = 0;
				if (iVar17 == 1)
				{
					iVar17 = 0;
					Global_20813.f_1 = 3;
				}
			}
		}
		if (Global_2749459 == 0)
		{
			if (Global_79248)
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_20785);
				if (func_3(2, Global_20785, 0))
				{
					Global_20791 = 1;
					Global_2749459 = 1;
				}
			}
		}
	}
}

void func_34(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x27AC
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

void func_35(int iParam0)//Position - 0x2807
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_114372.f_14144[iParam0 /*104*/].f_49)
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
	while (iVar0 < Global_114372.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_114372.f_14144[iParam0 /*104*/].f_32)
		{
			case 12:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927858[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_36(int iParam0)//Position - 0x2914
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_114372.f_14144[iParam0 /*104*/].f_49)
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
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iParam0 /*104*/]));
	while (iVar0 < Global_114372.f_14144[iParam0 /*104*/].f_49)
	{
		switch (Global_114372.f_14144[iParam0 /*104*/].f_32)
		{
			case 4:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2738587.f_1762[iVar0 /*4*/]));
				break;
			
			case 5:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927727[iVar0 /*4*/]));
				break;
			
			case 6:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927768[iVar0 /*4*/]));
				break;
			
			case 7:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927789[iVar0 /*4*/]));
				break;
			
			case 8:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927806[iVar0 /*4*/]));
				break;
			
			case 9:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927819[iVar0 /*4*/]));
				break;
			
			case 10:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927832[iVar0 /*4*/]));
				break;
			
			case 11:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1927845[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_37()//Position - 0x2AB5
{
	int iVar0;
	
	if (iLocal_2277)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	iLocal_2277 = 0;
	if (Global_114372.f_14144[iLocal_56 /*104*/].f_24 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 170)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_82[iVar0 /*6*/])) && MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iLocal_56 /*104*/]), &(Local_82[iVar0 /*6*/])))
			{
				if (iVar0 < 19)
				{
					MemCopy(&uLocal_66, {Local_2124[iVar0 /*8*/]}, 16);
				}
				else
				{
					MemCopy(&uLocal_66, {Local_1103[iVar0 /*6*/]}, 16);
				}
				iLocal_2277 = 1;
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

void func_38()//Position - 0x2B60
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
		if (func_3(2, Global_20789, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			if (iLocal_54 > 0)
			{
				iLocal_54 = (iLocal_54 - 1);
			}
			func_41();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_20790, 0) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			iLocal_54++;
			if (iLocal_54 == iLocal_53)
			{
				iLocal_54 = 0;
			}
			func_39();
			iLocal_59 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_39()//Position - 0x2BE5
{
	func_46(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_40();
}

void func_40()//Position - 0x2C22
{
	if (func_24())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_41()//Position - 0x2C45
{
	func_46(Global_20794, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20802, true);
	func_42();
}

void func_42()//Position - 0x2C82
{
	if (func_24())
	{
		if (Global_21030 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_43()//Position - 0x2CA5
{
	if (Global_114372.f_14054[Global_20813 /*20*/].f_17 == 0)
	{
		if (iLocal_55 < 0)
		{
			iLocal_55 = 0;
		}
		func_46(Global_20794, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_55), -1082130432, -1082130432, -1082130432);
		func_34(Global_20794, "SET_HEADER", "CELL_1" /* GXT: Texts */, 0, 0, 0, 0);
		if (Global_20801)
		{
			if (iLocal_53 > 0)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214" /* GXT: OPTIONS */, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_53 > 0)
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_16(Global_20794, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_16(Global_20794, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_79248)
		{
			func_16(Global_20794, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
		else
		{
			func_16(Global_20794, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8683, 17);
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_44()//Position - 0x2DE1
{
	int iVar0[35];
	int iVar36;
	int iVar37;
	int iVar38;
	
	iLocal_53 = 0;
	func_26();
	iVar36 = 0;
	while (iVar36 < 34)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			func_62();
		}
		iVar37 = 0;
		iVar38 = 34;
		Global_114372.f_14144[iVar38 /*104*/].f_18 = -1;
		Global_114372.f_14144[iVar38 /*104*/].f_18.f_1 = 0;
		Global_114372.f_14144[iVar38 /*104*/].f_18.f_2 = 0;
		Global_114372.f_14144[iVar38 /*104*/].f_18.f_3 = 0;
		Global_114372.f_14144[iVar38 /*104*/].f_18.f_5 = 0;
		while (iVar37 < 35)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
			{
				func_62();
			}
			if (iVar0[iVar37] == 0)
			{
				if (Global_114372.f_14144[iVar37 /*104*/].f_24 != 0)
				{
					if (Global_114372.f_14144[iVar37 /*104*/].f_99[Global_20813] == 1)
					{
						if (func_45(Global_114372.f_14144[iVar37 /*104*/].f_18, Global_114372.f_14144[iVar38 /*104*/].f_18))
						{
							iVar38 = iVar37;
							if (Global_114372.f_14144[iVar38 /*104*/].f_28 == 0)
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
		if (Global_114372.f_14144[iVar38 /*104*/].f_24 != 0)
		{
			if (Global_114372.f_14144[iVar38 /*104*/].f_99[Global_20813] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20794, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar36);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114372.f_14144[iVar38 /*104*/].f_18.f_2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_114372.f_14144[iVar38 /*104*/].f_18.f_1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_57);
				if (Global_114372.f_14144[iVar38 /*104*/].f_17 == 145)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH" /* GXT: <C>~a~</C> */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_50));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					func_10(&(Global_2139[Global_114372.f_14144[iVar38 /*104*/].f_17 /*29*/].f_3));
				}
				switch (Global_114372.f_14144[iVar38 /*104*/].f_32)
				{
					case 0:
						func_10(&(Global_114372.f_14144[iVar38 /*104*/]));
						break;
					
					case 1:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_33));
						if (Global_114372.f_14144[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
						}
						if ((Global_114372.f_14144[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 2:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114372.f_14144[iVar38 /*104*/].f_49);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 3:
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_114372.f_14144[iVar38 /*104*/]));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_33));
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114372.f_14144[iVar38 /*104*/].f_49);
						if (Global_114372.f_14144[iVar38 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_67), "NULL"))
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
						}
						if ((Global_114372.f_14144[iVar38 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_67), "NULL")) && !MISC::ARE_STRINGS_EQUAL(&(Global_114372.f_14144[iVar38 /*104*/].f_83), "NULL"))
						{
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iVar38 /*104*/].f_67)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_67));
							}
							if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114372.f_14144[iVar38 /*104*/].f_83)))
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114372.f_14144[iVar38 /*104*/].f_83));
							}
							else
							{
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114372.f_14144[iVar38 /*104*/].f_83));
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
						break;
					
					case 4:
						func_36(iVar38);
						break;
					
					case 5:
						func_36(iVar38);
						break;
					
					case 6:
						func_36(iVar38);
						break;
					
					case 7:
						func_36(iVar38);
						break;
					
					case 8:
						func_36(iVar38);
						break;
					
					case 9:
						func_36(iVar38);
						break;
					
					case 10:
						func_36(iVar38);
						break;
					
					case 11:
						func_36(iVar38);
						break;
					
					case 12:
						func_35(iVar38);
						break;
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (Global_114372.f_14144[iVar36 /*104*/].f_24 != 0)
		{
			if (Global_114372.f_14144[iVar36 /*104*/].f_99[Global_20813] == 1)
			{
				iLocal_53++;
			}
		}
		iVar36++;
	}
}

int func_45(struct<6> Param0, struct<6> Param6)//Position - 0x3332
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

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x341D
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

void func_47()//Position - 0x3480
{
	StringCopy(&(Local_82[0 /*6*/]), "SXT_JUL_1ST" /* GXT: I can't wait until you cum again! ~nrt~ <img src='img://05_a_sext_stripperJuliet/05_a_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[0 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[1 /*6*/]), "SXT_JUL_2ND" /* GXT: Just when I thought that it couldn't get any better! ~nrt~ <img src='img://05_b_sext_stripperJuliet/05_b_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[1 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[2 /*6*/]), "SXT_JUL_NEED" /* GXT: Missing you badly! I want you inside me. ~nrt~ <img src='img://05_c_sext_stripperJuliet/05_c_sext_stripperJuliet' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[2 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_82[3 /*6*/]), "SXT_NIK_1ST" /* GXT: I just wanted you to know that I miss you already :-* ~nrt~ <img src='img://06_a_sext_stripperNikki/06_a_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[3 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_82[4 /*6*/]), "SXT_NIK_2ND" /* GXT: You're the man that I've been looking for my entire life! ~nrt~ <img src='img://06_b_sext_stripperNikki/06_b_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[4 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_82[5 /*6*/]), "SXT_NIK_NEED" /* GXT: Maybe this will get your attention! ~nrt~ <img src='img://06_c_sext_stripperNikki/06_c_sext_stripperNikki' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[5 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_82[6 /*6*/]), "SXT_SAP_1ST" /* GXT: That was deliciously yummy. Next time, I want to be on top. What do you think of this position? ~nrt~ <img src='img://08_a_sext_stripperSapphire/08_a_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[6 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[7 /*6*/]), "SXT_SAP_2ND" /* GXT: Here don't show this to anyone else. ~nrt~ <img src='img://08_b_sext_stripperSapphire/08_b_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[7 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[8 /*6*/]), "SXT_SAP_NEED" /* GXT: My body aches for you! ~nrt~ <img src='img://08_c_sext_stripperSapphire/08_c_sext_stripperSapphire' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[8 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_82[9 /*6*/]), "SXT_INF_1ST" /* GXT: This body is all yours and only yours baby! ~nrt~ <img src='img://04_a_sext_stripperInfernus/04_a_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[9 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[10 /*6*/]), "SXT_INF_2ND" /* GXT: I can hardly walk, that was amazing! ~nrt~ <img src='img://04_b_sext_stripperInfernus/04_b_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[10 /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[11 /*6*/]), "SXT_INF_NEED" /* GXT: My loins quiver with the thought of you! ~nrt~ <img src='img://04_c_sext_stripperInfernus/04_c_sext_stripperInfernus' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[11 /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_82[12 /*6*/]), "SXT_TXI_1ST" /* GXT: I can't stop thinking about the last time. ~nrt~ <img src='img://11_a_sext_taxiLiz/11_a_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[12 /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_82[13 /*6*/]), "SXT_TXI_2ND" /* GXT: You're so amazing! I've been missing out. ~nrt~ <img src='img://11_b_sext_taxiLiz/11_b_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[13 /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_82[14 /*6*/]), "SXT_TXI_NEED" /* GXT: Hey babe, I need a study break... ~nrt~ <img src='img://11_c_sext_taxiLiz/11_c_sext_taxiLiz' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[14 /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_82[15 /*6*/]), "SXT_HCH_1ST" /* GXT: You always know how to give a good ride ;) ~nrt~ <img src='img://10_a_sext_hitcherGirl/10_a_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[15 /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[16 /*6*/]), "SXT_HCH_2ND" /* GXT: Can't wait to meet again honey. ~nrt~ <img src='img://10_b_sext_hitcherGirl/10_b_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[16 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[17 /*6*/]), "SXT_HCH_NEED" /* GXT: I've been thinking... you should let me ride you. ~nrt~ <img src='img://10_c_sext_hitcherGirl/10_c_sext_hitcherGirl' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[17 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_82[18 /*6*/]), "SOL2_PASS" /* GXT: Michael I have put your name in the credits for the film. ~nrt~ <img src='img://ExecutiveProducer/executiveproducer' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_2124[18 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_82[19 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_1103[19 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_82[20 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_1103[20 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_82[21 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_1103[21 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_82[22 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_1103[22 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_82[23 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_1103[23 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_82[24 /*6*/]), "SAD_SMS_0" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_01/MP_SND_TARGET_01' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[24 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_82[25 /*6*/]), "SAD_SMS_1" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_02/MP_SND_TARGET_02' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[25 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_82[26 /*6*/]), "SAD_SMS_2" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_03/MP_SND_TARGET_03' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[26 /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_82[27 /*6*/]), "SAD_SMS_3" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_04/MP_SND_TARGET_04' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[27 /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_82[28 /*6*/]), "SAD_SMS_4" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_05/MP_SND_TARGET_05' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[28 /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_82[29 /*6*/]), "SAD_SMS_5" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_06/MP_SND_TARGET_06' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[29 /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_82[30 /*6*/]), "SAD_SMS_6" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_07/MP_SND_TARGET_07' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[30 /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_82[31 /*6*/]), "SAD_SMS_7" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_08/MP_SND_TARGET_08' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[31 /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_82[32 /*6*/]), "SAD_SMS_8" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_09/MP_SND_TARGET_09' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[32 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_82[33 /*6*/]), "SAD_SMS_9" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_10/MP_SND_TARGET_10' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[33 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_82[34 /*6*/]), "SAD_SMS_10" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_11/MP_SND_TARGET_11' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[34 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_82[35 /*6*/]), "SAD_SMS_11" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_12/MP_SND_TARGET_12' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[35 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_82[36 /*6*/]), "SAD_SMS_12" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_13/MP_SND_TARGET_13' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[36 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_82[37 /*6*/]), "SAD_SMS_13" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_14/MP_SND_TARGET_14' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[37 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_82[38 /*6*/]), "SAD_SMS_14" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_15/MP_SND_TARGET_15' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[38 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_82[39 /*6*/]), "SAD_SMS_15" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_16/MP_SND_TARGET_16' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[39 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_82[40 /*6*/]), "SAD_SMS_16" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_17/MP_SND_TARGET_17' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[40 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_82[41 /*6*/]), "SAD_SMS_17" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_18/MP_SND_TARGET_18' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[41 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_82[42 /*6*/]), "SAD_SMS_18" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_19/MP_SND_TARGET_19' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[42 /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_82[43 /*6*/]), "SAD_SMS_19" /* GXT: Photo of Target ~nrt~ <img src='img://MP_SND_TARGET_20/MP_SND_TARGET_20' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[43 /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_82[44 /*6*/]), "VEX_PM_PHOTO0" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Del Perro Beach ~nrt~ <img src='img://MP_EX_LOCATION_01/MP_EX_LOCATION_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[44 /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_82[45 /*6*/]), "VEX_PM_PHOTO1" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_02/MP_EX_LOCATION_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[45 /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_82[46 /*6*/]), "VEX_PM_PHOTO2" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vinewood Hills ~nrt~ <img src='img://MP_EX_LOCATION_03/MP_EX_LOCATION_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[46 /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_82[47 /*6*/]), "VEX_PM_PHOTO3" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Mount Gordo ~nrt~ <img src='img://MP_EX_LOCATION_04/MP_EX_LOCATION_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[47 /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_82[48 /*6*/]), "VEX_PM_PHOTO4" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Los Santos International Airport ~nrt~ <img src='img://MP_EX_LOCATION_05/MP_EX_LOCATION_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[48 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_82[49 /*6*/]), "VEX_PM_PHOTO5" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Forest ~nrt~ <img src='img://MP_EX_LOCATION_06/MP_EX_LOCATION_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[49 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_82[50 /*6*/]), "VEX_PM_PHOTO6" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Paleto Bay ~nrt~ <img src='img://MP_EX_LOCATION_07/MP_EX_LOCATION_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[50 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_82[51 /*6*/]), "VEX_PM_PHOTO7" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Ron Alternates Wind Farm ~nrt~ <img src='img://MP_EX_LOCATION_08/MP_EX_LOCATION_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[51 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_82[52 /*6*/]), "VEX_PM_PHOTO8" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Grand Senora Desert ~nrt~ <img src='img://MP_EX_LOCATION_09/MP_EX_LOCATION_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[52 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_82[53 /*6*/]), "VEX_PM_PHOTO9" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Sandy Shores ~nrt~ <img src='img://MP_EX_LOCATION_10/MP_EX_LOCATION_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[53 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_82[54 /*6*/]), "VEX_PM_PHOTO10" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Legion Square ~nrt~ <img src='img://MP_EX_LOCATION_11/MP_EX_LOCATION_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[54 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_82[55 /*6*/]), "VEX_PM_PHOTO11" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: GWC and Golfing Society ~nrt~ <img src='img://MP_EX_LOCATION_12/MP_EX_LOCATION_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[55 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_82[56 /*6*/]), "VEX_PM_PHOTO12" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Vespucci Beach ~nrt~ <img src='img://MP_EX_LOCATION_13/MP_EX_LOCATION_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[56 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_82[57 /*6*/]), "VEX_PM_PHOTO13" /* GXT: Vehicle: ~a~~n~Color: ~a~~n~Plate: ~a~~n~ Location: Tongva Hills ~nrt~ <img src='img://MP_EX_LOCATION_14/MP_EX_LOCATION_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[57 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_82[58 /*6*/]), "VEX_1_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_01/IE_TEXTVECH_01' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[58 /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_82[59 /*6*/]), "VEX_2_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_02/IE_TEXTVECH_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[59 /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_82[60 /*6*/]), "VEX_3_PROTO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_03/IE_TEXTVECH_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[60 /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_82[61 /*6*/]), "VEX_4_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_04/IE_TEXTVECH_04' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[61 /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_82[62 /*6*/]), "VEX_5_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_05/IE_TEXTVECH_05' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[62 /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_82[63 /*6*/]), "VEX_6_TYRUS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_06/IE_TEXTVECH_06' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[63 /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_82[64 /*6*/]), "VEX_7_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_07/IE_TEXTVECH_07' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[64 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_82[65 /*6*/]), "VEX_8_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_08/IE_TEXTVECH_08' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[65 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_82[66 /*6*/]), "VEX_9_BESTIA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_09/IE_TEXTVECH_09' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[66 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_82[67 /*6*/]), "VEX_10_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_10/IE_TEXTVECH_10' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[67 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_82[68 /*6*/]), "VEX_11_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_11/IE_TEXTVECH_11' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[68 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_82[69 /*6*/]), "VEX_12_T20" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_12/IE_TEXTVECH_12' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[69 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_82[70 /*6*/]), "VEX_13_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_13/IE_TEXTVECH_13' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[70 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_82[71 /*6*/]), "VEX_14_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_14/IE_TEXTVECH_14' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[71 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_82[72 /*6*/]), "VEX_15_SHEAVA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_15/IE_TEXTVECH_15' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[72 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_82[73 /*6*/]), "VEX_16_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_16/IE_TEXTVECH_16' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[73 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_82[74 /*6*/]), "VEX_17_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_17/IE_TEXTVECH_17' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[74 /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_82[75 /*6*/]), "VEX_18_OSIRIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_18/IE_TEXTVECH_18' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[75 /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_82[76 /*6*/]), "VEX_19_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_19/IE_TEXTVECH_19' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[76 /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_82[77 /*6*/]), "VEX_20_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_20/IE_TEXTVECH_20' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[77 /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_82[78 /*6*/]), "VEX_21_FMJ" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_21/IE_TEXTVECH_21' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[78 /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_82[79 /*6*/]), "VEX_22_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_22/IE_TEXTVECH_22' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[79 /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_82[80 /*6*/]), "VEX_23_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_23/IE_TEXTVECH_23' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[80 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_82[81 /*6*/]), "VEX_24_REAPER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_24/IE_TEXTVECH_24' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[81 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_82[82 /*6*/]), "VEX_25_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_25/IE_TEXTVECH_25' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[82 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_82[83 /*6*/]), "VEX_26_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_26/IE_TEXTVECH_26' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[83 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_82[84 /*6*/]), "VEX_27_PFISTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_27/IE_TEXTVECH_27' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[84 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_82[85 /*6*/]), "VEX_28_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_28/IE_TEXTVECH_28' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[85 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_82[86 /*6*/]), "VEX_29_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_29/IE_TEXTVECH_29' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[86 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_82[87 /*6*/]), "VEX_30_ALPHA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_30/IE_TEXTVECH_30' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[87 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_82[88 /*6*/]), "VEX_31_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_31/IE_TEXTVECH_31' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[88 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_82[89 /*6*/]), "VEX_32_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_32/IE_TEXTVECH_32' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[89 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_82[90 /*6*/]), "VEX_33_MAMBA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_33/IE_TEXTVECH_33' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[90 /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_82[91 /*6*/]), "VEX_34_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_34/IE_TEXTVECH_34' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[91 /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_82[92 /*6*/]), "VEX_35_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_35/IE_TEXTVECH_35' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[92 /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_82[93 /*6*/]), "VEX_36_TAMPA" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_36/IE_TEXTVECH_36' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[93 /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_82[94 /*6*/]), "VEX_37_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_37/IE_TEXTVECH_37' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[94 /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_82[95 /*6*/]), "VEX_38_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_38/IE_TEXTVECH_38' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[95 /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_82[96 /*6*/]), "VEX_39_BTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_39/IE_TEXTVECH_39' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[96 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_82[97 /*6*/]), "VEX_40_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_40/IE_TEXTVECH_40' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[97 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_82[98 /*6*/]), "VEX_41_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_41/IE_TEXTVECH_41' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[98 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_82[99 /*6*/]), "VEX_42_FELTZ3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_42/IE_TEXTVECH_42' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[99 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_82[100 /*6*/]), "VEX_43_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_43/IE_TEXTVECH_43' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[100 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_82[101 /*6*/]), "VEX_44_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_44/IE_TEXTVECH_44' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[101 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_82[102 /*6*/]), "VEX_45_ZTYPE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_45/IE_TEXTVECH_45' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[102 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_82[103 /*6*/]), "VEX_46_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_46/IE_TEXTVECH_46' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[103 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_82[104 /*6*/]), "VEX_47_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_47/IE_TEXTVECH_47' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[104 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_82[105 /*6*/]), "VEX_48_TROPOS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_48/IE_TEXTVECH_48' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[105 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_82[106 /*6*/]), "VEX_49_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_49/IE_TEXTVECH_49' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[106 /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_82[107 /*6*/]), "VEX_50_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_50/IE_TEXTVECH_50' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[107 /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_82[108 /*6*/]), "VEX_51_ENTITYXF" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_51/IE_TEXTVECH_51' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[108 /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_82[109 /*6*/]), "VEX_52_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_52/IE_TEXTVECH_52' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[109 /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_82[110 /*6*/]), "VEX_53_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_53/IE_TEXTVECH_53' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[110 /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_82[111 /*6*/]), "VEX_54_SULTANRS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_54/IE_TEXTVECH_54' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[111 /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_82[112 /*6*/]), "VEX_55_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_55/IE_TEXTVECH_55' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[112 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_82[113 /*6*/]), "VEX_56_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_56/IE_TEXTVECH_56' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[113 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_82[114 /*6*/]), "VEX_57_ZENTORNO" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_57/IE_TEXTVECH_57' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[114 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_82[115 /*6*/]), "VEX_58_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_58/IE_TEXTVECH_58' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[115 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_82[116 /*6*/]), "VEX_59_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_59/IE_TEXTVECH_59' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[116 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_82[117 /*6*/]), "VEX_60_OMNIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_60/IE_TEXTVECH_60' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[117 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_82[118 /*6*/]), "VEX_61_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_61/IE_TEXTVECH_61' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[118 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_82[119 /*6*/]), "VEX_62_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_62/IE_TEXTVECH_62' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[119 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_82[120 /*6*/]), "VEX_63_COQUET3" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_63/IE_TEXTVECH_63' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[120 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_82[121 /*6*/]), "VEX_64_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_64/IE_TEXTVECH_64' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[121 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_82[122 /*6*/]), "VEX_65_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_65/IE_TEXTVECH_65' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[122 /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_82[123 /*6*/]), "VEX_66_SEVEN70" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_66/IE_TEXTVECH_66' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[123 /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_82[124 /*6*/]), "VEX_67_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_67/IE_TEXTVECH_67' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[124 /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_82[125 /*6*/]), "VEX_68_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_68/IE_TEXTVECH_68' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[125 /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_82[126 /*6*/]), "VEX_69_VERLI" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_69/IE_TEXTVECH_69' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[126 /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_82[127 /*6*/]), "VEX_70_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_70/IE_TEXTVECH_70' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[127 /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_82[128 /*6*/]), "VEX_71_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_71/IE_TEXTVECH_71' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[128 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_82[129 /*6*/]), "VEX_72_FELTZ2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_72/IE_TEXTVECH_72' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[129 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_82[130 /*6*/]), "VEX_73_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_73/IE_TEXTVECH_73' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[130 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_82[131 /*6*/]), "VEX_74_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_74/IE_TEXTVECH_74' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[131 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_82[132 /*6*/]), "VEX_75_COQUET2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_75/IE_TEXTVECH_75' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[132 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_82[133 /*6*/]), "VEX_76_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_76/IE_TEXTVECH_76' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[133 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_82[134 /*6*/]), "VEX_77_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_77/IE_TEXTVECH_77' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[134 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_82[135 /*6*/]), "VEX_78_CHEETAH" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_78/IE_TEXTVECH_78' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[135 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_82[136 /*6*/]), "VEX_79_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_79/IE_TEXTVECH_79' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[136 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_82[137 /*6*/]), "VEX_80_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_80/IE_TEXTVECH_80' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[137 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_82[138 /*6*/]), "VEX_81_NSHADE" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_81/IE_TEXTVECH_81' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[138 /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_82[139 /*6*/]), "VEX_82_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_82/IE_TEXTVECH_82' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[139 /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_82[140 /*6*/]), "VEX_83_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_84/IE_TEXTVECH_84' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[140 /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_82[141 /*6*/]), "VEX_84_BANSH2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_85/IE_TEXTVECH_85' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[141 /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_82[142 /*6*/]), "VEX_82_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_83/IE_TEXTVECH_83' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[142 /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_82[143 /*6*/]), "VEX_86_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_86/IE_TEXTVECH_86' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[143 /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_82[144 /*6*/]), "VEX_87_TURIS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_87/IE_TEXTVECH_87' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[144 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_82[145 /*6*/]), "VEX_88_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_88/IE_TEXTVECH_88' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[145 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_82[146 /*6*/]), "VEX_89_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_89/IE_TEXTVECH_89' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[146 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_82[147 /*6*/]), "VEX_90_MASS" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_90/IE_TEXTVECH_90' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[147 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_82[148 /*6*/]), "VEX_91_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_91/IE_TEXTVECH_91' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[148 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_82[149 /*6*/]), "VEX_92_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_92/IE_TEXTVECH_92' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[149 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_82[150 /*6*/]), "VEX_93_SABRE2" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_93/IE_TEXTVECH_93' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[150 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_82[151 /*6*/]), "VEX_94_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_94/IE_TEXTVECH_94' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[151 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_82[152 /*6*/]), "VEX_95_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_95/IE_TEXTVECH_95' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[152 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_82[153 /*6*/]), "VEX_96_JESTER" /* GXT: Vehicle: ~a~~n~Value: ~a~~n~Plate: ~a~ ~nrt~ <img src='img://IE_TEXTVECH_96/IE_TEXTVECH_96' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[153 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_82[154 /*6*/]), "GO_AS_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_autosalvage/NHP_prep_autosalvage' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[154 /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_82[155 /*6*/]), "GO_DR_PICM" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://nhp_prep_daylightrob/nhp_prep_daylightrob' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[155 /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_82[156 /*6*/]), "FHTXT_DDR00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://NHP_prep_deaddrop/NHP_prep_deaddrop' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[156 /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_82[157 /*6*/]), "BBTXT_CPS00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_1/BAT_carpark_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[157 /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_82[158 /*6*/]), "BBTXT_CPS10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_2/BAT_carpark_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[158 /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_82[159 /*6*/]), "BBTXT_CPS20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://BAT_carpark_3/BAT_carpark_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[159 /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_82[160 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_1103[160 /*6*/]), "ib_aircon", 24);
	StringCopy(&(Local_82[161 /*6*/]), "XM22FLOW_TXT_0" /* GXT: WELCOME TO THE TROUPE ~nrt~ <img src='img://PHONE_MESSAGE_D_DUDE/PHONE_MESSAGE_D_DUDE' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
	StringCopy(&(Local_1103[161 /*6*/]), "PHONE_MESSAGE_D_DUDE", 24);
	StringCopy(&(Local_82[162 /*6*/]), "CHM6_PMSG_TR", 24);
	StringCopy(&(Local_1103[162 /*6*/]), "UPDT1_2023_TEXT_LSA6_1", 24);
	StringCopy(&(Local_82[163 /*6*/]), "CBR2_PMSG_P1", 24);
	StringCopy(&(Local_1103[163 /*6*/]), "UPDT2_2023_TEXT_IMG_2", 24);
	StringCopy(&(Local_82[164 /*6*/]), "CBR2_PMSG_P2", 24);
	StringCopy(&(Local_1103[164 /*6*/]), "UPDT2_2023_TEXT_IMG_3", 24);
	StringCopy(&(Local_82[165 /*6*/]), "CBR2_PMSG_P3", 24);
	StringCopy(&(Local_1103[165 /*6*/]), "UPDT2_2023_TEXT_IMG_4", 24);
	StringCopy(&(Local_82[166 /*6*/]), "CBR2_PMSG_TB", 24);
	StringCopy(&(Local_1103[166 /*6*/]), "UPDT2_2023_TEXT_IMG_5", 24);
	StringCopy(&(Local_82[167 /*6*/]), "CBR3_PMSG", 24);
	StringCopy(&(Local_1103[167 /*6*/]), "UPDT2_2023_TEXT_IMG_6", 24);
	StringCopy(&(Local_82[168 /*6*/]), "CBR4_PMSG", 24);
	StringCopy(&(Local_1103[168 /*6*/]), "UPDT2_2023_TEXT_IMG_7", 24);
	if (func_61(PLAYER::PLAYER_ID()) == 19)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SNP_IMG_0_0" /* GXT: ~nrt~ <img src='img://SCLUB_1/DEL_PERRO_PIER_1_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "SNP_IMG_0_1" /* GXT: ~nrt~ <img src='img://SCLUB_1/ORIENTAL_THEATER_1_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[46 /*6*/]), "SNP_IMG_0_2" /* GXT: ~nrt~ <img src='img://SCLUB_1/GALILEO_OBSERVATORY_1_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[47 /*6*/]), "SNP_IMG_0_3" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_ARENA_1_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[47 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[48 /*6*/]), "SNP_IMG_0_4" /* GXT: ~nrt~ <img src='img://SCLUB_1/CHUMASH_PIER_1_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[48 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[49 /*6*/]), "SNP_IMG_0_5" /* GXT: ~nrt~ <img src='img://SCLUB_1/RICHMAN_HOTEL_1_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[49 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[50 /*6*/]), "SNP_IMG_0_6" /* GXT: ~nrt~ <img src='img://SCLUB_1/ROCKFORD_HILLS_CITY_HALL_1_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[50 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[51 /*6*/]), "SNP_IMG_0_7" /* GXT: ~nrt~ <img src='img://SCLUB_1/MAZE_BANK_TOWER_1_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[51 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[52 /*6*/]), "SNP_IMG_0_8" /* GXT: ~nrt~ <img src='img://SCLUB_1/PIPELINE_INN_1_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[52 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[53 /*6*/]), "SNP_IMG_0_9" /* GXT: ~nrt~ <img src='img://SCLUB_1/THE_VICEROY_HOTEL_1_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[53 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_82[54 /*6*/]), "SNP_IMG_1_0" /* GXT: ~nrt~ <img src='img://SCLUB_2/VENETIAN_2_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[54 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[55 /*6*/]), "SNP_IMG_1_1" /* GXT: ~nrt~ <img src='img://SCLUB_2/OPIUM_NIGHTS_HOTEL_2_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[55 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[56 /*6*/]), "SNP_IMG_1_2" /* GXT: ~nrt~ <img src='img://SCLUB_2/VINEWOOD_SIGN_2_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[56 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[57 /*6*/]), "SNP_IMG_1_3" /* GXT: ~nrt~ <img src='img://SCLUB_2/LEGION_SQUARE_2_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[57 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[58 /*6*/]), "SNP_IMG_1_4" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON_CRASTENBURG_HOTEL_2_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[58 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[59 /*6*/]), "SNP_IMG_1_5" /* GXT: ~nrt~ <img src='img://SCLUB_2/VON-CRASTENBURG-RICHMAN_2_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[59 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[60 /*6*/]), "SNP_IMG_1_6" /* GXT: ~nrt~ <img src='img://SCLUB_2/RANCHO_TOWERS_2_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[60 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[61 /*6*/]), "SNP_IMG_1_7" /* GXT: ~nrt~ <img src='img://SCLUB_2/MIRROR_PARK_2_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[61 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[62 /*6*/]), "SNP_IMG_1_8" /* GXT: ~nrt~ <img src='img://SCLUB_2/BJ_SMITH_REC_CENTER_2_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[62 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[64 /*6*/]), "SNP_IMG_1_9" /* GXT: ~nrt~ <img src='img://SCLUB_2/ROCKFORD_DORSET_HOTEL_2_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[64 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_82[65 /*6*/]), "SNP_IMG_2_0" /* GXT: ~nrt~ <img src='img://SCLUB_3/KOREAN_PAVILLION_3_1' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[65 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[66 /*6*/]), "SNP_IMG_2_1" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BEACH_3_6' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[66 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[67 /*6*/]), "SNP_IMG_2_2" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_RACETRACK_3_9' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[67 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[68 /*6*/]), "SNP_IMG_2_3" /* GXT: ~nrt~ <img src='img://SCLUB_3/SISYPHUS_THEATER_3_5' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[68 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[69 /*6*/]), "SNP_IMG_2_4" /* GXT: ~nrt~ <img src='img://SCLUB_3/VESPUCCI_BOULEVARD_BRIDGE_3_7' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[69 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[70 /*6*/]), "SNP_IMG_2_5" /* GXT: ~nrt~ <img src='img://SCLUB_3/ROCKFORD_HILLS_CHURCH_3_4' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[70 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[71 /*6*/]), "SNP_IMG_2_6" /* GXT: ~nrt~ <img src='img://SCLUB_3/LAST_TRAIN_DINER_3_2' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[71 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[72 /*6*/]), "SNP_IMG_2_7" /* GXT: ~nrt~ <img src='img://SCLUB_3/VON-CRASTENBURG-HOTEL_3_10' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[72 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[73 /*6*/]), "SNP_IMG_2_8" /* GXT: ~nrt~ <img src='img://SCLUB_3/METEOR_STREET_APARTMENTS_3_3' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[73 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_82[74 /*6*/]), "SNP_IMG_2_9" /* GXT: ~nrt~ <img src='img://SCLUB_3/VINEWOOD_HILLS_3_8' vspace='0' width='252' height='252'/> ~nrt~~a~ ~a~. ~a~ */, 24);
		StringCopy(&(Local_1103[74 /*6*/]), "SCLUB_3", 24);
	}
	else if (func_60(PLAYER::PLAYER_ID()) == 14)
	{
		StringCopy(&(Local_82[44 /*6*/]), "GBC_TM_TC100" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[45 /*6*/]), "GBC_TM_TC101" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[46 /*6*/]), "GBC_TM_TC102" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[47 /*6*/]), "GBC_TM_TC103" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[47 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[48 /*6*/]), "GBC_TM_TC104" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[48 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[49 /*6*/]), "GBC_TM_TC105" /* GXT: We have the full cooperation of the observatory's in-house security. Here's some cam footage. ~nrt~ <img src='img://VC_TC_OBSERVCCTV_0/VC_TC_OBSERVCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[49 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_82[50 /*6*/]), "GBC_TM_TC110" /* GXT: This one should be easy - we have the make and model of the car. It's an orange Rhapsody. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[50 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[51 /*6*/]), "GBC_TM_TC111" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[51 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[52 /*6*/]), "GBC_TM_TC120" /* GXT: Stay sharp, this one was last seen on a yellow Vindicator. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[52 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[53 /*6*/]), "GBC_TM_TC121" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[53 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[54 /*6*/]), "GBC_TM_TC130" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at the graveyard a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[54 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[55 /*6*/]), "GBC_TM_TC140" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[55 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[56 /*6*/]), "GBC_TM_TC200" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[56 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[57 /*6*/]), "GBC_TM_TC201" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[57 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[58 /*6*/]), "GBC_TM_TC202" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[58 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[59 /*6*/]), "GBC_TM_TC203" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[59 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[60 /*6*/]), "GBC_TM_TC204" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[60 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[61 /*6*/]), "GBC_TM_TC205" /* GXT: Turns out ULSA leave their security feed on an unsecured connection. Pretty useful - here's an image of your target. ~nrt~ <img src='img://VC_TC_UNIVERCCTV/VC_TC_UNIVERCCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[61 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_82[62 /*6*/]), "GBC_TM_TC210" /* GXT: This one should be easy - we have the make and model of the car. It's a white 9F. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_5' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[62 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[63 /*6*/]), "GBC_TM_TC211" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[63 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[64 /*6*/]), "GBC_TM_TC220" /* GXT: Stay sharp, this one was last seen on a pink Faggio. ~nrt~ <img src='img://VC_TC_VEHICLECCTV/VC_TC_VEHICLECCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[64 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_82[65 /*6*/]), "GBC_TM_TC221" /* GXT: Here is an image of what they look like. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_0' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[65 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[66 /*6*/]), "GBC_TM_TC230" /* GXT: This idiot caught a cab - the owner of the cab company is a regular of ours. They dropped your target at IAA headquarters a few minutes ago. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[66 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_82[67 /*6*/]), "GBC_TM_TC240" /* GXT: Don't have much to go on this time. They were last seen on foot, heading in this direction. Keep your eyes peeled. ~nrt~ <img src='img://VC_TC_CASINOCCTV/VC_TC_CASINOCCTV_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[67 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_59(PLAYER::PLAYER_ID()) == 30)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSH_TXT_MD_01M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid01/heist3_prep_maid01' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSH_TXT_MD_02M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_prep_maid02/heist3_prep_maid02' vspace='0' width='256' height='167'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_59(PLAYER::PLAYER_ID()) == 32)
	{
		StringCopy(&(Local_82[44 /*6*/]), "CSHT_IMC_00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier1/heist3_cashier1' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "CSHT_IMC_10M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier2/heist3_cashier2' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "CSHT_IMC_20M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier3/heist3_cashier3' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_82[47 /*6*/]), "CSHT_IMC_30M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist3_cashier4/heist3_cashier4' vspace='0' width='256' height='352'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[47 /*6*/]), "heist3_cashier4", 24);
	}
	else if (func_58(PLAYER::PLAYER_ID()) == 17)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ILHTEXT_SFE00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://heist4_sec_guard/heist4_sec_guard' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "heist4_sec_guard", 24);
	}
	else if (func_57(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "TR_TXT_CV1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS/TUNER_TEXT_IMG_VIRUS' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "TUNER_TEXT_IMG_VIRUS", 24);
		StringCopy(&(Local_82[45 /*6*/]), "TR_TXT_CV2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_02/TUNER_TEXT_IMG_VIRUS_02' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "TUNER_TEXT_IMG_VIRUS_02", 24);
		StringCopy(&(Local_82[46 /*6*/]), "TR_TXT_CV3" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_VIRUS_03/TUNER_TEXT_IMG_VIRUS_03' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "TUNER_TEXT_IMG_VIRUS_03", 24);
	}
	else if (func_57(PLAYER::PLAYER_ID()) == 11)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ROBTEXT_IAA00M" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://TUNER_TEXT_IMG_IAA/TUNER_TEXT_IMG_IAA' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "TUNER_TEXT_IMG_IAA", 24);
	}
	else if (func_56(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "FXR_TXT_WI1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://FXR_WAYIN/FXR_WAYIN' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "FXR_WAYIN", 24);
	}
	else if (func_55(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "DL_TXT_PHOTO1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_1/UPDT2_2022_TEXT_IMG_1' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "UPDT2_2022_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "DL_TXT_PHOTO2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_2/UPDT2_2022_TEXT_IMG_2' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "UPDT2_2022_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "DL_TXT_PHOTO3" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2022_TEXT_IMG_3/UPDT2_2022_TEXT_IMG_3' vspace='0' width='256' height='128'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "UPDT2_2022_TEXT_IMG_3", 24);
	}
	else if (func_53(PLAYER::PLAYER_ID()) == 1)
	{
		StringCopy(&(Local_82[44 /*6*/]), "S23_SOAD_TXT0" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_1/UPDT1_2023_TEXT_IMG_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "UPDT1_2023_TEXT_IMG_1", 24);
		StringCopy(&(Local_82[45 /*6*/]), "S23_SOAD_TXT1" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_2/UPDT1_2023_TEXT_IMG_2' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[45 /*6*/]), "UPDT1_2023_TEXT_IMG_2", 24);
		StringCopy(&(Local_82[46 /*6*/]), "S23_SOAD_TXT2" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_3/UPDT1_2023_TEXT_IMG_3' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[46 /*6*/]), "UPDT1_2023_TEXT_IMG_3", 24);
	}
	else if (func_53(PLAYER::PLAYER_ID()) == 0)
	{
		StringCopy(&(Local_82[44 /*6*/]), "ACR_TXT_IMG" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT1_2023_TEXT_IMG_4/UPDT1_2023_TEXT_IMG_4' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "UPDT1_2023_TEXT_IMG_4", 24);
	}
	else if (func_48(PLAYER::PLAYER_ID()) == 4)
	{
		StringCopy(&(Local_82[44 /*6*/]), "SALV_SUBF_T_HOS" /* GXT: IMAGE ATTACHMENT ~nrt~ <img src='img://UPDT2_2023_TEXT_IMG_1/UPDT2_2023_TEXT_IMG_1' vspace='0' width='252' height='150'/> ~nrt~ */, 24);
		StringCopy(&(Local_1103[44 /*6*/]), "UPDT2_2023_TEXT_IMG_1", 24);
	}
}

int func_48(int iParam0)//Position - 0x4CEB
{
	switch (func_52(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_49(iParam0);
		
		default:
	}
	return -1;
}

int func_49(int iParam0)//Position - 0x4D26
{
	if (func_50(iParam0, 0))
	{
		return Global_1886967[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_50(int iParam0, int iParam1)//Position - 0x4D49
{
	if (func_51(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_51(var uParam0)//Position - 0x4D8D
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

int func_52(int iParam0)//Position - 0x4DAF
{
	if (func_51(iParam0))
	{
		if (func_50(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_53(int iParam0)//Position - 0x4DDB
{
	if (func_52(iParam0) == 317)
	{
		return func_54(iParam0, 317);
	}
	return -1;
}

int func_54(int iParam0, int iParam1)//Position - 0x4DFC
{
	if (func_52(iParam0) == iParam1)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_55(int iParam0)//Position - 0x4E19
{
	if (func_52(iParam0) == 307)
	{
		return func_54(iParam0, 307);
	}
	return -1;
}

int func_56(int iParam0)//Position - 0x4E3A
{
	if (func_52(iParam0) == 264)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_57(int iParam0)//Position - 0x4E58
{
	if (func_52(iParam0) == 271)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_58(int iParam0)//Position - 0x4E76
{
	if (func_52(iParam0) == 256)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_59(int iParam0)//Position - 0x4E94
{
	if (func_52(iParam0) == 158)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x4EB1
{
	if (func_52(iParam0) == 243)
	{
		return func_49(iParam0);
	}
	return -1;
}

int func_61(int iParam0)//Position - 0x4ECE
{
	if (func_52(iParam0) == 237 || func_52(iParam0) == 250)
	{
		return func_49(iParam0);
	}
	return -1;
}

void func_62()//Position - 0x4EFB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
	{
		func_63(0);
	}
	if (iLocal_2277)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&uLocal_66);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_63(int iParam0)//Position - 0x4F25
{
	if (func_68())
	{
		return;
	}
	if (Global_21025)
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
	if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8684, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22166 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 30);
	}
	if (!func_64())
	{
		Global_20813.f_1 = 3;
	}
}

int func_64()//Position - 0x4FAF
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_65(bool bParam0, bool bParam1)//Position - 0x4FD6
{
	if (bParam0)
	{
		if (func_66(0))
		{
			Global_21025 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20750);
			}
			Global_20741 = { Global_20759[Global_20758 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
	else if (Global_21025 == 1)
	{
		Global_21025 = 0;
		Global_20741 = { Global_20766[Global_20758 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20750);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20741);
		}
	}
}

int func_66(int iParam0)//Position - 0x504A
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

bool func_67()//Position - 0x50A1
{
	return BitTest(Global_1956030, 5);
}

bool func_68()//Position - 0x50AF
{
	return BitTest(Global_1956030, 19);
}

