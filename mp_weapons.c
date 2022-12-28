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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 4;
	iLocal_65 = 12;
	if (func_159() == 2)
	{
		while (true)
		{
			SYSTEM::WAIT(0);
		}
	}
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574600 = 1;
	iVar0 = 0;
	Global_1652263.f_281 = 1;
	Global_1651965.f_1 = 0;
	Global_1651965.f_3 = 0;
	Global_1651965.f_5 = 0;
	func_157(&Global_1652263);
	func_156(&Global_1652263);
	func_155(&Global_1652263);
	func_151();
	func_150(0, &Global_1652263);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
	HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
	func_149();
	iVar5 = 1;
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							iVar6 = 1;
						}
					}
				}
				if (func_148(201))
				{
					if (iVar5 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						Global_1651965.f_1 = 0;
						Global_1651965.f_3 = 0;
						iVar5 = 1;
						func_150(0, &Global_1652263);
						func_156(&Global_1652263);
						func_155(&Global_1652263);
						func_147(&Global_1652263, &Global_1651965);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				}
				if (iVar5 == 0)
				{
					if (func_148(189) || func_148(190))
					{
						iVar0 = 1;
					}
				}
				if (func_148(202))
				{
					func_145();
					if (iVar5 == 1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
						HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
						func_156(&Global_1652263);
						func_155(&Global_1652263);
						func_150(-1, &Global_1652263);
						iVar5 = 0;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar0 = 1;
						HUD::RELEASE_CONTROL_OF_FRONTEND();
					}
				}
				if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
				{
					HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&iVar2, &uVar3);
				}
				if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
				{
					HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1651965.f_1 = (iVar4 % 3);
						Global_1651965.f_3 = (iVar4 / 3);
						func_150(iVar4, &Global_1652263);
						func_155(&Global_1652263);
					}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsCommon", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang0", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPWeaponsGang1", false);
				func_9(&Global_1652263, &Global_1651965);
				if (iVar5 == 1)
				{
					func_1(&Global_1652263, &Global_1651965, &uLocal_135);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(0);
	Global_1574600 = 0;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)//Position - 0x30C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || func_6(187, &(Global_1653913.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || func_6(188, &(Global_1653913.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || func_6(189, &(Global_1653913.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_285), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)) || func_6(190, &(Global_1653913.f_1060), 1)) && iVar0)
	{
		MISC::SET_BIT(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (BitTest(uParam0->f_285, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 1) % 3);
					uParam1->f_3 = ((iLocal_65 - 1) / 3);
				}
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 1)
			{
				func_157(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0;
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
}

void func_2(var uParam0)//Position - 0x686
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x694
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_65 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x793
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

void func_5(var uParam0)//Position - 0x7D8
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)//Position - 0x7E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)//Position - 0x948
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

bool func_8(var uParam0)//Position - 0x9A6
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)//Position - 0x9B2
{
	if ((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsCommon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang0")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPWeaponsGang1"))
	{
		if (func_144(8, -1) == 0)
		{
			*uParam1 = func_143();
		}
		func_149();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_PISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_COMBATPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_APPISTOL"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MICROSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CARBINERIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ADVANCEDRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MG"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_COMBATMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSMG"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_PUMPSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_ASSAULTSHOTGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SNIPERRIFLE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_HEAVYSNIPER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADELAUNCHER"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MINIGUN"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_RPG"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_107(joaat("WEAPON_KNIFE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_NIGHTSTICK"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_BAT"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_CROWBAR"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GOLFCLUB"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_MOLOTOV"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_GRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_SMOKEGRENADE"), uParam0, *uParam1, 0);
					func_107(joaat("WEAPON_STICKYBOMB"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_96(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_95(uParam0));
	}
}

void func_10(var uParam0, int iParam1)//Position - 0xBF1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_94(uParam0->f_85[iVar0]))
					{
						if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_93(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_88(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_85(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_83(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_67(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_63(iVar4, uParam0->f_85[iVar0], 0);
						func_57(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(func_56(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1" /* GXT: Default Clip */))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_63(iVar4, uParam0->f_85[iVar0], 1);
							func_57(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(func_56(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG" /* GXT: Scope */))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_63(iVar4, uParam0->f_85[iVar0], 1);
							func_57(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("WEAPON_BULLPUPSHOTGUN") || uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL50")) || uParam0->f_85[iVar0] == joaat("WEAPON_SNSPISTOL"))
					{
						func_67(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_63(iVar4, uParam0->f_85[iVar0], 1);
						func_57(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_51(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_92(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_47(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_45(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_47(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_45(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_94(uParam0->f_85[iVar0]))
					{
						if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_93(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_88(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("WEAPON_PISTOL") && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))) || func_43(uParam0->f_85[iVar0])) || func_27(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_94(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || MISC::ARE_STRINGS_EQUAL(func_24(uParam0->f_85[iVar0], 0), func_24(0, 0)))
			{
				iVar8 = 0;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_85[iVar0]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*uParam0 = 1;
	}
	func_21(uParam0, func_23(uParam0));
	func_14(uParam0, func_20(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)//Position - 0x1067
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_277);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)//Position - 0x10B9
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)//Position - 0x10C7
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)//Position - 0x10D4
{
	struct<2> Var0;
	int iVar4;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_19(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
			iVar4 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar4 < 0)
			{
				iVar4 = 0;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_18(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_18(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_95[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_105[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_135[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_115[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_145[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_155[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_165[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_185[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_195[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_205[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_225[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_125[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_175[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_235[uParam0->f_277]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_16(uParam0->f_85[uParam0->f_277]));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18(&Var0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_ACCURACY" /* GXT: Accuracy */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_RANGE" /* GXT: Range */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_CLIPSIZE" /* GXT: Clip Size */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_KD_RATIO" /* GXT: K/D Ratio */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_HEADSHOTS" /* GXT: Headshots */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_TITLE");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_18("PM_MY_ACCURACY" /* GXT: My Accuracy */);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)//Position - 0x13A0
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_PROXMINE"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_PIPEBOMB"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_CANDYCANE"):
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x1441
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 0;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 0;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 9;
			break;
		
		case joaat("WEAPON_SMG"):
			return 11;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 24;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 21;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 19;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 20;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 17;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 33;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 13;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 15;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_17(3741, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 37;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (func_17(3741, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("WEAPON_MG"):
			return 50;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 70;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 80;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 90;
			break;
		
		case joaat("WEAPON_RPG"):
			return 100;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 120;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 0;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 0;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 0;
			break;
		
		case joaat("WEAPON_BAT"):
			return 0;
			break;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)//Position - 0x1603
{
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_18(char* sParam0)//Position - 0x161F
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_19(var uParam0)//Position - 0x1631
{
	uParam0->f_284 = 0;
}

int func_20(var uParam0)//Position - 0x163F
{
	return uParam0->f_284;
}

void func_21(var uParam0, int iParam1)//Position - 0x164C
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_22(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_275);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_22(var uParam0)//Position - 0x169E
{
	uParam0->f_282 = 0;
}

int func_23(var uParam0)//Position - 0x16AC
{
	return uParam0->f_282;
}

char* func_24(int iParam0, bool bParam1)//Position - 0x16B9
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID" /* GXT: Invalid */;
			}
			break;
		
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED" /* GXT: UNARMED */;
			}
			else
			{
				return "WT_UNARMED" /* GXT: Unarmed */;
			}
			break;
		
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT" /* GXT: COMBAT PISTOL */;
			}
			else
			{
				return "WT_PIST_CBT" /* GXT: Combat Pistol */;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP" /* GXT: AP PISTOL */;
			}
			else
			{
				return "WT_PIST_AP" /* GXT: AP Pistol */;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG" /* GXT: SMG */;
			}
			else
			{
				return "WT_SMG" /* GXT: SMG */;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR" /* GXT: MICRO SMG */;
			}
			else
			{
				return "WT_SMG_MCR" /* GXT: Micro SMG */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL" /* GXT: ASSAULT RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ASL" /* GXT: Assault Rifle */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN" /* GXT: CARBINE RIFLE */;
			}
			else
			{
				return "WT_RIFLE_CBN" /* GXT: Carbine Rifle */;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV" /* GXT: ADVANCED RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ADV" /* GXT: Advanced Rifle */;
			}
			break;
		
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG" /* GXT: MG */;
			}
			else
			{
				return "WT_MG" /* GXT: MG */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT" /* GXT: COMBAT MG */;
			}
			else
			{
				return "WT_MG_CBT" /* GXT: Combat MG */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP" /* GXT: PUMP SHOTGUN */;
			}
			else
			{
				return "WT_SG_PMP" /* GXT: Pump Shotgun */;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF" /* GXT: SAWED-OFF SHOTGUN */;
			}
			else
			{
				return "WT_SG_SOF" /* GXT: Sawed-Off Shotgun */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL" /* GXT: ASSAULT SHOTGUN */;
			}
			else
			{
				return "WT_SG_ASL" /* GXT: Assault Shotgun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY" /* GXT: HEAVY SNIPER */;
			}
			else
			{
				return "WT_SNIP_HVY" /* GXT: Heavy Sniper */;
			}
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT" /* GXT: REMOTE SNIPER */;
			}
			else
			{
				return "WT_SNIP_RMT" /* GXT: Remote Sniper */;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF" /* GXT: SNIPER RIFLE */;
			}
			else
			{
				return "WT_SNIP_RIF" /* GXT: Sniper Rifle */;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL" /* GXT: GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_GL" /* GXT: Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG" /* GXT: RPG */;
			}
			else
			{
				return "WT_RPG" /* GXT: RPG */;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN" /* GXT: MINIGUN */;
			}
			else
			{
				return "WT_MINIGUN" /* GXT: Minigun */;
			}
			break;
		
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE" /* GXT: GRENADE */;
			}
			else
			{
				return "WT_GNADE" /* GXT: Grenade */;
			}
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK" /* GXT: TEAR GAS */;
			}
			else
			{
				return "WT_GNADE_SMK" /* GXT: Tear Gas */;
			}
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK" /* GXT: STICKY BOMB */;
			}
			else
			{
				return "WT_GNADE_STK" /* GXT: Sticky Bomb */;
			}
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV" /* GXT: MOLOTOV */;
			}
			else
			{
				return "WT_MOLOTOV" /* GXT: Molotov */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STUN" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL" /* GXT: JERRY CAN */;
			}
			else
			{
				return "WT_PETROL" /* GXT: Jerry Can */;
			}
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK" /* GXT: TANK CANNON */;
			}
			else
			{
				return "WT_V_TANK" /* GXT: Tank Cannon */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT" /* GXT: ROCKETS */;
			}
			else
			{
				return "WT_V_SPACERKT" /* GXT: Rockets */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_V_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT" /* GXT: Object */;
			}
			break;
		
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA" /* GXT: PARACHUTE */;
			}
			else
			{
				return "WT_PARA" /* GXT: Parachute */;
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_RPG" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK" /* GXT: TANK */;
			}
			else
			{
				return "WT_A_TANK" /* GXT: Tank */;
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_SPACERKT" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_ENMYLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE" /* GXT: KNIFE */;
			}
			else
			{
				return "WT_KNIFE" /* GXT: Knife */;
			}
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK" /* GXT: NIGHTSTICK */;
			}
			else
			{
				return "WT_NGTSTK" /* GXT: Nightstick */;
			}
			break;
		
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER" /* GXT: HAMMER */;
			}
			else
			{
				return "WT_HAMMER" /* GXT: Hammer */;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT" /* GXT: BASEBALL BAT */;
			}
			else
			{
				return "WT_BAT" /* GXT: Baseball Bat */;
			}
			break;
		
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR" /* GXT: CROWBAR */;
			}
			else
			{
				return "WT_CROWBAR" /* GXT: Crowbar */;
			}
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB" /* GXT: GOLF CLUB */;
			}
			else
			{
				return "WT_GOLFCLUB" /* GXT: Golf Club */;
			}
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL" /* GXT: ASSAULT SMG */;
			}
			else
			{
				return "WT_SMG_ASL" /* GXT: Assault SMG */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP" /* GXT: BULLPUP SHOTGUN */;
			}
			else
			{
				return "WT_SG_BLP" /* GXT: Bullpup Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50" /* GXT: PISTOL .50 */;
			}
			else
			{
				return "WT_PIST_50" /* GXT: Pistol .50 */;
			}
			break;
		
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE" /* GXT: BOTTLE */;
			}
			else
			{
				return "WT_BOTTLE" /* GXT: Bottle */;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG" /* GXT: GUSENBERG SWEEPER */;
			}
			else
			{
				return "WT_GUSENBERG" /* GXT: Gusenberg Sweeper */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL" /* GXT: SNS PISTOL */;
			}
			else
			{
				return "WT_SNSPISTOL" /* GXT: SNS Pistol */;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL" /* GXT: VINTAGE PISTOL */;
			}
			else
			{
				return "WT_VPISTOL" /* GXT: Vintage Pistol */;
			}
			break;
		
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER" /* GXT: ANTIQUE CAVALRY DAGGER */;
			}
			else
			{
				return "WT_DAGGER" /* GXT: Antique Cavalry Dagger */;
			}
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN" /* GXT: FLARE GUN */;
			}
			else
			{
				return "WT_FLAREGUN" /* GXT: Flare Gun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL" /* GXT: HEAVY PISTOL */;
			}
			else
			{
				return "WT_HEAVYPSTL" /* GXT: Heavy Pistol */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN" /* GXT: SPECIAL CARBINE */;
			}
			else
			{
				return "WT_RIFLE_SCBN" /* GXT: Special Carbine */;
			}
			break;
		
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET" /* GXT: MUSKET */;
			}
			else
			{
				return "WT_MUSKET" /* GXT: Musket */;
			}
			break;
		
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR" /* GXT: FIREWORK LAUNCHER */;
			}
			else
			{
				return "WT_FWRKLNCHR" /* GXT: Firework Launcher */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE" /* GXT: MARKSMAN RIFLE */;
			}
			else
			{
				return "WT_MKRIFLE" /* GXT: Marksman Rifle */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT" /* GXT: HEAVY SHOTGUN */;
			}
			else
			{
				return "WT_HVYSHOT" /* GXT: Heavy Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE" /* GXT: PROXIMITY MINE */;
			}
			else
			{
				return "WT_PRXMINE" /* GXT: Proximity Mine */;
			}
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH" /* GXT: HOMING LAUNCHER */;
			}
			else
			{
				return "WT_HOMLNCH" /* GXT: Homing Launcher */;
			}
			break;
		
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET" /* GXT: HATCHET */;
			}
			else
			{
				return "WT_HATCHET" /* GXT: Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUN" /* GXT: Railgun */;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW" /* GXT: COMBAT PDW */;
			}
			else
			{
				return "WT_COMBATPDW" /* GXT: Combat PDW */;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE" /* GXT: KNUCKLE DUSTER */;
			}
			else
			{
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL" /* GXT: MARKSMAN PISTOL */;
			}
			else
			{
				return "WT_MKPISTOL" /* GXT: Marksman Pistol */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE" /* GXT: BULLPUP RIFLE */;
			}
			else
			{
				return "WT_BULLRIFLE" /* GXT: Bullpup Rifle */;
			}
			break;
		
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE" /* GXT: MACHETE */;
			}
			else
			{
				return "WT_MACHETE" /* GXT: Machete */;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST" /* GXT: MACHINE PISTOL */;
			}
			else
			{
				return "WT_MCHPIST" /* GXT: Machine Pistol */;
			}
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT" /* GXT: FLASHLIGHT */;
			}
			else
			{
				return "WT_FLASHLIGHT" /* GXT: Flashlight */;
			}
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN" /* GXT: DOUBLE BARREL SHOTGUN */;
			}
			else
			{
				return "WT_DBSHGN" /* GXT: Double Barrel Shotgun */;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE" /* GXT: COMPACT RIFLE */;
			}
			else
			{
				return "WT_CMPRIFLE" /* GXT: Compact Rifle */;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE" /* GXT: SWITCHBLADE */;
			}
			else
			{
				return "WT_SWBLADE" /* GXT: Switchblade */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER" /* GXT: HEAVY REVOLVER */;
			}
			else
			{
				return "WT_REVOLVER" /* GXT: Heavy Revolver */;
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN" /* GXT: SWEEPER SHOTGUN */;
			}
			else
			{
				return "WT_AUTOSHGN" /* GXT: Sweeper Shotgun */;
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE" /* GXT: BATTLE AXE */;
			}
			else
			{
				return "WT_BATTLEAXE" /* GXT: Battle Axe */;
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL" /* GXT: COMPACT GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_CMPGL" /* GXT: Compact Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG" /* GXT: MINI SMG */;
			}
			else
			{
				return "WT_MINISMG" /* GXT: Mini SMG */;
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB" /* GXT: PIPE BOMB */;
			}
			else
			{
				return "WT_PIPEBOMB" /* GXT: Pipe Bomb */;
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE" /* GXT: POOL CUE */;
			}
			else
			{
				return "WT_POOLCUE" /* GXT: Pool Cue */;
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH" /* GXT: PIPE WRENCH */;
			}
			else
			{
				return "WT_WRENCH" /* GXT: Pipe Wrench */;
			}
			break;
		
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE" /* GXT: Rage Pickup */;
			break;
		
		case joaat("VEHICLE_WEAPON_TORPEDO"):
			return "WT_VEH_WEP" /* GXT: Vehicle Weapon */;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2" /* GXT: PISTOL MK II */;
			}
			else
			{
				return "WT_PIST2" /* GXT: Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2" /* GXT: SMG MK II */;
			}
			else
			{
				return "WT_SMG2" /* GXT: SMG Mk II */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2" /* GXT: HEAVY SNIPER MK II */;
			}
			else
			{
				return "WT_SNIP_HVY2" /* GXT: Heavy Sniper Mk II */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2" /* GXT: COMBAT MG MK II */;
			}
			else
			{
				return "WT_MG_CBT2" /* GXT: Combat MG Mk II */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2" /* GXT: ASSAULT RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_ASL2" /* GXT: Assault Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2" /* GXT: CARBINE RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_CBN2" /* GXT: Carbine Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2" /* GXT: PUMP SHOTGUN MK II */;
			}
			else
			{
				return "WT_SG_PMP2" /* GXT: Pump Shotgun Mk II */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2" /* GXT: SPECIAL CARBINE MK II */;
			}
			else
			{
				return "WT_SPCARBINE2" /* GXT: Special Carbine Mk II */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2" /* GXT: SNS PISTOL MK II */;
			}
			else
			{
				return "WT_SNSPISTOL2" /* GXT: SNS Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2" /* GXT: MARKSMAN RIFLE MK II */;
			}
			else
			{
				return "WT_MKRIFLE2" /* GXT: Marksman Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2" /* GXT: HEAVY REVOLVER MK II */;
			}
			else
			{
				return "WT_REVOLVER2" /* GXT: Heavy Revolver Mk II */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2" /* GXT: BULLPUP RIFLE MK II */;
			}
			else
			{
				return "WT_BULLRIFLE2" /* GXT: Bullpup Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA" /* GXT: DOUBLE-ACTION REVOLVER */;
			}
			else
			{
				return "WT_REV_DA" /* GXT: Double-Action Revolver */;
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET" /* GXT: STONE HATCHET */;
			}
			else
			{
				return "WT_SHATCHET" /* GXT: Stone Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL" /* GXT: UP-N-ATOMIZER */;
			}
			else
			{
				return "WT_RAYPISTOL" /* GXT: Up-n-Atomizer */;
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE" /* GXT: UNHOLY HELLBRINGER */;
			}
			else
			{
				return "WT_RAYCARBINE" /* GXT: Unholy Hellbringer */;
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN" /* GXT: WIDOWMAKER */;
			}
			else
			{
				return "WT_RAYMINIGUN" /* GXT: Widowmaker */;
			}
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV" /* GXT: NAVY REVOLVER */;
			}
			else
			{
				return "WT_REV_NV" /* GXT: Navy Revolver */;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST" /* GXT: CERAMIC PISTOL */;
			}
			else
			{
				return "WT_CERPST" /* GXT: Ceramic Pistol */;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			if (bParam1)
			{
				return "WTU_GDGTPST" /* GXT: PERICO PISTOL */;
			}
			else
			{
				return "WT_GDGTPST" /* GXT: Perico Pistol */;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL" /* GXT: MILITARY RIFLE */;
			}
			else
			{
				return "WT_MLTRYRFL" /* GXT: Military Rifle */;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			if (bParam1)
			{
				return "WTU_CMBSHGN" /* GXT: COMBAT SHOTGUN */;
			}
			else
			{
				return "WT_CMBSHGN" /* GXT: Combat Shotgun */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TURRET_DINGHY5_50CAL"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			if (bParam1)
			{
				return "WTU_FERTCAN" /* GXT: FERTILIZER CAN */;
			}
			else
			{
				return "WT_FERTCAN" /* GXT: Fertilizer Can */;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE" /* GXT: HEAVY RIFLE */;
			}
			else
			{
				return "WT_HEAVYRIFLE" /* GXT: Heavy Rifle */;
			}
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			if (bParam1)
			{
				return "WTU_EMPL" /* GXT: COMPACT EMP LAUNCHER */;
			}
			else
			{
				return "WT_EMPL" /* GXT: Compact EMP Launcher */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			if (bParam1)
			{
				return "WTU_STNGUNMP" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STNGUNMP" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			if (bParam1)
			{
				return "WTU_TACRIFLE" /* GXT: SERVICE CARBINE */;
			}
			else
			{
				return "WT_TACRIFLE" /* GXT: Service Carbine */;
			}
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE" /* GXT: PRECISION RIFLE */;
			}
			else
			{
				return "WT_PRCSRIFLE" /* GXT: Precision Rifle */;
			}
			break;
		
		case joaat("WEAPON_BZGAS"):
			if (bParam1)
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			else
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			break;
		
		case joaat("WEAPON_STINGER"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			else
			{
				return "WT_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			if (bParam1)
			{
				return "WTU_CANDYCANE" /* GXT: CANDY CANE */;
			}
			else
			{
				return "WT_CANDYCANE" /* GXT: Candy Cane */;
			}
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUNXM3" /* GXT: Railgun */;
			}
			break;
		
		default:
			if (func_26(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_25(&(Var0.f_31));
				}
				else
				{
					return func_25(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

var func_25(var uParam0)//Position - 0x2563
{
	return uParam0;
}

int func_26(int iParam0, var* uParam1)//Position - 0x256D
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_27(int iParam0, int iParam1)//Position - 0x25A8
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (func_40() == 0)
	{
		return 0;
	}
	if (func_39())
	{
		return 0;
	}
	iVar0 = func_38(iParam0);
	if (iVar0 != 506 && func_37(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	uVar1 = func_31(iParam0, iParam1);
	iVar2 = func_29(iParam0);
	return BitTest(uVar1, func_28(iVar2));
}

int func_28(int iParam0)//Position - 0x260A
{
	return (iParam0 % 32);
}

int func_29(int iParam0)//Position - 0x2617
{
	return func_30(iParam0);
}

int func_30(int iParam0)//Position - 0x2625
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		
		case joaat("WEAPON_MG"):
			return 12;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			return 95;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			return 96;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			return 97;
			break;
	}
	return 0;
}

var func_31(int iParam0, var uParam1)//Position - 0x2C2F
{
	var uVar0;
	
	uVar0 = func_32(func_34(iParam0), uParam1, 0);
	return uVar0;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x2C48
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_33(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_33(var uParam0)//Position - 0x2C85
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_143();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_34(int iParam0)//Position - 0x2CB9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 686;
				break;
			
			case 1:
				return 687;
				break;
			
			case 2:
				return 2421;
				break;
			
			case 3:
				return 10276;
				break;
		}
	}
	return 14192;
}

int func_35()//Position - 0x2D4A
{
	return Global_32164;
}

int func_36(int iParam0)//Position - 0x2D55
{
	return (iParam0 / 32);
}

int func_37(int iParam0, int iParam1)//Position - 0x2D62
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2848280[iParam0 /*3*/][func_33(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x2D8E
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 17;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 19;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 23;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 21;
			break;
		
		case joaat("WEAPON_SMG"):
			return 27;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 25;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 31;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 33;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 35;
			break;
		
		case joaat("WEAPON_MG"):
			return 37;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 39;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 43;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 45;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 49;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 55;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 53;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 59;
			break;
		
		case joaat("WEAPON_RPG"):
			return 61;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 63;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 65;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 67;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 69;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 71;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 74;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 73;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 1;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 11;
			break;
		
		case joaat("WEAPON_BAT"):
			return 13;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 5;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 15;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 41;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 57;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 47;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 142;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 348;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 144;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 346;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 350;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 352;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 375;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 373;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 379;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 377;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 367;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 391;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 393;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 397;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 399;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 395;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 401;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 403;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 405;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 407;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 409;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 414;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 412;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 416;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 419;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 421;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 426;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 432;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 430;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 428;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 434;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 436;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 9;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 27;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 393;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 419;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 348;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 460;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 468;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 470;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 472;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 466;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 476;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 474;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 482;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 484;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 480;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 488;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 486;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 490;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			return 492;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 494;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 496;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 498;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			return 500;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			return 502;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			return 504;
			break;
	}
	return 506;
}

bool func_39()//Position - 0x334A
{
	return Global_1575039;
}

int func_40()//Position - 0x3356
{
	if (func_42() && func_41(0))
	{
		return 1;
	}
	return 0;
}

var func_41(int iParam0)//Position - 0x3374
{
	return Global_1574538[iParam0];
}

var func_42()//Position - 0x3384
{
	return func_41(func_143() + 1);
}

int func_43(int iParam0)//Position - 0x3396
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
			bVar0 = true;
			iVar3 = 494;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			bVar0 = true;
			iVar3 = 248;
			break;
		
		case joaat("WEAPON_BAT"):
			bVar0 = true;
			iVar3 = 241;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			bVar0 = true;
			iVar3 = 213;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_44(PLAYER::PLAYER_ID());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_32(iVar3, -1, 0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_44(int iParam0)//Position - 0x3415
{
	return Global_1853910[iParam0 /*862*/].f_205.f_6;
}

int func_45(int iParam0, int iParam1, int iParam2)//Position - 0x342A
{
	int iVar0;
	
	iVar0 = func_46(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)//Position - 0x3527
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x3683
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x383A
{
	switch (iParam1)
	{
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 32;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x38EA
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x3B2D
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 64;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 4;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 64;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 128;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 1;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 32;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 16;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 1;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 128;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 8;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 16;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 256;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 64;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 4;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 8;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x46BB
{
	var uVar0;
	int iVar1;
	
	if (func_39())
	{
		return 0;
	}
	uVar0 = func_54(iParam0, iParam1, iParam2);
	iVar1 = func_52(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

int func_52(int iParam0, int iParam1)//Position - 0x46ED
{
	return func_53(iParam0, iParam1);
}

int func_53(int iParam0, int iParam1)//Position - 0x46FD
{
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
					break;
				
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
					break;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
					break;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
					return 602;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
					break;
				
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
					break;
				
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
					break;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
					break;
				
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
					break;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
					break;
				
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
					return 603;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
					break;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
					break;
				
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
					break;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
					break;
				
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
					break;
				
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
					break;
			}
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
					break;
				
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
					break;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
					break;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
					break;
				
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
					return 601;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
					break;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
					break;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
					return 572;
					break;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
					break;
				
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 577;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
					return 578;
					break;
				
				case joaat("COMPONENT_PISTOLXM3_SUPP"):
					return 579;
					break;
			}
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAILGUNXM3_CLIP_01"):
					return 580;
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BAT_VARMOD_XM3"):
					return 581;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
					return 583;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
					return 584;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
					return 585;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
					return 586;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
					return 587;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
					return 588;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
					return 589;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
					return 590;
					break;
				
				case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
					return 591;
					break;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
					return 582;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
					return 592;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
					return 593;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
					return 594;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
					return 595;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
					return 596;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
					return 597;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
					return 598;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
					return 599;
					break;
				
				case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
					return 600;
					break;
			}
			break;
	}
	return 0;
}

var func_54(int iParam0, int iParam1, int iParam2)//Position - 0x6BCD
{
	var uVar0;
	
	uVar0 = func_32(func_55(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_55(int iParam0, int iParam1)//Position - 0x6BE8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 682;
				break;
			
			case 1:
				return 683;
				break;
			
			case 2:
				return 684;
				break;
			
			case 3:
				return 685;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
			
			case 10:
				return 5622;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			
			case 18:
				return 10271;
				break;
		}
	}
	return 1752;
}

char* func_56(int iParam0, int iParam1)//Position - 0x6D56
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02" /* GXT: The Pimp */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG" /* GXT: The Ballas */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR" /* GXT: The Hustler */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD" /* GXT: The Rock */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT" /* GXT: The Hater */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV" /* GXT: The Lover */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC" /* GXT: The Player */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG" /* GXT: The King */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG" /* GXT: The Vagos */;
				break;
		}
	}
	else if (iParam1 == joaat("WEAPON_BAT"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_BAT_VARMOD_XM3"):
				return "WCT_BAT_XM3" /* GXT: Blagueurs */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
				return "WCT_BAT_XM301" /* GXT: Spatter */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
				return "WCT_BAT_XM302" /* GXT: Bullet Holes */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
				return "WCT_BAT_XM303" /* GXT: Burger Shot */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
				return "WCT_BAT_XM304" /* GXT: Cluckin' Bell */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
				return "WCT_BAT_XM305" /* GXT: Fatal Incursion */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
				return "WCT_BAT_XM306" /* GXT: Lucha Libre */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
				return "WCT_BAT_XM307" /* GXT: Trippy */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
				return "WCT_BAT_XM308" /* GXT: Tie-Dye */;
				break;
			
			case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
				return "WCT_BAT_XM309" /* GXT: Wall */;
				break;
		}
	}
	else if (iParam1 == joaat("WEAPON_KNIFE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
				return "WCT_KNIFE_XM3" /* GXT: Eyes */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
				return "WCT_KNIFE_XM301" /* GXT: Spatter */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
				return "WCT_KNIFE_XM302" /* GXT: Flames */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
				return "WCT_KNIFE_XM303" /* GXT: Lightning */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
				return "WCT_KNIFE_XM304" /* GXT: Pills */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
				return "WCT_KNIFE_XM305" /* GXT: Snakeskin */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
				return "WCT_KNIFE_XM306" /* GXT: Lucha Libre */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
				return "WCT_KNIFE_XM307" /* GXT: Trippy */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
				return "WCT_KNIFE_XM308" /* GXT: Tequilya */;
				break;
			
			case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
				return "WCT_KNIFE_XM309" /* GXT: Orang-O-Tang */;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL" /* GXT: Platinum Pearl Deluxe Finish */;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE" /* GXT: Default Handle */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX" /* GXT: Box magazine */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN" /* GXT: Mk II */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2" /* GXT: Small Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2" /* GXT: Medium Scope */;
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18" /* GXT: Festive tint */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM" /* GXT: Families Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED" /* GXT: Organics Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD" /* GXT: Record A Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE" /* GXT: Bone Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return "WCT_PISTMK2_XM3" /* GXT: Season's Greetings */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
			return "WCT_MSMG_XM3" /* GXT: Dildodude Camo */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
			return "WCT_PUMPSHT_XM3" /* GXT: Dildodude Camo */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_26(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_25(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x76F4
{
	if (bParam2)
	{
		if (!func_62(iParam0, iParam1, -1))
		{
			func_58(iParam0, iParam1, 1);
		}
	}
	else if (func_62(iParam0, iParam1, -1))
	{
		func_58(iParam0, iParam1, 0);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x772F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_61(iParam0, iParam1, -1);
	iVar1 = func_52(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_28(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_28(iVar1));
		}
		func_59(func_60(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

void func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7786
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_33(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_60(int iParam0, int iParam1)//Position - 0x77B6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10274;
				break;
		}
	}
	return 1755;
}

var func_61(int iParam0, int iParam1, int iParam2)//Position - 0x792A
{
	var uVar0;
	
	uVar0 = func_32(func_60(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x7945
{
	var uVar0;
	int iVar1;
	
	if (func_39())
	{
		return 0;
	}
	uVar0 = func_61(iParam0, iParam1, iParam2);
	iVar1 = func_52(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

void func_63(int iParam0, int iParam1, bool bParam2)//Position - 0x7977
{
	if (bParam2)
	{
		if (!func_92(iParam0, iParam1, -1))
		{
			func_64(iParam0, iParam1, 1);
		}
	}
	else if (func_92(iParam0, iParam1, -1))
	{
		func_64(iParam0, iParam1, 0);
	}
}

void func_64(int iParam0, int iParam1, bool bParam2)//Position - 0x79B2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(iParam0, iParam1, -1);
	iVar1 = func_52(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_28(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_28(iVar1));
		}
		func_59(func_65(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_65(int iParam0, int iParam1)//Position - 0x7A09
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 811;
				break;
			
			case 1:
				return 812;
				break;
			
			case 2:
				return 813;
				break;
			
			case 3:
				return 814;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2828;
				break;
			
			case 7:
				return 5502;
				break;
			
			case 8:
				return 5506;
				break;
			
			case 9:
				return 5510;
				break;
			
			case 10:
				return 5623;
				break;
			
			case 11:
				return 5627;
				break;
			
			case 12:
				return 5631;
				break;
			
			case 13:
				return 5635;
				break;
			
			case 14:
				return 6374;
				break;
			
			case 15:
				return 6497;
				break;
			
			case 16:
				return 6517;
				break;
			
			case 17:
				return 6523;
				break;
			
			case 18:
				return 10272;
				break;
			}
	}
	return 14192;
}

var func_66(int iParam0, int iParam1, int iParam2)//Position - 0x7B7A
{
	var uVar0;
	
	uVar0 = func_32(func_65(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

void func_67(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7B95
{
	if (bParam2)
	{
		if (!func_51(iParam0, iParam1, -1))
		{
			func_82(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_80(iParam0, iParam1) == 0)
			{
				func_75(16, func_56(iParam0, 0), func_79(iParam0, 0), func_78(iParam1), func_77(iParam1), -1, 0, 0, 0, -1, 0);
				func_73(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_68(iParam0, iParam1, 1);
		}
	}
	else if (func_51(iParam0, iParam1, -1))
	{
		func_82(iParam0, iParam1, 0);
	}
}

void func_68(int iParam0, int iParam1, bool bParam2)//Position - 0x7C1E
{
	if (bParam2)
	{
		if (!func_72(iParam0, iParam1, -1))
		{
			func_69(iParam0, iParam1, 1);
		}
	}
	else if (func_72(iParam0, iParam1, -1))
	{
		func_69(iParam0, iParam1, 0);
	}
}

void func_69(int iParam0, int iParam1, bool bParam2)//Position - 0x7C59
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_71(iParam0, iParam1, -1);
	iVar1 = func_52(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_28(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_28(iVar1));
		}
		func_59(func_70(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_70(int iParam0, int iParam1)//Position - 0x7CB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_52(iParam0, iParam1);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 655;
				break;
			
			case 1:
				return 656;
				break;
			
			case 2:
				return 657;
				break;
			
			case 3:
				return 658;
				break;
			
			case 4:
				return 1754;
				break;
			
			case 5:
				return 2436;
				break;
			
			case 6:
				return 2829;
				break;
			
			case 7:
				return 5503;
				break;
			
			case 8:
				return 5507;
				break;
			
			case 9:
				return 5511;
				break;
			
			case 10:
				return 5624;
				break;
			
			case 11:
				return 5628;
				break;
			
			case 12:
				return 5632;
				break;
			
			case 13:
				return 5636;
				break;
			
			case 14:
				return 6375;
				break;
			
			case 15:
				return 6498;
				break;
			
			case 16:
				return 6518;
				break;
			
			case 17:
				return 6524;
				break;
			
			case 18:
				return 10273;
				break;
		}
	}
	return 14192;
}

var func_71(int iParam0, int iParam1, int iParam2)//Position - 0x7E24
{
	var uVar0;
	
	uVar0 = func_32(func_70(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x7E3F
{
	var uVar0;
	int iVar1;
	
	if (func_39())
	{
		return 0;
	}
	uVar0 = func_71(iParam0, iParam1, iParam2);
	iVar1 = func_52(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

void func_73(int iParam0, int iParam1, bool bParam2)//Position - 0x7E71
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_2803653.f_991[func_74(iParam0, iParam1)]), func_28(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2803653.f_991[func_74(iParam0, iParam1)]), func_28(iVar0));
		}
	}
}

int func_74(int iParam0, int iParam1)//Position - 0x7ECA
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (func_36(iVar0))
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_75(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x7FA0
{
	int iVar0;
	
	iVar0 = func_76(&Global_1662547);
	Global_1662547[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1662547[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1662547[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1662547[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1662547[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1662547[iVar0 /*106*/].f_97 = iParam5;
	Global_1662547[iVar0 /*106*/].f_104 = iParam9;
	Global_1662547[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1662547[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_76(var uParam0)//Position - 0x803D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_77(int iParam0)//Position - 0x806C
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_SMG"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_RPG"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_MG"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_78(int iParam0)//Position - 0x825F
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "W_PI_Stungun";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "W_PI_Pistol";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "Parachute_Main";
			break;
		
		case joaat("WEAPON_SMG"):
			return "W_SB_SMG";
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "W_Ex_PE";
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("WEAPON_RPG"):
			return "W_LR_RPG";
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("WEAPON_MG"):
			return "W_MG_MG";
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "W_MG_Minigun";
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "W_EX_Molotov";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "rocket";
			break;
	}
	return "";
}

char* func_79(int iParam0, int iParam1)//Position - 0x8452
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<15> Var41;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE" /* GXT: Remove attachments. */;
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCD_GRIP" /* GXT: Improves weapon accuracy. */;
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCD_FLASH" /* GXT: Aids low light target acquisition. */;
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCD_FLASH" /* GXT: Aids low light target acquisition. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCD_SCOPE_MAC" /* GXT: Standard-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCD_SCOPE_MAC" /* GXT: Standard-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCD_SCOPE_SML" /* GXT: Medium-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCD_SCOPE_SML" /* GXT: Medium-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCD_SCOPE_MED" /* GXT: Extended-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCD_SCOPE_LRG" /* GXT: Long-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCD_SCOPE_MAX" /* GXT: Maximum zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCD_PI_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCD_PI_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCD_AR_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCD_AR_SUPP2" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCD_SR_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCD_P_CLIP1" /* GXT: Standard capacity for Pistol. */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCD_P_CLIP2" /* GXT: Extended capacity for Pistol. */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCD_CP_CLIP1" /* GXT: Standard capacity for Combat Pistol. */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCD_CP_CLIP2" /* GXT: Extended capacity for Combat Pistol. */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCD_AP_CLIP1" /* GXT: Standard capacity for AP Pistol. */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCD_AP_CLIP2" /* GXT: Extended capacity for AP Pistol. */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCDMSMG_CLIP1" /* GXT: Standard capacity for Micro SMG. */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCDMSMG_CLIP2" /* GXT: Extended capacity for Micro SMG. */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCD_SMG_CLIP1" /* GXT: Standard capacity for SMG. */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCD_SMG_CLIP2" /* GXT: Extended capacity for SMG. */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCD_AR_CLIP1" /* GXT: Standard capacity for Assault Rifle. */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCD_AR_CLIP2" /* GXT: Extended capacity for Assault Rifle. */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCD_CR_CLIP1" /* GXT: Standard capacity for Carbine Rifle. */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCD_CR_CLIP2" /* GXT: Extended capacity for Carbine Rifle. */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCD_ADR_CLIP1" /* GXT: Standard capacity for Advanced Rifle. */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCD_ADR_CLIP2" /* GXT: Extended capacity for Advanced Rifle. */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCD_MG_CLIP1" /* GXT: Standard capacity for MG. */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCD_MG_CLIP2" /* GXT: Extended capacity for MG. */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCDCMG_CLIP1" /* GXT: Standard capacity for Combat MG. */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCDCMG_CLIP2" /* GXT: Extended capacity for Combat MG. */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCD_AS_CLIP1" /* GXT: Standard capacity for Assault Shotgun. */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCD_AS_CLIP2" /* GXT: Extended capacity for Assault Shotgun. */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCD_ASMG_CLIP1" /* GXT: Standard capacity for Assault SMG. */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCD_ASMG_CLIP2" /* GXT: Extended capacity for Assault SMG. */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCD_P50_CLIP1" /* GXT: Standard capacity for Pistol .50. */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCD_P50_CLIP2" /* GXT: Extended capacity for Pistol .50. */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_AR" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_ADR" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCD_VAR_CR" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_AP" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCD_VAR_P" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCD_VAR_P50" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCD_VAR_HPST" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCD_VAR_SMG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCD_VAR_MSMG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCD_VAR_SOF" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_SNP" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCD_VAR_MKRF" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_ASMG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCD_VAR_BPR" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBMG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_CBP" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCD_VAR_MG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCD_VAR_PSHT" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCD_VAR_SNS" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCD_VAR_SCAR" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCD_P_CLIP1" /* GXT: Standard capacity for Pistol. */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCD_REV_VARB" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCD_REV_VARG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCD_CLIP3" /* GXT: Expanded capacity and slower reload. */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCD_CLIP3" /* GXT: Expanded capacity and slower reload. */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCD_CLIP3" /* GXT: Expanded capacity and slower reload. */;
			break;
		
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCD_VAR_GUN";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCD_CLIP2" /* GXT: Extended capacity for regular ammo. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCD_SCOPE_MAC" /* GXT: Standard-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCD_SCOPE_SML" /* GXT: Medium-range zoom functionality. */;
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCD_VAR_RAY18" /* GXT: The Festive tint for the Up-n-Atomizer. */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCD_CLIP2" /* GXT: Extended capacity for regular ammo. */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCD_PI_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCD_VAR_HRF" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCD_VAR_MSMG" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCD_VAR_AP" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCD_VAR_PSHT" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"):
			return "WCD_VAR_PSHT" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_XM3"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_CLIP_01"):
			return "WCD_PXM3_CLIP1" /* GXT: Standard capacity for the WM 29 Pistol. */;
			break;
		
		case joaat("COMPONENT_PISTOLXM3_SUPP"):
			return "WCD_PI_SUPP" /* GXT: Reduces noise and muzzle flash. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_01"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_02"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_03"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_04"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_05"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_06"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_07"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_08"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_BAT_VARMOD_XM3_09"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_01"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_02"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_03"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_04"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_05"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_06"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_07"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_08"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		case joaat("COMPONENT_KNIFE_VARMOD_XM3_09"):
			return "WCD_VAR_DESC" /* GXT: Item available to purchase. */;
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_26(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_25(&(Var41.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID" /* GXT: Invalid Attachment Weapon Description. */;
}

int func_80(int iParam0, int iParam1)//Position - 0x8C26
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_81(iParam0, iParam1);
	iVar1 = func_52(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

var func_81(int iParam0, int iParam1)//Position - 0x8C4B
{
	var uVar0;
	
	uVar0 = Global_2803653.f_991[func_74(iParam0, iParam1)];
	return uVar0;
}

void func_82(int iParam0, int iParam1, bool bParam2)//Position - 0x8C68
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1, -1);
	iVar1 = func_52(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			MISC::SET_BIT(&iVar0, func_28(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_28(iVar1));
		}
		func_59(func_55(iParam0, iParam1), iVar0, -1, 1, 0);
	}
}

int func_83(int iParam0, int iParam1)//Position - 0x8CBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_26(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_84(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_84(int iParam0)//Position - 0x9920
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2)//Position - 0x99C1
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_39())
	{
		return 0;
	}
	uVar0 = func_86(iParam0, iParam1);
	iVar1 = func_29(iParam0);
	return BitTest(uVar0, func_28(iVar1));
}

var func_86(int iParam0, int iParam1)//Position - 0x99F5
{
	var uVar0;
	
	uVar0 = func_32(func_87(iParam0), iParam1, 0);
	return uVar0;
}

int func_87(int iParam0)//Position - 0x9A0E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 2429;
				break;
			
			case 3:
				return 10279;
				break;
		}
	}
	return 14192;
}

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x9A9F
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_39())
	{
		return 0;
	}
	if (func_40() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("GADGET_PARACHUTE") && iParam0 != joaat("WEAPON_RAILGUN"))
	{
		if (func_37(func_91(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_89(iParam0, iParam1);
	iVar1 = func_29(iParam0);
	return BitTest(uVar0, func_28(iVar1));
}

var func_89(int iParam0, var uParam1)//Position - 0x9B09
{
	var uVar0;
	
	uVar0 = func_32(func_90(iParam0), uParam1, 0);
	return uVar0;
}

int func_90(int iParam0)//Position - 0x9B22
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_36(iVar0);
	if ((func_159() == 0 || func_35() == 0) || (func_159() == 999 && func_35() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 800;
				break;
			
			case 1:
				return 801;
				break;
			
			case 2:
				return 2420;
				break;
			
			case 3:
				return 10275;
				break;
			}
	}
	return 14192;
}

int func_91(int iParam0)//Position - 0x9BB0
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 18;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 66;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 68;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 70;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 72;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 18;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 40;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 22;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 24;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 26;
			break;
		
		case joaat("WEAPON_SMG"):
			return 28;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 30;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 32;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 34;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 36;
			break;
		
		case joaat("WEAPON_MG"):
			return 38;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 42;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 44;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 46;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 48;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 50;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 54;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 56;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 60;
			break;
		
		case joaat("WEAPON_RPG"):
			return 62;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 64;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 52;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 75;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 2;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 4;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 12;
			break;
		
		case joaat("WEAPON_BAT"):
			return 14;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 6;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 16;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 58;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 40;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 143;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 349;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 145;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 347;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 351;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 353;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 374;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 376;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 378;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 380;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 392;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 394;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 398;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 400;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 402;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 404;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 406;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 396;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 408;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 410;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 413;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 415;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 417;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 420;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 422;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 427;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 433;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 431;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 429;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 435;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 437;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 10;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 32;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 34;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 40;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 18;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 28;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 394;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 44;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 420;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 145;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 349;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 461;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 467;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 469;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 469;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 469;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 477;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 475;
			break;
		
		case joaat("WEAPON_HAZARDCAN"):
			return 479;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 483;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 485;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 481;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 489;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 487;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 491;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			return 493;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 495;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 497;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 499;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			return 501;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			return 503;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			return 505;
			break;
	}
	return 2;
}

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0xA178
{
	var uVar0;
	int iVar1;
	
	if (func_39())
	{
		return 0;
	}
	uVar0 = func_66(iParam0, iParam1, iParam2);
	iVar1 = func_52(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

int func_93(int iParam0)//Position - 0xA1AA
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
			return joaat("WEAPON_PISTOL");
		
		case joaat("WEAPON_SMG_MK2"):
			return joaat("WEAPON_SMG");
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return joaat("WEAPON_ASSAULTRIFLE");
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return joaat("WEAPON_CARBINERIFLE");
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return joaat("WEAPON_COMBATMG");
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return joaat("WEAPON_HEAVYSNIPER");
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return joaat("WEAPON_BULLPUPRIFLE");
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return joaat("WEAPON_MARKSMANRIFLE");
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return joaat("WEAPON_PUMPSHOTGUN");
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return joaat("WEAPON_REVOLVER");
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return joaat("WEAPON_SNSPISTOL");
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return joaat("WEAPON_SPECIALCARBINE");
		
		default:
	}
	return 0;
}

int func_94(int iParam0)//Position - 0xA262
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_95(var uParam0)//Position - 0xA2C1
{
	return uParam0->f_281;
}

void func_96(var uParam0, var uParam1)//Position - 0xA2CE
{
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")) && iLocal_66[10] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HAMMER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")) && iLocal_66[0] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL50"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")) && iLocal_66[1] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")) && iLocal_66[2] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_SAWNOFFSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")) && iLocal_66[3] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BOTTLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")) && iLocal_66[4] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")) && iLocal_66[11] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_GUSENBERG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")) && iLocal_66[7] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")) && iLocal_66[5] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")) && iLocal_66[6] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")) && iLocal_66[8] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DAGGER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")) && iLocal_66[9] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_VINTAGEPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")) && iLocal_66[14] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FIREWORK"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")) && iLocal_66[13] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MUSKET"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")) && iLocal_66[12] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLAREGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")) && iLocal_66[15] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")) && iLocal_66[16] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE"), uParam0, *uParam1, 0);
	}
	if (func_104() || Global_262145.f_20224 /* Tunable: ENABLE_RETURNING_CONTENT_WEAPON */)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")) && iLocal_66[22] == uParam1->f_5)
		{
			func_107(joaat("WEAPON_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")) && iLocal_66[17] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PROXMINE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")) && iLocal_66[18] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HOMINGLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")) && iLocal_66[19] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATPDW"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")) && iLocal_66[20] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")) && iLocal_66[21] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_KNUCKLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")) && iLocal_66[23] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHETE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")) && iLocal_66[24] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MACHINEPISTOL"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_12052 /* Tunable: TURN_ON_HALLOWEEN_WEAPONS */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT"))) && iLocal_66[25] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_FLASHLIGHT"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")) && iLocal_66[26] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")) && iLocal_66[27] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SWITCHBLADE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")) && iLocal_66[28] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_DBSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")) && iLocal_66[29] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")) && iLocal_66[30] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_AUTOSHOTGUN"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")) && iLocal_66[31] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BATTLEAXE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")) && iLocal_66[32] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMPACTLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")) && iLocal_66[33] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MINISMG"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")) && iLocal_66[34] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PIPEBOMB"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")) && iLocal_66[35] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_POOLCUE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")) && iLocal_66[36] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_WRENCH"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")) && iLocal_66[37] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_ASSAULTRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")) && iLocal_66[38] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CARBINERIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")) && iLocal_66[39] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_COMBATMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")) && iLocal_66[40] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYSNIPER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")) && iLocal_66[41] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")) && iLocal_66[42] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SMG_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")) && iLocal_66[43] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_BULLPUPRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")) && iLocal_66[44] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MARKSMANRIFLE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")) && iLocal_66[45] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PUMPSHOTGUN_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")) && iLocal_66[46] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_REVOLVER_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")) && iLocal_66[47] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SNSPISTOL_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")) && iLocal_66[48] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_SPECIALCARBINE_MK2"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION")) && iLocal_66[49] == uParam1->f_5)
	{
		if (Global_262145.f_23444 /* Tunable: ENABLE_TREASURE_HUNT */ && (func_103() || Global_1968316))
		{
			func_107(joaat("WEAPON_DOUBLEACTION"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET")) && iLocal_66[50] == uParam1->f_5)
	{
		if (Global_262145.f_24143 /* Tunable: -585985361 */ && func_101())
		{
			func_107(joaat("WEAPON_STONE_HATCHET"), uParam0, *uParam1, 0);
		}
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && iLocal_66[51] == uParam1->f_5) && Global_262145.f_26760 /* Tunable: ENABLE_AW_HELLBRINGER */)
	{
		func_107(joaat("WEAPON_RAYCARBINE"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && iLocal_66[52] == uParam1->f_5) && Global_262145.f_26759 /* Tunable: ENABLE_AW_WIDOWMAKER */)
	{
		func_107(joaat("WEAPON_RAYMINIGUN"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1) || func_17(25002, -1)) || func_88(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25768 /* Tunable: ENABLE_AW_RAYGUN */)) && iLocal_66[53] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_RAYPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")) && iLocal_66[54] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CERAMICPISTOL"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER")) && iLocal_66[55] == uParam1->f_5)
	{
		if (Global_262145.f_28384 /* Tunable: ENABLE_SERIAL_KILLER */ && (func_100() || Global_1968322))
		{
			func_107(joaat("WEAPON_NAVYREVOLVER"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MILITARYRIFLE")) && iLocal_66[56] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_MILITARYRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATSHOTGUN")) && iLocal_66[57] == uParam1->f_5)
	{
		if (func_17(30632, -1))
		{
			func_107(joaat("WEAPON_COMBATSHOTGUN"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GADGETPISTOL")) && iLocal_66[58] == uParam1->f_5)
	{
		if (func_99(106, -1))
		{
			func_107(joaat("WEAPON_GADGETPISTOL"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_EMPLAUNCHER")) && iLocal_66[59] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_EMPLAUNCHER"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STUNGUN_MP")) && iLocal_66[60] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_STUNGUN_MP"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYRIFLE")) && iLocal_66[61] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_HEAVYRIFLE"), uParam0, *uParam1, 0);
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_TACTICALRIFLE")) && iLocal_66[62] == uParam1->f_5)
	{
		if (((Global_262145.f_32865 /* Tunable: UNLOCK_SERVICE_CARBINE_FOR_PURCHASE */ || func_88(joaat("WEAPON_TACTICALRIFLE"), -1, 0)) || func_37(func_91(joaat("WEAPON_TACTICALRIFLE")), -1)) || func_97(joaat("WEAPON_TACTICALRIFLE")))
		{
			func_107(joaat("WEAPON_TACTICALRIFLE"), uParam0, *uParam1, 0);
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PRECISIONRIFLE")) && iLocal_66[63] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PRECISIONRIFLE"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOLXM3")) && (func_88(joaat("WEAPON_PISTOLXM3"), -1, 0) || func_27(joaat("WEAPON_PISTOLXM3"), -1))) && iLocal_66[64] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_PISTOLXM3"), uParam0, *uParam1, 0);
	}
	if ((WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CANDYCANE")) && (func_88(joaat("WEAPON_CANDYCANE"), -1, 0) || func_27(joaat("WEAPON_CANDYCANE"), -1))) && iLocal_66[65] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_CANDYCANE"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_33799 /* Tunable: XM22_GUN_VAN_AVAILABLE */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAILGUNXM3"))) && iLocal_66[67] == uParam1->f_5)
	{
		func_107(joaat("WEAPON_RAILGUNXM3"), uParam0, *uParam1, 0);
	}
}

int func_97(int iParam0)//Position - 0xAF7B
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		return 1;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		if (func_98(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0)//Position - 0xAFB2
{
	if ((((((((((iParam0 == joaat("GADGET_PARACHUTE") || iParam0 == joaat("WEAPON_KNIFE")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_NIGHTSTICK")) || iParam0 == joaat("WEAPON_GOLFCLUB")) || iParam0 == joaat("WEAPON_HAMMER")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_BOTTLE")) || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_HATCHET"))
	{
		return 0;
	}
	return 1;
}

int func_99(int iParam0, int iParam1)//Position - 0xB056
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2850649[iParam0 /*3*/][func_33(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_100()//Position - 0xB082
{
	if (func_17(28158, -1))
	{
		return 1;
	}
	return 0;
}

int func_101()//Position - 0xB09A
{
	if (func_102(7315, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0xB0B3
{
	if (iParam1 == -1)
	{
		iParam1 = func_143();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

int func_103()//Position - 0xB0CF
{
	if (func_102(18981, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_104()//Position - 0xB0E8
{
	int iVar0;
	
	if (Global_152523 == 2)
	{
		return 1;
	}
	else if (Global_152523 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_105(bool bParam0, bool bParam1)//Position - 0xB1A0
{
	if (bParam0)
	{
		if (BitTest(Global_113648.f_668.f_1319, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !func_106())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

bool func_106()//Position - 0xB209
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xB21F
{
	struct<2> Var0;
	char cVar4[16];
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	var uVar12;
	struct<5> Var13;
	struct<5> Var18;
	struct<5> Var23;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_24(iParam0, 0), 16);
	if (((iParam0 == joaat("WEAPON_DOUBLEACTION") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER")) || iParam0 == joaat("WEAPON_MARKSMANRIFLE"))
	{
		StringCopy(&cVar4, func_137(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar4, func_137(iParam0, 0), 16);
	}
	fVar8 = func_134(iParam0);
	uVar9 = func_133(iParam0, iParam2);
	uVar10 = func_132(iParam0, iParam2);
	iVar11 = func_131(iParam0, iParam2);
	uVar12 = func_130(iParam0, iParam2);
	WEAPON::GET_WEAPON_HUD_STATS(iParam0, &Var13);
	Var13.f_2 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0);
	bVar31 = false;
	iVar30 = 0;
	while (iVar30 <= 8)
	{
		if (uParam1->f_1[iVar30] == 0 && WEAPON::IS_WEAPON_VALID(iParam0))
		{
			if (func_94(iParam0))
			{
				if (func_92(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), func_93(iParam0), -1))
				{
					bVar31 = true;
				}
				else
				{
					bVar31 = false;
				}
			}
			else if (func_88(iParam0, iParam2, 0))
			{
				bVar31 = true;
				if (bVar31)
				{
				}
			}
			else
			{
				bVar31 = false;
			}
			iVar29 = 0;
			while (iVar29 <= 35)
			{
				iVar28 = func_83(iParam0, iVar29);
				if (iVar28 != 0)
				{
					if (func_51(iVar28, iParam0, iParam2) && bVar31)
					{
						if (WEAPON::GET_WEAPON_COMPONENT_HUD_STATS(iVar28, &Var18))
						{
							Var23.f_0 = (Var23.f_0 + Var18.f_0);
							Var23.f_1 = (Var23.f_1 + Var18.f_1);
							Var23.f_3 = (Var23.f_3 + Var18.f_3);
							Var23.f_4 = (Var23.f_4 + Var18.f_4);
						}
					}
					if (func_62(iVar28, iParam0, iParam2))
					{
						if (func_129(iVar28))
						{
							Var23.f_2 = func_128(iParam0);
						}
						else if (func_127(iVar28))
						{
							Var23.f_2 = func_126(iParam0);
						}
					}
					if (func_92(iVar28, iParam0, iParam2))
					{
					}
				}
				iVar29++;
			}
			if (Var23.f_2 == 0)
			{
				Var23.f_2 = Var13.f_2;
			}
			func_125(iVar30, &Var0, &cVar4, uParam1);
			func_124(iVar30, Var13.f_0, uParam1);
			func_123(iVar30, Var23.f_0, uParam1);
			if (func_15(iParam0))
			{
				func_122(iVar30, -1, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, -1, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, -1, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			else
			{
				func_122(iVar30, Var13.f_3, uParam1);
				func_121(iVar30, Var23.f_3, uParam1);
				func_120(iVar30, Var13.f_4, uParam1);
				func_119(iVar30, Var23.f_4, uParam1);
				func_118(iVar30, Var13.f_2, uParam1);
				func_117(iVar30, Var23.f_2, uParam1);
			}
			func_116(iVar30, uVar10, uParam1);
			func_115(iVar30, uVar9, uParam1);
			if (func_15(iParam0))
			{
				func_114(iVar30, -1f, uParam1);
				func_113(iVar30, -1, uParam1);
			}
			else
			{
				func_114(iVar30, fVar8, uParam1);
				func_113(iVar30, iVar11, uParam1);
			}
			func_112(iVar30, uVar12, uParam1);
			func_111(iVar30, Var13.f_1, uParam1);
			func_110(iVar30, Var23.f_1, uParam1);
			func_109(iVar30, iParam0, uParam1);
			func_108(iParam2, uParam1);
			uParam1->f_1[iVar30] = 1;
			iVar30 = 9;
		}
		iVar30++;
	}
}

void func_108(int iParam0, var uParam1)//Position - 0xB540
{
	uParam1->f_276 = iParam0;
}

void func_109(int iParam0, int iParam1, var uParam2)//Position - 0xB54F
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)//Position - 0xB561
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)//Position - 0xB573
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_112(int iParam0, var uParam1, var uParam2)//Position - 0xB585
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_113(int iParam0, int iParam1, var uParam2)//Position - 0xB597
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_114(int iParam0, float fParam1, var uParam2)//Position - 0xB5A9
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)//Position - 0xB5BB
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)//Position - 0xB5CD
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)//Position - 0xB5DF
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_118(int iParam0, int iParam1, var uParam2)//Position - 0xB5F1
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)//Position - 0xB603
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_120(int iParam0, int iParam1, var uParam2)//Position - 0xB615
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)//Position - 0xB627
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)//Position - 0xB639
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)//Position - 0xB64B
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)//Position - 0xB65D
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_125(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0xB66F
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_126(int iParam0)//Position - 0xB68F
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 16;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 16;
		
		case joaat("WEAPON_APPISTOL"):
			return 36;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 16;
		
		case joaat("WEAPON_MICROSMG"):
			return 30;
		
		case joaat("WEAPON_SMG"):
			return 60;
		
		case joaat("WEAPON_SMG_MK2"):
			return 60;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 60;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 60;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 60;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 60;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 60;
		
		case joaat("WEAPON_MG"):
			return 100;
		
		case joaat("WEAPON_COMBATMG"):
			return 200;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 200;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 32;
		
		case joaat("WEAPON_PISTOL50"):
			return 12;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 60;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 12;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 60;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 60;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 36;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 14;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 16;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 12;
		
		case joaat("WEAPON_COMBATPDW"):
			return 60;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 60;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 20;
		
		case joaat("WEAPON_MINISMG"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_127(int iParam0)//Position - 0xB7ED
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_GUSENBERG_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_MK2_CLIP_02"):
			return 1;
			break;
		
		case joaat("COMPONENT_MINISMG_CLIP_02"):
			return 1;
			break;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0xB9B7
{
	switch (iParam0)
	{
		case joaat("WEAPON_SMG"):
			return 100;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 100;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 100;
		
		case joaat("WEAPON_SMG_MK2"):
			return 100;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 100;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 100;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 100;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 30;
		
		case joaat("WEAPON_COMBATPDW"):
			return 100;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 100;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_129(int iParam0)//Position - 0xBA44
{
	switch (iParam0)
	{
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return 1;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
			return 1;
			break;
	}
	return 0;
}

float func_130(int iParam0, int iParam1)//Position - 0xBABC
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_PISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(251, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(252, iParam1, 0)));
		
		case joaat("WEAPON_COMBATPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(261, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(262, iParam1, 0)));
		
		case joaat("WEAPON_APPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(281, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(282, iParam1, 0)));
		
		case joaat("WEAPON_MICROSMG"):
			return (SYSTEM::TO_FLOAT(func_32(291, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(292, iParam1, 0)));
		
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_SMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(301, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(302, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(321, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(322, iParam1, 0)));
		
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(330, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(331, iParam1, 0)));
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(339, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(340, iParam1, 0)));
		
		case joaat("WEAPON_MG"):
			return (SYSTEM::TO_FLOAT(func_32(348, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(349, iParam1, 0)));
		
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(357, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(358, iParam1, 0)));
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(375, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(376, iParam1, 0)));
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(384, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(385, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(403, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(404, iParam1, 0)));
		
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(422, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(423, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return (SYSTEM::TO_FLOAT(func_32(431, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(432, iParam1, 0)));
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_32(442, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(443, iParam1, 0)));
		
		case joaat("WEAPON_RPG"):
			return (SYSTEM::TO_FLOAT(func_32(449, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(450, iParam1, 0)));
		
		case joaat("WEAPON_MINIGUN"):
			return (SYSTEM::TO_FLOAT(func_32(456, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(457, iParam1, 0)));
		
		case joaat("WEAPON_GRENADE"):
			return (SYSTEM::TO_FLOAT(func_32(465, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(466, iParam1, 0)));
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return (SYSTEM::TO_FLOAT(func_32(473, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(474, iParam1, 0)));
		
		case joaat("WEAPON_STICKYBOMB"):
			return (SYSTEM::TO_FLOAT(func_32(482, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(483, iParam1, 0)));
		
		case joaat("WEAPON_MOLOTOV"):
			return (SYSTEM::TO_FLOAT(func_32(490, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(491, iParam1, 0)));
		
		case joaat("WEAPON_STUNGUN"):
			return (SYSTEM::TO_FLOAT(func_32(412, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(413, iParam1, 0)));
		
		case joaat("WEAPON_KNIFE"):
			return (SYSTEM::TO_FLOAT(func_32(194, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(196, iParam1, 0)));
		
		case joaat("WEAPON_NIGHTSTICK"):
			return (SYSTEM::TO_FLOAT(func_32(202, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(204, iParam1, 0)));
		
		case joaat("WEAPON_HAMMER"):
			return (SYSTEM::TO_FLOAT(func_32(230, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(232, iParam1, 0)));
		
		case joaat("WEAPON_BAT"):
			return (SYSTEM::TO_FLOAT(func_32(237, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(239, iParam1, 0)));
		
		case joaat("WEAPON_CROWBAR"):
			return (SYSTEM::TO_FLOAT(func_32(209, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(211, iParam1, 0)));
		
		case joaat("WEAPON_GOLFCLUB"):
			return (SYSTEM::TO_FLOAT(func_32(244, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(246, iParam1, 0)));
		
		case joaat("WEAPON_PISTOL50"):
			return (SYSTEM::TO_FLOAT(func_32(271, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(272, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTSMG"):
			return (SYSTEM::TO_FLOAT(func_32(311, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(312, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(394, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(395, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTMG"):
			return (SYSTEM::TO_FLOAT(func_32(366, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(367, iParam1, 0)));
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return (SYSTEM::TO_FLOAT(func_32(321, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(322, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(431, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(432, iParam1, 0)));
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return (SYSTEM::TO_FLOAT(func_32(321, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(322, iParam1, 0)));
		
		case joaat("WEAPON_BOTTLE"):
			return (SYSTEM::TO_FLOAT(func_32(1731, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(1732, iParam1, 0)));
		
		case joaat("WEAPON_SNSPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(1741, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(1742, iParam1, 0)));
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return (SYSTEM::TO_FLOAT(func_32(11911, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(11912, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(11921, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(11922, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(11901, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(11902, iParam1, 0)));
		
		case joaat("WEAPON_DAGGER"):
			return (SYSTEM::TO_FLOAT(func_32(12188, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12189, iParam1, 0)));
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(12198, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12199, iParam1, 0)));
		
		case joaat("WEAPON_GUSENBERG"):
			return (SYSTEM::TO_FLOAT(func_32(11931, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(11932, iParam1, 0)));
		
		case joaat("WEAPON_MUSKET"):
			return (SYSTEM::TO_FLOAT(func_32(12218, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12219, iParam1, 0)));
		
		case joaat("WEAPON_FIREWORK"):
			return (SYSTEM::TO_FLOAT(func_32(12208, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12209, iParam1, 0)));
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(12296, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12297, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(12306, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12307, iParam1, 0)));
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_32(12332, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12333, iParam1, 0)));
		
		case joaat("WEAPON_PROXMINE"):
			return (SYSTEM::TO_FLOAT(func_32(12324, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12325, iParam1, 0)));
		
		case joaat("WEAPON_COMBATPDW"):
			return (SYSTEM::TO_FLOAT(func_32(12340, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12341, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(12357, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12358, iParam1, 0)));
		
		case joaat("WEAPON_KNUCKLE"):
			return (SYSTEM::TO_FLOAT(func_32(12350, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12351, iParam1, 0)));
		
		case joaat("WEAPON_MACHETE"):
			return (SYSTEM::TO_FLOAT(func_32(12367, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12368, iParam1, 0)));
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(12375, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12376, iParam1, 0)));
		
		case joaat("WEAPON_FLASHLIGHT"):
			return (SYSTEM::TO_FLOAT(func_32(12413, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12414, iParam1, 0)));
		
		case joaat("WEAPON_SWITCHBLADE"):
			return (SYSTEM::TO_FLOAT(func_32(12441, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12442, iParam1, 0)));
		
		case joaat("WEAPON_REVOLVER"):
			return (SYSTEM::TO_FLOAT(func_32(12431, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12432, iParam1, 0)));
		
		case joaat("WEAPON_DBSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(12403, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12404, iParam1, 0)));
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(12393, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12394, iParam1, 0)));
		
		case joaat("WEAPON_HATCHET"):
			return (SYSTEM::TO_FLOAT(func_32(12316, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12317, iParam1, 0)));
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(12482, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12483, iParam1, 0)));
		
		case joaat("WEAPON_BATTLEAXE"):
			return (SYSTEM::TO_FLOAT(func_32(12492, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12493, iParam1, 0)));
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_32(12498, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12499, iParam1, 0)));
		
		case joaat("WEAPON_MINISMG"):
			return (SYSTEM::TO_FLOAT(func_32(12508, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12509, iParam1, 0)));
		
		case joaat("WEAPON_PIPEBOMB"):
			return (SYSTEM::TO_FLOAT(func_32(12518, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12519, iParam1, 0)));
		
		case joaat("WEAPON_POOLCUE"):
			return (SYSTEM::TO_FLOAT(func_32(12526, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12527, iParam1, 0)));
		
		case joaat("WEAPON_WRENCH"):
			return (SYSTEM::TO_FLOAT(func_32(223, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(225, iParam1, 0)));
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(12990, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(12991, iParam1, 0)));
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(13010, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13011, iParam1, 0)));
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(13000, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13001, iParam1, 0)));
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(13020, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13021, iParam1, 0)));
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(13040, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13041, iParam1, 0)));
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return (SYSTEM::TO_FLOAT(func_32(13050, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13051, iParam1, 0)));
		
		case joaat("WEAPON_DOUBLEACTION"):
			return (SYSTEM::TO_FLOAT(func_32(13030, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13031, iParam1, 0)));
		
		case joaat("WEAPON_STONE_HATCHET"):
			return (SYSTEM::TO_FLOAT(func_32(13253, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13254, iParam1, 0)));
		
		case joaat("WEAPON_RAYPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(13410, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13411, iParam1, 0)));
		
		case joaat("WEAPON_RAYCARBINE"):
			return (SYSTEM::TO_FLOAT(func_32(13420, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13421, iParam1, 0)));
		
		case joaat("WEAPON_RAYMINIGUN"):
			return (SYSTEM::TO_FLOAT(func_32(13430, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13431, iParam1, 0)));
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return (SYSTEM::TO_FLOAT(func_32(13861, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13862, iParam1, 0)));
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(13851, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(13852, iParam1, 0)));
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(14021, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14022, iParam1, 0)));
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return (SYSTEM::TO_FLOAT(func_32(14001, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14002, iParam1, 0)));
		
		case joaat("WEAPON_GADGETPISTOL"):
			return (SYSTEM::TO_FLOAT(func_32(14011, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14012, iParam1, 0)));
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return (SYSTEM::TO_FLOAT(func_32(14052, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14053, iParam1, 0)));
		
		case joaat("WEAPON_STUNGUN_MP"):
			return (SYSTEM::TO_FLOAT(func_32(14074, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14075, iParam1, 0)));
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(14152, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14153, iParam1, 0)));
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return (SYSTEM::TO_FLOAT(func_32(14142, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14143, iParam1, 0)));
		
		case joaat("WEAPON_PISTOLXM3"):
			return (SYSTEM::TO_FLOAT(func_32(14162, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14163, iParam1, 0)));
		
		case joaat("WEAPON_CANDYCANE"):
			return (SYSTEM::TO_FLOAT(func_32(14172, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14173, iParam1, 0)));
		
		case joaat("WEAPON_RAILGUNXM3"):
			return (SYSTEM::TO_FLOAT(func_32(14182, iParam1, 0)) / SYSTEM::TO_FLOAT(func_32(14183, iParam1, 0)));
		
		default:
	}
	return 0f;
}

int func_131(int iParam0, int iParam1)//Position - 0xC864
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_32(255, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_32(265, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_32(285, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_32(295, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_32(305, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_32(325, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_32(334, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_32(343, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_32(352, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_32(361, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_32(379, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_32(388, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_32(407, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_32(426, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_32(435, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_32(460, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_32(275, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_32(315, iParam1, 0);
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_32(435, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_32(398, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTMG"):
			return func_32(370, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_32(325, iParam1, 0);
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_32(325, iParam1, 0);
		
		case joaat("WEAPON_RUBBERGUN"):
			return func_32(325, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_32(1745, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_32(11915, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_32(11925, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_32(11905, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_32(12202, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_32(11935, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_32(12222, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_32(12212, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_32(12300, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_32(12310, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_32(12344, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_32(12361, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_32(12379, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_32(12435, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_32(12407, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_32(12397, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_32(12486, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_32(12512, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_32(255, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_32(305, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_32(435, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_32(361, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_32(325, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_32(334, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_32(12994, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_32(13014, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_32(13004, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_32(13024, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_32(13044, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_32(13054, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_32(13034, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_32(13414, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_32(13424, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_32(13434, iParam1, 0);
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return func_32(14025, iParam1, 0);
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return func_32(14005, iParam1, 0);
		
		case joaat("WEAPON_GADGETPISTOL"):
			return func_32(14015, iParam1, 0);
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return func_32(14056, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN_MP"):
			return func_32(14078, iParam1, 0);
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return func_32(14156, iParam1, 0);
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return func_32(14146, iParam1, 0);
		
		case joaat("WEAPON_PISTOLXM3"):
			return func_32(14166, iParam1, 0);
		
		case joaat("WEAPON_CANDYCANE"):
			return func_32(14176, iParam1, 0);
		
		case joaat("WEAPON_RAILGUNXM3"):
			return func_32(14186, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0xCD7E
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_32(252, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_32(262, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_32(282, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_32(292, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_32(302, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_32(322, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_32(331, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_32(340, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_32(349, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_32(358, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_32(376, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_32(385, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_32(404, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_32(423, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_32(432, iParam1, 0);
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_32(443, iParam1, 0);
		
		case joaat("WEAPON_RPG"):
			return func_32(450, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_32(457, iParam1, 0);
		
		case joaat("WEAPON_GRENADE"):
			return func_32(466, iParam1, 0);
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_32(474, iParam1, 0);
		
		case joaat("WEAPON_STICKYBOMB"):
			return func_32(483, iParam1, 0);
		
		case joaat("WEAPON_MOLOTOV"):
			return func_32(491, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN"):
			return func_32(413, iParam1, 0);
		
		case joaat("WEAPON_KNIFE"):
			return func_32(196, iParam1, 0);
		
		case joaat("WEAPON_NIGHTSTICK"):
			return func_32(204, iParam1, 0);
		
		case joaat("WEAPON_HAMMER"):
			return func_32(232, iParam1, 0);
		
		case joaat("WEAPON_BAT"):
			return func_32(239, iParam1, 0);
		
		case joaat("WEAPON_CROWBAR"):
			return func_32(211, iParam1, 0);
		
		case joaat("WEAPON_GOLFCLUB"):
			return func_32(246, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_32(272, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_32(312, iParam1, 0);
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_32(432, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_32(395, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTMG"):
			return func_32(367, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_32(322, iParam1, 0);
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_32(322, iParam1, 0);
		
		case joaat("WEAPON_RUBBERGUN"):
			return func_32(322, iParam1, 0);
		
		case joaat("WEAPON_BOTTLE"):
			return func_32(1732, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_32(1742, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_32(11912, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_32(11922, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_32(11902, iParam1, 0);
		
		case joaat("WEAPON_DAGGER"):
			return func_32(12189, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_32(12199, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_32(11932, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_32(12219, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_32(12209, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_32(12297, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_32(12307, iParam1, 0);
		
		case joaat("WEAPON_PROXMINE"):
			return func_32(12325, iParam1, 0);
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_32(12333, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_32(12341, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_32(12358, iParam1, 0);
		
		case joaat("WEAPON_KNUCKLE"):
			return func_32(12351, iParam1, 0);
		
		case joaat("WEAPON_MACHETE"):
			return func_32(12368, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_32(12376, iParam1, 0);
		
		case joaat("WEAPON_FLASHLIGHT"):
			return func_32(12414, iParam1, 0);
		
		case joaat("WEAPON_SWITCHBLADE"):
			return func_32(12442, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_32(12432, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_32(12404, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_32(12394, iParam1, 0);
		
		case joaat("WEAPON_HATCHET"):
			return func_32(12317, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_32(12483, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_32(12493, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_32(12499, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_32(12509, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_32(12519, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_32(12527, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_32(225, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_32(252, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_32(302, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_32(432, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_32(358, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_32(322, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_32(331, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_32(12991, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_32(13011, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_32(13001, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_32(13021, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_32(13041, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_32(13051, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_32(13031, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_32(13254, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_32(13411, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_32(13421, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_32(13431, iParam1, 0);
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_32(13862, iParam1, 0);
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_32(13852, iParam1, 0);
		
		case joaat("WEAPON_GADGETPISTOL"):
			return func_32(14012, iParam1, 0);
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return func_32(14022, iParam1, 0);
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return func_32(14002, iParam1, 0);
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return func_32(14053, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN_MP"):
			return func_32(14075, iParam1, 0);
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return func_32(14153, iParam1, 0);
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return func_32(14143, iParam1, 0);
		
		case joaat("WEAPON_PISTOLXM3"):
			return func_32(14163, iParam1, 0);
		
		case joaat("WEAPON_CANDYCANE"):
			return func_32(14173, iParam1, 0);
		
		case joaat("WEAPON_RAILGUNXM3"):
			return func_32(14183, iParam1, 0);
		
		default:
	}
	return 0;
}

int func_133(int iParam0, int iParam1)//Position - 0xD4CB
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return func_32(251, iParam1, 0);
		
		case joaat("WEAPON_COMBATPISTOL"):
			return func_32(261, iParam1, 0);
		
		case joaat("WEAPON_APPISTOL"):
			return func_32(281, iParam1, 0);
		
		case joaat("WEAPON_MICROSMG"):
			return func_32(291, iParam1, 0);
		
		case joaat("WEAPON_SMG"):
			return func_32(301, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return func_32(321, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE"):
			return func_32(330, iParam1, 0);
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return func_32(339, iParam1, 0);
		
		case joaat("WEAPON_MG"):
			return func_32(348, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG"):
			return func_32(357, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return func_32(375, iParam1, 0);
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return func_32(384, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return func_32(403, iParam1, 0);
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return func_32(422, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return func_32(431, iParam1, 0);
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return func_32(442, iParam1, 0);
		
		case joaat("WEAPON_RPG"):
			return func_32(449, iParam1, 0);
		
		case joaat("WEAPON_MINIGUN"):
			return func_32(456, iParam1, 0);
		
		case joaat("WEAPON_GRENADE"):
			return func_32(465, iParam1, 0);
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return func_32(473, iParam1, 0);
		
		case joaat("WEAPON_STICKYBOMB"):
			return func_32(482, iParam1, 0);
		
		case joaat("WEAPON_MOLOTOV"):
			return func_32(490, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN"):
			return func_32(412, iParam1, 0);
		
		case joaat("WEAPON_KNIFE"):
			return func_32(194, iParam1, 0);
		
		case joaat("WEAPON_NIGHTSTICK"):
			return func_32(202, iParam1, 0);
		
		case joaat("WEAPON_HAMMER"):
			return func_32(230, iParam1, 0);
		
		case joaat("WEAPON_BAT"):
			return func_32(237, iParam1, 0);
		
		case joaat("WEAPON_CROWBAR"):
			return func_32(209, iParam1, 0);
		
		case joaat("WEAPON_GOLFCLUB"):
			return func_32(244, iParam1, 0);
		
		case joaat("WEAPON_PISTOL50"):
			return func_32(271, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSMG"):
			return func_32(311, iParam1, 0);
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return func_32(431, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return func_32(394, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTMG"):
			return func_32(366, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return func_32(321, iParam1, 0);
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return func_32(321, iParam1, 0);
		
		case joaat("WEAPON_RUBBERGUN"):
			return func_32(321, iParam1, 0);
		
		case joaat("WEAPON_BOTTLE"):
			return func_32(1731, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL"):
			return func_32(1741, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return func_32(11911, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return func_32(11921, iParam1, 0);
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return func_32(11901, iParam1, 0);
		
		case joaat("WEAPON_DAGGER"):
			return func_32(12188, iParam1, 0);
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return func_32(12198, iParam1, 0);
		
		case joaat("WEAPON_GUSENBERG"):
			return func_32(11931, iParam1, 0);
		
		case joaat("WEAPON_MUSKET"):
			return func_32(12218, iParam1, 0);
		
		case joaat("WEAPON_FIREWORK"):
			return func_32(12208, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return func_32(12296, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return func_32(12306, iParam1, 0);
		
		case joaat("WEAPON_PROXMINE"):
			return func_32(12324, iParam1, 0);
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return func_32(12332, iParam1, 0);
		
		case joaat("WEAPON_COMBATPDW"):
			return func_32(12340, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return func_32(12357, iParam1, 0);
		
		case joaat("WEAPON_KNUCKLE"):
			return func_32(12350, iParam1, 0);
		
		case joaat("WEAPON_MACHETE"):
			return func_32(12367, iParam1, 0);
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return func_32(12375, iParam1, 0);
		
		case joaat("WEAPON_FLASHLIGHT"):
			return func_32(12413, iParam1, 0);
		
		case joaat("WEAPON_SWITCHBLADE"):
			return func_32(12441, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER"):
			return func_32(12431, iParam1, 0);
		
		case joaat("WEAPON_DBSHOTGUN"):
			return func_32(12403, iParam1, 0);
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return func_32(12393, iParam1, 0);
		
		case joaat("WEAPON_HATCHET"):
			return func_32(12316, iParam1, 0);
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return func_32(12482, iParam1, 0);
		
		case joaat("WEAPON_BATTLEAXE"):
			return func_32(12492, iParam1, 0);
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return func_32(12498, iParam1, 0);
		
		case joaat("WEAPON_MINISMG"):
			return func_32(12508, iParam1, 0);
		
		case joaat("WEAPON_PIPEBOMB"):
			return func_32(12518, iParam1, 0);
		
		case joaat("WEAPON_POOLCUE"):
			return func_32(12526, iParam1, 0);
		
		case joaat("WEAPON_WRENCH"):
			return func_32(223, iParam1, 0);
		
		case joaat("WEAPON_PISTOL_MK2"):
			return func_32(251, iParam1, 0);
		
		case joaat("WEAPON_SMG_MK2"):
			return func_32(301, iParam1, 0);
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return func_32(431, iParam1, 0);
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return func_32(357, iParam1, 0);
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return func_32(321, iParam1, 0);
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return func_32(330, iParam1, 0);
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return func_32(12990, iParam1, 0);
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return func_32(13010, iParam1, 0);
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return func_32(13000, iParam1, 0);
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return func_32(13020, iParam1, 0);
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return func_32(13040, iParam1, 0);
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return func_32(13050, iParam1, 0);
		
		case joaat("WEAPON_DOUBLEACTION"):
			return func_32(13030, iParam1, 0);
		
		case joaat("WEAPON_STONE_HATCHET"):
			return func_32(13253, iParam1, 0);
		
		case joaat("WEAPON_RAYPISTOL"):
			return func_32(13410, iParam1, 0);
		
		case joaat("WEAPON_RAYCARBINE"):
			return func_32(13420, iParam1, 0);
		
		case joaat("WEAPON_RAYMINIGUN"):
			return func_32(13430, iParam1, 0);
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return func_32(13861, iParam1, 0);
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return func_32(13851, iParam1, 0);
		
		case joaat("WEAPON_GADGETPISTOL"):
			return func_32(14011, iParam1, 0);
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return func_32(14021, iParam1, 0);
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return func_32(14001, iParam1, 0);
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return func_32(14001, iParam1, 0);
		
		case joaat("WEAPON_STUNGUN_MP"):
			return func_32(14074, iParam1, 0);
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return func_32(14152, iParam1, 0);
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return func_32(14142, iParam1, 0);
		
		case joaat("WEAPON_PISTOLXM3"):
			return func_32(14162, iParam1, 0);
		
		case joaat("WEAPON_CANDYCANE"):
			return func_32(14172, iParam1, 0);
		
		case joaat("WEAPON_RAILGUNXM3"):
			return func_32(14182, iParam1, 0);
		
		default:
	}
	return 0;
}

float func_134(int iParam0)//Position - 0xDC18
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			iVar0 = 263;
			iVar1 = 264;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			iVar0 = 283;
			iVar1 = 284;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			iVar0 = 293;
			iVar1 = 294;
			break;
		
		case joaat("WEAPON_SMG"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			iVar0 = 323;
			iVar1 = 324;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			iVar0 = 332;
			iVar1 = 333;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			iVar0 = 11913;
			iVar1 = 11914;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			iVar0 = 1743;
			iVar1 = 1744;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar0 = 341;
			iVar1 = 342;
			break;
		
		case joaat("WEAPON_MG"):
			iVar0 = 350;
			iVar1 = 351;
			break;
		
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_COMBATMG_MK2"):
			iVar0 = 359;
			iVar1 = 360;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar0 = 386;
			iVar1 = 387;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar0 = 377;
			iVar1 = 378;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar0 = 405;
			iVar1 = 406;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			iVar0 = 424;
			iVar1 = 425;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			iVar0 = 433;
			iVar1 = 434;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			iVar0 = 444;
			iVar1 = 442;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			iVar0 = 458;
			iVar1 = 459;
			break;
		
		case joaat("WEAPON_RPG"):
			iVar0 = 451;
			iVar1 = 449;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			iVar0 = 396;
			iVar1 = 397;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			iVar0 = 313;
			iVar1 = 314;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			iVar0 = 273;
			iVar1 = 274;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			iVar0 = 11903;
			iVar1 = 11904;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			iVar0 = 11923;
			iVar1 = 11924;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			iVar0 = 11933;
			iVar1 = 11934;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			iVar0 = 12200;
			iVar1 = 12201;
			break;
		
		case joaat("WEAPON_MUSKET"):
			iVar0 = 12220;
			iVar1 = 12221;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			iVar0 = 12210;
			iVar1 = 12211;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			iVar0 = 11953;
			iVar1 = 11954;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			iVar0 = 12298;
			iVar1 = 12299;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			iVar0 = 12308;
			iVar1 = 12309;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			iVar0 = 12334;
			iVar1 = 12332;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			iVar0 = 12326;
			iVar1 = 12324;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			iVar0 = 12342;
			iVar1 = 12343;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			iVar0 = 12359;
			iVar1 = 12360;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			iVar0 = 12377;
			iVar1 = 12378;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			iVar0 = 12395;
			iVar1 = 12396;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			iVar0 = 12405;
			iVar1 = 12406;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			iVar0 = 12433;
			iVar1 = 12434;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			iVar0 = 12484;
			iVar1 = 12485;
			break;
		
		case joaat("WEAPON_MINISMG"):
			iVar0 = 12510;
			iVar1 = 12511;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			iVar0 = 12500;
			iVar1 = 12498;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			iVar0 = 13032;
			iVar1 = 13033;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			iVar1 = 12990;
			iVar0 = 12992;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			iVar1 = 13010;
			iVar0 = 13012;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			iVar1 = 13000;
			iVar0 = 13002;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			iVar1 = 13020;
			iVar0 = 13022;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			iVar1 = 13040;
			iVar0 = 13042;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			iVar1 = 13050;
			iVar0 = 13052;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			iVar0 = 13422;
			iVar1 = 13423;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			iVar0 = 13432;
			iVar1 = 13433;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			iVar0 = 13412;
			iVar1 = 13413;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			iVar0 = 13863;
			iVar1 = 13864;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			iVar0 = 13853;
			iVar1 = 13854;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			iVar0 = 14003;
			iVar1 = 14004;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			iVar0 = 14013;
			iVar1 = 14014;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			iVar0 = 14023;
			iVar1 = 14024;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			iVar0 = 14064;
			iVar1 = 14065;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			iVar0 = 14054;
			iVar1 = 14055;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			iVar0 = 14076;
			iVar1 = 14077;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			iVar0 = 14144;
			iVar1 = 14145;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			iVar0 = 14154;
			iVar1 = 14155;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			iVar0 = 14164;
			iVar1 = 14165;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			iVar0 = 14174;
			iVar1 = 14175;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			iVar0 = 14184;
			iVar1 = 14185;
			break;
	}
	if ((func_136(iParam0) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || func_135(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_32(iVar0, -1, 0));
		fVar3 = SYSTEM::TO_FLOAT(func_32(iVar1, -1, 0));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_135(int iParam0)//Position - 0xE1C1
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_136(int iParam0)//Position - 0xE203
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
		
		default:
	}
	return 0;
}

char* func_137(int iParam0, bool bParam1)//Position - 0xE277
{
	struct<16> Var0;
	struct<16> Var39;
	struct<16> Var78;
	struct<16> Var117;
	
	if (func_139(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("WEAPON_MARKSMANRIFLE"):
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
					{
						return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
					}
				}
				return "WTDE2_MKRIFLE" /* GXT: Whether you're up close or a disconcertingly long way away, this weapon will get the job done. A multi-range tool for tools. Part of the Last Team Standing Update. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			
			case joaat("WEAPON_COMPACTRIFLE"):
				return "WTDE2_CMPRIFLE" /* GXT: Half the size, all the power, double the recoil: there's no riskier way to say "I'm compensating for something". Part of Lowriders: Custom Classics. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			
			case joaat("WEAPON_COMPACTLAUNCHER"):
				return "WTDE2_CMPGL" /* GXT: Focus groups using the regular model suggested it was too accurate and found it awkward to use with one hand on the throttle. Easy fix. Part of Bikers. This item is permanently free as part of the Criminal Enterprise Starter Pack. */;
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("WEAPON_UNARMED"):
			return "";
			break;
		
		case joaat("WEAPON_PISTOL"):
			return "WT_PIST_DESC" /* GXT: Standard handgun. A .45 caliber pistol with a magazine capacity of 12 rounds that can be extended to 16. */;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTD_PIST_CBT" /* GXT: A compact, lightweight, semi-automatic pistol designed for law enforcement and personal defense. 12-round magazine with option to extend to 16 rounds. */;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return "WTD_PIST_AP" /* GXT: High-penetration, fully-automatic pistol. Holds 18 rounds in magazine with option to extend to 36 rounds. */;
			break;
		
		case joaat("WEAPON_SMG"):
			return "WTD_SMG" /* GXT: This is known as a good all-round submachine gun. Lightweight with an accurate sight and 30-round magazine capacity. */;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return "WTD_SMG_MCR" /* GXT: Combines compact design with a high rate of fire at approximately 700-900 rounds per minute. */;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTD_RIFLE_ASL" /* GXT: This standard assault rifle boasts a large capacity magazine and long distance accuracy. */;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTD_RIFLE_CBN" /* GXT: Combining long distance accuracy with a high-capacity magazine, the carbine rifle can be relied on to make the hit. */;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTD_RIFLE_ADV" /* GXT: The most lightweight and compact of all assault rifles, without compromising accuracy and rate of fire. */;
			break;
		
		case joaat("WEAPON_MG"):
			return "WTD_MG" /* GXT: General purpose machine gun that combines rugged design with dependable performance. Long range penetrative power. Very effective against large groups. */;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return "WTD_MG_CBT" /* GXT: Lightweight, compact machine gun that combines excellent maneuverability with a high rate of fire to devastating effect. */;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTD_SG_PMP" /* GXT: Standard shotgun ideal for short-range combat. A high-projectile spread makes up for its lower accuracy at long range. */;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTD_SG_SOF" /* GXT: This single-barrel, sawed-off shotgun compensates for its low range and ammo capacity with devastating efficiency in close combat. */;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTD_SG_ASL" /* GXT: Fully automatic shotgun with 8 round magazine and high rate of fire. */;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTD_SNIP_HVY" /* GXT: Features armor-piercing rounds for heavy damage. Comes with laser scope as standard. */;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTD_SNIP_RMT" /* GXT: Remote controlled sniper system. */;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTD_SNIP_RIF" /* GXT: Standard sniper rifle. Ideal for situations that require accuracy at long range. Limitations include slow reload speed and very low rate of fire. */;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTD_GL" /* GXT: A compact, lightweight grenade launcher with semi-automatic functionality. Holds up to 10 rounds. */;
			break;
		
		case joaat("WEAPON_RPG"):
			return "WTD_RPG" /* GXT: A portable, shoulder-launched, anti-tank weapon that fires explosive warheads. Very effective for taking down vehicles or large groups of assailants. */;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return "WTD_MINIGUN" /* GXT: A devastating 6-barrel machine gun that features Gatling-style rotating barrels. Very high rate of fire (2000 to 6000 rounds per minute). */;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return "WTD_GNADE" /* GXT: Standard fragmentation grenade. Pull pin, throw, then find cover. Ideal for eliminating clustered assailants. */;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return "WTD_GNADE_SMK" /* GXT: Tear gas grenade, particularly effective at incapacitating multiple assailants. Sustained exposure can be lethal. */;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return "WTD_GNADE_STK" /* GXT: A plastic explosive charge fitted with a remote detonator. Can be thrown and then detonated or attached to a vehicle then detonated. */;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return "WTD_MOLOTOV" /* GXT: Crude yet highly effective incendiary weapon. No happy hour with this cocktail. */;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return "WTD_STUN" /* GXT: Fires a projectile that administers a voltage capable of temporarily stunning an assailant. Takes approximately 4 seconds to recharge after firing. */;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return "WTD_PETROL" /* GXT: Leaves a trail of gasoline that can be ignited. */;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return "WTD_DIGI" /* GXT: Used to scan vehicle number plates. */;
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			return "";
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("OBJECT"):
			return "";
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return "WTD_PARA" /* GXT: This nylon sports parachute features a ram-air parafoil design for increased control over direction and speed. */;
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("WEAPON_KNIFE"):
			return "WTD_KNIFE" /* GXT: This carbon steel 7" bladed knife is dual edged with a serrated spine to provide improved stabbing and thrusting capabilities. */;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return "WTD_NGTSTK" /* GXT: 24" polycarbonate side-handled nightstick. */;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return "WTD_HAMMER" /* GXT: A robust, multi-purpose hammer with wooden handle and curved claw, this old classic still nails the competition. */;
			break;
		
		case joaat("WEAPON_BAT"):
			return "WTD_BAT" /* GXT: Aluminum baseball bat with leather grip. Lightweight yet powerful for all you big hitters out there. */;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return "WTD_CROWBAR" /* GXT: Heavy-duty crowbar forged from high quality, tempered steel for that extra leverage you need to get the job done. */;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return "WTD_GOLFCLUB" /* GXT: Standard length, mid iron golf club with rubber grip for a lethal short game. */;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return "WTD_DLC_HATCHET" /* GXT: Make kindling... of your pals with this easy to wield, easy to hide hatchet. */;
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			return "";
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			return "";
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTD_SMG_ASL" /* GXT: A high-capacity submachine gun that is both compact and lightweight. Holds up to 30 bullets in one magazine. */;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTD_SG_BLP" /* GXT: More than makes up for its slow, pump-action rate of fire with its range and spread.  Decimates anything in its projectile path. */;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return "WTD_PIST_50" /* GXT: High-impact pistol that delivers immense power but with extremely strong recoil. Holds 9 rounds in magazine. */;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTD_VPISTOL" /* GXT: What you really need is a more recognizable gun. Stand out from the crowd at an armed robbery with this engraved pistol. Part of The "I'm Not a Hipster" Update. */;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return "WTD_DAGGER" /* GXT: You've been rocking the pirate-chic look for a while, but no vicious weapon to complete the look? Get this dagger with guarded hilt. Part of The "I'm Not a Hipster" Update. */;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return "WTD_PRXMINE" /* GXT: Leave a present for your friends with these motion sensor landmines. Short delay after activation. Part of the Festive Surprise. */;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTD_HOMLNCH" /* GXT: Infrared guided fire-and-forget missile launcher. For all your moving target needs. Part of the Festive Surprise. */;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return "WTD_MACHETE" /* GXT: America's West African arms trade isn't just about giving. Rediscover the simple life with this rusty cleaver. Part of Lowriders. */;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTD_MCHPIST" /* GXT: This fully automatic is the snare drum to your twin-engine V8 bass: no drive-by sounds quite right without it. Part of Lowriders. */;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTD_FLASHLIGHT" /* GXT: Intensify your fear of the dark with this short range, battery-powered light source. Handy for blunt force trauma. Part of The Halloween Surprise. */;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTD_DBSHGN" /* GXT: Do one thing, do it well. Who needs a high rate of fire when your first shot turns the other guy into a fine mist? Part of Lowriders: Custom Classics. */;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTD_CMPRIFLE" /* GXT: Half the size, all the power, double the recoil: there's no riskier way to say "I'm compensating for something". Part of Lowriders: Custom Classics. */;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTD_SWBLADE" /* GXT: From your pocket to hilt-deep in the other guy's ribs in under a second: folding knives will never go out of style. Part of Executives and Other Criminals. */;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return "WTD_REVOLVER" /* GXT: A handgun with enough stopping power to drop a crazed rhino, and heavy enough to beat it to death if you're out of ammo. Part of Executives and Other Criminals. */;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (func_138(joaat("MPPLY_HEADSHOTCHLENGECOMPLETED")) || bParam1)
			{
				return "WTD_REV_DA" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Part of The Doomsday Heist. */;
			}
			else if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				return "WTD_REV_DA_2" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Get 50 headshots with the Double-Action Revolver to unlock a GTA$ reward and an exclusive variation of the revolver in Red Dead Redemption 2. */;
			}
			else
			{
				return "WTD_REV_DA_3" /* GXT: Because sometimes revenge is a dish best served six times, in quick succession, right between the eyes. Sign up to the Rockstar Games Social Club to get access to the Double-Action Revolver headshot challenge. Beating this challenge will unlock a GTA$ reward and an exclusive variation of the weapon in Red Dead Redemption 2. Sign up now at socialclub.rockstargames.com and link your account. */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (func_26(iParam0, &Var0) != -1)
			{
				return func_25(&(Var0.f_15));
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (func_26(iParam0, &Var39) != -1)
			{
				return func_25(&(Var39.f_15));
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE_MK2"), false))
				{
					return "WCD_MK1_LOCK" /* GXT: Revert to the stock variant to customize this weapon. */;
				}
			}
			if (func_26(iParam0, &Var78) != -1)
			{
				return func_25(&(Var78.f_15));
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return "WTD_RAYPISTOL" /* GXT: Republican Space Ranger Special, fresh from the galactic war on socialism: no ammo, no mag, just one brutal energy pulse after another. */;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return "WTD_RAYCARBINE" /* GXT: Republican Space Ranger Special. If you want to turn a little green man into little green goo, this is the only American way to do it. */;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return "WTD_RAYMINIGUN" /* GXT: Republican Space Ranger Special. GO AHEAD, SAY I'M COMPENSATING FOR SOMETHING. I DARE YOU. */;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return "WTD_REV_NV" /* GXT: A true museum piece. You want to know how the West was won - slow reload speeds and a whole heap of bloodshed. */;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return "WTD_CERPST" /* GXT: Not your grandma's ceramics. Although this pint-sized pistol is small enough to fit into her purse and won't set off a metal detector. */;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return "WTD_MLTRYRFL" /* GXT: This immensely powerful assault rifle was designed for highly qualified, exceptionally skilled soldiers. Yes, you can buy it. */;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return "WTD_GDGTPST" /* GXT: A deadly shot. Don't be precious. You won't scuff the titanium nitride finish. */;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return "WTD_CMBSHGN" /* GXT: There's only one semi-automatic shotgun with a fire rate that sets the LSFD alarm bells ringing, and you're looking at it. */;
			break;
		
		default:
			if (func_26(iParam0, &Var117) != -1)
			{
				return func_25(&(Var117.f_15));
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

int func_138(int iParam0)//Position - 0xE86A
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0xE888
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_140())
		{
			if ((iParam0 == joaat("WEAPON_MARKSMANRIFLE") || iParam0 == joaat("WEAPON_COMPACTRIFLE")) || iParam0 == joaat("WEAPON_COMPACTLAUNCHER"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_140()//Position - 0xE8CA
{
	return (func_142() || func_141());
}

int func_141()//Position - 0xE8E0
{
	switch (NETWORK::GET_USER_STARTER_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_142()//Position - 0xE90E
{
	switch (NETWORK::GET_USER_PREMIUM_ACCESS())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_143()//Position - 0xE93C
{
	return Global_1574918;
}

int func_144(int iParam0, int iParam1)//Position - 0xE948
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1653913.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1653913.f_1048, iParam0);
}

void func_145()//Position - 0xE980
{
	func_146(0, -1, -1, 0, 0);
}

void func_146(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0xE991
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_18("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_147(var uParam0, var uParam1)//Position - 0xE9EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_149();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_64 + 1;
	func_146(0, iVar2, iVar3, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

int func_148(int iParam0)//Position - 0xEA45
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = iParam0;
	iVar1 = func_36(iVar0);
	bVar2 = func_28(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0)) || func_6(iParam0, &(Global_1653913.f_1060), 1))
	{
		if (!BitTest(Global_1653913.f_1049[iVar1], bVar2))
		{
			MISC::SET_BIT(&(Global_1653913.f_1049[iVar1]), bVar2);
			return 1;
		}
	}
	else if (BitTest(Global_1653913.f_1049[iVar1], bVar2))
	{
		MISC::CLEAR_BIT(&(Global_1653913.f_1049[iVar1]), bVar2);
	}
	return 0;
}

void func_149()//Position - 0xEAD9
{
	iLocal_65 = 0;
	iLocal_64 = 3;
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HAMMER")))
	{
		iLocal_66[10] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[10] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL50")))
	{
		iLocal_66[0] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPSHOTGUN")))
	{
		iLocal_66[1] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[1] = -1;
	}
	if (func_105(1, 0))
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SAWNOFFSHOTGUN")))
		{
			iLocal_66[2] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[2] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BOTTLE")))
	{
		iLocal_66[3] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[3] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL")))
	{
		iLocal_66[4] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[4] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GUSENBERG")))
	{
		iLocal_66[11] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[11] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYPISTOL")))
	{
		iLocal_66[7] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[7] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE")))
	{
		iLocal_66[5] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[5] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE")))
	{
		iLocal_66[6] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[6] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DAGGER")))
	{
		iLocal_66[8] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[8] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_VINTAGEPISTOL")))
	{
		iLocal_66[9] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[9] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FIREWORK")))
	{
		iLocal_66[14] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[14] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MUSKET")))
	{
		iLocal_66[13] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[13] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSHOTGUN")))
	{
		iLocal_66[15] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[15] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE")))
	{
		iLocal_66[16] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[16] = -1;
	}
	if (func_104() || Global_262145.f_20224 /* Tunable: ENABLE_RETURNING_CONTENT_WEAPON */)
	{
		if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HATCHET")))
		{
			iLocal_66[22] = ((iLocal_65 / 9) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[22] = -1;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HOMINGLAUNCHER")))
	{
		iLocal_66[18] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[18] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PROXMINE")))
	{
		iLocal_66[17] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[17] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLAREGUN")))
	{
		iLocal_66[12] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[12] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATPDW")))
	{
		iLocal_66[19] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[19] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANPISTOL")))
	{
		iLocal_66[20] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[20] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_KNUCKLE")))
	{
		iLocal_66[21] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[21] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHETE")))
	{
		iLocal_66[23] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[23] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MACHINEPISTOL")))
	{
		iLocal_66[24] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[24] = -1;
	}
	if (Global_262145.f_12052 /* Tunable: TURN_ON_HALLOWEEN_WEAPONS */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_FLASHLIGHT")))
	{
		iLocal_66[25] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[25] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER")))
	{
		iLocal_66[26] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[26] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SWITCHBLADE")))
	{
		iLocal_66[27] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[27] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DBSHOTGUN")))
	{
		iLocal_66[28] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[28] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTRIFLE")))
	{
		iLocal_66[29] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[29] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_AUTOSHOTGUN")))
	{
		iLocal_66[30] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[30] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BATTLEAXE")))
	{
		iLocal_66[31] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[31] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMPACTLAUNCHER")))
	{
		iLocal_66[32] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[32] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MINISMG")))
	{
		iLocal_66[33] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[33] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PIPEBOMB")))
	{
		iLocal_66[34] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[34] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_POOLCUE")))
	{
		iLocal_66[35] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[35] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_WRENCH")))
	{
		iLocal_66[36] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[36] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_ASSAULTRIFLE_MK2")))
	{
		iLocal_66[37] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[37] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CARBINERIFLE_MK2")))
	{
		iLocal_66[38] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[38] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATMG_MK2")))
	{
		iLocal_66[39] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[39] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYSNIPER_MK2")))
	{
		iLocal_66[40] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[40] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOL_MK2")))
	{
		iLocal_66[41] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[41] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SMG_MK2")))
	{
		iLocal_66[42] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[42] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_BULLPUPRIFLE_MK2")))
	{
		iLocal_66[43] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[43] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MARKSMANRIFLE_MK2")))
	{
		iLocal_66[44] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[44] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PUMPSHOTGUN_MK2")))
	{
		iLocal_66[45] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[45] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_REVOLVER_MK2")))
	{
		iLocal_66[46] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[46] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SNSPISTOL_MK2")))
	{
		iLocal_66[47] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[47] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_SPECIALCARBINE_MK2")))
	{
		iLocal_66[48] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[48] = -1;
	}
	if ((Global_262145.f_23444 /* Tunable: ENABLE_TREASURE_HUNT */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_DOUBLEACTION"))) && (func_103() || Global_1968316))
	{
		iLocal_66[49] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[49] = -1;
	}
	if ((Global_262145.f_24143 /* Tunable: -585985361 */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STONE_HATCHET"))) && func_101())
	{
		iLocal_66[50] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[50] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYCARBINE")) && Global_262145.f_26760 /* Tunable: ENABLE_AW_HELLBRINGER */)
	{
		iLocal_66[51] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[51] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYMINIGUN")) && Global_262145.f_26759 /* Tunable: ENABLE_AW_WIDOWMAKER */)
	{
		iLocal_66[52] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[52] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAYPISTOL")) && (((func_17(25007, -1) || func_17(25002, -1)) || func_88(joaat("WEAPON_RAYPISTOL"), -1, 0)) || Global_262145.f_25768 /* Tunable: ENABLE_AW_RAYGUN */))
	{
		iLocal_66[53] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[53] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CERAMICPISTOL")))
	{
		iLocal_66[54] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[54] = -1;
	}
	if ((Global_262145.f_28384 /* Tunable: ENABLE_SERIAL_KILLER */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER"))) && (func_100() || Global_1968322))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_MILITARYRIFLE")))
	{
		iLocal_66[56] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[56] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_COMBATSHOTGUN")) && func_17(30632, -1))
	{
		iLocal_66[57] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[57] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_GADGETPISTOL")) && func_99(106, -1))
	{
		iLocal_66[58] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[58] = -1;
	}
	if ((Global_262145.f_28384 /* Tunable: ENABLE_SERIAL_KILLER */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_NAVYREVOLVER"))) && (func_100() || Global_1968322))
	{
		iLocal_66[55] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[55] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_EMPLAUNCHER")))
	{
		iLocal_66[59] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[59] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_STUNGUN_MP")))
	{
		iLocal_66[60] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[60] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_HEAVYRIFLE")))
	{
		iLocal_66[61] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[61] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_TACTICALRIFLE")) && (((Global_262145.f_32865 /* Tunable: UNLOCK_SERVICE_CARBINE_FOR_PURCHASE */ || func_88(joaat("WEAPON_TACTICALRIFLE"), -1, 0)) || func_37(func_91(joaat("WEAPON_TACTICALRIFLE")), -1)) || func_97(joaat("WEAPON_TACTICALRIFLE"))))
	{
		iLocal_66[62] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[62] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PRECISIONRIFLE")))
	{
		iLocal_66[63] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[63] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_PISTOLXM3")) && (func_88(joaat("WEAPON_PISTOLXM3"), -1, 0) || func_27(joaat("WEAPON_PISTOLXM3"), -1)))
	{
		iLocal_66[64] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[64] = -1;
	}
	if (WEAPON::IS_WEAPON_VALID(joaat("WEAPON_CANDYCANE")) && (func_88(joaat("WEAPON_CANDYCANE"), -1, 0) || func_27(joaat("WEAPON_CANDYCANE"), -1)))
	{
		iLocal_66[65] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[65] = -1;
	}
	if (Global_262145.f_33799 /* Tunable: XM22_GUN_VAN_AVAILABLE */ && WEAPON::IS_WEAPON_VALID(joaat("WEAPON_RAILGUNXM3")))
	{
		iLocal_66[67] = ((iLocal_65 / 9) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[67] = -1;
	}
	if (iLocal_65 == 0)
	{
		iLocal_64 = 2;
		iLocal_65 = 9;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 9));
		iLocal_65 = (iLocal_65 - (9 * (iLocal_65 / 9)));
		if (iLocal_65 == 0)
		{
			iLocal_64 = (iLocal_64 - 1);
			iLocal_65 = 9;
		}
	}
}

void func_150(int iParam0, var uParam1)//Position - 0xF7CD
{
	uParam1->f_277 = iParam0;
}

void func_151()//Position - 0xF7DC
{
	func_149();
	func_152();
	func_146(0, 1, iLocal_64 + 1, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

void func_152()//Position - 0xF7FB
{
	func_153(1);
}

void func_153(bool bParam0)//Position - 0xF808
{
	if (bParam0)
	{
		func_154(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_154(0, 2, 0, 2, 1, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xF82C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_155(var uParam0)//Position - 0xF86F
{
	uParam0->f_284 = 1;
}

void func_156(var uParam0)//Position - 0xF87D
{
	uParam0->f_283 = 1;
}

void func_157(var uParam0)//Position - 0xF88B
{
	func_158(uParam0);
	uParam0->f_281 = 1;
}

void func_158(var uParam0)//Position - 0xF89F
{
	*uParam0 = { Global_1651977 };
}

int func_159()//Position - 0xF8B5
{
	return Global_32163;
}

