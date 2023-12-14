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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
	var uLocal_48 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 32;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<150> Local_133 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_16 = "NULL";
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
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_206(ScriptParam_0);
	}
	else
	{
		func_197(0);
	}
	while (true)
	{
		func_196();
		if (func_188())
		{
			func_197(0);
		}
		if (func_185())
		{
			func_197(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xCF
{
}

void func_2()//Position - 0xD7
{
	func_182();
	if (func_181(0))
	{
		func_169();
	}
	else if (func_181(1))
	{
		if (func_168())
		{
			func_139();
		}
		else
		{
			func_131();
		}
	}
	else if (func_181(2))
	{
		if (func_114())
		{
			func_113(3);
		}
		func_104();
		if (func_100())
		{
			return;
		}
		func_91();
		func_90();
		func_61();
		func_50();
		func_48();
		func_3();
	}
	else if (func_181(3))
	{
		func_197(1);
	}
}

void func_3()//Position - 0x159
{
	func_47();
	func_40(0);
	func_25();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)//Position - 0x17C
{
	Global_1577933 = iParam0;
}

void func_5(int iParam0)//Position - 0x18A
{
	Global_1669875.f_1163 = iParam0;
}

void func_6()//Position - 0x19B
{
	int iVar0;
	
	if (!BitTest(Local_133.f_5, 4))
	{
		if (func_23(0, -1, 0))
		{
			func_22(-1);
			func_21(21, "BLIP_184" /* GXT: Camera */, -1);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				func_21(29, "CELL_284" /* GXT: Zoom */, -1);
			}
			else
			{
				func_21(20, "CELL_284" /* GXT: Zoom */, -1);
			}
			iVar0 = 208;
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar0 = 237;
			}
			func_20(iVar0, "BLIP_39" /* GXT: Fire */, -1, 0);
			func_20(80, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_133.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_133.f_5, 6))
		{
			MISC::SET_BIT(&(Local_133.f_5), 6);
			MISC::CLEAR_BIT(&(Local_133.f_5), 4);
		}
	}
	else if (BitTest(Local_133.f_5, 6))
	{
		MISC::CLEAR_BIT(&(Local_133.f_5), 6);
		MISC::CLEAR_BIT(&(Local_133.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x262
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_19(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_16(bParam4, bParam8))
	{
		return;
	}
	if (func_14())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(PLAYER::PLAYER_ID(), 0))
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
	if (Global_23711.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (Global_23711.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5625[iVar1], true), 64);
				}
				else if (Global_23711.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23711.f_5327 = 0;
		}
		if (!Global_23711.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23711.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_9(&(Global_23711.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_9(&(Global_23711.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23711.f_5610[iVar1] == -1)
					{
						func_8(&(Global_23711.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23711.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
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
						if (Global_23711.f_5625[iVar1] != 365 && BitTest(Global_23711.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5625[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5326);
				func_9(&Global_4541639);
				if (Global_4541639.f_20 == -1)
				{
					func_8(&(Global_4541639.f_16));
				}
				else
				{
					iVar4 = Global_23711.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23711.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23711.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23711.f_5326)
		{
			if (Global_23711.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
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
		if (Global_4541639.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
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
			if (!Global_23711.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23711.f_9116 = 1;
			}
		}
		else if (Global_23711.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23711.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23711.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23711.f_6263[iVar0 /*10*/], Global_23711.f_5656, Global_23711.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23711.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(char* sParam0)//Position - 0x75B
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(char* sParam0)//Position - 0x76D
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x77B
{
	bool bVar0;
	
	if (!func_13(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845263[iParam0 /*877*/].f_205 == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x7D4
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
	}
	if (Global_1575059[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574919[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_12()//Position - 0x815
{
	return Global_1574925;
}

int func_13(var uParam0)//Position - 0x821
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

int func_14()//Position - 0x843
{
	struct<3> Var0;
	
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	if (func_15())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20758 == 0)
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

int func_15()//Position - 0x8B1
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_16(bool bParam0, bool bParam1)//Position - 0x8CB
{
	if (Global_2672741.f_1689.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_18(8, -1) && func_17() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79509) || Global_23711.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101444.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_17()//Position - 0x968
{
	return Global_1575008;
}

var func_18(int iParam0, int iParam1)//Position - 0x974
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668317.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668317.f_1048, iParam0);
}

int func_19(var uParam0, bool bParam1, int iParam2)//Position - 0x9AC
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
		if (Global_23711.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23711.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23711.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xA49
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	}
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = iParam0;
	Global_23711.f_5640[Global_23711.f_5326] = 32;
	Global_23711.f_5326++;
}

void func_21(int iParam0, char* sParam1, int iParam2)//Position - 0xAFE
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = 365;
	Global_23711.f_5640[Global_23711.f_5326] = iParam0;
	Global_23711.f_5326++;
}

void func_22(int iParam0)//Position - 0xBAE
{
	int iVar0;
	int iVar1;
	
	Global_23711.f_5326 = 0;
	Global_23711.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23711.f_5553[iVar0 /*4*/]), "", 16);
		Global_23711.f_5610[iVar0] = -1;
		Global_23711.f_5625[iVar0] = 365;
		Global_23711.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23711.f_5655 = 0;
	StringCopy(&(Global_4541639.f_16), "", 16);
	Global_4541639.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_19(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23711.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0xC66
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_19(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23711.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23711.f_6238[iVar0 /*4*/]), 9);
		Global_23711.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23711.f_6238[iVar0 /*4*/]), 9))
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
	Global_23711.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23711.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23711.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_24(&(Global_23711.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_24(var uParam0)//Position - 0xD6D
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

void func_25()//Position - 0xE0F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	float fVar15;
	
	if (func_168())
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_133.f_62))
		{
			Local_133.f_62 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_39());
			return;
		}
		func_38("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_38("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_133.f_8 > -1 || BitTest(Local_133.f_5, 3))
		{
			func_38("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_38("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_38("SET_HEADING_METER_IS_VISIBLE", 1);
		func_38("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_38("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_38("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_38("SET_INFO_LIST_IS_VISIBLE", 0);
		func_38("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_38("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_38("SET_BOOST_METER_IS_VISIBLE", 0);
		func_38("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_38("SET_WARNING_IS_VISIBLE", 0);
		func_37(0);
		func_36(0);
		func_34();
		if (CAM::DOES_CAM_EXIST(Local_133.f_61))
		{
			Var0 = { CAM::GET_CAM_ROT(Local_133.f_61, 2) };
			func_33(SYSTEM::ROUND(-Var0.f_2));
		}
		func_32(Local_133.f_33);
	}
	else if (CAM::DOES_CAM_EXIST(Local_133.f_61))
	{
		Var3 = { CAM::GET_CAM_ROT(Local_133.f_61, 2) };
		fVar6 = Var3.f_2;
		if (ENTITY::DOES_ENTITY_EXIST(func_31()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_31(), false))
			{
				Var12 = { ENTITY::GET_ENTITY_COORDS(func_31(), true) };
				fVar8 = ENTITY::GET_ENTITY_HEADING(func_31());
			}
		}
		while (fVar6 < 0f)
		{
			fVar6 = (fVar6 + 360f);
		}
		while (fVar6 > 360f)
		{
			fVar6 = (fVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = fVar6;
		func_26(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		fVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (fVar7 == 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 == -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 < 0f && fVar7 >= -0.5f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 < 0f && fVar7 > -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 > 1.5f && fVar7 < 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 > 2f || fVar7 < -1f)
		{
			fVar7 = 0.5f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_ALT_FOV_HEADING");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Var12.f_2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_CAM_LOGO");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_133.f_62, 255, 255, 255, 0, 0);
}

void func_26(var uParam0)//Position - 0x10E3
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_27(int iParam0, bool bParam1)//Position - 0x110A
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_30())
			{
				return func_28(Global_2657921[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x1198
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
	}
	return -1;
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0x1672
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x16D2
{
	return -1;
}

int func_31()//Position - 0x16DB
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1663005))
		{
			return Global_1663005;
		}
		if (Global_1845102 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1961146[Global_1845102]))
			{
				return Global_1961146[Global_1845102];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	return -1;
}

void func_32(int iParam0)//Position - 0x1740
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_MISSILE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_33(int iParam0)//Position - 0x175F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_34()//Position - 0x177E
{
	if (Local_133.f_59 <= 60f && Local_133.f_59 > 55f)
	{
		func_35(0);
	}
	else if (Local_133.f_59 <= 55f && Local_133.f_59 > 50f)
	{
		func_35(1);
	}
	else if (Local_133.f_59 <= 50f && Local_133.f_59 > 45f)
	{
		func_35(2);
	}
	else if (Local_133.f_59 <= 45f && Local_133.f_59 > 40f)
	{
		func_35(3);
	}
	else if (Local_133.f_59 <= 40f && Local_133.f_59 > 30f)
	{
		func_35(4);
	}
}

void func_35(int iParam0)//Position - 0x1837
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(int iParam0)//Position - 0x1856
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_37(bool bParam0)//Position - 0x1875
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_38(char* sParam0, bool bParam1)//Position - 0x1894
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_133.f_62, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_39()//Position - 0x18B1
{
	if (func_168())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_40(int iParam0)//Position - 0x18D4
{
	if (func_46())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_45(0))
		{
			func_41(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_41(int iParam0)//Position - 0x1907
{
	if (func_46())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_42())
	{
		Global_20813.f_1 = 3;
	}
}

int func_42()//Position - 0x1991
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1)//Position - 0x19B8
{
	if (bParam0)
	{
		if (func_45(0))
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

bool func_44()//Position - 0x1A2C
{
	return BitTest(Global_1956030, 5);
}

int func_45(int iParam0)//Position - 0x1A3A
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

bool func_46()//Position - 0x1A91
{
	return BitTest(Global_1956030, 19);
}

void func_47()//Position - 0x1AA0
{
	MISC::SET_BIT(&Global_8684, 4);
}

void func_48()//Position - 0x1AB0
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	
	if (!func_168())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= 5)
	{
		if (((CAM::DOES_CAM_EXIST(Local_133.f_61) && CAM::IS_CAM_RENDERING(Local_133.f_61)) && func_49(Local_133.f_84[bVar1])) && func_49(func_31()))
		{
			Var10 = { CAM::GET_CAM_COORD(Local_133.f_61) };
			Var13 = { ENTITY::GET_ENTITY_COORDS(Local_133.f_84[bVar1], true) };
			switch (Local_133.f_10[bVar1])
			{
				case 0:
					Local_133.f_98[bVar1] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var13, 511, 0, 7);
					if (Local_133.f_98[bVar1] != 0)
					{
						Local_133.f_10[bVar1] = 1;
					}
					break;
				
				case 1:
					iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_133.f_98[bVar1], &iVar0, &Var5, &uVar2, &iVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_133.f_17[bVar1] = 1;
							Var5 = { 0f, 0f, 0f };
							if (BitTest(Local_133.f_7, bVar1))
							{
								MISC::CLEAR_BIT(&(Local_133.f_7), bVar1);
							}
						}
						else
						{
							Local_133.f_17[bVar1] = 2;
							if (BitTest(Local_133.f_7, bVar1))
							{
								MISC::CLEAR_BIT(&(Local_133.f_7), bVar1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								if (Local_133.f_84[bVar1] == iVar8)
								{
									if (!BitTest(Local_133.f_7, bVar1))
									{
										MISC::SET_BIT(&(Local_133.f_7), bVar1);
									}
								}
							}
							Local_133.f_98[bVar1] = 0;
							Local_133.f_10[bVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_133.f_10[bVar1] = 0;
					}
					break;
			}
		}
		else if (BitTest(Local_133.f_7, bVar1))
		{
			MISC::CLEAR_BIT(&(Local_133.f_7), bVar1);
		}
		bVar1++;
	}
}

int func_49(int iParam0)//Position - 0x1C41
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

void func_50()//Position - 0x1C62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	struct<3> Var35;
	
	if (!func_168())
	{
		return;
	}
	iVar0 = 208;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 237;
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0)) || BitTest(Local_133.f_5, 5))
	{
		iVar1 = 250;
		iVar2 = func_60();
		if (Local_133.f_8 > -1)
		{
			if (!BitTest(Local_133.f_5, 3))
			{
				if (!func_59(&(Local_133.f_115)))
				{
					func_58(&(Local_133.f_115), 0, 0);
					Local_133.f_31 = 0;
					MISC::SET_BIT(&(Local_133.f_5), 5);
				}
				else if (func_57(&(Local_133.f_115), 300, 0) || Local_133.f_31 == 0)
				{
					if (Local_133.f_31 < 0 || Local_133.f_31 >= 6)
					{
						Local_133.f_31 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[Local_133.f_31]) && !ENTITY::IS_ENTITY_DEAD(Local_133.f_84[Local_133.f_31], false))
					{
						iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_31(), func_56());
						if (iVar3 != -1)
						{
							Var4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_31(), iVar3) + func_55(Local_133.f_31) };
							Var7 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							Var10 = { (-SYSTEM::SIN(Var7.f_2) * SYSTEM::COS(Var7.f_0)), (SYSTEM::COS(Var7.f_2) * SYSTEM::COS(Var7.f_0)), SYSTEM::SIN(Var7.f_0) };
							Var13 = { 1f, 1f, 1f };
							Var16 = { Var4 + Var10 * Var13 };
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var4, Var16, iVar1, true, func_54(0), PLAYER::PLAYER_PED_ID(), true, true, -1f, iVar2, false, false, Local_133.f_84[Local_133.f_31], true, 0, 1, 0);
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", Var4, "DLC_BTL_Terrobyte_Turret_Sounds", true, 120, true);
							Local_133.f_32++;
							func_53(&(Local_133.f_115), 0, 0);
						}
					}
					if (Local_133.f_32 == Local_133.f_8)
					{
						Local_133.f_31 = 0;
						Local_133.f_33 = 0;
						Local_133.f_32 = -1;
						MISC::SET_BIT(&(Local_133.f_5), 3);
						MISC::CLEAR_BIT(&(Local_133.f_5), 5);
						func_58(&(Local_133.f_119), 0, 0);
						func_52(&(Local_133.f_115));
					}
					Local_133.f_31++;
				}
			}
		}
		else if (!BitTest(Local_133.f_5, 1))
		{
			if (Local_133.f_31 < 0 || Local_133.f_31 >= 6)
			{
				Local_133.f_31 = 0;
			}
			iVar19 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_31(), func_56());
			if (iVar19 != -1)
			{
				Var20 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_31(), iVar19) + func_55(Local_133.f_31) };
				Var23 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var26 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var29 = { (-SYSTEM::SIN(Var26.f_2) * SYSTEM::COS(Var26.f_0)), (SYSTEM::COS(Var26.f_2) * SYSTEM::COS(Var26.f_0)), SYSTEM::SIN(Var26.f_0) };
				Var32 = { 10f, 10f, 10f };
				if (!func_51(Local_133.f_56))
				{
					Var32.f_0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_133.f_56, Var23, false);
					Var32.f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_133.f_56, Var23, false);
					Var32.f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_133.f_56, Var23, false);
				}
				Var35 = { Var23 + Var29 * Var32 };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Var20, Var35, iVar1, true, func_54(1), PLAYER::PLAYER_PED_ID(), true, true, -1f, iVar2, false, false, 0, true, 0, 1, 0);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", Var20, "DLC_BTL_Terrobyte_Turret_Sounds", true, 120, true);
				MISC::SET_BIT(&(Local_133.f_5), 1);
				Local_133.f_33 = 0;
				func_58(&(Local_133.f_134), 0, 0);
				Local_133.f_31++;
			}
		}
	}
}

int func_51(struct<3> Param0)//Position - 0x1FBF
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_52(var uParam0)//Position - 0x1FE9
{
	uParam0->f_1 = 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)//Position - 0x1FF6
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

int func_54(int iParam0)//Position - 0x2033
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE_HOMING");
		}
		else
		{
			return joaat("VEHICLE_WEAPON_HACKER_MISSILE");
		}
	}
	return 0;
}

Vector3 func_55(int iParam0)//Position - 0x2061
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_56()//Position - 0x211F
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_57(var uParam0, int iParam1, bool bParam2)//Position - 0x213D
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_58(uParam0, bParam2, 0);
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

void func_58(var uParam0, bool bParam1, bool bParam2)//Position - 0x219B
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

bool func_59(var uParam0)//Position - 0x21E0
{
	return uParam0->f_1;
}

int func_60()//Position - 0x21EC
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		return Global_1663005;
	}
	return -1;
}

void func_61()//Position - 0x2208
{
	int iVar0;
	int iVar1;
	
	if (!func_168())
	{
		return;
	}
	if (BitTest(Local_133.f_5, 3))
	{
		if (func_59(&(Local_133.f_119)))
		{
			if (!func_57(&(Local_133.f_119), 5000, 0))
			{
				iVar0 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_133.f_119)));
				Local_133.f_33 = (iVar0 / 5000);
				func_89();
				return;
			}
			else
			{
				func_52(&(Local_133.f_119));
				MISC::CLEAR_BIT(&(Local_133.f_5), 3);
				Local_133.f_32 = -1;
				Local_133.f_33 = 100;
			}
		}
	}
	if (BitTest(Local_133.f_5, 1))
	{
		if (func_59(&(Local_133.f_134)))
		{
			if (!func_57(&(Local_133.f_134), 1500, 0))
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_133.f_134)));
				Local_133.f_33 = (iVar1 / 1500);
				func_89();
				return;
			}
			else
			{
				func_52(&(Local_133.f_134));
				MISC::CLEAR_BIT(&(Local_133.f_5), 1);
				Local_133.f_33 = 100;
			}
		}
	}
	if (!BitTest(Local_133.f_5, 1) && !BitTest(Local_133.f_5, 5))
	{
		switch (Local_133.f_111)
		{
			case 0:
				func_86();
				break;
			
			case 1:
				func_76();
				break;
		}
		func_69();
	}
	func_63();
	func_62();
}

void func_62()//Position - 0x232D
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if ((CAM::DOES_CAM_EXIST(Local_133.f_61) && CAM::IS_CAM_RENDERING(Local_133.f_61)) && func_49(func_31()))
	{
		Var6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		Var9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		Var12 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.f_0)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.f_0)), SYSTEM::SIN(Var9.f_0) };
		Var15 = { 300f, 300f, 300f };
		Var18 = { Var6 + Var12 * Var15 };
		Var21 = { Var6 + Var12 * Vector(1f, 1f, 1f) };
		switch (Local_133.f_27)
		{
			case 0:
				Local_133.f_106 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var21, Var18, 511, func_31(), 7);
				if (Local_133.f_106 != 0)
				{
					Local_133.f_27 = 1;
				}
				break;
			
			case 1:
				iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_133.f_106, &iVar0, &(Local_133.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_133.f_26 = 1;
						Local_133.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_133.f_26 = 2;
						Local_133.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_133.f_27 = 0;
				}
				break;
			}
	}
}

void func_63()//Position - 0x245F
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_64(Local_133.f_84[bVar0], 0, bVar0);
		bVar0++;
	}
}

void func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x2488
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		if (Local_133.f_8 > -1)
		{
			if (func_49(iParam0))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (func_29(iVar8, 1, 1))
							{
								if (func_68(iVar8, -1))
								{
									VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(PED::GET_VEHICLE_PED_IS_IN(iVar7, false), 2);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
					{
						iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1, false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							if (PED::IS_PED_A_PLAYER(iVar9))
							{
								iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
								if (func_29(iVar10, 1, 1))
								{
									VEHICLE::SET_VEHICLE_HOMING_LOCKEDONTO_STATE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 2);
								}
							}
						}
					}
					if (!BitTest(Local_133.f_48, bParam2))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_133.f_34[bParam2]) && Local_133.f_34[bParam2] == -1) && !func_67())
						{
							Local_133.f_34[bParam2] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_34[bParam2], "VULKAN_LOCK_ON_AMBER", 0, true);
							func_58(&(Local_133.f_136[bParam2 /*2*/]), 0, 0);
							MISC::SET_BIT(&(Local_133.f_48), bParam2);
						}
					}
					else if (!BitTest(Local_133.f_48, bParam2 + 6))
					{
						if (func_59(&(Local_133.f_136[bParam2 /*2*/])))
						{
							if (func_57(&(Local_133.f_136[bParam2 /*2*/]), 1000, 0))
							{
								func_66(bParam2, 0);
								if (AUDIO::HAS_SOUND_FINISHED(Local_133.f_41[bParam2]) && Local_133.f_41[bParam2] == -1)
								{
									Local_133.f_41[bParam2] = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_41[bParam2], "VULKAN_LOCK_ON_RED", 0, true);
									func_58(&(Local_133.f_149[bParam2 /*2*/]), 0, 0);
									MISC::SET_BIT(&(Local_133.f_48), bParam2 + 6);
								}
							}
						}
					}
					else if (func_59(&(Local_133.f_149[bParam2 /*2*/])))
					{
						if (func_57(&(Local_133.f_149[bParam2 /*2*/]), 700, 0))
						{
							func_65(bParam2, 0);
						}
					}
					GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, true), false);
					if (!BitTest(Local_133.f_48, bParam2 + 6))
					{
						HUD::GET_HUD_COLOUR(15, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					else
					{
						HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					if (!bParam1)
					{
						GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar3, iVar4, iVar5, iVar6, true, 0);
					}
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar3, iVar4, iVar5, iVar6, true, 0);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar3, iVar4, iVar5, iVar6, true, 0);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar3, iVar4, iVar5, iVar6, true, 0);
					GRAPHICS::CLEAR_DRAW_ORIGIN();
				}
				else
				{
					func_66(bParam2, 1);
					func_65(bParam2, 1);
				}
			}
			else
			{
				func_66(bParam2, 1);
				func_65(bParam2, 1);
			}
		}
		else
		{
			func_66(bParam2, 1);
			func_65(bParam2, 1);
		}
	}
}

void func_65(bool bParam0, bool bParam1)//Position - 0x27F3
{
	if (BitTest(Local_133.f_48, bParam0 + 6))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_133.f_41[bParam0]))
		{
			AUDIO::STOP_SOUND(Local_133.f_41[bParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_133.f_41[bParam0]);
		}
		Local_133.f_41[bParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_133.f_48), bParam0 + 6);
		}
		func_52(&(Local_133.f_149[bParam0 /*2*/]));
	}
}

void func_66(bool bParam0, bool bParam1)//Position - 0x2855
{
	if (BitTest(Local_133.f_48, bParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_133.f_34[bParam0]))
		{
			AUDIO::STOP_SOUND(Local_133.f_34[bParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_133.f_34[bParam0]);
		}
		Local_133.f_34[bParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_133.f_48), bParam0);
		}
		func_52(&(Local_133.f_136[bParam0 /*2*/]));
	}
}

int func_67()//Position - 0x28B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_133.f_34[iVar0]) || !AUDIO::HAS_SOUND_FINISHED(Local_133.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)//Position - 0x28F5
{
	int iVar0;
	
	if (func_29(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()//Position - 0x2942
{
	bool bVar0;
	int iVar1;
	
	iVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[bVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[bVar0]))
			{
				if (!BitTest(Local_133.f_7, bVar0))
				{
					if (func_59(&(Local_133.f_121[bVar0 /*2*/])))
					{
						if (func_57(&(Local_133.f_121[bVar0 /*2*/]), 1000, 0))
						{
							Local_133.f_84[bVar0] = -1;
							if (Local_133.f_8 > -1)
							{
								Local_133.f_17[bVar0] = 0;
								func_52(&(Local_133.f_121[bVar0 /*2*/]));
								Local_133.f_8 = (Local_133.f_8 - 1);
							}
						}
					}
					else
					{
						func_58(&(Local_133.f_121[bVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_52(&(Local_133.f_121[bVar0 /*2*/]));
				}
				if ((!func_75(Local_133.f_84[bVar0]) || !ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[bVar0])) || !func_70(Local_133.f_84[bVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[bVar0]))
					{
					}
					if (!func_75(Local_133.f_84[bVar0]))
					{
					}
					Local_133.f_84[bVar0] = -1;
					if (Local_133.f_8 > -1)
					{
						Local_133.f_17[bVar0] = 0;
						func_52(&(Local_133.f_121[bVar0 /*2*/]));
						Local_133.f_8 = (Local_133.f_8 - 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[bVar0]))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (Local_133.f_8 != iVar1)
	{
		Local_133.f_8 = iVar1;
	}
}

int func_70(int iParam0)//Position - 0x2AA4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (func_74(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_73(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				if (!func_71(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)//Position - 0x2B23
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (func_13(iVar0))
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x2B4C
{
	if (func_13(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_30();
}

int func_73(int iParam0)//Position - 0x2B6F
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
		
		case joaat("polgauntlet"):
		case joaat("pranger"):
		case joaat("police5"):
			return 1;
			break;
	}
	return 0;
}

int func_74(int iParam0, bool bParam1, bool bParam2)//Position - 0x2BE1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_71(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_71(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x2C9B
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_76()//Position - 0x2D03
{
	if (Local_133.f_28 < 0 || Local_133.f_28 >= 20)
	{
		Local_133.f_28 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_63[Local_133.f_28]) && !ENTITY::IS_ENTITY_DEAD(Local_133.f_63[Local_133.f_28], false))
	{
		func_84(Local_133.f_63[Local_133.f_28]);
		if (func_57(&(Local_133.f_117), 1000, 0))
		{
			if (Local_133.f_112 == 2)
			{
				if (BitTest(Local_133.f_5, 0))
				{
					if (Local_133.f_8 < 5)
					{
						if (func_83(Local_133.f_63[Local_133.f_28]))
						{
							Local_133.f_63[Local_133.f_28] = -1;
							MISC::CLEAR_BIT(&(Local_133.f_5), 0);
							func_52(&(Local_133.f_117));
							Local_133.f_28++;
						}
					}
					else
					{
						if (func_80(Local_133.f_63[Local_133.f_28]))
						{
							func_77(Local_133.f_63[Local_133.f_28]);
						}
						Local_133.f_63[Local_133.f_28] = -1;
						MISC::CLEAR_BIT(&(Local_133.f_5), 0);
						Local_133.f_25 = 0;
						func_52(&(Local_133.f_117));
						Local_133.f_28++;
					}
				}
				else
				{
					Local_133.f_25 = 0;
					Local_133.f_63[Local_133.f_28] = -1;
					MISC::CLEAR_BIT(&(Local_133.f_5), 0);
					func_53(&(Local_133.f_117), 0, 0);
					Local_133.f_28++;
				}
			}
		}
	}
	else
	{
		Local_133.f_63[Local_133.f_28] = -1;
		Local_133.f_25 = 0;
		func_52(&(Local_133.f_117));
		Local_133.f_28++;
	}
	if (Local_133.f_28 == 20)
	{
		Local_133.f_111 = 0;
		Local_133.f_25 = 0;
		func_52(&(Local_133.f_117));
		Local_133.f_28 = 0;
	}
}

void func_77(int iParam0)//Position - 0x2E7E
{
	if (func_78() != -1 && func_78() < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[func_78()]) && ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			Local_133.f_84[func_78()] = iParam0;
		}
	}
}

int func_78()//Position - 0x2EC2
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (CAM::DOES_CAM_EXIST(Local_133.f_61) && CAM::IS_CAM_RENDERING(Local_133.f_61))
	{
		Var2 = { CAM::GET_CAM_COORD(Local_133.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[iVar5]) && !ENTITY::IS_ENTITY_DEAD(Local_133.f_84[iVar5], false))
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_133.f_84[iVar5], true) - Var2 };
				fVar9 = func_79(Var6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_133.f_9 = iVar0;
	return iVar0;
}

float func_79(struct<3> Param0)//Position - 0x2F60
{
	return SYSTEM::SQRT((((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
}

int func_80(int iParam0)//Position - 0x2F85
{
	if (func_78() != -1)
	{
		if ((func_49(Local_133.f_84[func_78()]) && func_49(iParam0)) && func_49(func_82()))
		{
			if (func_81(func_82(), Local_133.f_84[func_78()], 1) > func_81(func_82(), iParam0, 1) && func_81(Local_133.f_84[func_78()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_81(int iParam0, int iParam1, bool bParam2)//Position - 0x2FFD
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_82()//Position - 0x305B
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::NETWORK_PLAYER_ID_TO_INT() != -1)
		{
			return Global_2672741.f_918[PLAYER::NETWORK_PLAYER_ID_TO_INT()];
		}
	}
	return -1;
}

int func_83(var uParam0)//Position - 0x3088
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[iVar0]))
		{
			Local_133.f_84[iVar0] = uParam0;
			Local_133.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_84(int iParam0)//Position - 0x30CB
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	int iVar13;
	
	if (((CAM::DOES_CAM_EXIST(Local_133.f_61) && CAM::IS_CAM_RENDERING(Local_133.f_61)) && func_49(iParam0)) && func_49(func_31()))
	{
		Var0 = { CAM::GET_CAM_COORD(Local_133.f_61) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		switch (Local_133.f_25)
		{
			case 0:
				Local_133.f_105 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var3, 511, 0, 7);
				if (Local_133.f_105 != 0)
				{
					Local_133.f_25 = 1;
				}
				break;
			
			case 1:
				Local_133.f_112 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_133.f_105, &iVar6, &Var10, &uVar7, &iVar13);
				if (Local_133.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_133.f_24 = 1;
						Var10 = { 0f, 0f, 0f };
						if (BitTest(Local_133.f_5, 0))
						{
							MISC::CLEAR_BIT(&(Local_133.f_5), 0);
						}
					}
					else
					{
						Local_133.f_24 = 2;
						if (ENTITY::DOES_ENTITY_EXIST(iVar13))
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(iVar13) || (ENTITY::IS_ENTITY_A_PED(iVar13) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13))))
							{
								if (iVar13 == func_85(iParam0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
									{
										if (!BitTest(Local_133.f_5, 0))
										{
											MISC::SET_BIT(&(Local_133.f_5), 0);
										}
									}
								}
							}
							else if (BitTest(Local_133.f_5, 0))
							{
								MISC::CLEAR_BIT(&(Local_133.f_5), 0);
							}
						}
						Local_133.f_105 = 0;
						Local_133.f_25 = 0;
					}
				}
				else if (Local_133.f_112 == 0)
				{
					Local_133.f_25 = 0;
				}
				break;
		}
	}
	else if (BitTest(Local_133.f_5, 0))
	{
		MISC::CLEAR_BIT(&(Local_133.f_5), 0);
	}
}

int func_85(int iParam0)//Position - 0x3239
{
	return iParam0;
}

void func_86()//Position - 0x3243
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (CAM::DOES_CAM_EXIST(Local_133.f_61) && CAM::IS_CAM_RENDERING(Local_133.f_61))
	{
		if (func_29(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_49(func_82()))
			{
				iVar105 = VEHICLE::GET_ALL_VEHICLES(&uVar2);
				if (iVar105 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar105)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]))
						{
						}
						else if ((!ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]) || uVar2[iVar0] == func_31()) || !func_70(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_88(uVar2[iVar0]) && !func_87(uVar2[iVar0]))
						{
							if (func_75(uVar2[iVar0]) && func_81(uVar2[iVar0], func_82(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_133.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
					{
						iVar103 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
						iVar104 = PLAYER::GET_PLAYER_PED(iVar103);
						if ((iVar103 == PLAYER::PLAYER_ID() || !func_70(iVar104)) || ENTITY::IS_ENTITY_DEAD(iVar104, false))
						{
						}
						else if (func_88(iVar104) && !func_87(iVar104))
						{
							if (func_81(iVar104, func_82(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_133.f_63[iVar1] = iVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_133.f_111 = 1;
			}
		}
	}
}

int func_87(int iParam0)//Position - 0x340D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_133.f_84[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_133.f_84[iVar0], false)) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (iParam0 == Local_133.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x3473
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (iParam0 == Local_133.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_89()//Position - 0x34B6
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_66(bVar0, 1);
		func_65(bVar0, 1);
		bVar0++;
	}
}

void func_90()//Position - 0x34DE
{
	int iVar0;
	
	if ((func_49(func_31()) && CAM::DOES_CAM_EXIST(Local_133.f_61)) && CAM::IS_CAM_RENDERING(Local_133.f_61))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_31(), func_56());
		if (iVar0 != -1)
		{
			if (!BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399, 0))
			{
				MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399), 0);
			}
		}
	}
	else if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399, 0))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399), 0);
	}
}

void func_91()//Position - 0x3572
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar18;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	struct<3> Var35;
	int iVar38;
	int iVar39;
	
	if (((CAM::DOES_CAM_EXIST(Local_133.f_61) && (CAM::IS_CAM_RENDERING(Local_133.f_61) || !BitTest(Local_133.f_5, 2))) && func_49(func_31())) && func_31() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_99(&fVar1);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_98(&fVar8, &fVar7);
		func_97(&fVar10, &fVar9);
		func_96(&fVar12, &fVar11);
		func_26(&fVar13);
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			fVar14 = 15f;
			fVar5 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * -fVar14);
			fVar6 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * fVar14);
		}
		else
		{
			iVar4 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * -fVar14));
			iVar3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * fVar14));
		}
		iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/) * fVar14));
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar18 = SYSTEM::ROUND((IntToFloat(iVar18) * fVar14));
			if (MISC::ABSI(iVar2) < iVar18)
			{
				iVar2 = 0;
			}
			Var19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (SYSTEM::VMAG(Var19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((Var15.f_0 / fVar7) * 0.5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			Local_133[2] = ((fVar5 * Local_133.f_59) * fVar1);
			Local_133[3] = (((fVar6 * Local_133.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_133[2] = (((SYSTEM::TO_FLOAT(iVar4) * Local_133.f_59) * fVar1) * SYSTEM::TIMESTEP());
			Local_133[3] = ((((SYSTEM::TO_FLOAT(iVar3) * Local_133.f_59) * fVar1) * fVar22) * SYSTEM::TIMESTEP());
		}
		Local_133[3] = func_95(Local_133[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			Var15 = { CAM::GET_CAM_ROT(Local_133.f_61, 2) };
		}
		if (!func_94(CAM::GET_CAM_COORD(Local_133.f_61), 0f, 0f, 0f, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_31(), false))
			{
				fVar23 = ENTITY::GET_ENTITY_HEADING(func_31());
				fVar24 = (fVar23 - Var15.f_2);
				while (MISC::ABSF(fVar24) >= 180f && iVar25 < 30)
				{
					if (fVar24 < 0f)
					{
						fVar24 = (fVar24 + 360f);
					}
					else
					{
						fVar24 = (fVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (fVar24 >= fVar11)
				{
					if (fVar24 > 0f)
					{
						Var15.f_2 = (fVar23 - fVar11);
					}
					else
					{
						Var15.f_2 = (fVar23 + fVar11);
					}
				}
				if (fVar24 < fVar12)
				{
					if (fVar24 > 0f)
					{
						Var15.f_2 = (fVar23 - MISC::ABSF(fVar12));
					}
					else
					{
						Var15.f_2 = (fVar23 + MISC::ABSF(fVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_94(Local_133.f_50, 0f, 0f, 0f, 0))
			{
				Local_133.f_50 = { ENTITY::GET_ENTITY_ROTATION(func_31(), 2) };
			}
			else
			{
				Var28 = { ENTITY::GET_ENTITY_ROTATION(func_31(), 2) };
				fVar31 = ((MISC::ABSF(Local_133.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((Var28.f_0 - Local_133.f_50) * fVar31));
				fVar27 = (fVar27 + (Var28.f_2 - Local_133.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (Var28.f_0 < -80f || Var28.f_0 > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_31()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_133.f_50 = { Var28 };
			}
			if ((((Local_133[2] != 0f || Local_133[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !BitTest(Local_133.f_5, 2))
			{
				fVar32 = (((Local_133.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_133[2] = (Local_133[2] * fVar32);
				Local_133[3] = (Local_133[3] * fVar32);
				Local_133.f_53 = (Local_133.f_53 + Local_133[2]);
				Local_133.f_53.f_2 = (Local_133.f_53.f_2 - Local_133[3]);
				Local_133.f_53 = (Local_133.f_53 - fVar26);
				Local_133.f_53.f_2 = (Local_133.f_53.f_2 - fVar27);
				if (Local_133.f_53 < fVar8)
				{
					Local_133.f_53 = fVar8;
				}
				if (Local_133.f_53 > fVar7)
				{
					Local_133.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_133.f_53.f_2 > 180f)
					{
						Local_133.f_53.f_2 = (Local_133.f_53.f_2 - 360f);
					}
					while (Local_133.f_53.f_2 < -180f)
					{
						Local_133.f_53.f_2 = (Local_133.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_133.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_133.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_133.f_53.f_2 > (fVar13 / 2f))
					{
						Local_133.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!BitTest(Local_133.f_5, 2))
			{
				if (func_168())
				{
					Local_133.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_133.f_53 = { fVar7, 0f, 0f };
				}
				MISC::SET_BIT(&(Local_133.f_5), 2);
			}
			if (!func_93(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_400[0 /*3*/], Local_133.f_53, 0f, Local_133.f_53.f_2, 1056964608, 0))
			{
				Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_400[0 /*3*/] = { Local_133.f_53, 0f, Local_133.f_53.f_2 };
			}
			if (func_168())
			{
				CAM::ATTACH_CAM_TO_VEHICLE_BONE(Local_133.f_61, func_31(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_31(), "weapon_1d"), true, Local_133.f_53, 0f, Local_133.f_53.f_2, func_92(), true);
			}
			else
			{
				CAM::ATTACH_CAM_TO_VEHICLE_BONE(Local_133.f_61, func_31(), 0, true, Local_133.f_53, 0f, Local_133.f_53.f_2, func_92(), true);
			}
		}
		Local_133.f_59 = (Local_133.f_59 + (((SYSTEM::TO_FLOAT(iVar2) / 5f) * SYSTEM::TIMESTEP()) * fVar0));
		if (Local_133.f_59 > fVar9)
		{
			Local_133.f_59 = fVar9;
		}
		if (Local_133.f_59 < fVar10)
		{
			Local_133.f_59 = fVar10;
		}
		CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(1f);
		CAM::SET_CAM_FOV(Local_133.f_61, Local_133.f_59);
		fVar33 = ((Local_133.f_59 - 5f) / 42f);
		GRAPHICS::SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(fVar33);
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", false, -1))
		{
			if ((MISC::ABSI(iVar2) > 0 && Local_133.f_59 <= fVar9) && Local_133.f_59 >= fVar10)
			{
				iVar34 = Local_133.f_29;
				if (iVar34 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar34))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar34, "COP_HELI_CAM_ZOOM", 0, true);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Ctrl", SYSTEM::TO_FLOAT(iVar2));
					if (iVar2 < 0)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", -1f);
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_133.f_29 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(Local_133.f_29))
				{
					AUDIO::STOP_SOUND(Local_133.f_29);
				}
			}
			Var35 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/)) };
			if (SYSTEM::VMAG(Var35) > 0f)
			{
				iVar38 = Local_133.f_30;
				if (iVar38 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar38))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar38, "COP_HELI_CAM_TURN", 0, true);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "Ctrl", SYSTEM::VMAG(Var35));
				}
			}
			else
			{
				iVar39 = Local_133.f_30;
				if (iVar39 != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iVar39))
					{
						AUDIO::STOP_SOUND(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_92()//Position - 0x3C84
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_31()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_31()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_93(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x3CD8
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_94(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x3D53
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

float func_95(float fParam0, float fParam1, float fParam2)//Position - 0x3D9A
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_96(var uParam0, var uParam1)//Position - 0x3DCE
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_97(var uParam0, var uParam1)//Position - 0x3DFD
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_98(var uParam0, var uParam1)//Position - 0x3E34
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_99(float fParam0)//Position - 0x3E63
{
	*fParam0 = 0.0015f;
}

int func_100()//Position - 0x3E73
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (func_103(1))
	{
		return 1;
	}
	if (func_101(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x3EAC
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657921[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()//Position - 0x3EEB
{
	return BitTest(Global_2621446, 3);
}

bool func_103(bool bParam0)//Position - 0x3EF9
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

void func_104()//Position - 0x3F22
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_112())
	{
		func_111(1);
	}
	HUD::SET_BIGMAP_ACTIVE(false, true);
	if (func_168())
	{
		func_110();
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_107))
	{
		NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Local_133.f_107);
	}
	Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_109()) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1);
		HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(Var0.f_0, Var0.f_1, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_109())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (func_168())
	{
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
		}
	}
	HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
	if (CAM::DOES_CAM_EXIST(Local_133.f_61))
	{
		CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(Local_133.f_61, true);
	}
	HUD::SET_RADAR_ZOOM(0);
	if (func_168())
	{
		Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
		Var3 = { func_108(Var3) };
		if (!HUD::DOES_BLIP_EXIST(Local_133.f_109))
		{
			Local_133.f_108 = func_106(Var0, 0);
			HUD::SET_BLIP_SPRITE(Local_133.f_108, 425 /*RADAR_CENTRE_STROKE*/);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_133.f_108, false);
			HUD::SET_BLIP_DISPLAY(Local_133.f_108, 4);
			HUD::SET_BLIP_COLOUR(Local_133.f_108, func_105(2));
			HUD::SET_BLIP_SHOW_CONE(Local_133.f_108, true, 11);
			HUD::SET_BLIP_SCALE(Local_133.f_108, 0.54f);
			HUD::SET_BLIP_PRIORITY(Local_133.f_108, 13 + 1);
			Local_133.f_109 = func_106(Var0, 0);
			HUD::SET_BLIP_SPRITE(Local_133.f_109, 425 /*RADAR_CENTRE_STROKE*/);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_133.f_109, false);
			HUD::SET_BLIP_DISPLAY(Local_133.f_109, 4);
			HUD::SET_BLIP_COLOUR(Local_133.f_109, func_105(18));
			HUD::SET_BLIP_SHOW_CONE(Local_133.f_109, true, 11);
			HUD::SET_BLIP_SCALE(Local_133.f_109, 0.44f);
			HUD::SET_BLIP_PRIORITY(Local_133.f_109, 13 + 1);
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_133.f_109, true);
			HUD::SET_BLIP_ROTATION(Local_133.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1)));
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_133.f_108, true);
			HUD::SET_BLIP_ROTATION(Local_133.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1)));
		}
		else
		{
			HUD::SET_BLIP_COORDS(Local_133.f_109, Var0);
			HUD::SET_BLIP_ROTATION(Local_133.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1)));
			HUD::SET_BLIP_DISPLAY(Local_133.f_109, 5);
			HUD::SET_BLIP_COORDS(Local_133.f_108, Var0);
			HUD::SET_BLIP_ROTATION(Local_133.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1)));
			HUD::SET_BLIP_DISPLAY(Local_133.f_108, 5);
		}
	}
}

int func_105(int iParam0)//Position - 0x419A
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

int func_106(struct<3> Param0, bool bParam3)//Position - 0x4402
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_107(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)//Position - 0x442E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_108(struct<3> Param0)//Position - 0x4445
{
	struct<3> Var0;
	
	Var0.f_0 = SYSTEM::COS(Param0.f_0);
	Var0.f_1 = SYSTEM::COS(Param0.f_2);
	Var0.f_2 = SYSTEM::SIN(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -SYSTEM::SIN(Param0.f_2));
	return Var0;
}

bool func_109()//Position - 0x4488
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_110()//Position - 0x4496
{
	Global_1574846 = 1;
}

void func_111(int iParam0)//Position - 0x44A3
{
	Global_2698571 = iParam0;
}

bool func_112()//Position - 0x44B1
{
	return Global_2698571;
}

void func_113(int iParam0)//Position - 0x44BD
{
	if (Local_133.f_110 != iParam0)
	{
		Local_133.f_110 = iParam0;
	}
}

int func_114()//Position - 0x44D4
{
	struct<3> Var0;
	float fVar3;
	
	if (func_130() && !func_100())
	{
		if ((func_128(0) || func_103(1)) || func_127())
		{
		}
		else
		{
			if (func_168())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
				{
					return 1;
				}
			}
			else
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_133.f_107, false))
					{
						VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_133.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					return 1;
				}
				if (func_49(func_31()))
				{
					if (CAM::DOES_CAM_EXIST(Local_133.f_61))
					{
						Var0 = { CAM::GET_CAM_COORD(Local_133.f_61) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
						{
							if (SYSTEM::VDIST(Var0, Var0.f_0, Var0.f_1, fVar3) < 2f)
							{
								return 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_WATER(func_31()))
					{
						return 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_133.f_107, false))
					{
						VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_133.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_125())
			{
				return 1;
			}
		}
	}
	if (func_123(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (func_49(func_115()))
		{
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_115(), -136.16142f, 4617.176f, 124.513405f, -490.30576f, 4924.749f, 159.06767f, 19.5f, false, true, 0))
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_115()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_115()//Position - 0x4683
{
	if (Global_1845102 != func_30())
	{
		if (!func_116(Global_1845102))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1663005))
			{
				return Global_1663005;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1961146[Global_1845102]))
			{
				return Global_1961146[Global_1845102];
			}
		}
	}
	return -1;
}

int func_116(int iParam0)//Position - 0x46D3
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

int func_117()//Position - 0x46F8
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1845102 != func_30())
		{
			if (func_116(Global_1845102) || func_122(Global_1845102))
			{
				return 1;
			}
			if (func_121(Global_1845102))
			{
				if (func_28(func_120(Global_1845102)) == 11)
				{
					if (func_28(func_119(Global_1845102)) == 11)
					{
						if (func_118(Global_1845102) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x4772
{
	return MISC::GET_BITS_IN_RANGE(Global_2657921[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_119(int iParam0)//Position - 0x478F
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_18;
	}
	return -1;
}

int func_120(int iParam0)//Position - 0x47C0
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_121(int iParam0)//Position - 0x47F1
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 4);
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x4822
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_1845263[iParam0 /*877*/].f_267.f_368, 14);
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x4849
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		if (func_124(iParam0) && !func_121(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x4882
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_125()//Position - 0x48B3
{
	int iVar0;
	int iVar1;
	
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_31()))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_31(), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (func_29(iVar1, 1, 1))
					{
						if (func_126(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x4911
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1886967[iVar0 /*609*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_127()//Position - 0x4936
{
	return Global_23572.f_135;
}

int func_128(bool bParam0)//Position - 0x4943
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_129(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23572.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x4A2E
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

bool func_130()//Position - 0x4A8B
{
	return BitTest(Global_1956010, 1);
}

void func_131()//Position - 0x4A99
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_138())
	{
		if (!CAM::DOES_CAM_EXIST(Local_133.f_61))
		{
			Local_133.f_61 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_FOV(Local_133.f_61, Local_133.f_59);
			Var0 = { ENTITY::GET_ENTITY_ROTATION(func_31(), 2) };
			CAM::SET_CAM_ROT(Local_133.f_61, 0f, 0f, Var0.f_2, 2);
			CAM::ATTACH_CAM_TO_ENTITY(Local_133.f_61, func_31(), func_137(), true);
			func_134(1);
			func_133(1);
			func_91();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (BitTest(Local_133.f_5, 2))
		{
			func_104();
			func_3();
			CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			if (Local_133.f_49 == -1)
			{
				Local_133.f_49 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", true);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_133.f_107 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_133.f_107, true) };
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), Local_133.f_107, 0, 0, Var3, 4, 0f, -1f, -1f, -1, -1, -1f, 0);
				VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_133.f_107, 0f);
			}
			func_132("HUNTGUN_2b" /* GXT: You are using the helicopter's mounted surveillance camera.~n~Use ~INPUT_SNIPER_ZOOM~ to zoom in/out.~n~Press ~INPUT_CONTEXT~ to go back. */, -1);
			func_113(2);
		}
	}
	else
	{
		func_113(3);
	}
}

void func_132(char* sParam0, int iParam1)//Position - 0x4BBF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_133(bool bParam0)//Position - 0x4BD6
{
	if (bParam0)
	{
		if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 25))
		{
			MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 25);
		}
	}
	else if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 25))
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 25);
	}
}

void func_134(bool bParam0)//Position - 0x4C43
{
	if (bParam0)
	{
		if (!func_130())
		{
			MISC::SET_BIT(&Global_1956010, 1);
		}
	}
	else
	{
		if (func_130())
		{
			MISC::CLEAR_BIT(&Global_1956010, 1);
		}
		func_135(0);
	}
}

void func_135(bool bParam0)//Position - 0x4C79
{
	if (bParam0)
	{
		if (!func_136())
		{
			MISC::SET_BIT(&Global_1956010, 2);
		}
	}
	else if (func_136())
	{
		MISC::CLEAR_BIT(&Global_1956010, 2);
	}
}

bool func_136()//Position - 0x4CAA
{
	return BitTest(Global_1956010, 2);
}

Vector3 func_137()//Position - 0x4CB8
{
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_31()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_31()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_138()//Position - 0x4D08
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_31()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_31()) && ENTITY::IS_ENTITY_DEAD(func_31(), false))
	{
		return 0;
	}
	return 1;
}

void func_139()//Position - 0x4D3E
{
	struct<3> Var0;
	
	if (func_138())
	{
		if (func_151())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_140(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			if (!func_59(&(Local_133.f_113)))
			{
				if (func_49(func_31()))
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(func_31(), true), 100f, 1))
					{
						func_58(&(Local_133.f_113), 0, 0);
					}
				}
			}
			else if (func_57(&(Local_133.f_113), 2000, 0))
			{
				STREAMING::SET_FOCUS_ENTITY(func_31());
			}
		}
		if (func_59(&(Local_133.f_113)))
		{
			if (func_57(&(Local_133.f_113), 5000, 0))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!CAM::DOES_CAM_EXIST(Local_133.f_61))
					{
						Local_133.f_61 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
						CAM::SET_CAM_FOV(Local_133.f_61, Local_133.f_59);
						Var0 = { ENTITY::GET_ENTITY_ROTATION(func_31(), 2) };
						CAM::SET_CAM_ROT(Local_133.f_61, 0f, 0f, Var0.f_2, 2);
						CAM::ATTACH_CAM_TO_ENTITY(Local_133.f_61, func_31(), func_137(), true);
						func_134(1);
						func_133(1);
						func_91();
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (BitTest(Local_133.f_5, 2))
					{
						func_104();
						func_3();
						STREAMING::NEW_LOAD_SCENE_STOP();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						if (Local_133.f_49 == -1)
						{
							Local_133.f_49 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", true);
						}
						func_113(2);
					}
				}
			}
		}
	}
	else
	{
		func_113(3);
	}
}

void func_140(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4EA6
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_150())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_148())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_10(PLAYER::PLAYER_ID(), 0) && !func_102()) && !func_101(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657921[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_145(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_144(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_143();
					func_142();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657921[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697318)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697318 = 0;
				}
				if (Global_2635562.f_2981)
				{
					Global_2635562.f_2981 = 0;
				}
			}
			else
			{
				if (!func_144(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_141(Global_4718592.f_183007))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575052)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_141(int iParam0)//Position - 0x5358
{
	return iParam0 == 17;
}

void func_142()//Position - 0x5365
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_143()//Position - 0x53B2
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_144(int iParam0)//Position - 0x53F0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_145(bool bParam0, int iParam1, int iParam2)//Position - 0x5421
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_147();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_10(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_146(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_146(int iParam0, bool bParam1)//Position - 0x54F1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_147()//Position - 0x550D
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_148()//Position - 0x5565
{
	if (func_149() == 0)
	{
		return 1;
	}
	return 0;
}

int func_149()//Position - 0x557A
{
	return Global_1574632.f_18;
}

int func_150()//Position - 0x5588
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_151()//Position - 0x55B9
{
	if (Global_1581997 != -1 || Global_1582003 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_152())
		{
			return 0;
		}
	}
	return 0;
}

int func_152()//Position - 0x5642
{
	int iVar0;
	
	if (func_167(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_166(PLAYER::PLAYER_ID());
		if (func_29(iVar0, 0, 1))
		{
			if ((((((func_124(iVar0) && func_28(func_120(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_165(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return 1;
			}
			if (!func_164(Global_4718592.f_126144))
			{
				if (func_167(iVar0))
				{
					if (func_163(iVar0))
					{
						return 1;
					}
					else if (func_124(PLAYER::PLAYER_ID()) || func_162())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_161(8))
	{
		if (Global_1574980)
		{
			return 1;
		}
	}
	else if (Global_1956059)
	{
		return 1;
	}
	if (func_160(PLAYER::PLAYER_ID()) && BitTest(Global_1575005, 12))
	{
		return 1;
	}
	if (func_159(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_158(PLAYER::PLAYER_ID());
		if (func_29(iVar0, 0, 1))
		{
			if ((((((func_124(iVar0) && func_28(func_120(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_157(iVar0))
			{
				return 1;
			}
			else if (func_156(iVar0))
			{
				return 1;
			}
			else if (func_124(PLAYER::PLAYER_ID()) || func_162())
			{
				return 1;
			}
		}
	}
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_155(PLAYER::PLAYER_ID());
		if (func_29(iVar0, 0, 1))
		{
			if ((((Global_1845102 != func_30() && func_124(Global_1845102)) && func_28(func_120(Global_1845102)) == 11) && func_68(Global_1845102, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1845102), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_116(iVar0))
			{
				return 1;
			}
			else if (func_124(PLAYER::PLAYER_ID()) || func_162())
			{
				return 1;
			}
		}
	}
	if (func_154(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_30())
		{
			iVar0 = Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10;
			if (func_29(iVar0, 0, 1))
			{
				if (func_124(PLAYER::PLAYER_ID()) || func_162())
				{
					return 1;
				}
			}
		}
	}
	if (func_159(PLAYER::PLAYER_ID()) || func_160(PLAYER::PLAYER_ID()))
	{
		switch (Global_1582003)
		{
			case 1:
				if (Global_262145.f_23302 /* Tunable: 1200779746 */)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_23303 /* Tunable: 948556753 */)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_23304 /* Tunable: 1781774116 */)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1582001 == 1)
	{
		return 1;
	}
	if (func_153(3))
	{
		if (Global_1835504 == 186)
		{
			if (Global_1836702 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_153(int iParam0)//Position - 0x59BC
{
	return Global_262145.f_4868[iParam0] == Global_4718592.f_126144;
}

int func_154(int iParam0)//Position - 0x59DA
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_30())
			{
				return func_28(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x5A3A
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_156(int iParam0)//Position - 0x5A5E
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x5A84
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x5AA9
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_159(int iParam0)//Position - 0x5ACD
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_30())
			{
				return func_28(Global_2657921[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x5B2D
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_28(Global_2657921[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

bool func_161(int iParam0)//Position - 0x5B74
{
	return Global_4718592.f_183008 >= iParam0;
}

var func_162()//Position - 0x5B89
{
	return BitTest(Global_1942781, 6);
}

int func_163(int iParam0)//Position - 0x5B97
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

bool func_164(int iParam0)//Position - 0x5BBA
{
	return Global_262145.f_4859[4] == iParam0;
}

int func_165(int iParam0)//Position - 0x5BCF
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x5BFD
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_167(int iParam0)//Position - 0x5C21
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_30())
			{
				return func_28(Global_2657921[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

bool func_168()//Position - 0x5C80
{
	return BitTest(Local_133.f_5, 7);
}

void func_169()//Position - 0x5C8E
{
	if (!func_100())
	{
		if (func_29(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_175())
			{
				if (func_168())
				{
					if ((func_171() && !func_151()) && func_170("MP_HTRUCK_T_2" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to use the Multi-Lock Missile Battery.~n~Press ~INPUT_CONTEXT~ to stand up. */))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
						{
							func_135(1);
							func_113(1);
							HUD::CLEAR_HELP(true);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_170("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */))
					{
						func_132("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */, -1);
					}
					else if (!func_170("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */))
					{
						HUD::CLEAR_HELP(true);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						func_135(1);
						func_113(1);
						HUD::CLEAR_HELP(true);
					}
				}
				else if (func_170("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_170("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

bool func_170(char* sParam0)//Position - 0x5D99
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_171()//Position - 0x5DAC
{
	if ((func_27(PLAYER::PLAYER_ID(), 0) && Global_1581997 == 2) && func_172())
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0x5DD9
{
	if (Global_1581997 != -1 || Global_1582003 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_173(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_152())
		{
			return 0;
		}
	}
	return 1;
}

int func_173(int iParam0, int iParam1)//Position - 0x5EFE
{
	if (func_174(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)//Position - 0x5F31
{
	if (func_49(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175()//Position - 0x5F51
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_262145.f_24891 /* Tunable: -236967184 */)
		{
			return 1;
		}
	}
	if (func_180())
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_178())
	{
		return 1;
	}
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (func_116(Global_1845102))
		{
			return 1;
		}
	}
	if (func_126(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_45(0))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (func_176())
	{
		return 1;
	}
	if (!func_138())
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_1582001)
	{
		return 1;
	}
	if (func_27(PLAYER::PLAYER_ID(), 0))
	{
		if (func_49(func_115()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_115(), -136.16142f, 4617.176f, 124.513405f, -490.30576f, 4924.749f, 159.06767f, 19.5f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_115()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_125())
	{
		return 1;
	}
	if (!func_168())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_49(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar4, false, false))
				{
					if (SYSTEM::VDIST(Var1, Var1.f_0, Var1.f_1, fVar4) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_176()//Position - 0x60D6
{
	return Global_98681;
}

int func_177()//Position - 0x60E2
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_178()//Position - 0x60FF
{
	return Global_1942781.f_544;
}

int func_179()//Position - 0x610E
{
	if (Global_2672741.f_951.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_180()//Position - 0x6128
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

bool func_181(int iParam0)//Position - 0x613D
{
	return Local_133.f_110 == iParam0;
}

void func_182()//Position - 0x614C
{
	struct<3> Var0;
	
	if (func_181(1) || func_181(2))
	{
		if (func_49(func_31()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(func_31(), true) };
			PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 100f, 200f);
			INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
			if ((MISC::GET_FRAME_COUNT() % 120) == 0)
			{
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Var0, 300f, 30);
			}
		}
	}
	if (func_181(2))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			func_140(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_183();
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 198 /*INPUT_FRONTEND_RIGHT_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/, true);
		}
	}
}

void func_183()//Position - 0x62E1
{
	func_184();
}

void func_184()//Position - 0x62ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 365)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		iVar0++;
	}
}

int func_185()//Position - 0x6311
{
	if (!func_148())
	{
		return 1;
	}
	if (func_187())
	{
		return 1;
	}
	if (!func_168())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!func_186(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x6361
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, true))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_187()//Position - 0x63B5
{
	return BitTest(Global_1956010, 0);
}

int func_188()//Position - 0x63C3
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_194())
	{
		return 1;
	}
	if (func_193(159))
	{
		if (!func_192())
		{
			return 1;
		}
	}
	if (func_193(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_189() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_189()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_189()//Position - 0x6447
{
	switch (func_191())
	{
		case 0:
			return func_190();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_190()//Position - 0x647A
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_191()//Position - 0x649E
{
	return Global_32828;
}

bool func_192()//Position - 0x64A9
{
	return Global_2684312.f_698;
}

int func_193(int iParam0)//Position - 0x64B8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_194()//Position - 0x64CF
{
	return Global_2695951;
}

bool func_195()//Position - 0x64DB
{
	return Global_2684312.f_693;
}

void func_196()//Position - 0x64EA
{
	SYSTEM::WAIT(0);
}

void func_197(bool bParam0)//Position - 0x64F7
{
	int iVar0;
	
	if (!func_168())
	{
		if (func_170("HUNTGUN_1b" /* GXT: You are the co-pilot of a helicopter. Press ~INPUT_CONTEXT~ to use the mounted surveillance camera. */))
		{
			HUD::CLEAR_HELP(true);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (func_49(func_31()))
	{
		STREAMING::CLEAR_FOCUS();
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("droneHUD");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_133.f_62));
	func_205();
	func_204();
	if (func_112())
	{
		func_111(0);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	if (func_148() && !func_124(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_140(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	func_52(&(Local_133.f_113));
	func_52(&(Local_133.f_115));
	func_52(&(Local_133.f_117));
	func_52(&(Local_133.f_119));
	func_134(0);
	func_133(0);
	Local_133.f_32 = -1;
	Local_133.f_31 = 0;
	Local_133.f_5 = 0;
	Local_133.f_24 = 0;
	Local_133.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_133.f_17[iVar0] = 0;
		func_52(&(Local_133.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_89();
	if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399, 0))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_399), 0);
	}
	Local_133.f_48 = 0;
	func_203();
	func_201(1, -1);
	if (HUD::DOES_BLIP_EXIST(Local_133.f_108))
	{
		HUD::REMOVE_BLIP(&(Local_133.f_108));
	}
	if (HUD::DOES_BLIP_EXIST(Local_133.f_109))
	{
		HUD::REMOVE_BLIP(&(Local_133.f_109));
	}
	if (!bParam0)
	{
		func_200(0);
		func_199();
	}
	else
	{
		func_198(0);
	}
}

void func_198(bool bParam0)//Position - 0x6672
{
	int iVar0;
	
	Local_133.f_33 = 100;
	Local_133.f_59 = 50f;
	Local_133.f_62 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(func_39());
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", false, -1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", false);
	Local_133.f_29 = AUDIO::GET_SOUND_ID();
	Local_133.f_30 = AUDIO::GET_SOUND_ID();
	func_113(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_133.f_34[iVar0] = -1;
		Local_133.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_199()//Position - 0x66F0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_200(bool bParam0)//Position - 0x66FC
{
	if (bParam0)
	{
		if (!func_187())
		{
			MISC::SET_BIT(&Global_1956010, 0);
		}
	}
	else if (func_187())
	{
		MISC::CLEAR_BIT(&Global_1956010, 0);
	}
}

void func_201(bool bParam0, int iParam1)//Position - 0x672D
{
	int iVar0;
	
	if (!func_19(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23711.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23711.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23711.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23711.f_6231[iVar0] = 0;
	}
	if (Global_23711.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23711.f_6217[iVar0] = 0;
	}
	if (Global_23711.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23711.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_202(&(Global_23711.f_6263[iVar0 /*10*/]));
		Global_23711.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23711.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_202(int* iParam0)//Position - 0x67F0
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

void func_203()//Position - 0x681C
{
	if (Local_133.f_30 != -1)
	{
		AUDIO::STOP_SOUND(Local_133.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_133.f_30);
		Local_133.f_30 = -1;
	}
	if (Local_133.f_29 != -1)
	{
		AUDIO::STOP_SOUND(Local_133.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_133.f_29);
		Local_133.f_29 = -1;
	}
	if (Local_133.f_49 != -1)
	{
		AUDIO::STOP_SOUND(Local_133.f_49);
		AUDIO::RELEASE_SOUND_ID(Local_133.f_49);
		Local_133.f_49 = -1;
	}
	AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

void func_204()//Position - 0x6887
{
	if (Local_133.f_6 == -1)
	{
		AUDIO::STOP_SOUND(Local_133.f_6);
		AUDIO::RELEASE_SOUND_ID(Local_133.f_6);
		Local_133.f_6 = -1;
	}
}

void func_205()//Position - 0x68AC
{
	if (CAM::DOES_CAM_EXIST(Local_133.f_61))
	{
		CAM::DESTROY_CAM(Local_133.f_61, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_206(struct<19> Param0, var uParam19, var uParam20)//Position - 0x68D8
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_16);
	func_209(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_132, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_99, 33, 0);
	if (!func_208())
	{
		func_197(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_197(0);
	}
	if (Param0.f_18 == 1)
	{
		func_207(1);
	}
	else
	{
		func_207(0);
	}
	func_198(1);
}

void func_207(bool bParam0)//Position - 0x693A
{
	if (bParam0)
	{
		if (!BitTest(Local_133.f_5, 7))
		{
			MISC::SET_BIT(&(Local_133.f_5), 7);
		}
	}
	else if (BitTest(Local_133.f_5, 7))
	{
		MISC::CLEAR_BIT(&(Local_133.f_5), 7);
	}
}

int func_208()//Position - 0x696F
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_195())
		{
			return 0;
		}
		if (func_193(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_209(int iParam0, int iParam1, bool bParam2)//Position - 0x69C8
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_199();
			}
			else
			{
				return 0;
			}
		}
		if (!func_210(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_195())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_193(157))
				{
					if (!bParam2)
					{
						func_199();
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
					func_199();
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
				func_199();
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
			func_199();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_210(bool bParam0)//Position - 0x6ADE
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

