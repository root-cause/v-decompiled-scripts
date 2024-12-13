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
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = -1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = -2;
	var uLocal_77 = -2;
	var uLocal_78 = -2;
	var uLocal_79 = 5;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 2;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 2;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
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
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	float fLocal_137 = 0f;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	int iLocal_161 = 0;
	char* sLocal_162 = NULL;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<66> Local_165 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_231 = 4;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 4;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 4;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 4;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	struct<29> Local_269 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<2> Local_301 = { 0, 0 } ;
	struct<4> Local_303 = { 0, 0, 0, 255 } ;
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 255;
	int iLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 255;
	int iLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 255;
	struct<4> Local_319[4];
	var uLocal_336 = 32;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = -1;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	struct<2> Local_385[4];
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
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	fLocal_91 = 3f;
	fLocal_92 = 0f;
	fLocal_93 = 2f;
	fLocal_94 = 100f;
	iLocal_135 = -1;
	fLocal_137 = 0.5f;
	sLocal_162 = "DLC_XM17_IAA_SF_Hack";
	iLocal_163 = -1;
	fLocal_164 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_152(ScriptParam_0))
		{
			func_148();
		}
	}
	else
	{
		func_148();
	}
	while (true)
	{
		func_147();
		if (func_139())
		{
			func_148();
		}
		if (func_137())
		{
			func_148();
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xFB
{
}

void func_2()//Position - 0x103
{
	func_3();
}

int func_3()//Position - 0x110
{
	int iVar0;
	
	if (func_136() == 0)
	{
		func_134();
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		}
		func_11(&(Local_385[iVar0 /*2*/]));
		MISC::SET_BIT(&Global_1957673, 1);
		if (!func_10(&uLocal_370))
		{
			func_7(&uLocal_370, 3, 2, -1);
		}
		if (BitTest(Local_385[iVar0 /*2*/], 0))
		{
			func_6(1);
			func_7(&uLocal_370, 0, 3, -1);
		}
		else if (BitTest(Local_385[iVar0 /*2*/], 1))
		{
			func_6(2);
			func_7(&uLocal_370, 0, 0, -1);
		}
		else if (BitTest(Local_385[iVar0 /*2*/], 2))
		{
			func_6(3);
			func_5(&uLocal_370, 0);
		}
	}
	if (func_4())
	{
		if (BitTest(Local_385[iVar0 /*2*/], 0) || func_136() == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_4()//Position - 0x1D6
{
	return BitTest(Global_1957673, 1);
}

void func_5(var uParam0, bool bParam1)//Position - 0x1E4
{
	uParam0->f_5 = { uParam0->f_11 };
	uParam0->f_8 = { uParam0->f_11 };
	uParam0->f_3 = 0f;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = 0;
	*uParam0 = -1;
	if (bParam1)
	{
		PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
	}
}

void func_6(int iParam0)//Position - 0x22B
{
	if (Global_1957673.f_1 != iParam0)
	{
		Global_1957673.f_1 = iParam0;
	}
}

void func_7(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x246
{
	if (iParam1 == -1)
	{
		return;
	}
	uParam0->f_5 = { func_9(iParam2) };
	uParam0->f_8 = { func_9(iParam2) };
	uParam0->f_1 = 0f;
	uParam0->f_3 = 0f;
	uParam0->f_4 = iParam3;
	*uParam0 = iParam1;
	func_8(&(uParam0->f_2));
}

void func_8(var uParam0)//Position - 0x28C
{
	if (*uParam0 == 0)
	{
		*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

Vector3 func_9(int iParam0)//Position - 0x2A2
{
	switch (iParam0)
	{
		case 0:
			return 255f, 0f, 0f;
		
		case 1:
			return 0f, 0f, 255f;
		
		case 2:
			return 100f, 255f, 255f;
		
		case 3:
			return 0f, 255f, 0f;
		
		case 4:
			return 255f, 255f, 255f;
		
		case 5:
			return 255f, 50f, 0f;
		
		case 6:
			return 255f, 165f, 0f;
		
		case 7:
			return 255f, 45f, 60f;
		
		case 8:
			return 255f, 0f, 255f;
		
		case 9:
			return 190f, 50f, 90f;
		
		case 10:
			return 0f, 255f, 200f;
		
		case 11:
			return 0f, 0f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_10(var uParam0)//Position - 0x3A0
{
	return *uParam0 != -1;
}

void func_11(int* iParam0)//Position - 0x3AD
{
	int iVar0;
	int iVar1;
	
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &iVar1);
	if (iLocal_298 != 4)
	{
		func_113();
	}
	if (iLocal_298 != 0)
	{
		func_111();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_161))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_161, 100, 100, 100, 255, 0);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(iLocal_163, "Damage", fLocal_164);
	switch (iLocal_298)
	{
		case 0:
			func_110();
			func_109();
			func_108();
			iLocal_267 = 0;
			if (!func_107(215, -1))
			{
				iLocal_268 = 1;
				Local_269.f_15[0] = 2;
				Local_269.f_15[1] = 0;
				Local_269.f_15[2] = 3;
				Local_269.f_15[3] = 1;
			}
			else
			{
				func_106();
			}
			MISC::CLEAR_BIT(&(Local_269.f_20), 0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_95(PLAYER::PLAYER_ID(), 0, 0, 0);
				func_94();
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1)) > (16f / 9f)
			{
				func_93(1, 1, 1, 0);
			}
			Global_4718592.f_180957 = 1;
			MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885), 16);
			iLocal_161 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("HACKING_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_161))
			{
				func_92(1);
			}
			if (iLocal_163 == -1)
			{
				iLocal_163 = AUDIO::GET_SOUND_ID();
			}
			fLocal_164 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
			break;
		
		case 1:
			func_82();
			func_77();
			func_63();
			if (func_62())
			{
				func_61();
			}
			if (func_60())
			{
				func_59();
				func_56(iParam0, &Local_269, 240000);
				func_92(3);
			}
			else if (func_50())
			{
				func_56(iParam0, &Local_269, 240000);
				func_92(2);
			}
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_163))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_163, "Background_Loop", sLocal_162, true);
			}
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				func_56(iParam0, &Local_269, 240000);
				MISC::SET_BIT(iParam0, 2);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_XM17_IAA_Hack_Minigame_Scene"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_XM17_IAA_Hack_Minigame_Scene");
			}
			if (func_48(0, -1, 0))
			{
				func_37(iVar0, -1, 0, 1, 0, 0, 1, 1, 0);
			}
			break;
		
		case 2:
			if (iLocal_267 == 3)
			{
				if (!func_36(&uLocal_299))
				{
					func_35(&uLocal_299, 0, 0);
				}
				else if (func_33(&uLocal_299, 3000, 0))
				{
					MISC::SET_BIT(iParam0, 0);
					func_29(215, 1, -1, 1);
					func_92(4);
				}
			}
			func_27();
			break;
		
		case 3:
			if (!func_36(&uLocal_299))
			{
				func_35(&uLocal_299, 0, 0);
			}
			else if (func_33(&uLocal_299, 3000, 0))
			{
				MISC::SET_BIT(iParam0, 1);
				func_92(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("MPHotwire", "failed", 0.5f, 0.5f, (0.344f / fLocal_159), 0.127f, 0f, 255, 255, 255, SYSTEM::ROUND(Local_269.f_26), false, 0);
				if (Local_269.f_26 < 255f)
				{
					Local_269.f_26 = (Local_269.f_26 + (255f * SYSTEM::TIMESTEP()));
				}
				else
				{
					func_25("BEAM_F" /* GXT: FAILURE */, 223, 55, 66, 255, 0.612f, 0.612f, 0.5f, 0.455f);
				}
			}
			break;
		
		case 4:
			func_12(iParam0, 0);
			break;
	}
}

void func_12(int* iParam0, bool bParam1)//Position - 0x6E5
{
	func_23();
	Global_4718592.f_180957 = 0;
	func_22();
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885), 16);
	func_93(0, 1, 1, 0);
	func_21();
	if (!bParam1)
	{
		if (func_19() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_95(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	func_18(&uLocal_299);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_161);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_XM17_IAA_Hack_Minigame_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_XM17_IAA_Hack_Minigame_Scene");
	}
	if (func_17(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
	}
	fLocal_164 = 0f;
	func_16(&iLocal_163);
	func_13(1, -1);
	func_92(0);
	*iParam0 = 0;
}

void func_13(bool bParam0, int iParam1)//Position - 0x7AE
{
	int iVar0;
	
	if (!func_15(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23970.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23970.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23970.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23970.f_6231[iVar0] = 0;
	}
	if (Global_23970.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23970.f_6217[iVar0] = 0;
	}
	if (Global_23970.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23970.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_14(&(Global_23970.f_6263[iVar0 /*10*/]));
		Global_23970.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23970.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_14(int* iParam0)//Position - 0x871
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

int func_15(int iParam0, bool bParam1, int iParam2)//Position - 0x89D
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
		if (Global_23970.f_6324[iVar17] == iVar16)
		{
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_23970.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23970.f_6324[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_16(int iParam0)//Position - 0x93A
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

int func_17(int iParam0)//Position - 0x95B
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

void func_18(var uParam0)//Position - 0x97C
{
	uParam0->f_1 = 0;
}

int func_19()//Position - 0x989
{
	if (func_20() == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x99E
{
	return Global_1574633.f_18;
}

void func_21()//Position - 0x9AC
{
	if (Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 0;
	}
}

void func_22()//Position - 0x9CA
{
	if (Global_1929312)
	{
	}
	Global_1929312 = 0;
}

void func_23()//Position - 0x9DE
{
	if (!Global_1574755)
	{
		return;
	}
	func_24();
}

void func_24()//Position - 0x9F5
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_25(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8)//Position - 0xA14
{
	float fVar0;
	
	HUD::SET_TEXT_SCALE(fParam5, fParam6);
	fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
	fVar0 = MISC::ABSF(SYSTEM::SIN((fVar0 * 0.35f)));
	iParam4 = (255 - SYSTEM::ROUND(fVar0) * 100);
	HUD::SET_TEXT_COLOUR(iParam1, iParam2, iParam3, iParam4);
	HUD::SET_TEXT_CENTRE(true);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_26(fParam7), fParam8, 0);
}

float func_26(float fParam0)//Position - 0xA78
{
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_159));
	return fParam0;
}

void func_27()//Position - 0xA95
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar0 = 0.25f;
	fVar1 = 0.511f;
	fVar2 = (0.454f * 50f);
	GRAPHICS::DRAW_SPRITE("MPHotwire", "passed", 0.5f, 0.5f, (0.344f / fLocal_159), 0.127f, 0f, 255, 255, 255, SYSTEM::ROUND(Local_269.f_26), false, 0);
	fVar0 = 0.03f;
	if (iLocal_267 != 0)
	{
		fVar0 = 0.011f;
		fVar3 = 0.375f;
		fVar4 = func_28(fVar3, 0.5f, Local_269.f_24);
		GRAPHICS::DRAW_SPRITE("MPHotwire", "load_bar", func_26(fVar4), fVar1, (((Local_269.f_24 * fVar0) * fVar2) / fLocal_159), fVar0, 90f, 255, 255, 255, 255, false, 0);
	}
	switch (iLocal_267)
	{
		case 0:
			Local_269.f_26 = (Local_269.f_26 + (200f * SYSTEM::TIMESTEP()));
			if (Local_269.f_26 >= 255f)
			{
				Local_269.f_26 = 255f;
				iLocal_267 = 1;
			}
			break;
		
		case 1:
			if (Local_269.f_24 < 1f)
			{
				Local_269.f_24 = (Local_269.f_24 + (0.5f * SYSTEM::TIMESTEP()));
				if (Local_269.f_24 >= 1f)
				{
					Local_269.f_24 = 1f;
				}
			}
			else
			{
				Local_269.f_24 = 1f;
				iLocal_267 = 3;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", sLocal_162, true);
				fLocal_164 = 0f;
				if (func_17(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Hack_Success_Remote", PLAYER::PLAYER_PED_ID(), sLocal_162, true, 30);
				}
			}
			break;
		
		case 3:
			fVar5 = 0.612f;
			func_25("BEAM_P" /* GXT: SUCCESS */, 76, 190, 148, 255, fVar5, fVar5, 0.5f, 0.456f);
			break;
	}
}

float func_28(float fParam0, float fParam1, float fParam2)//Position - 0xC22
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_29(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xC37
{
	int iVar0;
	
	iVar0 = func_30(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_30(int iParam0, var uParam1)//Position - 0xC5A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_31(uParam1));
}

int func_31(var uParam0)//Position - 0xC6F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
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

int func_32()//Position - 0xCA3
{
	return Global_1574926;
}

int func_33(var uParam0, int iParam1, bool bParam2)//Position - 0xCAF
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_34(uParam0, bParam2, 0);
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

void func_34(var uParam0, bool bParam1, bool bParam2)//Position - 0xD0D
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

void func_35(var uParam0, bool bParam1, bool bParam2)//Position - 0xD52
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

bool func_36(var uParam0)//Position - 0xD8F
{
	return uParam0->f_1;
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xD9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_15(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_45(bParam4, bParam8))
	{
		return;
	}
	if (func_43())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_40(PLAYER::PLAYER_ID(), 0))
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
	if (Global_23970.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23970.f_5326)
			{
				if (Global_23970.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23970.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23970.f_5625[iVar1], true), 64);
				}
				else if (Global_23970.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23970.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23970.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23970.f_5327 = 0;
		}
		if (!Global_23970.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23970.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23970.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23970.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_39(&(Global_23970.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23970.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_39(&(Global_23970.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23970.f_5610[iVar1] == -1)
					{
						func_38(&(Global_23970.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23970.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23970.f_5553[iVar1 /*4*/]));
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
						if (Global_23970.f_5625[iVar1] != 365 && BitTest(Global_23970.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5625[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5326);
				func_39(&Global_4542374);
				if (Global_4542374.f_20 == -1)
				{
					func_38(&(Global_4542374.f_16));
				}
				else
				{
					iVar4 = Global_23970.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23970.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23970.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23970.f_5326)
		{
			if (Global_23970.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23970.f_5553[iVar1 /*4*/]));
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
		if (Global_4542374.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
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
			if (!Global_23970.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23970.f_9116 = 1;
			}
		}
		else if (Global_23970.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23970.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23970.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23970.f_6263[iVar0 /*10*/], Global_23970.f_5656, Global_23970.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23970.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_38(char* sParam0)//Position - 0x129C
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_39(char* sParam0)//Position - 0x12AE
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_40(int iParam0, int iParam1)//Position - 0x12BC
{
	bool bVar0;
	
	if (!func_42(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845221[iParam0 /*889*/].f_206 == 8;
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

int func_41(int iParam0, bool bParam1)//Position - 0x1315
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_32();
	}
	if (Global_1575064[iVar1] == 1)
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

int func_42(var uParam0)//Position - 0x1356
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

int func_43()//Position - 0x1378
{
	struct<3> Var0;
	
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	if (func_44())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21011 == 0)
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

int func_44()//Position - 0x13E6
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_45(bool bParam0, bool bParam1)//Position - 0x1400
{
	if (Global_2672939.f_1761.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_47(8, -1) && func_46() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79800) || Global_23970.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101740.f_1490)
	{
		return 0;
	}
	return 1;
}

int func_46()//Position - 0x149D
{
	return Global_1575012;
}

var func_47(int iParam0, int iParam1)//Position - 0x14A9
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

bool func_48(char* sParam0, int iParam1, bool bParam2)//Position - 0x14E1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_15(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23970.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23970.f_6238[iVar0 /*4*/]), 9);
		Global_23970.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23970.f_6238[iVar0 /*4*/]), 9))
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
	Global_23970.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23970.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23970.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_49(&(Global_23970.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_49(var uParam0)//Position - 0x15E9
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

int func_50()//Position - 0x168B
{
	int iVar0;
	
	iVar0 = 0;
	if (func_36(&(Local_269.f_2)))
	{
		if (func_33(&(Local_269.f_2), Local_269.f_22, 0))
		{
			if (iLocal_267 == 4)
			{
				iVar0 = 1;
				iLocal_267 = 0;
				func_92(2);
				func_18(&(Local_269.f_2));
			}
		}
	}
	else if (func_55())
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/))
		{
			if (func_52())
			{
				if (!func_36(&(Local_269.f_2)))
				{
					func_51();
				}
			}
		}
	}
	return iVar0;
}

void func_51()//Position - 0x16FE
{
	func_35(&(Local_269.f_2), 0, 0);
	iLocal_267 = 0;
	func_92(2);
}

bool func_52()//Position - 0x171A
{
	int iVar0;
	int iVar1;
	float fVar2[4];
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iLocal_268 == 5 && func_54())
	{
		uVar7 = Local_269.f_15[0];
		uVar8 = Local_269.f_15[2];
		Local_269.f_15[0] = Local_269.f_15[3];
		Local_269.f_15[2] = uVar7;
		Local_269.f_15[3] = uVar8;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_269.f_10[iVar0] == Local_269.f_15[iVar0])
		{
			MISC::SET_BIT(&(Local_269.f_21), Local_269.f_10[iVar0]);
			fVar2[iVar0] = 1f;
			iVar1++;
		}
		else
		{
			Local_269.f_4[Local_269.f_10[iVar0]] = (Local_269.f_4[Local_269.f_10[iVar0]] - 1);
			MISC::CLEAR_BIT(&(Local_269.f_21), Local_269.f_10[iVar0]);
			fVar2[iVar0] = 0f;
			Local_269.f_10[iVar0] = -1;
			if (!func_62() && !func_107(215, -1))
			{
				func_53(7);
			}
			PAD::SET_CONTROL_SHAKE(2 /*FRONTEND_CONTROL*/, 350, 10);
			if (Local_269.f_4[iVar0] < 1)
			{
				MISC::SET_BIT(&(Local_269.f_20), 0);
			}
			fLocal_164 = (fLocal_164 + 0.075f);
		}
		iVar0++;
	}
	if (!BitTest(Local_269.f_20, 0))
	{
		iVar9 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iVar9, "Test_Circuit", sLocal_162, true);
		AUDIO::SET_VARIABLE_ON_SOUND(iVar9, "Wire_01", fVar2[0]);
		AUDIO::SET_VARIABLE_ON_SOUND(iVar9, "Wire_02", fVar2[1]);
		AUDIO::SET_VARIABLE_ON_SOUND(iVar9, "Wire_03", fVar2[2]);
		AUDIO::SET_VARIABLE_ON_SOUND(iVar9, "Wire_04", fVar2[3]);
		AUDIO::RELEASE_SOUND_ID(iVar9);
	}
	return iVar1 == 4;
}

void func_53(int iParam0)//Position - 0x18AD
{
	iLocal_268 = iParam0;
}

bool func_54()//Position - 0x18BA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_269.f_10[iVar0] == Local_269.f_15[iVar0])
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 == 4;
}

int func_55()//Position - 0x18F9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_269.f_10[iVar0] == -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_56(int* iParam0, var uParam1, int iParam2)//Position - 0x1928
{
	iParam0->f_1 = func_57(func_58(uParam1, 0, 0), 0, iParam2);
}

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x1943
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_58(var uParam0, bool bParam1, bool bParam2)//Position - 0x1968
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

void func_59()//Position - 0x19AF
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Fail", sLocal_162, true);
	if (func_17(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Hack_Fail_Remote", PLAYER::PLAYER_PED_ID(), sLocal_162, true, 30);
	}
	fLocal_164 = 0f;
}

int func_60()//Position - 0x19E3
{
	if (func_33(&Local_269, 240000, 0))
	{
		return 1;
	}
	if (BitTest(Local_269.f_20, 0))
	{
		return 1;
	}
	return 0;
}

void func_61()//Position - 0x1A0D
{
	char* sVar0;
	
	sVar0 = "";
	switch (iLocal_268)
	{
		case 1:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				sVar0 = "HWTUT_SEL_PC";
			}
			else
			{
				sVar0 = "HWTUT_SEL";
			}
			if (Local_269.f_9 > -1)
			{
				func_53(2);
			}
			break;
		
		case 2:
			sVar0 = "HWTUT_WIRE";
			if (Local_301.f_0 > 0.35f)
			{
				func_53(3);
			}
			break;
		
		case 3:
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				sVar0 = "HWTUT_SELR_PC";
			}
			else
			{
				sVar0 = "HWTUT_SELR";
			}
			if (Local_269.f_9 > -1)
			{
				if (Local_269.f_10[Local_269.f_9] > -1)
				{
					func_53(4);
				}
			}
			else
			{
				func_53(4);
			}
			break;
		
		case 4:
			if (func_55())
			{
				func_53(5);
			}
			break;
		
		case 5:
			sVar0 = "HWTUT_TEST";
			if (!func_55())
			{
				func_34(&(Local_269.f_27), 0, 0);
				func_53(6);
			}
			break;
		
		case 6:
			sVar0 = "HWTUT_FINAL";
			if (func_33(&(Local_269.f_27), 8500, 0))
			{
				func_18(&(Local_269.f_27));
				func_53(0);
			}
			break;
		
		case 7:
			sVar0 = "HWTUT_LIVES";
			if (func_36(&(Local_269.f_27)))
			{
				if (func_33(&(Local_269.f_27), 8500, 0))
				{
					func_53(0);
				}
			}
			else
			{
				func_35(&(Local_269.f_27), 0, 0);
			}
			break;
	}
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, ""))
	{
		HUD::DISPLAY_HELP_TEXT_THIS_FRAME(sVar0, true);
	}
}

bool func_62()//Position - 0x1B71
{
	return iLocal_268 != 0;
}

void func_63()//Position - 0x1B7E
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	struct<4> Var4;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = 0.01f;
	bVar1 = true;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		Local_301.f_0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
		Local_301.f_1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	}
	else
	{
		fVar2 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
		if (fVar2 > 0.1f || fVar2 < -0.1f)
		{
			Local_301.f_0 = (Local_301.f_0 + ((fVar2 / 1.5f) * SYSTEM::TIMESTEP()));
		}
		if (fVar3 > 0.1f || fVar3 < -0.1f)
		{
			Local_301.f_1 = (Local_301.f_1 + ((fVar3 / 1.5f) * SYSTEM::TIMESTEP()));
		}
		func_76(&Local_301, &(Local_301.f_1));
	}
	Var4.f_3 = 255;
	func_75(&Var4, 255, 0, 0, 255);
	iVar8 = func_74();
	if (iVar8 > -1)
	{
		Var4 = { Local_319[iVar8 /*4*/] };
		if (Local_269.f_9 == -1)
		{
			fVar9 = SYSTEM::TO_FLOAT(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_269.f_0)));
			fVar10 = 0.5f;
			fVar0 = ((SYSTEM::SIN((fVar9 * fVar10)) * 0.019f) + 0.001f);
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
		{
			if (Local_269.f_9 == -1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Grab_Wire", sLocal_162, true);
				bVar1 = false;
			}
			Local_269.f_9 = iVar8;
		}
	}
	if (Local_269.f_9 > -1)
	{
		iVar11 = func_71();
		func_65(func_69(Local_269.f_9), Local_301);
		if (iVar11 > -1)
		{
			if (!func_64(iVar11))
			{
				func_75(&Var4, 255, 0, 0, 255);
				fVar12 = SYSTEM::TO_FLOAT(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_269.f_0)));
				fVar13 = 0.5f;
				fVar0 = ((SYSTEM::SIN((fVar12 * fVar13)) * 0.019f) + 0.001f);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
				{
					Local_269.f_10[Local_269.f_9] = iVar11;
					Local_269.f_9 = -1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Attach_Wire", sLocal_162, true);
					bVar1 = false;
				}
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
	{
		if (bVar1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Error", sLocal_162, true);
		}
	}
	fVar14 = (0.1f + fVar0);
	GRAPHICS::DRAW_SPRITE("MPHotwire", "Cursor_0", func_26(Local_301.f_0), Local_301.f_1, ((1f / fLocal_159) * fVar14), (1f * fVar14), 0f, 255, 255, 255, 255, false, 0);
}

int func_64(int iParam0)//Position - 0x1DF3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_269.f_10[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_65(struct<2> Param0, struct<2> Param2)//Position - 0x1E20
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	
	Var0 = { func_67(func_68(Param0, Param2), 2f) };
	fVar2 = func_66(Param0, Param2);
	fVar3 = MISC::ATAN2((Param0.f_1 - Param2.f_1), (Param0.f_0 - Param2.f_0));
	GRAPHICS::DRAW_SPRITE_ARX("MPHotwire", "line", func_26(Var0.f_0), Var0.f_1, (fVar2 / fLocal_159), 0.004f, fVar3, 255, 255, 255, 255, 0, 0);
}

float func_66(struct<2> Param0, struct<2> Param2)//Position - 0x1E88
{
	return SYSTEM::SQRT((SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f)));
}

struct<2> func_67(struct<2> Param0, float fParam2)//Position - 0x1EAD
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_68(struct<2> Param0, struct<2> Param2)//Position - 0x1ECB
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param2.f_0);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

struct<2> func_69(int iParam0)//Position - 0x1EEB
{
	struct<2> Var0;
	
	Var0 = { func_70(iParam0) };
	Var0.f_0 = (Var0.f_0 + 0.081f);
	return Var0;
}

struct<2> func_70(int iParam0)//Position - 0x1F0B
{
	return func_67(func_68(Local_165.f_28[iParam0 /*9*/][0 /*2*/], Local_165.f_28[iParam0 /*9*/][2 /*2*/]), 2f);
}

int func_71()//Position - 0x1F36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_72(func_73(iVar0), Local_301) < SYSTEM::POW((Local_165.f_65[iVar0 /*9*/][3 /*2*/] - Local_165.f_65[iVar0 /*9*/][0 /*2*/]), 2f))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_72(struct<2> Param0, struct<2> Param2)//Position - 0x1F85
{
	return (SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

struct<2> func_73(int iParam0)//Position - 0x1FA6
{
	return func_67(func_68(Local_165.f_65[iParam0 /*9*/][0 /*2*/], Local_165.f_65[iParam0 /*9*/][2 /*2*/]), 2f);
}

int func_74()//Position - 0x1FD1
{
	int iVar0;
	
	if (Local_269.f_9 != -1)
	{
		return Local_269.f_9;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_269.f_10[iVar0] == -1)
		{
			if (func_72(func_70(iVar0), Local_301) < SYSTEM::POW((Local_165.f_28[iVar0 /*9*/][3 /*2*/] - Local_165.f_28[iVar0 /*9*/][0 /*2*/]), 2f))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x203E
{
	*iParam0 = iParam1;
	iParam0->f_1 = iParam2;
	iParam0->f_2 = iParam3;
	iParam0->f_3 = iParam4;
}

void func_76(var uParam0, var uParam1)//Position - 0x205D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = -0.1f;
	fVar1 = 1.1f;
	fVar2 = 0.175f;
	fVar3 = 0.845f;
	if (*uParam0 > fVar1)
	{
		*uParam0 = fVar1;
	}
	if (*uParam0 < fVar0)
	{
		*uParam0 = fVar0;
	}
	if (*uParam1 > fVar3)
	{
		*uParam1 = fVar3;
	}
	if (*uParam1 < fVar2)
	{
		*uParam1 = fVar2;
	}
}

void func_77()//Position - 0x20B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (func_36(&Local_269))
	{
		iVar0 = (240000 - func_58(&Local_269, 0, 0));
		iVar1 = (iVar0 / 60000);
		iVar2 = ((iVar0 / 1000) % 60);
		HUD::SET_TEXT_SCALE(0.35f, 0.35f);
		HUD::SET_TEXT_COLOUR(76, 190, 148, 255);
		HUD::SET_TEXT_CENTRE(true);
		StringCopy(&cVar3, "BEAM_TR" /* GXT: ~1~:~1~ */, 16);
		if (iVar2 < 10)
		{
			StringConCat(&cVar3, "S", 16);
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar2);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_26(0.5f), 0.17f, 0);
	}
	if (!func_62() || iLocal_268 == 4)
	{
		func_79();
	}
	if (func_55())
	{
		func_78(202, "HWSF_QT", -1);
		func_78(204, "HWSF_TST", -1);
	}
	else if (Local_269.f_9 > -1)
	{
		func_78(202, "HWSF_QT", -1);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			func_78(237, "HWSF_CONN", -1);
			func_78(239, "HWSF_MWRE", -1);
		}
		else
		{
			func_78(201, "HWSF_CONN", -1);
			func_78(195, "HWSF_MWRE", -1);
		}
	}
	else
	{
		func_78(202, "HWSF_QT", -1);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			func_78(237, "HWSF_SEL", -1);
			func_78(239, "HWSF_MCUR", -1);
		}
		else
		{
			func_78(201, "HWSF_SEL", -1);
			func_78(195, "HWSF_MCUR", -1);
		}
	}
}

void func_78(int iParam0, char* sParam1, int iParam2)//Position - 0x220F
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23970.f_5326 >= 14)
	{
		StringCopy(&Global_4542374, sVar0, 64);
		StringCopy(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23970.f_5655), Global_23970.f_5326);
	StringCopy(&(Global_23970.f_5328[Global_23970.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23970.f_5553[Global_23970.f_5326 /*4*/]), sParam1, 16);
	Global_23970.f_5610[Global_23970.f_5326] = iParam2;
	Global_23970.f_5625[Global_23970.f_5326] = iParam0;
	Global_23970.f_5640[Global_23970.f_5326] = 32;
	Global_23970.f_5326++;
}

void func_79()//Position - 0x22BE
{
	char* sVar0;
	
	sVar0 = "";
	if (func_55())
	{
		sVar0 = "HTWR_PSY";
	}
	else if (Local_269.f_9 != -1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			sVar0 = "HTWR_HLP2_PC";
		}
		else
		{
			sVar0 = "HTWR_HLP2";
		}
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		sVar0 = "HTWR_HLP_PC";
	}
	else
	{
		sVar0 = "HTWR_HLP";
	}
	if (!func_81(sVar0))
	{
		HUD::CLEAR_HELP(true);
	}
	func_80(sVar0, -1);
}

void func_80(char* sParam0, int iParam1)//Position - 0x232B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_81(char* sParam0)//Position - 0x2342
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_82()//Position - 0x2355
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	struct<2> Var7;
	struct<2> Var9;
	int iVar11;
	
	bVar0 = false;
	while (bVar0 <= 3)
	{
		if (Local_269.f_10[bVar0] != -1)
		{
			func_90(bVar0, Local_269.f_10[bVar0]);
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 3)
	{
		bVar2 = func_74() == bVar0;
		bVar3 = ((func_71() == bVar0 && Local_269.f_9 > -1) && !func_64(bVar0));
		bVar4 = ((func_62() && iLocal_268 == 1) && bVar0 == 1);
		bVar5 = ((func_62() && iLocal_268 == 3) && bVar0 == Local_269.f_15[1]);
		if (iLocal_268 == 4)
		{
			if (Local_269.f_9 > -1)
			{
				if (!func_64(bVar0))
				{
					bVar5 = true;
				}
			}
			else if (Local_269.f_10[bVar0] == -1)
			{
				bVar4 = true;
			}
		}
		iVar6 = SYSTEM::ROUND(func_89(0, 0.4f));
		Var7 = { func_67(func_68(Local_165.f_28[bVar0 /*9*/][0 /*2*/], Local_165.f_28[bVar0 /*9*/][2 /*2*/]), 2f) };
		if (bVar4)
		{
			GRAPHICS::DRAW_SPRITE("MPHotwire", "leftnode_roll", func_26(Var7.f_0), Var7.f_1, ((0.17f * 1.01f) / fLocal_159), (0.062f * 1.01f), 0f, 255, 255, 0, iVar6, false, 0);
		}
		if (bVar2)
		{
			func_88(bVar0, -1);
			GRAPHICS::DRAW_SPRITE("MPHotwire", "leftnode_roll", func_26(Var7.f_0), Var7.f_1, (0.17f / fLocal_159), 0.062f, 0f, 255, 255, 255, 255, false, 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_269.f_20), (1 + bVar0));
			GRAPHICS::DRAW_SPRITE("MPHotwire", "leftnode", func_26(Var7.f_0), Var7.f_1, (0.164f / fLocal_159), 0.056f, 0f, 255, 255, 255, 255, false, 0);
		}
		Var7 = { func_67(func_68(Local_165.f_65[bVar0 /*9*/][0 /*2*/], Local_165.f_65[bVar0 /*9*/][2 /*2*/]), 2f) };
		if (bVar5)
		{
			GRAPHICS::DRAW_SPRITE("MPHotwire", "rightnode_roll", func_26(Var7.f_0), Var7.f_1, ((0.17f * 1.01f) / fLocal_159), (0.062f * 1.01f), 0f, 255, 255, 0, iVar6, false, 0);
		}
		if (bVar3)
		{
			func_88(-1, bVar0);
			GRAPHICS::DRAW_SPRITE("MPHotwire", "rightnode_roll", func_26(Var7.f_0), Var7.f_1, (0.17f / fLocal_159), 0.062f, 0f, 255, 255, 255, 255, false, 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_269.f_20), (5 + bVar0));
			GRAPHICS::DRAW_SPRITE("MPHotwire", "rightnode", func_26(Var7.f_0), Var7.f_1, (0.164f / fLocal_159), 0.056f, 0f, 255, 255, 255, 255, false, 0);
		}
		Var9 = { func_86(0.851f, func_87(bVar0)) };
		func_85(Var9, BitTest(Local_269.f_21, bVar0));
		if (Local_269.f_4[bVar0] < 1)
		{
			func_83(func_84(bVar0, 0));
		}
		if (Local_269.f_4[bVar0] < 2)
		{
			func_83(func_84(bVar0, 1));
		}
		if (Local_269.f_4[bVar0] < 3)
		{
			func_83(func_84(bVar0, 2));
		}
		if (Local_269.f_4[bVar0] < 4)
		{
			func_83(func_84(bVar0, 3));
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 1)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar11 = iVar1 + 1;
			if (iVar11 >= 4)
			{
				iVar11 = 0;
			}
			iVar1++;
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 <= 3)
	{
		iVar1 = bVar0 + 1;
		if (iVar1 >= 4)
		{
			iVar1 = 0;
		}
		bVar0++;
	}
}

void func_83(struct<2> Param0)//Position - 0x26C1
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	fVar0 = 0.02f;
	fVar1 = (SYSTEM::TO_FLOAT(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_269.f_0))) + (Param0.f_1 * 9999f));
	fVar2 = 0.5f;
	fVar3 = (SYSTEM::SIN(((fVar1 * fVar2) * 1f)) + 0.1f);
	iVar4 = SYSTEM::ROUND((255f * fVar3));
	GRAPHICS::DRAW_SPRITE("MPHotwire", "lifelight", func_26(Param0.f_0), Param0.f_1, (fVar0 / fLocal_159), fVar0, 0f, 255, 255, 255, iVar4, false, 0);
}

struct<2> func_84(bool bParam0, int iParam1)//Position - 0x273D
{
	switch (bParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 3:
					return func_86(0.984f, 0.289f);
				
				case 2:
					return func_86(0.95f, 0.289f);
				
				case 1:
					return func_86(0.915f, 0.289f);
				
				case 0:
					return func_86(0.88f, 0.289f);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 3:
					return func_86(0.984f, 0.439f);
				
				case 2:
					return func_86(0.95f, 0.439f);
				
				case 1:
					return func_86(0.915f, 0.439f);
				
				case 0:
					return func_86(0.88f, 0.439f);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return func_86(0.984f, 0.589f);
				
				case 2:
					return func_86(0.95f, 0.589f);
				
				case 1:
					return func_86(0.915f, 0.589f);
				
				case 0:
					return func_86(0.88f, 0.589f);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 3:
					return func_86(0.984f, 0.739f);
				
				case 2:
					return func_86(0.95f, 0.739f);
				
				case 1:
					return func_86(0.915f, 0.739f);
				
				case 0:
					return func_86(0.88f, 0.739f);
				
				default:
			}
			break;
	}
	return func_86(0f, 0f);
}

void func_85(struct<2> Param0, bool bParam2)//Position - 0x2902
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0.018f;
	iVar1 = SYSTEM::ROUND(func_89((Param0.f_1 * 9999f), 1050253722));
	if (bParam2)
	{
		GRAPHICS::DRAW_SPRITE("MPHotwire", "correctlight", func_26(Param0.f_0), Param0.f_1, (fVar0 / fLocal_159), fVar0, 0f, 255, 255, 255, 255, false, 0);
	}
	else
	{
		GRAPHICS::DRAW_SPRITE("MPHotwire", "wronglight", func_26(Param0.f_0), Param0.f_1, (fVar0 / fLocal_159), fVar0, 0f, 255, 255, 255, iVar1, false, 0);
	}
}

struct<2> func_86(float fParam0, float fParam1)//Position - 0x297C
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

float func_87(int iParam0)//Position - 0x2992
{
	switch (iParam0)
	{
		case 0:
			return 0.29f;
		
		case 1:
			return 0.44f;
		
		case 2:
			return 0.59f;
		
		case 3:
			return 0.74f;
		
		default:
	}
	return 0f;
}

void func_88(int iParam0, int iParam1)//Position - 0x29DA
{
	if (iParam0 > -1)
	{
		if (!BitTest(Local_269.f_20, (1 + iParam0)))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Output_Highlight", sLocal_162, true);
			MISC::SET_BIT(&(Local_269.f_20), (1 + iParam0));
		}
	}
	if (iParam1 > -1)
	{
		if (!BitTest(Local_269.f_20, (5 + iParam1)))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Input_Highlight", sLocal_162, true);
			MISC::SET_BIT(&(Local_269.f_20), (5 + iParam1));
		}
	}
}

float func_89(float fParam0, float fParam1)//Position - 0x2A3C
{
	float fVar0;
	float fVar1;
	
	fVar0 = (SYSTEM::TO_FLOAT(MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_269.f_0))) + fParam0);
	fVar1 = (SYSTEM::SIN(((fVar0 * fParam1) * 1f)) + 0.1f);
	return (255f * fVar1);
}

void func_90(int iParam0, int iParam1)//Position - 0x2A77
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	char[] cVar8[8];
	bool bVar16;
	
	func_91(iParam0, iParam1, &fVar0, &fVar1, &fVar2, &fVar3, &fVar4, &cVar8, &fVar5, &fVar6, &fVar7, &bVar16);
	GRAPHICS::DRAW_SPRITE("MPHotwire", &cVar8, func_26(fVar0), fVar1, (fVar2 / fLocal_159), fVar3, fVar4, 255, 255, 255, 255, false, 0);
	if (bVar16)
	{
		GRAPHICS::DRAW_SPRITE("MPHotwire", &cVar8, func_26(fVar5), fVar6, (fVar2 / fLocal_159), fVar3, fVar7, 255, 255, 255, 255, false, 0);
	}
}

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x2AE4
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.29f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.372f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.37f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = 0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.369f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.371f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.44f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.522f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.52f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = 0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.36f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.528f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 1:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.519f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.521f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				
				case 2:
					*uParam2 = 0.5f;
					*uParam3 = 0.59f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
				
				case 3:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.672f;
					*uParam4 = 0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.67f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 0.5f;
					*uParam3 = 0.392f;
					*uParam4 = -0.7f;
					*uParam5 = 0.25f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line3", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.64f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 1:
					*uParam2 = 0.5f;
					*uParam3 = 0.51f;
					*uParam4 = -0.7f;
					*uParam5 = 0.17f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line2", 32);
					*uParam8 = 0.5f;
					*uParam9 = 0.678f;
					*uParam10 = 180f;
					*uParam11 = 1;
					break;
				
				case 2:
					*uParam2 = (0.402f - 0.076f);
					*uParam3 = 0.669f;
					*uParam4 = -0.35f;
					*uParam5 = 0.17f;
					*uParam6 = 180f;
					StringCopy(sParam7, "line1", 32);
					*uParam8 = (0.599f + 0.076f);
					*uParam9 = 0.671f;
					*uParam10 = 0f;
					*uParam11 = 1;
					break;
				
				case 3:
					*uParam2 = 0.5f;
					*uParam3 = 0.74f;
					*uParam4 = 0.7f;
					*uParam5 = 0.004f;
					*uParam6 = 0f;
					StringCopy(sParam7, "line", 32);
					*uParam11 = 0;
					break;
			}
			break;
	}
}

void func_92(int iParam0)//Position - 0x302B
{
	iLocal_298 = iParam0;
}

int func_93(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3038
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_94()//Position - 0x306B
{
	if (!Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 1;
	}
}

void func_95(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x308A
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
	if (func_105())
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
		if (!func_19())
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
				else if (bVar14 || ((!func_40(PLAYER::PLAYER_ID(), 0) && !func_104()) && !func_103(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657991[iParam0 /*467*/].f_257 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_100(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_99(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_98();
					func_97();
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
				Global_2657991[iParam0 /*467*/].f_258 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697787)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697787 = 0;
				}
				if (Global_2635516.f_2982)
				{
					Global_2635516.f_2982 = 0;
				}
			}
			else
			{
				if (!func_99(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_96(Global_4718592.f_187633))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575056)
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

bool func_96(int iParam0)//Position - 0x353E
{
	return iParam0 == 17;
}

void func_97()//Position - 0x354B
{
	struct<3> Var0;
	
	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { Var0 };
}

void func_98()//Position - 0x3598
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
}

int func_99(int iParam0)//Position - 0x35D6
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

void func_100(bool bParam0, int iParam1, int iParam2)//Position - 0x3607
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
				func_102();
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
		if (func_40(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_101(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_101(int iParam0, bool bParam1)//Position - 0x36D7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_102()//Position - 0x36F3
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

int func_103(int iParam0)//Position - 0x374B
{
	if (func_40(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657991[iParam0 /*467*/].f_202, 2))
	{
		return 1;
	}
	return 0;
}

bool func_104()//Position - 0x378A
{
	return BitTest(Global_2621446, 3);
}

int func_105()//Position - 0x3798
{
	if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2) && !Global_2685658.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x37C9
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_269.f_15[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(0, (4 - iVar0)));
		uVar2 = Local_269.f_15[iVar1];
		Local_269.f_15[iVar1] = Local_269.f_15[iVar0];
		Local_269.f_15[iVar0] = uVar2;
		iVar0++;
	}
}

int func_107(int iParam0, int iParam1)//Position - 0x383E
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_30(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_108()//Position - 0x3862
{
	func_75(&Local_303, 255, 255, 255, 255);
	func_75(&iLocal_307, 255, 255, 255, 255);
	func_75(&iLocal_311, 255, 255, 255, 255);
	func_75(&iLocal_315, 175, 175, 175, 255);
	func_75(&(Local_319[0 /*4*/]), 255, 0, 255, 255);
	func_75(&(Local_319[1 /*4*/]), 0, 255, 0, 255);
	func_75(&(Local_319[2 /*4*/]), 0, 0, 255, 255);
	func_75(&(Local_319[3 /*4*/]), 255, 255, 0, 255);
}

void func_109()//Position - 0x38DD
{
	float fVar0;
	
	Local_301.f_0 = 0.5f;
	Local_301.f_1 = 0.5f;
	fVar0 = 0.071f;
	Local_165[0 /*2*/] = { func_86(-0.1f, 0.845f) };
	Local_165[1 /*2*/] = { func_86(-0.1f, 0.17f) };
	Local_165[2 /*2*/] = { func_86(1.1f, 0.17f) };
	Local_165[3 /*2*/] = { func_86(1.1f, 0.845f) };
	Local_165.f_9[0 /*9*/][0 /*2*/] = { func_86(0.1f, 0.845f) };
	Local_165.f_9[0 /*9*/][1 /*2*/] = { func_86(0.1f, 0.17f) };
	Local_165.f_9[0 /*9*/][2 /*2*/] = { func_86(0.2f, 0.17f) };
	Local_165.f_9[0 /*9*/][3 /*2*/] = { func_86(0.2f, 0.845f) };
	Local_165.f_9[1 /*9*/][0 /*2*/] = { func_86(0.8f, 0.845f) };
	Local_165.f_9[1 /*9*/][1 /*2*/] = { func_86(0.8f, 0.17f) };
	Local_165.f_9[1 /*9*/][2 /*2*/] = { func_86(0.9f, 0.17f) };
	Local_165.f_9[1 /*9*/][3 /*2*/] = { func_86(0.9f, 0.845f) };
	Local_165.f_28[0 /*9*/][0 /*2*/] = { func_86((0.1f - fVar0), 0.32f) };
	Local_165.f_28[0 /*9*/][1 /*2*/] = { func_86((0.1f - fVar0), 0.245f) };
	Local_165.f_28[0 /*9*/][2 /*2*/] = { func_86((0.2f - fVar0), 0.245f) };
	Local_165.f_28[0 /*9*/][3 /*2*/] = { func_86((0.2f - fVar0), 0.32f) };
	Local_165.f_28[1 /*9*/][0 /*2*/] = { func_86((0.1f - fVar0), 0.47f) };
	Local_165.f_28[1 /*9*/][1 /*2*/] = { func_86((0.1f - fVar0), 0.395f) };
	Local_165.f_28[1 /*9*/][2 /*2*/] = { func_86((0.2f - fVar0), 0.395f) };
	Local_165.f_28[1 /*9*/][3 /*2*/] = { func_86((0.2f - fVar0), 0.47f) };
	Local_165.f_28[2 /*9*/][0 /*2*/] = { func_86((0.1f - fVar0), 0.62f) };
	Local_165.f_28[2 /*9*/][1 /*2*/] = { func_86((0.1f - fVar0), 0.545f) };
	Local_165.f_28[2 /*9*/][2 /*2*/] = { func_86((0.2f - fVar0), 0.545f) };
	Local_165.f_28[2 /*9*/][3 /*2*/] = { func_86((0.2f - fVar0), 0.62f) };
	Local_165.f_28[3 /*9*/][0 /*2*/] = { func_86((0.1f - fVar0), 0.77f) };
	Local_165.f_28[3 /*9*/][1 /*2*/] = { func_86((0.1f - fVar0), 0.695f) };
	Local_165.f_28[3 /*9*/][2 /*2*/] = { func_86((0.2f - fVar0), 0.695f) };
	Local_165.f_28[3 /*9*/][3 /*2*/] = { func_86((0.2f - fVar0), 0.77f) };
	Local_165.f_65[0 /*9*/][0 /*2*/] = { func_86((0.8f + fVar0), 0.32f) };
	Local_165.f_65[0 /*9*/][1 /*2*/] = { func_86((0.8f + fVar0), 0.245f) };
	Local_165.f_65[0 /*9*/][2 /*2*/] = { func_86((0.9f + fVar0), 0.245f) };
	Local_165.f_65[0 /*9*/][3 /*2*/] = { func_86((0.9f + fVar0), 0.32f) };
	Local_165.f_65[1 /*9*/][0 /*2*/] = { func_86((0.8f + fVar0), 0.47f) };
	Local_165.f_65[1 /*9*/][1 /*2*/] = { func_86((0.8f + fVar0), 0.395f) };
	Local_165.f_65[1 /*9*/][2 /*2*/] = { func_86((0.9f + fVar0), 0.395f) };
	Local_165.f_65[1 /*9*/][3 /*2*/] = { func_86((0.9f + fVar0), 0.47f) };
	Local_165.f_65[2 /*9*/][0 /*2*/] = { func_86((0.8f + fVar0), 0.62f) };
	Local_165.f_65[2 /*9*/][1 /*2*/] = { func_86((0.8f + fVar0), 0.545f) };
	Local_165.f_65[2 /*9*/][2 /*2*/] = { func_86((0.9f + fVar0), 0.545f) };
	Local_165.f_65[2 /*9*/][3 /*2*/] = { func_86((0.9f + fVar0), 0.62f) };
	Local_165.f_65[3 /*9*/][0 /*2*/] = { func_86((0.8f + fVar0), 0.77f) };
	Local_165.f_65[3 /*9*/][1 /*2*/] = { func_86((0.8f + fVar0), 0.695f) };
	Local_165.f_65[3 /*9*/][2 /*2*/] = { func_86((0.9f + fVar0), 0.695f) };
	Local_165.f_65[3 /*9*/][3 /*2*/] = { func_86((0.9f + fVar0), 0.77f) };
}

void func_110()//Position - 0x3DC2
{
	struct<29> Var0;
	int iVar29;
	
	Var0.f_4 = 4;
	Var0.f_10 = 4;
	Var0.f_15 = 4;
	Var0.f_22 = 350;
	Local_269 = { Var0 };
	iVar29 = 0;
	while (iVar29 <= 3)
	{
		Local_269.f_4[iVar29] = 4;
		Local_269.f_10[iVar29] = -1;
		MISC::CLEAR_BIT(&(Local_269.f_21), iVar29);
		iVar29++;
	}
	Local_269.f_9 = -1;
}

void func_111()//Position - 0x3E29
{
	func_112(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::DRAW_SPRITE("MPHotwire", "bg", 0.5f, 0.5f, (1f * fLocal_160), 1f, 0f, Local_303.f_0, Local_303.f_1, Local_303.f_2, Local_303.f_3, false, 0);
}

void func_112(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3E6D
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_113()//Position - 0x3E9C
{
	func_127(0);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_126(1);
	func_125(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_124();
	func_123();
	func_122();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (!func_19())
	{
		func_92(4);
	}
	func_121();
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_120();
	func_119();
	func_114();
}

void func_114()//Position - 0x3F0B
{
	int iVar0;
	
	func_118(0, 0);
	func_117(1, 0, 0, 0, 0);
	func_116(0, 0, 0, 0, 0);
	func_48(0, -1, 0);
	iVar0 = -1;
	if (func_15(&iVar0, 0, -1) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23970.f_6263[iVar0 /*10*/]))
	{
		func_115(-1);
	}
}

void func_115(int iParam0)//Position - 0x3F59
{
	int iVar0;
	int iVar1;
	
	Global_23970.f_5326 = 0;
	Global_23970.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23970.f_5553[iVar0 /*4*/]), "", 16);
		Global_23970.f_5610[iVar0] = -1;
		Global_23970.f_5625[iVar0] = 365;
		Global_23970.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23970.f_5655 = 0;
	StringCopy(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_15(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23970.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4012
{
	Global_23970.f_5678[0] = iParam0;
	Global_23970.f_5678[1] = iParam1;
	Global_23970.f_5678[2] = iParam2;
	Global_23970.f_5678[3] = iParam3;
	Global_23970.f_5678[4] = iParam4;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4051
{
	Global_23970.f_5659[0] = iParam0;
	Global_23970.f_5659[1] = iParam1;
	Global_23970.f_5659[2] = iParam2;
	Global_23970.f_5659[3] = iParam3;
	Global_23970.f_5659[4] = iParam4;
	Global_23970.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23970.f_5829++;
	}
}

void func_118(bool bParam0, bool bParam1)//Position - 0x40FB
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23970.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23970.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696970[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23970.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23970.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23970.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23970.f_5692[iVar0] = 0;
		Global_23970.f_5830[iVar0] = 0;
		Global_23970.f_5959[iVar0] = 0;
		Global_23970.f_6482[iVar0] = 0f;
		Global_23970.f_6088[iVar0] = 0;
		Global_23970.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23970.f_5659[iVar0] = 0;
		Global_23970.f_5671[iVar0] = 0f;
		Global_23970.f_5665[iVar0] = -1f;
		Global_23970.f_5678[iVar0] = 0;
		Global_23970.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23970.f_5553[iVar0 /*4*/]), "", 16);
		Global_23970.f_5610[iVar0] = -1;
		Global_23970.f_5625[iVar0] = 365;
		Global_23970.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23970.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23970.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23970.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	Global_23970 = 0;
	Global_23970.f_5821 = 0;
	Global_23970.f_5822 = 0;
	Global_23970.f_5823 = 0;
	Global_23970.f_5825 = 0;
	Global_23970.f_5826 = 0;
	Global_23970.f_5827 = 0;
	Global_23970.f_5824 = 0;
	Global_23970.f_6477 = 0;
	Global_23970.f_6617 = 0;
	Global_23970.f_6342 = 0;
	Global_23970.f_6341 = 0;
	Global_23970.f_6343 = 0;
	StringCopy(&(Global_23970.f_5241), "", 24);
	Global_23970.f_5319 = 0;
	Global_23970.f_5320 = 0;
	Global_23970.f_5321 = 0;
	Global_23970.f_5322 = 0;
	Global_23970.f_5323 = 0;
	Global_23970.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23970.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_5325 = 0;
	StringCopy(&(Global_4542374.f_21), "", 16);
	Global_4542374.f_61 = 0;
	Global_4542374.f_62 = 0;
	Global_4542374.f_63 = 0;
	Global_4542374.f_64 = 0;
	Global_4542374.f_65 = 0;
	Global_4542374.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4542374.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4542374.f_67 = 0;
	StringCopy(&(Global_23970.f_1), "", 16);
	Global_23970.f_5677 = 0f;
	Global_23970.f_74 = 0;
	Global_23970.f_75 = 0;
	Global_23970.f_76 = 0;
	Global_23970.f_77 = 0;
	Global_23970.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23970.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_6347 = 0;
	Global_23970.f_6346 = 0;
	Global_23970.f_6344 = 0;
	Global_23970.f_6345 = 0;
	Global_23970.f_5326 = 0;
	Global_23970.f_5327 = 0;
	Global_23970.f_5828 = 10;
	Global_23970.f_5829 = 0;
	Global_23970.f_6479 = 0f;
	Global_23970.f_6480 = 0f;
	Global_23970.f_6331 = 0;
	Global_23970.f_6332 = 0;
	Global_23970.f_6333 = 0f;
	Global_23970.f_6334 = 0;
	Global_23970.f_6336 = 0;
	Global_23970.f_6335 = 0;
	Global_23970.f_6337 = 0;
	Global_23970.f_6338 = 0;
	Global_23970.f_6339 = 0;
	Global_23970.f_6340 = 0;
	Global_23970.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23970.f_6611[iVar0] = -1;
		Global_23970.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23970.f_5684 = 0f;
	Global_23970.f_5655 = 0;
	Global_23970.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23970.f_6618)
	{
		Global_23970.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_9091 = 0;
	Global_23970.f_9086 = 0;
	Global_23970.f_9096 = 0;
	Global_23970.f_9101 = 0;
	Global_23970.f_9106 = 0;
	Global_23970.f_9108 = 0;
	Global_23970.f_9114 = 0;
	Global_23967 = 0.05f;
	Global_23968 = 0.05f;
	Global_23969 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23969 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23969 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23969 = 0.225f;
	}
}

void func_119()//Position - 0x45E5
{
	fLocal_160 = (1.778f / fLocal_159);
	fLocal_160 = fLocal_160;
}

void func_120()//Position - 0x45FB
{
	fLocal_159 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_159 >= 4f)
		{
			fLocal_159 = (fLocal_159 / 3f);
		}
	}
}

void func_121()//Position - 0x461E
{
	Global_23831.f_134 = 1;
}

void func_122()//Position - 0x462C
{
	Global_2739811.f_4667 = 0;
}

void func_123()//Position - 0x463C
{
	Global_23831.f_6 = 1;
}

void func_124()//Position - 0x464A
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
}

void func_125(int iParam0, int iParam1)//Position - 0x4673
{
	MISC::SET_BIT(&(Global_1673654.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1673654.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_126(int iParam0)//Position - 0x46A9
{
	Global_1675211.f_1163 = iParam0;
}

void func_127(int iParam0)//Position - 0x46BA
{
	if (func_133())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_132(0))
		{
			func_128(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_128(int iParam0)//Position - 0x46ED
{
	if (func_133())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_131())
		{
			func_130(1, 1);
		}
		else
		{
			func_130(0, 0);
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
	if (!func_129())
	{
		Global_21066.f_1 = 3;
	}
}

int func_129()//Position - 0x4777
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_130(bool bParam0, bool bParam1)//Position - 0x479E
{
	if (bParam0)
	{
		if (func_132(0))
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

bool func_131()//Position - 0x4812
{
	return BitTest(Global_1957675, 5);
}

int func_132(int iParam0)//Position - 0x4820
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

bool func_133()//Position - 0x4877
{
	return BitTest(Global_1957675, 19);
}

void func_134()//Position - 0x4886
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 27 /*INPUT_PHONE*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/, true);
	func_123();
	func_135();
	func_127(0);
	func_122();
	func_121();
}

void func_135()//Position - 0x48E3
{
	MISC::SET_BIT(&Global_8920, 4);
}

int func_136()//Position - 0x48F3
{
	return Global_1957673.f_1;
}

int func_137()//Position - 0x4901
{
	if (func_138())
	{
		return 1;
	}
	return 0;
}

bool func_138()//Position - 0x4915
{
	return BitTest(Global_1957673, 0);
}

int func_139()//Position - 0x4923
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_146())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_145())
	{
		return 1;
	}
	if (func_144(159))
	{
		if (!func_143())
		{
			return 1;
		}
	}
	if (func_144(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_140() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_140()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()//Position - 0x49A7
{
	switch (func_142())
	{
		case 0:
			return func_141();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_141()//Position - 0x49DA
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_142()//Position - 0x49FE
{
	return Global_33087;
}

bool func_143()//Position - 0x4A09
{
	return Global_2684718.f_700;
}

int func_144(int iParam0)//Position - 0x4A18
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_145()//Position - 0x4A2F
{
	return Global_2696416;
}

bool func_146()//Position - 0x4A3B
{
	return Global_2684718.f_695;
}

void func_147()//Position - 0x4A4A
{
	SYSTEM::WAIT(0);
}

void func_148()//Position - 0x4A57
{
	func_150(0);
	func_149();
}

void func_149()//Position - 0x4A68
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_150(int iParam0)//Position - 0x4A74
{
	func_12(&(Local_385[iParam0 /*2*/]), 0);
	func_151();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPHotwire");
}

void func_151()//Position - 0x4A93
{
	var uVar0;
	
	MISC::COPY_SCRIPT_STRUCT(&Global_1957673, &uVar0, 2);
}

int func_152(struct<21> Param0)//Position - 0x4AA6
{
	MISC::CLEAR_BIT(&Global_1957673, 0);
	func_156(func_157(Param0.f_0), Param0);
	func_154(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_369, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_336, 33, 0);
	if (!func_153())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHotwire", false);
	HUD::REQUEST_ADDITIONAL_TEXT("MC_PLAY", 9);
	return 1;
}

int func_153()//Position - 0x4B05
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
		if (func_146())
		{
			return 0;
		}
		if (func_144(157))
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

int func_154(int iParam0, int iParam1, bool bParam2)//Position - 0x4B5E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_149();
			}
			else
			{
				return 0;
			}
		}
		if (!func_155(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_146())
				{
					if (!bParam2)
					{
						func_149();
					}
					else
					{
						return 0;
					}
				}
				if (func_144(157))
				{
					if (!bParam2)
					{
						func_149();
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
					func_149();
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
				func_149();
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
			func_149();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_155(bool bParam0)//Position - 0x4C74
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

void func_156(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x4C85
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_149();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_157(int iParam0)//Position - 0x4CA4
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 220:
			return 32;
		
		case 221:
			return 32;
		
		case 210:
			return 32;
		
		case 211:
			return 32;
		
		case 215:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 218:
			return 32;
		
		case 219:
			return 32;
		
		case 216:
			return 32;
		
		case 217:
			return 32;
		
		case 222:
			return 32;
		
		case 223:
			return 32;
		
		case 224:
			return 32;
		
		case 225:
			return 32;
		
		case 226:
			return 2;
		
		case 231:
			return 1;
		
		case 227:
			return 2;
		
		case 228:
			return 4;
		
		case 229:
			return 2;
		
		case 230:
			return 2;
		
		case 212:
			return 1;
		
		case 232:
			return 2;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
			return 0;
		
		case 254:
			return 1;
		
		case 239:
			return 4;
		
		case 242:
			return 4;
		
		case 243:
			return 1;
		
		case 244:
			return 1;
		
		case 250:
			return 1;
		
		case 246:
			return 2;
		
		case 251:
			return 1;
		
		case 247:
			return 1;
		
		case 245:
			return 2;
		
		case 248:
			return 8;
		
		case 249:
			return 8;
		
		case 252:
			return 1;
		
		case 253:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 206:
			return 32;
		
		case 240:
			return 16;
		
		case 241:
			return 32;
		
		default:
	}
	switch (func_158(func_159(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x5444
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		case 343:
			return 0;
		
		case 344:
			return 0;
		
		case 345:
			return 0;
		
		case 346:
			return 0;
		
		case 347:
			return 0;
		
		case 348:
			return 0;
		
		case 349:
			return 0;
		
		case 350:
			return 0;
		
		case 351:
			return 0;
		
		case 353:
			return 2;
		
		default:
	}
	return -1;
}

int func_159(int iParam0, bool bParam1)//Position - 0x5760
{
	switch (iParam0)
	{
		case 226:
			return 15;
		
		case 233:
			return 8;
		
		case 227:
			return 14;
		
		case 231:
			return 122;
		
		case 234:
			return 1;
		
		case 232:
			return 5;
		
		case 235:
			return 6;
		
		case 228:
			return 11;
		
		case 236:
			return 0;
		
		case 237:
			return 2;
		
		case 229:
			return 13;
		
		case 238:
			return 3;
		
		case 230:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		case 197:
			return 343;
		
		case 198:
			return 344;
		
		case 199:
			return 345;
		
		case 200:
			return 346;
		
		case 201:
			return 347;
		
		case 202:
			return 348;
		
		case 203:
			return 349;
		
		case 204:
			return 350;
		
		case 205:
			return 351;
		
		case 206:
			return 352;
		
		case 207:
			return 353;
		
		default:
	}
	if (bParam1)
	{
	}
	return 352;
}

