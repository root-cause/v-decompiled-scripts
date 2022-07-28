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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_27) * 30 && SYSTEM::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_20234, 0))
					{
						func_5();
						Global_20244 = 1;
						func_10();
						func_7();
						if (Global_20266.f_1 > 3)
						{
							Global_20266.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
			{
				func_2();
			}
		}
		else
		{
			Global_20268 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x144
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x187
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	MISC::CLEAR_BIT(&Global_8137, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1)//Position - 0x1BA
{
	Global_4541482[iParam0] = iParam1;
}

int func_4()//Position - 0x1CC
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x1F5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20255, true);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)//Position - 0x216
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

void func_7()//Position - 0x288
{
	if (Global_20254)
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8136, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x31A
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

void func_9(char* sParam0)//Position - 0x3CD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()//Position - 0x3DF
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_20 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fLocal_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (BitTest(Global_8137, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (BitTest(Global_8137, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				if (BitTest(Global_8137, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (BitTest(Global_8138, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_20 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fLocal_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		if (Global_4541504 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4541504)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (BitTest(Global_4541229, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4541229, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4541229, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4541229, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				if (BitTest(Global_8137, 22))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				if (BitTest(Global_8137, 29))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4541482[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_20247, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)//Position - 0x68E
{
	fLocal_23 = (Global_4541418[iParam0 /*3*/] - Local_20.f_0);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * Local_20.f_0)) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_25 = MISC::ATAN2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)//Position - 0x6E4
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_4541418[iParam0 /*3*/], Local_20));
	fLocal_28 = (Global_4541418[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_13(int iParam0)//Position - 0x717
{
	fLocal_26 = SYSTEM::SQRT((((Global_4541418[iParam0 /*3*/] - Local_20.f_0) * (Global_4541418[iParam0 /*3*/] - Local_20.f_0)) + ((Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_4541418[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x75E
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

float func_15()//Position - 0x7C1
{
	fLocal_23 = (Global_22711 - Local_20.f_0);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * Local_20.f_0)) * (Global_22711.f_1 - Local_20.f_1));
	fLocal_25 = MISC::ATAN2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()//Position - 0x80D
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_22711, Local_20));
	fLocal_28 = (Global_22711.f_2 - Local_20.f_2);
	return fLocal_27;
}

float func_17()//Position - 0x836
{
	fLocal_26 = SYSTEM::SQRT((((Global_22711 - Local_20.f_0) * (Global_22711 - Local_20.f_0)) + ((Global_22711.f_1 - Local_20.f_1) * (Global_22711.f_1 - Local_20.f_1))));
	return fLocal_26;
}

int func_18()//Position - 0x869
{
	if (Global_78319 == 1)
	{
		return 1;
	}
	return 0;
}

