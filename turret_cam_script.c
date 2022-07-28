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
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
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
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_65 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_134(&uScriptParam_68);
	}
	else
	{
		func_125();
	}
	while (true)
	{
		func_124();
		PAD::DISABLE_CONTROL_ACTION(2, 199, true);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		if (func_116())
		{
			func_125();
		}
		if (func_115())
		{
			func_125();
		}
		func_1();
	}
}

void func_1()//Position - 0xBA
{
	func_109(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	switch (Local_65.f_16)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0xEF
{
	if (BitTest(Global_2788035, 1))
	{
		MISC::CLEAR_BIT(&Global_2788035, 1);
		func_96(Global_2788034);
	}
	if (Local_65.f_61 != Global_2788165)
	{
		Local_65.f_61 = { Global_2788165 };
	}
	else
	{
		Local_65.f_61.f_1 = 0;
		Local_65.f_61.f_2 = 0;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && !func_95())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), BitTest(Local_65.f_60, 3));
	func_3(&(Local_65.f_38), &(Local_65.f_39));
	MISC::CLEAR_BIT(&Global_2788035, 4);
	MISC::CLEAR_BIT(&(Local_65.f_60), 1);
	MISC::CLEAR_BIT(&(Local_65.f_60), 2);
	MISC::CLEAR_BIT(&(Local_65.f_60), 3);
	MISC::CLEAR_BIT(&(Local_65.f_60), 6);
	MISC::CLEAR_BIT(&(Local_65.f_60), 7);
}

void func_3(var uParam0, var uParam1)//Position - 0x1B3
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	
	func_9();
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_8()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
		HUD::_0xA17784FCA9548D15(Var0.f_0, Var0.f_1, 0);
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
	iVar1 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar1))
	{
		CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iVar1, true);
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
	Var2 = { func_7(Var2) };
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam1, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam1, false);
		HUD::SET_BLIP_DISPLAY(*uParam1, 4);
		HUD::SET_BLIP_COLOUR(*uParam1, func_4(2));
		HUD::SET_BLIP_SHOW_CONE(*uParam1, true, 11);
		HUD::SET_BLIP_SCALE(*uParam1, 0.54f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		HUD::SET_BLIP_SPRITE(*uParam0, 425);
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
		HUD::SET_BLIP_DISPLAY(*uParam0, 4);
		HUD::SET_BLIP_COLOUR(*uParam0, func_4(18));
		HUD::SET_BLIP_SHOW_CONE(*uParam0, true, 11);
		HUD::SET_BLIP_SCALE(*uParam0, 0.44f);
		HUD::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam0, true);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
		HUD::SET_BLIP_HIDDEN_ON_LEGEND(*uParam1, true);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
	}
	else
	{
		HUD::SET_BLIP_COORDS(*uParam0, Var0);
		HUD::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
		HUD::SET_BLIP_DISPLAY(*uParam0, 5);
		HUD::SET_BLIP_COORDS(*uParam1, Var0);
		HUD::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1)));
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

int func_5(struct<3> Param0, bool bParam1)//Position - 0x62D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
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
	Global_1574839 = 1;
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
	if (BitTest(Global_2788035, 5))
	{
		MISC::CLEAR_BIT(&Global_2788035, 5);
		Local_65.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_65.f_35));
}

void func_14(var uParam0, var uParam1)//Position - 0x761
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || PAD::_0x6CD79468A1E595C6(2)) || PAD::_0x6CD79468A1E595C6(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
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
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
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
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23150.f_5472 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_17(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_17(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_16(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5417[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5160);
				func_17(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_16(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			if (!Global_23150.f_8808)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23150.f_8808 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23150.f_5446)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
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
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_19(int iParam0, bool bParam1)//Position - 0xD67
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()//Position - 0xDA8
{
	return Global_1574918;
}

int func_21()//Position - 0xDB4
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20211 == 0)
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

int func_22()//Position - 0xE22
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)//Position - 0xE3C
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_25(8, -1) && func_24() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78579) || Global_23150.f_8807) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_24()//Position - 0xED9
{
	return Global_1574991;
}

var func_25(int iParam0, int iParam1)//Position - 0xEE5
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

int func_26(var uParam0, bool bParam1, int iParam2)//Position - 0xF1D
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)//Position - 0xFBA
{
	Global_1649593.f_1163 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xFCB
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_29(int iParam0, char* sParam1, int iParam2)//Position - 0x1080
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = 363;
	Global_23150.f_5430[Global_23150.f_5160] = iParam0;
	Global_23150.f_5160++;
}

void func_30(int iParam0)//Position - 0x1130
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23150.f_6051[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x11E8
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)//Position - 0x12D9
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

void func_33()//Position - 0x137B
{
	int iVar0;
	
	if (!BitTest(Local_65.f_60, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_65.f_56 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()//Position - 0x13AB
{
	if (BitTest(Local_65.f_60, 6))
	{
		if (BitTest(Local_65.f_60, 5))
		{
			func_36();
		}
	}
	else if (!BitTest(Local_65.f_60, 5) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(char* sParam0)//Position - 0x13EC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (BitTest(Local_65.f_60, 5))
	{
	}
	else
	{
		PAD::INIT_PC_SCRIPTED_CONTROLS(sParam0);
		MISC::SET_BIT(&(Local_65.f_60), 5);
	}
}

void func_36()//Position - 0x141C
{
	if (BitTest(Local_65.f_60, 5))
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		MISC::CLEAR_BIT(&(Local_65.f_60), 5);
	}
}

void func_37()//Position - 0x143D
{
	struct<3> Var0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_65.f_60, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_65.f_36))
	{
		Local_65.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		return;
	}
	Var0 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_65.f_37)
			{
				Local_65.f_37 = 1;
				func_40(Local_65.f_36, Local_64.f_20);
				func_39(Local_65.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_65.f_36, 0f, CAM::GET_CAM_FOV(Local_65.f_0), Local_64.f_4, Local_64.f_5, Var0.f_2);
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(0);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_65.f_36, 255, 255, 255, 0, 0);
}

void func_38(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1509
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x153E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_40(int iParam0, bool bParam1)//Position - 0x1566
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41()//Position - 0x1582
{
	struct<4> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_64.f_94 != 0)
	{
		Local_65.f_4 = { ENTITY::GET_ENTITY_COORDS(Local_64.f_95, true) };
		Local_65.f_4.f_3 = { ENTITY::GET_ENTITY_ROTATION(Local_64.f_95, 2) };
	}
	if (!BitTest(Local_65.f_60, 2))
	{
		Var0 = { func_46(Local_65.f_0, &(Local_65.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	Var1 = { Local_64.f_91 + Local_65.f_1 };
	Var2 = { func_45(Local_64.f_71, Var1.f_2) };
	Var3 = { Local_64.f_88 + Var2 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_65.f_0, Var3, Var1);
			break;
		
		case 1:
			func_43(Local_65.f_0, Var3, Var1, Local_64.f_95);
			break;
	}
	func_42(Local_65.f_40, Local_65.f_40.f_2, Local_65.f_40.f_8, Local_65.f_40.f_3, Local_65.f_40.f_9, Local_65.f_40.f_4, Local_65.f_40.f_10, Local_65.f_40.f_5, Local_65.f_40.f_11, Local_65.f_40.f_6, Local_65.f_40.f_12, Local_65.f_40.f_7, Var0.f_0, Var0.f_1, Local_65.f_61.f_1, Local_65.f_61.f_2 > 0);
	Local_65.f_4.f_6 = { CAM::GET_CAM_COORD(Local_65.f_0) };
	Local_65.f_4.f_9 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
}

void func_42(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam14, bool bParam15)//Position - 0x16C2
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
			bVar3 = bParam15;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar2));
				bVar3 = (IntToFloat(iParam14) / fVar4) > 0.1f;
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

void func_43(int iParam0, struct<3> Param1, struct<3> Param2, int iParam3)//Position - 0x1878
{
	CAM::ATTACH_CAM_TO_ENTITY(iParam0, iParam3, Param1, true);
	CAM::SET_CAM_ROT(iParam0, Param2 + ENTITY::GET_ENTITY_ROTATION(iParam3, 2), 2);
}

void func_44(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x18A0
{
	CAM::SET_CAM_COORD(iParam0, Param1);
	CAM::SET_CAM_ROT(iParam0, Param2, 2);
}

Vector3 func_45(struct<3> Param0, float fParam1)//Position - 0x18BD
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<4> func_46(int iParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)//Position - 0x1901
{
	float fVar0;
	struct<4> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	bool bVar11;
	
	fVar0 = CAM::GET_CAM_FOV(iParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 39);
	Var3 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) };
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (MISC::ABSF(fVar2) < 0.06f)
		{
			fVar2 = 0f;
		}
		if (SYSTEM::VMAG(Var3) < 0.06f)
		{
			Var3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = MISC::GET_FRAME_TIME();
	fVar5 = func_49((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(iParam0, fVar5);
	CAM::SET_CAM_NEAR_CLIP(iParam0, 0.01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	CAM::_0x487A82C650EB7799(1f);
	GRAPHICS::_0xE2892E7E55D7073A(fVar6);
	Var7.f_0 = Param2.f_2;
	Var7.f_1 = 0f;
	Var7.f_2 = Param2.f_0;
	Var8.f_0 = Param2.f_3;
	Var8.f_1 = 0f;
	Var8.f_2 = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var10 = { Var3 };
	Var10.f_2 = (Var10.f_2 * fVar9);
	Var10.f_0 = (Var10.f_0 * fVar9);
	*uParam1 = { *uParam1 + Var10 };
	bVar11 = Var7.f_2 > Var8.f_2;
	if (bVar11)
	{
		*uParam1 = func_49(*uParam1, Var7.f_0, Var8.f_0);
		uParam1->f_1 = func_49(uParam1->f_1, Var7.f_1, Var8.f_1);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, Var7, Var8) };
	}
	Var1.f_0 = (Var1.f_0 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x1AA2
{
	Param0.f_0 = func_49(Param0.f_0, Param1.f_0, Param2.f_0);
	Param0.f_1 = func_49(Param0.f_1, Param1.f_1, Param2.f_1);
	Param0.f_2 = func_49(Param0.f_2, Param1.f_2, Param2.f_2);
	return Param0;
}

float func_48(float fParam0)//Position - 0x1AE2
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

float func_49(float fParam0, float fParam1, float fParam2)//Position - 0x1B1C
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

void func_50()//Position - 0x1B43
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()//Position - 0x1B7D
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_drone")) < 1)
	{
		if (!Local_65.f_29.f_5)
		{
			Local_65.f_29.f_5 = 1;
		}
		if (!func_65(4, 0f, 0f, 0f, Local_65.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
			return;
		}
	}
	if (Local_65.f_29)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Local_65.f_29.f_1)
			{
				if (func_62(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Local_65.f_29.f_2, Local_65.f_40.f_13, true, 500, false);
					Local_65.f_29.f_1 = 0;
					Local_65.f_29 = 0;
				}
			}
			else
			{
				Local_65.f_29.f_1 = 1;
				func_61(&(Local_65.f_17), 0, 0);
				MISC::SET_BIT(&Global_2788035, 0);
				func_58(3f, 100f, &(Local_65.f_29.f_2), &uVar0, &uVar1, &Var2);
				func_57(1);
				func_55(Local_65.f_29.f_2, Var2);
			}
		}
	}
	if (func_54() || Local_65.f_29)
	{
		MISC::SET_BIT(&(Local_65.f_60), 1);
		MISC::SET_BIT(&(Local_65.f_60), 2);
		MISC::SET_BIT(&(Local_65.f_60), 3);
		if (!Local_65.f_29)
		{
			MISC::SET_BIT(&(Local_65.f_60), 6);
			MISC::SET_BIT(&(Local_65.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			Local_65.f_29 = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)//Position - 0x1CF3
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
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

void func_53(var uParam0, bool bParam1, bool bParam2)//Position - 0x1D51
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

bool func_54()//Position - 0x1D96
{
	return BitTest(Global_1958711, 5);
}

void func_55(struct<3> Param0, struct<3> Param1)//Position - 0x1DA4
{
	if (!func_56(Global_1958711.f_13, Param0, 0))
	{
		Global_1958711.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1958711.f_16 = { Param1 };
	}
}

bool func_56(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x1DED
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_57(bool bParam0)//Position - 0x1E34
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 4))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 4);
		}
	}
	else if (BitTest(Global_1958711.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1E78
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_65.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_65.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(CAM::GET_CAM_ROT(Local_65.f_0, 2)) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_64.f_95, Local_64.f_88) };
		Var2 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(Local_64.f_95, Local_64.f_74.f_1[0]) };
		Var3 = { Var2 - Var1 };
		*uParam2 = { Var2 };
		iVar4 = 0;
		fVar5 = func_59(Var3, Var0);
		iVar6 = 1;
		while (iVar6 <= (Local_64.f_74 - 1))
		{
			Var2 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(Local_64.f_95, Local_64.f_74.f_1[iVar6]) };
			Var3 = { Var2 - Var1 };
			fVar7 = func_59(Var3, Var0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { Var2 };
			}
			iVar6++;
		}
		*uParam5 = { ENTITY::_GET_ENTITY_BONE_ROTATION(Local_64.f_95, Local_64.f_74.f_1[iVar4]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(struct<3> Param0, struct<3> Param1)//Position - 0x1FC5
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_60(struct<3> Param0, float fParam1)//Position - 0x1FE6
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var1 = { func_7(Var0) };
	return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}

void func_61(var uParam0, bool bParam1, bool bParam2)//Position - 0x2010
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

int func_62(int iParam0)//Position - 0x204D
{
	if (iParam0 != func_63())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 26);
	}
	return 0;
}

int func_63()//Position - 0x2074
{
	return -1;
}

bool func_64()//Position - 0x207D
{
	return (BitTest(Global_2788035, 4) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 229));
}

int func_65(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x2098
{
	struct<9> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("am_mp_drone")) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param2 };
		Var0.f_8 = { Param3 };
		Var0.f_1 = iParam0;
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_drone")) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0.f_0, true, 0))
			{
				iLocal_50 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(joaat("am_mp_drone"), &Var0, 12, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("am_mp_drone"));
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)//Position - 0x21A7
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				MISC::SET_BIT(&Global_1958711, 0);
			}
		}
	}
	else if (func_69())
	{
		MISC::CLEAR_BIT(&Global_1958711, 0);
	}
}

void func_67(var uParam0)//Position - 0x21EB
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)//Position - 0x21F8
{
	return uParam0->f_1;
}

bool func_69()//Position - 0x2204
{
	return BitTest(Global_1958711, 0);
}

void func_70()//Position - 0x2212
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	func_77();
	if (Local_65.f_22 != -1)
	{
		bVar0 = func_52(&(Local_65.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::_0x407DC5E97DB1A4D3(iVar2, 2);
			}
			func_76(&(Local_65.f_22.f_5));
			func_75(&(Local_65.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_65.f_22.f_4))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_65.f_22.f_4);
				VEHICLE::_0x407DC5E97DB1A4D3(iVar3, 1);
			}
			func_75(&(Local_65.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_65.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !STREAMING::HAS_MODEL_LOADED(Local_64.f_16))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return;
			}
			if (bVar0 && func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_65.f_17), 0, 0);
				func_71(1f, &Var4, &Var5);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var5, Local_64.f_8.f_3, true, Local_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_64.f_95, false, false, Local_65.f_22, true, 0, Local_64.f_94 != 0, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var4, Local_65.f_40.f_13, true, 500, false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)//Position - 0x2385
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x239C
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	GRAPHICS::SET_DRAW_ORIGIN(Var2, 0);
	fVar0 = func_74(iParam0, Local_65.f_0, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * GRAPHICS::_GET_ASPECT_RATIO(false));
	HUD::GET_HUD_COLOUR(iParam2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar7 = func_73((bParam1 && (MISC::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar6) / 4f)), iVar6);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, iVar3, iVar4, iVar5, iVar7, false, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

int func_73(bool bParam0, int iParam1, int iParam2)//Position - 0x2449
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_74(int iParam0, int iParam1, float fParam2)//Position - 0x2460
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { CAM::GET_CAM_COORD(iParam1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	fVar3 = CAM::GET_CAM_FOV(iParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / MISC::TAN((fVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_75(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x24B0
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
	}
}

void func_76(var uParam0)//Position - 0x24D3
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()//Position - 0x24F4
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_65.f_22.f_1), Local_65.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_65.f_22 != Local_65.f_22.f_4)
			{
				func_61(&(Local_65.f_22.f_2), 0, 0);
				func_76(&(Local_65.f_22.f_5));
				func_76(&(Local_65.f_22.f_6));
			}
			Local_65.f_22 = Local_65.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_65.f_22.f_4 = uVar1;
		}
		if (Local_65.f_22.f_4 != -1)
		{
			func_79(Local_65.f_22.f_4);
		}
	}
	if (Local_65.f_22 != -1)
	{
		if (((Local_65.f_22.f_4 != Local_65.f_22 || ENTITY::IS_ENTITY_DEAD(Local_65.f_22, false)) || func_78(Local_65.f_22) > 0.04f) || SYSTEM::VMAG(ENTITY::GET_ENTITY_COORDS(Local_65.f_22, true) - Local_65.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(int iParam0)//Position - 0x25DC
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

void func_79(int iParam0)//Position - 0x2626
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { CAM::GET_CAM_COORD(Local_65.f_0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { Var1 + Vector(2f, 2f, 2f) * func_80(Var1 - Var0) };
	Local_65.f_22.f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var1, 511, 0, 4);
	if (Local_65.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(struct<3> Param0)//Position - 0x267D
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

int func_81(float fParam0)//Position - 0x26BC
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
		if (((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_65.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(iVar8, true)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(iVar8);
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

int func_82(int iParam0, bool bParam1, bool bParam2)//Position - 0x279F
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0x27FF
{
	Local_65.f_22 = -1;
	Local_65.f_22.f_4 = -1;
	func_76(&(Local_65.f_22.f_5));
	func_76(&(Local_65.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)//Position - 0x2827
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar3))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar5, false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar5, false);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				*uParam2 = (iParam1 == iVar3 && !ENTITY::IS_ENTITY_DEAD(iVar3, false));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()//Position - 0x28CA
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, true);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_94(&(Local_65.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_65.f_19.f_2);
		}
		func_91(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (bVar0 && !bVar1)
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
		{
			func_90();
		}
	}
	if (!bVar1 && func_89())
	{
		Local_65.f_19.f_2 = (Local_65.f_19.f_2 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if (func_52(&(Local_65.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_65.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_65.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_65.f_19), 0, 0);
				Local_65.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
			Var10 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			Var10.f_1 = 0f;
			Var9 = { Var9 + Var10 };
			Var7 = { Var6 + FtoV(SYSTEM::VMAG(Var7 - Var6)) * func_7(Var9) };
			Var6.f_2 = (Var6.f_2 - 1f);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var6, Var7, Local_64.f_8.f_3, false, Local_64.f_8, PLAYER::PLAYER_PED_ID(), true, true, -1f, Local_64.f_95, false, false, 0, true, 0, Local_64.f_94 != 0, 0);
			if (Local_65.f_40.f_13.f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(Local_65.f_40.f_13.f_2, Local_65.f_40.f_13.f_1, Var6, Local_65.f_40.f_13, true, 500, false);
			}
		}
	}
	else if (Local_65.f_40.f_13.f_2 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_65.f_40.f_13.f_2))
	{
		AUDIO::STOP_SOUND(Local_65.f_40.f_13.f_2);
	}
}

Vector3 func_86(struct<3> Param0, float fParam1)//Position - 0x2B16
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	fVar1 = (fParam1 * fParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1) };
		if (SYSTEM::VDIST2(Var0, 0f, 0f, 0f) <= fVar1)
		{
			return Param0 + Var0;
		}
		iVar2++;
	}
	return func_87(Param0, fParam1);
}

Vector3 func_87(struct<3> Param0, float fParam1)//Position - 0x2B7E
{
	struct<3> Var0;
	
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return Param0 + func_88(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam1));
}

Vector3 func_88(struct<3> Param0, float fParam1)//Position - 0x2BB0
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_89()//Position - 0x2BE7
{
	return (BitTest(Global_2788035, 4) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 229));
}

void func_90()//Position - 0x2C02
{
	func_61(&(Local_65.f_19), 0, 0);
	Local_65.f_19.f_2 = 0;
}

void func_91(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0x2C1B
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_93(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_92(0, iVar0);
		Global_1649593.f_1177[iVar0] = iParam0;
		Global_1649593.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = iParam3;
		Global_1649593.f_1177.f_183[iVar0] = iParam4;
		Global_1649593.f_1177.f_216[iVar0] = iParam5;
		Global_1649593.f_1177.f_227[iVar0 /*3*/] = iParam6;
		Global_1649593.f_1177.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1649593.f_1177.f_258[iVar0] = iParam8;
		Global_1649593.f_1177.f_269[iVar0] = iParam9;
		Global_1649593.f_1177.f_312[iVar0] = iParam10;
		Global_1649593.f_1177.f_323[iVar0] = iParam11;
		Global_1649593.f_1177.f_334[iVar0] = iParam12;
		Global_1649593.f_1177.f_345[iVar0] = iParam13;
		Global_1649593.f_1172 = 1;
		Global_1649593.f_1177.f_356[iVar0] = iParam14;
		Global_1649593.f_1177.f_367[iVar0] = iParam15;
		Global_1649593.f_1177.f_378[iVar0] = iParam16;
		Global_1649593.f_1177.f_389[iVar0] = iParam17;
		Global_1649593.f_1177.f_400[iVar0] = iParam18;
		Global_1649593.f_1177.f_411[iVar0] = iParam19;
		Global_1649593.f_1177.f_422[iVar0] = iParam20;
		Global_1649593.f_1177.f_433[iVar0] = iParam21;
		Global_1649593.f_1177.f_444[iVar0] = iParam22;
		Global_1649593.f_1177.f_455[iVar0] = iParam23;
		Global_1649593.f_1177.f_466[iVar0] = iParam24;
		Global_1649593.f_1177.f_205[iVar0] = iParam25;
		Global_1649593.f_1177.f_477[iVar0] = iParam26;
		Global_1649593.f_1177.f_488[iVar0] = iParam27;
		Global_1649593.f_1177.f_499[iVar0] = iParam28;
		Global_1649593.f_1177.f_510[iVar0] = iParam29;
		Global_1649593.f_1177.f_521[iVar0] = iParam30;
		Global_1649593.f_1177.f_532[iVar0] = iParam31;
		Global_1649593.f_1177.f_543[iVar0] = iParam32;
		Global_1649593.f_1177.f_554[iVar0] = iParam33;
		Global_1649593.f_1177.f_565[iVar0] = iParam34;
		Global_1649593.f_1177.f_576[iVar0] = iParam35;
		Global_1649593.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_92(int iParam0, int iParam1)//Position - 0x2EB3
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_93(int iParam0, int iParam1)//Position - 0x2ECC
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

int func_94(var uParam0, bool bParam1, bool bParam2)//Position - 0x2EE2
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

bool func_95()//Position - 0x2F29
{
	return Global_75485;
}

void func_96(int* iParam0)//Position - 0x2F35
{
	int* iVar0;
	
	iVar0 = iParam0;
	func_103(iParam0);
	if (func_102(&iVar0, 2))
	{
		func_61(&(Local_65.f_17), 0, 0);
		Local_64.f_8 = { Global_2787947.f_8 };
	}
	if (func_102(&iVar0, 6))
	{
		Local_64.f_19 = Global_2787947.f_19;
	}
	if (func_102(&iVar0, 10))
	{
		Local_64.f_74 = { Global_2787947.f_74 };
	}
	if (func_102(&iVar0, 8))
	{
		Local_64.f_67 = { Global_2787947.f_67 };
	}
	if (func_102(&iVar0, 12))
	{
		Local_64.f_20 = { Global_2787947.f_20 };
	}
	func_97(iParam0);
}

void func_97(int* iParam0)//Position - 0x2FCE
{
	int* iVar0;
	
	iVar0 = iParam0;
	if (func_102(&iVar0, 0))
	{
	}
	if (func_102(&iVar0, 1))
	{
	}
	if (func_102(&iVar0, 2))
	{
		Local_64.f_8 = { Global_2787947.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1.5f);
				if (Local_65.f_19.f_2 == 0 && func_101())
				{
					func_98(&(Local_65.f_19), Local_64.f_13.f_2, 0, 0);
				}
				else
				{
					func_90();
				}
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2787947.f_16;
				if (Local_64.f_16 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_64.f_86, false);
		}
	}
	if (func_102(&iVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86.f_1))
		{
			Local_65.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		}
	}
	if (func_102(&iVar0, 6))
	{
		Local_65.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 2:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 3:
				Local_65.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_65.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_65.f_40.f_13 = 0;
				Local_65.f_40.f_13.f_1 = 0;
				Local_65.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_102(&iVar0, 5))
	{
		Local_65.f_40.f_10 = -1;
		Local_65.f_40.f_8 = -1;
		Local_65.f_40.f_9 = -1;
		Local_65.f_40.f_11 = -1;
		Local_65.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_65.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_65.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_65.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_65.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_65.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_3 = "Pan";
				Local_65.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_4 = "Zoom";
				Local_65.f_40.f_9 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_6 = "Take_Damage";
				Local_65.f_40.f_11 = AUDIO::GET_SOUND_ID();
				Local_65.f_40.f_7 = "Low_Health_Warning";
				Local_65.f_40.f_12 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_65.f_40 = 0;
				Local_65.f_40.f_2 = 0;
				Local_65.f_40.f_5 = 0;
				Local_65.f_40.f_10 = -1;
				Local_65.f_40.f_3 = 0;
				Local_65.f_40.f_8 = -1;
				Local_65.f_40.f_4 = 0;
				Local_65.f_40.f_9 = -1;
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_65.f_40, 0, -1);
		}
	}
	if (func_102(&iVar0, 3))
	{
	}
	if (func_102(&iVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_102(&iVar0, 8))
	{
	}
	if (func_102(&iVar0, 9))
	{
	}
	if (func_102(&iVar0, 10))
	{
	}
	if (func_102(&iVar0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_102(&iVar0, 12))
	{
	}
}

void func_98(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x33EE
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_100(bParam2, bParam3), func_99(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_99(int iParam0, int iParam1)//Position - 0x341A
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_100(bool bParam0, bool bParam1)//Position - 0x3430
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

bool func_101()//Position - 0x3462
{
	return (!func_68(&(Local_65.f_19)) || func_52(&(Local_65.f_19), Local_64.f_13.f_2, 0));
}

int func_102(int* iParam0, bool bParam1)//Position - 0x3488
{
	if (BitTest(*iParam0, bParam1))
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_103(int* iParam0)//Position - 0x34A6
{
	if (func_102(&iParam0, 0))
	{
	}
	if (func_102(&iParam0, 1))
	{
	}
	if (func_102(&iParam0, 2))
	{
		Local_65.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
				break;
			
			case 3:
				if (Local_65.f_29)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_65.f_29.f_1 = 0;
				Local_65.f_29 = 0;
				if (Local_65.f_29.f_5)
				{
					Local_65.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_102(&iParam0, 3))
	{
	}
	if (func_102(&iParam0, 4))
	{
		Local_65.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_65.f_36 != -1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_65.f_36));
			Local_65.f_36 = -1;
		}
	}
	if (func_102(&iParam0, 6))
	{
		func_76(&(Local_65.f_40.f_13.f_2));
	}
	if (func_102(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::_0x9AC92EED5E4793AB();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_65.f_40);
		}
		func_76(&(Local_65.f_40.f_8));
		func_76(&(Local_65.f_40.f_9));
		func_76(&(Local_65.f_40.f_10));
		func_76(&(Local_65.f_40.f_11));
		func_76(&(Local_65.f_40.f_12));
	}
	if (func_102(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_104(1, -1);
		}
	}
	if (func_102(&iParam0, 8))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (func_102(&iParam0, 9))
	{
	}
	if (func_102(&iParam0, 10))
	{
	}
	if (func_102(&iParam0, 11))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_102(&iParam0, 12))
	{
		Local_65.f_37 = 0;
	}
}

void func_104(bool bParam0, int iParam1)//Position - 0x368E
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_105(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_105(int* iParam0)//Position - 0x374A
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

void func_106()//Position - 0x3776
{
	if ((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && BitTest(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_64.f_84);
	}
	if (func_52(&(Local_65.f_58), Local_64.f_84, 0))
	{
		if (!BitTest(Local_64.f_84.f_1, 0) || func_108(Local_64.f_88, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_65.f_0))
			{
				Local_65.f_0 = CAM::CREATE_CAMERA(26379945, true);
				MISC::SET_BIT(&(Local_65.f_60), 2);
				func_41();
				MISC::CLEAR_BIT(&(Local_65.f_60), 2);
				PLAYER::_0x70A382ADEC069DD3(Local_65.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_64.f_84.f_1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				func_3(&(Local_65.f_38), &(Local_65.f_39));
				func_37();
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_65.f_40.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_65.f_40.f_1);
				}
				func_61(&(Local_65.f_17), 0, 0);
				MISC::SET_BIT(&Global_2788035, 3);
				func_107(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_65.f_57 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_65.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (BitTest(Local_64.f_84.f_1, 2))
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

void func_107(int iParam0)//Position - 0x38AD
{
	Local_65.f_16 = iParam0;
}

int func_108(struct<3> Param0, int iParam1)//Position - 0x38BB
{
	if (BitTest(Local_65.f_60, 0))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 100f, iParam1))
	{
		MISC::SET_BIT(&(Local_65.f_60), 0);
	}
	return 0;
}

void func_109(int iParam0)//Position - 0x38F6
{
	if (func_114())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_113(0))
		{
			func_110(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_110(int iParam0)//Position - 0x3929
{
	if (func_114())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_54())
		{
			func_112(1, 1);
		}
		else
		{
			func_112(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_111())
	{
		Global_20266.f_1 = 3;
	}
}

int func_111()//Position - 0x39B3
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)//Position - 0x39DA
{
	if (bParam0)
	{
		if (func_113(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

int func_113(int iParam0)//Position - 0x3A4E
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_114()//Position - 0x3AA5
{
	return BitTest(Global_1958711, 19);
}

int func_115()//Position - 0x3AB4
{
	if (Local_64.f_94 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_64.f_95) || ENTITY::IS_ENTITY_DEAD(Local_64.f_95, false))
		{
			return 1;
		}
	}
	if (!func_82(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2787945)
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x3B01
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_123())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(159))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_117() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_117()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117()//Position - 0x3B85
{
	switch (func_119())
	{
		case 0:
			return func_118();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_118()//Position - 0x3BB8
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_119()//Position - 0x3BDC
{
	return Global_31959;
}

bool func_120()//Position - 0x3BE7
{
	return Global_2714762.f_698;
}

int func_121(int iParam0)//Position - 0x3BF6
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()//Position - 0x3C0D
{
	return Global_2725403;
}

bool func_123()//Position - 0x3C19
{
	return Global_2714762.f_693;
}

void func_124()//Position - 0x3C28
{
	SYSTEM::WAIT(0);
}

void func_125()//Position - 0x3C35
{
	int iVar0;
	int iVar1;
	
	if (Local_65.f_16 == 0 && BitTest(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_103(-1);
	if (func_133())
	{
		func_132(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_131(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, true);
			func_129(1);
		}
	}
	if (BitTest(Local_65.f_60, 4))
	{
		func_128();
	}
	PLAYER::_0x7148E0F43D11F0D9();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_65.f_57)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	func_127(Local_65.f_38);
	func_127(Local_65.f_39);
	Global_2787934 = 0;
	Global_2788035 = 0;
	func_126();
}

void func_126()//Position - 0x3CF0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_127(int iParam0)//Position - 0x3CFC
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_128()//Position - 0x3D13
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_129(int iParam0)//Position - 0x3D31
{
	int iVar0;
	
	if (Global_2667225.f_2690 == 1)
	{
		Global_2667225.f_2690 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!Global_2667225.f_2692.f_1)
		{
			if (!Global_2667225.f_2688 == -1)
			{
				if (((Global_2667225.f_2688 < 255 && !func_130()) && !BitTest(Global_4718592.f_168795, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2667225.f_2689 == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2667225.f_2688);
				}
				else if (Global_2667225.f_2688 >= 255)
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
			Global_2667225.f_2688 = -1;
			Global_2667225.f_2692.f_1 = 1;
		}
	}
}

bool func_130()//Position - 0x3E1A
{
	return Global_1888107;
}

int func_131(int iParam0)//Position - 0x3E26
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

void func_132(int iParam0)//Position - 0x3E47
{
	Global_2727832 = iParam0;
}

bool func_133()//Position - 0x3E55
{
	return Global_2727832;
}

void func_134(var uParam0)//Position - 0x3E61
{
	MISC::SET_BIT(&Global_2788035, 2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_152(0, -1, 0);
	}
	else
	{
		func_125();
	}
	func_135(uParam0);
}

void func_135(var uParam0)//Position - 0x3E96
{
	int iVar0;
	int iVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_65.f_22.f_4 = -1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_131(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			func_151(1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar1, false);
		}
	}
	if (!func_150())
	{
		MISC::SET_BIT(&(Local_65.f_60), 4);
		func_149();
	}
	func_136();
}

void func_136()//Position - 0x3F1F
{
	if (!BitTest(Global_2788033, 0))
	{
		func_148(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2788033, 1))
	{
		func_147(1058642330, 1101004800);
	}
	if (!BitTest(Global_2788033, 2))
	{
		func_146();
	}
	if (!BitTest(Global_2788033, 3))
	{
		func_144(1, 1, 0, 500);
	}
	if (!BitTest(Global_2788033, 4))
	{
		func_143(0);
	}
	if (!BitTest(Global_2788033, 5))
	{
		func_142(0);
	}
	if (!BitTest(Global_2788033, 6))
	{
		func_141(0);
	}
	if (!BitTest(Global_2788033, 7))
	{
		MISC::SET_BIT(&Global_2788033, 7);
		Global_2787947.f_24 = 0;
	}
	if (!BitTest(Global_2788033, 8))
	{
		func_140(0);
	}
	if (!BitTest(Global_2788033, 9))
	{
		func_139(0f, 0f, 0f);
	}
	if (!BitTest(Global_2788033, 10))
	{
		MISC::SET_BIT(&Global_2788033, 10);
		Global_2787947.f_74 = 0;
	}
	if (!BitTest(Global_2788033, 11))
	{
		func_138(0);
	}
	if (!BitTest(Global_2788033, 12))
	{
		func_137(1, 3, 3, 3);
	}
	Local_64 = { Global_2787947 };
	func_97(Global_2788033);
	func_107(0);
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4050
{
	MISC::SET_BIT(&Global_2788033, 12);
	Global_2787947.f_20 = iParam0;
	Global_2787947.f_20.f_1 = iParam1;
	Global_2787947.f_20.f_2 = iParam2;
	Global_2787947.f_20.f_3 = iParam3;
}

void func_138(char* sParam0)//Position - 0x4088
{
	MISC::SET_BIT(&Global_2788033, 11);
	StringCopy(&(Global_2787947.f_80), sParam0, 16);
}

void func_139(struct<3> Param0)//Position - 0x40A4
{
	MISC::SET_BIT(&Global_2788033, 9);
	Global_2787947.f_71 = { Param0 };
}

void func_140(char* sParam0)//Position - 0x40C2
{
	MISC::SET_BIT(&Global_2788033, 8);
	StringCopy(&(Global_2787947.f_67), sParam0, 16);
}

void func_141(int iParam0)//Position - 0x40DE
{
	MISC::SET_BIT(&Global_2788033, 6);
	Global_2787947.f_19 = iParam0;
}

void func_142(int iParam0)//Position - 0x40F7
{
	MISC::SET_BIT(&Global_2788033, 5);
	Global_2787947.f_18 = iParam0;
}

void func_143(int iParam0)//Position - 0x4110
{
	MISC::SET_BIT(&Global_2788033, 4);
	Global_2787947.f_17 = iParam0;
}

void func_144(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4129
{
	MISC::SET_BIT(&Global_2788033, 3);
	Global_2787947.f_84 = iParam3;
	func_145(&(Global_2787947.f_84.f_1), 1, bParam0);
	func_145(&(Global_2787947.f_84.f_1), 2, bParam1);
	func_145(&(Global_2787947.f_84.f_1), 0, bParam2);
}

void func_145(int* iParam0, int iParam1, bool bParam2)//Position - 0x416F
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

void func_146()//Position - 0x418F
{
	MISC::SET_BIT(&Global_2788033, 2);
	Global_2787947.f_8.f_1 = 0;
}

void func_147(int iParam0, int iParam1)//Position - 0x41A9
{
	MISC::SET_BIT(&Global_2788033, 1);
	Global_2787947.f_6.f_1 = iParam0;
	Global_2787947.f_6 = iParam1;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x41CC
{
	MISC::SET_BIT(&Global_2788033, 0);
	Global_2787947 = iParam0;
	Global_2787947.f_1 = iParam1;
	Global_2787947.f_2 = iParam2;
	Global_2787947.f_3 = iParam3;
	Global_2787947.f_4 = iParam4;
	Global_2787947.f_5 = iParam5;
}

void func_149()//Position - 0x420B
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

bool func_150()//Position - 0x422A
{
	return Global_2703735.f_833.f_10;
}

void func_151(int iParam0)//Position - 0x423B
{
	int iVar0;
	
	iVar0 = Global_2667225.f_2691;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

int func_152(int iParam0, int iParam1, bool bParam2)//Position - 0x4290
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
		if (!func_153(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_123())
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(157))
				{
					if (!bParam2)
					{
						func_126();
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
					func_126();
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
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_126();
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
			func_126();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_153(bool bParam0)//Position - 0x43A6
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

