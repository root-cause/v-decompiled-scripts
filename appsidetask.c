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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0.72f;
	fLocal_24 = 0.42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_22671 = 0;
	Global_20463 = 0;
	func_18();
	Global_20266.f_1 = 7;
	func_17(Global_20247, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_20247, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20266.f_1 != 9)
		{
			switch (Global_20266.f_1)
			{
				case 7:
					if (Global_22671 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_22671 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					SCRIPT::TERMINATE_THIS_THREAD();
					break;
				
				default:
					break;
			}
			if (Global_22671 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_20234, 0))
			{
				Global_20244 = 1;
				Global_22671 = 0;
				Global_20266.f_1 = 7;
				func_18();
				func_17(Global_20247, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_20247, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
		}
	}
}

int func_1()//Position - 0x163
{
	if (((Global_20266.f_1 == 1 || Global_20266.f_1 == 3) || Global_20266.f_1 == 0) || Global_20210 == 1)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)//Position - 0x1A6
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

void func_3()//Position - 0x218
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_4()//Position - 0x224
{
	if (Global_8742 == 1 || Global_20266.f_1 < 7)
	{
		Global_20253 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x24D
{
	GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, false);
	func_6();
}

void func_6()//Position - 0x277
{
	int iVar0;
	
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_25, fLocal_26, &(Global_1998[Global_22893[iLocal_21 /*9*/] /*29*/].f_3), 0);
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_22893[iLocal_21 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_25, fLocal_26, "CELL_506", Global_22893[iLocal_21 /*9*/].f_2.f_2, Global_22893[iLocal_21 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_25, fLocal_26, "CELL_503", Global_22893[iLocal_21 /*9*/].f_2.f_2, Global_22893[iLocal_21 /*9*/].f_2.f_1);
	}
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_25, fLocal_26, "CELL_505", Global_22893[iLocal_21 /*9*/].f_2.f_3, Global_22893[iLocal_21 /*9*/].f_2.f_4);
	fLocal_25 = fLocal_23;
	func_10(255, 255, 255, 205);
	fLocal_26 = (fLocal_26 + 0.02f);
	if (Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	HUD::SET_TEXT_WRAP(0f, 0.93f);
	func_8(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_26 = (fLocal_26 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_26 = (fLocal_26 + 0.04f);
		if (Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_27[iVar0], Global_22724[Global_22893[iLocal_21 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x458
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_9()//Position - 0x493
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
	HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4BD
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_11()//Position - 0x4FC
{
	if (func_2(2, Global_20235, 0))
	{
		iLocal_21 = iLocal_18[iLocal_20];
		Global_22671 = 1;
		func_12(Global_20247, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_20247, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_20247, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_20266.f_1 = 8;
		Global_22671 = 1;
	}
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x57A
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
		func_13(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_13(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_13(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_13(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_13(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(char* sParam0)//Position - 0x62D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_14()//Position - 0x63F
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_2(2, Global_20242, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_2(2, Global_20243, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x6DC
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	iLocal_22 = iLocal_19;
	while (iVar0 < iLocal_22)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		func_8(fLocal_25, fLocal_26, &(Global_1998[Global_22893[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_25, fLocal_26, "CELL_506", Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, "CELL_503", Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_25, fLocal_26, "CELL_505", Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_22893[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_25 = fLocal_23;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		fLocal_26 = (fLocal_26 + 0.02f);
		HUD::SET_TEXT_WRAP(0f, 0.93f);
		func_8(fLocal_25, fLocal_26, &(Global_22724[Global_22893[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_26 = (fLocal_26 + 0.05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x83F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_13(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_13(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_13(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_13(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_13(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x89A
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

void func_18()//Position - 0x8FD
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar3 = 3;
		Global_22893[iVar3 /*9*/].f_2 = -1;
		Global_22893[iVar3 /*9*/].f_2.f_1 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_2 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_3 = 0;
		Global_22893[iVar3 /*9*/].f_2.f_5 = 0;
		while (iVar2 < 4)
		{
			if (iVar0[iVar2] == 0)
			{
				if (Global_22893[iVar2 /*9*/].f_8 != 0)
				{
					if (func_19(Global_22893[iVar2 /*9*/].f_2, Global_22893[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_22893[iVar1 /*9*/].f_8 != 0)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_12(Global_20247, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param1)//Position - 0x9E8
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
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

