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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	struct<3> Local_29 = { 0, 0, 0 } ;
	struct<3> Local_30 = { 0, 0, 0 } ;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_24 == 0)
		{
			if (Global_20266.f_1 != 9)
			{
				switch (Global_20266.f_1)
				{
					case 7:
						if ((iLocal_31 == 0 && iLocal_32 == 0) && Global_22640 == 0)
						{
							func_22();
							func_16();
						}
						break;
					
					case 8:
						if ((func_15(2, Global_20234, 0) && iLocal_31 == 0) && iLocal_32 == 0)
						{
							func_14();
							Global_20244 = 1;
							if (Global_20266.f_1 > 3)
							{
								if (BitTest(Global_8137, 15))
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
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_20268 = 6;
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
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x157
{
	iLocal_25 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(0);
	switch (iLocal_25)
	{
		case 0:
			iLocal_24 = 0;
			func_3();
			break;
		
		case 1:
			break;
		
		case 2:
			Global_20266.f_1 = 3;
			func_11();
			break;
	}
}

void func_3()//Position - 0x199
{
	int iVar0;
	
	func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_21 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
	iLocal_22 = 0;
	iVar0 = 0;
	while (iLocal_22 < iLocal_21)
	{
		if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_22))
		{
			func_6(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_4(Global_20247, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
	if (Global_20254)
	{
		func_6(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
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
	if (iLocal_31 == 0 && iLocal_32 == 1)
	{
		if (iLocal_36)
		{
			Local_30.f_0 = (Local_30.f_0 + 1f);
		}
		if (Local_30.f_0 > Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_36 = 0;
		}
		if (iLocal_37)
		{
			Local_30.f_1 = (Local_30.f_1 - 2f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_37 = 0;
		}
		if (iLocal_38)
		{
			Local_30.f_2 = (Local_30.f_2 - 7f);
		}
		if (Local_30.f_2 < Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_38 = 0;
		}
		if ((iLocal_36 == 0 && iLocal_37 == 0) && iLocal_38 == 0)
		{
			iLocal_32 = 0;
			if (Global_20266.f_1 > 3)
			{
				Global_20266.f_1 = 7;
				HUD::CLEAR_HELP(true);
				Global_22642 = 1;
				func_26();
			}
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
	}
}

void func_9()//Position - 0x536
{
	if ((iLocal_31 == 1 && iLocal_32 == 0) && Global_22640 == 6)
	{
		if (iLocal_33)
		{
			Local_30.f_0 = (Local_30.f_0 - 1f);
		}
		if (Local_30.f_0 < Local_29.f_0 || Local_30.f_0 == Local_29.f_0)
		{
			Local_30.f_0 = Local_29.f_0;
			iLocal_33 = 0;
		}
		if (iLocal_34)
		{
			Local_30.f_1 = (Local_30.f_1 - 0.5f);
		}
		if (Local_30.f_1 < Local_29.f_1 || Local_30.f_1 == Local_29.f_1)
		{
			Local_30.f_1 = Local_29.f_1;
			iLocal_34 = 0;
		}
		if (iLocal_35)
		{
			Local_30.f_2 = (Local_30.f_2 + 7f);
		}
		if (Local_30.f_2 > Local_29.f_2 || Local_30.f_2 == Local_29.f_2)
		{
			Local_30.f_2 = Local_29.f_2;
			iLocal_35 = 0;
		}
		if ((iLocal_33 == 0 && iLocal_34 == 0) && iLocal_35 == 0)
		{
			iLocal_31 = 0;
			func_10("CELL_MSHELP_2");
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(Local_30, 0);
	}
	if (BitTest(Global_8137, 15))
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_6(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_3", 0, 0, 0, 0);
		if (Global_20254)
		{
			func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_6(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
		func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_4(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
	}
}

void func_10(char* sParam0)//Position - 0x71C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_11()//Position - 0x732
{
	Global_22642 = 1;
	HUD::CLEAR_HELP(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_12()//Position - 0x747
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_13()//Position - 0x770
{
	if (iLocal_31 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
		Local_29 = { Global_20226 };
		iLocal_32 = 1;
		iLocal_36 = 1;
		iLocal_37 = 1;
		iLocal_38 = 1;
	}
}

void func_14()//Position - 0x79A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)//Position - 0x7BB
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
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
	if (iLocal_28)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_28 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
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
	if (iLocal_28 == 0)
	{
		if (func_15(2, Global_20242, 0))
		{
			func_20();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_15(2, Global_20243, 0))
		{
			func_17();
			iLocal_28 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()//Position - 0x8A2
{
	func_7(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_18();
}

void func_18()//Position - 0x8DD
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

int func_19()//Position - 0x900
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4541507 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()//Position - 0x947
{
	func_7(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_21();
}

void func_21()//Position - 0x982
{
	if (func_19())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_22()//Position - 0x9A5
{
	int iVar0;
	
	if (Global_20244 == 0)
	{
		if (func_15(2, Global_20235, 0))
		{
			MISC::CLEAR_BIT(&Global_8137, 15);
			func_24();
			Global_20244 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
			iLocal_20 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_20))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_20);
			if (iVar0 > -1)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_20266.f_1 > 3)
				{
					if (Global_22640 == 0)
					{
						func_7(Global_20247, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_6(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_MSMENU_2", 0, 0, 0, 0);
						func_7(Global_20247, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_4(Global_20247, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0, 0, 0, 0);
						if (Global_20254)
						{
							func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
							func_6(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
						}
						else
						{
							func_6(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
							func_6(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_6(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						MISC::CLEAR_BIT(&Global_8136, 17);
						Global_22644 = iLocal_23;
						Global_22640 = 12;
						Global_20266.f_1 = 8;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()//Position - 0xB25
{
	if (iLocal_32 == 0)
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&Local_30, 0);
		Local_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 1;
		iLocal_33 = 1;
		iLocal_34 = 1;
		iLocal_35 = 1;
	}
}

void func_24()//Position - 0xB59
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20255, true);
		func_25();
	}
}

void func_25()//Position - 0xB7E
{
	if (func_19())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_26()//Position - 0xB92
{
	if ((MISC::IS_XBOX360_VERSION() || func_27()) || MISC::IS_PC_VERSION())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_24 = 1;
		}
		else
		{
			Global_22642 = 1;
			Global_20266.f_1 = 3;
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
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_28()//Position - 0xBF2
{
	StringCopy(&(Local_27[0 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[1 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[2 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[3 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[4 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[5 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[6 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[7 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[8 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[9 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[10 /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[11 /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[12 /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[13 /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[14 /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[15 /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[16 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[17 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[18 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[19 /*6*/]), "CELL_MSSLOT_20", 24);
}

