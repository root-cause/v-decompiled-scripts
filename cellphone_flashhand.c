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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<2> Local_75 = { 0, 0 } ;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<2> Local_92 = { 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
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
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_64 = 0.73f;
	fLocal_65 = 0.55f;
	fLocal_66 = 0.73f;
	fLocal_67 = 0.45f;
	fLocal_68 = 0f;
	fLocal_69 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_21281 = 145;
	MISC::CLEAR_BIT(&Global_8920, 8);
	MISC::CLEAR_BIT(&Global_8919, 14);
	MISC::CLEAR_BIT(&Global_4546023, 3);
	MISC::CLEAR_BIT(&Global_8920, 10);
	MISC::CLEAR_BIT(&Global_8919, 17);
	MISC::CLEAR_BIT(&Global_8919, 9);
	MISC::CLEAR_BIT(&Global_8919, 26);
	MISC::CLEAR_BIT(&Global_8919, 23);
	MISC::CLEAR_BIT(&Global_8920, 24);
	MISC::CLEAR_BIT(&Global_8920, 25);
	MISC::CLEAR_BIT(&Global_8920, 27);
	MISC::CLEAR_BIT(&Global_8920, 26);
	MISC::CLEAR_BIT(&Global_8919, 30);
	Global_2750847 = 0;
	iLocal_120 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_21032 = 0;
	iLocal_72 = 0;
	Global_21010 = 0;
	Global_21050 = 0;
	Global_21051 = 0;
	func_157();
	Global_20997 = { Global_21029 };
	Global_21070 = 4;
	Global_21071 = 0;
	Global_9541 = 1;
	Global_21046 = Global_21070;
	if (Global_21048 == 0)
	{
		Global_21049 = 0;
		if (Global_79539)
		{
			if (func_156())
			{
				Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_badger");
			}
			else
			{
				Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_ifruit");
			}
			iLocal_86 = 1;
			if (iLocal_86 == 1)
			{
			}
		}
		else if (Global_21009)
		{
			Global_21054 = 1;
			Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_prologue");
		}
		else
		{
			Global_21047 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(Global_114135.f_14055[Global_21066 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047) && Global_21049 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_21049 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_21049 = 1;
					}
				}
			}
			if (Global_21065 == 1)
			{
				func_155();
			}
		}
		if (Global_21049 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
			{
				func_154(Global_21047, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21047);
			Global_21007 = 0;
			Global_21048 = 0;
			Global_21282 = 0;
			if (Global_114135.f_14055.f_84 == 1)
			{
				Global_114135.f_14055.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_21010 = 1;
			Global_21066.f_1 = 3;
			func_153();
			Global_21054 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_8919, 9);
			MISC::CLEAR_BIT(&Global_8919, 27);
			MISC::CLEAR_BIT(&Global_8919, 30);
			MISC::CLEAR_BIT(&Global_8920, 5);
			MISC::CLEAR_BIT(&Global_8920, 21);
			MISC::CLEAR_BIT(&Global_8921, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_21284 = 0;
			Global_23485 = 0;
			Global_23484 = 0;
			Global_22438 = 0;
			func_151();
			func_149();
			Global_4546302 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_20990 = 0.1f;
		Global_20991 = 0.38f;
		Global_20992 = 0.195f;
		Global_20993 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || func_148()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
			func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
		}
		else
		{
			if (!MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
			if (MISC::IS_JAPANESE_VERSION())
			{
				HUD::GET_HUD_COLOUR(6, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(126, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
				HUD::GET_HUD_COLOUR(9, &iLocal_106, &iLocal_107, &iLocal_108, &uLocal_109);
				func_147(Global_21047, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_106), SYSTEM::TO_FLOAT(iLocal_107), SYSTEM::TO_FLOAT(iLocal_108), -1082130432);
			}
		}
		if (Global_21049 == 0)
		{
		}
		func_146();
		if (Global_79539)
		{
			StringCopy(&Global_21055, "Phone_SoundSet_Michael", 24);
		}
		Global_21048 = 1;
	}
	Global_8922 = 99;
	func_145();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_23439 = 1;
	}
	else
	{
		Global_23439 = 0;
	}
	func_147(Global_21047, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_21008 = 1;
	if (Global_79539)
	{
		Global_21286 = 0;
		if (func_156())
		{
			if (Global_1836587 == 1)
			{
				Global_4546299 = 4;
			}
			else
			{
				Global_4546299 = 2;
			}
		}
		else
		{
			Global_4546299 = func_142(2030, -1);
		}
		if (Global_4546299 < 1 || Global_4546299 > 7)
		{
			Global_4546299 = 1;
		}
		func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546299), -1082130432, -1082130432, -1082130432, -1082130432);
		func_141();
		if (func_156())
		{
			if (Global_1836587 == 1)
			{
				Global_4546300 = 16;
			}
			else
			{
				Global_4546300 = 9;
			}
		}
		else
		{
			Global_4546300 = func_142(2029, -1);
		}
		if (Global_4546300 == 0)
		{
			Var16 = { func_140(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4546303 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4546303 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4546300), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_21009)
		{
			Global_21286 = 0;
		}
		else if (Global_114135.f_14055.f_88 == 1 || Global_114135.f_14055.f_89 == 1)
		{
			Global_21286 = 0;
		}
		else
		{
			Global_21286 = 0;
		}
		func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_9740 == 0)
		{
			func_147(Global_21047, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_141();
	}
	iLocal_87 = func_139();
	if (Global_21009 == 0)
	{
		func_127();
	}
	Global_21044 = 0;
	Global_21285 = 0;
	MISC::CLEAR_BIT(&Global_8919, 9);
	Global_2696411 = 0;
	if (func_122(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2696411 = 1;
	}
	func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_120();
	func_119();
	func_118(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_21055, true);
	SYSTEM::SETTIMERB(0);
	while (Global_21066.f_1 < 6 && Global_21049 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_21049 = 1;
		}
		if (Global_21066.f_1 < 4)
		{
			Global_21049 = 1;
		}
	}
	if (Global_21066.f_1 == 5 || Global_21066.f_1 == 6)
	{
		if (func_117(14))
		{
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
		}
		if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_147(Global_21047, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_147(Global_21047, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_21054)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		}
		else
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21054)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_21286 == 0)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else if (Global_79539)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			if (Global_21285 == 1)
			{
				if (Global_21054)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_8919, 17);
		}
	}
	Global_21052 = 1;
	func_115();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_104 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_99 = MISC::GET_GAME_TIMER();
	}
	if (Global_21282 == 1)
	{
		if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_114135.f_14055.f_84 == 0)
			{
				Global_114135.f_14055.f_84 = 1;
				if (Global_21011 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_114("CELL_7052" /* GXT: Sleep Mode is active.~n~The game story is paused. To continue it, enter the SETTINGS menu, select PROFILE then NORMAL MODE or trigger an existing mission. */, 10000);
			}
		}
	}
	if (Global_79539 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_113())
	{
		iLocal_78 = 1;
	}
	else
	{
		iLocal_78 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_79 = 1;
			if (func_113())
			{
				func_112();
			}
		}
		else
		{
			iLocal_79 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_79539 == 0)
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
			iLocal_103 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_8921, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_4546023, 24))
		{
			if (!Global_21285)
			{
				if (Global_21066.f_1 >= 6)
				{
					MISC::CLEAR_BIT(&Global_4546023, 24);
					func_120();
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_118(1);
					if (Global_21066.f_1 == 6)
					{
						if (BitTest(Global_8921, 9))
						{
							MISC::CLEAR_BIT(&Global_8921, 9);
							Global_21046 = 4;
							Global_21070 = Global_21046;
						}
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (Global_79539)
		{
			if (Global_21066.f_1 == 6)
			{
				if (func_111())
				{
					func_110();
				}
			}
			else if (Global_21066.f_1 == 7)
			{
				func_105(10, 23, 5, 0, 26216/*func_106*/);
			}
		}
		if (func_104())
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		}
		if (Global_79539 == 0)
		{
			if (iLocal_74)
			{
				if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
				{
					iLocal_74 = 0;
				}
			}
			if (Global_21066.f_1 > 4)
			{
				if ((BitTest(Global_8919, 14) && Global_4546302 == 0) && Global_21006 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_103())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21012[Global_21011 /*3*/].f_1 != Local_75.f_1)
							{
								func_101();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_75);
							if (Global_21019[Global_21011 /*3*/].f_1 != Local_75.f_1)
							{
								if (!func_104())
								{
								}
								if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
								{
									func_99();
								}
							}
						}
						if (iLocal_79 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_79 = 1;
								func_99();
								func_112();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_79 = 0;
							func_101();
							if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
							{
								if (Global_22425 != 2)
								{
									func_98();
								}
							}
						}
						if (iLocal_78 == 0)
						{
							if (func_113())
							{
								iLocal_78 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_112();
								}
								func_101();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
								}
							}
							if (func_113() == 0)
							{
								iLocal_78 = 0;
								func_99();
							}
						}
					}
				}
			}
		}
		if (Global_2696411 == 1)
		{
			if (!func_122(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (Global_21066.f_1 > 3)
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
						Global_2696411 = 0;
					}
				}
			}
		}
		if (Global_21287 == 0)
		{
			if ((Global_44181 != 15 || Global_8924 == 1) || func_93(0))
			{
				if (!Global_21285)
				{
					if (Global_21066.f_1 == 6)
					{
						Global_8925 = 42;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120();
						func_119();
						func_118(1);
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21287 = 1;
			}
		}
		else if ((Global_44181 == 15 && func_93(0) == 0) && Global_8924 == 0)
		{
			if (!Global_21285)
			{
				if (Global_21066.f_1 == 6)
				{
					Global_8925 = 255;
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120();
					func_119();
					func_118(1);
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21287 = 0;
		}
		if (Global_21288 == 0)
		{
			if (BitTest(Global_8920, 3))
			{
				if (!Global_21285 && !BitTest(Global_8921, 9))
				{
					if (Global_21066.f_1 == 6)
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_120();
						func_119();
						func_118(1);
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_21288 = 1;
			}
		}
		else if (!BitTest(Global_8920, 3))
		{
			if (!Global_21285 && !BitTest(Global_8921, 9))
			{
				if (Global_21066.f_1 == 6)
				{
					func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_120();
					func_119();
					func_118(1);
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_21288 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_20994.f_1 != Global_21012[Global_21011 /*3*/].f_1 || func_113())
			{
				if (Global_21066.f_1 > 3)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_79539)
						{
							if (Global_21066.f_1 == 9)
							{
								if (Global_22478 == 1 || BitTest(Global_8920, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
						}
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
						if (BitTest(Global_8919, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21037);
						}
					}
					if (!func_92() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21038);
					}
				}
			}
			if (Global_20994.f_1 == Global_21012[Global_21011 /*3*/].f_1)
			{
			}
		}
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_76640)
			{
				if (!func_104())
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21040);
				if (!func_92())
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21041);
				}
				if (Global_21066.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21043);
				}
			}
		}
		if (func_91(2, Global_21034, 0))
		{
			iLocal_96 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_73 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21035))
			{
				Global_8923 = 1;
				iLocal_73 = 0;
			}
			if (!Global_21066.f_1 > 3)
			{
				iLocal_73 = 0;
			}
		}
		if (iLocal_96)
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21034))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_21066.f_1 = 3;
					func_89();
				}
			}
			else
			{
				iLocal_96 = 0;
			}
		}
		Global_9544 = MISC::GET_GAME_TIMER();
		if (Global_21053)
		{
			func_115();
			Global_21052 = 1;
			Global_21053 = 0;
		}
		if (Global_21284 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_82();
			func_81();
			HUD::SET_TEXT_RENDER_ID(iLocal_84);
			if (Global_21052 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_21009)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
				}
				func_145();
			}
			if (Global_21006 == 1)
			{
				if (Global_21066.f_1 > 3)
				{
					func_80();
				}
			}
			else if (Global_21066.f_1 > 3)
			{
				if (Global_4546302 == 1)
				{
					func_79();
				}
				if (BitTest(Global_8920, 25))
				{
					if (Global_79539 == 1)
					{
						func_78();
					}
				}
				else if (!BitTest(Global_8920, 24))
				{
					if (BitTest(Global_8920, 26))
					{
						if (func_91(2, Global_21033, 0))
						{
							MISC::SET_BIT(&Global_8920, 25);
							MISC::CLEAR_BIT(&Global_8920, 26);
							MISC::CLEAR_BIT(&Global_8921, 2);
						}
					}
				}
				else if (Global_79539 == 1)
				{
					func_77();
				}
			}
		}
		if (iLocal_72)
		{
			if (Global_21066.f_1 == 6)
			{
				func_51();
			}
		}
		else if (!BitTest(Global_8919, 23) && !Global_78307)
		{
			if (Global_21066.f_1 == 5 || Global_21066.f_1 == 6)
			{
				if (Global_21284 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) < 1 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
					{
						if (Global_21009 == 0)
						{
							if (BitTest(Global_8919, 14))
							{
								if (!Global_79539)
								{
									if (iLocal_73 == 0)
									{
										if (!func_117(14))
										{
											func_50();
										}
										else if (Global_2696411)
										{
											func_49();
										}
									}
								}
								else if (BitTest(Global_8921, 9))
								{
									func_47();
								}
								else
								{
									func_24();
								}
							}
						}
						if (BitTest(Global_8919, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_23484 == 0)
						{
							if (!BitTest(Global_4546023, 3))
							{
								if (Global_79539)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_79539)
							{
								func_21();
							}
							if (!BitTest(Global_4546023, 3))
							{
								if (Global_23484 == 1)
								{
									if (BitTest(Global_4546023, 1))
									{
										if (BitTest(Global_8919, 14))
										{
											if (Global_79539)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_23485 = 0;
											}
											Global_23484 = 0;
											MISC::CLEAR_BIT(&Global_4546023, 1);
										}
									}
									else if (BitTest(Global_8919, 14))
									{
										func_22(7, 0, 1, 0);
										Global_23484 = 0;
									}
								}
								else
								{
									if (Global_23484 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_23484 = 0;
									}
									if (Global_23484 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_23484 = 0;
									}
									if (Global_23484 == 4)
									{
										func_22(24, 0, 1, 0);
										Global_23484 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_8926[Global_21069 /*15*/].f_5)))
		{
			if (Global_21069 == 0)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
				{
					Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_21069 == 24)
				{
					if (BitTest(Global_4546023, 4) == 0 && Global_1836180 == 0)
					{
					}
				}
				if (Global_21069 == 2 || iVar32 == 1)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
					{
						Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[Global_21069 /*15*/].f_9) == 0)
				{
					Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[Global_21069 /*15*/].f_5));
			Global_8922 = 99;
			MISC::CLEAR_BIT(&Global_8919, 23);
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			}
		}
		if (Global_21066.f_1 == 1)
		{
			func_9();
		}
		if (Global_21066.f_1 == 0)
		{
			func_9();
		}
		if (Global_21066.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_22438)
			{
				if (Global_21066.f_1 == 9)
				{
					if (Global_79539)
					{
						if (!BitTest(Global_8920, 31))
						{
							if (!BitTest(Global_8920, 27))
							{
								if (func_8())
								{
									if (!BitTest(Global_8919, 9))
									{
										if (func_91(2, Global_21038, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_21065 == 1)
												{
													if (Global_21066.f_1 > 6)
													{
														MISC::SET_BIT(&Global_8920, 24);
														MISC::SET_BIT(&Global_8920, 27);
														MISC::CLEAR_BIT(&Global_8920, 26);
														MISC::CLEAR_BIT(&Global_8920, 25);
														MISC::SET_BIT(&(Global_2739811.f_1863), 17);
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
			if (Global_21049 == 1)
			{
				Global_21051 = 1;
				func_94(0);
			}
			if (Global_21050 == 1)
			{
				Global_21051 = 1;
				func_94(0);
			}
			if (Global_79539)
			{
				if (!BitTest(Global_8921, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2746945.f_1 == 1)
						{
						}
						else
						{
							func_97();
							func_94(0);
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
						MISC::SET_BIT(&Global_8920, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))
						{
							func_5(1, 1);
							MISC::SET_BIT(&Global_8919, 14);
						}
						else
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
				if (func_117(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
					{
						iLocal_121 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_121 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael1")) > 0) || Global_79801 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_121)
				{
					if (!Global_21009)
					{
						MISC::SET_BIT(&Global_8920, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_79539 == 0)
					{
						if (iLocal_103 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_101 = MISC::GET_GAME_TIMER();
									iLocal_103 = 1;
								}
							}
						}
						else
						{
							iLocal_102 = MISC::GET_GAME_TIMER();
							iLocal_105 = (iLocal_102 - iLocal_101);
							if (iLocal_105 < 4000)
							{
								MISC::SET_BIT(&Global_8920, 4);
							}
							else
							{
								iLocal_103 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					if (Global_79539)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("WEAPON_UNARMED") && Global_21066.f_1 < 7)
						{
							MISC::SET_BIT(&Global_8920, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_112 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
					{
						iLocal_115 = 1;
					}
					else
					{
						iLocal_115 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("khanjali")) || iLocal_115) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_112, false) == 0)
					{
						MISC::SET_BIT(&Global_8920, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_112))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_112);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("insurgent3"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("halftrack"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("dune3"))
								{
									if (iVar33 == 0)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("trailersmall2"))
								{
									if (iVar33 == -1)
									{
										MISC::SET_BIT(&Global_8920, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_112, iVar33))
								{
									MISC::SET_BIT(&Global_8920, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/))
					{
						if (Global_79539 == 0)
						{
							if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_112))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_112)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_112))) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_112) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_94(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
					{
						if (Global_79539 == 0)
						{
							if (Global_21066.f_1 == 6 || Global_21066.f_1 == 7)
							{
								func_94(0);
							}
						}
					}
					iLocal_115 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))
					{
						func_5(1, 1);
					}
					else
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
					}
				}
				if (Global_79539 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
					if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
				else if (func_104())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_98)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_21051 = 1;
							func_97();
							func_94(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_104())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
							if ((iLocal_111 == joaat("WEAPON_SNIPERRIFLE") || iLocal_111 == joaat("WEAPON_HEAVYSNIPER")) || iLocal_111 == joaat("WEAPON_REMOTESNIPER"))
							{
								bLocal_110 = true;
							}
							else
							{
								bLocal_110 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_110)
								{
									Global_21051 = 1;
									func_97();
									func_94(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_79539 == 0)
					{
						Global_21051 = 1;
						func_97();
						func_94(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_79539 && Global_2746945.f_1) && Global_2746945.f_37) && Global_21066.f_1 == 9)
				{
					iVar35 = 1;
					if (!BitTest(Global_8920, 24))
					{
						if (BitTest(Global_8920, 26))
						{
							MISC::SET_BIT(&Global_8920, 25);
							MISC::CLEAR_BIT(&Global_8920, 26);
							MISC::CLEAR_BIT(&Global_8921, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_21051 = 1;
					func_97();
					func_94(0);
				}
			}
		}
		if (Global_21044 == 1)
		{
			func_1();
		}
		if (Global_21065 == 2)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()//Position - 0x1F2B
{
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21035) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, Global_21034))
	{
		Global_21044 = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1F51
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

int func_3(int iParam0)//Position - 0x202A
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

int func_4(int iParam0)//Position - 0x204B
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
		if (!Global_45178[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45178[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_5(bool bParam0, bool bParam1)//Position - 0x2094
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

int func_6(int iParam0)//Position - 0x2108
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
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
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_7()//Position - 0x215F
{
	return BitTest(Global_1957675, 5);
}

bool func_8()//Position - 0x216D
{
	return Global_2746945.f_1;
}

void func_9()//Position - 0x217B
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23484 = 0;
	Global_23485 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_21032 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_103())
		{
			iLocal_16 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_16 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_21032 = 1;
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
	if (Global_114135.f_14055.f_84 == 1)
	{
		Global_114135.f_14055.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (BitTest(Global_8919, 30) || BitTest(Global_8921, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_21026 };
	if (Global_21051 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((BitTest(Global_8920, 26) || BitTest(Global_8919, 30)) || BitTest(Global_8921, 2))
	{
		Local_117 = { Global_21012[Global_21011 /*3*/] };
	}
	else
	{
		Local_117 = { Global_21019[Global_21011 /*3*/] };
	}
	fVar4 = func_15(Local_117, Global_21012[Global_21011 /*3*/], Global_21026, Var1, fVar0, 0);
	if (!iLocal_85 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_85 = 1;
	}
	if (iLocal_85 && (MISC::GET_GAME_TIMER() - iLocal_16) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
		if (Global_21066.f_1 == 3)
		{
		}
		if (Global_21066.f_1 == 1)
		{
		}
		if (Global_21066.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_21007 = 0;
		Global_21048 = 0;
		Global_21282 = 0;
		if (Global_114135.f_14055.f_84 == 1)
		{
			Global_114135.f_14055.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_21010 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_23439 == 0)
		{
		}
		Global_21284 = 0;
		if (func_12(0))
		{
			func_11();
		}
		MISC::CLEAR_BIT(&Global_8920, 8);
		MISC::CLEAR_BIT(&Global_8919, 14);
		MISC::CLEAR_BIT(&Global_8919, 9);
		MISC::CLEAR_BIT(&Global_8919, 27);
		MISC::CLEAR_BIT(&Global_8919, 30);
		MISC::CLEAR_BIT(&Global_8920, 5);
		MISC::CLEAR_BIT(&Global_8920, 19);
		MISC::CLEAR_BIT(&Global_8920, 21);
		MISC::CLEAR_BIT(&Global_8920, 24);
		MISC::CLEAR_BIT(&Global_8920, 25);
		MISC::CLEAR_BIT(&Global_8920, 27);
		MISC::CLEAR_BIT(&Global_8920, 26);
		MISC::CLEAR_BIT(&Global_8921, 2);
		Global_2750847 = 0;
		iLocal_120 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[2 /*15*/].f_9) == 0 && !Global_78307)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_21064))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_84);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_21047, Global_20986, Global_20987, Global_20988, Global_20989, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_21064);
				}
			}
		}
		Global_21054 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
		{
			func_154(Global_21047, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_21047);
		Global_21032 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2746945.f_1)
			{
				if (Global_79539)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21055, true);
				}
			}
		}
		func_151();
		func_149();
		Global_22438 = 0;
		Global_4546302 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()//Position - 0x24FF
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

void func_11()//Position - 0x2556
{
	if (Global_9741[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9741[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9741[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9741[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9741[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9741[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8919, 25);
	MISC::SET_BIT(&Global_8920, 11);
}

int func_12(int iParam0)//Position - 0x25D3
{
	if (Global_44181 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)//Position - 0x25F5
{
	return func_14(iParam0, Global_44181);
}

int func_14(int iParam0, int iParam1)//Position - 0x2606
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

float func_15(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)//Position - 0x27E7
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4546302 == 0)
	{
		if (BitTest(Global_8919, 14) && Global_21066.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_21019[Global_21011 /*3*/].f_1 == Var0.f_1)
			{
				Global_4546302 = 1;
			}
		}
	}
	if (func_103() && Global_4546302 == 0)
	{
		return 2f;
	}
	if (iLocal_16 == 0)
	{
		iLocal_16 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_17((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_16)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_20994 = { func_16(Param0, Param3, fVar4) };
		Global_20997 = { func_16(Param6, Param9, fVar4) };
	}
	else
	{
		Global_20994 = { Param3 };
		Global_20997 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_20997, 0);
	return fVar3;
}

Vector3 func_16(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x28F6
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_17(float fParam0, float fParam1, float fParam2)//Position - 0x2910
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

void func_18()//Position - 0x2937
{
	if (Global_21044 == 0)
	{
		if (func_91(2, Global_21038, 0))
		{
			if (Global_79539 == 0)
			{
				if (Global_21286)
				{
					if (Global_21285 == 0)
					{
						Global_21285 = 1;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(2);
						func_19();
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
						Global_21046 = Global_21071;
					}
					else
					{
						Global_21285 = 0;
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_118(1);
						func_19();
						func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
						Global_21046 = Global_21070;
					}
				}
			}
		}
	}
}

void func_19()//Position - 0x2A10
{
	if (Global_21286 == 0)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
	else if (Global_79539)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
	else
	{
		if (Global_21285 == 1)
		{
			if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_21054)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
		}
		else
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_8919, 17);
	}
}

void func_20()//Position - 0x2AE9
{
	if (BitTest(Global_8920, 10) || iLocal_120 == 1)
	{
		Global_9543 = MISC::GET_GAME_TIMER();
		Global_9542 = 0;
		Global_21044 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
		iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_72 = 1;
	}
	else if (Global_21044 == 0)
	{
		if (func_91(2, Global_21035, 0))
		{
			if (iLocal_73 == 0)
			{
				Global_9543 = MISC::GET_GAME_TIMER();
				Global_9542 = 0;
				Global_21044 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "GET_CURRENT_SELECTION");
				iLocal_71 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_72 = 1;
			}
		}
	}
}

void func_21()//Position - 0x2B68
{
	if (Global_21044 == 0)
	{
		if (func_91(2, Global_21033, 1))
		{
			if (func_142(2092, -1) == 1)
			{
				if (Global_114135.f_14055[Global_21066 /*20*/].f_17 == 0)
				{
					if (!BitTest(Global_8920, 3))
					{
						if (!Global_21009)
						{
							if (!BitTest(Global_4546023, 3))
							{
								if (!BitTest(Global_8919, 14))
								{
									Global_21044 = 1;
									MISC::SET_BIT(&Global_4546023, 3);
									func_22(3, 0, 1, 0);
									Global_23484 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2BDF
{
	func_157();
	if (Global_79539 == 0)
	{
		if (func_117(14))
		{
			if (Global_23484 == 2 || Global_23484 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_21066.f_1 == 9)
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
	if (Global_21032 == 1)
	{
		return 0;
	}
	if (Global_21066.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21063))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21066.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_21063 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_21048)
	{
		SYSTEM::WAIT(0);
	}
	func_120();
	func_119();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
	{
		Global_9542 = 0;
		Global_21066.f_1 = 7;
		func_23(&(Global_8926[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
			{
				Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
		{
			Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)//Position - 0x2D45
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_24()//Position - 0x2D65
{
	if (func_46())
	{
		if (((Global_21046 == 2 || Global_21046 == 5) || Global_21046 == 8) && func_91(2, Global_21041, 0))
		{
			Global_21046 = 0;
			func_44();
			func_39();
			return;
		}
	}
	if (Global_21045)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21045 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_35();
	}
	if (Global_21045 == 0)
	{
		if (func_91(2, Global_21041, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 2:
					if (Global_9504[0] == 1)
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21046 = 1;
						Global_21289 = 1;
					}
					break;
				
				case 5:
					Global_21046 = 3;
					break;
				
				case 6:
					Global_21046 = 7;
					break;
				
				case 7:
					if (Global_9504[Global_21046 + 1] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = 1;
					}
					break;
				
				case 8:
					Global_21046 = 6;
					break;
				
				default:
					Global_21046++;
					break;
			}
			if (Global_21289 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21040, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
				
				case 1:
					if (Global_9504[0] == 1)
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21046 = 2;
						Global_21289 = 1;
					}
					break;
				
				case 3:
					Global_21046 = 5;
					break;
				
				case 6:
					if (Global_9504[8] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = 1;
					}
					break;
				
				default:
					Global_21046 = (Global_21046 - 1);
					break;
			}
			if (Global_21289 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21042, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[6])
					{
						Global_21046 = 6;
					}
					break;
				
				case 1:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 4;
					}
					break;
				
				case 2:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 5;
					}
					break;
				
				case 3:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 6;
					}
					break;
				
				case 4:
					if (Global_9504[1])
					{
						Global_21046 = 1;
					}
					break;
				
				case 5:
					if (Global_9504[2])
					{
						Global_21046 = 2;
					}
					break;
				
				case 6:
					if (Global_9504[3])
					{
						Global_21046 = 3;
					}
					break;
				
				case 7:
					if (Global_9504[4])
					{
						Global_21046 = 4;
					}
					break;
				
				case 8:
					if (Global_9504[5])
					{
						Global_21046 = 5;
					}
					break;
			}
			if (Global_21289 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21043, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[3])
					{
						Global_21046 = 3;
					}
					break;
				
				case 1:
					if (Global_9504[4])
					{
						Global_21046 = 4;
					}
					break;
				
				case 2:
					if (Global_9504[5])
					{
						Global_21046 = 5;
					}
					break;
				
				case 3:
					if (Global_9504[6])
					{
						Global_21046 = 6;
					}
					break;
				
				case 4:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 1;
					}
					break;
				
				case 5:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 2;
					}
					break;
				
				case 6:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 3;
					}
					break;
				
				case 7:
					if (Global_9504[1])
					{
						Global_21046 = 1;
					}
					break;
				
				case 8:
					if (Global_9504[2])
					{
						Global_21046 = 2;
					}
					break;
			}
			if (Global_21289 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_8926[24 /*15*/].f_10 == 57)
	{
		if (Global_21045 == 1 && Global_21046 == 8)
		{
			if (iLocal_122 == 0)
			{
				iLocal_122 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)//Position - 0x318A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2739811.f_5265.f_7[iVar0]), iVar1);
}

void func_26()//Position - 0x31B3
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_27();
}

void func_27()//Position - 0x31F0
{
	if (func_28())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

int func_28()//Position - 0x3213
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79539)
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
	if (Global_4546301 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()//Position - 0x325A
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_30();
}

void func_30()//Position - 0x3297
{
	if (func_28())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_31()//Position - 0x32BA
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_32();
}

void func_32()//Position - 0x32F7
{
	if (func_28())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(4);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(3);
		}
	}
}

void func_33()//Position - 0x331A
{
	func_147(Global_21047, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
	func_34();
}

void func_34()//Position - 0x3357
{
	if (func_28())
	{
		if (Global_21289 == 0)
		{
			MOBILE::CELL_SET_INPUT(3);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(4);
		}
	}
}

void func_35()//Position - 0x337A
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
	{
		switch (Global_21046)
		{
			case 0:
				if (Global_9504[1])
				{
					func_31();
					Global_21046 = 1;
				}
				break;
			
			case 1:
				if (Global_9504[2])
				{
					func_31();
					Global_21046 = 2;
				}
				break;
			
			case 2:
				if (Global_9504[3])
				{
					func_31();
					func_29();
					Global_21046 = 3;
				}
				else
				{
					func_33();
					func_29();
					Global_21046 = 4;
				}
				break;
			
			case 3:
				if (Global_9504[4])
				{
					func_31();
					Global_21046 = 4;
				}
				break;
			
			case 4:
				if (Global_9504[5])
				{
					func_31();
					Global_21046 = 5;
				}
				break;
			
			case 5:
				if (Global_9504[6])
				{
					func_31();
					func_29();
					Global_21046 = 6;
				}
				break;
			
			case 6:
				if (Global_9504[7])
				{
					func_31();
					Global_21046 = 7;
				}
				break;
			
			case 7:
				if (Global_9504[8])
				{
					func_31();
					Global_21046 = 8;
				}
				else if (func_46())
				{
					func_39();
					func_33();
					func_29();
					Global_21046 = 0;
				}
				else
				{
					func_33();
					func_29();
					Global_21046 = 0;
				}
				break;
			
			case 8:
				if (func_46())
				{
					func_39();
					func_31();
					func_29();
					Global_21046 = 0;
					return;
				}
				if (Global_9504[0])
				{
					func_31();
					func_29();
					Global_21046 = 0;
				}
				else
				{
					func_33();
					func_29();
				}
				break;
			}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
	{
		switch (Global_21046)
		{
			case 0:
				if (BitTest(Global_8921, 9))
				{
					func_36();
					func_33();
					func_26();
					Global_21046 = 8;
					return;
				}
				if (Global_9504[8])
				{
					func_33();
					func_26();
					Global_21046 = 8;
				}
				else
				{
					func_31();
					func_26();
					Global_21046 = 7;
				}
				break;
			
			case 1:
				if (Global_9504[0])
				{
					func_33();
					Global_21046 = 0;
				}
				else if (BitTest(Global_8921, 9))
				{
					func_36();
					func_31();
					func_26();
					Global_21046 = 8;
				}
				else if (Global_9504[8])
				{
					func_26();
					func_31();
				}
				else
				{
					func_26();
				}
				break;
			
			case 2:
				if (Global_9504[1])
				{
					func_33();
					Global_21046 = 1;
				}
				break;
			
			case 3:
				if (Global_9504[2])
				{
					func_33();
					func_26();
					Global_21046 = 2;
				}
				break;
			
			case 4:
				if (Global_9504[3])
				{
					func_33();
					Global_21046 = 3;
				}
				else
				{
					func_26();
					func_31();
					Global_21289 = 1;
					Global_21046 = 2;
				}
				break;
			
			case 5:
				if (Global_9504[4])
				{
					func_33();
					Global_21046 = 4;
				}
				break;
			
			case 6:
				if (Global_9504[5])
				{
					func_26();
					func_33();
					Global_21046 = 5;
				}
				break;
			
			case 7:
				if (Global_9504[6])
				{
					func_33();
					Global_21046 = 6;
				}
				break;
			
			case 8:
				if (Global_9504[7])
				{
					func_33();
					Global_21046 = 7;
				}
				break;
			}
	}
}

void func_36()//Position - 0x366B
{
	MISC::CLEAR_BIT(&Global_8921, 9);
	func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_118(1);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	func_37();
	func_120();
	func_118(1);
	func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
}

void func_37()//Position - 0x3710
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_38(&(Global_8926[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

void func_38(char* sParam0)//Position - 0x37A0
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_39()//Position - 0x37B2
{
	Global_21070 = Global_21046;
	func_40(1);
}

void func_40(bool bParam0)//Position - 0x37C5
{
	int iVar0;
	
	MISC::SET_BIT(&Global_8921, 9);
	if (bParam0)
	{
		func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_37();
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9467[iVar0] = 0;
		Global_9504[iVar0] = 0;
		iVar0++;
	}
	func_41(10, "CELL_16" /* GXT: Settings */, 0, "appSettings", 24);
	if (bParam0)
	{
		func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
	}
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x387D
{
	func_42(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_9504[iParam2] = 1;
	Global_9467[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_38(&(Global_8926[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x38ED
{
	StringCopy(&(Global_8926[iParam0 /*15*/]), sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = iParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8926[iParam0 /*15*/].f_12 == 0)
	{
		Global_8926[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_13 == 0)
	{
		Global_8926[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_14 == 0)
	{
		Global_8926[iParam0 /*15*/].f_14 = 0;
	}
}

void func_43()//Position - 0x39A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9504[iVar0] = 0;
		iVar0++;
	}
}

void func_44()//Position - 0x39C6
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21055, true);
		func_45();
	}
}

void func_45()//Position - 0x39EC
{
	if (func_28())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_46()//Position - 0x3A00
{
	if (func_106())
	{
		return 1;
	}
	return 0;
}

void func_47()//Position - 0x3A14
{
	if (((Global_21046 == 0 || Global_21046 == 3) || Global_21046 == 6) && func_91(2, Global_21040, 0))
	{
		Global_21046 += 2;
		func_44();
		func_36();
		return;
	}
	if (Global_21045)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21045 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_35();
	}
	func_48();
}

void func_48()//Position - 0x3A7E
{
	bool bVar0;
	
	if (!Global_21045)
	{
		bVar0 = false;
		if (func_91(2, Global_21041, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
				case 3:
				case 6:
					if (Global_9504[Global_21046 + 1])
					{
						Global_21046++;
					}
					else if (Global_9504[Global_21046 + 2])
					{
						Global_21046 += 2;
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 1:
				case 4:
				case 7:
					if (Global_9504[Global_21046 + 1])
					{
						Global_21046++;
					}
					else if (Global_9504[(Global_21046 - 1)])
					{
						Global_21046 = (Global_21046 - 1);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_9504[(Global_21046 - 2)])
					{
						Global_21046 = (Global_21046 - 2);
					}
					else if (Global_9504[(Global_21046 - 1)])
					{
						Global_21046 = (Global_21046 - 1);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21289)
				{
					func_31();
				}
				else
				{
					func_33();
				}
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21040, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 1:
				case 4:
				case 7:
					if (Global_9504[(Global_21046 - 1)])
					{
						Global_21046 = (Global_21046 - 1);
					}
					else if (Global_9504[Global_21046 + 1])
					{
						Global_21046++;
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 2:
				case 5:
				case 8:
					if (Global_9504[(Global_21046 - 1)])
					{
						Global_21046 = (Global_21046 - 1);
					}
					else if (Global_9504[(Global_21046 - 2)])
					{
						Global_21046 = (Global_21046 - 2);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21289)
				{
					func_33();
				}
				else
				{
					func_31();
				}
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21042, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9504[Global_21046 + 6])
					{
						Global_21046 += 6;
					}
					else if (Global_9504[Global_21046 + 3])
					{
						Global_21046 += 3;
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_9504[(Global_21046 - 3)])
					{
						Global_21046 = (Global_21046 - 3);
					}
					else if (Global_9504[Global_21046 + 3])
					{
						Global_21046 += 3;
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_9504[(Global_21046 - 3)])
					{
						Global_21046 = (Global_21046 - 3);
					}
					else if (Global_9504[(Global_21046 - 6)])
					{
						Global_21046 = (Global_21046 - 6);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21289)
				{
					func_26();
				}
				else
				{
					func_29();
				}
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21043, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
				case 1:
				case 2:
					if (Global_9504[Global_21046 + 3])
					{
						Global_21046 += 3;
					}
					else if (Global_9504[Global_21046 + 6])
					{
						Global_21046 += 6;
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 3:
				case 4:
				case 5:
					if (Global_9504[Global_21046 + 3])
					{
						Global_21046 += 3;
					}
					else if (Global_9504[(Global_21046 - 3)])
					{
						Global_21046 = (Global_21046 - 3);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
				
				case 6:
				case 7:
				case 8:
					if (Global_9504[(Global_21046 - 6)])
					{
						Global_21046 = (Global_21046 - 6);
					}
					else if (Global_9504[(Global_21046 - 3)])
					{
						Global_21046 = (Global_21046 - 3);
						Global_21289 = 1;
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21055, true);
						bVar0 = true;
					}
					break;
			}
			if (!bVar0)
			{
				if (!Global_21289)
				{
					func_29();
				}
				else
				{
					func_26();
				}
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_49()//Position - 0x3F47
{
	if (Global_21045)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21045 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			switch (Global_21046)
			{
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
				
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			switch (Global_21046)
			{
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
				
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
				}
			}
	}
	if (Global_21045 == 0)
	{
		if (func_91(2, Global_21041, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 2:
					Global_21046 = 0;
					break;
				
				case 5:
					Global_21046 = 3;
					break;
				
				case 7:
					if (Global_9504[Global_21046 + 1] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = 1;
					}
					break;
				
				case 8:
					Global_21046 = 6;
					break;
				
				default:
					Global_21046++;
					break;
			}
			if (Global_21289 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21040, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
				
				case 3:
					Global_21046 = 5;
					break;
				
				case 6:
					if (Global_9504[8] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = 1;
					}
					break;
				
				default:
					Global_21046 = (Global_21046 - 1);
					break;
			}
			if (Global_21289 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_50()//Position - 0x4106
{
	if (Global_21045)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21045 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
		{
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[1])
					{
						func_31();
						Global_21046 = 1;
					}
					break;
				
				case 1:
					if (Global_9504[2])
					{
						func_31();
						Global_21046 = 2;
					}
					break;
				
				case 2:
					if (Global_9504[3])
					{
						func_31();
						func_29();
						Global_21046 = 3;
					}
					else
					{
						func_33();
						func_29();
						Global_21046 = 4;
					}
					break;
				
				case 3:
					if (Global_9504[4])
					{
						func_31();
						Global_21046 = 4;
					}
					break;
				
				case 4:
					if (Global_9504[5])
					{
						func_31();
						Global_21046 = 5;
					}
					break;
				
				case 5:
					if (Global_9504[6])
					{
						func_31();
						func_29();
						Global_21046 = 6;
					}
					break;
				
				case 6:
					if (Global_9504[7])
					{
						func_31();
						Global_21046 = 7;
					}
					break;
				
				case 7:
					if (Global_9504[8])
					{
						func_31();
						Global_21046 = 8;
					}
					else
					{
						func_33();
						func_29();
						Global_21046 = 0;
					}
					break;
				
				case 8:
					if (Global_9504[0])
					{
						func_31();
						func_29();
						Global_21046 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
		{
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[8])
					{
						func_33();
						func_26();
						Global_21046 = 8;
					}
					else
					{
						func_31();
						func_26();
						Global_21046 = 7;
					}
					break;
				
				case 1:
					if (Global_9504[0])
					{
						func_33();
						Global_21046 = 0;
					}
					break;
				
				case 2:
					if (Global_9504[1])
					{
						func_33();
						Global_21046 = 1;
					}
					break;
				
				case 3:
					if (Global_9504[2])
					{
						func_33();
						func_26();
						Global_21046 = 2;
					}
					break;
				
				case 4:
					if (Global_9504[3])
					{
						func_33();
						Global_21046 = 3;
					}
					else
					{
						func_26();
						func_31();
						Global_21289 = 1;
						Global_21046 = 2;
					}
					break;
				
				case 5:
					if (Global_9504[4])
					{
						func_33();
						Global_21046 = 4;
					}
					break;
				
				case 6:
					if (Global_9504[5])
					{
						func_26();
						func_33();
						Global_21046 = 5;
					}
					break;
				
				case 7:
					if (Global_9504[6])
					{
						func_33();
						Global_21046 = 6;
					}
					break;
				
				case 8:
					if (Global_9504[7])
					{
						func_33();
						Global_21046 = 7;
					}
					break;
				}
			}
	}
	if (Global_21045 == 0)
	{
		if (func_91(2, Global_21041, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 2:
					Global_21046 = 0;
					break;
				
				case 5:
					Global_21046 = 3;
					break;
				
				case 7:
					if (Global_9504[Global_21046 + 1] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 6;
						Global_21289 = 1;
					}
					break;
				
				case 8:
					Global_21046 = 6;
					break;
				
				default:
					Global_21046++;
					break;
			}
			if (Global_21289 == 1)
			{
				func_33();
			}
			else
			{
				func_31();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21040, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					Global_21046 = 2;
					break;
				
				case 3:
					Global_21046 = 5;
					break;
				
				case 6:
					if (Global_9504[8] == 1)
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21046 = 7;
						Global_21289 = 1;
					}
					break;
				
				default:
					Global_21046 = (Global_21046 - 1);
					break;
			}
			if (Global_21289 == 1)
			{
				func_31();
			}
			else
			{
				func_33();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21042, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[6])
					{
						Global_21046 = 6;
					}
					break;
				
				case 1:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					break;
				
				case 2:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 5;
					}
					break;
				
				case 3:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					break;
				
				case 4:
					if (Global_9504[1])
					{
						Global_21046 = 1;
					}
					break;
				
				case 5:
					if (Global_9504[2])
					{
						Global_21046 = 2;
					}
					break;
				
				case 6:
					if (Global_9504[3])
					{
						Global_21046 = 3;
					}
					break;
				
				case 7:
					if (Global_9504[4])
					{
						Global_21046 = 4;
					}
					break;
				
				case 8:
					if (Global_9504[5])
					{
						Global_21046 = 5;
					}
					break;
			}
			if (Global_21289 == 1)
			{
				func_29();
			}
			else
			{
				func_26();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_91(2, Global_21043, 0))
		{
			Global_21289 = 0;
			switch (Global_21046)
			{
				case 0:
					if (Global_9504[3])
					{
						Global_21046 = 3;
					}
					break;
				
				case 1:
					if (Global_9504[4])
					{
						Global_21046 = 4;
					}
					break;
				
				case 2:
					if (Global_9504[5])
					{
						Global_21046 = 5;
					}
					break;
				
				case 3:
					if (Global_9504[6])
					{
						Global_21046 = 6;
					}
					break;
				
				case 4:
					if (Global_9504[7])
					{
						Global_21046 = 7;
					}
					break;
				
				case 5:
					if (Global_9504[8])
					{
						Global_21046 = 8;
					}
					else
					{
						Global_21289 = 1;
						Global_21046 = 2;
					}
					break;
				
				case 6:
					if (Global_9504[0])
					{
						Global_21046 = 0;
					}
					break;
				
				case 7:
					if (Global_9504[1])
					{
						Global_21046 = 1;
					}
					break;
				
				case 8:
					if (Global_9504[2])
					{
						Global_21046 = 2;
					}
					break;
			}
			if (Global_21289 == 1)
			{
				func_26();
			}
			else
			{
				func_29();
			}
			Global_21045 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_51()//Position - 0x4698
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_71))
	{
		iLocal_72 = 0;
		iLocal_70 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_71);
		if (Global_21285 == 0)
		{
			Global_21070 = iLocal_70;
		}
		else
		{
			Global_21071 = iLocal_70;
		}
		if (iLocal_70 < 0)
		{
			iLocal_70 = 0;
		}
		Global_21069 = Global_9467[iLocal_70];
		if (BitTest(Global_8920, 10))
		{
			Global_21069 = 2;
			MISC::CLEAR_BIT(&Global_8920, 10);
		}
		if (iLocal_120 == 1)
		{
			Global_21070 = 1;
			Global_21069 = 0;
			Global_2750847 = 0;
			iLocal_120 = 0;
		}
		iVar0 = 0;
		if (Global_79539)
		{
			if (Global_21069 == 25 && func_46())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_21064))
		{
			iVar0 = 1;
		}
		if (Global_21069 == 3)
		{
			if (BitTest(Global_8920, 3))
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
				if (Global_79539)
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_111, true);
						if (iLocal_111 != joaat("WEAPON_UNARMED"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_21069 == 2)
		{
			if (BitTest(Global_8920, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_21069 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_8926[Global_21069 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */))
		{
			if (BitTest(Global_8920, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_79539)
		{
			if (Global_21069 == 15 || Global_21069 == 5)
			{
			}
			else
			{
				if (Global_21069 == 24)
				{
					if (((BitTest(Global_4546023, 4) == 0 && Global_1836180 == 0) && BitTest(Global_4546023, 20) == 0) && BitTest(Global_4546023, 22) == 0)
					{
					}
					if ((((BitTest(Global_4546023, 20) == 1 && BitTest(Global_4546023, 4) == 0) && Global_1836180 == 0) && BitTest(Global_4546023, 22) == 0) && BitTest(Global_4546023, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4546023, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_21069 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (Global_76639 && Global_21069 == 2)
				{
					iVar0 = 1;
					sVar2 = func_76();
					if (!func_75(sVar2))
					{
						func_114(sVar2, -1);
					}
				}
				if (Global_21069 == 23)
				{
					func_53(&iVar0);
				}
				if (func_156())
				{
					if (Global_21069 == 10)
					{
						if (!func_75("FIX_MPCHAR_BLCK" /* GXT: This app is currently unavailable. Please try again later. */))
						{
							func_114("FIX_MPCHAR_BLCK" /* GXT: This app is currently unavailable. Please try again later. */, -1);
						}
						iVar0 = 1;
					}
				}
				if (iVar0 == 0)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_8919, 17);
					Global_21066.f_1 = 7;
					if (BitTest(Global_8919, 23))
					{
					}
					else
					{
						func_44();
						STATS::_PLAYSTATS_FLOW_HIGH(Global_2672939.f_4.f_11, "PhoneApp", false, Global_8926[Global_21069 /*15*/].f_9);
						Global_1942261.f_35 = 133;
						SCRIPT::REQUEST_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5));
						MISC::SET_BIT(&Global_8919, 23);
					}
				}
				else
				{
					if (Global_21069 == 2 || Global_21069 == 3)
					{
					}
					func_52();
				}
			}
		}
		else
		{
			switch (Global_21069)
			{
				case 3:
					if (Global_113188 == 1)
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
					MISC::SET_BIT(&Global_8919, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_21287 == 0)
					{
						if ((Global_8923 == 0 && iLocal_73 == 0) && Global_44181 == 15)
						{
							iLocal_73 = 1;
							func_44();
							if (!Global_114135.f_14055.f_85)
							{
							}
						}
					}
					else
					{
						func_52();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
			{
				if (Global_21069 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_117(14))
			{
				if (Global_21069 != 3 && Global_21069 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_44();
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
				Global_21066.f_1 = 7;
				if (BitTest(Global_8919, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_8926[Global_21069 /*15*/].f_5));
					MISC::SET_BIT(&Global_8919, 23);
				}
			}
			else if (Global_21069 != 20)
			{
				if (Global_114135.f_14055.f_86 == 0)
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_21069 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_114("CELL_38" /* GXT: You cannot use the Snapmatic application while in cover. */, -1);
									Global_114135.f_14055.f_86 = 1;
								}
							}
						}
					}
				}
				func_52();
			}
		}
	}
}

void func_52()//Position - 0x4BB9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21055, true);
	}
}

void func_53(int iParam0)//Position - 0x4BDB
{
	if (func_71(0))
	{
		*iParam0 = 1;
		if (!func_75("HROBA_INGNG_BLK" /* GXT: The Darnell Inc. phone app is unavailable while working for another Boss. */))
		{
			func_114("HROBA_INGNG_BLK" /* GXT: The Darnell Inc. phone app is unavailable while working for another Boss. */, -1);
		}
	}
	else if ((((((((((func_68(PLAYER::PLAYER_ID()) || func_64(PLAYER::PLAYER_ID())) || func_63()) || func_61(PLAYER::PLAYER_ID())) || func_59()) || func_58(0)) || func_57()) || Global_1057440 != -1) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 5) || func_54(PLAYER::PLAYER_ID(), 1, 0)) || Global_1981870)
	{
		*iParam0 = 1;
		if (!func_75("HROBA_GFAIL_BLK" /* GXT: The Darnell Inc. phone app is unavailable right now. */))
		{
			func_114("HROBA_GFAIL_BLK" /* GXT: The Darnell Inc. phone app is unavailable right now. */, -1);
		}
	}
}

int func_54(int iParam0, bool bParam1, bool bParam2)//Position - 0x4CA9
{
	if (bParam1)
	{
		if (func_55(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845221[iParam0 /*889*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_55(int iParam0)//Position - 0x4CDB
{
	return func_56(iParam0);
}

var func_56(int iParam0)//Position - 0x4CE9
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

var func_57()//Position - 0x4D00
{
	if (Global_2739811.f_298)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_2739811.f_297) == 0)
		{
			Global_2739811.f_298 = 0;
			Global_2739811.f_297 = -1;
		}
	}
	return Global_2739811.f_298;
}

int func_58(int iParam0)//Position - 0x4D38
{
	return 0;
}

int func_59()//Position - 0x4D41
{
	return func_60(Global_4718592.f_128476);
}

int func_60(int iParam0)//Position - 0x4D57
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_61(int iParam0)//Position - 0x4D86
{
	return func_62(&(Global_2657991[iParam0 /*467*/].f_446), 0);
}

var func_62(var uParam0, int iParam1)//Position - 0x4D9F
{
	return BitTest(*uParam0, iParam1);
}

var func_63()//Position - 0x4DAD
{
	return Global_1835498;
}

int func_64(int iParam0)//Position - 0x4DB9
{
	if (func_67(iParam0))
	{
		return 1;
	}
	if (func_65(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_65(int iParam0)//Position - 0x4DDC
{
	return func_66(iParam0, 20);
}

var func_66(int iParam0, int iParam1)//Position - 0x4DEC
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_67(var uParam0)//Position - 0x4E04
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 7);
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x4E27
{
	if (func_70(iParam0))
	{
		return 1;
	}
	if (func_69(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)//Position - 0x4E4A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_66(iParam0, 9);
	}
	return 0;
}

int func_70(var uParam0)//Position - 0x4E68
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

bool func_71(bool bParam0)//Position - 0x4E8B
{
	return func_72(PLAYER::PLAYER_ID(), bParam0);
}

int func_72(int iParam0, bool bParam1)//Position - 0x4E9D
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_73(iParam0))
		{
			return 0;
		}
	}
	return func_74(Global_1887549[iParam0 /*611*/].f_10);
}

int func_73(int iParam0)//Position - 0x4ED5
{
	if (func_74(iParam0))
	{
		if (func_74(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_74(var uParam0)//Position - 0x4F0A
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

bool func_75(char* sParam0)//Position - 0x4F2C
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_76()//Position - 0x4F3F
{
	return "BLOCK_APP_WEB" /* GXT: The Internet app is currently unavailable. Please try again later. */;
}

void func_77()//Position - 0x4F4B
{
	if (Global_21032 == 0)
	{
		if (func_15(Global_21019[Global_21011 /*3*/], Global_21012[Global_21011 /*3*/], Global_21026, Global_21026, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8920, 24);
			MISC::SET_BIT(&Global_8920, 26);
		}
	}
}

void func_78()//Position - 0x4F9C
{
	if (Global_21032 == 0)
	{
		if (func_15(Global_21012[Global_21011 /*3*/], Global_21019[Global_21011 /*3*/], Global_21026, Global_21026, 350f, 1) >= 1f)
		{
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8920, 25);
			if (Global_22438)
			{
				MISC::CLEAR_BIT(&Global_8920, 27);
			}
		}
	}
}

void func_79()//Position - 0x4FF3
{
	if (Global_21032 == 0 && Global_21006 == 0)
	{
		if (func_15(Global_21019[Global_21011 /*3*/], Global_21012[Global_21011 /*3*/], Global_21026, Global_21026, 350f, 0) >= 1f)
		{
			iLocal_16 = 0;
			Global_4546302 = 0;
		}
	}
}

void func_80()//Position - 0x5042
{
	float fVar0;
	float fVar1;
	
	if (BitTest(Global_8921, 2))
	{
		MISC::SET_BIT(&Global_8920, 8);
		MISC::SET_BIT(&Global_8919, 14);
		Global_21006 = 0;
		iLocal_16 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21026, 0);
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_21012[Global_21011 /*3*/], Global_21019[Global_21011 /*3*/], Global_21029, Global_21026, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_8920, 8);
			MISC::SET_BIT(&Global_8919, 14);
			Global_21006 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8921, 2);
			iLocal_80 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8920, 8);
		}
	}
	else
	{
		if (iLocal_80 == 0)
		{
			Local_81 = { Global_21019[Global_21011 /*3*/] };
			Local_81.f_0 = (Local_81.f_0 - 10f);
			Local_81.f_1 = (Local_81.f_1 + 20f);
			iLocal_80 = 1;
		}
		fVar1 = func_15(Global_21012[Global_21011 /*3*/], Local_81, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_8920, 8);
			MISC::SET_BIT(&Global_8919, 14);
			Global_21006 = 0;
			iLocal_16 = 0;
			MISC::CLEAR_BIT(&Global_8921, 2);
			iLocal_80 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_8920, 8);
		}
	}
}

void func_81()//Position - 0x5195
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_105 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_104);
	}
	else
	{
		iLocal_100 = MISC::GET_GAME_TIMER();
		iLocal_105 = (iLocal_100 - iLocal_99);
	}
	if (iLocal_105 > 4000)
	{
		iLocal_87 = func_139();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_104 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_99 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_82()//Position - 0x51EB
{
	if (Global_21065 == 1)
	{
		func_155();
		if (Global_21044 == 0)
		{
			if (func_91(2, Global_21036, 0))
			{
				if (BitTest(Global_8920, 8))
				{
					if (Global_22472 == 0)
					{
						func_52();
						Global_21044 = 1;
						Global_21065 = 3;
						Global_22474 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_21044 == 0)
		{
			if (func_91(2, Global_21035, 0))
			{
				if (BitTest(Global_8920, 8))
				{
					func_44();
					Global_21044 = 1;
					Global_21065 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_88();
					func_87();
				}
			}
		}
	}
	else
	{
		if (iLocal_97 == 0)
		{
			if (BitTest(Global_8919, 27))
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_21066.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_21009)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!BitTest(Global_8921, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!BitTest(Global_8919, 27))
			{
				iLocal_97 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_21065 == 0)
		{
			if (Global_21044 == 0)
			{
				if ((func_91(2, Global_21034, 0) || Global_2750847 == 1) && !Global_78307)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (BitTest(Global_8920, 8))
							{
								switch (Global_21066.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_21284 == 0)
										{
											if (Global_21285 == 1)
											{
												func_52();
												Global_21285 = 0;
												func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_120();
												func_119();
												func_118(1);
												func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_21055, true);
												}
												iLocal_16 = 0;
												Global_21066.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_21066.f_1 = 3;
										break;
									
									case 7:
										if (BitTest(Global_8919, 23) == 1)
										{
										}
										if ((Global_9544 - Global_9543) > Global_9545 && BitTest(Global_8919, 23) == 0)
										{
											if (BitTest(Global_8920, 0))
											{
											}
											else
											{
												func_52();
												Global_9542 = 1;
												Global_21066.f_1 = 6;
												if (Global_79539)
												{
													func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_4546299), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_8922 = 99;
												if (Global_2750847 == 0)
												{
													func_83();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_8234 == 132)
										{
											if (Global_2746945.f_1 || BitTest(Global_8920, 20))
											{
												func_52();
												func_112();
											}
										}
										else
										{
											func_52();
											func_112();
											Global_22474 = 1;
										}
										break;
									
									case 9:
										if (Global_22425 == 0)
										{
											Global_21066.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2750847 == 1)
								{
									iLocal_120 = 1;
									Global_2750847 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_83()//Position - 0x5522
{
	char cVar0[24];
	
	if (Global_21049 == 1)
	{
		return;
	}
	if (Global_21066.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (Global_79539)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21066.f_1)
	{
		case 6:
			func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_118(Global_9541);
			if (Global_9541 == 1)
			{
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21070), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21070;
			}
			else
			{
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21071), -1082130432, -1082130432, -1082130432);
				Global_21046 = Global_21071;
			}
			if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21286 == 0)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else if (Global_79539)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_8919, 17);
			}
			else
			{
				if (Global_21285 == 1)
				{
					if (Global_21054)
					{
						func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
					}
					else
					{
						func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21054)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /* GXT: NEXT */, 0, 0, 0, 0);
				}
				else
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_8919, 17);
			}
			if (Global_79539)
			{
				Global_21046 = Global_21070;
				if (func_46() && BitTest(Global_8921, 9))
				{
					func_40(0);
				}
				func_147(Global_21047, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
				func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21065 == 1)
			{
				func_141();
				func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_38("CELL_217" /* GXT: INCOMING CALL */);
					func_38("CELL_217" /* GXT: INCOMING CALL */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_86(Global_8234, Global_21066) == 0)
				{
					func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_217" /* GXT: INCOMING CALL */, "CELL_195" /* GXT: Unknown */, 0);
				}
				else
				{
					func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_217" /* GXT: INCOMING CALL */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
				}
				func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22425 == 4 || Global_22425 == 3)
			{
				func_147(Global_21047, "SET_THEME", SYSTEM::TO_FLOAT(Global_114135.f_14055[Global_21066 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_141();
				if (Global_22438)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_38("CELL_300" /* GXT: CHAR_DEFAULT */);
					func_38("CELL_219" /* GXT: CONNECTED */);
					func_38("CELL_219" /* GXT: CONNECTED */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_22683)
					{
						StringCopy(&cVar0, "CELL_219" /* GXT: CONNECTED */, 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211" /* GXT: DIALING... */, 24);
					}
					if (func_86(Global_8234, Global_21066) == 0)
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, &cVar0, "CELL_195" /* GXT: Unknown */, 0);
					}
					else
					{
						func_147(Global_21047, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), &cVar0, &(Global_2201[Global_8234 /*29*/].f_3), 0);
					}
				}
				func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_84();
			break;
		
		default:
			break;
	}
}

void func_84()//Position - 0x5B29
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		func_85();
		if (Global_21065 == 1)
		{
			if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /* GXT: ANSWER */, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22472)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /* GXT: REJECT */, 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
		}
		else
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_85()//Position - 0x5CAA
{
	if (Global_79539)
	{
		func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8919, 17);
	}
}

int func_86(int iParam0, int iParam1)//Position - 0x5CDA
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_24[iParam1];
}

void func_87()//Position - 0x5D04
{
	if (Global_22438)
	{
		if (Global_79539)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201" /* GXT: CALL */, 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2739811.f_1863), 15);
				}
			}
		}
	}
}

void func_88()//Position - 0x5D53
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21047))
	{
		if (!Global_22433)
		{
			func_116(Global_21047, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_21047, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8919, 17);
			if (BitTest(Global_8919, 20))
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21054)
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /* GXT: END CALL */, 0, 0, 0, 0);
				if (Global_21009)
				{
					func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_21047, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22438)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /* GXT: ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22440);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_38("CELL_300" /* GXT: CHAR_DEFAULT */);
				func_38("CELL_219" /* GXT: CONNECTED */);
				func_38("CELL_219" /* GXT: CONNECTED */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_86(Global_8234, Global_21066) == 0)
			{
				func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_120[Global_8234 /*10*/].f_4), "CELL_300" /* GXT: CHAR_DEFAULT */, "CELL_219" /* GXT: CONNECTED */, "CELL_195" /* GXT: Unknown */, 0);
			}
			else
			{
				func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2201[Global_8234 /*29*/].f_3), &(Global_2201[Global_8234 /*29*/].f_7), "CELL_219" /* GXT: CONNECTED */, &(Global_2201[Global_8234 /*29*/].f_3), 0);
			}
		}
		func_147(Global_21047, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_89()//Position - 0x5F00
{
	Global_21291 = 0;
	func_90();
}

void func_90()//Position - 0x5F10
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21065 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23436 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = Global_21068;
		return;
	}
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x5F47
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

int func_92()//Position - 0x5FB9
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_93(bool bParam0)//Position - 0x5FD6
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

void func_94(int iParam0)//Position - 0x5FFE
{
	if (func_96())
	{
		return;
	}
	if (Global_21284)
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
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_95())
	{
		Global_21066.f_1 = 3;
	}
}

int func_95()//Position - 0x6088
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x60AF
{
	return BitTest(Global_1957675, 19);
}

void func_97()//Position - 0x60BE
{
	if (Global_21066.f_1 == 9 || Global_21066.f_1 == 10)
	{
		Global_22478 = 0;
		Global_22474 = 1;
	}
}

void func_98()//Position - 0x60E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_113() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_79539)
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
			if (!Global_21009)
			{
				if (Global_8234 != 128)
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
								if (Global_79539)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_8919, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_99()//Position - 0x620B
{
	if ((BitTest(Global_8919, 14) && Global_4546302 == 0) && Global_21006 == 0)
	{
		if (func_104())
		{
		}
		else
		{
			func_100();
		}
		if (Global_21066.f_1 == 9)
		{
			if (Global_22438 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_100()//Position - 0x6253
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21019[Global_21011 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_21006 = 1;
	}
}

void func_101()//Position - 0x627A
{
	if ((BitTest(Global_8919, 14) && Global_4546302 == 0) && Global_21006 == 0)
	{
		if (iLocal_74 == 0)
		{
			if (BitTest(Global_8920, 26))
			{
				MISC::CLEAR_BIT(&Global_8920, 24);
				MISC::CLEAR_BIT(&Global_8920, 25);
				MISC::CLEAR_BIT(&Global_8920, 27);
				MISC::CLEAR_BIT(&Global_8920, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_100();
					}
					else if (func_103() == 0)
					{
						func_100();
					}
				}
			}
		}
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			if (func_103())
			{
				func_102();
			}
		}
		else if (func_104())
		{
		}
		else if (func_103())
		{
			func_102();
		}
		if (Global_21066.f_1 == 9)
		{
			if (Global_22438 == 0)
			{
				iLocal_74 = 1;
			}
		}
	}
}

void func_102()//Position - 0x6350
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21012[Global_21011 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4546302 = 1;
	}
}

int func_103()//Position - 0x6378
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		{
			if (Global_21009 == 0)
			{
				if (Global_8234 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22425 != 2)
						{
						}
					}
				}
			}
		}
		if (func_117(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1920254))))
		{
			return 0;
		}
		if (Global_113183)
		{
			return 0;
		}
	}
	if (Global_79539)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
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
	if (Global_4546301 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114135.f_14055.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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

int func_104()//Position - 0x65C1
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x65DE
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) > 0)
	{
		Stack.Push(Global_8926[iParam0 /*15*/].f_4 != iParam3);
		Call_Loc(iParam4);
		if ((StackVal && StackVal) && !BitTest(Global_8921, 9))
		{
			MISC::SET_BIT(&Global_8921, 9);
			Global_21046 = iParam3;
			Global_21070 = Global_21046;
		}
		else
		{
			Stack.Push(Global_8926[iParam1 /*15*/].f_4 == iParam2);
			Call_Loc(iParam4);
			if ((StackVal && !StackVal) && BitTest(Global_8921, 9))
			{
				MISC::CLEAR_BIT(&Global_8921, 9);
				Global_21046 = iParam2;
				Global_21070 = Global_21046;
			}
		}
	}
}

bool func_106()//Position - 0x6668
{
	return (func_107() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_107()//Position - 0x667E
{
	return func_108(9539, -1);
}

bool func_108(int iParam0, int iParam1)//Position - 0x668E
{
	if (iParam1 == -1)
	{
		iParam1 = func_109();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_109()//Position - 0x66AA
{
	return Global_1574926;
}

void func_110()//Position - 0x66B6
{
	if (!BitTest(Global_4546023, 24))
	{
		if (Global_21066.f_1 > 4)
		{
			MISC::SET_BIT(&Global_4546023, 24);
		}
	}
}

int func_111()//Position - 0x66DC
{
	if (((Global_8926[23 /*15*/].f_4 != 5 && func_106()) && !BitTest(Global_8921, 9)) || (Global_8926[23 /*15*/].f_4 == 5 && !func_106()))
	{
		return 1;
	}
	return 0;
}

void func_112()//Position - 0x6727
{
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_8919, 11))
			{
				if (!Global_21009)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_79539)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_8919, 11);
			}
		}
	}
}

int func_113()//Position - 0x678E
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_114(char* sParam0, int iParam1)//Position - 0x67B2
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_115()//Position - 0x67C9
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_84);
	if (iLocal_84 == -1)
	{
	}
}

void func_116(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x67DD
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
		func_38(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_38(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_38(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_38(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_38(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_117(int iParam0)//Position - 0x6890
{
	return Global_44181 == iParam0;
}

void func_118(int iParam0)//Position - 0x689E
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
	
	Global_23493 = 0;
	Global_9541 = iParam0;
	func_43();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_117(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar2 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696411)
							{
								if (iVar1 == 14)
								{
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_8926[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8926[iVar1 /*15*/].f_4)
					{
						if (Global_9504[iVar0] == 0)
						{
							Global_9467[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114135.f_14145[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114135.f_14145[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114135.f_14145[iVar3 /*104*/].f_99[Global_21066] == 1)
											{
												Global_23493++;
											}
										}
									}
									iVar3++;
								}
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79539)
								{
									iVar4 = 0;
									iVar4 = Global_4542452;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4542454[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4542454[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4542454[iVar5 /*296*/].f_291[Global_21066] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case 0:
											iVar6 = Global_45403;
											break;
										
										case 1:
											iVar6 = Global_45404;
											break;
										
										case 2:
											iVar6 = Global_45405;
											break;
										
										default:
											break;
									}
									func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8920, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8920, 3))
								{
									iVar8 = 42;
									Global_21288 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21288 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_8926[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_38(&(Global_8926[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882240.f_1;
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8926[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8926[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9504[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_119()//Position - 0x6E25
{
	if (Global_79539 == 0)
	{
		Global_8926[14 /*15*/].f_4 = -99;
		Global_8926[4 /*15*/].f_4 = -99;
		if (Global_2696411)
		{
			if (func_117(14))
			{
				func_42(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_42(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_42(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_42(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_120()//Position - 0x6EB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_8926[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79539 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_121(iVar2, Global_21066) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_42(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_42(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44181 == 15 && func_93(0) == 0) && Global_8924 == 0)
		{
			func_42(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 0;
			Global_8925 = 255;
		}
		else
		{
			func_42(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 1;
			Global_8925 = 42;
		}
		if (iVar1 == 1)
		{
			func_42(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_42(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_42(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_42(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114135.f_14055.f_89 == 1)
		{
			func_42(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114135.f_14055.f_88 == 1)
		{
			func_42(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_42(26, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_42(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_42(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_42(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (func_106())
		{
			func_42(23, "CELL_HACKER_ROB" /* GXT: Darnell Inc. */, 5, "appHackerDen", 62, 1, 1, 0, 0);
		}
		else
		{
			func_42(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		}
		func_42(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_42(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_42(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_42(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_42(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		if (BitTest(Global_4546023, 4))
		{
			func_42(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_42(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_42(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_42(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_42(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_42(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_42(24, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_42(25, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_42(26, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_42(27, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_42(28, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_42(29, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_42(30, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_42(31, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_42(32, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_42(33, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_42(34, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4546023, 4))
		{
			if (Global_1836180)
			{
				func_42(24, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 20))
			{
				func_42(24, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 22))
			{
				func_42(24, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 26))
			{
				if (func_156())
				{
					func_42(24, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_42(24, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4546023, 4) == 0 && Global_1836180 == 0) && BitTest(Global_4546023, 20) == 0) && BitTest(Global_4546023, 22) == 0) && BitTest(Global_4546023, 26) == 0)
		{
			if (func_156())
			{
				func_42(24, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_42(24, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_121(int iParam0, int iParam1)//Position - 0x747D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_19[iParam1];
}

int func_122(int iParam0)//Position - 0x74A7
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_125() == 0)
		{
			return 0;
		}
	}
	if (func_123(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!func_123(&iVar0))
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

bool func_123(int* iParam0)//Position - 0x754A
{
	if (func_124())
	{
		*iParam0 = 11;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_124()//Position - 0x7568
{
	return Global_33365;
}

int func_125()//Position - 0x7573
{
	if (func_126())
	{
		if (!NETWORK::NETWORK_IS_NP_AVAILABLE())
		{
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 4)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 2)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 1)
			{
				return 0;
			}
			if (NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_126()//Position - 0x75BB
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

void func_127()//Position - 0x75D1
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_113 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_113)
	{
		case 0:
			iLocal_88 = 5;
			break;
		
		case 1:
			iLocal_88 = 5;
			break;
		
		case 2:
			iLocal_88 = 4;
			break;
		
		case 3:
			iLocal_88 = 4;
			break;
		
		case 4:
			iLocal_88 = 3;
			break;
		
		case 5:
			iLocal_88 = 2;
			break;
		
		default:
			iLocal_88 = 3;
			break;
	}
	iLocal_114 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_114 < 2)
	{
		if (iLocal_88 > 2)
		{
			iLocal_88 = (iLocal_88 - 1);
		}
	}
	if (iLocal_115 == 1 || func_128())
	{
		iLocal_88 = 0;
	}
	func_147(Global_21047, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_87), SYSTEM::TO_FLOAT(iLocal_88), -1082130432, -1082130432, -1082130432);
}

int func_128()//Position - 0x76A1
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_134();
		if (func_133(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_114135.f_7692.f_136)
			{
				if (BitTest(Global_114135.f_7692[iVar4 /*15*/].f_2, bVar0))
				{
					if (func_131(Var1, func_132(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114135.f_7692.f_764)
			{
				if (BitTest(Global_114135.f_7692.f_651[iVar4 /*14*/].f_2, bVar0))
				{
					if (func_131(Var1, func_130(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_114135.f_7692.f_866)
			{
				if (BitTest(Global_114135.f_7692.f_765[iVar4 /*10*/].f_2, bVar0))
				{
					if (func_131(Var1, func_129(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x77A1
{
	return Global_114135.f_7692.f_765[iParam0 /*10*/].f_7;
}

int func_130(int iParam0)//Position - 0x77B9
{
	return Global_114135.f_7692.f_651[iParam0 /*14*/].f_7;
}

int func_131(struct<3> Param0, int iParam3)//Position - 0x77D1
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_44182)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_44182[iParam3 /*5*/]) <= (Global_44182[iParam3 /*5*/].f_3 * Global_44182[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_44182[iParam3 /*5*/].f_4 != -1)
		{
			return func_131(Param0, Global_44182[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x783C
{
	return Global_114135.f_7692[iParam0 /*15*/].f_7;
}

bool func_133(int iParam0)//Position - 0x7851
{
	return iParam0 < 3;
}

var func_134()//Position - 0x785D
{
	func_135();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_135()//Position - 0x7876
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_137(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_136(PLAYER::PLAYER_PED_ID());
			if (func_133(iVar0) && (!func_117(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_133(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

int func_136(int iParam0)//Position - 0x7973
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_137(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_137(int iParam0)//Position - 0x79B0
{
	if (func_133(iParam0))
	{
		return func_138(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_138(int iParam0)//Position - 0x79D5
{
	return Global_2201[iParam0 /*29*/];
}

int func_139()//Position - 0x79E4
{
	func_157();
	return Global_114135.f_14055[Global_21066 /*20*/].f_8;
}

struct<13> func_140(int iParam0)//Position - 0x79FE
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_141()//Position - 0x7A15
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21066 == 0)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 1)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 2)
		{
			switch (Global_114135.f_14055[Global_21066 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21066 == 3)
		{
			switch (Global_4546299)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_142(int iParam0, int iParam1)//Position - 0x7C8C
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_143(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_143(int iParam0, var uParam1)//Position - 0x7CBB
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_144(uParam1));
}

int func_144(var uParam0)//Position - 0x7CD0
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_109();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

void func_145()//Position - 0x7D04
{
	if (func_117(14))
	{
		if (Global_2696411)
		{
			if (Global_21066.f_1 == 6)
			{
				if (Global_21046 == 7)
				{
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_21046 = 6;
					func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_21066.f_1 == 6)
		{
			func_147(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_90 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_90 != Global_8922)
	{
		Global_8922 = iLocal_90;
		iLocal_89 = CLOCK::GET_CLOCK_HOURS();
		iLocal_91 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_91)
		{
			case 0:
				StringCopy(&Local_92, "CELL_920" /* GXT: Sun */, 16);
				break;
			
			case 1:
				StringCopy(&Local_92, "CELL_921" /* GXT: Mon */, 16);
				break;
			
			case 2:
				StringCopy(&Local_92, "CELL_922" /* GXT: Tue */, 16);
				break;
			
			case 3:
				StringCopy(&Local_92, "CELL_923" /* GXT: Wed */, 16);
				break;
			
			case 4:
				StringCopy(&Local_92, "CELL_924" /* GXT: Thu */, 16);
				break;
			
			case 5:
				StringCopy(&Local_92, "CELL_925" /* GXT: Fri */, 16);
				break;
			
			case 6:
				StringCopy(&Local_92, "CELL_926" /* GXT: Sat */, 16);
				break;
			
			default:
				StringCopy(&Local_92, "CELL_206" /* GXT: BACK */, 16);
				break;
		}
		func_116(Global_21047, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1f, -1f, -1f, &Local_92, 0, 0, 0, 0);
		if (Global_21009 == 0)
		{
			func_127();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_98 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_146()//Position - 0x7E84
{
	if (Global_79539)
	{
		StringCopy(&Global_21055, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_21009)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_21055, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_21066)
		{
			case 0:
				StringCopy(&Global_21055, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_21055, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_21055, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_21055, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_21029 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_21011 = 0;
		Global_21012[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_21019[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_21011 = 0;
		Global_21012[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_21019[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_20994 = { Global_21012[Global_21011 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_21012[Global_21011 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_21029, 0);
	Global_21006 = 1;
}

void func_147(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x7FE9
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

bool func_148()//Position - 0x804F
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_149()//Position - 0x8065
{
	Global_2746945.f_1 = 0;
	Global_2746945 = 0;
	Global_2746945.f_2 = 0;
	Global_2746945.f_33 = -1;
	Global_2746945.f_34 = -1;
	StringCopy(&(Global_2746945.f_4), "", 64);
	StringCopy(&(Global_2746945.f_39[0 /*16*/]), "", 64);
	Global_2746945.f_38 = 0;
	Global_2746945.f_56 = 0;
	Global_2746945.f_57 = 0;
	Global_2746945.f_58 = -2;
	Global_2746945.f_3 = 0;
	func_150(&(Global_2746945.f_20));
}

void func_150(var uParam0)//Position - 0x80D8
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

void func_151()//Position - 0x8120
{
	Global_2746945.f_2 = 1;
	Global_2746945.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2746945 = 0;
			Global_2746945.f_2 = 0;
		}
		else if (func_152(Global_2746945.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2746945.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2746945.f_20)))
				{
					func_149();
				}
			}
		}
		else
		{
			func_149();
		}
	}
	else
	{
		func_149();
	}
	if (Global_2746945.f_37)
	{
		func_94(0);
	}
	Global_2746945.f_37 = 0;
	Global_2746945.f_3 = 0;
}

bool func_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x81C0
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_153()//Position - 0x81D0
{
	Global_21291 = 0;
	func_10();
}

void func_154(int iParam0, char* sParam1)//Position - 0x81E0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_155()//Position - 0x81F5
{
	PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21035);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, Global_21036);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	}
	if (Global_79539)
	{
		Global_114135.f_14055[3 /*20*/].f_10 = func_142(1198, -1);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_114135.f_14055[Global_21066 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_116) >= 300 || iLocal_116 == 0) || iLocal_116 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 100, 100);
			iLocal_116 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_79539)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_9741[3 /*2811*/][1 /*281*/].f_144[func_142(1199, -1) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_9741[3 /*2811*/][1 /*281*/].f_144[func_142(1199, -1) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_114135.f_14055[Global_21066 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

int func_156()//Position - 0x83CB
{
	if (Global_79539)
	{
		if (Global_1836586 || Global_1836587 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_157()//Position - 0x83F2
{
	if (func_117(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_134();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

