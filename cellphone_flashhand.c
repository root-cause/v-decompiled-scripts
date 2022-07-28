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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0.73f;
	fLocal_66 = 0.55f;
	fLocal_67 = 0.73f;
	fLocal_68 = 0.45f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_20461 = 145;
	MISC::CLEAR_BIT(&Global_8137, 8);
	MISC::CLEAR_BIT(&Global_8136, 14);
	MISC::CLEAR_BIT(&Global_4541229, 3);
	MISC::CLEAR_BIT(&Global_8137, 10);
	MISC::CLEAR_BIT(&Global_8136, 17);
	MISC::CLEAR_BIT(&Global_8136, 9);
	MISC::CLEAR_BIT(&Global_8136, 26);
	MISC::CLEAR_BIT(&Global_8136, 23);
	MISC::CLEAR_BIT(&Global_8137, 24);
	MISC::CLEAR_BIT(&Global_8137, 25);
	MISC::CLEAR_BIT(&Global_8137, 27);
	MISC::CLEAR_BIT(&Global_8137, 26);
	MISC::CLEAR_BIT(&Global_8136, 30);
	Global_2825434 = 0;
	iLocal_116 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_20232 = 0;
	iLocal_74 = 0;
	Global_20210 = 0;
	Global_20250 = 0;
	Global_20251 = 0;
	func_122();
	Global_20197 = { Global_20229 };
	Global_20270 = 4;
	Global_20271 = 0;
	Global_8741 = 1;
	Global_20246 = Global_20270;
	if (Global_20248 == 0)
	{
		Global_20249 = 0;
		if (Global_78319)
		{
			if (func_121())
			{
				Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			}
			else
			{
				Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			}
			iLocal_85 = 1;
			if (iLocal_85 == 1)
			{
			}
		}
		else if (Global_20209)
		{
			Global_20254 = 1;
			Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_20247 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_113386.f_14051[Global_20266 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247) && Global_20249 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_20249 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_20249 = 1;
					}
				}
			}
			if (Global_20265 == 1)
			{
				func_120();
			}
		}
		if (Global_20249 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
			{
				func_119(Global_20247, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20247);
			Global_20207 = 0;
			Global_20248 = 0;
			Global_20462 = 0;
			if (Global_113386.f_14051.f_84 == 1)
			{
				Global_113386.f_14051.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_20210 = 1;
			Global_20266.f_1 = 3;
			func_118();
			Global_20254 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8136, 9);
			MISC::CLEAR_BIT(&Global_8136, 27);
			MISC::CLEAR_BIT(&Global_8136, 30);
			MISC::CLEAR_BIT(&Global_8137, 5);
			MISC::CLEAR_BIT(&Global_8137, 21);
			MISC::CLEAR_BIT(&Global_8138, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_20464 = 0;
			Global_22665 = 0;
			Global_22664 = 0;
			Global_21618 = 0;
			func_116();
			func_114();
			Global_4541508 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_20190 = 0.1f;
		Global_20191 = 0.38f;
		Global_20192 = 0.195f;
		Global_20193 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || func_113()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
			func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
		}
		else
		{
			if (!MISC::_IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			}
			if (MISC::_IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(6, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
				HUD::GET_HUD_COLOUR(9, &iLocal_104, &iLocal_105, &iLocal_106, &uLocal_107);
				func_112(Global_20247, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_104), SYSTEM::TO_FLOAT(iLocal_105), SYSTEM::TO_FLOAT(iLocal_106), -1082130432);
			}
		}
		if (Global_20249 == 0)
		{
		}
		func_111();
		if (Global_78319)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
		}
		Global_20248 = 1;
	}
	Global_8139 = 99;
	func_110();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_96 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_22619 = 1;
	}
	else
	{
		Global_22619 = 0;
	}
	func_112(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_20208 = 1;
	if (Global_78319)
	{
		Global_20466 = 0;
		if (func_121())
		{
			if (Global_1836488 == 1)
			{
				Global_4541505 = 4;
			}
			else
			{
				Global_4541505 = 2;
			}
		}
		else
		{
			Global_4541505 = func_107(2030, -1, 0);
		}
		if (Global_4541505 < 1 || Global_4541505 > 7)
		{
			Global_4541505 = 1;
		}
		func_112(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
		func_106();
		if (func_121())
		{
			if (Global_1836488 == 1)
			{
				Global_4541506 = 16;
			}
			else
			{
				Global_4541506 = 9;
			}
		}
		else
		{
			Global_4541506 = func_107(2029, -1, 0);
		}
		if (Global_4541506 == 0)
		{
			Var1 = { func_105(PLAYER::PLAYER_ID()) };
			iVar2 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4541509 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4541509 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_112(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_112(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_112(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4541506), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_20209)
		{
			Global_20466 = 0;
		}
		else if (Global_113386.f_14051.f_88 == 1 || Global_113386.f_14051.f_89 == 1)
		{
			Global_20466 = 0;
		}
		else
		{
			Global_20466 = 0;
		}
		func_112(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8940 == 0)
		{
			func_112(Global_20247, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_106();
	}
	iLocal_86 = func_104();
	if (Global_20209 == 0)
	{
		func_92();
	}
	Global_20244 = 0;
	Global_20465 = 0;
	MISC::CLEAR_BIT(&Global_8136, 9);
	Global_2725398 = 0;
	if (func_87(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2725398 = 1;
	}
	func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_85();
	func_84();
	func_83(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_20255, true);
	SYSTEM::SETTIMERB(0);
	while (Global_20266.f_1 < 6 && Global_20249 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_20249 = 1;
		}
		if (Global_20266.f_1 < 4)
		{
			Global_20249 = 1;
		}
	}
	if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
	{
		if (func_82(14))
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_112(Global_20247, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_112(Global_20247, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_20466 == 0)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else if (Global_78319)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			if (Global_20465 == 1)
			{
				if (Global_20254)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_8136, 17);
		}
		func_80();
	}
	Global_20252 = 1;
	func_79();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_102 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_97 = MISC::GET_GAME_TIMER();
	}
	if (Global_20462 == 1)
	{
		if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_113386.f_14051.f_84 == 0)
			{
				Global_113386.f_14051.f_84 = 1;
				if (Global_20211 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				func_78("CELL_7052", 10000);
			}
		}
	}
	if (Global_78319 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_77())
	{
		iLocal_79 = 1;
	}
	else
	{
		iLocal_79 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_80 = 1;
			if (func_77())
			{
				func_76();
			}
		}
		else
		{
			iLocal_80 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_78319 == 0)
		{
			iLocal_99 = MISC::GET_GAME_TIMER();
			iLocal_101 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_8138, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_4541229, 24))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4541229, 24);
					func_85();
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83(1);
					if (Global_20266.f_1 == 6)
					{
						func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_75())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		}
		if (Global_78319 == 0)
		{
			if (iLocal_76)
			{
				if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
				{
					iLocal_76 = 0;
				}
			}
			if (Global_20266.f_1 > 4)
			{
				if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_74())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_20212[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								func_72();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_20219[Global_20211 /*3*/].f_1 != Local_77.f_1)
							{
								if (!func_75())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_70();
								}
							}
						}
						if (iLocal_80 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_80 = 1;
								func_70();
								func_76();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_80 = 0;
							func_72();
							if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
							{
								if (Global_21605 != 2)
								{
									func_69();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (func_77())
							{
								iLocal_79 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_76();
								}
								func_72();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, true);
								}
							}
							if (func_77() == 0)
							{
								iLocal_79 = 0;
								func_70();
							}
						}
					}
				}
			}
		}
		if (Global_2725398 == 1)
		{
			if (!func_87(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_20266.f_1 > 3)
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
						Global_2725398 = 0;
					}
				}
			}
		}
		if (Global_20467 == 0)
		{
			if ((Global_43052 != 15 || Global_8141 == 1) || func_64(0))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						Global_8142 = 42;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20467 = 1;
			}
		}
		else if ((Global_43052 == 15 && func_64(0) == 0) && Global_8141 == 0)
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					Global_8142 = 255;
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20467 = 0;
		}
		if (Global_20468 == 0)
		{
			if (BitTest(Global_8137, 3))
			{
				if (!Global_20465)
				{
					if (Global_20266.f_1 == 6)
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_85();
						func_84();
						func_83(1);
						func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_20468 = 1;
			}
		}
		else if (!BitTest(Global_8137, 3))
		{
			if (!Global_20465)
			{
				if (Global_20266.f_1 == 6)
				{
					func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_85();
					func_84();
					func_83(1);
					func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_20468 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20194.f_1 != Global_20212[Global_20211 /*3*/].f_1 || func_77())
			{
				if (Global_20266.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_78319)
						{
							if (Global_20266.f_1 == 9)
							{
								if (Global_21658 == 1 || BitTest(Global_8137, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
						if (BitTest(Global_8136, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_20237);
						}
					}
					if (!func_63() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_20238);
					}
				}
			}
			if (Global_20194.f_1 == Global_20212[Global_20211 /*3*/].f_1)
			{
			}
		}
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_75485)
			{
				if (!func_75())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, true);
					PAD::ENABLE_CONTROL_ACTION(0, 181, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_20240);
				if (!func_63())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_20241);
				}
				if (Global_20266.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_20243);
				}
			}
		}
		if (func_62(2, Global_20234, 0))
		{
			iLocal_94 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_75 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_20235))
			{
				Global_8140 = 1;
				iLocal_75 = 0;
			}
			if (!Global_20266.f_1 > 3)
			{
				iLocal_75 = 0;
			}
		}
		if (iLocal_94)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_20234))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_20266.f_1 = 3;
					func_60();
				}
			}
			else
			{
				iLocal_94 = 0;
			}
		}
		Global_8744 = MISC::GET_GAME_TIMER();
		if (Global_20253)
		{
			func_79();
			Global_20252 = 1;
			Global_20253 = 0;
		}
		if (Global_20464 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_53();
			func_52();
			HUD::SET_TEXT_RENDER_ID(iLocal_83);
			if (Global_20252 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_20209)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				func_110();
			}
			if (Global_20206 == 1)
			{
				if (Global_20266.f_1 > 3)
				{
					func_51();
				}
			}
			else if (Global_20266.f_1 > 3)
			{
				if (Global_4541508 == 1)
				{
					func_50();
				}
				if (BitTest(Global_8137, 25))
				{
					if (Global_78319 == 1)
					{
						func_49();
					}
				}
				else if (!BitTest(Global_8137, 24))
				{
					if (BitTest(Global_8137, 26))
					{
						if (func_62(2, Global_20233, 0))
						{
							MISC::SET_BIT(&Global_8137, 25);
							MISC::CLEAR_BIT(&Global_8137, 26);
							MISC::CLEAR_BIT(&Global_8138, 2);
						}
					}
				}
				else if (Global_78319 == 1)
				{
					func_48();
				}
			}
		}
		if (iLocal_74)
		{
			if (Global_20266.f_1 == 6)
			{
				func_44();
			}
		}
		else if (!BitTest(Global_8136, 23))
		{
			if (Global_20266.f_1 == 5 || Global_20266.f_1 == 6)
			{
				if (Global_20464 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_20209 == 0)
						{
							if (BitTest(Global_8136, 14))
							{
								if (!Global_78319)
								{
									if (iLocal_75 == 0)
									{
										if (!func_82(14))
										{
											func_43();
										}
										else if (Global_2725398)
										{
											func_42();
										}
									}
								}
								else if (BitTest(Global_8138, 9))
								{
									func_41();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_8136, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_22664 == 0)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_78319)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_78319)
							{
								func_21();
							}
							if (!BitTest(Global_4541229, 3))
							{
								if (Global_22664 == 1)
								{
									if (BitTest(Global_4541229, 1))
									{
										if (BitTest(Global_8136, 14))
										{
											if (Global_78319)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_22665 = 0;
											}
											Global_22664 = 0;
											MISC::CLEAR_BIT(&Global_4541229, 1);
										}
									}
									else if (BitTest(Global_8136, 14))
									{
										func_22(7, 0, 1, 0);
										Global_22664 = 0;
									}
								}
								else
								{
									if (Global_22664 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_22664 = 0;
									}
									if (Global_22664 == 4)
									{
										func_22(23, 0, 1, 0);
										Global_22664 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8143[Global_20269 /*15*/].f_5)))
		{
			if (Global_20269 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_20269 == 23)
				{
					if (BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0)
					{
					}
				}
				if (Global_20269 == 2 || iVar5 == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
					{
						Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[Global_20269 /*15*/].f_9) == 0)
				{
					Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8143[Global_20269 /*15*/].f_5));
			Global_8139 = 99;
			MISC::CLEAR_BIT(&Global_8136, 23);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			}
		}
		if (Global_20266.f_1 == 1)
		{
			func_9();
		}
		if (Global_20266.f_1 == 0)
		{
			func_9();
		}
		if (Global_20266.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_21618)
			{
				if (Global_20266.f_1 == 9)
				{
					if (Global_78319)
					{
						if (!BitTest(Global_8137, 31))
						{
							if (!BitTest(Global_8137, 27))
							{
								if (func_8())
								{
									if (!BitTest(Global_8136, 9))
									{
										if (func_62(2, Global_20238, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_20265 == 1)
												{
													if (Global_20266.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8137, 24);
														MISC::SET_BIT(&Global_8137, 27);
														MISC::CLEAR_BIT(&Global_8137, 26);
														MISC::CLEAR_BIT(&Global_8137, 25);
														MISC::SET_BIT(&(Global_2815059.f_1795), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_20249 == 1)
			{
				Global_20251 = 1;
				func_65(0);
			}
			if (Global_20250 == 1)
			{
				Global_20251 = 1;
				func_65(0);
			}
			if (Global_78319)
			{
				if (!BitTest(Global_8138, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2821909.f_1 == 1)
						{
						}
						else
						{
							func_68();
							func_65(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922883))
						{
							func_5(1, 1);
							MISC::SET_BIT(&Global_8136, 14);
						}
						else
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				if (func_82(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
					{
						iLocal_117 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_117 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_78580 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_117)
				{
					if (!Global_20209)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_78319 == 0)
					{
						if (iLocal_101 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_99 = MISC::GET_GAME_TIMER();
									iLocal_101 = 1;
								}
							}
						}
						else
						{
							iLocal_100 = MISC::GET_GAME_TIMER();
							iLocal_103 = (iLocal_100 - iLocal_99);
							if (iLocal_103 < 4000)
							{
								MISC::SET_BIT(&Global_8137, 4);
							}
							else
							{
								iLocal_101 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_78319)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
						if (iLocal_109 != joaat("weapon_unarmed") && Global_20266.f_1 < 7)
						{
							MISC::SET_BIT(&Global_8137, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_110 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible2"))
					{
						iLocal_113 = 1;
					}
					else
					{
						iLocal_113 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("khanjali")) || iLocal_113) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false) == 0)
					{
						MISC::SET_BIT(&Global_8137, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110))
						{
							iVar6 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_110);
							if (iVar6 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("insurgent3"))
								{
									if (iVar6 == 3)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("halftrack"))
								{
									if (iVar6 == 1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("dune3"))
								{
									if (iVar6 == 0)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("trailersmall2"))
								{
									if (iVar6 == -1)
									{
										MISC::SET_BIT(&Global_8137, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_110, iVar6))
								{
									MISC::SET_BIT(&Global_8137, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								bVar7 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_110))
								{
									bVar7 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_110)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_110))) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_110) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_65(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_78319 == 0)
						{
							if (Global_20266.f_1 == 6 || Global_20266.f_1 == 7)
							{
								func_65(0);
							}
						}
					}
					iLocal_113 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922883))
					{
						func_5(1, 1);
					}
					else
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
					}
				}
				if (Global_78319 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
					if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				else if (func_75())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_96)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_20251 = 1;
							func_68();
							func_65(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_75())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
							if ((iLocal_109 == joaat("weapon_sniperrifle") || iLocal_109 == joaat("weapon_heavysniper")) || iLocal_109 == joaat("weapon_remotesniper"))
							{
								bLocal_108 = true;
							}
							else
							{
								bLocal_108 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_108)
								{
									Global_20251 = 1;
									func_68();
									func_65(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_78319 == 0)
					{
						Global_20251 = 1;
						func_68();
						func_65(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_78319 && Global_2821909.f_1) && Global_2821909.f_37) && Global_20266.f_1 == 9)
				{
					iVar8 = 1;
					if (!BitTest(Global_8137, 24))
					{
						if (BitTest(Global_8137, 26))
						{
							MISC::SET_BIT(&Global_8137, 25);
							MISC::CLEAR_BIT(&Global_8137, 26);
							MISC::CLEAR_BIT(&Global_8138, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_20251 = 1;
					func_68();
					func_65(0);
				}
			}
		}
		if (Global_20244 == 1)
		{
			func_1();
		}
		if (Global_20265 == 2)
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
				PAD::DISABLE_CONTROL_ACTION(0, 24, true);
				PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()//Position - 0x1ECD
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_20235) && !PAD::IS_CONTROL_PRESSED(2, Global_20234))
	{
		Global_20244 = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1EF3
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)//Position - 0x1FCC
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x1FED
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_5(bool bParam0, bool bParam1)//Position - 0x2036
{
	if (bParam0)
	{
		if (func_6(0))
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

int func_6(int iParam0)//Position - 0x20AA
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

bool func_7()//Position - 0x2101
{
	return BitTest(Global_1958711, 5);
}

bool func_8()//Position - 0x210F
{
	return Global_2821909.f_1;
}

void func_9()//Position - 0x211D
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_22664 = 0;
	Global_22665 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_20232 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_74())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_20232 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_113386.f_14051.f_84 == 1)
	{
		Global_113386.f_14051.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_8136, 30) || BitTest(Global_8138, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_20226 };
	if (Global_20251 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_8137, 26) || BitTest(Global_8136, 30)) || BitTest(Global_8138, 2))
	{
		Local_115 = { Global_20212[Global_20211 /*3*/] };
	}
	else
	{
		Local_115 = { Global_20219[Global_20211 /*3*/] };
	}
	fVar2 = func_15(Local_115, Global_20212[Global_20211 /*3*/], Global_20226, Var1, fVar0, 0);
	if (!iLocal_84 && fVar2 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_84 = 1;
	}
	if (iLocal_84 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
		if (Global_20266.f_1 == 3)
		{
		}
		if (Global_20266.f_1 == 1)
		{
		}
		if (Global_20266.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_20207 = 0;
		Global_20248 = 0;
		Global_20462 = 0;
		if (Global_113386.f_14051.f_84 == 1)
		{
			Global_113386.f_14051.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_20210 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_22619 == 0)
		{
		}
		Global_20464 = 0;
		if (func_12(0))
		{
			func_11();
		}
		MISC::CLEAR_BIT(&Global_8137, 8);
		MISC::CLEAR_BIT(&Global_8136, 14);
		MISC::CLEAR_BIT(&Global_8136, 9);
		MISC::CLEAR_BIT(&Global_8136, 27);
		MISC::CLEAR_BIT(&Global_8136, 30);
		MISC::CLEAR_BIT(&Global_8137, 5);
		MISC::CLEAR_BIT(&Global_8137, 19);
		MISC::CLEAR_BIT(&Global_8137, 21);
		MISC::CLEAR_BIT(&Global_8137, 24);
		MISC::CLEAR_BIT(&Global_8137, 25);
		MISC::CLEAR_BIT(&Global_8137, 27);
		MISC::CLEAR_BIT(&Global_8137, 26);
		MISC::CLEAR_BIT(&Global_8138, 2);
		Global_2825434 = 0;
		iLocal_116 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_20264))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_83);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_20247, Global_20186, Global_20187, Global_20188, Global_20189, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_20264);
				}
			}
		}
		Global_20254 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
		{
			func_119(Global_20247, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_20247);
		Global_20232 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2821909.f_1)
			{
				if (Global_78319)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_20255, true);
				}
			}
		}
		func_116();
		func_114();
		Global_21618 = 0;
		Global_4541508 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()//Position - 0x2496
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_11()//Position - 0x24ED
{
	if (Global_8941[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8941[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8941[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8136, 25);
	MISC::SET_BIT(&Global_8137, 11);
}

int func_12(int iParam0)//Position - 0x256A
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)//Position - 0x258C
{
	return func_14(iParam0, Global_43052);
}

int func_14(int iParam0, int iParam1)//Position - 0x259D
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_15(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)//Position - 0x277E
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4541508 == 0)
	{
		if (BitTest(Global_8136, 14) && Global_20266.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
			{
				Global_4541508 = 1;
			}
		}
	}
	if (func_74() && Global_4541508 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar1 = func_17((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_20194 = { func_16(Param0, Param1, fVar2) };
		Global_20197 = { func_16(Param2, Param3, fVar2) };
	}
	else
	{
		Global_20194 = { Param1 };
		Global_20197 = { Param3 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20197, 0);
	return fVar1;
}

Vector3 func_16(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x288D
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_17(float fParam0, float fParam1, float fParam2)//Position - 0x28A7
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

void func_18()//Position - 0x28CE
{
	if (Global_20244 == 0)
	{
		if (func_62(2, Global_20238, 0))
		{
			if (Global_78319 == 0)
			{
				if (Global_20466)
				{
					if (Global_20465 == 0)
					{
						Global_20465 = 1;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(2);
						func_19();
						func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20271), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20271;
					}
					else
					{
						Global_20465 = 0;
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83(1);
						func_19();
						func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
						Global_20246 = Global_20270;
					}
				}
			}
		}
	}
}

void func_19()//Position - 0x29A7
{
	if (Global_20466 == 0)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	else if (Global_78319)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
	else
	{
		if (Global_20465 == 1)
		{
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_20254)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_8136, 17);
	}
}

void func_20()//Position - 0x2A80
{
	if (BitTest(Global_8137, 10) || iLocal_116 == 1)
	{
		Global_8743 = MISC::GET_GAME_TIMER();
		Global_8742 = 0;
		Global_20244 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
		iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_74 = 1;
	}
	else if (Global_20244 == 0)
	{
		if (func_62(2, Global_20235, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_8743 = MISC::GET_GAME_TIMER();
				Global_8742 = 0;
				Global_20244 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "GET_CURRENT_SELECTION");
				iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_74 = 1;
			}
		}
	}
}

void func_21()//Position - 0x2AFF
{
	if (Global_20244 == 0)
	{
		if (func_62(2, Global_20233, 1))
		{
			if (func_107(2092, -1, 0) == 1)
			{
				if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_8137, 3))
					{
						if (!Global_20209)
						{
							if (!BitTest(Global_4541229, 3))
							{
								if (!BitTest(Global_8136, 14))
								{
									Global_20244 = 1;
									MISC::SET_BIT(&Global_4541229, 3);
									func_22(3, 0, 1, 0);
									Global_22664 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2B77
{
	func_122();
	if (Global_78319 == 0)
	{
		if (func_82(14))
		{
			if (Global_22664 == 2 || Global_22664 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_20266.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_6(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20232 == 1)
	{
		return 0;
	}
	if (Global_20266.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20263))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20266.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20263 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20248)
	{
		SYSTEM::WAIT(0);
	}
	func_85();
	func_84();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
	{
		Global_8742 = 0;
		Global_20266.f_1 = 7;
		func_23(&(Global_8143[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
			{
				Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8143[iParam0 /*15*/].f_9) == 0)
		{
			Global_20264 = SYSTEM::START_NEW_SCRIPT(&(Global_8143[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8143[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)//Position - 0x2CDD
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_24()//Position - 0x2CFD
{
	if (func_40())
	{
		if (func_62(2, Global_20238, 0))
		{
			func_38();
			Global_20270 = Global_20246;
			func_35();
			return;
		}
	}
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						func_33();
						Global_20246 = 1;
					}
					break;
				
				case 1:
					if (Global_8705[2])
					{
						func_33();
						Global_20246 = 2;
					}
					break;
				
				case 2:
					if (Global_8705[3])
					{
						func_33();
						func_31();
						Global_20246 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 4;
					}
					break;
				
				case 3:
					if (Global_8705[4])
					{
						func_33();
						Global_20246 = 4;
					}
					break;
				
				case 4:
					if (Global_8705[5])
					{
						func_33();
						Global_20246 = 5;
					}
					break;
				
				case 5:
					if (Global_8705[6])
					{
						func_33();
						func_31();
						Global_20246 = 6;
					}
					break;
				
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[8])
					{
						func_33();
						Global_20246 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 0;
					}
					break;
				
				case 8:
					if (Global_8705[0])
					{
						func_33();
						func_31();
						Global_20246 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						func_29();
						func_26();
						Global_20246 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20246 = 7;
					}
					break;
				
				case 1:
					if (Global_8705[0])
					{
						func_29();
						Global_20246 = 0;
					}
					else if (Global_8705[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
				
				case 2:
					if (Global_8705[1])
					{
						func_29();
						Global_20246 = 1;
					}
					break;
				
				case 3:
					if (Global_8705[2])
					{
						func_29();
						func_26();
						Global_20246 = 2;
					}
					break;
				
				case 4:
					if (Global_8705[3])
					{
						func_29();
						Global_20246 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 5:
					if (Global_8705[4])
					{
						func_29();
						Global_20246 = 4;
					}
					break;
				
				case 6:
					if (Global_8705[5])
					{
						func_26();
						func_29();
						Global_20246 = 5;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				
				case 8:
					if (Global_8705[7])
					{
						func_29();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 1;
						Global_20469 = 1;
					}
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 6:
					Global_20246 = 7;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 1:
					if (Global_8705[0] == 1)
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20246 = 2;
						Global_20469 = 1;
					}
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_8143[23 /*15*/].f_10 == 57)
	{
		if (Global_20245 == 1 && Global_20246 == 8)
		{
			if (iLocal_118 == 0)
			{
				iLocal_118 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)//Position - 0x337A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

void func_26()//Position - 0x33A3
{
	func_112(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_27();
}

void func_27()//Position - 0x33E0
{
	if (func_28())
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

int func_28()//Position - 0x3403
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

void func_29()//Position - 0x344A
{
	func_112(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_30();
}

void func_30()//Position - 0x3487
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
	}
}

void func_31()//Position - 0x34AA
{
	func_112(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_32();
}

void func_32()//Position - 0x34E7
{
	if (func_28())
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

void func_33()//Position - 0x350A
{
	func_112(Global_20247, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20255, true);
	func_34();
}

void func_34()//Position - 0x3547
{
	if (func_28())
	{
		if (Global_20469 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
	}
}

void func_35()//Position - 0x356A
{
	MISC::SET_BIT(&Global_8138, 9);
	func_37(10, "CELL_16", 0, "appSettings", 24, 1, 1, 0, 0);
	func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_71 = 0;
	while (iLocal_71 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_71);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_36(&(Global_8143[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iLocal_71++;
	}
	Global_8669[0] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_36(&(Global_8143[10 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19();
	func_112(Global_20247, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_80();
}

void func_36(char* sParam0)//Position - 0x3684
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3696
{
	StringCopy(&(Global_8143[iParam0 /*15*/]), sParam1, 16);
	Global_8143[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8143[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8143[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8143[iParam0 /*15*/].f_10 = iParam4;
	Global_8143[iParam0 /*15*/].f_11 = iParam5;
	Global_8143[iParam0 /*15*/].f_12 = iParam6;
	Global_8143[iParam0 /*15*/].f_13 = iParam7;
	Global_8143[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8143[iParam0 /*15*/].f_12 == 0)
	{
		Global_8143[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_13 == 0)
	{
		Global_8143[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_14 == 0)
	{
		Global_8143[iParam0 /*15*/].f_14 = 0;
	}
}

void func_38()//Position - 0x374C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20255, true);
		func_39();
	}
}

void func_39()//Position - 0x3772
{
	if (func_28())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_40()//Position - 0x3786
{
	return 0;
}

void func_41()//Position - 0x378F
{
	if (func_62(2, Global_20238, 0))
	{
		func_38();
		MISC::CLEAR_BIT(&Global_8138, 9);
		func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_83(1);
		func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
		func_80();
	}
}

void func_42()//Position - 0x37F9
{
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_20246)
			{
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_43()//Position - 0x39B7
{
	if (Global_20245)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_20245 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[1])
					{
						func_33();
						Global_20246 = 1;
					}
					break;
				
				case 1:
					if (Global_8705[2])
					{
						func_33();
						Global_20246 = 2;
					}
					break;
				
				case 2:
					if (Global_8705[3])
					{
						func_33();
						func_31();
						Global_20246 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 4;
					}
					break;
				
				case 3:
					if (Global_8705[4])
					{
						func_33();
						Global_20246 = 4;
					}
					break;
				
				case 4:
					if (Global_8705[5])
					{
						func_33();
						Global_20246 = 5;
					}
					break;
				
				case 5:
					if (Global_8705[6])
					{
						func_33();
						func_31();
						Global_20246 = 6;
					}
					break;
				
				case 6:
					if (Global_8705[7])
					{
						func_33();
						Global_20246 = 7;
					}
					break;
				
				case 7:
					if (Global_8705[8])
					{
						func_33();
						Global_20246 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_20246 = 0;
					}
					break;
				
				case 8:
					if (Global_8705[0])
					{
						func_33();
						func_31();
						Global_20246 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[8])
					{
						func_29();
						func_26();
						Global_20246 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_20246 = 7;
					}
					break;
				
				case 1:
					if (Global_8705[0])
					{
						func_29();
						Global_20246 = 0;
					}
					break;
				
				case 2:
					if (Global_8705[1])
					{
						func_29();
						Global_20246 = 1;
					}
					break;
				
				case 3:
					if (Global_8705[2])
					{
						func_29();
						func_26();
						Global_20246 = 2;
					}
					break;
				
				case 4:
					if (Global_8705[3])
					{
						func_29();
						Global_20246 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 5:
					if (Global_8705[4])
					{
						func_29();
						Global_20246 = 4;
					}
					break;
				
				case 6:
					if (Global_8705[5])
					{
						func_26();
						func_29();
						Global_20246 = 5;
					}
					break;
				
				case 7:
					if (Global_8705[6])
					{
						func_29();
						Global_20246 = 6;
					}
					break;
				
				case 8:
					if (Global_8705[7])
					{
						func_29();
						Global_20246 = 7;
					}
					break;
				}
			}
	}
	if (Global_20245 == 0)
	{
		if (func_62(2, Global_20241, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 2:
					Global_20246 = 0;
					break;
				
				case 5:
					Global_20246 = 3;
					break;
				
				case 7:
					if (Global_8705[Global_20246 + 1] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 6;
						Global_20469 = 1;
					}
					break;
				
				case 8:
					Global_20246 = 6;
					break;
				
				default:
					Global_20246++;
					break;
			}
			if (Global_20469 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20240, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					Global_20246 = 2;
					break;
				
				case 3:
					Global_20246 = 5;
					break;
				
				case 6:
					if (Global_8705[8] == 1)
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20246 = 7;
						Global_20469 = 1;
					}
					break;
				
				default:
					Global_20246 = (Global_20246 - 1);
					break;
			}
			if (Global_20469 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20242, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 1:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				
				case 2:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				
				case 4:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 5:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 7:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 8:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_62(2, Global_20243, 0))
		{
			Global_20469 = 0;
			switch (Global_20246)
			{
				case 0:
					if (Global_8705[3])
					{
						Global_20246 = 3;
					}
					break;
				
				case 1:
					if (Global_8705[4])
					{
						Global_20246 = 4;
					}
					break;
				
				case 2:
					if (Global_8705[5])
					{
						Global_20246 = 5;
					}
					break;
				
				case 3:
					if (Global_8705[6])
					{
						Global_20246 = 6;
					}
					break;
				
				case 4:
					if (Global_8705[7])
					{
						Global_20246 = 7;
					}
					break;
				
				case 5:
					if (Global_8705[8])
					{
						Global_20246 = 8;
					}
					else
					{
						Global_20469 = 1;
						Global_20246 = 2;
					}
					break;
				
				case 6:
					if (Global_8705[0])
					{
						Global_20246 = 0;
					}
					break;
				
				case 7:
					if (Global_8705[1])
					{
						Global_20246 = 1;
					}
					break;
				
				case 8:
					if (Global_8705[2])
					{
						Global_20246 = 2;
					}
					break;
			}
			if (Global_20469 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_44()//Position - 0x3F49
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
	{
		iLocal_74 = 0;
		iLocal_72 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
		if (Global_20465 == 0)
		{
			Global_20270 = iLocal_72;
		}
		else
		{
			Global_20271 = iLocal_72;
		}
		if (iLocal_72 < 0)
		{
			iLocal_72 = 0;
		}
		Global_20269 = Global_8669[iLocal_72];
		if (BitTest(Global_8137, 10))
		{
			Global_20269 = 2;
			MISC::CLEAR_BIT(&Global_8137, 10);
		}
		if (iLocal_116 == 1)
		{
			Global_20270 = 1;
			Global_20269 = 0;
			Global_2825434 = 0;
			iLocal_116 = 0;
		}
		iVar0 = 0;
		if (Global_78319)
		{
			if (Global_20269 == 24 && func_40())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_20264))
		{
			iVar0 = 1;
		}
		if (Global_20269 == 3)
		{
			if (BitTest(Global_8137, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_78319)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_109, true);
						if (iLocal_109 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_20269 == 2)
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_20269 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[Global_20269 /*15*/]), "CELL_BENWEB"))
		{
			if (BitTest(Global_8137, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_78319)
		{
			if (Global_20269 == 15 || Global_20269 == 5)
			{
			}
			else
			{
				if (Global_20269 == 23)
				{
					if (((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0)
					{
					}
					if ((((BitTest(Global_4541229, 20) == 1 && BitTest(Global_4541229, 4) == 0) && Global_1836092 == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4541229, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_20269 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_75484 && Global_20269 == 2)
				{
					iVar0 = 1;
					sVar2 = func_47();
					if (!func_46(sVar2))
					{
						func_78(sVar2, -1);
					}
				}
				if (func_121())
				{
					if (Global_20269 == 10)
					{
						if (!func_46("FIX_MPCHAR_BLCK"))
						{
							func_78("FIX_MPCHAR_BLCK", -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8136, 17);
					Global_20266.f_1 = 7;
					if (BitTest(Global_8136, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5));
						MISC::SET_BIT(&Global_8136, 23);
					}
				}
				else
				{
					if (Global_20269 == 2 || Global_20269 == 3)
					{
					}
					func_45();
				}
			}
		}
		else
		{
			switch (Global_20269)
			{
				case 3:
					if (Global_112439 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_8136, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_20467 == 0)
					{
						if ((Global_8140 == 0 && iLocal_75 == 0) && Global_43052 == 15)
						{
							iLocal_75 = 1;
							func_38();
							if (!Global_113386.f_14051.f_85)
							{
							}
						}
					}
					else
					{
						func_45();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_20269 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_82(14))
			{
				if (Global_20269 != 3 && Global_20269 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
				Global_20266.f_1 = 7;
				if (BitTest(Global_8136, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8143[Global_20269 /*15*/].f_5));
					MISC::SET_BIT(&Global_8136, 23);
				}
			}
			else if (Global_20269 != 20)
			{
				if (Global_113386.f_14051.f_86 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_20269 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_78("CELL_38", -1);
									Global_113386.f_14051.f_86 = 1;
								}
							}
						}
					}
				}
				func_45();
			}
		}
	}
}

void func_45()//Position - 0x4437
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20255, true);
	}
}

bool func_46(char* sParam0)//Position - 0x4459
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_47()//Position - 0x446C
{
	return "BLOCK_APP_WEB";
}

void func_48()//Position - 0x4478
{
	if (Global_20232 == 0)
	{
		if (func_15(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8137, 24);
			MISC::SET_BIT(&Global_8137, 26);
		}
	}
}

void func_49()//Position - 0x44C9
{
	if (Global_20232 == 0)
	{
		if (func_15(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8137, 25);
			if (Global_21618)
			{
				MISC::CLEAR_BIT(&Global_8137, 27);
			}
		}
	}
}

void func_50()//Position - 0x4520
{
	if (Global_20232 == 0 && Global_20206 == 0)
	{
		if (func_15(Global_20219[Global_20211 /*3*/], Global_20212[Global_20211 /*3*/], Global_20226, Global_20226, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4541508 = 0;
		}
	}
}

void func_51()//Position - 0x456F
{
	float fVar0;
	float fVar1;
	
	if (BitTest(Global_8138, 2))
	{
		MISC::SET_BIT(&Global_8137, 8);
		MISC::SET_BIT(&Global_8136, 14);
		Global_20206 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20226, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_20212[Global_20211 /*3*/], Global_20219[Global_20211 /*3*/], Global_20229, Global_20226, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_8137, 8);
			MISC::SET_BIT(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8137, 8);
		}
	}
	else
	{
		if (iLocal_81 == 0)
		{
			Local_82 = { Global_20219[Global_20211 /*3*/] };
			Local_82.f_0 = (Local_82.f_0 - 10f);
			Local_82.f_1 = (Local_82.f_1 + 20f);
			iLocal_81 = 1;
		}
		fVar1 = func_15(Global_20212[Global_20211 /*3*/], Local_82, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_8137, 8);
			MISC::SET_BIT(&Global_8136, 14);
			Global_20206 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_8138, 2);
			iLocal_81 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8137, 8);
		}
	}
}

void func_52()//Position - 0x46C2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_103 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_102);
	}
	else
	{
		iLocal_98 = MISC::GET_GAME_TIMER();
		iLocal_103 = (iLocal_98 - iLocal_97);
	}
	if (iLocal_103 > 4000)
	{
		iLocal_86 = func_104();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_102 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_97 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_53()//Position - 0x4718
{
	if (Global_20265 == 1)
	{
		func_120();
		if (Global_20244 == 0)
		{
			if (func_62(2, Global_20236, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					if (Global_21652 == 0)
					{
						func_45();
						Global_20244 = 1;
						Global_20265 = 3;
						Global_21654 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_20244 == 0)
		{
			if (func_62(2, Global_20235, 0))
			{
				if (BitTest(Global_8137, 8))
				{
					func_38();
					Global_20244 = 1;
					Global_20265 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_59();
					func_58();
				}
			}
		}
	}
	else
	{
		if (iLocal_95 == 0)
		{
			if (BitTest(Global_8136, 27))
			{
				iLocal_95 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_20266.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_20209)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!BitTest(Global_8138, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_8136, 27))
			{
				iLocal_95 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_20265 == 0)
		{
			if (Global_20244 == 0)
			{
				if (func_62(2, Global_20234, 0) || Global_2825434 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (BitTest(Global_8137, 8))
							{
								switch (Global_20266.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_20464 == 0)
										{
											if (Global_20465 == 1)
											{
												func_45();
												Global_20465 = 0;
												func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_85();
												func_84();
												func_83(1);
												func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_20255, true);
												}
												iLocal_18 = 0;
												Global_20266.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_20266.f_1 = 3;
										break;
									
									case 7:
										if (BitTest(Global_8136, 23) == 1)
										{
										}
										if ((Global_8744 - Global_8743) > Global_8745 && BitTest(Global_8136, 23) == 0)
										{
											if (BitTest(Global_8137, 0))
											{
											}
											else
											{
												func_45();
												Global_8742 = 1;
												Global_20266.f_1 = 6;
												if (Global_78319)
												{
													func_112(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_4541505), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_8139 = 99;
												if (Global_2825434 == 0)
												{
													func_54();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_7451 == 132)
										{
											if (Global_2821909.f_1 || BitTest(Global_8137, 20))
											{
												func_45();
												func_76();
											}
										}
										else
										{
											func_45();
											func_76();
											Global_21654 = 1;
										}
										break;
									
									case 9:
										if (Global_21605 == 0)
										{
											Global_20266.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2825434 == 1)
								{
									iLocal_116 = 1;
									Global_2825434 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_54()//Position - 0x4A45
{
	char cVar0[24];
	
	if (Global_20249 == 1)
	{
		return;
	}
	if (Global_20266.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
	{
		if (Global_78319)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_20266.f_1)
	{
		case 6:
			func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_83(Global_8741);
			if (Global_8741 == 1)
			{
				func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20270;
			}
			else
			{
				func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20271), -1082130432, -1082130432, -1082130432);
				Global_20246 = Global_20271;
			}
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20466 == 0)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
			}
			else if (Global_78319)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8136, 17);
			}
			else
			{
				if (Global_20465 == 1)
				{
					if (Global_20254)
					{
						func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20254)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8136, 17);
			}
			if (Global_78319)
			{
				func_80();
				MISC::CLEAR_BIT(&Global_8138, 9);
				func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20270), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20265 == 1)
			{
				func_106();
				func_112(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21618)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21620);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300");
					func_36("CELL_217");
					func_36("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_57(Global_7451, Global_20266) == 0)
				{
					func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_217", &(Global_1998[Global_7451 /*29*/].f_3), 0);
				}
				func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21605 == 4 || Global_21605 == 3)
			{
				func_112(Global_20247, "SET_THEME", SYSTEM::TO_FLOAT(Global_113386.f_14051[Global_20266 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_106();
				if (Global_21618)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21620);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300");
					func_36("CELL_219");
					func_36("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21863)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_57(Global_7451, Global_20266) == 0)
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_112(Global_20247, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), &cVar0, &(Global_1998[Global_7451 /*29*/].f_3), 0);
					}
				}
				func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_55();
			break;
		
		default:
			break;
	}
}

void func_55()//Position - 0x5018
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
	{
		func_56();
		if (Global_20265 == 1)
		{
			if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21652)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
		}
		else
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_56()//Position - 0x5199
{
	if (Global_78319)
	{
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8136, 17);
	}
}

int func_57(int iParam0, int iParam1)//Position - 0x51C9
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

void func_58()//Position - 0x51F3
{
	if (Global_21618)
	{
		if (Global_78319)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2815059.f_1795), 15);
				}
			}
		}
	}
}

void func_59()//Position - 0x5242
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20247))
	{
		if (!Global_21613)
		{
			func_81(Global_20247, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_81(Global_20247, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8136, 17);
			if (BitTest(Global_8136, 20))
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20254)
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20209)
				{
					func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_81(Global_20247, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21618)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21620);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_36("CELL_300");
				func_36("CELL_219");
				func_36("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_57(Global_7451, Global_20266) == 0)
			{
				func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7451 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1998[Global_7451 /*29*/].f_3), &(Global_1998[Global_7451 /*29*/].f_7), "CELL_219", &(Global_1998[Global_7451 /*29*/].f_3), 0);
			}
		}
		func_112(Global_20247, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_60()//Position - 0x53EF
{
	Global_20471 = 0;
	func_61();
}

void func_61()//Position - 0x53FF
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20265 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = Global_20268;
		return;
	}
}

int func_62(int iParam0, int iParam1, int iParam2)//Position - 0x5436
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

int func_63()//Position - 0x54A8
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0)//Position - 0x54C5
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

void func_65(int iParam0)//Position - 0x54ED
{
	if (func_67())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_7())
		{
			func_5(1, 1);
		}
		else
		{
			func_5(0, 0);
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
	if (!func_66())
	{
		Global_20266.f_1 = 3;
	}
}

int func_66()//Position - 0x5577
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_67()//Position - 0x559E
{
	return BitTest(Global_1958711, 19);
}

void func_68()//Position - 0x55AD
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_69()//Position - 0x55D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_78319)
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
			if (!Global_20209)
			{
				if (Global_7451 != 128)
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
								if (Global_78319)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8136, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_70()//Position - 0x56F9
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (func_75())
		{
		}
		else
		{
			func_71();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_71()//Position - 0x5741
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_20219[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_20206 = 1;
	}
}

void func_72()//Position - 0x5768
{
	if ((BitTest(Global_8136, 14) && Global_4541508 == 0) && Global_20206 == 0)
	{
		if (iLocal_76 == 0)
		{
			if (BitTest(Global_8137, 26))
			{
				MISC::CLEAR_BIT(&Global_8137, 24);
				MISC::CLEAR_BIT(&Global_8137, 25);
				MISC::CLEAR_BIT(&Global_8137, 27);
				MISC::CLEAR_BIT(&Global_8137, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_71();
					}
					else if (func_74() == 0)
					{
						func_71();
					}
				}
			}
		}
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (func_74())
			{
				func_73();
			}
		}
		else if (func_75())
		{
		}
		else if (func_74())
		{
			func_73();
		}
		if (Global_20266.f_1 == 9)
		{
			if (Global_21618 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_73()//Position - 0x583E
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_20212[Global_20211 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4541508 = 1;
	}
}

int func_74()//Position - 0x5866
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			if (Global_20209 == 0)
			{
				if (Global_7451 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_21605 != 2)
						{
						}
					}
				}
			}
		}
		if (func_82(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1922883))))
		{
			return 0;
		}
		if (Global_112434)
		{
			return 0;
		}
	}
	if (Global_78319)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
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
	if (Global_4541507 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_113386.f_14051.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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

int func_75()//Position - 0x5AAF
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_76()//Position - 0x5ACC
{
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_8136, 11))
			{
				if (!Global_20209)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_8136, 11);
			}
		}
	}
}

int func_77()//Position - 0x5B33
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_78(char* sParam0, int iParam1)//Position - 0x5B57
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_79()//Position - 0x5B6E
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_83);
	if (iLocal_83 == -1)
	{
	}
}

void func_80()//Position - 0x5B82
{
	if (Global_78319)
	{
		if (func_40() == 0)
		{
			return;
		}
		func_81(Global_20247, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8136, 17);
	}
}

void func_81(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x5BBD
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
		func_36(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_36(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_36(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_36(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_36(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_82(int iParam0)//Position - 0x5C70
{
	return Global_43052 == iParam0;
}

void func_83(int iParam0)//Position - 0x5C7E
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
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_82(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
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
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_81(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_84()//Position - 0x6218
{
	if (Global_78319 == 0)
	{
		Global_8143[14 /*15*/].f_4 = -99;
		Global_8143[4 /*15*/].f_4 = -99;
		if (Global_2725398)
		{
			if (func_82(14))
			{
				func_37(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_85()//Position - 0x62A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8143[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_78319 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_86(iVar2, Global_20266) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_37(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43052 == 15 && func_64(0) == 0) && Global_8141 == 0)
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 0;
			Global_8142 = 255;
		}
		else
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_20467 = 1;
			Global_8142 = 42;
		}
		if (iVar1 == 1)
		{
			func_37(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_37(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113386.f_14051.f_89 == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113386.f_14051.f_88 == 1)
		{
			func_37(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_37(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4541229, 4) == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_37(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4541229, 4) == 1)
		{
			if (Global_1836092)
			{
				func_37(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 20) == 1)
			{
				func_37(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 22) == 1)
			{
				func_37(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4541229, 26) == 1)
			{
				if (func_121())
				{
					func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_37(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4541229, 4) == 0 && Global_1836092 == 0) && BitTest(Global_4541229, 20) == 0) && BitTest(Global_4541229, 22) == 0) && BitTest(Global_4541229, 26) == 0)
		{
			if (func_121())
			{
				func_37(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_37(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_86(int iParam0, int iParam1)//Position - 0x6856
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_19[iParam1];
}

int func_87(int iParam0)//Position - 0x6880
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_90() == 0)
		{
			return 0;
		}
	}
	if (func_88(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!func_88(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 13)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
	}
	return 0;
}

bool func_88(int* iParam0)//Position - 0x6923
{
	if (func_89())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_89()//Position - 0x6941
{
	return Global_32236;
}

int func_90()//Position - 0x694C
{
	if (func_91())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_91()//Position - 0x6994
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

void func_92()//Position - 0x69AA
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_111 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_87 = 5;
			break;
		
		case 1:
			iLocal_87 = 5;
			break;
		
		case 2:
			iLocal_87 = 4;
			break;
		
		case 3:
			iLocal_87 = 4;
			break;
		
		case 4:
			iLocal_87 = 3;
			break;
		
		case 5:
			iLocal_87 = 2;
			break;
		
		default:
			iLocal_87 = 3;
			break;
	}
	iLocal_112 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_112 < 2)
	{
		if (iLocal_87 > 2)
		{
			iLocal_87 = (iLocal_87 - 1);
		}
	}
	if (iLocal_113 == 1 || func_93())
	{
		iLocal_87 = 0;
	}
	func_112(Global_20247, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_86), SYSTEM::TO_FLOAT(iLocal_87), -1082130432, -1082130432, -1082130432);
}

int func_93()//Position - 0x6A7A
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_99();
		if (func_98(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_136)
			{
				if (BitTest(Global_113386.f_7688[iVar2 /*15*/].f_2, bVar0))
				{
					if (func_96(Var1, func_97(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_764)
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bVar0))
				{
					if (func_96(Var1, func_95(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_866)
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar2 /*10*/].f_2, bVar0))
				{
					if (func_96(Var1, func_94(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x6B7A
{
	return Global_113386.f_7688.f_765[iParam0 /*10*/].f_7;
}

int func_95(int iParam0)//Position - 0x6B92
{
	return Global_113386.f_7688.f_651[iParam0 /*14*/].f_7;
}

int func_96(struct<3> Param0, int iParam1)//Position - 0x6BAA
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_43053)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_43053[iParam1 /*5*/]) <= (Global_43053[iParam1 /*5*/].f_3 * Global_43053[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43053[iParam1 /*5*/].f_4 != -1)
		{
			return func_96(Param0, Global_43053[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x6C15
{
	return Global_113386.f_7688[iParam0 /*15*/].f_7;
}

bool func_98(int iParam0)//Position - 0x6C2A
{
	return iParam0 < 3;
}

var func_99()//Position - 0x6C36
{
	func_100();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_100()//Position - 0x6C4F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_102(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_101(PLAYER::PLAYER_PED_ID());
			if (func_98(iVar0) && (!func_82(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_98(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

int func_101(int iParam0)//Position - 0x6D4C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_102(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_102(int iParam0)//Position - 0x6D89
{
	if (func_98(iParam0))
	{
		return func_103(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_103(int iParam0)//Position - 0x6DAE
{
	return Global_1998[iParam0 /*29*/];
}

int func_104()//Position - 0x6DBD
{
	func_122();
	return Global_113386.f_14051[Global_20266 /*20*/].f_8;
}

struct<13> func_105(int iParam0)//Position - 0x6DD7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_106()//Position - 0x6DEE
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20266 == 0)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 1)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 2)
		{
			switch (Global_113386.f_14051[Global_20266 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20266 == 3)
		{
			switch (Global_4541505)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0x7065
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_108(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_108(var uParam0)//Position - 0x70A2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_109();
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

var func_109()//Position - 0x70D6
{
	return Global_1574918;
}

void func_110()//Position - 0x70E2
{
	if (func_82(14))
	{
		if (Global_2725398)
		{
			if (Global_20266.f_1 == 6)
			{
				if (Global_20246 == 7)
				{
					func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_20246 = 6;
					func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_20266.f_1 == 6)
		{
			func_112(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_89 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_89 != Global_8139)
	{
		Global_8139 = iLocal_89;
		iLocal_88 = CLOCK::GET_CLOCK_HOURS();
		iLocal_90 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_90)
		{
			case 0:
				StringCopy(&Local_91, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_91, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_91, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_91, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_91, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_91, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_91, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_91, "CELL_206", 16);
				break;
		}
		func_81(Global_20247, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_88), SYSTEM::TO_FLOAT(iLocal_89), -1f, -1f, -1f, &Local_91, 0, 0, 0, 0);
		if (Global_20209 == 0)
		{
			func_92();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_96 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_111()//Position - 0x7262
{
	if (Global_78319)
	{
		StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_20209)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_20266)
		{
			case 0:
				StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_20229 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_20219[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_20211 = 0;
		Global_20212[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_20219[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_20194 = { Global_20212[Global_20211 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20212[Global_20211 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20229, 0);
	Global_20206 = 1;
}

void func_112(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x73C7
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

bool func_113()//Position - 0x742A
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

void func_114()//Position - 0x7440
{
	Global_2821909.f_1 = 0;
	Global_2821909 = 0;
	Global_2821909.f_2 = 0;
	Global_2821909.f_33 = -1;
	Global_2821909.f_34 = -1;
	StringCopy(&(Global_2821909.f_4), "", 64);
	StringCopy(&(Global_2821909.f_39[0 /*16*/]), "", 64);
	Global_2821909.f_38 = 0;
	Global_2821909.f_56 = 0;
	Global_2821909.f_57 = 0;
	Global_2821909.f_58 = -2;
	Global_2821909.f_3 = 0;
	func_115(&(Global_2821909.f_20));
}

void func_115(var uParam0)//Position - 0x74B3
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_116()//Position - 0x74FB
{
	Global_2821909.f_2 = 1;
	Global_2821909.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2821909 = 0;
			Global_2821909.f_2 = 0;
		}
		else if (func_117(Global_2821909.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2821909.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2821909.f_20)))
				{
					func_114();
				}
			}
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}
	if (Global_2821909.f_37)
	{
		func_65(0);
	}
	Global_2821909.f_37 = 0;
	Global_2821909.f_3 = 0;
}

bool func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x759B
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_118()//Position - 0x75AB
{
	Global_20471 = 0;
	func_10();
}

void func_119(int iParam0, char* sParam1)//Position - 0x75BB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_120()//Position - 0x75D0
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20235);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_20236);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	}
	if (Global_78319)
	{
		Global_113386.f_14051[3 /*20*/].f_10 = func_107(1198, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_114 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_113386.f_14051[Global_20266 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_114) >= 300 || iLocal_114 == 0) || iLocal_114 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_114 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_78319)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_8941[3 /*2811*/][1 /*281*/].f_144[func_107(1199, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

int func_121()//Position - 0x77A9
{
	if (Global_78319)
	{
		if (Global_1836487 || Global_1836488 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()//Position - 0x77D0
{
	if (func_82(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_99();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

