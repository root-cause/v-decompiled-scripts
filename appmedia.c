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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_50[25];
	int iLocal_201 = 0;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
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
	func_28();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_22 == 0)
		{
			if (Global_20930.f_1 != 9)
			{
				switch (Global_20930.f_1)
				{
					case 7:
						if ((iLocal_208 == 0 && iLocal_209 == 0) && Global_23321 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_20898, 0) && iLocal_208 == 0) && iLocal_209 == 0)
						{
							func_14();
							Global_20908 = 1;
							if (Global_20930.f_1 > 3)
							{
								if (BitTest(Global_8801, 15))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_208)
				{
					func_9();
				}
				if (iLocal_209)
				{
					func_8();
				}
			}
			else
			{
				Global_20932 = 6;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
		}
	}
}

int func_1()//Position - 0x114
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x157
{
	iLocal_23 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_23)
	{
		case 0:
			iLocal_22 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20930.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	
	func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_20 = 0;
	iVar0 = 0;
	while (iLocal_20 < iLocal_19)
	{
		if (GRAPHICS::DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(iLocal_20))
		{
			func_6(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_50[iLocal_20 /*6*/]), 0, 0, 0, 0);
			iLocal_24[iVar0] = iLocal_20;
			iVar0++;
		}
		iLocal_20++;
	}
	func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_20911, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20918)
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
}

void func_4(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x2CB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_5(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_5(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_5(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_5(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_5(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_5(char* sParam0)//Position - 0x326
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x338
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
		func_5(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_5(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_5(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_5(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_5(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x3EB
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

void func_8()//Position - 0x44E
{
	if (iLocal_208 == 0 && iLocal_209 == 1)
	{
		if (iLocal_213)
		{
			Local_205.f_0 = (Local_205.f_0 + 1f);
		}
		if (Local_205.f_0 > Local_202.f_0 || Local_205.f_0 == Local_202.f_0)
		{
			Local_205.f_0 = Local_202.f_0;
			iLocal_213 = 0;
		}
		if (iLocal_214)
		{
			Local_205.f_1 = (Local_205.f_1 - 2f);
		}
		if (Local_205.f_1 < Local_202.f_1 || Local_205.f_1 == Local_202.f_1)
		{
			Local_205.f_1 = Local_202.f_1;
			iLocal_214 = 0;
		}
		if (iLocal_215)
		{
			Local_205.f_2 = (Local_205.f_2 - 7f);
		}
		if (Local_205.f_2 < Local_202.f_2 || Local_205.f_2 == Local_202.f_2)
		{
			Local_205.f_2 = Local_202.f_2;
			iLocal_215 = 0;
		}
		if ((iLocal_213 == 0 && iLocal_214 == 0) && iLocal_215 == 0)
		{
			iLocal_209 = 0;
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 7;
				HUD::CLEAR_HELP(true);
				Global_23323 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_205, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_208 == 1 && iLocal_209 == 0) && Global_23321 == 6)
	{
		if (iLocal_210)
		{
			Local_205.f_0 = (Local_205.f_0 - 1f);
		}
		if (Local_205.f_0 < Local_202.f_0 || Local_205.f_0 == Local_202.f_0)
		{
			Local_205.f_0 = Local_202.f_0;
			iLocal_210 = 0;
		}
		if (iLocal_211)
		{
			Local_205.f_1 = (Local_205.f_1 - 0.5f);
		}
		if (Local_205.f_1 < Local_202.f_1 || Local_205.f_1 == Local_202.f_1)
		{
			Local_205.f_1 = Local_202.f_1;
			iLocal_211 = 0;
		}
		if (iLocal_212)
		{
			Local_205.f_2 = (Local_205.f_2 + 7f);
		}
		if (Local_205.f_2 > Local_202.f_2 || Local_205.f_2 == Local_202.f_2)
		{
			Local_205.f_2 = Local_202.f_2;
			iLocal_212 = 0;
		}
		if ((iLocal_210 == 0 && iLocal_211 == 0) && iLocal_212 == 0)
		{
			iLocal_208 = 0;
			func_10("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_205, 0);
	}
	if (BitTest(Global_8801, 15))
	{
		iLocal_208 = 0;
		iLocal_209 = 0;
		func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20918)
		{
			func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
			func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8800, 17);
		func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_20911, "SET_HEADER", &(Local_50[iLocal_21 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x71C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_11()//Position - 0x732
{
	Global_23323 = 1;
	HUD::CLEAR_HELP(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_12()//Position - 0x747
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x770
{
	if (iLocal_208 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_205, 0);
		Local_202 = { Global_20890 };
		iLocal_209 = 1;
		iLocal_213 = 1;
		iLocal_214 = 1;
		iLocal_215 = 1;
	}
}

void func_14()//Position - 0x79A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7BB
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

void func_16()//Position - 0x82D
{
	if (iLocal_201)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_201 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (func_15(2, 181, 0))
		{
			func_20();
		}
		if (func_15(2, 180, 0))
		{
			func_17();
		}
	}
	if (iLocal_201 == 0)
	{
		if (func_15(2, Global_20906, 0))
		{
			func_20();
			iLocal_201 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_20907, 0))
		{
			func_17();
			iLocal_201 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()//Position - 0x8A2
{
	func_7(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_18();
}

void func_18()//Position - 0x8DD
{
	if (func_19())
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

int func_19()//Position - 0x900
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

void func_20()//Position - 0x947
{
	func_7(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_21();
}

void func_21()//Position - 0x982
{
	if (func_19())
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

void func_22()//Position - 0x9A5
{
	int iVar0;
	
	if (Global_20908 == 0)
	{
		if (func_15(2, Global_20899, 0))
		{
			MISC::CLEAR_BIT(&Global_8801, 15);
			func_24();
			Global_20908 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
			iLocal_18 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_18))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_18);
			if (iVar0 > -1)
			{
				iLocal_21 = iLocal_24[iVar0];
				if (Global_20930.f_1 > 3)
				{
					if (Global_23321 == 0)
					{
						func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_20911, "SET_HEADER", &(Local_50[iLocal_21 /*6*/]), 0, 0, 0, 0);
						if (Global_20918)
						{
							func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
							func_6(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8800, 17);
						Global_23325 = iLocal_21;
						Global_23321 = 12;
						Global_20930.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB25
{
	if (iLocal_209 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_205, 0);
		Local_202 = { -90.3f, -0.8f, 90f };
		iLocal_208 = 1;
		iLocal_210 = 1;
		iLocal_211 = 1;
		iLocal_212 = 1;
	}
}

void func_24()//Position - 0xB59
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_25();
	}
}

void func_25()//Position - 0xB7E
{
	if (func_19())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

void func_26()//Position - 0xB92
{
	if ((MISC::IS_XBOX360_VERSION() || func_27()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::CLEAR_STATUS_OF_SORTED_LIST_OPERATION();
		if (GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(0))
		{
			iLocal_22 = 1;
		}
		else
		{
			Global_23323 = 1;
			Global_20930.f_1 = 3;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

bool func_27()//Position - 0xBDC
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_28()//Position - 0xBF2
{
	StringCopy(&(Local_50[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_50[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_50[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_50[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_50[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_50[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_50[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_50[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_50[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_50[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_50[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_50[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_50[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_50[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_50[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_50[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_50[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_50[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_50[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_50[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

