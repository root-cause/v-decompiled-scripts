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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<96> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_135(&uScriptParam_0);
	}
	else
	{
		func_126();
	}
	while (true)
	{
		func_125();
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (func_117())
		{
			func_126();
		}
		if (func_116())
		{
			func_126();
		}
		func_1();
	}
}

void func_1()//Position - 0xBA
{
	func_110(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	switch (Local_159.f_16)
	{
		case 0:
			func_107();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0xEF
{
	if (BitTest(Global_2707890, 1))
	{
		MISC::CLEAR_BIT(&Global_2707890, 1);
		func_97(Global_2707889);
	}
	if (Local_159.f_61 != Global_2708020)
	{
		Local_159.f_61 = { Global_2708020 };
	}
	else
	{
		Local_159.f_61.f_1 = 0;
		Local_159.f_61.f_2 = 0;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_96())
	{
		func_51();
		func_42();
		func_38();
		func_35();
		func_34();
		func_13();
	}
	func_10(&(Local_63.f_67), BitTest(Local_159.f_60, 3));
	func_3(&(Local_159.f_38), &(Local_159.f_39));
	MISC::CLEAR_BIT(&Global_2707890, 4);
	MISC::CLEAR_BIT(&(Local_159.f_60), 1);
	MISC::CLEAR_BIT(&(Local_159.f_60), 2);
	MISC::CLEAR_BIT(&(Local_159.f_60), 3);
	MISC::CLEAR_BIT(&(Local_159.f_60), 6);
	MISC::CLEAR_BIT(&(Local_159.f_60), 7);
}

void func_3(var uParam0, var uParam1)//Position - 0x1B3
{
	struct<3> Var0;
	int iVar3;
	struct<3> Var4;
	
	func_9();
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_8()) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
		HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_8())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
	{
		HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
	iVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar3))
	{
		CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iVar3, true);
	}
	Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
	Var4 = { func_7(Var4) };
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam1, 425 /*RADAR_CENTRE_STROKE*/);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, false);
		HUD::SET_BLIP_DISPLAY(*uParam1, 4);
		HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
		HUD::SET_BLIP_SHOW_CONE(*uParam1, true, 11);
		HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam0, 425 /*RADAR_CENTRE_STROKE*/);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
		HUD::SET_BLIP_DISPLAY(*uParam0, 4);
		HUD::SET_BLIP_COLOUR(*uParam0, func_4(18));
		HUD::SET_BLIP_SHOW_CONE(*uParam0, true, 11);
		HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
		HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, true);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1)));
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, true);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1)));
	}
	else
	{
		HUD::SET_BLIP_COORDS(*uParam0, Var0);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam0, 5);
		HUD::SET_BLIP_COORDS(*uParam1, Var0);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

int func_4(int iParam0)//Position - 0x3C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_5(struct<3> Param0, bool bParam3)//Position - 0x62D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)//Position - 0x659
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(struct<3> Param0)//Position - 0x670
{
	struct<3> Var0;
	
	Var0.f_0 = SYSTEM::COS(Param0.f_0);
	Var0.f_1 = SYSTEM::COS(Param0.f_2);
	Var0.f_2 = SYSTEM::SIN(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -SYSTEM::SIN(Param0.f_2));
	return Var0;
}

bool func_8()//Position - 0x6B3
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_9()//Position - 0x6C1
{
	Global_1574847 = 1;
}

void func_10(char* sParam0, bool bParam1)//Position - 0x6CE
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(sParam0))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (!func_12(sParam0))
	{
		HUD::CLEAR_HELP(true);
		func_11(sParam0);
	}
}

void func_11(char* sParam0)//Position - 0x70D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_12(char* sParam0)//Position - 0x723
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()//Position - 0x736
{
	if (BitTest(Global_2707890, 5))
	{
		MISC::CLEAR_BIT(&Global_2707890, 5);
		Local_159.f_35 = 0;
	}
	func_14(&(Local_63.f_24), &(Local_159.f_35));
}

void func_14(var uParam0, var uParam1)//Position - 0x761
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_32(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/))
			{
				func_31(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_30(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_29(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_28(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x804
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_27(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_24(bParam4, bParam8))
	{
		return;
	}
	if (func_22())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5625[iVar1], true), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23831.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23831.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_17(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23831.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_17(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_16(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4541740.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23831.f_5326);
				func_17(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_16(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541740.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23831.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23831.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(char* sParam0)//Position - 0xCFC
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17(char* sParam0)//Position - 0xD0E
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_18(int iParam0, int iParam1)//Position - 0xD1C
{
	bool bVar0;
	
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_19(int iParam0, bool bParam1)//Position - 0xD75
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()//Position - 0xDB6
{
	return Global_1574926;
}

int func_21(var uParam0)//Position - 0xDC2
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

int func_22()//Position - 0xDE4
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_23())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_23()//Position - 0xE52
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1)//Position - 0xE6C
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_26(8, -1) && func_25() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79650) || Global_23831.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_25()//Position - 0xF09
{
	return Global_1575011;
}

var func_26(int iParam0, int iParam1)//Position - 0xF15
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

int func_27(var uParam0, bool bParam1, int iParam2)//Position - 0xF4D
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_28(int iParam0)//Position - 0xFEA
{
	Global_1670224.f_1163 = iParam0;
}

void func_29(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xFFB
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_30(int iParam0, char* sParam1, int iParam2)//Position - 0x10B0
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = 365;
	Global_23831.f_5640[Global_23831.f_5326] = iParam0;
	Global_23831.f_5326++;
}

void func_31(int iParam0)//Position - 0x1160
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23831.f_5655 = 0;
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_27(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23831.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23831.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_32(char* sParam0, int iParam1, bool bParam2)//Position - 0x1218
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_27(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23831.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_33(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_33(var uParam0)//Position - 0x131F
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_34()//Position - 0x13C1
{
	int iVar0;
	
	if (!BitTest(Local_159.f_60, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_159.f_56 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_159.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_35()//Position - 0x13F1
{
	if (BitTest(Local_159.f_60, 6))
	{
		if (BitTest(Local_159.f_60, 5))
		{
			func_37();
		}
	}
	else if (!BitTest(Local_159.f_60, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80)))
	{
		func_36(&(Local_63.f_80));
	}
}

void func_36(char* sParam0)//Position - 0x1432
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (BitTest(Local_159.f_60, 5))
	{
	}
	else
	{
		PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
		MISC::SET_BIT(&(Local_159.f_60), 5);
	}
}

void func_37()//Position - 0x1462
{
	if (BitTest(Local_159.f_60, 5))
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		MISC::CLEAR_BIT(&(Local_159.f_60), 5);
	}
}

void func_38()//Position - 0x1483
{
	struct<3> Var0;
	
	if (Local_63.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_159.f_60, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_159.f_36))
	{
		Local_159.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_63.f_86.f_1);
		return;
	}
	Var0 = { CAM::GET_CAM_ROT(Local_159.f_0, 2) };
	switch (Local_63.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_159.f_37)
			{
				Local_159.f_37 = 1;
				func_41(Local_159.f_36, Local_63.f_20);
				func_40(Local_159.f_36, Local_63.f_20.f_1, Local_63.f_20.f_2, Local_63.f_20.f_3);
			}
		
		case 0:
			func_39(Local_159.f_36, 0f, CAM::GET_CAM_FOV(Local_159.f_0), Local_63.f_4, Local_63.f_5, Var0.f_2);
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_159.f_36, 255, 255, 255, 0, 0);
}

void func_39(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x154F
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1584
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41(int iParam0, bool bParam1)//Position - 0x15AC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42()//Position - 0x15C8
{
	struct<4> Var0;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (Local_63.f_94 != 0)
	{
		Local_159.f_4 = { ENTITY::GET_ENTITY_COORDS(Local_63.f_95, true) };
		Local_159.f_4.f_3 = { ENTITY::GET_ENTITY_ROTATION(Local_63.f_95, 2) };
	}
	if (!BitTest(Local_159.f_60, 2))
	{
		Var0 = { func_47(Local_159.f_0, &(Local_159.f_1), Local_63, Local_63.f_6.f_1, Local_63.f_6) };
	}
	Var4 = { Local_63.f_91 + Local_159.f_1 };
	Var7 = { func_46(Local_63.f_71, Var4.f_2) };
	Var10 = { Local_63.f_88 + Var7 };
	switch (Local_63.f_94)
	{
		case 0:
			func_45(Local_159.f_0, Var10, Var4);
			break;
		
		case 1:
			func_44(Local_159.f_0, Var10, Var4, Local_63.f_95);
			break;
	}
	func_43(Local_159.f_40, Local_159.f_40.f_2, Local_159.f_40.f_8, Local_159.f_40.f_3, Local_159.f_40.f_9, Local_159.f_40.f_4, Local_159.f_40.f_10, Local_159.f_40.f_5, Local_159.f_40.f_11, Local_159.f_40.f_6, Local_159.f_40.f_12, Local_159.f_40.f_7, Var0.f_0, Var0.f_1, Local_159.f_61.f_1, Local_159.f_61.f_2 > 0);
	Local_159.f_4.f_6 = { CAM::GET_CAM_COORD(Local_159.f_0) };
	Local_159.f_4.f_9 = { CAM::GET_CAM_ROT(Local_159.f_0, 2) };
}

void func_43(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam16, bool bParam17)//Position - 0x1708
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam4, sParam5, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam4))
			{
				AUDIO::STOP_SOUND(iParam4);
			}
		}
		fVar0 = SYSTEM::VMAG(Param13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam2, sParam3, sParam1, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam2))
			{
				AUDIO::STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam6))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iParam6, sParam7, sParam1, true);
			}
		}
		iVar1 = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
		}
		else
		{
			iVar2 = iVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam17;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2));
				bVar3 = (IntToFloat(iParam16) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam8))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam8, sParam9, sParam9, true);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar1)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iVar2)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2))) < 0.15f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam10))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam10, sParam11, sParam1, true);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iParam10))
			{
				AUDIO::STOP_SOUND(iParam10);
			}
		}
	}
}

void func_44(int iParam0, struct<3> Param1, struct<3> Param4, int iParam7)//Position - 0x18C0
{
	CAM::ATTACH_CAM_TO_ENTITY(iParam0, iParam7, Param1, true);
	CAM::SET_CAM_ROT(iParam0, Param4 + ENTITY::GET_ENTITY_ROTATION(iParam7, 2), 2);
}

void func_45(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x18E8
{
	CAM::SET_CAM_COORD(iParam0, Param1);
	CAM::SET_CAM_ROT(iParam0, Param4, 2);
}

Vector3 func_46(struct<3> Param0, float fParam3)//Position - 0x1905
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<4> func_47(int iParam0, var uParam1, struct<6> Param2, float fParam8, float fParam9)//Position - 0x1949
{
	float fVar0;
	struct<4> Var1;
	float fVar5;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	struct<3> Var19;
	bool bVar22;
	
	fVar0 = CAM::GET_CAM_FOV(iParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/);
	Var6 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/)) };
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fParam8 = (fParam8 * 8f);
	}
	else
	{
		if (MISC::ABSF(fVar5) < 0.06f)
		{
			fVar5 = 0f;
		}
		if (SYSTEM::VMAG(Var6) < 0.06f)
		{
			Var6 = { 0f, 0f, 0f };
		}
	}
	fVar9 = MISC::GET_FRAME_TIME();
	fVar10 = func_50((fVar0 + ((fVar5 * fParam9) * fVar9)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(iParam0, fVar10);
	CAM::SET_CAM_NEAR_CLIP(iParam0, 0.01f);
	fVar11 = ((fVar10 - 5f) / 42f);
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(1f);
	GRAPHICS::SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(fVar11);
	Var12.f_0 = Param2.f_2;
	Var12.f_1 = 0f;
	Var12.f_2 = Param2.f_0;
	Var15.f_0 = Param2.f_3;
	Var15.f_1 = 0f;
	Var15.f_2 = Param2.f_1;
	fVar18 = (((fVar9 * fVar10) * fParam8) * (1f + ((fVar10 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var19 = { Var6 };
	Var19.f_2 = (Var19.f_2 * fVar18);
	Var19.f_0 = (Var19.f_0 * fVar18);
	*uParam1 = { *uParam1 + Var19 };
	bVar22 = Var12.f_2 > Var15.f_2;
	if (bVar22)
	{
		*uParam1 = func_50(*uParam1, Var12.f_0, Var15.f_0);
		uParam1->f_1 = func_50(uParam1->f_1, Var12.f_1, Var15.f_1);
		uParam1->f_2 = func_49(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_48(*uParam1, Var12, Var15) };
	}
	Var1.f_0 = (Var1.f_0 + fVar10);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_48(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x1AEA
{
	Param0.f_0 = func_50(Param0.f_0, Param3.f_0, Param6.f_0);
	Param0.f_1 = func_50(Param0.f_1, Param3.f_1, Param6.f_1);
	Param0.f_2 = func_50(Param0.f_2, Param3.f_2, Param6.f_2);
	return Param0;
}

float func_49(float fParam0)//Position - 0x1B2A
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_50(float fParam0, float fParam1, float fParam2)//Position - 0x1B64
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

void func_51()//Position - 0x1B8B
{
	switch (Local_63.f_8.f_1)
	{
		case 1:
			func_86();
			break;
		
		case 2:
			func_71();
			break;
		
		case 3:
			func_52();
			break;
	}
}

void func_52()//Position - 0x1BC5
{
	var uVar0;
	var uVar3;
	struct<3> Var6;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1)
	{
		if (!Local_159.f_29.f_5)
		{
			Local_159.f_29.f_5 = 1;
		}
		if (!func_66(4, 0f, 0f, 0f, Local_159.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_65())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			return;
		}
	}
	if (Local_159.f_29)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Local_159.f_29.f_1)
			{
				if (func_63(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::PLAY_SOUND_FROM_COORD(Local_159.f_40.f_13.f_2, Local_159.f_40.f_13.f_1, Local_159.f_29.f_2, Local_159.f_40.f_13, true, 500, false);
					Local_159.f_29.f_1 = 0;
					Local_159.f_29 = 0;
				}
			}
			else
			{
				Local_159.f_29.f_1 = 1;
				func_62(&(Local_159.f_17), 0, 0);
				MISC::SET_BIT(&Global_2707890, 0);
				func_59(3f, 100f, &(Local_159.f_29.f_2), &uVar0, &uVar3, &Var6);
				func_58(1);
				func_56(Local_159.f_29.f_2, Var6);
			}
		}
	}
	if (func_55() || Local_159.f_29)
	{
		MISC::SET_BIT(&(Local_159.f_60), 1);
		MISC::SET_BIT(&(Local_159.f_60), 2);
		MISC::SET_BIT(&(Local_159.f_60), 3);
		if (!Local_159.f_29)
		{
			MISC::SET_BIT(&(Local_159.f_60), 6);
			MISC::SET_BIT(&(Local_159.f_60), 7);
		}
		return;
	}
	if (func_65())
	{
		if (func_53(&(Local_159.f_17), Local_63.f_8.f_2, 0))
		{
			Local_159.f_29 = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
}

int func_53(var uParam0, int iParam1, bool bParam2)//Position - 0x1D3B
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_54(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, bool bParam1, bool bParam2)//Position - 0x1D99
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

bool func_55()//Position - 0x1DDE
{
	return BitTest(Global_1956920, 5);
}

void func_56(struct<3> Param0, struct<3> Param3)//Position - 0x1DEC
{
	if (!func_57(Global_1956920.f_13, Param0, 0))
	{
		Global_1956920.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1956920.f_16 = { Param3 };
	}
}

bool func_57(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x1E35
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_58(bool bParam0)//Position - 0x1E7C
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 4))
		{
			Global_1956920.f_2 = 0;
			MISC::SET_BIT(&(Global_1956920.f_2), 4);
		}
	}
	else if (BitTest(Global_1956920.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956920.f_2), 4);
	}
}

void func_59(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1EC0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	
	if (Local_63.f_74 == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_159.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_159.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_61(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(CAM::GET_CAM_ROT(Local_159.f_0, 2)) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_63.f_95, Local_63.f_88) };
		Var6 = { ENTITY::GET_ENTITY_BONE_POSTION(Local_63.f_95, Local_63.f_74.f_1[0]) };
		Var9 = { Var6 - Var3 };
		*uParam2 = { Var6 };
		iVar12 = 0;
		fVar13 = func_60(Var9, Var0);
		iVar14 = 1;
		while (iVar14 <= (Local_63.f_74 - 1))
		{
			Var6 = { ENTITY::GET_ENTITY_BONE_POSTION(Local_63.f_95, Local_63.f_74.f_1[iVar14]) };
			Var9 = { Var6 - Var3 };
			fVar15 = func_60(Var9, Var0);
			if (fVar15 > fVar13)
			{
				fVar13 = fVar15;
				iVar12 = iVar14;
				*uParam2 = { Var6 };
			}
			iVar14++;
		}
		*uParam5 = { ENTITY::GET_ENTITY_BONE_ROTATION(Local_63.f_95, Local_63.f_74.f_1[iVar12]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_60(struct<3> Param0, struct<3> Param3)//Position - 0x200D
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_61(struct<3> Param0, float fParam3)//Position - 0x202E
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var3 = { func_7(Var0) };
	return Param0 + Vector(fParam3, fParam3, fParam3) * Var3;
}

void func_62(var uParam0, bool bParam1, bool bParam2)//Position - 0x2058
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

int func_63(int iParam0)//Position - 0x2095
{
	if (iParam0 != func_64())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 26);
	}
	return 0;
}

int func_64()//Position - 0x20BC
{
	return -1;
}

bool func_65()//Position - 0x20C5
{
	return (BitTest(Global_2707890, 4) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/));
}

int func_66(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)//Position - 0x20E0
{
	struct<9> Var0;
	
	if (func_70())
	{
		if (!func_69(&uLocal_46))
		{
			func_54(&uLocal_46, 0, 0);
		}
		else if (func_53(&uLocal_46, 8000, 0))
		{
			func_68(&uLocal_46);
			func_67(0);
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_48) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_48)) && !func_70())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param4 };
		Var0.f_8 = { Param7 };
		Var0.f_1 = iParam0;
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_drone")) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0.f_0, true, 0))
			{
				iLocal_48 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("am_mp_drone"), &Var0, 12, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
				func_68(&uLocal_46);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(iLocal_48) && !func_70())
	{
		return 1;
	}
	return 0;
}

void func_67(bool bParam0)//Position - 0x21EF
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_70())
			{
				MISC::SET_BIT(&Global_1956920, 0);
			}
		}
	}
	else if (func_70())
	{
		MISC::CLEAR_BIT(&Global_1956920, 0);
	}
}

void func_68(var uParam0)//Position - 0x2233
{
	uParam0->f_1 = 0;
}

bool func_69(var uParam0)//Position - 0x2240
{
	return uParam0->f_1;
}

bool func_70()//Position - 0x224C
{
	return BitTest(Global_1956920, 0);
}

void func_71()//Position - 0x225A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	func_78();
	if (Local_159.f_22 != -1)
	{
		bVar0 = func_53(&(Local_159.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_159.f_22.f_4))
			{
				iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_159.f_22.f_4);
				VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(iVar2, 2);
			}
			func_77(&(Local_159.f_22.f_5));
			func_76(&(Local_159.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_159.f_22.f_4))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_159.f_22.f_4);
				VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(iVar3, 1);
			}
			func_76(&(Local_159.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_73(Local_159.f_22.f_4, !bVar0, iVar1);
		if (func_65())
		{
			if (Local_63.f_16 != 0 && !STREAMING::HAS_MODEL_LOADED(Local_63.f_16))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return;
			}
			if (bVar0 && func_53(&(Local_159.f_17), Local_63.f_8.f_2, 0))
			{
				func_62(&(Local_159.f_17), 0, 0);
				func_72(1f, &Var4, &Var7);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var7, Local_63.f_8.f_3, true, Local_63.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_63.f_95, false, false, Local_159.f_22, true, 0, Local_63.f_94 != 0, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_159.f_40.f_13.f_2, Local_159.f_40.f_13.f_1, Var4, Local_159.f_40.f_13, true, 500, false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
}

void func_72(float fParam0, var uParam1, var uParam2)//Position - 0x23CD
{
	var uVar0;
	
	func_59(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_73(int iParam0, bool bParam1, int iParam2)//Position - 0x23E4
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	GRAPHICS::SET_DRAW_ORIGIN(Var2, false);
	fVar0 = func_75(iParam0, Local_159.f_0, 0.5f);
	fVar0 = func_50(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * GRAPHICS::GET_ASPECT_RATIO(false));
	HUD::GET_HUD_COLOUR(iParam2, &iVar5, &iVar6, &iVar7, &iVar8);
	iVar9 = func_74((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar8) / 4f)), iVar8);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, iVar5, iVar6, iVar7, iVar9, false, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_74(bool bParam0, int iParam1, int iParam2)//Position - 0x2491
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_75(int iParam0, int iParam1, float fParam2)//Position - 0x24A8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	Var0 = { CAM::GET_CAM_COORD(iParam1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true);
	fVar7 = CAM::GET_CAM_FOV(iParam1);
	fVar8 = 1f;
	fVar9 = (fVar8 / MISC::TAN((fVar7 / 2f)));
	fVar10 = ((fVar9 * fParam2) / fVar6);
	return fVar10;
}

void func_76(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x24F8
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
	}
}

void func_77(var uParam0)//Position - 0x251B
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_78()//Position - 0x253C
{
	bool bVar0;
	var uVar1;
	
	if (func_85(&(Local_159.f_22.f_1), Local_159.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_159.f_22 != Local_159.f_22.f_4)
			{
				func_62(&(Local_159.f_22.f_2), 0, 0);
				func_77(&(Local_159.f_22.f_5));
				func_77(&(Local_159.f_22.f_6));
			}
			Local_159.f_22 = Local_159.f_22.f_4;
		}
		else
		{
			func_84();
			uVar1 = func_82(Local_63.f_8.f_4);
			Local_159.f_22.f_4 = uVar1;
		}
		if (Local_159.f_22.f_4 != -1)
		{
			func_80(Local_159.f_22.f_4);
		}
	}
	if (Local_159.f_22 != -1)
	{
		if (((Local_159.f_22.f_4 != Local_159.f_22 || ENTITY::IS_ENTITY_DEAD(Local_159.f_22, false)) || func_79(Local_159.f_22) > 0.04f) || SYSTEM::VMAG(ENTITY::GET_ENTITY_COORDS(Local_159.f_22, true) - Local_159.f_4.f_6) > Local_63.f_8.f_4)
		{
			func_84();
		}
	}
}

float func_79(int iParam0)//Position - 0x2624
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0.5f, 0.5f) };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG2(Var0);
}

void func_80(int iParam0)//Position - 0x266E
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { CAM::GET_CAM_COORD(Local_159.f_0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var3 + Vector(2f, 2f, 2f) * func_81(Var3 - Var0) };
	Local_159.f_22.f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var3, 511, 0, 4);
	if (Local_159.f_22.f_1 == 0)
	{
	}
}

Vector3 func_81(struct<3> Param0)//Position - 0x26C5
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_82(float fParam0)//Position - 0x2704
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
		if (((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_83(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_159.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(iVar8, true)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_79(iVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		iVar10 = PLAYER::GET_PLAYER_PED(iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, false))
		{
			iVar11 = PED::GET_VEHICLE_PED_IS_IN(iVar10, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar11, false))
			{
				return iVar11;
			}
		}
	}
	return -1;
}

int func_83(int iParam0, bool bParam1, bool bParam2)//Position - 0x27E7
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_84()//Position - 0x2847
{
	Local_159.f_22 = -1;
	Local_159.f_22.f_4 = -1;
	func_77(&(Local_159.f_22.f_5));
	func_77(&(Local_159.f_22.f_6));
}

int func_85(var uParam0, int iParam1, var uParam2)//Position - 0x286F
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar4, &uVar1, &iVar7);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar7))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, false))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar9, false);
			}
		}
	}
	if (iVar8 == 2)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				*uParam2 = (iParam1 == iVar7 && !ENTITY::IS_ENTITY_DEAD(iVar7, false));
			}
		}
		return 1;
	}
	else if (iVar8 == 0)
	{
		return 1;
	}
	return 0;
}

void func_86()//Position - 0x2912
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	struct<3> Var15;
	struct<3> Var18;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, true);
	bVar0 = Local_63.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_53(&(Local_159.f_19), Local_63.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD" /* GXT: RELOADING */;
			iVar5 = Local_63.f_13.f_2;
			iVar4 = func_95(&(Local_159.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO" /* GXT: AMMO */;
			iVar5 = Local_63.f_13.f_1;
			iVar4 = (iVar5 - Local_159.f_19.f_2);
		}
		func_92(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (bVar0 && !bVar1)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/))
		{
			func_91();
		}
	}
	if (!bVar1 && func_90())
	{
		Local_159.f_19.f_2 = (Local_159.f_19.f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if (func_53(&(Local_159.f_17), Local_63.f_8.f_2, 0))
		{
			func_62(&(Local_159.f_17), 0, 0);
			if (Local_63.f_13.f_1 > 0 && Local_159.f_19.f_2 >= Local_63.f_13.f_1)
			{
				func_62(&(Local_159.f_19), 0, 0);
				Local_159.f_19.f_2 = 0;
			}
			func_59(0f, Local_63.f_8.f_4, &Var6, &Var9, &uVar12, &Var15);
			Var18 = { Vector(Local_63.f_13, Local_63.f_13, Local_63.f_13) * func_87(0f, 0f, 0f, 1f) };
			Var18.f_1 = 0f;
			Var15 = { Var15 + Var18 };
			Var9 = { Var6 + FtoV(SYSTEM::VMAG(Var9 - Var6)) * func_7(Var15) };
			Var6.f_2 = (Var6.f_2 - 1f);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var6, Var9, Local_63.f_8.f_3, false, Local_63.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_63.f_95, false, false, 0, true, 0, Local_63.f_94 != 0, 0);
			if (Local_159.f_40.f_13.f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_159.f_40.f_13.f_2))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(Local_159.f_40.f_13.f_2, Local_159.f_40.f_13.f_1, Var6, Local_159.f_40.f_13, true, 500, false);
			}
		}
	}
	else if (Local_159.f_40.f_13.f_2 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_159.f_40.f_13.f_2))
	{
		AUDIO::STOP_SOUND(Local_159.f_40.f_13.f_2);
	}
}

Vector3 func_87(struct<3> Param0, float fParam3)//Position - 0x2B66
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	fVar3 = (fParam3 * fParam3);
	iVar4 = 0;
	while (iVar4 < 20)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3) };
		if (SYSTEM::VDIST2(Var0, 0f, 0f, 0f) <= fVar3)
		{
			return Param0 + Var0;
		}
		iVar4++;
	}
	return func_88(Param0, fParam3);
}

Vector3 func_88(struct<3> Param0, float fParam3)//Position - 0x2BCE
{
	struct<3> Var0;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + func_89(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_89(struct<3> Param0, float fParam3)//Position - 0x2C00
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_90()//Position - 0x2C37
{
	return (BitTest(Global_2707890, 4) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/));
}

void func_91()//Position - 0x2C52
{
	func_62(&(Local_159.f_19), 0, 0);
	Local_159.f_19.f_2 = 0;
}

void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x2C6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_94(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_93(0, iVar0);
		Global_1670224.f_1177[iVar0] = iParam0;
		Global_1670224.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[iVar0] = iParam3;
		Global_1670224.f_1177.f_183[iVar0] = iParam4;
		Global_1670224.f_1177.f_227[iVar0] = iParam5;
		Global_1670224.f_1177.f_238[iVar0 /*3*/] = iParam6;
		Global_1670224.f_1177.f_238[iVar0 /*3*/].f_1 = iParam7;
		Global_1670224.f_1177.f_269[iVar0] = iParam8;
		Global_1670224.f_1177.f_280[iVar0] = iParam9;
		Global_1670224.f_1177.f_323[iVar0] = iParam10;
		Global_1670224.f_1177.f_334[iVar0] = iParam11;
		Global_1670224.f_1177.f_345[iVar0] = iParam12;
		Global_1670224.f_1177.f_356[iVar0] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[iVar0] = iParam14;
		Global_1670224.f_1177.f_378[iVar0] = iParam15;
		Global_1670224.f_1177.f_389[iVar0] = iParam16;
		Global_1670224.f_1177.f_400[iVar0] = iParam17;
		Global_1670224.f_1177.f_411[iVar0] = iParam18;
		Global_1670224.f_1177.f_422[iVar0] = iParam19;
		Global_1670224.f_1177.f_433[iVar0] = iParam20;
		Global_1670224.f_1177.f_444[iVar0] = iParam21;
		Global_1670224.f_1177.f_455[iVar0] = iParam22;
		Global_1670224.f_1177.f_466[iVar0] = iParam23;
		Global_1670224.f_1177.f_477[iVar0] = iParam24;
		Global_1670224.f_1177.f_205[iVar0] = iParam25;
		Global_1670224.f_1177.f_216[iVar0] = iParam39;
		Global_1670224.f_1177.f_488[iVar0] = iParam26;
		Global_1670224.f_1177.f_499[iVar0] = iParam27;
		Global_1670224.f_1177.f_510[iVar0] = iParam28;
		Global_1670224.f_1177.f_521[iVar0] = iParam29;
		Global_1670224.f_1177.f_532[iVar0] = iParam30;
		Global_1670224.f_1177.f_543[iVar0] = iParam31;
		Global_1670224.f_1177.f_554[iVar0] = iParam32;
		Global_1670224.f_1177.f_565[iVar0] = iParam33;
		Global_1670224.f_1177.f_576[iVar0] = iParam34;
		Global_1670224.f_1177.f_587[iVar0] = iParam35;
		Global_1670224.f_1177.f_598[iVar0] = iParam36;
		Global_1670224.f_1177.f_609[iVar0] = iParam37;
		Global_1670224.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_93(int iParam0, int iParam1)//Position - 0x2F32
{
	MISC::SET_BIT(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_94(int iParam0, int iParam1)//Position - 0x2F4B
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_95(var uParam0, bool bParam1, bool bParam2)//Position - 0x2F61
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_96()//Position - 0x2FA8
{
	return Global_76498;
}

void func_97(int* iParam0)//Position - 0x2FB4
{
	int* iVar0;
	
	iVar0 = iParam0;
	func_104(iParam0);
	if (func_103(&iVar0, 2))
	{
		func_62(&(Local_159.f_17), 0, 0);
		Local_63.f_8 = { Global_2707802.f_8 };
	}
	if (func_103(&iVar0, 6))
	{
		Local_63.f_19 = Global_2707802.f_19;
	}
	if (func_103(&iVar0, 10))
	{
		Local_63.f_74 = { Global_2707802.f_74 };
	}
	if (func_103(&iVar0, 8))
	{
		Local_63.f_67 = { Global_2707802.f_67 };
	}
	if (func_103(&iVar0, 12))
	{
		Local_63.f_20 = { Global_2707802.f_20 };
	}
	func_98(iParam0);
}

void func_98(int* iParam0)//Position - 0x304D
{
	int* iVar0;
	
	iVar0 = iParam0;
	if (func_103(&iVar0, 0))
	{
	}
	if (func_103(&iVar0, 1))
	{
	}
	if (func_103(&iVar0, 2))
	{
		Local_63.f_8 = { Global_2707802.f_8 };
		switch (Local_63.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
				if (Local_159.f_19.f_2 == 0 && func_102())
				{
					func_99(&(Local_159.f_19), Local_63.f_13.f_2, 0, 0);
				}
				else
				{
					func_91();
				}
				break;
			
			case 2:
				Local_63.f_86 = "helicopterhud";
				Local_63.f_16 = Global_2707802.f_16;
				if (Local_63.f_16 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_63.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_63.f_86, false);
		}
	}
	if (func_103(&iVar0, 4))
	{
		switch (Local_63.f_17)
		{
			case 4:
				Local_63.f_86.f_1 = "";
				break;
			
			case 0:
				Local_63.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_63.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86.f_1))
		{
			Local_159.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_63.f_86.f_1);
		}
	}
	if (func_103(&iVar0, 6))
	{
		Local_159.f_40.f_13.f_2 = -1;
		switch (Local_63.f_19)
		{
			case 0:
				Local_159.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_159.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_159.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_159.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_159.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_159.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 2:
				Local_159.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_159.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_159.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 3:
				Local_159.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_159.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_159.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_159.f_40.f_13 = 0;
				Local_159.f_40.f_13.f_1 = 0;
				Local_159.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_103(&iVar0, 5))
	{
		Local_159.f_40.f_10 = -1;
		Local_159.f_40.f_8 = -1;
		Local_159.f_40.f_9 = -1;
		Local_159.f_40.f_11 = -1;
		Local_159.f_40.f_12 = -1;
		switch (Local_63.f_18)
		{
			case 0:
				Local_159.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_159.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_159.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_159.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_159.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_3 = "Pan";
				Local_159.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_4 = "Zoom";
				Local_159.f_40.f_9 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_159.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_159.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_159.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_159.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_159.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_3 = "Pan";
				Local_159.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_4 = "Zoom";
				Local_159.f_40.f_9 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_6 = "Take_Damage";
				Local_159.f_40.f_11 = AUDIO::GET_SOUND_ID();
				Local_159.f_40.f_7 = "Low_Health_Warning";
				Local_159.f_40.f_12 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_159.f_40 = 0;
				Local_159.f_40.f_2 = 0;
				Local_159.f_40.f_5 = 0;
				Local_159.f_40.f_10 = -1;
				Local_159.f_40.f_3 = 0;
				Local_159.f_40.f_8 = -1;
				Local_159.f_40.f_4 = 0;
				Local_159.f_40.f_9 = -1;
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_159.f_40))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_159.f_40, false, -1);
		}
	}
	if (func_103(&iVar0, 3))
	{
	}
	if (func_103(&iVar0, 7))
	{
		if (Local_63.f_24 > 0)
		{
			func_32(0, -1, 0);
		}
	}
	if (func_103(&iVar0, 8))
	{
	}
	if (func_103(&iVar0, 9))
	{
	}
	if (func_103(&iVar0, 10))
	{
	}
	if (func_103(&iVar0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80)))
		{
			func_36(&(Local_63.f_80));
		}
	}
	if (func_103(&iVar0, 12))
	{
	}
}

void func_99(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x346D
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_101(bParam2, bParam3), func_100(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_100(int iParam0, int iParam1)//Position - 0x3499
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_101(bool bParam0, bool bParam1)//Position - 0x34AF
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

bool func_102()//Position - 0x34E1
{
	return (!func_69(&(Local_159.f_19)) || func_53(&(Local_159.f_19), Local_63.f_13.f_2, 0));
}

int func_103(int* iParam0, bool bParam1)//Position - 0x3507
{
	if (BitTest(*iParam0, bParam1))
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_104(int* iParam0)//Position - 0x3525
{
	if (func_103(&iParam0, 0))
	{
	}
	if (func_103(&iParam0, 1))
	{
	}
	if (func_103(&iParam0, 2))
	{
		Local_159.f_37 = 0;
		switch (Local_63.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
				break;
			
			case 3:
				if (Local_159.f_29)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_159.f_29.f_1 = 0;
				Local_159.f_29 = 0;
				if (Local_159.f_29.f_5)
				{
					Local_159.f_29.f_5 = 0;
					func_67(1);
				}
				break;
			
			case 2:
				func_84();
				if (Local_63.f_16 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_63.f_16);
					Local_63.f_16 = 0;
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_63.f_86))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_63.f_86);
			Local_63.f_86 = "";
		}
	}
	if (func_103(&iParam0, 3))
	{
	}
	if (func_103(&iParam0, 4))
	{
		Local_159.f_37 = 0;
		Local_63.f_86.f_1 = "";
		if (Local_159.f_36 != -1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_159.f_36));
			Local_159.f_36 = -1;
		}
	}
	if (func_103(&iParam0, 6))
	{
		func_77(&(Local_159.f_40.f_13.f_2));
	}
	if (func_103(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::UNHINT_SCRIPT_AUDIO_BANK();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_159.f_40))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_159.f_40);
		}
		func_77(&(Local_159.f_40.f_8));
		func_77(&(Local_159.f_40.f_9));
		func_77(&(Local_159.f_40.f_10));
		func_77(&(Local_159.f_40.f_11));
		func_77(&(Local_159.f_40.f_12));
	}
	if (func_103(&iParam0, 7))
	{
		if (Local_63.f_24 > 0)
		{
			func_105(1, -1);
		}
	}
	if (func_103(&iParam0, 8))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_67)) && func_12(&(Local_63.f_67)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (func_103(&iParam0, 9))
	{
	}
	if (func_103(&iParam0, 10))
	{
	}
	if (func_103(&iParam0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_63.f_80)))
		{
			func_37();
			StringCopy(&(Local_63.f_80), "", 16);
		}
	}
	if (func_103(&iParam0, 12))
	{
		Local_159.f_37 = 0;
	}
}

void func_105(bool bParam0, int iParam1)//Position - 0x370D
{
	int iVar0;
	
	if (!func_27(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_106(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_106(int* iParam0)//Position - 0x37D0
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

void func_107()//Position - 0x37FC
{
	if ((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && BitTest(Local_63.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_63.f_84);
	}
	if (func_53(&(Local_159.f_58), Local_63.f_84, 0))
	{
		if (!BitTest(Local_63.f_84.f_1, 0) || func_109(Local_63.f_88, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_159.f_0))
			{
				Local_159.f_0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				MISC::SET_BIT(&(Local_159.f_60), 2);
				func_42();
				MISC::CLEAR_BIT(&(Local_159.f_60), 2);
				PLAYER::SET_SCRIPT_FIRE_POSITION(Local_159.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_63.f_84.f_1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				func_3(&(Local_159.f_38), &(Local_159.f_39));
				func_38();
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_159.f_40.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_159.f_40.f_1);
				}
				func_62(&(Local_159.f_17), 0, 0);
				MISC::SET_BIT(&Global_2707890, 3);
				func_108(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_159.f_57 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_159.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (BitTest(Local_63.f_84.f_1, 2))
				{
					if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_108(int iParam0)//Position - 0x3933
{
	Local_159.f_16 = iParam0;
}

int func_109(struct<3> Param0, int iParam3)//Position - 0x3941
{
	if (BitTest(Local_159.f_60, 0))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 100f, iParam3))
	{
		MISC::SET_BIT(&(Local_159.f_60), 0);
	}
	return 0;
}

void func_110(int iParam0)//Position - 0x397C
{
	if (func_115())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_114(0))
		{
			func_111(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_111(int iParam0)//Position - 0x39AF
{
	if (func_115())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_55())
		{
			func_113(1, 1);
		}
		else
		{
			func_113(0, 0);
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
	if (!func_112())
	{
		Global_20930.f_1 = 3;
	}
}

int func_112()//Position - 0x3A39
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_113(bool bParam0, bool bParam1)//Position - 0x3A60
{
	if (bParam0)
	{
		if (func_114(0))
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

int func_114(int iParam0)//Position - 0x3AD4
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

bool func_115()//Position - 0x3B2B
{
	return BitTest(Global_1956920, 19);
}

int func_116()//Position - 0x3B3A
{
	if (Local_63.f_94 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_63.f_95) || ENTITY::IS_ENTITY_DEAD(Local_63.f_95, false))
		{
			return 1;
		}
	}
	if (!func_83(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2707800)
	{
		return 1;
	}
	return 0;
}

int func_117()//Position - 0x3B87
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_122(159))
	{
		if (!func_121())
		{
			return 1;
		}
	}
	if (func_122(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_118() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_118()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_118()//Position - 0x3C0B
{
	switch (func_120())
	{
		case 0:
			return func_119();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_119()//Position - 0x3C3E
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_120()//Position - 0x3C62
{
	return Global_32948;
}

bool func_121()//Position - 0x3C6D
{
	return Global_2684504.f_700;
}

int func_122(int iParam0)//Position - 0x3C7C
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_123()//Position - 0x3C93
{
	return Global_2696172;
}

bool func_124()//Position - 0x3C9F
{
	return Global_2684504.f_695;
}

void func_125()//Position - 0x3CAE
{
	SYSTEM::WAIT(0);
}

void func_126()//Position - 0x3CBB
{
	int iVar0;
	int iVar1;
	
	if (Local_159.f_16 == 0 && BitTest(Local_63.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_104(-1);
	if (func_134())
	{
		func_133(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_132(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, true);
			func_130(1);
		}
	}
	if (BitTest(Local_159.f_60, 4))
	{
		func_129();
	}
	PLAYER::REMOVE_SCRIPT_FIRE_POSITION();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_159.f_57)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	func_128(Local_159.f_38);
	func_128(Local_159.f_39);
	Global_2707789 = 0;
	Global_2707890 = 0;
	func_127();
}

void func_127()//Position - 0x3D76
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_128(int iParam0)//Position - 0x3D82
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_129()//Position - 0x3D99
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_130(int iParam0)//Position - 0x3DB7
{
	int iVar0;
	
	if (Global_2635563.f_2990 == 1)
	{
		Global_2635563.f_2990 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!Global_2635563.f_2992.f_1)
		{
			if (!Global_2635563.f_2988 == -1)
			{
				if (((Global_2635563.f_2988 < 255 && !func_131()) && !BitTest(Global_4718592.f_185622, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2635563.f_2989 == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2635563.f_2988);
				}
				else if (Global_2635563.f_2988 >= 255)
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
						}
					}
				}
			}
			Global_2635563.f_2988 = -1;
			Global_2635563.f_2992.f_1 = 1;
		}
	}
}

bool func_131()//Position - 0x3EA0
{
	return Global_1881736;
}

int func_132(int iParam0)//Position - 0x3EAC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0)//Position - 0x3ECD
{
	Global_2698794 = iParam0;
}

bool func_134()//Position - 0x3EDB
{
	return Global_2698794;
}

void func_135(var uParam0)//Position - 0x3EE7
{
	MISC::SET_BIT(&Global_2707890, 2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_153(0, -1, 0);
	}
	else
	{
		func_126();
	}
	func_136(uParam0);
}

void func_136(var uParam0)//Position - 0x3F1C
{
	int iVar0;
	int iVar1;
	
	Local_63.f_88 = { *uParam0 };
	Local_63.f_91 = { uParam0->f_3 };
	Local_63.f_94 = uParam0->f_6;
	Local_63.f_95 = uParam0->f_7;
	Local_159.f_22.f_4 = -1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_132(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			func_152(1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, false);
		}
	}
	if (!func_151())
	{
		MISC::SET_BIT(&(Local_159.f_60), 4);
		func_150();
	}
	func_137();
}

void func_137()//Position - 0x3FA5
{
	if (!BitTest(Global_2707888, 0))
	{
		func_149(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2707888, 1))
	{
		func_148(1058642330, 1101004800);
	}
	if (!BitTest(Global_2707888, 2))
	{
		func_147();
	}
	if (!BitTest(Global_2707888, 3))
	{
		func_145(1, 1, 0, 500);
	}
	if (!BitTest(Global_2707888, 4))
	{
		func_144(0);
	}
	if (!BitTest(Global_2707888, 5))
	{
		func_143(0);
	}
	if (!BitTest(Global_2707888, 6))
	{
		func_142(0);
	}
	if (!BitTest(Global_2707888, 7))
	{
		MISC::SET_BIT(&Global_2707888, 7);
		Global_2707802.f_24 = 0;
	}
	if (!BitTest(Global_2707888, 8))
	{
		func_141(0);
	}
	if (!BitTest(Global_2707888, 9))
	{
		func_140(0f, 0f, 0f);
	}
	if (!BitTest(Global_2707888, 10))
	{
		MISC::SET_BIT(&Global_2707888, 10);
		Global_2707802.f_74 = 0;
	}
	if (!BitTest(Global_2707888, 11))
	{
		func_139(0);
	}
	if (!BitTest(Global_2707888, 12))
	{
		func_138(1, 3, 3, 3);
	}
	Local_63 = { Global_2707802 };
	func_98(Global_2707888);
	func_108(0);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x40D8
{
	MISC::SET_BIT(&Global_2707888, 12);
	Global_2707802.f_20 = iParam0;
	Global_2707802.f_20.f_1 = iParam1;
	Global_2707802.f_20.f_2 = iParam2;
	Global_2707802.f_20.f_3 = iParam3;
}

void func_139(char* sParam0)//Position - 0x4110
{
	MISC::SET_BIT(&Global_2707888, 11);
	StringCopy(&(Global_2707802.f_80), sParam0, 16);
}

void func_140(struct<3> Param0)//Position - 0x412C
{
	MISC::SET_BIT(&Global_2707888, 9);
	Global_2707802.f_71 = { Param0 };
}

void func_141(char* sParam0)//Position - 0x414A
{
	MISC::SET_BIT(&Global_2707888, 8);
	StringCopy(&(Global_2707802.f_67), sParam0, 16);
}

void func_142(int iParam0)//Position - 0x4166
{
	MISC::SET_BIT(&Global_2707888, 6);
	Global_2707802.f_19 = iParam0;
}

void func_143(int iParam0)//Position - 0x417F
{
	MISC::SET_BIT(&Global_2707888, 5);
	Global_2707802.f_18 = iParam0;
}

void func_144(int iParam0)//Position - 0x4198
{
	MISC::SET_BIT(&Global_2707888, 4);
	Global_2707802.f_17 = iParam0;
}

void func_145(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x41B1
{
	MISC::SET_BIT(&Global_2707888, 3);
	Global_2707802.f_84 = iParam3;
	func_146(&(Global_2707802.f_84.f_1), 1, bParam0);
	func_146(&(Global_2707802.f_84.f_1), 2, bParam1);
	func_146(&(Global_2707802.f_84.f_1), 0, bParam2);
}

void func_146(int* iParam0, int iParam1, bool bParam2)//Position - 0x41F7
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
}

void func_147()//Position - 0x4217
{
	MISC::SET_BIT(&Global_2707888, 2);
	Global_2707802.f_8.f_1 = 0;
}

void func_148(int iParam0, int iParam1)//Position - 0x4231
{
	MISC::SET_BIT(&Global_2707888, 1);
	Global_2707802.f_6.f_1 = iParam0;
	Global_2707802.f_6 = iParam1;
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4254
{
	MISC::SET_BIT(&Global_2707888, 0);
	Global_2707802 = iParam0;
	Global_2707802.f_1 = iParam1;
	Global_2707802.f_2 = iParam2;
	Global_2707802.f_3 = iParam3;
	Global_2707802.f_4 = iParam4;
	Global_2707802.f_5 = iParam5;
}

void func_150()//Position - 0x4293
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

bool func_151()//Position - 0x42B2
{
	return Global_2672855.f_990.f_10;
}

void func_152(int iParam0)//Position - 0x42C3
{
	int iVar0;
	
	iVar0 = Global_2635563.f_2991;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635563.f_2989 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635563.f_2988)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2635563.f_2988 = iVar0;
		}
	}
}

int func_153(int iParam0, int iParam1, bool bParam2)//Position - 0x4318
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_127();
			}
			else
			{
				return 0;
			}
		}
		if (!func_154(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_127();
					}
					else
					{
						return 0;
					}
				}
				if (func_124())
				{
					if (!bParam2)
					{
						func_127();
					}
					else
					{
						return 0;
					}
				}
				if (func_122(157))
				{
					if (!bParam2)
					{
						func_127();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_127();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_127();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_127();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_154(bool bParam0)//Position - 0x442E
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

