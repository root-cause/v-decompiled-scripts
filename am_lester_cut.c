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
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
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
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	struct<4> Local_86 = { 0, 0, 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 32;
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
	var uLocal_129 = 32;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
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
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	int iLocal_165 = 0;
	struct<3> Local_166[32];
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 16;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
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
	var uLocal_370 = 0;
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
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	bool bLocal_433 = 0;
	bool bLocal_434 = 0;
	var uLocal_435 = 0;
	char* sLocal_436 = NULL;
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
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
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_59 = ((0.05f + 0.275f) - 0.01f);
	bLocal_434 = true;
	sLocal_436 = "MP_INTRO_MCS_13";
	func_260(ScriptParam_0);
	while (true)
	{
		func_259();
		if (func_252())
		{
			func_248();
		}
		func_243(&Global_1935835);
		switch (func_242(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_241() == 2)
				{
					Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 2;
				}
				else if (func_241() == 6)
				{
					Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_241() == 2)
				{
					if (!func_240(PLAYER::PLAYER_ID()))
					{
						func_19();
					}
					else if (HUD::DOES_BLIP_EXIST(Global_1935835))
					{
						func_12();
						HUD::SET_BLIP_ROUTE(Global_1935835, false);
						HUD::REMOVE_BLIP(&Global_1935835);
						if (BitTest(uLocal_435, 3))
						{
							CUTSCENE::REMOVE_CUTSCENE();
						}
						MISC::SET_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
					}
					if (func_8(PLAYER::PLAYER_ID()))
					{
						Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
						Global_2794162.f_1817 = 0;
					}
				}
				else if (func_241() == 6)
				{
					Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_86.f_3));
				if (func_5(&(Local_86.f_3)))
				{
					Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
				}
				break;
			
			case 3:
				Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
			
			case 6:
				func_248();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_241())
			{
				case 0:
					Local_86.f_2 = -1;
					Local_86.f_0 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_86.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x205
{
	if (BitTest(Local_86.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x21B
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_3()//Position - 0x22A
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_165 == 0)
		{
			MISC::CLEAR_BIT(&uLocal_435, 0);
			MISC::SET_BIT(&uLocal_435, 1);
			if (Local_86.f_2 != -1)
			{
				if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_2)))
				{
					Local_86.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_165;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!BitTest(Local_166[iLocal_165 /*3*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&uLocal_435, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (BitTest(Local_166[iLocal_165 /*3*/].f_2, 1))
				{
					MISC::SET_BIT(&uLocal_435, 12);
					if (Local_86.f_2 == -1)
					{
						if (Local_86.f_2 != iLocal_165)
						{
							Local_86.f_2 = iLocal_165;
						}
					}
				}
				else if (Local_86.f_2 == iLocal_165)
				{
					Local_86.f_2 = -1;
				}
			}
		}
		iLocal_165++;
		if (iLocal_165 == 32)
		{
			if (BitTest(uLocal_435, 1))
			{
				MISC::SET_BIT(&(Local_86.f_1), 0);
			}
			if (!BitTest(uLocal_435, 12))
			{
				if (Local_86.f_2 != -1)
				{
					Local_86.f_2 = -1;
				}
			}
			MISC::SET_BIT(&uLocal_435, 0);
			iLocal_165 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)//Position - 0x320
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0)//Position - 0x380
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_6(var uParam0)//Position - 0x3A9
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x3C8
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

int func_8(int iParam0)//Position - 0x40D
{
	if (func_11(iParam0))
	{
		return 1;
	}
	if (func_9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x430
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

var func_10(int iParam0, int iParam1)//Position - 0x44E
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_11(var uParam0)//Position - 0x466
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

void func_12()//Position - 0x489
{
	if (!func_18())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_13();
}

void func_13()//Position - 0x4B6
{
	func_15();
	func_14(0);
}

void func_14(bool bParam0)//Position - 0x4C7
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_15()//Position - 0x559
{
	if (!func_17())
	{
	}
	if (func_18())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_16();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_16()//Position - 0x582
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

bool func_17()//Position - 0x7F4
{
	if (!func_18())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_16();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_18()//Position - 0x81A
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_19()//Position - 0x830
{
	int iVar0;
	
	switch (Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 0:
			if (!BitTest(uLocal_435, 2))
			{
				if (!BitTest(uLocal_435, 5))
				{
					if (!func_239())
					{
						if (!func_238())
						{
							if (!func_236())
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (!func_235(0))
									{
										if (!func_232(PLAYER::PLAYER_ID(), 1, 0))
										{
											if (!func_231())
											{
												if (func_230() == 0)
												{
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
			if (!BitTest(uLocal_435, 5))
			{
				if ((((((((func_232(PLAYER::PLAYER_ID(), 1, 0) || func_231()) || func_230() > 0) || func_229()) || func_225()) || func_224()) || func_203(0)) || func_202(PLAYER::PLAYER_ID(), 21)) || func_202(PLAYER::PLAYER_ID(), 25))
				{
					MISC::SET_BIT(&uLocal_435, 5);
					func_12();
					if (HUD::DOES_BLIP_EXIST(Global_1935835))
					{
						HUD::SET_BLIP_ROUTE(Global_1935835, false);
						HUD::REMOVE_BLIP(&Global_1935835);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Global_1935835))
					{
						if (!BitTest(uLocal_435, 14))
						{
							if (Local_86.f_2 != -1)
							{
								if (Local_86.f_2 != NETWORK::PARTICIPANT_ID_TO_INT())
								{
									HUD::SET_BLIP_COLOUR(Global_1935835, 39);
									HUD::SET_BLIP_SCALE(Global_1935835, 0.7f);
									MISC::SET_BIT(&uLocal_435, 14);
								}
							}
						}
						else if (Local_86.f_2 == -1 || Local_86.f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							HUD::SET_BLIP_COLOUR(Global_1935835, 0);
							HUD::SET_BLIP_SCALE(Global_1935835, 1f);
							MISC::CLEAR_BIT(&uLocal_435, 14);
						}
					}
					if (BitTest(uLocal_435, 8))
					{
						MISC::CLEAR_BIT(&uLocal_435, 8);
					}
					if (func_201())
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if ((bLocal_433 && CUTSCENE::HAS_CUTSCENE_LOADED()) || !bLocal_433)
							{
								if (!BitTest(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
								{
									MISC::SET_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
								}
								if (BitTest(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
								{
									if (Local_86.f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										func_12();
										if (HUD::DOES_BLIP_EXIST(Global_1935835))
										{
											HUD::SET_BLIP_ROUTE(Global_1935835, false);
											HUD::REMOVE_BLIP(&Global_1935835);
										}
										HUD::CLEAR_HELP(true);
										func_200(12, 1);
										func_198();
										PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
										MISC::SET_BIT(&uLocal_435, 25);
										MISC::CLEAR_AREA(1274.854f, -1721.1538f, 53.6808f, 2f, true, false, false, true);
										if (bLocal_434)
										{
											func_197();
											iLocal_443 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
										}
										Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 1;
									}
									else if (Local_86.f_2 != -1)
									{
										if (!BitTest(uLocal_435, 13))
										{
											if (func_191(1, 1, 1, 1))
											{
												func_190("FM_LCUT_LRB" /* GXT: ~s~Lester is currently busy. This is shown on the map with ~HUD_COLOUR_INACTIVE_MISSION~~BLIP_LESTER_FAMILY~ */, -1);
												MISC::SET_BIT(&uLocal_435, 13);
											}
										}
									}
								}
							}
						}
						else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_189("FM_LCUT_LCP" /* GXT: ~s~You need to lose the Cops before Lester will speak to you. */))
							{
								func_190("FM_LCUT_LCP" /* GXT: ~s~You need to lose the Cops before Lester will speak to you. */, -1);
							}
						}
					}
					else
					{
						if (!BitTest(uLocal_435, 9))
						{
							if (func_191(0, 1, 1, 1))
							{
								if (!func_229())
								{
									func_190("FM_LCUT_LBLP" /* GXT: ~s~Lester is now a Contact you can go and visit. He is marked with ~BLIP_LESTER_FAMILY~ on the Radar. */, -1);
									if (!HUD::DOES_BLIP_EXIST(Global_1935835))
									{
										Global_1935835 = HUD::ADD_BLIP_FOR_COORD(Global_1935836);
										HUD::SET_BLIP_SPRITE(Global_1935835, 77);
										HUD::SET_BLIP_FLASHES(Global_1935835, true);
										HUD::SET_BLIP_FLASH_TIMER(Global_1935835, 7000);
									}
									MISC::SET_BIT(&uLocal_435, 2);
									MISC::SET_BIT(&uLocal_435, 9);
								}
							}
						}
						if (BitTest(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
						{
							MISC::CLEAR_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
						}
						if (BitTest(uLocal_435, 13))
						{
							MISC::CLEAR_BIT(&uLocal_435, 13);
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (((((((!func_232(PLAYER::PLAYER_ID(), 1, 0) && !func_231()) && func_230() == 0) && !func_229()) && !func_225()) && !func_203(0)) && !func_202(PLAYER::PLAYER_ID(), 21)) && !func_202(PLAYER::PLAYER_ID(), 25))
						{
							if (!func_188(&uLocal_438))
							{
								func_7(&uLocal_438, 0, 0);
							}
							else if (func_187(&uLocal_438, 10, 0))
							{
								MISC::CLEAR_BIT(&uLocal_435, 5);
								MISC::CLEAR_BIT(&uLocal_435, 2);
								MISC::CLEAR_BIT(&uLocal_435, 3);
								MISC::CLEAR_BIT(&uLocal_435, 8);
								func_186(&uLocal_438);
								if (!HUD::DOES_BLIP_EXIST(Global_1935835))
								{
									Global_1935835 = HUD::ADD_BLIP_FOR_COORD(Global_1935836);
									HUD::SET_BLIP_SPRITE(Global_1935835, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_433)
			{
			}
			break;
		
		case 1:
			if (bLocal_433)
			{
				if (func_185())
				{
					Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
			}
			else if (func_145())
			{
				Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_90())
			{
				Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!BitTest(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
			{
				MISC::SET_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
			}
			break;
	}
	if (func_89())
	{
		if (HUD::DOES_BLIP_EXIST(Global_1935835))
		{
			HUD::REMOVE_BLIP(&Global_1935835);
		}
		func_12();
		iVar0 = func_88(1304, -1);
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
		func_86(1304, iVar0, -1, 1);
		func_200(12, 0);
		if (bLocal_433)
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_78();
		func_20(1);
	}
}

void func_20(bool bParam0)//Position - 0xD81
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_77())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836851[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_73(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_70(iVar1, bParam0);
	if (!func_69(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836851[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836851[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 321)
	{
		iVar3 = func_68(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_66(iVar4))
			{
				func_57(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_56(1))
	{
		func_49(func_50(59, 0, 0), 0);
		func_43(func_50(135, 0, 0), 1);
		func_41(func_50(22, 0, 0), func_50(73, 0, 0));
	}
	else
	{
		func_41(0, 0);
	}
	if (func_40())
	{
		if (func_39(77, -1))
		{
			func_38(1);
			func_37(1);
		}
	}
	if (func_36() || func_35())
	{
		func_31(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_21(28, 1, 0);
			func_21(29, 1, 0);
			func_21(30, 1, 0);
			func_21(31, 1, 0);
			func_21(32, 1, 0);
			func_21(33, 1, 0);
			func_21(34, 1, 0);
			func_21(35, 1, 0);
			func_21(36, 1, 0);
			func_21(37, 1, 0);
			func_21(38, 1, 0);
			func_21(58, 1, 0);
		}
	}
	if (func_50(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057411 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)//Position - 0xF42
{
	if (bParam1)
	{
		if (!func_30(iParam0, 0, 0))
		{
			if (iParam2 && Global_100885.f_18[iParam0])
			{
				if (func_29(iParam0) == 3 && !func_28(iParam0))
				{
					func_27(iParam0);
					func_26(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_26(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_26(iParam0, 0, 0);
				func_23(iParam0, 1, 0);
				func_22(iParam0);
			}
		}
		else
		{
			func_23(iParam0, 1, 0);
			func_22(iParam0);
		}
	}
	else if (func_30(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)//Position - 0x1001
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x101B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25() == 0)
		{
			iVar0 = func_88(func_24(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_86(func_24(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_24(int iParam0)//Position - 0x108B
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12514;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

int func_25()//Position - 0x1433
{
	return Global_32283;
}

void func_26(int iParam0, int iParam1, bool bParam2)//Position - 0x143E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25() == 0)
		{
			iVar0 = func_88(func_24(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_86(func_24(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_27(int iParam0)//Position - 0x14AE
{
	if (Global_100885.f_18[iParam0])
	{
		func_26(iParam0, 10, 1);
		func_26(iParam0, 19, 1);
	}
}

bool func_28(int iParam0)//Position - 0x14D5
{
	return func_30(iParam0, 5, 1);
}

int func_29(int iParam0)//Position - 0x14E5
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_30(int iParam0, int iParam1, bool bParam2)//Position - 0x181B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_25() == 0)
		{
			return BitTest(func_88(func_24(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_31(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x187B
{
	int iVar0;
	
	iVar0 = func_32(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_32(int iParam0, var uParam1)//Position - 0x189E
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_33(uParam1));
}

int func_33(var uParam0)//Position - 0x18B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

int func_34()//Position - 0x18E7
{
	return Global_1574918;
}

bool func_35()//Position - 0x18F3
{
	return Global_1575051;
}

bool func_36()//Position - 0x18FF
{
	return Global_1575053;
}

void func_37(bool bParam0)//Position - 0x190B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_21(28, bParam0, 0);
	func_21(30, bParam0, 0);
	func_21(31, bParam0, 0);
	func_21(33, bParam0, 0);
	func_21(34, bParam0, 0);
	func_21(38, bParam0, 0);
	func_21(58, bParam0, 0);
}

void func_38(bool bParam0)//Position - 0x195D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_21(29, bParam0, 0);
	func_21(32, bParam0, 0);
	func_21(36, bParam0, 0);
	func_21(35, bParam0, 0);
	func_21(37, bParam0, 0);
}

int func_39(int iParam0, int iParam1)//Position - 0x199D
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_32(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40()//Position - 0x19C1
{
	if (!func_77())
	{
		return 0;
	}
	return 1;
}

void func_41(bool bParam0, bool bParam1)//Position - 0x19D6
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_21(0, bParam0, 1);
	func_21(1, bParam0, 1);
	func_21(2, bParam0, 1);
	func_21(3, bParam0, 1);
	func_21(4, bParam0, 1);
	func_21(5, bParam0, 1);
	func_21(6, bParam0, 1);
	func_21(7, bParam0, bVar0);
	func_21(8, bParam0, 1);
	func_21(9, bParam0, 1);
	func_21(10, bParam0, 1);
	func_21(11, bParam0, 1);
	func_21(12, bParam0, bVar0);
	func_21(13, bParam0, 1);
	func_21(21, bParam0, 1);
	func_21(14, bParam0, 1);
	func_21(15, bParam0, 1);
	func_21(16, bParam0, 1);
	func_21(17, bParam0, 1);
	func_21(18, bParam0, 1);
	func_21(19, bParam0, 1);
	func_21(20, bParam0, 1);
	func_21(22, bParam0, 1);
	func_21(23, bParam0, 1);
	func_21(24, bParam0, 1);
	func_21(25, bParam0, 1);
	func_21(26, bParam0, 1);
	func_21(27, bParam0, 1);
	func_42(1, !bParam1);
	if (!bVar0)
	{
		func_27(12);
	}
}

void func_42(int iParam0, bool bParam1)//Position - 0x1AFE
{
	if (bParam1)
	{
		Global_100885.f_9[iParam0] = 1;
	}
	else
	{
		Global_100885.f_9[iParam0] = 0;
	}
}

void func_43(bool bParam0, bool bParam1)//Position - 0x1B24
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_48(0);
	if (Global_262145.f_63 /* Tunable: DISABLE_SUPER_MOD_RANK_CHECK */ == 1 && func_50(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_28(44))
		{
			func_27(44);
		}
	}
	if (bParam0)
	{
		if (func_44(0) > 1)
		{
			MISC::SET_BIT(&(Global_2794162.f_1835), 10);
		}
	}
}

int func_44(int iParam0)//Position - 0x1BAA
{
	int iVar0;
	
	if (Global_1945782[iParam0 /*8*/] == -1)
	{
		iVar0 = func_88(func_47(iParam0), -1);
		if (iVar0 == -1)
		{
			func_45(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945782[iParam0 /*8*/] = iVar0;
	}
	return Global_1945782[iParam0 /*8*/];
}

void func_45(int iParam0, int iParam1)//Position - 0x1BED
{
	Global_1945782[iParam0 /*8*/] = iParam1;
	func_46(func_47(iParam0), iParam1, -1);
}

void func_46(int iParam0, int iParam1, int iParam2)//Position - 0x1C0C
{
	func_86(iParam0, iParam1, iParam2, 1);
}

int func_47(int iParam0)//Position - 0x1C1F
{
	switch (iParam0)
	{
		case 0:
			return 12515;
		
		default:
	}
	return 12515;
}

int func_48(bool bParam0)//Position - 0x1C3D
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2794162.f_1826, 26))
		{
			uVar0 = func_88(1192, -1);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_39(122, -1);
}

void func_49(bool bParam0, bool bParam1)//Position - 0x1C97
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_48(0);
	func_21(39, bParam0, 0);
	func_21(40, bParam0, 0);
	func_21(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(43, bParam0, 0);
		func_21(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_28(39))
		{
			func_27(39);
		}
		if (!func_28(40))
		{
			func_27(40);
		}
		if (!func_28(41))
		{
			func_27(41);
		}
		if (!func_28(42))
		{
			func_27(42);
		}
		if (!func_28(43))
		{
			func_27(43);
		}
	}
}

int func_50(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D48
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8317 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_52(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4747 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_51())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836851[iVar1], iVar0);
}

int func_51()//Position - 0x1EB3
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2794162.f_1831, 23))
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	uVar0 = func_88(1304, -1);
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2794162.f_1831), 23);
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x1F10
{
	if (!func_40())
	{
		return 0;
	}
	if (func_55())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_53(&(Global_1853988[iParam0 /*867*/].f_794), func_54(iParam1));
}

var func_53(var uParam0, var uParam1)//Position - 0x1F50
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_54(int iParam0)//Position - 0x1F73
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		default:
	}
	return 1;
}

bool func_55()//Position - 0x2149
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

int func_56(int iParam0)//Position - 0x2160
{
	return 0;
}

void func_57(int iParam0, bool bParam1)//Position - 0x2169
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_65(-1))
			{
				if (!func_77())
				{
					return;
				}
			}
			if (!func_65(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_64() && !func_63())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_62())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_65(-1))
				{
					if (!func_58())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1836851[iVar1]), iVar0);
	}
}

int func_58()//Position - 0x2202
{
	var uVar0;
	
	if (func_240(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = func_88(1304, -1);
	if (BitTest(uVar0, 2))
	{
		func_59(1);
		return 1;
	}
	return 0;
}

void func_59(bool bParam0)//Position - 0x2234
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
		{
			func_60(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
	}
}

void func_60(int iParam0, int iParam1)//Position - 0x229B
{
	func_61(&(Global_1853988[iParam0 /*867*/].f_794), func_54(iParam1));
}

int func_61(var uParam0, var uParam1)//Position - 0x22BA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_62()//Position - 0x22F2
{
	var uVar0;
	
	if (BitTest(Global_2794162.f_1831, 6))
	{
		return 1;
	}
	uVar0 = func_88(1304, -1);
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2794162.f_1831, 6))
		{
			MISC::SET_BIT(&(Global_2794162.f_1831), 6);
		}
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return 0;
}

bool func_63()//Position - 0x234F
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 7);
}

int func_64()//Position - 0x2366
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(121, -1);
}

bool func_65(int iParam0)//Position - 0x2396
{
	return func_39(123, iParam0);
}

int func_66(int iParam0)//Position - 0x23A6
{
	var uVar0;
	bool bVar1;
	
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_88(func_67(iParam0), -1);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x25D4
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_68(int iParam0)//Position - 0x2683
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_65(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_69(int iParam0)//Position - 0x294B
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(119, iParam0);
}

int func_70(int iParam0, bool bParam1)//Position - 0x297C
{
	if (bParam1)
	{
	}
	return func_71(iParam0, 0);
}

int func_71(int iParam0, int iParam1)//Position - 0x2990
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_72(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_72(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_72(int iParam0)//Position - 0x2A4B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_73(int iParam0, bool bParam1)//Position - 0x2F86
{
	if (bParam1)
	{
	}
	return func_74(iParam0);
}

int func_74(int iParam0)//Position - 0x2F99
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_88(640, -1);
			}
			else if (func_75(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_88(640, -1);
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x2FF0
{
	if (!func_76(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_76(var uParam0)//Position - 0x300F
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

int func_77()//Position - 0x3031
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return func_39(120, -1);
}

void func_78()//Position - 0x3061
{
	if (!func_85(1, -1))
	{
		func_83(1, -1);
	}
	if (func_229() && func_25() == 0)
	{
	}
	else
	{
		NETWORK::NETWORK_BLOCK_INVITES(false);
	}
	if (func_82(1))
	{
		NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	}
	else
	{
		NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(false);
	}
	Global_2683883.f_743 = 0;
	if (func_79())
	{
		if (!func_39(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

int func_79()//Position - 0x30CB
{
	if (func_81() && func_80(0))
	{
		return 1;
	}
	return 0;
}

var func_80(int iParam0)//Position - 0x30E9
{
	return Global_1574538[iParam0];
}

var func_81()//Position - 0x30F9
{
	return func_80(func_34() + 1);
}

bool func_82(int iParam0)//Position - 0x310B
{
	return Global_1936071.f_16[iParam0 /*44*/].f_3;
}

void func_83(bool bParam0, int iParam1)//Position - 0x311F
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = func_84(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_84(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_86(1304, 0, iParam1, 1);
			func_86(7236, 0, iParam1, 1);
			break;
	}
}

int func_84(int iParam0)//Position - 0x3200
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_85(int iParam0, int iParam1)//Position - 0x3263
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = func_84(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_86(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x328C
{
	int iVar0;
	
	iVar0 = func_87(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_87(int iParam0, var uParam1)//Position - 0x32AF
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_33(uParam1));
}

int func_88(int iParam0, int iParam1)//Position - 0x32C4
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_87(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_89()//Position - 0x32F3
{
	if (BitTest(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x330F
{
	switch (iLocal_263)
	{
		case 0:
			if (!BitTest(uLocal_435, 18))
			{
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					iLocal_437 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_264);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_437, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_437, "FM_LEST_BLP" /* GXT: Lester */);
					func_139("FM_LEST_GTL" /* GXT: ~s~Go to ~b~Lester. */, 0);
					MISC::SET_BIT(&uLocal_435, 18);
				}
			}
			if (!BitTest(uLocal_435, 20))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_264))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1272.7472f, -1715.2231f, 53.45897f, 1273.7319f, -1717.4268f, 55.70897f, 2f, false, true, 0))
						{
							iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, iLocal_267, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1000f, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_266, iLocal_267, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1000f);
							MISC::SET_BIT(&uLocal_435, 20);
						}
					}
				}
			}
			if (!BitTest(uLocal_435, 3))
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_436, 8);
				MISC::SET_BIT(&uLocal_435, 3);
			}
			else if (!BitTest(uLocal_435, 10))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
					MISC::SET_BIT(&uLocal_435, 10);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1275.0946f, -1715.7693f, 53.70897f, 1274.3821f, -1714.2185f, 56.02147f, 1.375f, false, true, 0))
				{
					if (BitTest(uLocal_435, 10))
					{
						iLocal_263++;
					}
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01"))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
					}
				}
				func_138(1);
				CUTSCENE::START_CUTSCENE(0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				func_129(PLAYER::PLAYER_ID(), 0, 32772, 0);
				func_125(0);
				iLocal_263++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_121();
				iLocal_263++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_120();
			}
			else
			{
				iLocal_263++;
			}
			break;
		
		case 4:
			if (iLocal_441)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					iLocal_441 = 0;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_93(1, 1, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (BitTest(uLocal_435, 25))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				}
				if (iLocal_440 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_440);
				}
				MISC::CLEAR_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
				func_91();
				iLocal_263++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!BitTest(uLocal_435, 11))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1275.2192f, -1722.5026f, 53.655f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 228.4235f);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				MISC::SET_BIT(&uLocal_435, 11);
			}
		}
	}
	if (!BitTest(uLocal_435, 26))
	{
		if (iLocal_263 > 2)
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					MISC::SET_BIT(&uLocal_435, 26);
				}
			}
		}
	}
	if (BitTest(uLocal_435, 19))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	}
	return 0;
}

void func_91()//Position - 0x36D3
{
	int iVar0;
	
	iVar0 = func_92(53);
	Global_2645174[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_92(int iParam0)//Position - 0x36FF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645174[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645174[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_93(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x374C
{
	func_118();
	if (bParam0)
	{
		func_116(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	func_113();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	func_109(0, 1, 1, 0, 0, bParam2, 0);
	func_108();
	func_107(12, 0, -1);
	func_106(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_105();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
		}
	}
	func_138(0);
	if (((((func_229() == 0 && func_104() == 0) && iParam1) && !func_102(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_100())
	{
		func_129(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2672524.f_3542 = 0;
	func_94();
}

void func_94()//Position - 0x381E
{
	bool bVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_188(&Global_2803710))
	{
		if (!func_187(&Global_2803710, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_99())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_98(&Global_2803710, 1, 0);
				}
				else if (!func_96(PLAYER::PLAYER_ID(), 0))
				{
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 0) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || Global_2803780))
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			else
			{
				func_98(&Global_2803710, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_186(&Global_2803710);
		}
	}
	if (Global_2803714 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2803714, bVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
				if (func_4(iVar1, 1, 1))
				{
					func_95(iVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_95(int iParam0)//Position - 0x3941
{
	if (BitTest(Global_2803714, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_187(&(Global_2803715[iParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(iParam0))
		{
			if (!func_99())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_98(&(Global_2803715[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_96(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, true);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, false);
					}
				}
			}
			else
			{
				func_98(&(Global_2803715[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_186(&(Global_2803715[iParam0 /*2*/]));
			MISC::CLEAR_BIT(&Global_2803714, iParam0);
		}
	}
}

bool func_96(int iParam0, int iParam1)//Position - 0x3A10
{
	bool bVar0;
	
	if (!func_76(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
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

int func_97(int iParam0, bool bParam1)//Position - 0x3A69
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
	}
	if (Global_1575043[iVar1] == 1)
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

void func_98(var uParam0, bool bParam1, bool bParam2)//Position - 0x3AAA
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

int func_99()//Position - 0x3AE7
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_100()//Position - 0x3B05
{
	if (func_101() == 0)
	{
		return 1;
	}
	return 0;
}

int func_101()//Position - 0x3B1A
{
	return Global_1574632.f_18;
}

int func_102(int iParam0)//Position - 0x3B28
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_103())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_103()//Position - 0x3B67
{
	return BitTest(Global_2621446, 3);
}

int func_104()//Position - 0x3B75
{
	return BitTest(Global_2683883, 7);
}

void func_105()//Position - 0x3B83
{
	Global_23251.f_5 = 0;
}

void func_106(int iParam0)//Position - 0x3B91
{
	Global_2794162.f_4635 = iParam0;
}

void func_107(int iParam0, bool bParam1, int iParam2)//Position - 0x3BA2
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1654054.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1654054.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1654054.f_1046), iParam0);
			}
			break;
	}
}

void func_108()//Position - 0x3BF1
{
	func_106(1);
	func_107(4, 0, -1);
	func_107(6, 0, -1);
	func_107(7, 0, -1);
	func_107(3, 0, -1);
	func_107(1, 0, -1);
	func_107(2, 0, -1);
	func_107(11, 0, -1);
	func_107(13, 0, -1);
	func_107(14, 0, -1);
	func_107(16, 0, -1);
}

void func_109(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3C48
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_138(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_112())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_111(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_138(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_111(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_102(PLAYER::PLAYER_ID())) && !func_96(PLAYER::PLAYER_ID(), 0)) && !func_110()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_102(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_110()//Position - 0x3D95
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_111(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x3DAF
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_112()//Position - 0x3DE2
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_113()//Position - 0x3E09
{
	func_114(0);
}

void func_114(bool bParam0)//Position - 0x3E16
{
	if (bParam0)
	{
		func_115();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_235(0))
		{
			func_125(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_115()//Position - 0x3E79
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_116(bool bParam0)//Position - 0x3EA2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112461)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, bParam0);
		func_117(iVar0);
		iVar0++;
	}
}

void func_117(int iParam0)//Position - 0x3ED0
{
	Global_112461[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112461[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112461[iParam0 /*28*/].f_4), "", 64);
	Global_112461[iParam0 /*28*/].f_23 = 0;
	Global_112461[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112461[iParam0 /*28*/].f_27 = 0;
	Global_112461[iParam0 /*28*/].f_20 = 0;
	Global_112461[iParam0 /*28*/].f_22 = 0;
}

void func_118()//Position - 0x3F3A
{
	if (!Global_1574747)
	{
		return;
	}
	func_119();
}

void func_119()//Position - 0x3F51
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_120()//Position - 0x3F70
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 346, true);
		if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
			{
			}
		}
	}
}

void func_121()//Position - 0x3FA6
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_437))
	{
		HUD::REMOVE_BLIP(&iLocal_437);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		iVar0 = iLocal_264;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
	{
		iVar0 = iLocal_266;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	func_12();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_122(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::REMOVE_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
}

int func_122(int iParam0)//Position - 0x4008
{
	if (!func_124(iParam0))
	{
		return func_123(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_123(int iParam0)//Position - 0x402E
{
	return Global_2058[iParam0 /*29*/];
}

bool func_124(int iParam0)//Position - 0x403D
{
	return iParam0 < 3;
}

void func_125(int iParam0)//Position - 0x4049
{
	if (func_128())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_127())
		{
			func_126(1, 1);
		}
		else
		{
			func_126(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_112())
	{
		Global_20500.f_1 = 3;
	}
}

void func_126(bool bParam0, bool bParam1)//Position - 0x40D3
{
	if (bParam0)
	{
		if (func_235(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

bool func_127()//Position - 0x4147
{
	return BitTest(Global_1963795, 5);
}

bool func_128()//Position - 0x4155
{
	return BitTest(Global_1963795, 19);
}

void func_129(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4164
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
	if (func_137())
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
		if (!func_100())
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
				else if (bVar14 || ((!func_96(PLAYER::PLAYER_ID(), 0) && !func_103()) && !func_102(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657704[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_134(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_133(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_132();
					func_131();
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
				Global_2657704[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635560.f_2781)
				{
					Global_2635560.f_2781 = 0;
				}
			}
			else
			{
				if (!func_133(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_130(Global_4718592.f_171044))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575038)
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

bool func_130(int iParam0)//Position - 0x4600
{
	return iParam0 == 17;
}

void func_131()//Position - 0x460D
{
	struct<3> Var0;
	
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_132()//Position - 0x465A
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_133(int iParam0)//Position - 0x4698
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

void func_134(bool bParam0, int iParam1, int iParam2)//Position - 0x46C9
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
				func_136();
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
		if (func_96(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_135(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_135(int iParam0, bool bParam1)//Position - 0x4799
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_136()//Position - 0x47B5
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

int func_137()//Position - 0x480D
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0)//Position - 0x483E
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

void func_139(char* sParam0, bool bParam1)//Position - 0x4861
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_143(sParam0))
	{
		return;
	}
	func_13();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_142();
	func_141(bParam1);
	func_140();
}

void func_140()//Position - 0x48CC
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_141(bool bParam0)//Position - 0x48DF
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_142()//Position - 0x4905
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_143(char* sParam0)//Position - 0x492A
{
	if (!func_18())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_144(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_144(char* sParam0)//Position - 0x496E
{
	if (!func_18())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_145()//Position - 0x49A0
{
	switch (iLocal_442)
	{
		case 0:
			if (!BitTest(uLocal_435, 25))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				MISC::SET_BIT(&uLocal_435, 25);
			}
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_443) && func_197())
			{
				func_178();
				func_177();
				func_174(0, 0, 1, 0, 1, 1, 0);
				func_129(PLAYER::PLAYER_ID(), 0, 8196, 0);
				NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				func_171(1, 1, 0, 1);
				if (!PED::IS_PED_INJURED(iLocal_265))
				{
					MISC::CLEAR_AREA(1273.8845f, -1718.0037f, 53.7715f, 3f, true, false, false, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_265);
					ENTITY::SET_ENTITY_COORDS(iLocal_265, 1275.2563f, -1722.3683f, 53.655f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_265, 12.6638f);
					PED::FORCE_PED_MOTION_STATE(iLocal_265, joaat("MotionState_Walk"), false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_265, joaat("WEAPON_UNARMED"), true);
				}
				iLocal_444 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_ACTIVE(iLocal_444, true);
				CAM::SET_CAM_PARAMS(iLocal_444, 1276.4088f, -1719.9183f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_443, "SET_DETAILS");
				func_170("FM_LEST_CAM" /* GXT: ~s~CAM: 02 */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_443, "SET_LOCATION");
				func_170("FM_LEST_CAM2" /* GXT: ~s~FRONT DOOR */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam");
				}
				MISC::SET_BIT(&uLocal_435, 15);
				func_7(&uLocal_445, 0, 0);
				STREAMING::REQUEST_MODEL(func_122(12));
				STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
				STREAMING::REQUEST_ANIM_DICT("MissLester1ALeadInOut");
				MISC::SET_BIT(&uLocal_435, 23);
				if (!BitTest(uLocal_435, 17))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 0, false, false);
						MISC::SET_BIT(&uLocal_435, 17);
					}
				}
				iLocal_442 = 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				if (!BitTest(uLocal_435, 21))
				{
					if (func_187(&uLocal_445, 1000, 0))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_265, 1276.4088f, -1719.9183f, 56.1054f, -1, 0, 2);
						MISC::SET_BIT(&uLocal_435, 21);
					}
				}
			}
			if (func_187(&uLocal_445, 1500, 0))
			{
				if (BitTest(uLocal_435, 17))
				{
					if (!PED::IS_PED_INJURED(iLocal_265))
					{
						if (!PED::IS_PED_INJURED(iLocal_264))
						{
							if (func_151(&uLocal_268, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_186(&uLocal_445);
								func_7(&uLocal_445, 0, 0);
								iLocal_442++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				if (!func_239())
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_265, 104, true);
					MISC::SET_BIT(&uLocal_435, 22);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_265);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_265, 1273.5762f, -1718.4594f, 53.7715f, 1f, 20000, 0.25f, 0, 40000f);
					func_186(&uLocal_445);
					func_7(&uLocal_445, 0, 0);
					iLocal_442++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_265))
			{
				if (func_187(&uLocal_445, 5000, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_265, 1275.1378f, -1718.4255f, 53.729942f, 1272.4507f, -1719.6267f, 55.45897f, 1.5625f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1273.8845f, -1718.0037f, 53.7715f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 21.8709f);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
					func_150();
					func_93(1, 1, 0, 1);
					MISC::CLEAR_BIT(&uLocal_435, 22);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_129(PLAYER::PLAYER_ID(), 1, 0, 0);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					MISC::SET_BIT(&uLocal_435, 25);
					NETWORK::SET_STORE_ENABLED(false);
					MISC::SET_BIT(&uLocal_435, 24);
					iLocal_442 = 99;
				}
			}
			break;
		
		case 99:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 4, false, false);
				MISC::SET_BIT(&uLocal_435, 19);
				iLocal_442 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (BitTest(uLocal_435, 15))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_443))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_443, "SET_TIME");
			if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 12)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_HOURS());
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((CLOCK::GET_CLOCK_HOURS() - 12));
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_MINUTES());
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() < 12)
			{
				func_170("FM_LEST_AM" /* GXT: ~s~AM */);
			}
			else
			{
				func_170("FM_LEST_PM" /* GXT: ~s~PM */);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_443, 255, 255, 255, 255, 0);
		}
	}
	if (BitTest(uLocal_435, 22))
	{
		if (!PED::IS_PED_INJURED(iLocal_265))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_265, 104, true);
			PED::SET_PED_RESET_FLAG(iLocal_265, 60, true);
			PED::SET_PED_RESET_FLAG(iLocal_265, 342, true);
			PED::SET_PED_RESET_FLAG(iLocal_265, 348, true);
		}
	}
	if (BitTest(uLocal_435, 23))
	{
		if (func_146())
		{
			MISC::CLEAR_BIT(&uLocal_435, 23);
		}
	}
	return 0;
}

int func_146()//Position - 0x4ED2
{
	bool bVar0;
	
	STREAMING::REQUEST_MODEL(func_122(12));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_122(12)))
		{
			if (func_148(&iLocal_264, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, true);
				func_147(&uLocal_268, 8, iLocal_264, "Lester", 0, 1);
				PED::SET_PED_PROP_INDEX(iLocal_264, 1, 0, 0, false, 1);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s")))
		{
			iLocal_266 = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, false, false, false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_264))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_264))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_264))
	{
		iLocal_267 = PED::CREATE_SYNCHRONIZED_SCENE(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_264, iLocal_267, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_266, iLocal_267, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1000f);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_267, true);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_147(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x505B
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_148(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x50F6
{
	int iVar0;
	
	if (!func_124(iParam1))
	{
		iVar0 = func_122(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_149(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_149(var uParam0, int iParam1)//Position - 0x5184
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96647[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_150()//Position - 0x51CA
{
	int iVar0;
	
	if (CAM::DOES_CAM_EXIST(iLocal_444))
	{
		CAM::SET_CAM_ACTIVE(iLocal_444, false);
		CAM::DESTROY_CAM(iLocal_444, false);
	}
	MISC::CLEAR_BIT(&uLocal_435, 15);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		iVar0 = iLocal_265;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_443);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}

bool func_151(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5221
{
	func_169(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_152(sParam2, iParam3, 0);
}

int func_152(char* sParam0, int iParam1, bool bParam2)//Position - 0x526F
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_168();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_167(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_166();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_160();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_159())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78689)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_112())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_158();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_157();
		func_153();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_168();
	}
	return 0;
}

void func_153()//Position - 0x553D
{
	if (!func_154())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_154()//Position - 0x5574
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_156())
	{
		return 0;
	}
	if (func_155(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_155(int iParam0)//Position - 0x55D7
{
	return func_10(iParam0, 20);
}

int func_156()//Position - 0x55E7
{
	return -1;
}

void func_157()//Position - 0x55F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_158()//Position - 0x5621
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_159()//Position - 0x56B6
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_160()//Position - 0x574F
{
	if (func_165(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_161();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

var func_161()//Position - 0x57F1
{
	func_162();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_162()//Position - 0x580A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_164(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_163(PLAYER::PLAYER_PED_ID());
			if (func_124(iVar0) && (!func_165(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_124(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

int func_163(int iParam0)//Position - 0x5907
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_164(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_164(int iParam0)//Position - 0x5944
{
	if (func_124(iParam0))
	{
		return func_123(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_165(int iParam0)//Position - 0x5969
{
	return Global_43377 == iParam0;
}

void func_166()//Position - 0x5977
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_167(int iParam0, int iParam1)//Position - 0x59CE
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_168()//Position - 0x5A06
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_169(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x5A5D
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = uParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

void func_170(char* sParam0)//Position - 0x5AB3
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x5AC5
{
	func_173();
	func_116(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_109(1, 1, 1, 0, 0, 0, bParam2);
	func_172();
	func_107(12, 1, -1);
	func_106(0);
	if (bParam3)
	{
		CAM::SET_WIDESCREEN_BORDERS(true, -1);
	}
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_116(1);
	func_138(1);
	Global_2672524.f_3542 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_172()//Position - 0x5B3A
{
	func_106(0);
	func_107(4, 1, -1);
	func_107(6, 1, -1);
	func_107(7, 1, -1);
	func_107(3, 1, -1);
	func_107(1, 1, -1);
	func_107(2, 1, -1);
	func_107(11, 1, -1);
	func_107(13, 1, -1);
	func_107(14, 1, -1);
	func_107(16, 1, -1);
}

void func_173()//Position - 0x5B91
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

void func_174(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x5BBA
{
	int iVar0;
	
	func_176();
	func_114(1);
	func_106(1);
	func_107(12, 1, -1);
	func_175();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
	if (bParam0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(PLAYER::PLAYER_ID(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_129(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_175()//Position - 0x5C49
{
	Global_23251.f_5 = 1;
}

void func_176()//Position - 0x5C57
{
	func_125(0);
	func_114(1);
}

void func_177()//Position - 0x5C69
{
	Global_2672524.f_947.f_9 = 1;
}

void func_178()//Position - 0x5C7B
{
	if (func_184() || func_183())
	{
		func_182();
		func_179();
	}
}

void func_179()//Position - 0x5C9C
{
	if ((!func_181() && !func_180()) && Global_2684819)
	{
		Global_4718592.f_117591 = 0;
	}
}

bool func_180()//Position - 0x5CCA
{
	return Global_2683883.f_691;
}

bool func_181()//Position - 0x5CD9
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192 != 0;
}

void func_182()//Position - 0x5CF0
{
	Global_2683883.f_756 = 1;
}

var func_183()//Position - 0x5D00
{
	return Global_2683883.f_735;
}

var func_184()//Position - 0x5D0F
{
	return BitTest(Global_2683883.f_2, 11);
}

int func_185()//Position - 0x5D20
{
	switch (iLocal_263)
	{
		case 0:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_263++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_120();
			}
			else
			{
				iLocal_263++;
			}
			break;
		
		case 2:
			if (iLocal_441)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					iLocal_441 = 0;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_93(1, 1, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (iLocal_440 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_440);
				}
				MISC::CLEAR_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
				iLocal_263++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!BitTest(uLocal_435, 11))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1275.2192f, -1722.5026f, 53.655f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 228.4235f);
				MISC::SET_BIT(&uLocal_435, 11);
			}
		}
	}
	return 0;
}

void func_186(var uParam0)//Position - 0x5E40
{
	uParam0->f_1 = 0;
}

int func_187(var uParam0, int iParam1, bool bParam2)//Position - 0x5E4D
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

bool func_188(var uParam0)//Position - 0x5EAB
{
	return uParam0->f_1;
}

bool func_189(char* sParam0)//Position - 0x5EB7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_190(char* sParam0, int iParam1)//Position - 0x5ECA
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_191(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x5EE1
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_239())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (func_231())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_232(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_195(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_194())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836370)
	{
		return 0;
	}
	if (func_193())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (func_181())
	{
		return 0;
	}
	if (Global_75816)
	{
		return 0;
	}
	if (Global_2804769)
	{
		return 0;
	}
	if (func_192())
	{
		return 0;
	}
	return 1;
}

bool func_192()//Position - 0x5FDA
{
	return Global_2765083;
}

bool func_193()//Position - 0x5FE6
{
	return Global_2683883.f_845;
}

bool func_194()//Position - 0x5FF5
{
	return Global_2672524.f_2838.f_582;
}

int func_195(int iParam0)//Position - 0x6007
{
	if (Global_2657704[iParam0 /*463*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_196()//Position - 0x6023
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_197()//Position - 0x6038
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			iLocal_265 = PED::CREATE_PED(4, iVar0, 1273.8271f, -1717.8727f, 53.7715f, 19.2225f, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_265, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_265, true);
			PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), iLocal_265);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_265))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_265))
		{
			return 0;
		}
	}
	return 1;
}

void func_198()//Position - 0x60C6
{
	NETWORK::NETWORK_BLOCK_INVITES(true);
	func_199(1, -1);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	if (func_39(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2683883.f_743 = 1;
}

void func_199(bool bParam0, int iParam1)//Position - 0x60F9
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			break;
		
		default:
			iVar1 = func_84(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

void func_200(bool bParam0, bool bParam1)//Position - 0x618A
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

int func_201()//Position - 0x61E7
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (bLocal_434)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1274.5474f, -1720.6945f, 53.6807f) > 500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				iVar0 = iLocal_265;
				ENTITY::DELETE_ENTITY(&iVar0);
			}
			return 0;
		}
		func_197();
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.8043f, -1722.4661f, 53.217487f, 1277.1472f, -1720.779f, 56.092487f, 3.4375f, false, true, 0))
	{
		return 0;
	}
	return 1;
}

bool func_202(int iParam0, int iParam1)//Position - 0x627E
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_203(bool bParam0)//Position - 0x6294
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (((((((((func_222(iVar0) || func_221(iVar0)) || func_220(iVar0)) || func_219(iVar0)) || func_218(iVar0)) || func_217(iVar0)) || func_216(iVar0)) || func_215(iVar0)) || func_214(iVar0)) || (func_211(iVar0) && func_210(iVar0)))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_209(iVar0))
		{
			return 1;
		}
	}
	else if (func_204(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x6349
{
	if (((func_209(iParam0) || func_208(iParam0)) || func_207(iParam0)) || func_205(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x6383
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x63CA
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
	}
	return -1;
}

int func_207(int iParam0)//Position - 0x687E
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x68C5
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x690C
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x6953
{
	if (iParam0 != func_156())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 26);
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x6979
{
	if (func_213(iParam0) && func_212(iParam0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)//Position - 0x699D
{
	if (iParam0 == func_156())
	{
		return iParam0;
	}
	return Global_2657704[iParam0 /*463*/].f_321.f_10;
}

int func_213(int iParam0)//Position - 0x69C1
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_156())
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x6A21
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x6A68
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 21;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x6AAF
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x6AF6
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x6B3D
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x6B84
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x6BCB
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x6C12
{
	if (iParam0 != func_156())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_156())
			{
				return func_206(Global_2657704[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

var func_222(int iParam0)//Position - 0x6C72
{
	return func_223(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_223(var uParam0, int iParam1)//Position - 0x6C8B
{
	return BitTest(*uParam0, iParam1);
}

var func_224()//Position - 0x6C99
{
	return Global_1948438;
}

int func_225()//Position - 0x6CA5
{
	int iVar0;
	
	return 0;
	if (func_226(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_226(int iParam0)//Position - 0x6CBF
{
	var uVar0;
	
	if (Global_2694611)
	{
		return 1;
	}
	if ((iParam0 >= 0 && iParam0 <= 16) && func_228())
	{
		return 1;
	}
	else if ((iParam0 >= 17 && iParam0 <= 31) && func_227())
	{
		return 1;
	}
	uVar0 = func_88(2481, -1);
	return BitTest(uVar0, iParam0);
}

var func_227()//Position - 0x6D21
{
	return BitTest(func_88(2482, -1), 2);
}

var func_228()//Position - 0x6D33
{
	return BitTest(func_88(2482, -1), 1);
}

bool func_229()//Position - 0x6D45
{
	return Global_1575063;
}

int func_230()//Position - 0x6D51
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_193;
}

bool func_231()//Position - 0x6D66
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

int func_232(int iParam0, bool bParam1, bool bParam2)//Position - 0x6D7F
{
	if (bParam1)
	{
		if (func_233(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_233(int iParam0)//Position - 0x6DB1
{
	return func_234(iParam0);
}

var func_234(int iParam0)//Position - 0x6DBF
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_235(int iParam0)//Position - 0x6DD6
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
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
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_236()//Position - 0x6E2D
{
	return func_237();
}

bool func_237()//Position - 0x6E39
{
	return Global_1649067.f_40 == 3;
}

int func_238()//Position - 0x6E49
{
	if (Global_21845 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
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

int func_239()//Position - 0x6E6E
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x6E90
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_139, 25);
}

int func_241()//Position - 0x6EBC
{
	return Local_86.f_0;
}

int func_242(int iParam0)//Position - 0x6EC6
{
	return Local_166[iParam0 /*3*/];
}

void func_243(var uParam0)//Position - 0x6ED4
{
	if (func_245(1))
	{
		if (HUD::DOES_BLIP_EXIST(*uParam0) && !HUD::IS_BLIP_SHORT_RANGE(*uParam0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, true);
			HUD::SET_BLIP_MARKER_LONG_DISTANCE(*uParam0, 0);
			HUD::SET_BLIP_PRIORITY(*uParam0, 5);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam0) && (HUD::IS_BLIP_SHORT_RANGE(*uParam0) && !func_244()))
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, false);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(*uParam0, 1);
	}
}

int func_244()//Position - 0x6F46
{
	return 0;
}

bool func_245(bool bParam0)//Position - 0x6F4F
{
	return func_246(PLAYER::PLAYER_ID(), bParam0);
}

bool func_246(int iParam0, bool bParam1)//Position - 0x6F61
{
	if (!func_76(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_247(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_156();
}

int func_247(int iParam0)//Position - 0x6F9A
{
	if (func_76(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_156())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_248()//Position - 0x6FCF
{
	int iVar0;
	
	func_12();
	func_200(12, 0);
	func_78();
	if (iLocal_440 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_440);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		iVar0 = iLocal_265;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_1935835))
	{
		HUD::SET_BLIP_ROUTE(Global_1935835, false);
		HUD::REMOVE_BLIP(&Global_1935835);
	}
	if (BitTest(uLocal_435, 17))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 4, false, false);
		}
	}
	if (BitTest(uLocal_435, 19))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	}
	if (func_251())
	{
		func_250();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::CLEAR_BIT(&(Local_166[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
	}
	if (BitTest(uLocal_435, 25))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	if (BitTest(uLocal_435, 24))
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	func_121();
	CUTSCENE::REMOVE_CUTSCENE();
	func_249();
}

void func_249()//Position - 0x70B4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_250()//Position - 0x70C0
{
	Global_2672524.f_947.f_9 = 0;
}

bool func_251()//Position - 0x70D2
{
	return Global_2672524.f_947.f_9;
}

int func_252()//Position - 0x70E3
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_258())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_256(159))
	{
		if (!func_255())
		{
			return 1;
		}
	}
	if (func_256(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_253() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_253()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_253()//Position - 0x7167
{
	switch (func_25())
	{
		case 0:
			return func_254();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_254()//Position - 0x719A
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_255()//Position - 0x71BE
{
	return Global_2683883.f_698;
}

int func_256(int iParam0)//Position - 0x71CD
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_257()//Position - 0x71E4
{
	return Global_2694576;
}

bool func_258()//Position - 0x71F0
{
	return Global_2683883.f_693;
}

void func_259()//Position - 0x71FF
{
	SYSTEM::WAIT(0);
}

void func_260(struct<21> Param0)//Position - 0x720C
{
	func_264(func_265(Param0.f_0), Param0);
	func_262(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_166, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_261())
	{
		func_248();
	}
}

int func_261()//Position - 0x724E
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
		if (func_258())
		{
			return 0;
		}
		if (func_256(157))
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

int func_262(int iParam0, int iParam1, bool bParam2)//Position - 0x72A7
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_249();
			}
			else
			{
				return 0;
			}
		}
		if (!func_263(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_249();
					}
					else
					{
						return 0;
					}
				}
				if (func_258())
				{
					if (!bParam2)
					{
						func_249();
					}
					else
					{
						return 0;
					}
				}
				if (func_256(157))
				{
					if (!bParam2)
					{
						func_249();
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
					func_249();
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
				func_249();
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
			func_249();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_263(bool bParam0)//Position - 0x73BD
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_264(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x73CE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_249();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_265(int iParam0)//Position - 0x73ED
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
		
		case 180:
			return 32;
		
		case 181:
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
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_266(func_267(iParam0, 1)))
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

int func_266(int iParam0)//Position - 0x7B78
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
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_267(int iParam0, bool bParam1)//Position - 0x7D86
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
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
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

