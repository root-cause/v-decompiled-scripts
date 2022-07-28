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
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 17;
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
	var uLocal_86 = 17;
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
	var uLocal_99 = 0;
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
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(995898030);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1433313072);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1096198329);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(696733436);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(831272562);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageLeft"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageRight"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1770673475);
		HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
		Global_1574599 = 0;
		STATS::_PLAYSTATS_AWARDS_NAV(Global_1646672.f_471, Global_1646672.f_472);
		Global_1646672.f_471 = 0;
		Global_1646672.f_472 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	iVar0 = 0;
	iVar1 = 1;
	Global_1643950.f_1 = 0;
	Global_1643950.f_3 = 0;
	Global_1643950.f_5 = 0;
	Global_1643950.f_7 = 0;
	Global_1643950.f_6 = 0;
	func_146(&Global_1647601);
	func_145(0, &Global_1647601);
	func_144(&Global_1647601);
	func_142(&Global_1646672);
	func_141(-1, &Global_1646672);
	func_140(&Global_1646672);
	func_139(&Global_1646672);
	func_135();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iScriptParam_114)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar1 == 1)
				{
					if (iVar2 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1643950.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iVar2 = 1;
						}
					}
				}
				if (Global_1646672.f_469 == 0 && Global_1646672.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						if (iVar1 == 0)
						{
							iVar1 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1884422346);
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
							func_145(Global_1643950.f_6, &Global_1647601);
							func_144(&Global_1647601);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_134();
						}
						else
						{
							switch (Global_1643950.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1643950.f_7 = 1;
									func_133(&Global_1646672, &Global_1643950);
									func_141(func_132(&(Global_1643950.f_1), &(Global_1643950.f_3), Global_1643950.f_5, 188), &Global_1646672);
									func_140(&Global_1646672);
									func_139(&Global_1646672);
									func_123(&Global_1646672, &Global_1643950);
									break;
								}
							}
						}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					if (iVar1 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::RELEASE_CONTROL_OF_FRONTEND();
						iVar0 = 1;
					}
					else
					{
						switch (Global_1643950.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1643950.f_1 = 0;
								Global_1643950.f_3 = 0;
								func_145(-1, &Global_1647601);
								func_144(&Global_1647601);
								func_134();
								iVar1 = 0;
								break;
							
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								func_141(-1, &Global_1646672);
								func_140(&Global_1646672);
								func_139(&Global_1646672);
								func_134();
								Global_1643950.f_7 = 0;
								break;
							}
						}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", false);
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
				{
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
				}
				func_15(&Global_1643950);
				if (iVar1 == 1)
				{
					func_2(&Global_1646672, &Global_1643950, &uLocal_112);
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
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar3);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar4);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	Global_1574599 = 0;
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
	STATS::_PLAYSTATS_AWARDS_NAV(Global_1646672.f_471, Global_1646672.f_472);
	Global_1646672.f_471 = 0;
	Global_1646672.f_472 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x4FD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_2(var uParam0, var uParam1, var uParam2)//Position - 0x516
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_14(uParam2) || (func_14(uParam2) && func_13(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 187) || func_12(187, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2, 188) || func_12(188, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 189) || PAD::IS_CONTROL_PRESSED(2, 241)) || func_12(189, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2, 190) || PAD::IS_CONTROL_PRESSED(2, 242)) || func_12(190, &(Global_1648034.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}
	if (BitTest(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = (uParam1->f_6 - 1);
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				if (func_9() == 0 || func_8() == 0)
				{
				}
				else if (uParam1->f_6 > 16)
				{
					uParam1->f_6 = 0;
				}
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 < 0)
						{
							uParam1->f_6 = 16;
						}
						break;
				}
				func_145(uParam1->f_6, &Global_1647601);
				func_144(&Global_1647601);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = (uParam1->f_3 - 1);
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_3 < 0)
						{
							uParam1->f_3 = 2;
						}
						break;
				}
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6++;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 > 16)
						{
							uParam1->f_6 = 0;
						}
						break;
				}
				func_145(uParam1->f_6, &Global_1647601);
				func_144(&Global_1647601);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3++;
				if (uParam1->f_3 > 2)
				{
					uParam1->f_3 = 0;
				}
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = (uParam1->f_1 - 1);
				if (uParam1->f_1 < 0)
				{
					if (iLocal_110 >= 1)
					{
						func_142(uParam0);
						func_1();
					}
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = (uParam1->f_5 - 1);
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_110;
						uParam1->f_1 = 3;
						iVar1 = (uParam1->f_1 + uParam1->f_3 * 4);
						if (iVar1 >= iLocal_111)
						{
							uParam1->f_1 = ((iLocal_111 - 1) % 4);
							uParam1->f_3 = ((iLocal_111 - 1) / 4);
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1++;
				iVar2 = (uParam1->f_1 + uParam1->f_3 * 4);
				if (uParam1->f_1 >= 4 || (uParam1->f_5 == iLocal_110 && iVar2 >= iLocal_111))
				{
					if (iLocal_110 >= 1)
					{
						func_142(uParam0);
						func_1();
					}
					uParam1->f_1 = 0;
					uParam1->f_5++;
					if (uParam1->f_5 > iLocal_110)
					{
						uParam1->f_5 = 0;
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_141(func_132(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_140(uParam0);
				func_139(uParam0);
				func_123(uParam0, uParam1);
				break;
			}
	}
	if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
	{
		HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&uVar3, &iVar4);
		switch (uParam1->f_7)
		{
			case 0:
				if (iVar4 == 0 || iVar4 == 1)
				{
					uParam1->f_7 = 1;
					if (HUD::_0xC8E1071177A23BE5(&iVar5, &uVar6, &uVar7))
					{
						Global_1643950.f_1 = (iVar5 % 4);
						Global_1643950.f_3 = (iVar5 / 4);
					}
				}
				break;
			}
	}
	if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
	{
		HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&uVar8, &iVar9, &iVar10);
		iVar11 = iVar9 + 1000;
		if (iVar11 >= 0)
		{
			if (iVar10 == 0)
			{
				uParam1->f_7 = 0;
				if (uParam1->f_6 != iVar11)
				{
					uParam1->f_6 = iVar11;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (iVar10 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = (iVar11 % 4);
				uParam1->f_3 = (iVar11 / 4);
			}
			else if (iVar10 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}
	if (uParam0->f_469 == 1)
	{
		if (func_4(&(uParam0->f_465), 500, 0))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_142(uParam0);
					func_133(uParam0, uParam1);
					func_141(-1, uParam0);
					func_140(uParam0);
					func_139(uParam0);
					func_3(0);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(1);
						func_134();
						uParam0->f_470 = 1;
					}
					break;
				}
			}
	}
}

void func_3(bool bParam0)//Position - 0xB61
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0xB71
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_11(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_11(uParam0);
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0xBDB
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

int func_6(var uParam0, bool bParam1)//Position - 0xC18
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()//Position - 0xC59
{
	return Global_1574918;
}

int func_8()//Position - 0xC65
{
	return Global_31960;
}

int func_9()//Position - 0xC70
{
	return Global_31959;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0xC7B
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

void func_11(var uParam0)//Position - 0xCC0
{
	uParam0->f_1 = 0;
}

int func_12(int iParam0, var uParam1, int iParam2)//Position - 0xCCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
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

int func_13(var uParam0, int iParam1, bool bParam2)//Position - 0xE30
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

bool func_14(var uParam0)//Position - 0xE8E
{
	return uParam0->f_1;
}

void func_15(var uParam0)//Position - 0xE9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
	{
		iVar0 = 1;
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
	{
		iVar1 = 1;
	}
	if (iVar2 == 1)
	{
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6")) && iVar0) && iVar1)
		{
			iVar4 = 9;
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_9035)
					{
						iLocal_110 = 25;
						iLocal_111 = 3;
					}
					else
					{
						iLocal_110 = 25;
						iLocal_111 = 7;
					}
					iVar3 = 0;
					if (!Global_262145.f_29728)
					{
						iVar3++;
					}
					if (Global_262145.f_24746)
					{
						iVar3++;
					}
					if (Global_262145.f_24747)
					{
						iVar3++;
					}
					if (Global_262145.f_24745)
					{
						iVar3++;
					}
					iLocal_111 = (iLocal_111 - iVar3);
					if (!Global_262145.f_30976)
					{
						iLocal_111 = (iLocal_111 - 5);
					}
					if (Global_262145.f_31050[0] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_31050[6] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (iLocal_111 < 1)
					{
						iLocal_110 = (iLocal_110 - 1);
						iLocal_111 += 12;
					}
					break;
				
				case 1:
					iLocal_110 = 2;
					iLocal_111 = 7;
					iLocal_110 = 2;
					iLocal_111 = 9;
					break;
				
				case 2:
					iLocal_110 = 2;
					iLocal_111 = 4;
					break;
				
				case 3:
					iLocal_110 = 0;
					iLocal_111 = 8;
					break;
				
				case 4:
					iLocal_110 = 0;
					iLocal_111 = 12;
					break;
				
				case 5:
					iLocal_110 = 1;
					iLocal_111 = 11;
					iLocal_110 = 2;
					iLocal_111 = 2;
					break;
				
				case 6:
					if ((func_122() || func_121()) || MISC::IS_PC_VERSION())
					{
						iLocal_110 = 1;
						iLocal_111 = 8;
					}
					else
					{
						iLocal_110 = 1;
						iLocal_111 = 7;
					}
					break;
				
				case 8:
					iLocal_110 = 0;
					iLocal_111 = 8;
					if (Global_262145.f_24259 == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24260 == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24261 == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_24262 == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (((Global_262145.f_24259 == 0 || Global_262145.f_24261 == 0) || Global_262145.f_24260 == 0) || Global_262145.f_24262 == 0)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					break;
				
				case 7:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
				
				case 9:
					iLocal_110 = 3;
					iLocal_111 = 4;
					break;
				
				case 10:
					iLocal_110 = 0;
					iLocal_111 = 11;
					break;
				
				case 11:
					iLocal_110 = 2;
					iLocal_111 = 12;
					break;
				
				case 12:
					iLocal_110 = 0;
					iLocal_111 = 6;
					break;
				
				case 13:
					iLocal_110 = 2;
					iLocal_111 = 2;
					iVar3 = 0;
					if (!Global_262145.f_29728)
					{
						iVar3++;
					}
					if (Global_262145.f_24746)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24747)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24745)
					{
						iVar3++;
					}
					iLocal_111 = (iLocal_111 - iVar3);
					if (iLocal_111 < 1)
					{
						iLocal_110 = (iLocal_110 - 1);
						iLocal_111 += 12;
					}
					break;
				
				case 14:
					iLocal_110 = 1;
					iLocal_111 = 12;
					if (!Global_262145.f_30976)
					{
						iLocal_111 = (iLocal_111 - 5);
					}
					if (Global_262145.f_31050[0] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					if (Global_262145.f_31050[6] == 0f)
					{
						iLocal_111 = (iLocal_111 - 1);
					}
					break;
				
				case 15:
					iLocal_110 = 1;
					iLocal_111 = 7;
					break;
				
				case 16:
					iLocal_110 = 4;
					iLocal_111 = 1;
					break;
			}
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(9, 8, iVar4, &Global_1646672);
							func_114(1, 8, iVar4, &Global_1646672);
							func_114(4, 8, iVar4, &Global_1646672);
							func_114(5, 8, iVar4, &Global_1646672);
							func_114(2, 8, iVar4, &Global_1646672);
							func_114(8, 8, iVar4, &Global_1646672);
							func_114(7, 8, iVar4, &Global_1646672);
							func_114(3, 8, iVar4, &Global_1646672);
							func_114(6, 8, iVar4, &Global_1646672);
							func_114(10, 8, iVar4, &Global_1646672);
							func_114(19, 8, iVar4, &Global_1646672);
							func_114(24, 8, iVar4, &Global_1646672);
							break;
						
						case 1:
							func_114(40, 8, iVar4, &Global_1646672);
							func_114(41, 8, iVar4, &Global_1646672);
							func_114(42, 8, iVar4, &Global_1646672);
							func_114(21, 8, iVar4, &Global_1646672);
							func_114(58, 8, iVar4, &Global_1646672);
							func_114(57, 8, iVar4, &Global_1646672);
							func_114(37, 8, iVar4, &Global_1646672);
							func_101(20, 8, iVar4, &Global_1646672);
							func_114(51, 8, iVar4, &Global_1646672);
							func_114(52, 8, iVar4, &Global_1646672);
							func_114(54, 8, iVar4, &Global_1646672);
							func_101(14, 8, iVar4, &Global_1646672);
							break;
						
						case 2:
							func_101(15, 8, iVar4, &Global_1646672);
							func_101(16, 8, iVar4, &Global_1646672);
							func_114(29, 8, iVar4, &Global_1646672);
							func_114(28, 8, iVar4, &Global_1646672);
							func_114(47, 8, iVar4, &Global_1646672);
							func_101(6, 8, iVar4, &Global_1646672);
							func_101(7, 8, iVar4, &Global_1646672);
							func_114(30, 8, iVar4, &Global_1646672);
							func_101(2, 8, iVar4, &Global_1646672);
							func_114(36, 8, iVar4, &Global_1646672);
							func_114(49, 8, iVar4, &Global_1646672);
							func_114(15, 8, iVar4, &Global_1646672);
							break;
						
						case 3:
							func_114(60, 8, iVar4, &Global_1646672);
							func_114(19, 8, iVar4, &Global_1646672);
							func_114(53, 8, iVar4, &Global_1646672);
							func_114(12, 8, iVar4, &Global_1646672);
							func_114(11, 8, iVar4, &Global_1646672);
							func_114(14, 8, iVar4, &Global_1646672);
							break;
						
						case 4:
							func_114(10, 8, iVar4, &Global_1646672);
							func_114(17, 8, iVar4, &Global_1646672);
							func_114(61, 8, iVar4, &Global_1646672);
							func_114(0, 8, iVar4, &Global_1646672);
							func_114(16, 8, iVar4, &Global_1646672);
							func_101(13, 8, iVar4, &Global_1646672);
							func_114(20, 8, iVar4, &Global_1646672);
							func_114(62, 8, iVar4, &Global_1646672);
							func_114(63, 8, iVar4, &Global_1646672);
							func_101(23, 8, iVar4, &Global_1646672);
							break;
						
						case 5:
							func_114(9, 8, iVar4, &Global_1646672);
							func_114(56, 8, iVar4, &Global_1646672);
							func_114(55, 8, iVar4, &Global_1646672);
							func_114(45, 8, iVar4, &Global_1646672);
							func_114(43, 8, iVar4, &Global_1646672);
							func_114(46, 8, iVar4, &Global_1646672);
							func_114(44, 8, iVar4, &Global_1646672);
							func_101(22, 8, iVar4, &Global_1646672);
							func_101(17, 8, iVar4, &Global_1646672);
							func_101(18, 8, iVar4, &Global_1646672);
							func_114(59, 8, iVar4, &Global_1646672);
							func_114(1, 8, iVar4, &Global_1646672);
							break;
						
						case 6:
							func_114(120, 8, iVar4, &Global_1646672);
							func_85(12, 8, iVar4, &Global_1646672);
							func_85(13, 8, iVar4, &Global_1646672);
							func_85(14, 8, iVar4, &Global_1646672);
							func_85(15, 8, iVar4, &Global_1646672);
							func_85(16, 8, iVar4, &Global_1646672);
							func_114(121, 8, iVar4, &Global_1646672);
							func_85(17, 8, iVar4, &Global_1646672);
							func_85(18, 8, iVar4, &Global_1646672);
							func_85(19, 8, iVar4, &Global_1646672);
							func_114(125, 8, iVar4, &Global_1646672);
							func_101(144, 8, iVar4, &Global_1646672);
							break;
						
						case 7:
							if (!Global_1646672.f_1[0])
							{
								func_85(1, 8, iVar4, &Global_1646672);
								func_85(2, 8, iVar4, &Global_1646672);
								func_85(6, 8, iVar4, &Global_1646672);
								func_85(3, 8, iVar4, &Global_1646672);
								func_85(7, 8, iVar4, &Global_1646672);
								func_85(8, 8, iVar4, &Global_1646672);
								func_85(4, 8, iVar4, &Global_1646672);
								func_85(9, 8, iVar4, &Global_1646672);
								func_85(10, 8, iVar4, &Global_1646672);
								func_85(5, 8, iVar4, &Global_1646672);
								func_85(11, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 8:
							if (!Global_1646672.f_1[0])
							{
								func_114(143, 8, iVar4, &Global_1646672);
								func_101(149, 8, iVar4, &Global_1646672);
								func_101(150, 8, iVar4, &Global_1646672);
								if (Global_262145.f_24259 == 1)
								{
									func_114(139, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24261 == 1)
								{
									func_114(140, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24260 == 1)
								{
									func_114(141, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24262 == 1)
								{
									func_114(142, 8, iVar4, &Global_1646672);
								}
								if (((Global_262145.f_24259 == 1 && Global_262145.f_24261 == 1) && Global_262145.f_24260 == 1) && Global_262145.f_24262 == 1)
								{
									func_101(151, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_114(86, 8, iVar4, &Global_1646672);
								func_114(85, 8, iVar4, &Global_1646672);
								func_114(84, 8, iVar4, &Global_1646672);
								func_114(83, 8, iVar4, &Global_1646672);
								func_114(82, 8, iVar4, &Global_1646672);
								func_114(81, 8, iVar4, &Global_1646672);
								func_114(80, 8, iVar4, &Global_1646672);
								func_114(79, 8, iVar4, &Global_1646672);
								func_114(78, 8, iVar4, &Global_1646672);
								func_114(77, 8, iVar4, &Global_1646672);
								func_114(76, 8, iVar4, &Global_1646672);
								func_114(75, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 10:
							if (!Global_1646672.f_1[0])
							{
								func_101(53, 8, iVar4, &Global_1646672);
								func_101(54, 8, iVar4, &Global_1646672);
								func_101(55, 8, iVar4, &Global_1646672);
								func_101(56, 8, iVar4, &Global_1646672);
								func_101(57, 8, iVar4, &Global_1646672);
								func_101(58, 8, iVar4, &Global_1646672);
								func_101(59, 8, iVar4, &Global_1646672);
								func_101(62, 8, iVar4, &Global_1646672);
								func_101(60, 8, iVar4, &Global_1646672);
								func_101(61, 8, iVar4, &Global_1646672);
								func_114(87, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(63, 8, iVar4, &Global_1646672);
								func_114(88, 8, iVar4, &Global_1646672);
								func_101(64, 8, iVar4, &Global_1646672);
								func_101(65, 8, iVar4, &Global_1646672);
								func_101(66, 8, iVar4, &Global_1646672);
								func_101(67, 8, iVar4, &Global_1646672);
								func_101(68, 8, iVar4, &Global_1646672);
								func_101(69, 8, iVar4, &Global_1646672);
								func_101(70, 8, iVar4, &Global_1646672);
								func_101(71, 8, iVar4, &Global_1646672);
								func_101(72, 8, iVar4, &Global_1646672);
								func_101(73, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 12:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_29264)
								{
									func_101(89, 8, iVar4, &Global_1646672);
									func_101(90, 8, iVar4, &Global_1646672);
									func_101(92, 8, iVar4, &Global_1646672);
									func_101(91, 8, iVar4, &Global_1646672);
									func_101(94, 8, iVar4, &Global_1646672);
									func_101(93, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 13:
							if (!Global_1646672.f_1[0])
							{
								func_101(95, 8, iVar4, &Global_1646672);
								func_101(96, 8, iVar4, &Global_1646672);
								func_114(106, 8, iVar4, &Global_1646672);
								func_101(97, 8, iVar4, &Global_1646672);
								func_101(98, 8, iVar4, &Global_1646672);
								func_101(99, 8, iVar4, &Global_1646672);
								func_101(100, 8, iVar4, &Global_1646672);
								func_101(101, 8, iVar4, &Global_1646672);
								func_101(102, 8, iVar4, &Global_1646672);
								func_101(103, 8, iVar4, &Global_1646672);
								func_101(104, 8, iVar4, &Global_1646672);
								func_101(105, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 14:
							if (!Global_1646672.f_1[0])
							{
								func_101(113, 8, iVar4, &Global_1646672);
								func_114(107, 8, iVar4, &Global_1646672);
								func_114(108, 8, iVar4, &Global_1646672);
								func_114(109, 8, iVar4, &Global_1646672);
								func_114(110, 8, iVar4, &Global_1646672);
								func_114(111, 8, iVar4, &Global_1646672);
								func_114(112, 8, iVar4, &Global_1646672);
								func_114(113, 8, iVar4, &Global_1646672);
								func_101(114, 8, iVar4, &Global_1646672);
								func_114(114, 8, iVar4, &Global_1646672);
								func_101(117, 8, iVar4, &Global_1646672);
								func_101(116, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 15:
							if (!Global_1646672.f_1[0])
							{
								func_101(127, 8, iVar4, &Global_1646672);
								func_101(128, 8, iVar4, &Global_1646672);
								func_101(129, 8, iVar4, &Global_1646672);
								func_101(130, 8, iVar4, &Global_1646672);
								func_101(131, 8, iVar4, &Global_1646672);
								func_101(132, 8, iVar4, &Global_1646672);
								func_101(133, 8, iVar4, &Global_1646672);
								func_101(134, 8, iVar4, &Global_1646672);
								func_101(140, 8, iVar4, &Global_1646672);
								func_101(135, 8, iVar4, &Global_1646672);
								func_101(141, 8, iVar4, &Global_1646672);
								func_101(136, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 16:
							func_79(4, 8, iVar4, &Global_1646672);
							func_79(2, 8, iVar4, &Global_1646672);
							func_79(7, 8, iVar4, &Global_1646672);
							func_79(0, 8, iVar4, &Global_1646672);
							func_79(6, 8, iVar4, &Global_1646672);
							func_79(8, 8, iVar4, &Global_1646672);
							func_79(5, 8, iVar4, &Global_1646672);
							func_79(1, 8, iVar4, &Global_1646672);
							func_79(54, 8, iVar4, &Global_1646672);
							func_79(57, 8, iVar4, &Global_1646672);
							func_79(58, 8, iVar4, &Global_1646672);
							func_79(59, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(17, 8, iVar4, &Global_1646672);
							func_114(12, 8, iVar4, &Global_1646672);
							func_114(40, 8, iVar4, &Global_1646672);
							func_114(31, 8, iVar4, &Global_1646672);
							func_114(37, 8, iVar4, &Global_1646672);
							func_114(34, 8, iVar4, &Global_1646672);
							func_114(33, 8, iVar4, &Global_1646672);
							func_114(32, 8, iVar4, &Global_1646672);
							func_114(41, 8, iVar4, &Global_1646672);
							func_114(35, 8, iVar4, &Global_1646672);
							func_114(63, 8, iVar4, &Global_1646672);
							func_67(1, 8, iVar4, &Global_1646672);
							break;
						
						case 1:
							func_114(39, 8, iVar4, &Global_1646672);
							func_101(11, 8, iVar4, &Global_1646672);
							func_114(38, 8, iVar4, &Global_1646672);
							func_101(10, 8, iVar4, &Global_1646672);
							func_114(48, 8, iVar4, &Global_1646672);
							func_114(22, 8, iVar4, &Global_1646672);
							func_114(23, 8, iVar4, &Global_1646672);
							func_114(31, 8, iVar4, &Global_1646672);
							func_114(35, 8, iVar4, &Global_1646672);
							func_101(4, 8, iVar4, &Global_1646672);
							func_101(5, 8, iVar4, &Global_1646672);
							func_114(32, 8, iVar4, &Global_1646672);
							break;
						
						case 2:
							if (!Global_1646672.f_1[0])
							{
								func_101(12, 8, iVar4, &Global_1646672);
								func_114(27, 8, iVar4, &Global_1646672);
								func_101(0, 8, iVar4, &Global_1646672);
								func_101(21, 8, iVar4, &Global_1646672);
								func_67(1, 8, iVar4, &Global_1646672);
								func_67(0, 8, iVar4, &Global_1646672);
								func_67(3, 8, iVar4, &Global_1646672);
								func_67(2, 8, iVar4, &Global_1646672);
								func_114(127, 8, iVar4, &Global_1646672);
								func_114(128, 8, iVar4, &Global_1646672);
								func_114(134, 8, iVar4, &Global_1646672);
								func_101(148, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 5:
							if (!Global_1646672.f_1[0])
							{
								func_114(5, 8, iVar4, &Global_1646672);
								func_114(4, 8, iVar4, &Global_1646672);
								func_114(25, 8, iVar4, &Global_1646672);
								func_114(2, 8, iVar4, &Global_1646672);
								func_114(26, 8, iVar4, &Global_1646672);
								func_114(7, 8, iVar4, &Global_1646672);
								func_114(3, 8, iVar4, &Global_1646672);
								func_114(6, 8, iVar4, &Global_1646672);
								func_114(8, 8, iVar4, &Global_1646672);
								func_114(24, 8, iVar4, &Global_1646672);
								func_114(129, 8, iVar4, &Global_1646672);
								func_114(131, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 6:
							if (!Global_1646672.f_1[0])
							{
								func_114(123, 8, iVar4, &Global_1646672);
								func_114(122, 8, iVar4, &Global_1646672);
								func_101(146, 8, iVar4, &Global_1646672);
								func_101(143, 8, iVar4, &Global_1646672);
								func_101(147, 8, iVar4, &Global_1646672);
								func_114(132, 8, iVar4, &Global_1646672);
								func_85(21, 8, iVar4, &Global_1646672);
								if ((func_122() || func_121()) || MISC::IS_PC_VERSION())
								{
									func_85(20, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_114(74, 8, iVar4, &Global_1646672);
								func_114(73, 8, iVar4, &Global_1646672);
								func_114(72, 8, iVar4, &Global_1646672);
								func_101(52, 8, iVar4, &Global_1646672);
								func_101(51, 8, iVar4, &Global_1646672);
								func_114(71, 8, iVar4, &Global_1646672);
								func_114(70, 8, iVar4, &Global_1646672);
								func_101(50, 8, iVar4, &Global_1646672);
								func_101(30, 8, iVar4, &Global_1646672);
								func_101(31, 8, iVar4, &Global_1646672);
								func_101(32, 8, iVar4, &Global_1646672);
								func_101(33, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(74, 8, iVar4, &Global_1646672);
								func_101(75, 8, iVar4, &Global_1646672);
								func_114(89, 8, iVar4, &Global_1646672);
								func_114(90, 8, iVar4, &Global_1646672);
								func_114(91, 8, iVar4, &Global_1646672);
								func_101(76, 8, iVar4, &Global_1646672);
								func_101(77, 8, iVar4, &Global_1646672);
								func_101(78, 8, iVar4, &Global_1646672);
								func_114(92, 8, iVar4, &Global_1646672);
								func_114(93, 8, iVar4, &Global_1646672);
								func_101(79, 8, iVar4, &Global_1646672);
								func_101(80, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 13:
							if (!Global_1646672.f_1[0])
							{
								func_114(105, 8, iVar4, &Global_1646672);
								func_101(106, 8, iVar4, &Global_1646672);
								func_101(107, 8, iVar4, &Global_1646672);
								func_101(108, 8, iVar4, &Global_1646672);
								func_114(101, 8, iVar4, &Global_1646672);
								func_101(111, 8, iVar4, &Global_1646672);
								func_114(99, 8, iVar4, &Global_1646672);
								func_101(112, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_24745)
								{
									func_114(104, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24747)
								{
									func_114(103, 8, iVar4, &Global_1646672);
									func_101(109, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24746)
								{
									func_114(102, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 14:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_31050[0] != 0f)
								{
									func_101(115, 8, iVar4, &Global_1646672);
								}
								func_101(118, 8, iVar4, &Global_1646672);
								func_101(119, 8, iVar4, &Global_1646672);
								func_101(120, 8, iVar4, &Global_1646672);
								if (Global_262145.f_31050[6] != 0f)
								{
									func_101(121, 8, iVar4, &Global_1646672);
								}
								func_101(122, 8, iVar4, &Global_1646672);
								func_114(115, 8, iVar4, &Global_1646672);
								if (Global_262145.f_30976)
								{
									func_114(116, 8, iVar4, &Global_1646672);
									func_101(123, 8, iVar4, &Global_1646672);
									func_101(124, 8, iVar4, &Global_1646672);
									func_101(125, 8, iVar4, &Global_1646672);
									func_101(126, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 15:
							if (!Global_1646672.f_1[0])
							{
								func_101(142, 8, iVar4, &Global_1646672);
								func_114(117, 8, iVar4, &Global_1646672);
								func_114(118, 8, iVar4, &Global_1646672);
								func_101(137, 8, iVar4, &Global_1646672);
								func_101(138, 8, iVar4, &Global_1646672);
								func_101(139, 8, iVar4, &Global_1646672);
								func_114(119, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 16:
							func_79(60, 8, iVar4, &Global_1646672);
							func_79(12, 8, iVar4, &Global_1646672);
							func_79(56, 8, iVar4, &Global_1646672);
							func_79(55, 8, iVar4, &Global_1646672);
							func_79(25, 8, iVar4, &Global_1646672);
							func_79(34, 8, iVar4, &Global_1646672);
							func_79(45, 8, iVar4, &Global_1646672);
							func_79(48, 8, iVar4, &Global_1646672);
							func_79(49, 8, iVar4, &Global_1646672);
							func_79(65, 8, iVar4, &Global_1646672);
							func_79(46, 8, iVar4, &Global_1646672);
							func_79(9, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(48, 8, iVar4, &Global_1646672);
							func_114(14, 8, iVar4, &Global_1646672);
							func_114(25, 8, iVar4, &Global_1646672);
							func_114(26, 8, iVar4, &Global_1646672);
							func_114(15, 8, iVar4, &Global_1646672);
							func_114(22, 8, iVar4, &Global_1646672);
							func_114(27, 8, iVar4, &Global_1646672);
							func_114(21, 8, iVar4, &Global_1646672);
							func_114(11, 8, iVar4, &Global_1646672);
							func_114(62, 8, iVar4, &Global_1646672);
							func_114(23, 8, iVar4, &Global_1646672);
							func_114(0, 8, iVar4, &Global_1646672);
							break;
						
						case 1:
							if (!Global_1646672.f_1[0])
							{
								func_114(34, 8, iVar4, &Global_1646672);
								func_101(3, 8, iVar4, &Global_1646672);
								func_114(33, 8, iVar4, &Global_1646672);
								func_101(8, 8, iVar4, &Global_1646672);
								func_114(135, 8, iVar4, &Global_1646672);
								func_114(136, 8, iVar4, &Global_1646672);
								func_114(137, 8, iVar4, &Global_1646672);
								func_114(126, 8, iVar4, &Global_1646672);
								func_114(130, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 2:
							if (!Global_1646672.f_1[0])
							{
								func_114(138, 8, iVar4, &Global_1646672);
								func_114(67, 8, iVar4, &Global_1646672);
								func_101(25, 8, iVar4, &Global_1646672);
								func_101(26, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 5:
							if (!Global_1646672.f_1[0])
							{
								func_114(133, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_101(34, 8, iVar4, &Global_1646672);
								func_101(35, 8, iVar4, &Global_1646672);
								func_101(36, 8, iVar4, &Global_1646672);
								func_101(37, 8, iVar4, &Global_1646672);
								func_101(38, 8, iVar4, &Global_1646672);
								func_101(39, 8, iVar4, &Global_1646672);
								func_101(40, 8, iVar4, &Global_1646672);
								func_101(41, 8, iVar4, &Global_1646672);
								func_101(42, 8, iVar4, &Global_1646672);
								func_101(43, 8, iVar4, &Global_1646672);
								func_101(44, 8, iVar4, &Global_1646672);
								func_101(45, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 11:
							if (!Global_1646672.f_1[0])
							{
								func_101(81, 8, iVar4, &Global_1646672);
								func_114(94, 8, iVar4, &Global_1646672);
								func_114(95, 8, iVar4, &Global_1646672);
								func_101(82, 8, iVar4, &Global_1646672);
								func_101(83, 8, iVar4, &Global_1646672);
								func_114(96, 8, iVar4, &Global_1646672);
								func_101(84, 8, iVar4, &Global_1646672);
								func_101(85, 8, iVar4, &Global_1646672);
								func_114(97, 8, iVar4, &Global_1646672);
								func_101(86, 8, iVar4, &Global_1646672);
								func_101(87, 8, iVar4, &Global_1646672);
								func_101(88, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 13:
							if (!Global_1646672.f_1[0])
							{
								if (!Global_262145.f_24746)
								{
									func_101(110, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_29728)
								{
									func_114(100, 8, iVar4, &Global_1646672);
								}
							}
							break;
						
						case 16:
							if (!Global_1646672.f_1[0])
							{
								func_79(10, 8, iVar4, &Global_1646672);
								func_79(11, 8, iVar4, &Global_1646672);
								func_79(87, 8, iVar4, &Global_1646672);
								func_79(89, 8, iVar4, &Global_1646672);
								iVar2 = 0;
								if (func_66(3608, -1))
								{
									iVar2 = 1;
								}
								func_62("CLO_LTS_T_0", "CLO_LTS_TD_0", "Elitas_Tshirt", "MPTshirtAwardLTS", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
								func_59(0);
								func_59(1);
								func_59(2);
								iVar2 = 0;
								if (func_50(4))
								{
									iVar2 = 1;
								}
								func_62("CLO_HST_A_4", "CLO_HST_AD_5", "CantTouchThis", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
								func_59(5);
								func_59(7);
								func_59(6);
							}
							break;
					}
					break;
				
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(16, 8, iVar4, &Global_1646672);
							func_114(45, 8, iVar4, &Global_1646672);
							func_114(43, 8, iVar4, &Global_1646672);
							func_114(46, 8, iVar4, &Global_1646672);
							func_114(44, 8, iVar4, &Global_1646672);
							func_114(30, 8, iVar4, &Global_1646672);
							func_101(2, 8, iVar4, &Global_1646672);
							func_114(39, 8, iVar4, &Global_1646672);
							func_114(38, 8, iVar4, &Global_1646672);
							func_101(3, 8, iVar4, &Global_1646672);
							func_114(42, 8, iVar4, &Global_1646672);
							func_114(36, 8, iVar4, &Global_1646672);
							break;
						
						case 1:
							if (!Global_1646672.f_1[0])
							{
							}
							break;
						
						case 9:
							if (!Global_1646672.f_1[0])
							{
								func_101(46, 8, iVar4, &Global_1646672);
								func_101(47, 8, iVar4, &Global_1646672);
								func_101(48, 8, iVar4, &Global_1646672);
								func_101(49, 8, iVar4, &Global_1646672);
							}
							break;
						
						case 16:
							func_59(8);
							iVar2 = 0;
							if (func_50(9))
							{
								iVar2 = 1;
							}
							func_62("CLO_HST_A_9", "CLO_HST_AD_9", "Showroom", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_0", "CHR_HST_AD_0", "SportMod", "MPAwardMods", func_49(126, 5, 0), func_48(126, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_1", "CHR_HST_AD_1", "LowriderMod", "MPAwardMods", func_49(127, 5, 0), func_48(127, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_2", "CHR_HST_AD_2", "OffroadMod", "MPAwardMods", func_49(129, 5, 0), func_48(129, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_3", "CHR_HST_AD_3", "HighendMod", "MPAwardMods", func_49(120, 5, 0), func_48(120, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_4", "CHR_HST_AD_4", "TunerMod", "MPAwardMods", func_49(121, 5, 0), func_48(121, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_5", "CHR_HST_AD_5", "BikeMod", "MPAwardMods", func_49(131, 5, 0), func_48(131, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_6", "CHR_HST_AD_6", "SUVMod", "MPAwardMods", func_49(135, 5, 0), func_48(135, -1), -1, 1, &Global_1646672, 152, 144);
							func_62("CHR_HST_A_7", "CHR_HST_AD_7", "MuscleMod", "MPAwardMods", func_49(136, 5, 0), func_48(136, -1), -1, 1, &Global_1646672, 152, 144);
							func_59(34);
							func_62("CLO_S1M_DEC_25", "CLO_S1M_D_24_25", "BennyTshirt01", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1646672, 152, 144);
							break;
					}
					break;
				
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(15, 8, iVar4, &Global_1646672);
							func_101(4, 8, iVar4, &Global_1646672);
							func_101(5, 8, iVar4, &Global_1646672);
							func_101(7, 8, iVar4, &Global_1646672);
							func_101(6, 8, iVar4, &Global_1646672);
							func_114(29, 8, iVar4, &Global_1646672);
							func_114(28, 8, iVar4, &Global_1646672);
							func_114(20, 8, iVar4, &Global_1646672);
							func_101(0, 8, iVar4, &Global_1646672);
							func_101(8, 8, iVar4, &Global_1646672);
							func_114(61, 8, iVar4, &Global_1646672);
							func_67(3, 8, iVar4, &Global_1646672);
							break;
						
						case 16:
							if (!Global_1646672.f_1[0])
							{
								if (func_47(2934, -1, 0) == 1)
								{
									iVar2 = 8;
								}
								else
								{
									iVar2 = func_42(0);
									if (iVar2 > 0)
									{
										iVar2 = (iVar2 - 1);
									}
								}
								func_62("CLO_S1M_DEC_24", "CLO_S1M_D_24_25", "BennyTshirt02", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1646672, 152, 144);
							}
							break;
					}
					break;
				
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(22, 8, iVar4, &Global_1646672);
							func_101(17, 8, iVar4, &Global_1646672);
							func_101(18, 8, iVar4, &Global_1646672);
							func_67(2, 8, iVar4, &Global_1646672);
							func_67(0, 8, iVar4, &Global_1646672);
							func_101(16, 8, iVar4, &Global_1646672);
							func_101(12, 8, iVar4, &Global_1646672);
							func_101(13, 8, iVar4, &Global_1646672);
							func_114(55, 8, iVar4, &Global_1646672);
							func_114(56, 8, iVar4, &Global_1646672);
							func_114(53, 8, iVar4, &Global_1646672);
							func_101(20, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(10, 8, iVar4, &Global_1646672);
							func_101(21, 8, iVar4, &Global_1646672);
							func_114(60, 8, iVar4, &Global_1646672);
							func_101(11, 8, iVar4, &Global_1646672);
							func_114(51, 8, iVar4, &Global_1646672);
							func_114(52, 8, iVar4, &Global_1646672);
							func_114(59, 8, iVar4, &Global_1646672);
							func_114(58, 8, iVar4, &Global_1646672);
							func_101(14, 8, iVar4, &Global_1646672);
							func_114(54, 8, iVar4, &Global_1646672);
							func_114(57, 8, iVar4, &Global_1646672);
							func_114(47, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(23, 8, iVar4, &Global_1646672);
								func_114(49, 8, iVar4, &Global_1646672);
								func_114(126, 8, iVar4, &Global_1646672);
								func_114(127, 8, iVar4, &Global_1646672);
								func_114(128, 8, iVar4, &Global_1646672);
								func_114(129, 8, iVar4, &Global_1646672);
								func_114(130, 8, iVar4, &Global_1646672);
								func_114(120, 8, iVar4, &Global_1646672);
								func_114(121, 8, iVar4, &Global_1646672);
								func_114(122, 8, iVar4, &Global_1646672);
								func_114(123, 8, iVar4, &Global_1646672);
								func_101(144, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(125, 8, iVar4, &Global_1646672);
								func_101(143, 8, iVar4, &Global_1646672);
								func_114(131, 8, iVar4, &Global_1646672);
								func_101(147, 8, iVar4, &Global_1646672);
								func_114(132, 8, iVar4, &Global_1646672);
								func_114(133, 8, iVar4, &Global_1646672);
								func_114(134, 8, iVar4, &Global_1646672);
								func_114(135, 8, iVar4, &Global_1646672);
								func_114(136, 8, iVar4, &Global_1646672);
								func_114(137, 8, iVar4, &Global_1646672);
								func_101(148, 8, iVar4, &Global_1646672);
								func_114(138, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(146, 8, iVar4, &Global_1646672);
								func_85(12, 8, iVar4, &Global_1646672);
								func_85(13, 8, iVar4, &Global_1646672);
								func_85(14, 8, iVar4, &Global_1646672);
								func_85(15, 8, iVar4, &Global_1646672);
								func_85(16, 8, iVar4, &Global_1646672);
								func_85(17, 8, iVar4, &Global_1646672);
								func_85(18, 8, iVar4, &Global_1646672);
								func_85(19, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_9035)
								{
									func_114(67, 8, iVar4, &Global_1646672);
									func_101(25, 8, iVar4, &Global_1646672);
									func_101(26, 8, iVar4, &Global_1646672);
								}
							}
							break;
					}
					break;
				
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_85(21, 8, iVar4, &Global_1646672);
								if ((func_122() || func_121()) || MISC::IS_PC_VERSION())
								{
									func_85(20, 8, iVar4, &Global_1646672);
								}
								func_85(1, 8, iVar4, &Global_1646672);
								func_85(2, 8, iVar4, &Global_1646672);
								func_85(6, 8, iVar4, &Global_1646672);
								func_85(3, 8, iVar4, &Global_1646672);
								func_85(7, 8, iVar4, &Global_1646672);
								func_85(8, 8, iVar4, &Global_1646672);
								func_85(4, 8, iVar4, &Global_1646672);
								func_85(9, 8, iVar4, &Global_1646672);
								func_85(10, 8, iVar4, &Global_1646672);
								func_85(5, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_85(11, 8, iVar4, &Global_1646672);
								func_114(143, 8, iVar4, &Global_1646672);
								func_101(149, 8, iVar4, &Global_1646672);
								func_101(150, 8, iVar4, &Global_1646672);
								if (Global_262145.f_24259 == 1)
								{
									func_114(139, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24261 == 1)
								{
									func_114(140, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24260 == 1)
								{
									func_114(141, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_24262 == 1)
								{
									func_114(142, 8, iVar4, &Global_1646672);
								}
								if (((Global_262145.f_24259 == 1 && Global_262145.f_24261 == 1) && Global_262145.f_24260 == 1) && Global_262145.f_24262 == 1)
								{
									func_101(151, 8, iVar4, &Global_1646672);
								}
								func_114(86, 8, iVar4, &Global_1646672);
								func_114(85, 8, iVar4, &Global_1646672);
								func_114(84, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(83, 8, iVar4, &Global_1646672);
								func_114(82, 8, iVar4, &Global_1646672);
								func_114(81, 8, iVar4, &Global_1646672);
								func_114(80, 8, iVar4, &Global_1646672);
								func_114(79, 8, iVar4, &Global_1646672);
								func_114(78, 8, iVar4, &Global_1646672);
								func_114(77, 8, iVar4, &Global_1646672);
								func_114(76, 8, iVar4, &Global_1646672);
								func_114(75, 8, iVar4, &Global_1646672);
								func_114(74, 8, iVar4, &Global_1646672);
								func_114(73, 8, iVar4, &Global_1646672);
								func_114(72, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(52, 8, iVar4, &Global_1646672);
								func_101(51, 8, iVar4, &Global_1646672);
								func_114(71, 8, iVar4, &Global_1646672);
								func_114(70, 8, iVar4, &Global_1646672);
								func_101(50, 8, iVar4, &Global_1646672);
								func_101(30, 8, iVar4, &Global_1646672);
								func_101(31, 8, iVar4, &Global_1646672);
								func_101(32, 8, iVar4, &Global_1646672);
								func_101(33, 8, iVar4, &Global_1646672);
								func_101(34, 8, iVar4, &Global_1646672);
								func_101(35, 8, iVar4, &Global_1646672);
								func_101(36, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(37, 8, iVar4, &Global_1646672);
								func_101(38, 8, iVar4, &Global_1646672);
								func_101(39, 8, iVar4, &Global_1646672);
								func_101(40, 8, iVar4, &Global_1646672);
								func_101(41, 8, iVar4, &Global_1646672);
								func_101(42, 8, iVar4, &Global_1646672);
								func_101(43, 8, iVar4, &Global_1646672);
								func_101(44, 8, iVar4, &Global_1646672);
								func_101(45, 8, iVar4, &Global_1646672);
								func_101(46, 8, iVar4, &Global_1646672);
								func_101(47, 8, iVar4, &Global_1646672);
								func_101(48, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(49, 8, iVar4, &Global_1646672);
							}
							func_101(53, 8, iVar4, &Global_1646672);
							func_101(54, 8, iVar4, &Global_1646672);
							func_101(55, 8, iVar4, &Global_1646672);
							func_101(56, 8, iVar4, &Global_1646672);
							func_101(57, 8, iVar4, &Global_1646672);
							func_101(58, 8, iVar4, &Global_1646672);
							func_101(59, 8, iVar4, &Global_1646672);
							func_101(62, 8, iVar4, &Global_1646672);
							func_101(60, 8, iVar4, &Global_1646672);
							func_101(61, 8, iVar4, &Global_1646672);
							func_114(87, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_114(88, 8, iVar4, &Global_1646672);
							func_114(89, 8, iVar4, &Global_1646672);
							func_114(90, 8, iVar4, &Global_1646672);
							func_114(91, 8, iVar4, &Global_1646672);
							func_114(92, 8, iVar4, &Global_1646672);
							func_114(93, 8, iVar4, &Global_1646672);
							func_114(94, 8, iVar4, &Global_1646672);
							func_114(95, 8, iVar4, &Global_1646672);
							func_114(96, 8, iVar4, &Global_1646672);
							func_114(97, 8, iVar4, &Global_1646672);
							func_101(63, 8, iVar4, &Global_1646672);
							func_101(64, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(65, 8, iVar4, &Global_1646672);
							func_101(66, 8, iVar4, &Global_1646672);
							func_101(67, 8, iVar4, &Global_1646672);
							func_101(68, 8, iVar4, &Global_1646672);
							func_101(69, 8, iVar4, &Global_1646672);
							func_101(70, 8, iVar4, &Global_1646672);
							func_101(71, 8, iVar4, &Global_1646672);
							func_101(72, 8, iVar4, &Global_1646672);
							func_101(73, 8, iVar4, &Global_1646672);
							func_101(74, 8, iVar4, &Global_1646672);
							func_101(75, 8, iVar4, &Global_1646672);
							func_101(76, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_101(77, 8, iVar4, &Global_1646672);
							func_101(78, 8, iVar4, &Global_1646672);
							func_101(79, 8, iVar4, &Global_1646672);
							func_101(80, 8, iVar4, &Global_1646672);
							func_101(81, 8, iVar4, &Global_1646672);
							func_101(82, 8, iVar4, &Global_1646672);
							func_101(83, 8, iVar4, &Global_1646672);
							func_101(84, 8, iVar4, &Global_1646672);
							func_101(85, 8, iVar4, &Global_1646672);
							func_101(86, 8, iVar4, &Global_1646672);
							func_101(87, 8, iVar4, &Global_1646672);
							func_101(88, 8, iVar4, &Global_1646672);
							break;
					}
					break;
				
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_29264)
								{
									func_101(89, 8, iVar4, &Global_1646672);
									func_101(90, 8, iVar4, &Global_1646672);
									func_101(92, 8, iVar4, &Global_1646672);
									func_101(91, 8, iVar4, &Global_1646672);
									func_101(94, 8, iVar4, &Global_1646672);
									func_101(93, 8, iVar4, &Global_1646672);
								}
								func_101(95, 8, iVar4, &Global_1646672);
								func_101(96, 8, iVar4, &Global_1646672);
								func_114(106, 8, iVar4, &Global_1646672);
								func_101(97, 8, iVar4, &Global_1646672);
								func_101(98, 8, iVar4, &Global_1646672);
								func_101(99, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(100, 8, iVar4, &Global_1646672);
								func_101(101, 8, iVar4, &Global_1646672);
								func_101(102, 8, iVar4, &Global_1646672);
								func_101(103, 8, iVar4, &Global_1646672);
								func_101(104, 8, iVar4, &Global_1646672);
								func_101(105, 8, iVar4, &Global_1646672);
								func_114(105, 8, iVar4, &Global_1646672);
								func_101(106, 8, iVar4, &Global_1646672);
								func_101(107, 8, iVar4, &Global_1646672);
								func_101(108, 8, iVar4, &Global_1646672);
								func_114(101, 8, iVar4, &Global_1646672);
								func_101(111, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(99, 8, iVar4, &Global_1646672);
								func_101(112, 8, iVar4, &Global_1646672);
								if (!Global_262145.f_24745)
								{
									func_114(104, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24747)
								{
									func_101(109, 8, iVar4, &Global_1646672);
									func_114(103, 8, iVar4, &Global_1646672);
								}
								if (!Global_262145.f_24746)
								{
									func_101(110, 8, iVar4, &Global_1646672);
									func_114(102, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_29728)
								{
									func_114(100, 8, iVar4, &Global_1646672);
								}
								func_101(113, 8, iVar4, &Global_1646672);
								func_114(107, 8, iVar4, &Global_1646672);
								func_114(108, 8, iVar4, &Global_1646672);
								func_114(109, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_114(110, 8, iVar4, &Global_1646672);
								func_114(111, 8, iVar4, &Global_1646672);
								func_114(112, 8, iVar4, &Global_1646672);
								func_114(113, 8, iVar4, &Global_1646672);
								func_101(114, 8, iVar4, &Global_1646672);
								func_114(114, 8, iVar4, &Global_1646672);
								func_101(116, 8, iVar4, &Global_1646672);
								func_101(117, 8, iVar4, &Global_1646672);
								func_101(118, 8, iVar4, &Global_1646672);
								func_101(119, 8, iVar4, &Global_1646672);
								func_101(120, 8, iVar4, &Global_1646672);
								func_101(122, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								if (Global_262145.f_31050[0] != 0f)
								{
									func_101(115, 8, iVar4, &Global_1646672);
								}
								if (Global_262145.f_31050[6] != 0f)
								{
									func_101(121, 8, iVar4, &Global_1646672);
								}
								func_114(115, 8, iVar4, &Global_1646672);
								if (Global_262145.f_30976)
								{
									func_114(116, 8, iVar4, &Global_1646672);
									func_101(123, 8, iVar4, &Global_1646672);
									func_101(124, 8, iVar4, &Global_1646672);
									func_101(125, 8, iVar4, &Global_1646672);
									func_101(126, 8, iVar4, &Global_1646672);
								}
								func_101(127, 8, iVar4, &Global_1646672);
								func_101(128, 8, iVar4, &Global_1646672);
								func_101(129, 8, iVar4, &Global_1646672);
								func_101(130, 8, iVar4, &Global_1646672);
								func_101(131, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(132, 8, iVar4, &Global_1646672);
								func_101(133, 8, iVar4, &Global_1646672);
								func_101(134, 8, iVar4, &Global_1646672);
								func_101(140, 8, iVar4, &Global_1646672);
								func_101(135, 8, iVar4, &Global_1646672);
								func_101(141, 8, iVar4, &Global_1646672);
								func_101(136, 8, iVar4, &Global_1646672);
								func_101(142, 8, iVar4, &Global_1646672);
								func_114(117, 8, iVar4, &Global_1646672);
								func_114(118, 8, iVar4, &Global_1646672);
								func_101(137, 8, iVar4, &Global_1646672);
								func_101(138, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
				
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1646672.f_1[0])
							{
								func_101(139, 8, iVar4, &Global_1646672);
								func_114(119, 8, iVar4, &Global_1646672);
							}
							break;
					}
					break;
			}
			func_29(&Global_1646672, func_41(&Global_1646672));
			func_28(1, &Global_1647601);
			func_27(1, &Global_1647601);
			func_26(1, &Global_1647601);
			func_25(0, "HUD_AWDLIST1", &Global_1647601);
			func_25(1, "HUD_AWDLIST12", &Global_1647601);
			func_25(2, "HUD_AWDLIST3b", &Global_1647601);
			func_25(3, "HUD_AWDLIST6", &Global_1647601);
			func_25(4, "HUD_AWDLIST9", &Global_1647601);
			func_25(5, "HUD_AWDLIST10", &Global_1647601);
			func_25(6, "HUD_AWDLIST13", &Global_1647601);
			func_25(7, "HUD_AWD_GANGOP", &Global_1647601);
			func_25(8, "HUD_AWD_NIGHTCLUB", &Global_1647601);
			func_25(9, "PM_ARENA", &Global_1647601);
			func_25(10, "AWDGBC_VC", &Global_1647601);
			func_25(11, "FMMC_CH_DN", &Global_1647601);
			if (Global_262145.f_29264)
			{
				func_25(12, "SUM20AWARDPAGE", &Global_1647601);
			}
			func_25(13, "HEISTISLAWDPAGE", &Global_1647601);
			func_25(14, "TUNEAWDPAGE", &Global_1647601);
			func_25(15, "FIXAWDPAGE", &Global_1647601);
			func_25(16, "HUD_AWDLIST6b", &Global_1647601);
			func_16(&Global_1647601, func_24(&Global_1647601));
		}
	}
}

void func_16(var uParam0, int iParam1)//Position - 0x3E22
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar1 = uParam0->f_309[iVar0];
		iVar0 = 0;
		while (iVar0 <= 17)
		{
			if (uParam0->f_1[iVar0] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
				if (uParam0->f_425 == 1)
				{
					if (uParam0->f_426 == iVar0)
					{
						iVar1 = 0;
					}
					else
					{
						iVar1 = 4;
					}
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_347[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				if (uParam0->f_424)
				{
					func_22(&(uParam0->f_20[iVar0 /*16*/]));
				}
				else
				{
					func_21(&(uParam0->f_20[iVar0 /*16*/]));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_328[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_385[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_404[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_366[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			*uParam0 = 1;
			iVar0++;
		}
		func_20(0);
	}
	func_17(uParam0, func_19(uParam0));
}

void func_17(var uParam0, int iParam1)//Position - 0x3F42
{
	if (iParam1 == 1)
	{
		uParam0->f_427 = 0;
		func_18(uParam0);
	}
	if (uParam0->f_427 == 0)
	{
		if (uParam0->f_426 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_426);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_426 = -1;
			uParam0->f_427 = 1;
		}
	}
}

void func_18(var uParam0)//Position - 0x3F95
{
	uParam0->f_429 = 0;
}

int func_19(var uParam0)//Position - 0x3FA3
{
	return uParam0->f_429;
}

void func_20(int iParam0)//Position - 0x3FB0
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_21(char* sParam0)//Position - 0x3FCD
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_22(char* sParam0)//Position - 0x3FDB
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_23(var uParam0)//Position - 0x3FED
{
	uParam0->f_428 = 0;
}

int func_24(var uParam0)//Position - 0x3FFB
{
	return uParam0->f_428;
}

void func_25(int iParam0, char* sParam1, var uParam2)//Position - 0x400D
{
	StringCopy(&(uParam2->f_20[iParam0 /*16*/]), sParam1, 64);
	uParam2->f_1[iParam0] = 1;
}

void func_26(int iParam0, var uParam1)//Position - 0x402A
{
	uParam1->f_425 = iParam0;
}

void func_27(int iParam0, var uParam1)//Position - 0x4039
{
	uParam1->f_423 = iParam0;
}

void func_28(int iParam0, var uParam1)//Position - 0x4048
{
	uParam1->f_424 = iParam0;
}

void func_29(var uParam0, int iParam1)//Position - 0x4057
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				iVar1 = -1;
				iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(uParam0->f_221[iVar0]) / SYSTEM::TO_FLOAT(uParam0->f_208[iVar0])) * 100f));
				iVar1 = uParam0->f_441[iVar0];
				iVar2 = -1;
				switch (uParam0->f_428[iVar0])
				{
					case 107:
						iVar2 = 100;
						break;
					
					case 108:
						iVar2 = 200;
						break;
					
					case 109:
						iVar2 = 400;
						break;
					
					case 110:
						iVar2 = 800;
						break;
				}
				StringCopy(&Var3, func_38(uParam0->f_428[iVar0]), 32);
				if (uParam0->f_1[iVar0] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_22(&(uParam0->f_14[iVar0 /*8*/]));
					func_22(&(uParam0->f_111[iVar0 /*8*/]));
					func_21(&(uParam0->f_331[iVar0 /*8*/]));
					func_21(&(uParam0->f_234[iVar0 /*8*/]));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[iVar0]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					if (func_37(&Var3))
					{
						func_22("HUD_AWDPROG_S");
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("HUD_AWDPROG");
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var3);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (uParam0->f_221[iVar0] >= uParam0->f_208[iVar0])
					{
						func_22("TR_COMPLETE");
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TIMER_DASHES");
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[iVar0]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[iVar0]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (iVar2 >= 0)
					{
						func_22("HUD_AWDAWARD");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			func_20(1);
			*uParam0 = 1;
		}
	}
	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
}

void func_30(var uParam0, int iParam1)//Position - 0x4240
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}
	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}
}

void func_31(var uParam0)//Position - 0x428A
{
	uParam0->f_462 = 0;
}

int func_32(var uParam0)//Position - 0x4298
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1)//Position - 0x42A5
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}
	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		if (uParam0->f_456 < 0)
		{
			func_22("");
			func_22("");
		}
		else if (uParam0->f_456 < 12)
		{
			func_22(&(uParam0->f_14[uParam0->f_456 /*8*/]));
			if (uParam0->f_208[uParam0->f_456] > -1)
			{
				func_34(&(uParam0->f_111[uParam0->f_456 /*8*/]), uParam0->f_208[uParam0->f_456]);
			}
			else
			{
				func_22(&(uParam0->f_111[uParam0->f_456 /*8*/]));
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}
}

void func_34(char* sParam0, int iParam1)//Position - 0x4351
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_35(var uParam0)//Position - 0x4369
{
	uParam0->f_463 = 0;
}

int func_36(var uParam0)//Position - 0x4377
{
	return uParam0->f_463;
}

int func_37(char* sParam0)//Position - 0x4384
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_38(int iParam0)//Position - 0x43BE
{
	switch (iParam0)
	{
		case 107:
			return "HUD_MED_BRON";
			break;
		
		case 108:
			return "HUD_MED_SILV";
			break;
		
		case 109:
			return "HUD_MED_GOLD";
			break;
		
		case 110:
			return "HUD_MED_PLAT";
			break;
	}
	return "";
}

int func_39(var uParam0)//Position - 0x4411
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam0->f_1[iVar0] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_331[iVar0 /*8*/])))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(uParam0->f_331[iVar0 /*8*/]), false);
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(uParam0->f_331[iVar0 /*8*/])))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x446D
{
	uParam0->f_460 = 0;
}

int func_41(var uParam0)//Position - 0x447B
{
	return uParam0->f_460;
}

int func_42(int iParam0)//Position - 0x4488
{
	int iVar0;
	
	if (Global_1941273[iParam0 /*8*/] == -1)
	{
		iVar0 = func_47(func_46(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_43(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941273[iParam0 /*8*/] = iVar0;
	}
	return Global_1941273[iParam0 /*8*/];
}

void func_43(int iParam0, int iParam1)//Position - 0x44CC
{
	Global_1941273[iParam0 /*8*/] = iParam1;
	func_44(func_46(iParam0), iParam1, -1, 1, 0);
}

void func_44(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x44ED
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_45(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_45(int iParam0)//Position - 0x451D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_46(int iParam0)//Position - 0x4551
{
	switch (iParam0)
	{
		case 0:
			return 11353;
		
		default:
	}
	return 11353;
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x456F
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_45(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)//Position - 0x45AC
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_45(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)//Position - 0x45D8
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25335;
				
				case 3:
					return Global_262145.f_25336;
				
				case 4:
					return Global_262145.f_25337;
				
				case 5:
					return Global_262145.f_25338;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28672;
				
				case 3:
					return Global_262145.f_28673;
				
				case 4:
					return Global_262145.f_28674;
				
				case 5:
					return Global_262145.f_28675;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28839;
				
				case 3:
					return Global_262145.f_28840;
				
				case 4:
					return Global_262145.f_28841;
				
				case 5:
					return Global_262145.f_28842;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28873;
				
				case 3:
					return Global_262145.f_28874;
				
				case 4:
					return Global_262145.f_28875;
				
				case 5:
					return Global_262145.f_28876;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28877;
				
				case 3:
					return Global_262145.f_28878;
				
				case 4:
					return Global_262145.f_28879;
				
				case 5:
					return Global_262145.f_28880;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28568;
				
				case 3:
					return Global_262145.f_28569;
				
				case 4:
					return Global_262145.f_28570;
				
				case 5:
					return Global_262145.f_28571;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28843;
				
				case 3:
					return Global_262145.f_28844;
				
				case 4:
					return Global_262145.f_28845;
				
				case 5:
					return Global_262145.f_28846;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 50000;
				
				case 3:
					return 250000;
				
				case 4:
					return 750000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000000;
				
				case 3:
					return 5000000;
				
				case 4:
					return 10000000;
				
				case 5:
					return 20000000;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 30;
				
				case 3:
					return 60;
				
				case 4:
					return 120;
				
				case 5:
					return 240;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
	}
	return 999;
}

int func_50(int iParam0)//Position - 0x70A9
{
	bool bVar0;
	
	bVar0 = func_58(386, -1) == false;
	if (bVar0)
	{
		if (func_51(func_56(func_57(iParam0, bVar0), 3), -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_51(func_56(func_57(iParam0, bVar0), 4), -1))
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x7102
{
	var uVar0;
	int iVar1;
	
	if (func_54(iParam0) == 13122)
	{
		return 0;
	}
	uVar0 = func_53(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_52(iVar1));
}

int func_52(int iParam0)//Position - 0x7131
{
	return (iParam0 % 32);
}

int func_53(var uParam0, int iParam1)//Position - 0x713E
{
	int iVar0;
	
	iVar0 = func_47(func_54(uParam0), iParam1, 0);
	return iVar0;
}

int func_54(var uParam0)//Position - 0x7157
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_55(iVar0);
	if ((func_9() == 0 || func_8() == 0) || (func_9() == 999 && func_8() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10287;
				break;
			
			case 47:
				return 10290;
				break;
			
			case 48:
				return 10413;
				break;
			
			case 49:
				return 10416;
				break;
		}
	}
	return 13122;
}

int func_55(int iParam0)//Position - 0x7496
{
	return (iParam0 / 32);
}

int func_56(int iParam0, int iParam1)//Position - 0x74A3
{
	int iVar0;
	
	iVar0 = FILES::_0x10144267DD22866C(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_57(int iParam0, bool bParam1)//Position - 0x74C5
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_004");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_004");
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_005");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_005");
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_006");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_006");
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_007");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_007");
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_008");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_008");
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_009");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_009");
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_010");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_010");
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_011");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_011");
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_012");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_012");
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_013");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_013");
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_000");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_000");
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_001");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_001");
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_002");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_002");
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_003");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_003");
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_004");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_004");
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_005");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_005");
			}
			break;
		
		case 16:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_006");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_006");
			}
			break;
		
		case 17:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_007");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_007");
			}
			break;
		
		case 18:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_008");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_008");
			}
			break;
		
		case 19:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_009");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_009");
			}
			break;
		
		case 20:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_010");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_010");
			}
			break;
		
		case 21:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_011");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_011");
			}
			break;
		
		case 22:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_012");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_012");
			}
			break;
		
		case 23:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_013");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_013");
			}
			break;
		
		case 24:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_000");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_000");
			}
			break;
		
		case 25:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_001");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_001");
			}
			break;
		
		case 26:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_002");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_002");
			}
			break;
		
		case 27:
			if (bParam1)
			{
				return joaat("FM_Ind_M_Award_000");
			}
			else
			{
				return joaat("FM_Ind_F_Award_000");
			}
			break;
		
		case 28:
			if (bParam1)
			{
				return joaat("MP_Fli_M_Tshirt_000");
			}
			else
			{
				return joaat("MP_Fli_F_Tshirt_000");
			}
			break;
		
		case 29:
			if (bParam1)
			{
				return joaat("FM_LTS_M_Tshirt_000");
			}
			else
			{
				return joaat("FM_LTS_F_Tshirt_000");
			}
			break;
		
		case 30:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_000_m");
			}
			else
			{
				return joaat("MP_FM_OGA_000_f");
			}
			break;
		
		case 31:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_001_m");
			}
			else
			{
				return joaat("MP_FM_OGA_001_f");
			}
			break;
		
		case 32:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_002_m");
			}
			else
			{
				return joaat("MP_FM_OGA_002_f");
			}
			break;
		
		case 33:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_003_m");
			}
			else
			{
				return joaat("MP_FM_OGA_003_f");
			}
			break;
		
		case 34:
			if (bParam1)
			{
				return joaat("MP_Elite_M_Tshirt");
			}
			else
			{
				return joaat("MP_Elite_F_Tshirt");
			}
			break;
		
		case 35:
			if (bParam1)
			{
				return joaat("MP_Elite_M_Tshirt_1");
			}
			else
			{
				return joaat("MP_Elite_F_Tshirt_1");
			}
			break;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)//Position - 0x7978
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

void func_59(int iParam0)//Position - 0x7994
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "CLO_HST_A_0";
			sVar1 = "CLO_HST_AD_0";
			sVar2 = "DeathDefying";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 130;
			break;
		
		case 1:
			sVar0 = "CLO_HST_A_1";
			sVar1 = "CLO_HST_AD_1";
			sVar2 = "ForHire";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 122;
			break;
		
		case 2:
			sVar0 = "CLO_HST_A_2";
			sVar1 = "CLO_HST_AD_3";
			sVar2 = "LiveALittle";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 128;
			break;
		
		case 5:
			sVar0 = "CLO_HST_A_5";
			sVar1 = "CLO_HST_AD_6";
			sVar2 = "Decorated";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 125;
			break;
		
		case 7:
			sVar0 = "CLO_HST_A_7";
			sVar1 = "CLO_HST_AD_8";
			sVar2 = "OneManArmy";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 137;
			break;
		
		case 6:
			sVar0 = "CLO_HST_A_6";
			sVar1 = "CLO_HST_AD_7";
			sVar2 = "PsychoKiller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 133;
			break;
		
		case 8:
			sVar0 = "CLO_HST_A_8";
			sVar1 = "CLO_HST_AD_2";
			sVar2 = "ShotCaller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 123;
			break;
		
		case 34:
			sVar0 = "CLO_HSTM_U_3_0";
			sVar1 = "CLO_HST_AD_10";
			sVar2 = "EliteTshirt1";
			sVar3 = "MPTShirtAwards2";
			break;
	}
	iVar6 = 5;
	if (func_61(iVar4, 9) != 1)
	{
		iVar5 = 1;
	}
	if (iParam0 != 34)
	{
		iVar7 = func_49(iVar4, iVar6, 9);
		iVar8 = func_48(iVar4, -1);
	}
	else
	{
		iVar7 = 5;
		iVar8 = func_60();
	}
	func_62(sVar0, sVar1, sVar2, sVar3, iVar7, iVar8, -1, iVar5, &Global_1646672, 152, 144);
}

int func_60()//Position - 0x7B13
{
	int iVar0;
	
	if (func_66(3765, -1))
	{
		iVar0++;
	}
	if (func_66(3766, -1))
	{
		iVar0++;
	}
	if (func_66(3767, -1))
	{
		iVar0++;
	}
	if (func_66(3768, -1))
	{
		iVar0++;
	}
	if (func_66(3769, -1))
	{
		iVar0++;
	}
	return iVar0;
}

int func_61(int iParam0, int iParam1)//Position - 0x7B72
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return 1;
		
		case 39:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		case 63:
			return 1;
		
		case 16:
			return 1;
		
		case 0:
			return 1;
		
		case 12:
			return 1;
		
		case 11:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 15:
			return 1;
		
		case 17:
			return 1;
		
		case 21:
			return 1;
		
		case 14:
			return 1;
		
		case 22:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 126:
			return 1;
		
		case 127:
			return 1;
		
		case 128:
			return 1;
		
		case 129:
			return 1;
		
		case 130:
			return 1;
		
		case 67:
			return 1;
		
		case 120:
			return 1;
		
		case 121:
			return 1;
		
		case 122:
			return 1;
		
		case 123:
			return 1;
		
		case 124:
			return 1;
		
		case 125:
			return 1;
		
		case 131:
			return 1;
		
		case 132:
			return 1;
		
		case 133:
			return 1;
		
		case 134:
			return 1;
		
		case 135:
			return 1;
		
		case 136:
			return 1;
		
		case 137:
			return 1;
		
		case 138:
			return 1;
		
		case 139:
			return 1;
		
		case 140:
			return 1;
		
		case 141:
			return 1;
		
		case 142:
			return 1;
		
		case 143:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
		case 117:
		case 118:
		case 119:
			return 1;
			break;
	}
	return 0;
}

void func_62(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x805B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam8->f_1[iVar0] == 0)
		{
			func_64(iVar0, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_63(iVar0, sParam0, sParam1, iParam4, iParam5, uParam8);
			uParam8->f_1[iVar0] = 1;
			uParam8->f_473[iVar0] = iParam9;
			uParam8->f_486[iVar0] = iParam10;
			iVar0 = 12;
		}
		iVar0++;
	}
}

void func_63(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5)//Position - 0x80C5
{
	StringCopy(&(uParam5->f_14[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_111[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_208[iParam0] = uParam3;
	uParam5->f_221[iParam0] = uParam4;
}

void func_64(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, var uParam5)//Position - 0x80F9
{
	StringCopy(&(uParam5->f_234[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_331[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_428[iParam0] = func_65(iParam4);
	uParam5->f_441[iParam0] = uParam3;
}

int func_65(int iParam0)//Position - 0x8134
{
	switch (iParam0)
	{
		case 2:
			return 107;
			break;
		
		case 3:
			return 108;
			break;
		
		case 4:
			return 109;
			break;
		
		case 5:
			return 110;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)//Position - 0x8183
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_67(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x819F
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_78(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_76(iParam0, iParam2);
			break;
	}
	iVar0 = func_76(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_75(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_74(iParam0, iParam2, 0);
	sVar2 = func_73(iParam0, iParam1, iParam2, 0);
	sVar3 = func_72(iParam0, iParam2);
	sVar4 = func_71(iParam0, iParam2);
	iVar5 = func_70(iParam0, iVar0, iParam2);
	iVar6 = func_69(iParam0);
	iVar7 = func_68(iParam1);
	iVar8 = func_70(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 152, 144);
}

int func_68(int iParam0)//Position - 0x82DB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 1;
			break;
		
		case 3:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 5:
			iVar0 = 4;
			break;
	}
	return iVar0;
}

int func_69(int iParam0)//Position - 0x8334
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Global_1659575[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_INT(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2)//Position - 0x835C
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
	}
	return 999;
}

char* func_71(int iParam0, int iParam1)//Position - 0x84B2
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
		
		case 1:
			return "MPAWARDS5";
		
		case 2:
			return "MPAWARDS5";
		
		case 3:
			return "MPAWARDS6";
		
		default:
	}
	return "";
}

char* func_72(int iParam0, int iParam1)//Position - 0x8500
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
		
		case 1:
			return "DeathmatchCreator";
		
		case 2:
			return "PlayedCreation";
		
		case 3:
			return "CreatorsScore";
		
		default:
	}
	return "";
}

char* func_73(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x854E
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_70(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_686";
		
		case 1:
			return "AWS_688";
		
		case 2:
			return "AWS_689";
		
		case 3:
			return "AWS_690";
		
		default:
	}
	return "";
}

char* func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x85AF
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_686";
		
		case 1:
			return "AWT_688";
		
		case 2:
			return "AWT_689";
		
		case 3:
			return "AWT_690";
		
		default:
	}
	return "";
}

int func_75(int iParam0, int iParam1)//Position - 0x8602
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_76(int iParam0, int iParam1)//Position - 0x8641
{
	if (func_77(func_69(iParam0), func_70(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_77(func_69(iParam0), func_70(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_77(func_69(iParam0), func_70(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_77(func_69(iParam0), func_70(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_77(int iParam0, int iParam1)//Position - 0x86B2
{
	if (iParam1 <= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1)//Position - 0x86C6
{
	if (!func_77(func_69(iParam0), func_70(iParam0, 5, iParam1)))
	{
		return 0;
	}
	if (!func_77(func_69(iParam0), func_70(iParam0, 4, iParam1)))
	{
		return 2;
	}
	if (!func_77(func_69(iParam0), func_70(iParam0, 3, iParam1)))
	{
		return 3;
	}
	if (!func_77(func_69(iParam0), func_70(iParam0, 2, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_79(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x873B
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	switch (iParam1)
	{
		case 6:
		case 8:
			if (func_51(iParam0, -1))
			{
				iParam1 = 0;
			}
			break;
		
		case 7:
			if (func_51(iParam0, -1) == 0)
			{
				iParam1 = 5;
			}
			break;
	}
	iVar1 = func_84(iParam0);
	switch (iParam2)
	{
		case 9:
			iVar0 = 3;
			break;
	}
	if (iParam0 == 57)
	{
		iParam1 = 2;
	}
	else if (iParam0 == 58 || iParam0 == 9)
	{
		iParam1 = 3;
	}
	else if (iParam0 == 59 || iParam0 == 10)
	{
		iParam1 = 4;
	}
	else
	{
		iParam1 = 5;
	}
	sVar2 = func_83(iParam0, iVar0);
	sVar3 = func_82(iParam0, iVar0);
	sVar4 = func_81(iParam0, iVar0);
	sVar5 = func_80(iParam0, iVar0);
	iVar6 = func_49(iVar1, iParam1, 0);
	iVar7 = func_48(iVar1, -1);
	if (iVar1 == 64)
	{
		iVar6 = 1;
		iVar7 = 0;
	}
	iVar8 = -1;
	if (func_51(iParam0, -1))
	{
		iVar7 = func_49(func_84(iParam0), iParam1, 0);
		if (iVar1 == 64)
		{
			iVar7 = 1;
		}
	}
	iParam1 = 1;
	func_62(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar8, iParam1, uParam3, 152, 144);
}

char* func_80(int iParam0, int iParam1)//Position - 0x8865
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_81(int iParam0, int iParam1)//Position - 0x894A
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_82(int iParam0, int iParam1)//Position - 0x8DF6
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_FM_TAT9D";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_FM_TAT17D";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_FM_TAT24D";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_FM_TAT37D";
			break;
		
		case 46:
			return "TAT_FM_TAT38D";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_FM_TAT40D";
			break;
		
		case 49:
			return "TAT_FM_TAT41D";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_83(int iParam0, int iParam1)//Position - 0x92A2
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

int func_84(int iParam0)//Position - 0x975E
{
	switch (iParam0)
	{
		case 4:
			return 49;
		
		case 7:
			return 59;
		
		case 0:
			return 9;
		
		case 5:
			return 55;
		
		case 1:
			return 40;
		
		case 57:
			return 14;
		
		case 58:
			return 14;
		
		case 59:
			return 14;
		
		case 60:
			return 14;
		
		case 12:
			return 21;
		
		case 56:
			return 24;
		
		case 25:
			return 44;
		
		case 34:
			return 15;
		
		case 45:
			return 1;
		
		case 48:
			return 2;
		
		case 46:
			return 42;
		
		case 9:
			return 56;
		
		case 10:
			return 56;
		
		case 11:
			return 56;
		
		case 87:
			return 48;
		
		default:
	}
	return 64;
}

void func_85(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x9849
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_100(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_99();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_98(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar1 = func_99();
	sVar2 = func_96(iParam0, iParam2, 0);
	sVar3 = func_95(iParam0, iParam1, iParam2, 0);
	sVar4 = func_94(iParam0, iParam2);
	sVar5 = func_93(iParam0, iParam2);
	iVar6 = func_91(iParam0, iVar1, iParam2);
	iVar7 = func_88(iParam0, iVar1, iParam2);
	iVar8 = func_68(iParam1);
	iVar9 = func_91(iParam0, iVar8, iParam2);
	iVar10 = (iVar6 - iVar9);
	iVar11 = (iVar7 - iVar9);
	if (func_87(iParam0))
	{
		iVar12 = 100;
		switch (iParam0)
		{
			case 17:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 18:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 19:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 20:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 21:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
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
				iVar7 = 26;
				iVar6 = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				iVar11 = 0;
				uVar13 = func_86(joaat("mpply_heistfloworderprogress"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 18:
				iVar11 = 0;
				uVar13 = func_86(joaat("mpply_heistteamprogressbitset"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 19:
				iVar11 = 0;
				uVar13 = func_86(joaat("mpply_heistnodeathprogreitset"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 20:
				iVar11 = 0;
				uVar13 = func_86(joaat("mpply_heist_1stperson_prog"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 21:
				iVar11 = 0;
				uVar13 = func_86(joaat("mpply_heistmemberprogressbitset"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				iVar10 = func_91(iParam0, iVar8, iParam2);
				iVar11 = func_88(iParam0, iVar1, iParam2);
				break;
		}
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_62(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar12, iParam1, uParam3, 152, 144);
}

int func_86(int iParam0)//Position - 0x9C97
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x9CB5
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Global_1659583[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_BOOL(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_88(int iParam0, int iParam1, int iParam2)//Position - 0x9CDD
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_87(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_89(iParam0);
		
		case 4:
			return func_89(iParam0);
		
		case 5:
			return func_89(iParam0);
		
		case 7:
			return func_89(iParam0);
		
		case 8:
			return func_89(iParam0);
		
		case 9:
			return func_89(iParam0);
		
		case 10:
			return func_89(iParam0);
		
		case 11:
			return func_89(iParam0);
		
		default:
	}
	if (func_87(iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x9D8B
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	uVar1 = func_86(func_90(iParam0));
	bVar2 = false;
	while (bVar2 < 29)
	{
		if (BitTest(uVar1, bVar2))
		{
			iVar0++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_90(int iParam0)//Position - 0x9DC2
{
	switch (iParam0)
	{
		case 3:
			return joaat("mpply_gangops_allinorder");
		
		case 4:
			return joaat("mpply_gangops_loyalty");
		
		case 7:
			return joaat("mpply_gangops_loyalty2");
		
		case 8:
			return joaat("mpply_gangops_loyalty3");
		
		case 5:
			return joaat("mpply_gangops_crimmasmd");
		
		case 9:
			return joaat("mpply_gangops_crimmasmd2");
		
		case 10:
			return joaat("mpply_gangops_crimmasmd3");
		
		case 11:
			return joaat("mpply_gangops_support");
		
		default:
	}
	return joaat("mpply_gangops_allinorder");
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x9E46
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_87(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_92();
		
		case 4:
			return func_92();
		
		case 5:
			return func_92();
		
		case 7:
			return func_92();
		
		case 8:
			return func_92();
		
		case 9:
			return func_92();
		
		case 10:
			return func_92();
		
		case 11:
			return func_92();
		
		default:
	}
	return 1;
}

int func_92()//Position - 0x9ED3
{
	return 29;
}

char* func_93(int iParam0, int iParam1)//Position - 0x9EDD
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
		
		case 13:
			return "MpAwardHeists";
		
		case 14:
			return "MpAwardHeists";
		
		case 15:
			return "MpAwardHeists";
		
		case 16:
			return "MpAwardHeists";
		
		case 17:
			return "MpAwardHeists";
		
		case 18:
			return "MpAwardHeists";
		
		case 19:
			return "MpAwardHeists";
		
		case 20:
			return "MPAwardHeists";
		
		case 21:
			return "MPAwardHeists";
		
		case 1:
			return "MPAwardHeists2";
		
		case 2:
			return "MPAwardHeists2";
		
		case 6:
			return "MPAwardHeists2";
		
		case 3:
			return "MPAwardHeists2";
		
		case 4:
			return "MPAwardHeists2";
		
		case 5:
			return "MPAwardHeists2";
		
		case 7:
			return "MPAwardHeists2";
		
		case 8:
			return "MPAwardHeists2";
		
		case 9:
			return "MPAwardHeists2";
		
		case 10:
			return "MPAwardHeists2";
		
		case 11:
			return "MPAwardHeists2";
		
		default:
	}
	return "MPAwardHeists";
}

char* func_94(int iParam0, int iParam1)//Position - 0xA008
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
		
		case 13:
			return "GoToJail";
		
		case 14:
			return "LabReport";
		
		case 15:
			return "ProductPlacement";
		
		case 16:
			return "SmoothSailing";
		
		case 17:
			return "AllInOrder";
		
		case 18:
			return "Loyalty";
		
		case 19:
			return "CriminalMastermind";
		
		case 20:
			return "AnotherPerspective";
		
		case 21:
			return "SupportingRole";
		
		case 1:
			return "IAAFinale";
		
		case 2:
			return "SubmarineFinale";
		
		case 6:
			return "MissleSiloFinale";
		
		case 3:
			return "AllInOrderII";
		
		case 4:
			return "LoyaltyIV";
		
		case 5:
			return "CriminalMastermindIV";
		
		case 7:
			return "LoyaltyII";
		
		case 8:
			return "LoyaltyIII";
		
		case 9:
			return "CriminalMastermindII";
		
		case 10:
			return "CriminalMastermindIII";
		
		case 11:
			return "SupportingRoleII";
		
		default:
	}
	return "";
}

char* func_95(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA133
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_91(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWS_775";
		
		case 13:
			return "AWS_767";
		
		case 14:
			return "AWS_768";
		
		case 15:
			return "AWS_776";
		
		case 16:
			return "AWS_780";
		
		case 17:
			return "AWS_777";
		
		case 18:
			return "AWS_778";
		
		case 19:
			return "AWS_779";
		
		case 20:
			return "AWS_785";
		
		case 21:
			return "AWS_786";
		
		case 1:
			return "AWD_GANGOP0d";
		
		case 2:
			return "AWD_GANGOP1d";
		
		case 6:
			return "AWD_GANGOP2d";
		
		case 3:
			return "AWD_GANGOP3d";
		
		case 4:
			return "AWD_GANGOP7d";
		
		case 5:
			return "AWD_GANGOP9d";
		
		case 7:
			return "AWD_GANGOP4d";
		
		case 8:
			return "AWD_GANGOP6d";
		
		case 9:
			return "AWD_GANGOP5d";
		
		case 10:
			return "AWD_GANGOP8d";
		
		case 11:
			return "AWD_GANGO10d";
		
		default:
	}
	return "";
}

char* func_96(int iParam0, int iParam1, bool bParam2)//Position - 0xA271
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWT_775";
		
		case 13:
			return "AWT_767";
		
		case 14:
			return "AWT_768";
		
		case 15:
			return "AWT_776";
		
		case 16:
			return "AWT_780";
		
		case 17:
			return "AWT_777";
		
		case 18:
			return "AWT_778";
		
		case 19:
			return "AWT_779";
		
		case 20:
			return "AWT_785";
		
		case 21:
			return "AWT_786";
		
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_97(iParam0);
		
		default:
	}
	return "";
}

char* func_97(int iParam0)//Position - 0xA35D
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOPF0";
		
		case 2:
			return "AWD_GANGOPF1";
		
		case 6:
			return "AWD_GANGOPF2";
		
		case 3:
			return "AWD_GANGOPA";
		
		case 4:
			return "AWD_GANGOPL4";
		
		case 7:
			return "AWD_GANGOPL2";
		
		case 8:
			return "AWD_GANGOPL3";
		
		case 5:
			return "AWD_GANGOPM4";
		
		case 9:
			return "AWD_GANGOPM2";
		
		case 10:
			return "AWD_GANGOPM3";
		
		case 11:
			return "AWD_GANGOPSR";
		
		default:
	}
	return "";
}

int func_98(int iParam0, int iParam1)//Position - 0xA3FF
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 6:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()//Position - 0xA4E7
{
	return 5;
}

int func_100(int iParam0)//Position - 0xA4F0
{
	if (func_87(iParam0))
	{
		return 5;
	}
	return 0;
}

void func_101(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xA506
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_113(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_112();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_111(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar0 = func_112();
	sVar1 = func_110(iParam0, iParam2, 0);
	sVar2 = func_109(iParam0, iParam1, iParam2, 0);
	sVar3 = func_108(iParam0, iParam2);
	sVar4 = func_107(iParam0, iParam2);
	iVar5 = func_106(iParam0, iVar0, iParam2);
	if (func_105(iParam0, -1) == 1)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	iVar8 = func_68(iParam1);
	iVar9 = func_106(iParam0, iVar8, iParam2);
	iVar10 = (iVar5 - iVar9);
	iVar11 = (iVar6 - iVar9);
	switch (iParam0)
	{
		case 15:
			iVar6 = func_47(1153, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 16:
			iVar6 = func_47(1152, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 12:
			iVar6 = func_47(1088, -1, 0);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 25:
			if (func_105(iParam0, -1))
			{
				iVar6 = func_47(2117, -1, 0) * 7;
				iVar7 = func_47(2116, -1, 0);
				iVar6 = 7;
				iVar10 = 7;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(2117, -1, 0) * 7;
				iVar7 = func_47(2116, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 7)
				{
					iVar6 = 7;
				}
				iVar10 = 7;
				iVar11 = iVar6;
			}
			break;
		
		case 26:
			if (func_105(iParam0, -1))
			{
				iVar6 = func_47(2117, -1, 0) * 7;
				iVar7 = func_47(2116, -1, 0);
				iVar6 = 28;
				iVar10 = 28;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(2117, -1, 0) * 7;
				iVar7 = func_47(2116, -1, 0);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 28)
				{
					iVar6 = 28;
				}
				iVar10 = 28;
				iVar11 = iVar6;
			}
			break;
		
		case 146:
			if (func_105(iParam0, -1))
			{
				iVar6 = 43;
				iVar10 = 43;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_103();
				iVar10 = 43;
				iVar11 = iVar6;
			}
			break;
		
		case 151:
			if (func_105(iParam0, -1))
			{
				iVar6 = 4;
				iVar10 = 4;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(7254, -1, 0);
				iVar10 = 4;
				iVar11 = iVar6;
			}
			break;
		
		case 150:
			if (func_105(iParam0, -1))
			{
				iVar6 = 100;
				iVar10 = 100;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_47(7238, -1, 0);
				iVar10 = 100;
				iVar11 = iVar6;
			}
			break;
		
		case 59:
			if (func_105(iParam0, -1))
			{
				iVar6 = 6;
				iVar10 = 6;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_102();
				iVar10 = 6;
				iVar11 = iVar6;
			}
			break;
	}
	if (func_105(iParam0, -1))
	{
		iVar12 = 100;
	}
	else
	{
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar12, iParam1, uParam3, iParam0, 144);
}

int func_102()//Position - 0xA869
{
	int iVar0;
	
	iVar0 = func_47(8283, -1, 0);
	if (BitTest(iVar0, 19))
	{
		return 6;
	}
	else if (BitTest(iVar0, 4))
	{
		return 5;
	}
	else if (BitTest(iVar0, 3))
	{
		return 4;
	}
	else if (BitTest(iVar0, 2))
	{
		return 3;
	}
	else if (BitTest(iVar0, 1))
	{
		return 2;
	}
	else if (BitTest(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_103()//Position - 0xA8CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_104(iVar0) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_104(int iParam0)//Position - 0xA8FC
{
	switch (iParam0)
	{
		case default:
			break;
		
		case 0:
			return func_47(11014, -1, 0);
		
		case 1:
			return func_47(11015, -1, 0);
		
		case 2:
			return func_47(11016, -1, 0);
		
		case 3:
			return func_47(11017, -1, 0);
		
		case 4:
			return func_47(11018, -1, 0);
		
		case 5:
			return func_47(11019, -1, 0);
		
		case 6:
			return func_47(11020, -1, 0);
		
		case 7:
			return func_47(11021, -1, 0);
		
		case 8:
			return func_47(11022, -1, 0);
		
		case 9:
			return func_47(11023, -1, 0);
		
		case 10:
			return func_47(11024, -1, 0);
		
		case 11:
			return func_47(11025, -1, 0);
		
		case 12:
			return func_47(11026, -1, 0);
		
		case 13:
			return func_47(11027, -1, 0);
		
		case 14:
			return func_47(11028, -1, 0);
		
		case 15:
			return func_47(11029, -1, 0);
		
		case 16:
			return func_47(11030, -1, 0);
		
		case 17:
			return func_47(11031, -1, 0);
		
		case 18:
			return func_47(11032, -1, 0);
		
		case 19:
			return func_47(11033, -1, 0);
		
		case 20:
			return func_47(11034, -1, 0);
		
		case 21:
			return func_47(11035, -1, 0);
		
		case 22:
			return func_47(11036, -1, 0);
		
		case 23:
			return func_47(11037, -1, 0);
		
		case 24:
			return func_47(11038, -1, 0);
		
		case 25:
			return func_47(11039, -1, 0);
		
		case 26:
			return func_47(11040, -1, 0);
		
		case 27:
			return func_47(11041, -1, 0);
		
		case 28:
			return func_47(11042, -1, 0);
		
		case 29:
			return func_47(11043, -1, 0);
		
		case 30:
			return func_47(11044, -1, 0);
		
		case 31:
			return func_47(11045, -1, 0);
		
		case 32:
			return func_47(11046, -1, 0);
		
		case 33:
			return func_47(11047, -1, 0);
		
		case 34:
			return func_47(11048, -1, 0);
		
		case 35:
			return func_47(11049, -1, 0);
		
		case 36:
			return func_47(11050, -1, 0);
		
		case 37:
			return func_47(11051, -1, 0);
		
		case 38:
			return func_47(11052, -1, 0);
		
		case 39:
			return func_47(11053, -1, 0);
		
		case 40:
			return func_47(11054, -1, 0);
		
		case 41:
			return func_47(11055, -1, 0);
		
		case 42:
			return func_47(11056, -1, 0);
		
		case 43:
			return func_47(11057, -1, 0);
		
		case 44:
			return func_47(11058, -1, 0);
		
		case 45:
			return func_47(11059, -1, 0);
		
		case 46:
			return func_47(11060, -1, 0);
		
		case 47:
			return func_47(11061, -1, 0);
		
		case 48:
			return func_47(11062, -1, 0);
		
		case 49:
			return func_47(11063, -1, 0);
	}
	return 0;
}

int func_105(int iParam0, int iParam1)//Position - 0xAC93
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_45(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0xACBF
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 15:
			return 25;
			break;
		
		case 16:
			return 25;
			break;
		
		case 12:
			return 25;
			break;
		
		case 25:
			return 7;
			break;
		
		case 26:
			return 28;
			break;
		
		case 146:
			return 43;
			break;
		
		case 151:
			return 4;
			break;
		
		case 150:
			return 100;
			break;
		
		case 59:
			return 6;
			break;
	}
	return 1;
}

char* func_107(int iParam0, int iParam1)//Position - 0xAD56
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards5";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards5";
		
		case 8:
			return "MPAwards5";
		
		case 10:
			return "MPAwards5";
		
		case 11:
			return "MPAwards5";
		
		case 12:
			return "MPAwards5";
		
		case 13:
			return "MPAwards5";
		
		case 14:
			return "MPAwards5";
		
		case 15:
			return "MPAwards5";
		
		case 16:
			return "MPAwards5";
		
		case 17:
			return "MPAwards5";
		
		case 18:
			return "MPAwards5";
		
		case 20:
			return "MPAwards5";
		
		case 21:
			return "MPAwards5";
		
		case 22:
			return "MPAWARDS5";
		
		case 23:
			return "MPAwards4";
		
		case 25:
			return "MPAwardHeists";
		
		case 26:
			return "MPAwardHeists";
		
		case 27:
			return "MPAWARDS6";
		
		case 144:
			return "MPAwardHeists";
		
		case 143:
			return "MPAwardHeists";
		
		case 146:
			return "MPAwardHeists";
		
		case 147:
			return "MPAwardHeists";
		
		case 148:
			return "MPAwardHeists";
		
		case 149:
			return "MPAwardNightclub";
		
		case 150:
			return "MPAwardNightclub";
		
		case 151:
			return "MPAwardNightclub";
		
		case 30:
			return "MPAwardsArena";
		
		case 31:
			return "MPAwardsArena";
		
		case 32:
			return "MPAwardsArena";
		
		case 33:
			return "MPAwardsArena";
		
		case 34:
			return "MPAwardsArena";
		
		case 35:
			return "MPAwardsArena";
		
		case 36:
			return "MPAwardsArena";
		
		case 37:
			return "MPAwardsArena";
		
		case 38:
			return "MPAwardsArena";
		
		case 39:
			return "MPAwardsArena";
		
		case 40:
			return "MPAwardsArena";
		
		case 41:
			return "MPAwardsArena";
		
		case 42:
			return "MPAwardsArena";
		
		case 43:
			return "MPAwardsArena";
		
		case 44:
			return "MPAwardsArena";
		
		case 45:
			return "MPAwardsArena";
		
		case 46:
			return "MPAwardsArena";
		
		case 47:
			return "MPAwardsArena";
		
		case 48:
			return "MPAwardsArena";
		
		case 49:
			return "MPAwardsArena";
		
		case 50:
			return "MPAwardsArena";
		
		case 51:
			return "MPAwardsArena";
		
		case 52:
			return "MPAwardsArena";
		
		case 53:
			return "MPAwardCasino";
		
		case 54:
			return "MPAwardCasino";
		
		case 55:
			return "MPAwardCasino";
		
		case 56:
			return "MPAwardCasino";
		
		case 57:
			return "MPAwardCasino";
		
		case 58:
			return "MPAwardCasino";
		
		case 59:
			return "MPAwardCasino";
		
		case 62:
			return "MPAwardCasino";
		
		case 60:
			return "MPAwardCasino";
		
		case 61:
			return "MPAwardCasino";
		
		case 63:
			return "MPAwardCasinoHeist";
		
		case 64:
			return "MPAwardCasinoHeist";
		
		case 65:
			return "MPAwardCasinoHeist";
		
		case 66:
			return "MPAwardCasinoHeist";
		
		case 67:
			return "MPAwardCasinoHeist";
		
		case 68:
			return "MPAwardCasinoHeist";
		
		case 69:
			return "MPAwardCasinoHeist";
		
		case 70:
			return "MPAwardCasinoHeist";
		
		case 71:
			return "MPAwardCasinoHeist";
		
		case 72:
			return "MPAwardCasinoHeist";
		
		case 73:
			return "MPAwardCasinoHeist";
		
		case 74:
			return "MPAwardCasinoHeist";
		
		case 75:
			return "MPAwardCasinoHeist";
		
		case 76:
			return "MPAwardCasinoHeist";
		
		case 77:
			return "MPAwardCasinoHeist";
		
		case 78:
			return "MPAwardCasinoHeist";
		
		case 79:
			return "MPAwardCasinoHeist";
		
		case 80:
			return "MPAwardCasinoHeist";
		
		case 81:
			return "MPAwardCasinoHeist";
		
		case 82:
			return "MPAwardCasinoHeist";
		
		case 83:
			return "MPAwardCasinoHeist";
		
		case 84:
			return "MPAwardCasinoHeist";
		
		case 85:
			return "MPAwardCasinoHeist";
		
		case 86:
			return "MPAwardCasinoHeist";
		
		case 87:
			return "MPAwardCasinoHeist";
		
		case 88:
			return "MPAwardCasinoHeist";
		
		case 89:
			return "MPAwardSummer2020";
		
		case 90:
			return "MPAwardSummer2020";
		
		case 93:
			return "MPAwardSummer2020";
		
		case 92:
			return "MPAwardSummer2020";
		
		case 91:
			return "MPAwardSummer2020";
		
		case 94:
			return "MPAwardSummer2020";
		
		case 95:
			return "MPAwardIslandHeist";
		
		case 96:
			return "MPAwardIslandHeist";
		
		case 97:
			return "MPAwardIslandHeist";
		
		case 98:
			return "MPAwardIslandHeist";
		
		case 99:
			return "MPAwardIslandHeist";
		
		case 100:
			return "MPAwardIslandHeist";
		
		case 101:
			return "MPAwardIslandHeist";
		
		case 102:
			return "MPAwardIslandHeist";
		
		case 103:
			return "MPAwardIslandHeist";
		
		case 104:
			return "MPAwardIslandHeist";
		
		case 105:
			return "MPAwardIslandHeist";
		
		case 106:
			return "MPAwardIslandHeist";
		
		case 107:
			return "MPAwardIslandHeist";
		
		case 108:
			return "MPAwardIslandHeist";
		
		case 109:
			return "MPAwardIslandHeist";
		
		case 110:
			return "MPAwardIslandHeist";
		
		case 111:
			return "MPAwardIslandHeist";
		
		case 112:
			return "MPAwardIslandHeist";
		
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return "MPAwardTunerPack";
			break;
		
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return "MPAwardsFixer";
			break;
	}
	return "";
}

char* func_108(int iParam0, int iParam1)//Position - 0xB3FB
{
	if (iParam1 == 9)
	{
		iParam1 = 9;
	}
	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
		
		case 2:
			return "HoleInOne";
		
		case 3:
			return "TargetGridGranny";
		
		case 4:
			return "TennisFiveSets";
		
		case 5:
			return "TennisStraightSets";
		
		case 6:
			return "ClearAllGangHideouts";
		
		case 7:
			return "SixDartCheckout";
		
		case 8:
			return "WinEveryGameModeOnce";
		
		case 10:
			return "WinEveryTypeOfRace";
		
		case 11:
			return "HoldaRaceWorldRecord";
		
		case 12:
			return "Wear25DifferentItemsOfClothing";
		
		case 13:
			return "FullyModACar";
		
		case 14:
			return "WinACustomClassRace";
		
		case 15:
			return "Play25DifferentDeathmatches";
		
		case 16:
			return "Play25DifferentRaces";
		
		case 17:
			return "MostKillsInGangAttack";
		
		case 18:
			return "MostKillsInSurvival";
		
		case 20:
			return "Kill3InARaceAndWin";
		
		case 21:
			return "GetATattooOnEachBodyPart";
		
		case 22:
			return "10KillStreakDeathmatch";
		
		case 23:
			return "Unirider";
		
		case 25:
			return "goaloriented";
		
		case 26:
			return "overachiever";
		
		case 27:
			return "joyrider";
		
		case 144:
			return "CantTouchThis";
		
		case 143:
			return "FairPlay";
		
		case 146:
			return "JackOfAllTrades";
		
		case 147:
			return "ItTakesTwo";
		
		case 148:
			return "Showroom";
		
		case 149:
			return "Coordinated";
		
		case 150:
			return "HotSpot";
		
		case 151:
			return "Clubber";
		
		case 30:
			return "BEGINNER";
		
		case 31:
			return "FIELDFILLER";
		
		case 32:
			return "ArmchairRracer";
		
		case 33:
			return "LEARNER";
		
		case 34:
			return "SUNDAYDRIVER";
		
		case 35:
			return "THEROOKIE";
		
		case 36:
			return "BUMPANDRUN";
		
		case 37:
			return "GEARHEAD";
		
		case 38:
			return "DOORSLAMMER";
		
		case 39:
			return "HOTLAP";
		
		case 40:
			return "ARENAAMATEUR";
		
		case 41:
			return "PAINTTRADER";
		
		case 42:
			return "SHUNTER";
		
		case 43:
			return "JOCK";
		
		case 44:
			return "WARRIOR";
		
		case 45:
			return "TBONE";
		
		case 46:
			return "MAYHEM";
		
		case 47:
			return "WRECKER";
		
		case 48:
			return "CRASHCOURSE";
		
		case 49:
			return "ARENALEGEND";
		
		case 50:
			return "PEGASUS";
		
		case 51:
			return "contactsport";
		
		case 52:
			return "UNSTOPPABLE";
		
		case 53:
			return "LooseCheng";
		
		case 54:
			return "HouseKeeping";
		
		case 55:
			return "StrongArmTactics";
		
		case 56:
			return "PlayToWin";
		
		case 57:
			return "BadBeat";
		
		case 58:
			return "CashingOut";
		
		case 59:
			return "StraightFlush";
		
		case 62:
			return "LuckyLucky";
		
		case 60:
			return "TopPair";
		
		case 61:
			return "FullHouse";
		
		case 63:
			return "SCOPEOUT";
		
		case 64:
			return "ALLCREWEDUP";
		
		case 65:
			return "MOVINGON";
		
		case 66:
			return "AfterParty";
		
		case 67:
			return "GUNMAN";
		
		case 68:
			return "SmashAndGrab";
		
		case 69:
			return "HiddenInPlainSight";
		
		case 70:
			return "Undetected";
		
		case 71:
			return "AllRounder";
		
		case 72:
			return "EliteThief";
		
		case 73:
			return "Professional";
		
		case 74:
			return "SupportAct";
		
		case 75:
			return "Shafted";
		
		case 76:
			return "Collector";
		
		case 77:
			return "Deadeye";
		
		case 78:
			return "PistolAtDawn";
		
		case 79:
			return "BeatTheTraffic";
		
		case 80:
			return "AllWheels";
		
		case 81:
			return "FEELINGROGGY";
		
		case 82:
			return "ApeEscape";
		
		case 83:
			return "MonkeyMind";
		
		case 84:
			return "AquaticApe";
		
		case 85:
			return "KeepingTheFaith";
		
		case 86:
			return "TrueLove";
		
		case 87:
			return "Nemesis";
		
		case 88:
			return "Friendzoned";
		
		case 89:
			return "KingOfQub3d";
		
		case 90:
			return "Qubism";
		
		case 93:
			return "CrankItTo11";
		
		case 92:
			return "GodofQub3d";
		
		case 91:
			return "Qubits";
		
		case 94:
			return "1111";
		
		case 95:
			return "Inandout";
		
		case 96:
			return "EasyAccess";
		
		case 97:
			return "ItsaSteal";
		
		case 98:
			return "MaximumDistruption";
		
		case 99:
			return "TheIslandHeist";
		
		case 100:
			return "GoingAlone";
		
		case 101:
			return "Teamwork";
		
		case 102:
			return "TravelPlans";
		
		case 103:
			return "ProfessionalThief";
		
		case 104:
			return "CatBurglar";
		
		case 105:
			return "OneOfThem";
		
		case 106:
			return "GoforGold";
		
		case 107:
			return "Elitist";
		
		case 108:
			return "Blowhard";
		
		case 109:
			return "HelpingOut";
		
		case 110:
			return "Courier";
		
		case 111:
			return "PartyVibes";
		
		case 112:
			return "HelpingHand";
		
		case 113:
			return "LSCarMeet";
		
		case 114:
			return "ProCarExporter";
		
		case 115:
			return "TheUnionDepositoryContract";
		
		case 116:
			return "TheSuperdollarDeal";
		
		case 117:
			return "TheBankContract";
		
		case 118:
			return "TheECUJob";
		
		case 119:
			return "ThePrisionContract";
		
		case 120:
			return "TheAgencyDeal";
		
		case 121:
			return "TheLostContract";
		
		case 122:
			return "TheDataContract";
		
		case 123:
			return "StraighttoVideo";
		
		case 124:
			return "MonkeyseeMonkeydo";
		
		case 125:
			return "Trainedtokill";
		
		case 126:
			return "TheDirector";
		
		case 127:
			return "OnCourse";
		
		case 128:
			return "TheNighClubLeak";
		
		case 129:
			return "TheCountryClubLeak";
		
		case 130:
			return "TheSouthCentralLeak";
		
		case 131:
			return "StudioTime";
		
		case 132:
			return "DontFuckWithDre";
		
		case 133:
			return "Backup";
		
		case 134:
			return "SeedCapitalFranklin";
		
		case 135:
			return "FireitUpFranklin";
		
		case 136:
			return "OGKushFranklin";
		
		case 137:
			return "ContractKiller";
		
		case 138:
			return "ADogsBestFriend";
		
		case 139:
			return "SoundCheck";
		
		case 140:
			return "SeedCapitaLamar";
		
		case 141:
			return "FireItUpLamar";
		
		case 142:
			return "OGKushLamar";
			break;
	}
	return "";
}

char* func_109(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBB79
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_521";
		
		case 2:
			return "AWS_660";
		
		case 3:
			return "AWS_667";
		
		case 4:
			return "AWS_670";
		
		case 5:
			return "AWS_671";
		
		case 6:
			return "AWS_691";
		
		case 7:
			return "AWS_697";
		
		case 8:
			return "AWS_701";
		
		case 10:
			return "AWS_705";
		
		case 11:
			return "AWS_706";
		
		case 12:
			return "AWS_709";
		
		case 13:
			return "AWS_711";
		
		case 14:
			return "AWS_712";
		
		case 15:
			return "AWS_714";
		
		case 16:
			return "AWS_715";
		
		case 17:
			return "AWS_718";
		
		case 18:
			return "AWS_719";
		
		case 20:
			return "AWS_725";
		
		case 21:
			return "AWS_727";
		
		case 22:
			return "AWS_717";
		
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_729_M";
			}
			else
			{
				return "AWS_729";
			}
			break;
		
		case 25:
			return "AWS_783";
		
		case 26:
			return "AWS_784";
		
		case 27:
			return "AWS_771";
		
		case 144:
			return "AWS_751";
		
		case 148:
			return "AWS_763";
		
		case 143:
			return "AWS_754";
		
		case 146:
			return "AWS_765";
		
		case 147:
			return "AWS_756";
		
		case 149:
			return "AWS_793";
		
		case 150:
			return "AWS_794";
		
		case 151:
			return "AWS_795";
		
		case 30:
			return "AWS_796";
		
		case 31:
			return "AWS_797";
		
		case 32:
			return "AWS_798";
		
		case 33:
			return "AWS_799";
		
		case 34:
			return "AWS_800";
		
		case 35:
			return "AWS_801";
		
		case 36:
			return "AWS_802";
		
		case 37:
			return "AWS_803";
		
		case 38:
			return "AWS_804";
		
		case 39:
			return "AWS_805";
		
		case 40:
			return "AWS_806";
		
		case 41:
			return "AWS_807";
		
		case 42:
			return "AWS_808";
		
		case 43:
			return "AWS_809";
		
		case 44:
			return "AWS_810";
		
		case 45:
			return "AWS_811";
		
		case 46:
			return "AWS_812";
		
		case 47:
			return "AWS_813";
		
		case 48:
			return "AWS_814";
		
		case 49:
			return "AWS_815";
		
		case 50:
			return "AWS_816";
		
		case 51:
			return "AWS_819";
		
		case 52:
			return "AWS_820";
		
		case 53:
			return "AWS_836";
		
		case 54:
			return "AWS_837";
		
		case 55:
			return "AWS_838";
		
		case 56:
			return "AWS_839";
		
		case 57:
			return "AWS_840";
		
		case 58:
			return "AWS_841";
		
		case 59:
			return "AWS_842";
		
		case 62:
			return "AWS_846";
		
		case 60:
			return "AWS_843";
		
		case 61:
			return "AWS_844";
		
		case 63:
			return "AWS_857";
		
		case 64:
			return "AWS_858";
		
		case 65:
			return "AWS_859";
		
		case 66:
			return "AWS_860";
		
		case 67:
			return "AWS_861";
		
		case 68:
			return "AWS_862";
		
		case 69:
			return "AWS_863";
		
		case 70:
			return "AWS_864";
		
		case 71:
			return "AWS_865";
		
		case 72:
			return "AWS_866";
		
		case 73:
			return "AWS_867";
		
		case 74:
			return "AWS_868";
		
		case 75:
			return "AWS_869";
		
		case 76:
			return "AWS_870";
		
		case 77:
			return "AWS_871";
		
		case 78:
			return "AWS_872";
		
		case 79:
			return "AWS_873";
		
		case 80:
			return "AWS_874";
		
		case 81:
			return "AWS_875";
		
		case 82:
			return "AWS_876";
		
		case 83:
			return "AWS_877";
		
		case 84:
			return "AWS_878";
		
		case 85:
			return "AWS_879";
		
		case 86:
			return "AWS_880";
		
		case 87:
			return "AWS_881";
		
		case 88:
			return "AWS_882";
		
		case 89:
			return "AWS_886";
		
		case 90:
			return "AWS_887";
		
		case 93:
			return "AWS_888";
		
		case 92:
			return "AWS_889";
		
		case 91:
			return "AWS_890";
		
		case 94:
			return "AWS_891";
		
		case 95:
			return "AWS_917";
		
		case 96:
			return "AWS_918";
		
		case 97:
			return "AWS_919";
		
		case 98:
			return "AWS_920";
		
		case 99:
			return "AWS_921";
		
		case 100:
			return "AWS_922";
		
		case 101:
			return "AWS_923";
		
		case 102:
			return "AWS_924";
		
		case 103:
			return "AWS_925";
		
		case 104:
			return "AWS_926";
		
		case 105:
			return "AWS_927";
		
		case 106:
			return "AWS_928";
		
		case 107:
			return "AWS_929";
		
		case 108:
			return "AWS_930";
		
		case 109:
			return "AWS_931";
		
		case 110:
			return "AWS_932";
		
		case 111:
			return "AWS_933";
		
		case 112:
			return "AWS_934";
		
		case 113:
			return "AWS_944";
		
		case 114:
			return "AWS_951";
		
		case 115:
			return "AWS_953";
		
		case 116:
			return "AWS_954";
		
		case 117:
			return "AWS_955";
		
		case 118:
			return "AWS_956";
		
		case 119:
			return "AWS_957";
		
		case 120:
			return "AWS_958";
		
		case 121:
			return "AWS_959";
		
		case 122:
			return "AWS_960";
		
		case 123:
			return "AWS_963";
		
		case 124:
			return "AWS_964";
		
		case 125:
			return "AWS_965";
		
		case 126:
			return "AWS_966";
		
		case 127:
			return "AWS_968";
		
		case 128:
			return "AWS_969";
		
		case 129:
			return "AWS_970";
		
		case 130:
			return "AWS_971";
		
		case 131:
			return "AWS_972";
		
		case 132:
			return "AWS_973";
		
		case 133:
			return "AWS_974";
		
		case 134:
			return "AWS_975";
		
		case 135:
			return "AWS_977";
		
		case 136:
			return "AWS_984";
		
		case 137:
			return "AWS_980";
		
		case 138:
			return "AWS_981";
		
		case 139:
			return "AWS_982";
		
		case 140:
			return "AWS_976";
		
		case 141:
			return "AWS_986";
		
		case 142:
			return "AWS_985";
	}
	return "";
}

char* func_110(int iParam0, int iParam1, bool bParam2)//Position - 0xC310
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_521";
		
		case 2:
			return "AWT_660";
		
		case 3:
			return "AWT_667";
		
		case 4:
			return "AWT_670";
		
		case 5:
			return "AWT_671";
		
		case 6:
			return "AWT_691";
		
		case 7:
			return "AWT_697";
		
		case 8:
			return "AWT_701";
		
		case 10:
			return "AWT_705";
		
		case 11:
			return "AWT_706";
		
		case 12:
			return "AWT_709";
		
		case 13:
			return "AWT_711";
		
		case 14:
			return "AWT_712";
		
		case 15:
			return "AWT_714";
		
		case 16:
			return "AWT_715";
		
		case 17:
			return "AWT_718";
		
		case 18:
			return "AWT_719";
		
		case 20:
			return "AWT_725";
		
		case 21:
			return "AWT_727";
		
		case 22:
			return "AWT_717";
		
		case 23:
			return "AWT_729";
		
		case 25:
			return "AWT_783";
		
		case 26:
			return "AWT_784";
		
		case 144:
			return "AWT_751";
		
		case 143:
			return "AWT_754";
		
		case 146:
			return "AWT_765";
		
		case 148:
			return "AWT_763";
		
		case 147:
			return "AWT_756";
			break;
		
		case 149:
			return "AWT_793";
		
		case 150:
			return "AWT_794";
		
		case 151:
			return "AWT_795";
		
		case 30:
			return "AWT_796";
		
		case 31:
			return "AWT_797";
		
		case 32:
			return "AWT_798";
		
		case 33:
			return "AWT_799";
		
		case 34:
			return "AWT_800";
		
		case 35:
			return "AWT_801";
		
		case 36:
			return "AWT_802";
		
		case 37:
			return "AWT_803";
		
		case 38:
			return "AWT_804";
		
		case 39:
			return "AWT_805";
		
		case 40:
			return "AWT_806";
		
		case 41:
			return "AWT_807";
		
		case 42:
			return "AWT_808";
		
		case 43:
			return "AWT_809";
		
		case 44:
			return "AWT_810";
		
		case 45:
			return "AWT_811";
		
		case 46:
			return "AWT_812";
		
		case 47:
			return "AWT_813";
		
		case 48:
			return "AWT_814";
		
		case 49:
			return "AWT_815";
		
		case 50:
			return "AWT_816";
		
		case 51:
			return "AWT_819";
		
		case 52:
			return "AWT_820";
		
		case 53:
			return "AWT_836";
		
		case 54:
			return "AWT_837";
		
		case 55:
			return "AWT_838";
		
		case 56:
			return "AWT_839";
		
		case 57:
			return "AWT_840";
		
		case 58:
			return "AWT_841";
		
		case 59:
			return "AWT_842";
		
		case 62:
			return "AWT_846";
		
		case 60:
			return "AWT_843";
		
		case 61:
			return "AWT_844";
		
		case 63:
			return "AWT_857";
		
		case 64:
			return "AWT_858";
		
		case 65:
			return "AWT_859";
		
		case 66:
			return "AWT_860";
		
		case 67:
			return "AWT_861";
		
		case 68:
			return "AWT_862";
		
		case 69:
			return "AWT_863";
		
		case 70:
			return "AWT_864";
		
		case 71:
			return "AWT_865";
		
		case 72:
			return "AWT_866";
		
		case 73:
			return "AWT_867";
		
		case 74:
			return "AWT_868";
		
		case 75:
			return "AWT_869";
		
		case 76:
			return "AWT_870";
		
		case 77:
			return "AWT_871";
		
		case 78:
			return "AWT_872";
		
		case 79:
			return "AWT_873";
		
		case 80:
			return "AWT_874";
		
		case 81:
			return "AWT_875";
		
		case 82:
			return "AWT_876";
		
		case 83:
			return "AWT_877";
		
		case 84:
			return "AWT_878";
		
		case 85:
			return "AWT_879";
		
		case 86:
			return "AWT_880";
		
		case 87:
			return "AWT_881";
		
		case 88:
			return "AWT_882";
		
		case 89:
			return "AWT_886";
		
		case 90:
			return "AWT_887";
		
		case 93:
			return "AWT_888";
		
		case 92:
			return "AWT_889";
		
		case 91:
			return "AWT_890";
		
		case 94:
			return "AWT_891";
		
		case 95:
			return "AWT_917";
		
		case 96:
			return "AWT_918";
		
		case 97:
			return "AWT_919";
		
		case 98:
			return "AWT_920";
		
		case 99:
			return "AWT_921";
		
		case 100:
			return "AWT_922";
		
		case 101:
			return "AWT_923";
		
		case 102:
			return "AWT_924";
		
		case 103:
			return "AWT_925";
		
		case 104:
			return "AWT_926";
		
		case 105:
			return "AWT_927";
		
		case 106:
			return "AWT_928";
		
		case 107:
			return "AWT_929";
		
		case 108:
			return "AWT_930";
		
		case 109:
			return "AWT_931";
		
		case 110:
			return "AWT_932";
		
		case 111:
			return "AWT_933";
		
		case 112:
			return "AWT_934";
		
		case 113:
			return "AWT_944";
		
		case 114:
			return "AWT_951";
		
		case 115:
			return "AWT_953";
		
		case 116:
			return "AWT_954";
		
		case 117:
			return "AWT_955";
		
		case 118:
			return "AWT_956";
		
		case 119:
			return "AWT_957";
		
		case 120:
			return "AWT_958";
		
		case 121:
			return "AWT_959";
		
		case 122:
			return "AWT_960";
		
		case 123:
			return "AWT_963";
		
		case 124:
			return "AWT_964";
		
		case 125:
			return "AWT_965";
		
		case 126:
			return "AWT_966";
		
		case 127:
			return "AWT_968";
		
		case 128:
			return "AWT_969";
		
		case 129:
			return "AWT_970";
		
		case 130:
			return "AWT_971";
		
		case 131:
			return "AWT_972";
		
		case 132:
			return "AWT_973";
		
		case 133:
			return "AWT_974";
		
		case 134:
			return "AWT_975";
		
		case 135:
			return "AWT_977";
		
		case 136:
			return "AWT_984";
		
		case 137:
			return "AWT_980";
		
		case 138:
			return "AWT_981";
		
		case 139:
			return "AWT_982";
		
		case 140:
			return "AWT_976";
		
		case 141:
			return "AWT_986";
		
		case 142:
			return "AWT_985";
	}
	return "";
}

int func_111(int iParam0, int iParam1)//Position - 0xCA82
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 144:
			return 1;
		
		case 143:
			return 1;
		
		case 146:
			return 1;
		
		case 148:
			return 1;
		
		case 147:
			return 1;
		
		case 149:
			return 1;
		
		case 150:
			return 1;
		
		case 151:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 53:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 62:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 63:
			return 1;
		
		case 64:
			return 1;
		
		case 65:
			return 1;
		
		case 66:
			return 1;
		
		case 67:
			return 1;
		
		case 68:
			return 1;
		
		case 69:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
			return 1;
		
		case 89:
			return 1;
		
		case 90:
			return 1;
		
		case 93:
			return 1;
		
		case 92:
			return 1;
		
		case 91:
			return 1;
		
		case 94:
			return 1;
		
		case 95:
			return 1;
		
		case 96:
			return 1;
		
		case 97:
			return 1;
		
		case 98:
			return 1;
		
		case 99:
			return 1;
		
		case 100:
			return 1;
		
		case 101:
			return 1;
		
		case 102:
			return 1;
		
		case 103:
			return 1;
		
		case 104:
			return 1;
		
		case 105:
			return 1;
		
		case 106:
			return 1;
		
		case 107:
			return 1;
		
		case 108:
			return 1;
		
		case 109:
			return 1;
		
		case 110:
			return 1;
		
		case 111:
			return 1;
		
		case 112:
			return 1;
		
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 1;
			break;
	}
	return 0;
}

int func_112()//Position - 0xCFD2
{
	return 5;
}

int func_113(int iParam0)//Position - 0xCFDB
{
	if (func_105(iParam0, -1))
	{
		return 5;
	}
	return 0;
}

void func_114(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xCFF2
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_120(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_119(iParam0, iParam2);
			break;
	}
	iVar0 = func_119(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_61(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_118(iParam0, iParam2);
	sVar2 = func_117(iParam0, iParam1, iParam2);
	sVar3 = func_116(iParam0, iParam1, iParam2);
	sVar4 = func_115(iParam0, iParam1, iParam2);
	iVar5 = func_49(iParam0, iVar0, iParam2);
	iVar6 = func_48(iParam0, -1);
	iVar7 = func_68(iParam1);
	iVar8 = func_49(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_62(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 152, iParam0);
}

char* func_115(int iParam0, int iParam1, int iParam2)//Position - 0xD132
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
		
		case 39:
			return "MPAwards5";
		
		case 51:
			return "MPAwards5";
		
		case 52:
			return "MPAwards5";
		
		case 16:
			return "MPAwards2";
		
		case 60:
			return "MPAwards4";
		
		case 61:
			return "MPAwards4";
		
		case 62:
			return "MPAwards4";
		
		case 63:
			return "MPAwards4";
		
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
						
						case 1:
							return "MPAwards1";
						
						case 2:
							return "MPAwards1";
						
						case 3:
							return "MPAwards1";
						
						case 4:
							return "MPAwards1";
						
						case 5:
							return "MPAwards1";
						
						default:
					}
					break;
			}
			break;
		
		case 12:
			return "MPAwards3";
		
		case 11:
			return "MPAwards4";
		
		case 20:
			return "MPAwards5";
		
		case 19:
			return "MPAwards2";
		
		case 15:
			return "MPAwards4";
		
		case 17:
			return "MPAwards2";
		
		case 21:
			return "MPAwards2";
		
		case 14:
			return "MPAwards4";
		
		case 22:
			return "MPAwards1";
		
		case 1:
			return "MPAwards5";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards4";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards4";
		
		case 8:
			return "MPAwards5";
		
		case 9:
			return "MPAwards4";
		
		case 10:
			return "MPAwards2";
		
		case 23:
			return "MPAwards1";
		
		case 24:
			return "MPAwards1";
		
		case 25:
			return "MPAwards1";
		
		case 26:
			return "MPAwards1";
		
		case 27:
			return "MPAwards1";
		
		case 28:
			return "MPAwards1";
		
		case 29:
			return "MPAwards5";
		
		case 30:
			return "MPAWARDS5";
		
		case 31:
			return "MPAWARDS5";
		
		case 32:
			return "MPAWARDS5";
		
		case 33:
			return "MPAWARDS5";
		
		case 34:
			return "MPAWARDS5";
		
		case 35:
			return "MPAWARDS5";
		
		case 36:
			return "MPAWARDS5";
		
		case 37:
			return "MPAWARDS5";
		
		case 38:
			return "MPAWARDS5";
		
		case 40:
			return "MPAWARDS5";
		
		case 41:
			return "MPAWARDS5";
		
		case 42:
			return "MPAWARDS5";
		
		case 43:
			return "MPAWARDS5";
		
		case 44:
			return "MPAWARDS5";
		
		case 45:
			return "MPAWARDS5";
		
		case 46:
			return "MPAWARDS5";
		
		case 47:
			return "MPAWARDS5";
		
		case 48:
			return "MPAWARDS5";
		
		case 49:
			return "MPAWARDS5";
		
		case 54:
			return "MPAWARDS5";
		
		case 55:
			return "MPAWARDS5";
		
		case 56:
			return "MPAWARDS5";
		
		case 57:
			return "MPAWARDS5";
		
		case 58:
			return "MPAWARDS5";
		
		case 59:
			return "MPAWARDS5";
		
		case 126:
			return "MPAwardHeists";
		
		case 127:
			return "MPAwardHeists";
		
		case 128:
			return "MPAwardHeists";
		
		case 129:
			return "MPAwardHeists";
		
		case 130:
			return "MPAwardHeists";
		
		case 67:
			return "MPAwardHeists";
		
		case 120:
			return "MPAwardHeists";
		
		case 121:
			return "MPAwardHeists";
		
		case 122:
			return "MPAwardHeists";
		
		case 123:
			return "MPAwardHeists";
		
		case 124:
			return "MPAwardHeists";
		
		case 125:
			return "MPAwardHeists";
		
		case 131:
			return "MPAwardHeists";
		
		case 132:
			return "MPAwardHeists";
		
		case 133:
			return "MPAwardHeists";
		
		case 134:
			return "MPAwardHeists";
		
		case 135:
			return "MPAwardHeists";
		
		case 136:
			return "MPAwardHeists";
		
		case 137:
			return "MPAwardHeists";
		
		case 138:
			return "MPAwardHeists";
		
		case 139:
			return "MPAwardNightclub";
		
		case 140:
			return "MPAwardNightclub";
		
		case 141:
			return "MPAwardNightclub";
		
		case 142:
			return "MPAwardNightclub";
		
		case 143:
			return "MPAwardNightclub";
		
		case 70:
			return "MPAwardsArena";
		
		case 71:
			return "MPAwardsArena";
		
		case 72:
			return "MPAwardsArena";
		
		case 73:
			return "MPAwardsArena";
		
		case 74:
			return "MPAwardsArena";
		
		case 75:
			return "MPAwardsArena";
		
		case 76:
			return "MPAwardsArena";
		
		case 77:
			return "MPAwardsArena";
		
		case 78:
			return "MPAwardsArena";
		
		case 79:
			return "MPAwardsArena";
		
		case 80:
			return "MPAwardsArena";
		
		case 81:
			return "MPAwardsArena";
		
		case 82:
			return "MPAwardsArena";
		
		case 83:
			return "MPAwardsArena";
		
		case 84:
			return "MPAwardsArena";
		
		case 85:
			return "MPAwardsArena";
		
		case 86:
			return "MPAwardsArena";
		
		case 87:
			return "MPAwardCasino";
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "MPAwardCasinoHeist";
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
			return "MPAwardIslandHeist";
			break;
		
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
			return "MPAwardTunerPack";
			break;
		
		case 117:
		case 118:
		case 119:
			return "MPAwardsFixer";
			break;
	}
	return "";
}

char* func_116(int iParam0, int iParam1, int iParam2)//Position - 0xD7A7
{
	if (iParam2 == 9)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
		
		case 39:
			return "ComeFromBehind";
		
		case 60:
			return "TheFugitive";
		
		case 61:
			return "NoClaimsBonus";
		
		case 62:
			return "swallow";
		
		case 63:
			return "Spinderella";
		
		case 16:
			return "Timeinheli";
		
		case 0:
			return "HangingOutInCars";
		
		case 51:
			return "WinRallyAsDriver";
		
		case 52:
			return "WinRallyAsNavigator";
		
		case 12:
			return "Killenemiesindriveby";
		
		case 11:
			return "JackVehicles";
		
		case 20:
			return "Jump40m";
		
		case 19:
			return "Timesavoiding5stars";
		
		case 15:
			return "GetLapDances";
		
		case 17:
			return "Delivercars";
		
		case 21:
			return "racesWon_generic";
		
		case 14:
			return "HoldUpShops";
		
		case 22:
			return "ArmWrestlingVictories";
		
		case 1:
			return "KillPistol";
		
		case 2:
			return "KillSniperrifle";
		
		case 3:
			return "KillGrenades";
		
		case 4:
			return "KillShotgun";
		
		case 5:
			return "KillSMG";
		
		case 6:
			return "KillRocketLauncher";
		
		case 7:
			return "KillStickyBombs";
		
		case 8:
			return "KillMeleeWeapons";
		
		case 9:
			return "Headshots";
		
		case 10:
			return "BlowupVehicles";
		
		case 23:
			return "Winatdarts";
		
		case 24:
			return "Blowupenemiesusingcarbombs";
		
		case 25:
			return "KilledpeoplewithanAssaultRifle";
		
		case 26:
			return "KilledpeoplewithaMachineGun";
		
		case 27:
			return "Gethaircuts";
		
		case 28:
			return "Parachute1min";
		
		case 29:
			return "ParachuteJumps20m";
		
		case 30:
			return "Birdie";
		
		case 31:
			return "GolfWin";
		
		case 32:
			return "TargetGridWin";
		
		case 33:
			return "RandomTargetsWin";
		
		case 34:
			return "CoveredTargetsWin";
		
		case 35:
			return "TennisMatchesWon";
		
		case 36:
			return "TennisServiceAce";
		
		case 37:
			return "GTARacesWon";
		
		case 38:
			return "FastestLap";
		
		case 40:
			return "DeathmatchWin";
		
		case 41:
			return "TeamDeathmatchWin";
		
		case 42:
			return "TeamDeathmatchMVP";
		
		case 43:
			return "KillStreak";
		
		case 44:
			return "TotalKills";
		
		case 45:
			return "HatTrickKiller";
		
		case 46:
			return "StolenKill";
		
		case 47:
			return "Land2mFromTarget";
		
		case 48:
			return "ReachHordeModeWave";
		
		case 49:
			return "EarnCashFromBetting";
		
		case 54:
			return "RaceToPointWinner";
		
		case 55:
			return "BountyHunter";
		
		case 56:
			return "OverallKills";
		
		case 57:
			return "WinASeaRace";
		
		case 58:
			return "WinAPlaneRace";
		
		case 59:
			return "GetRevengeKillDeathmatch";
		
		case 126:
			return "Captured";
		
		case 127:
			return "ThePostman";
		
		case 128:
			return "GimmeThat";
		
		case 129:
			return "NoYouDont";
		
		case 130:
			return "DeathDefying";
		
		case 67:
			return "dailyduty";
		
		case 120:
			return "TheBigTime";
		
		case 121:
			return "BePrepared";
		
		case 122:
			return "ForHire";
		
		case 123:
			return "ShotCaller";
		
		case 124:
			return "LiveALittle";
		
		case 125:
			return "Decorated";
		
		case 131:
			return "LightsOut";
		
		case 132:
			return "InControl";
		
		case 133:
			return "PsychoKiller";
		
		case 134:
			return "CalmDown";
		
		case 135:
			return "StillStanding";
		
		case 136:
			return "OneAndOnly";
		
		case 137:
			return "OneManArmy";
		
		case 138:
			return "MovingDay";
		
		case 139:
			return "Solomun";
		
		case 140:
			return "TaleOfUs";
		
		case 141:
			return "Dixon";
		
		case 142:
			return "TheBlackMadonna";
		
		case 143:
			return "ClubDrunk";
		
		case 70:
			return "watchyourstep";
		
		case 71:
			return "TOWEROFFENSE";
		
		case 72:
			return "READYFORWAR";
		
		case 73:
			return "THROUGHTHELENS";
		
		case 74:
			return "SPINNER";
		
		case 75:
			return "YOUMEANBOOBYTRAP";
		
		case 76:
			return "MASTERBANDITO";
		
		case 77:
			return "SITTINGDUCK";
		
		case 78:
			return "CROWDPARTICIPATION";
		
		case 79:
			return "KILLORBEKILLED";
		
		case 80:
			return "MASSIVESHUNT";
		
		case 81:
			return "YOUREOUTTAHERE";
		
		case 82:
			return "WEVEGOTONE";
		
		case 83:
			return "ARENAWAGEWORKER";
		
		case 84:
			return "TIMESERVED";
		
		case 85:
			return "TOPSCORE";
		
		case 86:
			return "CAREERWINNER";
		
		case 87:
			return "HighRoller";
		
		case 88:
			return "Preparation";
		
		case 89:
			return "AsleepOnTheJob";
		
		case 90:
			return "DailyCashGrab";
		
		case 91:
			return "Bigbrother";
		
		case 92:
			return "Sharpshooter";
		
		case 93:
			return "RaceChampion";
		
		case 94:
			return "PlatinumSword";
		
		case 95:
			return "CoinPurse";
		
		case 96:
			return "Astrochimp";
		
		case 97:
			return "Masterful";
		
		case 99:
			return "sunset";
		
		case 100:
			return "TreasureHunter";
		
		case 101:
			return "WreckDiving";
		
		case 102:
			return "Keinmusik";
		
		case 103:
			return "PalmsTrax";
		
		case 104:
			return "Moodymann";
		
		case 105:
			return "FillYourBags";
		
		case 106:
			return "Prepped";
		
		case 107:
			return "LSCarMeetMember";
		
		case 108:
			return "SprintRacer";
		
		case 109:
			return "StreetRacer";
		
		case 110:
			return "PursuitRacer";
		
		case 112:
			return "SpecialDelivery";
		
		case 114:
			return "Groundwork";
		
		case 115:
			return "ContractualCriminal";
		
		case 116:
			return "FacesofDeath";
		
		case 111:
			return "TriedandTested";
		
		case 113:
			return "CarExporter";
		
		case 117:
			return "ContracualObligations";
		
		case 118:
			return "ColdCaller";
		
		case 119:
			return "Producer";
			break;
			break;
	}
	return "";
}

char* func_117(int iParam0, int iParam1, int iParam2)//Position - 0xDEA8
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWS_721";
		
		case 60:
			return "AWS_728";
		
		case 61:
			return "AWS_730";
		
		case 62:
			return "AWS_731";
		
		case 63:
			return "AWS_732";
		
		case 16:
			return "AWS_550";
		
		case 0:
			return "AWS_282";
		
		case 51:
			return "AWS_707";
		
		case 52:
			return "AWS_708";
		
		case 12:
			return "AWS_581";
		
		case 11:
			return "AWS_582";
		
		case 19:
			return "AWS_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_509_M";
			}
			else
			{
				return "AWS_509";
			}
			break;
		
		case 39:
			return "AWS_678";
		
		case 15:
			return "AWS_559";
		
		case 17:
			return "AWS_535";
		
		case 21:
			return "AWS_586";
		
		case 14:
			return "AWS_566";
		
		case 22:
			return "AWS_589";
		
		case 1:
			return "AWS_506";
		
		case 2:
			return "AWS_585";
		
		case 3:
			return "AWS_541";
		
		case 4:
			return "AWS_584";
		
		case 5:
			return "AWS_540";
		
		case 6:
			return "AWS_539";
		
		case 7:
			return "AWS_538";
		
		case 8:
			return "AWS_537";
		
		case 9:
			return "AWS_536";
		
		case 10:
			return "AWS_583";
		
		case 23:
			return "AWS_610";
		
		case 24:
			return "AWS_611";
		
		case 25:
			return "AWS_631";
		
		case 26:
			return "AWS_632";
		
		case 27:
			return "AWS_639";
		
		case 28:
			return "AWS_640";
		
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_699_m";
			}
			else
			{
				return "AWS_699";
			}
			break;
		
		case 30:
			return "AWS_661";
		
		case 31:
			return "AWS_662";
		
		case 32:
			return "AWS_663";
		
		case 33:
			return "AWS_665";
		
		case 34:
			return "AWS_666";
		
		case 35:
			return "AWS_668";
		
		case 36:
			return "AWS_669";
		
		case 37:
			return "AWS_675";
		
		case 38:
			return "AWS_676";
		
		case 40:
			return "AWS_679";
		
		case 41:
			return "AWS_681";
		
		case 42:
			return "AWS_682";
		
		case 43:
			return "AWS_677";
		
		case 44:
			return "AWS_683";
		
		case 45:
			return "AWS_684";
		
		case 46:
			return "AWS_685";
		
		case 47:
			return "AWS_692";
		
		case 48:
			return "AWS_696";
		
		case 49:
			return "AWS_693";
		
		case 54:
			return "AWS_710";
		
		case 55:
			return "AWS_703";
		
		case 56:
			return "AWS_704";
		
		case 57:
			return "AWS_722";
		
		case 58:
			return "AWS_723";
		
		case 59:
			return "AWS_716";
		
		case 126:
			return "AWS_740";
		
		case 127:
			return "AWS_741";
		
		case 128:
			return "AWS_742";
		
		case 129:
			return "AWS_743";
		
		case 130:
			return "AWS_744";
		
		case 67:
			return "AWS_782";
		
		case 120:
			return "AWS_745";
		
		case 121:
			return "AWS_746";
		
		case 122:
			return "AWS_747";
		
		case 123:
			return "AWS_748";
		
		case 124:
			return "AWS_749";
		
		case 125:
			return "AWS_752";
		
		case 131:
			return "AWS_755";
		
		case 132:
			return "AWS_757";
		
		case 133:
			return "AWS_758";
		
		case 134:
			return "AWS_759";
		
		case 135:
			return "AWS_760";
		
		case 136:
			return "AWS_761";
		
		case 137:
			return "AWS_762";
		
		case 138:
			return "AWS_764";
		
		case 139:
			if (iParam1 == 5)
			{
				return "AWS_788_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_788_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_788_2";
			}
			else
			{
				return "AWS_788_1";
			}
			break;
		
		case 140:
			if (iParam1 == 5)
			{
				return "AWS_789_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_789_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_789_2";
			}
			else
			{
				return "AWS_789_1";
			}
			break;
		
		case 141:
			if (iParam1 == 5)
			{
				return "AWS_790_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_790_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_790_2";
			}
			else
			{
				return "AWS_790_1";
			}
			break;
		
		case 142:
			if (iParam1 == 5)
			{
				return "AWS_791_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_791_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_791_2";
			}
			else
			{
				return "AWS_791_1";
			}
			break;
		
		case 143:
			return "AWS_792";
		
		case 70:
			return "AWS_817";
		
		case 71:
			return "AWS_818";
		
		case 72:
			return "AWS_821";
		
		case 73:
			return "AWS_822";
		
		case 74:
			return "AWS_823";
		
		case 75:
			return "AWS_824";
		
		case 76:
			return "AWS_825";
		
		case 77:
			return "AWS_826";
		
		case 78:
			return "AWS_827";
		
		case 79:
			return "AWS_828";
		
		case 80:
			return "AWS_829";
		
		case 81:
			return "AWS_830";
		
		case 82:
			return "AWS_831";
		
		case 83:
			return "AWS_832";
		
		case 84:
			return "AWS_833";
		
		case 85:
			return "AWS_834";
		
		case 86:
			return "AWS_835";
		
		case 87:
			if (iParam1 == 5)
			{
				return "AWS_845_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_845_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_845_2";
			}
			else
			{
				return "AWS_845_1";
			}
			break;
		
		case 88:
			if (iParam1 == 5)
			{
				return "AWS_847_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_847_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_847_2";
			}
			else
			{
				return "AWS_847_1";
			}
			break;
		
		case 89:
			if (iParam1 == 5)
			{
				return "AWS_848_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_848_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_848_2";
			}
			else
			{
				return "AWS_848_1";
			}
			break;
		
		case 90:
			if (iParam1 == 5)
			{
				return "AWS_849_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_849_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_849_2";
			}
			else
			{
				return "AWS_849_1";
			}
			break;
		
		case 91:
			if (iParam1 == 5)
			{
				return "AWS_850_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_850_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_850_2";
			}
			else
			{
				return "AWS_850_1";
			}
			break;
		
		case 92:
			if (iParam1 == 5)
			{
				return "AWS_851_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_851_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_851_2";
			}
			else
			{
				return "AWS_851_1";
			}
			break;
		
		case 93:
			if (iParam1 == 5)
			{
				return "AWS_852_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_852_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_852_2";
			}
			else
			{
				return "AWS_852_1";
			}
			break;
		
		case 94:
			if (iParam1 == 5)
			{
				return "AWS_853_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_853_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_853_2";
			}
			else
			{
				return "AWS_853_1";
			}
			break;
		
		case 95:
			if (iParam1 == 5)
			{
				return "AWS_854_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_854_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_854_2";
			}
			else
			{
				return "AWS_854_1";
			}
			break;
		
		case 96:
			if (iParam1 == 5)
			{
				return "AWS_855_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_855_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_855_2";
			}
			else
			{
				return "AWS_855_1";
			}
			break;
		
		case 97:
			if (iParam1 == 5)
			{
				return "AWS_856_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_856_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_856_2";
			}
			else
			{
				return "AWS_856_1";
			}
			break;
		
		case 99:
			if (iParam1 == 5)
			{
				return "AWS_936d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_936c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_936b";
			}
			else
			{
				return "AWS_936a";
			}
			break;
		
		case 100:
			if (iParam1 == 5)
			{
				return "AWS_937d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_937c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_937b";
			}
			else
			{
				return "AWS_937a";
			}
			break;
		
		case 101:
			if (iParam1 == 5)
			{
				return "AWS_938d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_938c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_938b";
			}
			else
			{
				return "AWS_938a";
			}
			break;
		
		case 102:
			if (iParam1 == 5)
			{
				return "AWS_939d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_939c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_939b";
			}
			else
			{
				return "AWS_939a";
			}
			break;
		
		case 103:
			if (iParam1 == 5)
			{
				return "AWS_940d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_940c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_940b";
			}
			else
			{
				return "AWS_940a";
			}
			break;
		
		case 104:
			if (iParam1 == 5)
			{
				return "AWS_941d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_941c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_941b";
			}
			else
			{
				return "AWS_941a";
			}
			break;
		
		case 105:
			if (iParam1 == 5)
			{
				return "AWS_942d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_942c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_942b";
			}
			else
			{
				return "AWS_942a";
			}
			break;
		
		case 106:
			if (iParam1 == 5)
			{
				return "AWS_943d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_943c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_943b";
			}
			else
			{
				return "AWS_943a";
			}
			break;
		
		case 107:
			if (iParam1 == 5)
			{
				return "AWS_945d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_945c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_945b";
			}
			else
			{
				return "AWS_945a";
			}
			break;
		
		case 108:
			if (iParam1 == 5)
			{
				return "AWS_967d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_967c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_967b";
			}
			else
			{
				return "AWS_967a";
			}
			break;
		
		case 109:
			if (iParam1 == 5)
			{
				return "AWS_946d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_946c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_946b";
			}
			else
			{
				return "AWS_946a";
			}
			break;
		
		case 110:
			if (iParam1 == 5)
			{
				return "AWS_947d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_947c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_947b";
			}
			else
			{
				return "AWS_947a";
			}
			break;
		
		case 112:
			if (iParam1 == 5)
			{
				return "AWS_949d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_949c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_949b";
			}
			else
			{
				return "AWS_949a";
			}
			break;
		
		case 114:
			if (iParam1 == 5)
			{
				return "AWS_952d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_952c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_952b";
			}
			else
			{
				return "AWS_952a";
			}
			break;
		
		case 115:
			if (iParam1 == 5)
			{
				return "AWS_961d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_961c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_961b";
			}
			else
			{
				return "AWS_961a";
			}
			break;
		
		case 116:
			if (iParam1 == 5)
			{
				return "AWS_962d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_962c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_962b";
			}
			else
			{
				return "AWS_962a";
			}
			break;
		
		case 111:
			if (iParam1 == 5)
			{
				return "AWS_948d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_948c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_948b";
			}
			else
			{
				return "AWS_948a";
			}
			break;
		
		case 113:
			if (iParam1 == 5)
			{
				return "AWS_950d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_950c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_950b";
			}
			else
			{
				return "AWS_950a";
			}
			break;
		
		case 117:
			if (iParam1 == 5)
			{
				return "AWS_978d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_978c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_978b";
			}
			else
			{
				return "AWS_978a";
			}
			break;
		
		case 118:
			if (iParam1 == 5)
			{
				return "AWS_979d";
			}
			else if (iParam1 == 4)
			{
				return "AWS_979c";
			}
			else if (iParam1 == 3)
			{
				return "AWS_979b";
			}
			else
			{
				return "AWS_979a";
			}
			break;
		
		case 119:
			return "AWS_983";
			break;
	}
	return "";
}

char* func_118(int iParam0, int iParam1)//Position - 0xECC7
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWT_721";
		
		case 39:
			return "AWT_678";
		
		case 51:
			return "AWT_707";
		
		case 52:
			return "AWT_708";
		
		case 60:
			return "AWT_728";
		
		case 61:
			return "AWT_730";
		
		case 62:
			return "AWT_731";
		
		case 63:
			return "AWT_732";
		
		case 16:
			return "AWT_550";
		
		case 0:
			return "AWT_282";
		
		case 12:
			return "AWT_581";
		
		case 11:
			return "AWT_582";
		
		case 19:
			return "AWT_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWT_509";
			}
			else
			{
				return "AWT_509";
			}
			break;
		
		case 15:
			return "AWT_559";
		
		case 17:
			return "AWT_535";
		
		case 21:
			return "AWT_586";
		
		case 14:
			return "AWT_566";
		
		case 22:
			return "AWT_589";
		
		case 1:
			return "AWT_506";
		
		case 2:
			return "AWT_585";
		
		case 3:
			return "AWT_541";
		
		case 4:
			return "AWT_584";
		
		case 5:
			return "AWT_540";
		
		case 6:
			return "AWT_539";
		
		case 7:
			return "AWT_538";
		
		case 8:
			return "AWT_537";
		
		case 9:
			return "AWT_536";
		
		case 10:
			return "AWT_583";
		
		case 23:
			return "AWT_610";
		
		case 24:
			return "AWT_611";
		
		case 25:
			return "AWT_631";
		
		case 26:
			return "AWT_632";
		
		case 27:
			return "AWT_639";
		
		case 28:
			return "AWT_640";
		
		case 29:
			return "AWT_699";
		
		case 30:
			return "AWT_661";
		
		case 31:
			return "AWT_662";
		
		case 32:
			return "AWT_663";
		
		case 33:
			return "AWT_665";
		
		case 34:
			return "AWT_666";
		
		case 35:
			return "AWT_668";
		
		case 36:
			return "AWT_669";
		
		case 37:
			return "AWT_675";
		
		case 38:
			return "AWT_676";
		
		case 40:
			return "AWT_679";
		
		case 41:
			return "AWT_681";
		
		case 42:
			return "AWT_682";
		
		case 43:
			return "AWT_677";
		
		case 44:
			return "AWT_683";
		
		case 45:
			return "AWT_684";
		
		case 46:
			return "AWT_685";
		
		case 47:
			return "AWT_692";
		
		case 48:
			return "AWT_696";
		
		case 49:
			return "AWT_693";
		
		case 54:
			return "AWT_710";
		
		case 55:
			return "AWT_703";
		
		case 56:
			return "AWT_704";
		
		case 57:
			return "AWT_722";
		
		case 58:
			return "AWT_723";
		
		case 59:
			return "AWT_716";
		
		case 126:
			return "AWT_740";
		
		case 127:
			return "AWT_741";
		
		case 128:
			return "AWT_742";
		
		case 129:
			return "AWT_743";
		
		case 130:
			return "AWT_744";
		
		case 67:
			return "AWT_782";
		
		case 120:
			return "AWT_745";
		
		case 121:
			return "AWT_746";
		
		case 122:
			return "AWT_747";
		
		case 123:
			return "AWT_748";
		
		case 124:
			return "AWT_749";
		
		case 125:
			return "AWT_752";
		
		case 131:
			return "AWT_755";
		
		case 132:
			return "AWT_757";
		
		case 133:
			return "AWT_758";
		
		case 134:
			return "AWT_759";
		
		case 135:
			return "AWT_760";
		
		case 136:
			return "AWT_761";
		
		case 137:
			return "AWT_762";
		
		case 138:
			return "AWT_764";
		
		case 139:
			return "AWT_788";
		
		case 140:
			return "AWT_789";
		
		case 141:
			return "AWT_790";
		
		case 142:
			return "AWT_791";
		
		case 143:
			return "AWT_792";
		
		case 70:
			return "AWT_817";
		
		case 71:
			return "AWT_818";
		
		case 72:
			return "AWT_821";
		
		case 73:
			return "AWT_822";
		
		case 74:
			return "AWT_823";
		
		case 75:
			return "AWT_824";
		
		case 76:
			return "AWT_825";
		
		case 77:
			return "AWT_826";
		
		case 78:
			return "AWT_827";
		
		case 79:
			return "AWT_828";
		
		case 80:
			return "AWT_829";
		
		case 81:
			return "AWT_830";
		
		case 82:
			return "AWT_831";
		
		case 83:
			return "AWT_832";
		
		case 84:
			return "AWT_833";
		
		case 85:
			return "AWT_834";
		
		case 86:
			return "AWT_835";
		
		case 87:
			return "AWT_845";
		
		case 88:
			return "AWT_847";
		
		case 89:
			return "AWT_848";
		
		case 90:
			return "AWT_849";
		
		case 91:
			return "AWT_850";
		
		case 92:
			return "AWT_851";
		
		case 93:
			return "AWT_852";
		
		case 94:
			return "AWT_853";
		
		case 95:
			return "AWT_854";
		
		case 96:
			return "AWT_855";
		
		case 97:
			return "AWT_856";
		
		case 99:
			return "AWT_936";
		
		case 100:
			return "AWT_937";
		
		case 101:
			return "AWT_938";
		
		case 102:
			return "AWT_939";
		
		case 103:
			return "AWT_940";
		
		case 104:
			return "AWT_941";
		
		case 105:
			return "AWT_942";
		
		case 106:
			return "AWT_943";
		
		case 107:
			return "AWT_945";
			break;
		
		case 108:
			return "AWT_967";
			break;
		
		case 109:
			return "AWT_946";
			break;
		
		case 110:
			return "AWT_947";
			break;
		
		case 112:
			return "AWT_949";
			break;
		
		case 114:
			return "AWT_952";
			break;
		
		case 115:
			return "AWT_961";
			break;
		
		case 116:
			return "AWT_962";
			break;
		
		case 111:
			return "AWT_948";
			break;
		
		case 113:
			return "AWT_950";
			break;
		
		case 117:
			return "AWT_978";
			break;
		
		case 118:
			return "AWT_979";
			break;
		
		case 119:
			return "AWT_983";
			break;
	}
	return "";
}

int func_119(int iParam0, int iParam1)//Position - 0xF3F7
{
	if (func_77(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_77(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_77(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_77(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_120(int iParam0, int iParam1)//Position - 0xF46C
{
	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 2, iParam1)))
	{
		return 0;
	}
	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 3, iParam1)))
	{
		return 2;
	}
	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 4, iParam1)))
	{
		return 3;
	}
	if (!func_77(func_48(iParam0, -1), func_49(iParam0, 5, iParam1)))
	{
		return 4;
	}
	return 5;
}

bool func_121()//Position - 0xF4E5
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

bool func_122()//Position - 0xF4FB
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_123(var uParam0, var uParam1)//Position - 0xF511
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 12;
	iVar1 = uParam0->f_455;
	switch (uParam1->f_5)
	{
		case 0:
			iVar1 = iVar1;
			break;
		
		default:
			if (uParam1->f_5 < iLocal_110)
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			else
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			break;
	}
	if (func_131(Global_1646672.f_473[uParam0->f_455]) || func_130(Global_1646672.f_486[uParam0->f_455]))
	{
		bVar2 = false;
		bVar3 = false;
		if (func_131(Global_1646672.f_473[uParam0->f_455]))
		{
			bVar2 = func_129(Global_1646672.f_473[uParam0->f_455]);
			bVar3 = func_105(Global_1646672.f_473[uParam0->f_455], -1);
		}
		if (func_130(Global_1646672.f_486[uParam0->f_455]))
		{
			bVar2 = func_128(Global_1646672.f_486[uParam0->f_455]);
			if (func_125(Global_1646672.f_486[uParam0->f_455]))
			{
				bVar3 = true;
			}
		}
		if (!BitTest(Global_1646672.f_471, bVar2))
		{
			MISC::SET_BIT(&(Global_1646672.f_471), bVar2);
		}
		if (bVar3)
		{
			if (!BitTest(Global_1646672.f_472, bVar2))
			{
				MISC::SET_BIT(&(Global_1646672.f_472), bVar2);
			}
		}
	}
	iVar4 = uParam1->f_5 + 1;
	iVar5 = iLocal_110 + 1;
	func_124(0, iVar4, iVar5, "HUD_PAGE", 0);
}

void func_124(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0xF66A
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
		func_22("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_125(var uParam0)//Position - 0xF6C7
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_126(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, func_52(iVar1));
}

int func_126(var uParam0)//Position - 0xF6E4
{
	switch (func_127(uParam0))
	{
		case 758:
			return Global_1659717[func_45(-1)];
		
		case 759:
			return Global_1659723[func_45(-1)];
		
		case 760:
			return Global_1659729[func_45(-1)];
		
		case 761:
			return Global_1659735[func_45(-1)];
		
		case 8735:
			return Global_1659741[func_45(-1)];
		
		default:
	}
	return 0;
}

int func_127(var uParam0)//Position - 0xF75C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_55(iVar0);
	switch (iVar1)
	{
		case 0:
			return 758;
			break;
		
		case 1:
			return 759;
			break;
		
		case 2:
			return 760;
			break;
		
		case 3:
			return 761;
			break;
		
		case 4:
			return 8735;
			break;
	}
	return 13122;
}

int func_128(int iParam0)//Position - 0xF7C5
{
	switch (iParam0)
	{
		case 117:
			return 13;
			break;
		
		case 118:
			return 14;
			break;
		
		case 119:
			return 18;
			break;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xF7FF
{
	switch (iParam0)
	{
		case 127:
			return 0;
			break;
		
		case 128:
			return 1;
			break;
		
		case 129:
			return 2;
			break;
		
		case 130:
			return 3;
			break;
		
		case 131:
			return 4;
			break;
		
		case 132:
			return 5;
			break;
		
		case 133:
			return 6;
			break;
		
		case 134:
			return 7;
			break;
		
		case 135:
			return 8;
			break;
		
		case 136:
			return 9;
			break;
		
		case 140:
			return 10;
			break;
		
		case 141:
			return 11;
			break;
		
		case 142:
			return 12;
			break;
		
		case 137:
			return 15;
			break;
		
		case 138:
			return 16;
			break;
		
		case 139:
			return 17;
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0xF8E7
{
	switch (iParam0)
	{
		case 117:
		case 118:
		case 119:
			return 1;
			break;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0xF910
{
	switch (iParam0)
	{
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 142:
		case 141:
			return 1;
			break;
	}
	return 0;
}

int func_132(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xF987
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 4);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_110)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = (3 - iVar1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_110)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = iVar1;
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_110)
			{
				if (*uParam0 == 0)
				{
					iVar0 = (*uParam0 + *uParam1 * 4);
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_111 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_111 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 4);
				}
			}
			break;
	}
	return iVar0;
}

void func_133(var uParam0, var uParam1)//Position - 0xFAF1
{
	if (uParam1->f_5 > iLocal_110)
	{
		func_142(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}
}

void func_134()//Position - 0xFB12
{
	func_124(0, -1, -1, 0, 0);
}

void func_135()//Position - 0xFB23
{
	func_136();
	func_124(0, -1, -1, 0, 0);
}

void func_136()//Position - 0xFB38
{
	func_137(0);
}

void func_137(bool bParam0)//Position - 0xFB45
{
	if (bParam0)
	{
		func_138(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_138(0, 2, 0, 2, 1, 0);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xFB69
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

void func_139(var uParam0)//Position - 0xFBAC
{
	uParam0->f_463 = 1;
}

void func_140(var uParam0)//Position - 0xFBBA
{
	uParam0->f_462 = 1;
}

void func_141(int iParam0, var uParam1)//Position - 0xFBC8
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
}

void func_142(var uParam0)//Position - 0xFBDE
{
	func_143(uParam0);
	uParam0->f_460 = 1;
}

void func_143(var uParam0)//Position - 0xFBF2
{
	struct<499> Var0;
	
	Var0.f_1 = 12;
	Var0.f_14 = 12;
	Var0.f_111 = 12;
	Var0.f_208 = 12;
	Var0.f_221 = 12;
	Var0.f_234 = 12;
	Var0.f_331 = 12;
	Var0.f_428 = 12;
	Var0.f_441 = 12;
	Var0.f_473 = 12;
	Var0.f_486 = 12;
	*uParam0 = { Var0 };
}

void func_144(var uParam0)//Position - 0xFC5B
{
	uParam0->f_429 = 1;
}

void func_145(int iParam0, var uParam1)//Position - 0xFC69
{
	uParam1->f_426 = iParam0;
}

void func_146(var uParam0)//Position - 0xFC78
{
	func_147(uParam0);
	uParam0->f_428 = 1;
}

void func_147(var uParam0)//Position - 0xFC8C
{
	struct<430> Var0;
	
	Var0.f_1 = 18;
	Var0.f_20 = 18;
	Var0.f_309 = 18;
	Var0.f_328 = 18;
	Var0.f_347 = 18;
	Var0.f_366 = 18;
	Var0.f_385 = 18;
	Var0.f_404 = 18;
	*uParam0 = { Var0 };
}

