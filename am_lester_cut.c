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
	float fLocal_60 = 0f;
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
	struct<4> Local_85 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 32;
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
	var uLocal_128 = 32;
	var uLocal_129 = 0;
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
	int iLocal_164 = 0;
	struct<3> Local_165[32];
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	var uLocal_267 = 16;
	var uLocal_268 = 0;
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
	bool bLocal_432 = 0;
	bool bLocal_433 = 0;
	var uLocal_434 = 0;
	char* sLocal_435 = NULL;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
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
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	bLocal_433 = true;
	sLocal_435 = "MP_INTRO_MCS_13";
	func_256(ScriptParam_0);
	while (true)
	{
		func_255();
		if (func_248())
		{
			func_244();
		}
		func_239(&Global_1935132);
		switch (func_238(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_237() == 2)
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 2;
				}
				else if (func_237() == 6)
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_237() == 2)
				{
					if (!func_236(PLAYER::PLAYER_ID()))
					{
						func_19();
					}
					else if (HUD::DOES_BLIP_EXIST(Global_1935132))
					{
						func_12();
						HUD::SET_BLIP_ROUTE(Global_1935132, false);
						HUD::REMOVE_BLIP(&Global_1935132);
						if (BitTest(uLocal_434, 3))
						{
							CUTSCENE::REMOVE_CUTSCENE();
						}
						MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
					}
					if (func_8(PLAYER::PLAYER_ID()))
					{
						Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
						Global_2793046.f_1810 = 0;
					}
				}
				else if (func_237() == 6)
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(Local_85.f_3));
				if (func_5(&(Local_85.f_3)))
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
				}
				break;
			
			case 3:
				Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
			
			case 6:
				func_244();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_237())
			{
				case 0:
					Local_85.f_2 = -1;
					Local_85.f_0 = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						Local_85.f_0 = 6;
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
	if (BitTest(Local_85.f_1, 0))
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
		if (iLocal_164 == 0)
		{
			MISC::CLEAR_BIT(&uLocal_434, 0);
			MISC::SET_BIT(&uLocal_434, 1);
			if (Local_85.f_2 != -1)
			{
				if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_85.f_2)))
				{
					Local_85.f_2 = -1;
				}
			}
		}
		iVar0 = iLocal_164;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!BitTest(Local_165[iLocal_164 /*3*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&uLocal_434, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (BitTest(Local_165[iLocal_164 /*3*/].f_2, 1))
				{
					MISC::SET_BIT(&uLocal_434, 12);
					if (Local_85.f_2 == -1)
					{
						if (Local_85.f_2 != iLocal_164)
						{
							Local_85.f_2 = iLocal_164;
						}
					}
				}
				else if (Local_85.f_2 == iLocal_164)
				{
					Local_85.f_2 = -1;
				}
			}
		}
		iLocal_164++;
		if (iLocal_164 == 32)
		{
			if (BitTest(uLocal_434, 1))
			{
				MISC::SET_BIT(&(Local_85.f_1), 0);
			}
			if (!BitTest(uLocal_434, 12))
			{
				if (Local_85.f_2 != -1)
				{
					Local_85.f_2 = -1;
				}
			}
			MISC::SET_BIT(&uLocal_434, 0);
			iLocal_164 = 0;
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
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
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_11(var uParam0)//Position - 0x466
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 0);
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
	
	switch (Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 0:
			if (!BitTest(uLocal_434, 2))
			{
				if (!BitTest(uLocal_434, 5))
				{
					if (!func_235())
					{
						if (!func_234())
						{
							if (!func_232())
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (!func_231(0))
									{
										if (!func_228(PLAYER::PLAYER_ID(), 1, 0))
										{
											if (!func_227())
											{
												if (func_226() == 0)
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
			if (!BitTest(uLocal_434, 5))
			{
				if ((((((func_228(PLAYER::PLAYER_ID(), 1, 0) || func_227()) || func_226() > 0) || func_225()) || func_221()) || func_220()) || func_199(0))
				{
					MISC::SET_BIT(&uLocal_434, 5);
					func_12();
					if (HUD::DOES_BLIP_EXIST(Global_1935132))
					{
						HUD::SET_BLIP_ROUTE(Global_1935132, false);
						HUD::REMOVE_BLIP(&Global_1935132);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Global_1935132))
					{
						if (!BitTest(uLocal_434, 14))
						{
							if (Local_85.f_2 != -1)
							{
								if (Local_85.f_2 != NETWORK::PARTICIPANT_ID_TO_INT())
								{
									HUD::SET_BLIP_COLOUR(Global_1935132, 39);
									HUD::SET_BLIP_SCALE(Global_1935132, 0.7f);
									MISC::SET_BIT(&uLocal_434, 14);
								}
							}
						}
						else if (Local_85.f_2 == -1 || Local_85.f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							HUD::SET_BLIP_COLOUR(Global_1935132, 0);
							HUD::SET_BLIP_SCALE(Global_1935132, 1f);
							MISC::CLEAR_BIT(&uLocal_434, 14);
						}
					}
					if (BitTest(uLocal_434, 8))
					{
						MISC::CLEAR_BIT(&uLocal_434, 8);
					}
					if (func_198())
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if ((bLocal_432 && CUTSCENE::HAS_CUTSCENE_LOADED()) || !bLocal_432)
							{
								if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
								{
									MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
								}
								if (BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
								{
									if (Local_85.f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										func_12();
										if (HUD::DOES_BLIP_EXIST(Global_1935132))
										{
											HUD::SET_BLIP_ROUTE(Global_1935132, false);
											HUD::REMOVE_BLIP(&Global_1935132);
										}
										HUD::CLEAR_HELP(true);
										func_197(12, 1);
										func_195();
										PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
										MISC::SET_BIT(&uLocal_434, 25);
										MISC::CLEAR_AREA(1274.854f, -1721.1538f, 53.6808f, 2f, true, false, false, true);
										if (bLocal_433)
										{
											func_194();
											iLocal_442 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
										}
										Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 1;
									}
									else if (Local_85.f_2 != -1)
									{
										if (!BitTest(uLocal_434, 13))
										{
											if (func_188(1, 1, 1, 1))
											{
												func_187("FM_LCUT_LRB" /* GXT: ~s~Lester is currently busy. This is shown on the map with ~HUD_COLOUR_INACTIVE_MISSION~~BLIP_LESTER_FAMILY~ */, -1);
												MISC::SET_BIT(&uLocal_434, 13);
											}
										}
									}
								}
							}
						}
						else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_186("FM_LCUT_LCP" /* GXT: ~s~You need to lose the Cops before Lester will speak to you. */))
							{
								func_187("FM_LCUT_LCP" /* GXT: ~s~You need to lose the Cops before Lester will speak to you. */, -1);
							}
						}
					}
					else
					{
						if (!BitTest(uLocal_434, 9))
						{
							if (func_188(0, 1, 1, 1))
							{
								if (!func_225())
								{
									func_187("FM_LCUT_LBLP" /* GXT: ~s~Lester is now a Contact you can go and visit. He is marked with ~BLIP_LESTER_FAMILY~ on the Radar. */, -1);
									if (!HUD::DOES_BLIP_EXIST(Global_1935132))
									{
										Global_1935132 = HUD::ADD_BLIP_FOR_COORD(Global_1935133);
										HUD::SET_BLIP_SPRITE(Global_1935132, 77);
										HUD::SET_BLIP_FLASHES(Global_1935132, true);
										HUD::SET_BLIP_FLASH_TIMER(Global_1935132, 7000);
									}
									MISC::SET_BIT(&uLocal_434, 2);
									MISC::SET_BIT(&uLocal_434, 9);
								}
							}
						}
						if (BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
						{
							MISC::CLEAR_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
						}
						if (BitTest(uLocal_434, 13))
						{
							MISC::CLEAR_BIT(&uLocal_434, 13);
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
						if (((((!func_228(PLAYER::PLAYER_ID(), 1, 0) && !func_227()) && func_226() == 0) && !func_225()) && !func_221()) && !func_199(0))
						{
							if (!func_185(&uLocal_437))
							{
								func_7(&uLocal_437, 0, 0);
							}
							else if (func_184(&uLocal_437, 10, 0))
							{
								MISC::CLEAR_BIT(&uLocal_434, 5);
								MISC::CLEAR_BIT(&uLocal_434, 2);
								MISC::CLEAR_BIT(&uLocal_434, 3);
								MISC::CLEAR_BIT(&uLocal_434, 8);
								func_183(&uLocal_437);
								if (!HUD::DOES_BLIP_EXIST(Global_1935132))
								{
									Global_1935132 = HUD::ADD_BLIP_FOR_COORD(Global_1935133);
									HUD::SET_BLIP_SPRITE(Global_1935132, 77);
								}
							}
						}
					}
				}
			}
			if (bLocal_432)
			{
			}
			break;
		
		case 1:
			if (bLocal_432)
			{
				if (func_182())
				{
					Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
			}
			else if (func_142())
			{
				Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
			}
			break;
		
		case 2:
			if (func_87())
			{
				Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 3;
			}
			break;
		
		case 3:
			if (!BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
			{
				MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
			}
			break;
	}
	if (func_86())
	{
		if (HUD::DOES_BLIP_EXIST(Global_1935132))
		{
			HUD::REMOVE_BLIP(&Global_1935132);
		}
		func_12();
		iVar0 = Global_1665626[func_85(-1)];
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
		func_84(1304, iVar0, -1, 1);
		func_197(12, 0);
		if (bLocal_432)
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_75();
		func_20(1);
	}
}

void func_20(bool bParam0)//Position - 0xD44
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_74())
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				Global_1836844[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_71(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_69(iVar1, bParam0);
	if (!func_68(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836844[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836844[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 311)
	{
		iVar3 = func_67(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_65(iVar4))
			{
				func_56(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_55(1))
	{
		func_48(func_49(59, 0, 0), 0);
		func_43(func_49(135, 0, 0), 1);
		func_41(func_49(22, 0, 0), func_49(73, 0, 0));
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
		func_33(77, 1, -1, 1);
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
	if (func_49(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057411 = 0;
}

void func_21(int iParam0, bool bParam1, int iParam2)//Position - 0xF05
{
	if (bParam1)
	{
		if (!func_32(iParam0, 0, 0))
		{
			if (iParam2 && Global_100733.f_18[iParam0])
			{
				if (func_31(iParam0) == 3 && !func_30(iParam0))
				{
					func_29(iParam0);
					func_28(iParam0, 0, 0);
					func_23(iParam0, 1, 0);
					func_22(iParam0);
				}
				else
				{
					func_28(iParam0, 1, 0);
					func_22(iParam0);
				}
			}
			else
			{
				func_28(iParam0, 0, 0);
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
	else if (func_32(iParam0, 0, 0))
	{
		func_23(iParam0, 0, 0);
		func_23(iParam0, 1, 0);
		func_22(iParam0);
	}
}

void func_22(int iParam0)//Position - 0xFC4
{
	Global_100733.f_202[iParam0] = 1;
	Global_100733.f_201 = 1;
}

void func_23(int iParam0, int iParam1, bool bParam2)//Position - 0xFDE
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1050
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0x1080
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_85(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x10BD
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
			return 12385;
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
		
		default:
			break;
	}
	return 14192;
}

int func_27()//Position - 0x1456
{
	return Global_32163;
}

void func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x1461
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100733.f_1407[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_27() == 0)
		{
			iVar0 = func_25(func_26(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_24(func_26(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113648.f_668[iParam0]), iParam1);
	}
}

void func_29(int iParam0)//Position - 0x14D3
{
	if (Global_100733.f_18[iParam0])
	{
		func_28(iParam0, 10, 1);
		func_28(iParam0, 19, 1);
	}
}

bool func_30(int iParam0)//Position - 0x14FA
{
	return func_32(iParam0, 5, 1);
}

int func_31(int iParam0)//Position - 0x150A
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
	}
	return 6;
}

int func_32(int iParam0, int iParam1, bool bParam2)//Position - 0x1833
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_27() == 0)
		{
			return BitTest(func_25(func_26(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113648.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1894
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = Global_2848282[iParam0 /*3*/][func_85(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_34()//Position - 0x18C6
{
	return 1;
	return 0;
}

bool func_35()//Position - 0x18D3
{
	return Global_1575048;
}

bool func_36()//Position - 0x18DF
{
	return Global_1575050;
}

void func_37(bool bParam0)//Position - 0x18EB
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

void func_38(bool bParam0)//Position - 0x193D
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

int func_39(int iParam0, int iParam1)//Position - 0x197D
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2848282[iParam0 /*3*/][func_85(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_40()//Position - 0x19A9
{
	if (!func_74())
	{
		return 0;
	}
	return 1;
}

void func_41(bool bParam0, bool bParam1)//Position - 0x19BE
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
		func_29(12);
	}
}

void func_42(int iParam0, bool bParam1)//Position - 0x1AE6
{
	if (bParam1)
	{
		Global_100733.f_9[iParam0] = 1;
	}
	else
	{
		Global_100733.f_9[iParam0] = 0;
	}
}

void func_43(bool bParam0, bool bParam1)//Position - 0x1B0C
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_47(0);
	if (Global_262145.f_63 /* Tunable: DISABLE_SUPER_MOD_RANK_CHECK */ == 1 && func_49(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_21(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_30(44))
		{
			func_29(44);
		}
	}
	if (bParam0)
	{
		if (func_44(0) > 1)
		{
			MISC::SET_BIT(&(Global_2793046.f_1828), 10);
		}
	}
}

int func_44(int iParam0)//Position - 0x1B92
{
	int iVar0;
	
	if (Global_1945075[iParam0 /*8*/] == -1)
	{
		iVar0 = func_25(func_46(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_45(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945075[iParam0 /*8*/] = iVar0;
	}
	return Global_1945075[iParam0 /*8*/];
}

void func_45(int iParam0, int iParam1)//Position - 0x1BD6
{
	Global_1945075[iParam0 /*8*/] = iParam1;
	func_24(func_46(iParam0), iParam1, -1, 1, 0);
}

int func_46(int iParam0)//Position - 0x1BF7
{
	switch (iParam0)
	{
		case 0:
			return 12386;
		
		default:
	}
	return 12386;
}

int func_47(bool bParam0)//Position - 0x1C15
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
		if (!BitTest(Global_2793046.f_1819, 26))
		{
			uVar0 = func_25(1192, -1, 0);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_39(122, -1);
}

void func_48(bool bParam0, bool bParam1)//Position - 0x1C70
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_47(0);
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
		if (!func_30(39))
		{
			func_29(39);
		}
		if (!func_30(40))
		{
			func_29(40);
		}
		if (!func_30(41))
		{
			func_29(41);
		}
		if (!func_30(42))
		{
			func_29(42);
		}
		if (!func_30(43))
		{
			func_29(43);
		}
	}
}

int func_49(int iParam0, bool bParam1, bool bParam2)//Position - 0x1D21
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8146 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_51(PLAYER::PLAYER_ID(), 85))
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
			if (func_50())
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
	return BitTest(Global_1836844[iVar1], iVar0);
}

int func_50()//Position - 0x1E8C
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2793046.f_1824, 23))
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
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2793046.f_1824), 23);
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x1EEC
{
	if (!func_40())
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_52(&(Global_1853910[iParam0 /*862*/].f_792), func_53(iParam1));
}

var func_52(var uParam0, var uParam1)//Position - 0x1F2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_53(int iParam0)//Position - 0x1F4F
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
		
		default:
	}
	return 1;
}

bool func_54()//Position - 0x211A
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143, 3);
}

int func_55(int iParam0)//Position - 0x2131
{
	return 0;
}

void func_56(int iParam0, bool bParam1)//Position - 0x213A
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_64(-1))
			{
				if (!func_74())
				{
					return;
				}
			}
			if (!func_64(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_63() && !func_62())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_61())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_64(-1))
				{
					if (!func_57())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1836844[iVar1]), iVar0);
	}
}

int func_57()//Position - 0x21D3
{
	var uVar0;
	
	if (func_236(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 2))
	{
		func_58(1);
		return 1;
	}
	return 0;
}

void func_58(bool bParam0)//Position - 0x2208
{
	if (bParam0)
	{
		if (!BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 25))
		{
			func_59(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_139), 25);
	}
}

void func_59(int iParam0, int iParam1)//Position - 0x226F
{
	func_60(&(Global_1853910[iParam0 /*862*/].f_792), func_53(iParam1));
}

int func_60(var uParam0, var uParam1)//Position - 0x228E
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

int func_61()//Position - 0x22C6
{
	var uVar0;
	
	if (BitTest(Global_2793046.f_1824, 6))
	{
		return 1;
	}
	uVar0 = Global_1665626[func_85(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2793046.f_1824, 6))
		{
			MISC::SET_BIT(&(Global_2793046.f_1824), 6);
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

bool func_62()//Position - 0x2326
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_143, 7);
}

int func_63()//Position - 0x233D
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

bool func_64(int iParam0)//Position - 0x236D
{
	return func_39(123, iParam0);
}

int func_65(int iParam0)//Position - 0x237D
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
			uVar0 = func_25(func_66(iParam0), -1, 0);
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

int func_66(int iParam0)//Position - 0x25AC
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

int func_67(int iParam0)//Position - 0x265B
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
			if (!func_64(-1))
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
		case 78:
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

int func_68(int iParam0)//Position - 0x2923
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

int func_69(int iParam0, bool bParam1)//Position - 0x2954
{
	if (bParam1)
	{
	}
	return func_70(iParam0, 0);
}

int func_70(int iParam0, int iParam1)//Position - 0x2968
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
		if (Global_297011[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297011[iVar3] < iParam0)
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

int func_71(int iParam0, bool bParam1)//Position - 0x2A27
{
	if (bParam1)
	{
	}
	return func_72(iParam0);
}

int func_72(int iParam0)//Position - 0x2A3A
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1665638[func_85(-1)];
			}
			else if (func_73(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_85(-1)];
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x2A97
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_74()//Position - 0x2AB9
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

void func_75()//Position - 0x2AE9
{
	if (!func_83(1, -1))
	{
		func_81(1, -1);
	}
	if (func_225() && func_27() == 0)
	{
	}
	else
	{
		NETWORK::NETWORK_BLOCK_INVITES(false);
	}
	if (func_80(1))
	{
		NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	}
	else
	{
		NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(false);
	}
	Global_2683864.f_743 = 0;
	if (func_76())
	{
		if (!func_39(133, -1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_76()//Position - 0x2B53
{
	if (func_78() && func_77(0))
	{
		return 1;
	}
	return 0;
}

var func_77(int iParam0)//Position - 0x2B71
{
	return Global_1574538[iParam0];
}

var func_78()//Position - 0x2B81
{
	return func_77(func_79() + 1);
}

int func_79()//Position - 0x2B93
{
	return Global_1574918;
}

bool func_80(int iParam0)//Position - 0x2B9F
{
	return Global_1935368.f_16[iParam0 /*44*/].f_3;
}

void func_81(bool bParam0, int iParam1)//Position - 0x2BB3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	Global_1665487 = 0;
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = func_82(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_82(iParam1);
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
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			func_33(121, 0, iParam1, 1);
			func_33(122, 0, iParam1, 1);
			func_33(125, 0, iParam1, 1);
			func_24(1304, 0, iParam1, 1, 0);
			func_24(7236, 0, iParam1, 1, 0);
			break;
	}
}

int func_82(int iParam0)//Position - 0x2C9B
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_79();
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

bool func_83(int iParam0, int iParam1)//Position - 0x2CFE
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	iVar0 = func_82(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D27
{
	int iVar0;
	
	iVar0 = Global_2805029[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_85(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_85(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_85(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_85(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_85(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_85(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_85(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_85(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_85(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_85(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_85(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_85(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_85(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_85(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_85(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_85(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_85(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_85(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_85(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_85(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_85(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_85(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_85(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_85(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851325[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851325[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851325[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851325[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851504[func_85(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_85(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_85(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_85(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_85(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_85(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_85(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_85(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851413[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851413[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851413[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851413[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851413[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851507[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851507[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851507[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851507[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851507[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851523[0 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851523[1 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851523[2 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851523[3 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851523[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851413[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851325[4 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851539[func_85(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851548[func_85(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851542[func_85(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851551[func_85(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851545[func_85(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851554[func_85(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851557[func_85(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851413[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851325[5 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851413[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851325[6 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851413[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851325[7 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851413[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851325[8 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851413[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851325[9 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851413[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851325[10 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851413[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851325[11 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851413[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851325[12 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851413[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851325[13 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851413[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851325[14 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851413[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851325[15 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851413[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851325[16 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851325[17 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851325[18 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851325[19 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851325[20 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851560[func_85(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851563[func_85(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851566[func_85(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851569[func_85(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851572[func_85(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851575[func_85(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851578[func_85(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851581[func_85(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851584[func_85(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851587[func_85(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851590[func_85(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851593[func_85(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851596[func_85(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851599[func_85(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851325[21 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851413[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851325[22 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851413[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851325[23 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851325[24 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851325[25 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851413[27 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851325[26 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851413[28 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851325[27 /*3*/][func_85(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_85(int iParam0)//Position - 0x3859
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
		if (iVar1 > -1)
		{
			Global_2804741 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804741 = 1;
		}
	}
	return iVar0;
}

int func_86()//Position - 0x388D
{
	if (BitTest(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

int func_87()//Position - 0x38A9
{
	switch (iLocal_262)
	{
		case 0:
			if (!BitTest(uLocal_434, 18))
			{
				if (!PED::IS_PED_INJURED(iLocal_263))
				{
					iLocal_436 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_263);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_436, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_436, "FM_LEST_BLP" /* GXT: Lester */);
					func_136("FM_LEST_GTL" /* GXT: ~s~Go to ~b~Lester. */, 0);
					MISC::SET_BIT(&uLocal_434, 18);
				}
			}
			if (!BitTest(uLocal_434, 20))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_263))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1272.7472f, -1715.2231f, 53.45897f, 1273.7319f, -1717.4268f, 55.70897f, 2f, false, true, 0))
						{
							iLocal_266 = PED::CREATE_SYNCHRONIZED_SCENE(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_263, iLocal_266, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1000f, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_265, iLocal_266, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1000f);
							MISC::SET_BIT(&uLocal_434, 20);
						}
					}
				}
			}
			if (!BitTest(uLocal_434, 3))
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_435, 8);
				MISC::SET_BIT(&uLocal_434, 3);
			}
			else if (!BitTest(uLocal_434, 10))
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
					MISC::SET_BIT(&uLocal_434, 10);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1275.0946f, -1715.7693f, 53.70897f, 1274.3821f, -1714.2185f, 56.02147f, 1.375f, false, true, 0))
				{
					if (BitTest(uLocal_434, 10))
					{
						iLocal_262++;
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
				func_135(1);
				CUTSCENE::START_CUTSCENE(0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				func_126(PLAYER::PLAYER_ID(), 0, 32772, 0);
				func_122(0);
				iLocal_262++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_118();
				iLocal_262++;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_117();
			}
			else
			{
				iLocal_262++;
			}
			break;
		
		case 4:
			if (iLocal_440)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					iLocal_440 = 0;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_90(1, 1, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (BitTest(uLocal_434, 25))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				}
				if (iLocal_439 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_439);
				}
				MISC::CLEAR_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
				func_88();
				iLocal_262++;
			}
			break;
		
		case 5:
			return 1;
			break;
	}
	if (!BitTest(uLocal_434, 11))
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
				MISC::SET_BIT(&uLocal_434, 11);
			}
		}
	}
	if (!BitTest(uLocal_434, 26))
	{
		if (iLocal_262 > 2)
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					MISC::SET_BIT(&uLocal_434, 26);
				}
			}
		}
	}
	if (BitTest(uLocal_434, 19))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	}
	return 0;
}

void func_88()//Position - 0x3C6D
{
	int iVar0;
	
	iVar0 = func_89(53);
	Global_2645068[iVar0 /*83*/] = 53;
	StringCopy(&(Global_2645068[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_89(int iParam0)//Position - 0x3C99
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645068[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645068[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_90(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3CE6
{
	func_115();
	if (bParam0)
	{
		func_113(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	func_110();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	func_106(0, 1, 1, 0, 0, bParam2, 0);
	func_105();
	func_104(12, 0, -1);
	func_103(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_102();
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
	func_135(0);
	if (((((func_225() == 0 && func_101() == 0) && iParam1) && !func_99(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_97())
	{
		func_126(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2672505.f_3542 = 0;
	func_91();
}

void func_91()//Position - 0x3DB8
{
	bool bVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_185(&Global_2802590))
	{
		if (!func_184(&Global_2802590, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_96())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_95(&Global_2802590, 1, 0);
				}
				else if (!func_93(PLAYER::PLAYER_ID(), 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 0)
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			else
			{
				func_95(&Global_2802590, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_183(&Global_2802590);
		}
	}
	if (Global_2802594 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2802594, bVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
				if (func_4(iVar1, 1, 1))
				{
					func_92(iVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_92(int iParam0)//Position - 0x3EC2
{
	if (BitTest(Global_2802594, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_184(&(Global_2802595[iParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(iParam0))
		{
			if (!func_96())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_95(&(Global_2802595[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_93(iParam0, 0))
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
				func_95(&(Global_2802595[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_183(&(Global_2802595[iParam0 /*2*/]));
			MISC::CLEAR_BIT(&Global_2802594, iParam0);
		}
	}
}

bool func_93(int iParam0, int iParam1)//Position - 0x3F91
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_94(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_94(int iParam0, bool bParam1)//Position - 0x3FDC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1575040[iVar1] == 1)
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

void func_95(var uParam0, bool bParam1, bool bParam2)//Position - 0x401E
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

int func_96()//Position - 0x405B
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_97()//Position - 0x4079
{
	if (func_98() == 0)
	{
		return 1;
	}
	return 0;
}

int func_98()//Position - 0x408E
{
	return Global_1574632.f_18;
}

int func_99(int iParam0)//Position - 0x409C
{
	if (func_93(iParam0, 0))
	{
		return 1;
	}
	if (func_100())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_100()//Position - 0x40DB
{
	return BitTest(Global_2621446, 3);
}

int func_101()//Position - 0x40E9
{
	return BitTest(Global_2683864, 7);
}

void func_102()//Position - 0x40F7
{
	Global_23131.f_5 = 0;
}

void func_103(int iParam0)//Position - 0x4105
{
	Global_2793046.f_4628 = iParam0;
}

void func_104(int iParam0, bool bParam1, int iParam2)//Position - 0x4116
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1653913.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1653913.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1653913.f_1046), iParam0);
			}
			break;
	}
}

void func_105()//Position - 0x4165
{
	func_103(1);
	func_104(4, 0, -1);
	func_104(6, 0, -1);
	func_104(7, 0, -1);
	func_104(3, 0, -1);
	func_104(1, 0, -1);
	func_104(2, 0, -1);
	func_104(11, 0, -1);
	func_104(13, 0, -1);
	func_104(14, 0, -1);
	func_104(16, 0, -1);
}

void func_106(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x41BC
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_135(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_109())
			{
				Global_20383.f_1 = 3;
			}
			Global_21725 = 5;
		}
		func_108(1, bParam3, iParam2, 0);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_135(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_108(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_99(PLAYER::PLAYER_ID())) && !func_93(PLAYER::PLAYER_ID(), 0)) && !func_107()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_99(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78556 = 0;
	}
}

bool func_107()//Position - 0x4309
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_108(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x4323
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

int func_109()//Position - 0x4356
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_110()//Position - 0x437D
{
	func_111(0);
}

void func_111(bool bParam0)//Position - 0x438A
{
	if (bParam0)
	{
		func_112();
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8254, 16);
		}
		Global_20383.f_1 = 1;
		if (func_231(0))
		{
			func_122(0);
		}
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
		{
			Global_20383.f_1 = 3;
		}
	}
}

void func_112()//Position - 0x43ED
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}
}

void func_113(bool bParam0)//Position - 0x4416
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112300)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, bParam0);
		func_114(iVar0);
		iVar0++;
	}
}

void func_114(int iParam0)//Position - 0x4444
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112300[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
}

void func_115()//Position - 0x44AE
{
	if (!Global_1574747)
	{
		return;
	}
	func_116();
}

void func_116()//Position - 0x44C5
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_117()//Position - 0x44E4
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

void func_118()//Position - 0x451A
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(iLocal_436))
	{
		HUD::REMOVE_BLIP(&iLocal_436);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		iVar0 = iLocal_263;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		iVar0 = iLocal_265;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	func_12();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_119(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::REMOVE_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
}

int func_119(int iParam0)//Position - 0x457B
{
	if (!func_121(iParam0))
	{
		return func_120(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_120(int iParam0)//Position - 0x45A1
{
	return Global_2028[iParam0 /*29*/];
}

bool func_121(int iParam0)//Position - 0x45B0
{
	return iParam0 < 3;
}

void func_122(int iParam0)//Position - 0x45BC
{
	if (func_125())
	{
		return;
	}
	if (Global_20584)
	{
		if (func_124())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
		}
	}
	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8254, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21725 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 30);
	}
	if (!func_109())
	{
		Global_20383.f_1 = 3;
	}
}

void func_123(bool bParam0, bool bParam1)//Position - 0x4646
{
	if (bParam0)
	{
		if (func_231(0))
		{
			Global_20584 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
			}
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == 1)
	{
		Global_20584 = 0;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
}

bool func_124()//Position - 0x46BA
{
	return BitTest(Global_1962996, 5);
}

bool func_125()//Position - 0x46C8
{
	return BitTest(Global_1962996, 19);
}

void func_126(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x46D7
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
	if (func_134())
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
		if (!func_97())
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
				else if (bVar14 || (!func_93(PLAYER::PLAYER_ID(), 0) && !func_100()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657589[iParam0 /*466*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_131(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_130(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_129();
					func_128();
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
				Global_2657589[iParam0 /*466*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635559.f_2681)
				{
					Global_2635559.f_2681 = 0;
				}
			}
			else
			{
				if (!func_130(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_127(Global_4718592.f_166301))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575035)
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

bool func_127(int iParam0)//Position - 0x4B65
{
	return iParam0 == 17;
}

void func_128()//Position - 0x4B72
{
	struct<3> Var0;
	
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = 0;
	Global_2672505.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1031 = -1;
	Global_2672505.f_1032 = 0;
	Global_2635559.f_2692 = { Var0 };
}

void func_129()//Position - 0x4BBF
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
}

int func_130(int iParam0)//Position - 0x4BFD
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

void func_131(bool bParam0, int iParam1, int iParam2)//Position - 0x4C2E
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
				func_133();
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
		if (func_93(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_132(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_132(int iParam0, bool bParam1)//Position - 0x4CFE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_133()//Position - 0x4D1A
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

int func_134()//Position - 0x4D72
{
	if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684801.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)//Position - 0x4DA3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8253, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8253, 13);
	}
}

void func_136(char* sParam0, bool bParam1)//Position - 0x4DC6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_140(sParam0))
	{
		return;
	}
	func_13();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_139();
	func_138(bParam1);
	func_137();
}

void func_137()//Position - 0x4E31
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_138(bool bParam0)//Position - 0x4E44
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_139()//Position - 0x4E6A
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_140(char* sParam0)//Position - 0x4E8F
{
	if (!func_18())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_141(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_141(char* sParam0)//Position - 0x4ED3
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

int func_142()//Position - 0x4F05
{
	switch (iLocal_441)
	{
		case 0:
			if (!BitTest(uLocal_434, 25))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				MISC::SET_BIT(&uLocal_434, 25);
			}
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_442) && func_194())
			{
				func_175();
				func_174();
				func_171(0, 0, 1, 0, 1, 1, 0);
				func_126(PLAYER::PLAYER_ID(), 0, 8196, 0);
				NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				func_168(1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_264))
				{
					MISC::CLEAR_AREA(1273.8845f, -1718.0037f, 53.7715f, 3f, true, false, false, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_264);
					ENTITY::SET_ENTITY_COORDS(iLocal_264, 1275.2563f, -1722.3683f, 53.655f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_264, 12.6638f);
					PED::FORCE_PED_MOTION_STATE(iLocal_264, joaat("MotionState_Walk"), false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_264, joaat("WEAPON_UNARMED"), true);
				}
				iLocal_443 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_ACTIVE(iLocal_443, true);
				CAM::SET_CAM_PARAMS(iLocal_443, 1276.4088f, -1719.9183f, 56.1054f, -29.932f, 0f, 137.9132f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_442, "SET_DETAILS");
				func_167("FM_LEST_CAM" /* GXT: ~s~CAM: 02 */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_442, "SET_LOCATION");
				func_167("FM_LEST_CAM2" /* GXT: ~s~FRONT DOOR */);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam");
				}
				MISC::SET_BIT(&uLocal_434, 15);
				func_7(&uLocal_444, 0, 0);
				STREAMING::REQUEST_MODEL(func_119(12));
				STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
				STREAMING::REQUEST_ANIM_DICT("MissLester1ALeadInOut");
				MISC::SET_BIT(&uLocal_434, 23);
				if (!BitTest(uLocal_434, 17))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 0, false, false);
						MISC::SET_BIT(&uLocal_434, 17);
					}
				}
				iLocal_441 = 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (!BitTest(uLocal_434, 21))
				{
					if (func_184(&uLocal_444, 1000, 0))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_264, 1276.4088f, -1719.9183f, 56.1054f, -1, 0, 2);
						MISC::SET_BIT(&uLocal_434, 21);
					}
				}
			}
			if (func_184(&uLocal_444, 1500, 0))
			{
				if (BitTest(uLocal_434, 17))
				{
					if (!PED::IS_PED_INJURED(iLocal_264))
					{
						if (!PED::IS_PED_INJURED(iLocal_263))
						{
							if (func_148(&uLocal_267, "FM_1AU", "FM_LESTCUT", 7, 0, 0, 0))
							{
								func_183(&uLocal_444);
								func_7(&uLocal_444, 0, 0);
								iLocal_441++;
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (!func_235())
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_264, 104, true);
					MISC::SET_BIT(&uLocal_434, 22);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_264);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_264, 1273.5762f, -1718.4594f, 53.7715f, 1f, 20000, 0.25f, 0, 40000f);
					func_183(&uLocal_444);
					func_7(&uLocal_444, 0, 0);
					iLocal_441++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_264))
			{
				if (func_184(&uLocal_444, 5000, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_264, 1275.1378f, -1718.4255f, 53.729942f, 1272.4507f, -1719.6267f, 55.45897f, 1.5625f, false, true, 0))
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
					func_147();
					func_90(1, 1, 0, 1);
					MISC::CLEAR_BIT(&uLocal_434, 22);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_126(PLAYER::PLAYER_ID(), 1, 0, 0);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					MISC::SET_BIT(&uLocal_434, 25);
					NETWORK::SET_STORE_ENABLED(false);
					MISC::SET_BIT(&uLocal_434, 24);
					iLocal_441 = 99;
				}
			}
			break;
		
		case 99:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 4, false, false);
				MISC::SET_BIT(&uLocal_434, 19);
				iLocal_441 = 100;
			}
			break;
		
		case 100:
			return 1;
			break;
	}
	if (BitTest(uLocal_434, 15))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_442))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_442, "SET_TIME");
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
				func_167("FM_LEST_AM" /* GXT: ~s~AM */);
			}
			else
			{
				func_167("FM_LEST_PM" /* GXT: ~s~PM */);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_442, 255, 255, 255, 255, 0);
		}
	}
	if (BitTest(uLocal_434, 22))
	{
		if (!PED::IS_PED_INJURED(iLocal_264))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_264, 104, true);
			PED::SET_PED_RESET_FLAG(iLocal_264, 60, true);
			PED::SET_PED_RESET_FLAG(iLocal_264, 342, true);
			PED::SET_PED_RESET_FLAG(iLocal_264, 348, true);
		}
	}
	if (BitTest(uLocal_434, 23))
	{
		if (func_143())
		{
			MISC::CLEAR_BIT(&uLocal_434, 23);
		}
	}
	return 0;
}

int func_143()//Position - 0x5436
{
	bool bVar0;
	
	STREAMING::REQUEST_MODEL(func_119(12));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_119(12)))
		{
			if (func_145(&iLocal_263, 12, 1276.39f, -1712.845f, 54.372f, 338.0729f, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_263, true);
				func_144(&uLocal_267, 8, iLocal_263, "Lester", 0, 1);
				PED::SET_PED_PROP_INDEX(iLocal_263, 1, 0, 0, false, 1);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s")))
		{
			iLocal_265 = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1276.39f, -1712.845f, 54.372f, false, false, false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_263))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_263))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfinale_c2leadinoutfin_c_int"))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_263))
	{
		iLocal_266 = PED::CREATE_SYNCHRONIZED_SCENE(1276.39f, -1712.845f, 54.372f, 0f, 0f, -155.52f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_263, iLocal_266, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_265, iLocal_266, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, -8f, 4, 1000f);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_266, true);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_144(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x55BF
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78558)
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

int func_145(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x565A
{
	int iVar0;
	
	if (!func_121(iParam1))
	{
		iVar0 = func_119(iParam1);
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
			func_146(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_146(var uParam0, int iParam1)//Position - 0x56E8
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
	Global_96515[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_147()//Position - 0x572E
{
	int iVar0;
	
	if (CAM::DOES_CAM_EXIST(iLocal_443))
	{
		CAM::SET_CAM_ACTIVE(iLocal_443, false);
		CAM::DESTROY_CAM(iLocal_443, false);
	}
	MISC::CLEAR_BIT(&uLocal_434, 15);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		iVar0 = iLocal_264;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_442);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
}

bool func_148(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5785
{
	func_166(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_149(sParam2, iParam3, 0);
}

int func_149(char* sParam0, int iParam1, bool bParam2)//Position - 0x57D3
{
	Global_21726 = 0;
	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = 0;
					Global_20382 = 0;
				}
				else
				{
					func_165();
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
		if (func_164(8, -1))
		{
			return 0;
		}
		Global_21801 = { Global_21795 };
		func_163();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
			if (bParam2)
			{
				func_157();
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20383.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20349 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_156())
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
				if (!Global_78558)
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
			if (func_109())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
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
				if (BitTest(Global_8253, 9))
				{
					return 0;
				}
			}
			func_155();
			Global_21735 = bParam2;
		}
		Global_21727 = iParam1;
		StringCopy(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_154();
		func_150();
		return 1;
	}
	if (Global_21725 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21727 || iParam1 == Global_21727)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_165();
	}
	return 0;
}

void func_150()//Position - 0x5AA1
{
	if (!func_151())
	{
		return;
	}
	if (Global_21731)
	{
		MemCopy(&(Global_1977511.f_1), {Global_21344}, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}
}

int func_151()//Position - 0x5AD8
{
	if (!Global_262145.f_28878 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78558)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_153())
	{
		return 0;
	}
	if (func_152(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_152(int iParam0)//Position - 0x5B3B
{
	return func_10(iParam0, 20);
}

int func_153()//Position - 0x5B4B
{
	return -1;
}

void func_154()//Position - 0x5B54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20593[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
}

void func_155()//Position - 0x5B85
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
}

int func_156()//Position - 0x5C1A
{
	int iVar0;
	int iVar1;
	
	if (Global_78558)
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

void func_157()//Position - 0x5CB3
{
	if (func_162(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
			{
				Global_20383 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
			{
				Global_20383 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
			{
				Global_20383 = 2;
			}
			else
			{
				Global_20383 = 0;
			}
		}
	}
	else
	{
		Global_20383 = func_158();
		if (Global_20383 == 145)
		{
			Global_20383 = 3;
		}
		if (Global_78558)
		{
			Global_20383 = 3;
		}
		if (Global_20383 > 3)
		{
			Global_20383 = 3;
		}
	}
}

var func_158()//Position - 0x5D55
{
	func_159();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_159()//Position - 0x5D6E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_161(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_160(PLAYER::PLAYER_PED_ID());
			if (func_121(iVar0) && (!func_162(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_121(Global_113648.f_2365.f_539.f_4321))
				{
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
				}
				Global_113648.f_2365.f_539.f_4323 = iVar0;
				Global_113648.f_2365.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
			{
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
			}
			return;
		}
	}
	Global_113648.f_2365.f_539.f_4321 = 145;
}

int func_160(int iParam0)//Position - 0x5E6B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_161(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_161(int iParam0)//Position - 0x5EA8
{
	if (func_121(iParam0))
	{
		return func_120(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_162(int iParam0)//Position - 0x5ECD
{
	return Global_43257 == iParam0;
}

void func_163()//Position - 0x5EDB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21014[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21014[iVar0 /*10*/].f_1), "", 24);
		Global_21014[iVar0 /*10*/].f_7 = 0;
		Global_21014[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
}

bool func_164(int iParam0, int iParam1)//Position - 0x5F32
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

void func_165()//Position - 0x5F6A
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9) || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}
}

void func_166(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x5FC1
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	StringCopy(&Global_21795, sParam2, 24);
	Global_22714 = uParam5;
	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}
}

void func_167(char* sParam0)//Position - 0x6017
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_168(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6029
{
	func_170();
	func_113(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_106(1, 1, 1, 0, 0, 0, bParam2);
	func_169();
	func_104(12, 1, -1);
	func_103(0);
	CAM::SET_WIDESCREEN_BORDERS(true, -1);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_113(1);
	func_135(1);
	Global_2672505.f_3542 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_169()//Position - 0x6096
{
	func_103(0);
	func_104(4, 1, -1);
	func_104(6, 1, -1);
	func_104(7, 1, -1);
	func_104(3, 1, -1);
	func_104(1, 1, -1);
	func_104(2, 1, -1);
	func_104(11, 1, -1);
	func_104(13, 1, -1);
	func_104(14, 1, -1);
	func_104(16, 1, -1);
}

void func_170()//Position - 0x60ED
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

void func_171(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6116
{
	int iVar0;
	
	func_173();
	func_111(1);
	func_103(1);
	func_104(12, 1, -1);
	func_172();
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
	func_126(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_172()//Position - 0x61A5
{
	Global_23131.f_5 = 1;
}

void func_173()//Position - 0x61B3
{
	func_122(0);
	func_111(1);
}

void func_174()//Position - 0x61C5
{
	Global_2672505.f_947.f_9 = 1;
}

void func_175()//Position - 0x61D7
{
	if (func_181() || func_180())
	{
		func_179();
		func_176();
	}
}

void func_176()//Position - 0x61F8
{
	if ((!func_178() && !func_177()) && Global_2684800)
	{
		Global_4718592.f_113724 = 0;
	}
}

bool func_177()//Position - 0x6226
{
	return Global_2683864.f_691;
}

bool func_178()//Position - 0x6235
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

void func_179()//Position - 0x624C
{
	Global_2683864.f_756 = 1;
}

var func_180()//Position - 0x625C
{
	return Global_2683864.f_735;
}

var func_181()//Position - 0x626B
{
	return BitTest(Global_2683864.f_2, 11);
}

int func_182()//Position - 0x627C
{
	switch (iLocal_262)
	{
		case 0:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_262++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_117();
			}
			else
			{
				iLocal_262++;
			}
			break;
		
		case 2:
			if (iLocal_440)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					iLocal_440 = 0;
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				func_90(1, 1, 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (iLocal_439 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_439);
				}
				MISC::CLEAR_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
				iLocal_262++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	if (!BitTest(uLocal_434, 11))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1275.2192f, -1722.5026f, 53.655f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 228.4235f);
				MISC::SET_BIT(&uLocal_434, 11);
			}
		}
	}
	return 0;
}

void func_183(var uParam0)//Position - 0x639C
{
	uParam0->f_1 = 0;
}

int func_184(var uParam0, int iParam1, bool bParam2)//Position - 0x63A9
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

bool func_185(var uParam0)//Position - 0x6407
{
	return uParam0->f_1;
}

bool func_186(char* sParam0)//Position - 0x6413
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_187(char* sParam0, int iParam1)//Position - 0x6426
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_188(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x643D
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_235())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_193())
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_228(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_192(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_191())
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
	if (Global_1836367)
	{
		return 0;
	}
	if (func_190())
	{
		return 0;
	}
	if (func_177())
	{
		return 0;
	}
	if (func_178())
	{
		return 0;
	}
	if (Global_75693)
	{
		return 0;
	}
	if (Global_2803648)
	{
		return 0;
	}
	if (func_189())
	{
		return 0;
	}
	return 1;
}

bool func_189()//Position - 0x6536
{
	return Global_2764907;
}

bool func_190()//Position - 0x6542
{
	return Global_2683864.f_845;
}

bool func_191()//Position - 0x6551
{
	return Global_2672505.f_2838.f_582;
}

int func_192(int iParam0)//Position - 0x6563
{
	if (Global_2657589[iParam0 /*466*/].f_218 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_193()//Position - 0x657F
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

int func_194()//Position - 0x6594
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			iLocal_264 = PED::CREATE_PED(4, iVar0, 1273.8271f, -1717.8727f, 53.7715f, 19.2225f, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_264, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_264, true);
			PED::CLONE_PED_TO_TARGET(PLAYER::PLAYER_PED_ID(), iLocal_264);
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
	return 1;
}

void func_195()//Position - 0x6622
{
	NETWORK::NETWORK_BLOCK_INVITES(true);
	func_196(1, -1);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	if (func_39(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2683864.f_743 = 1;
}

void func_196(bool bParam0, int iParam1)//Position - 0x6655
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_79();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			break;
		
		default:
			iVar1 = func_82(iParam1);
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
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_197(bool bParam0, bool bParam1)//Position - 0x66E6
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
	}
}

int func_198()//Position - 0x6743
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (bLocal_433)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1274.5474f, -1720.6945f, 53.6807f) > 500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				iVar0 = iLocal_264;
				ENTITY::DELETE_ENTITY(&iVar0);
			}
			return 0;
		}
		func_194();
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.8043f, -1722.4661f, 53.217487f, 1277.1472f, -1720.779f, 56.092487f, 3.4375f, false, true, 0))
	{
		return 0;
	}
	return 1;
}

int func_199(bool bParam0)//Position - 0x67DA
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (((((((((func_218(iVar0) || func_217(iVar0)) || func_216(iVar0)) || func_215(iVar0)) || func_214(iVar0)) || func_213(iVar0)) || func_212(iVar0)) || func_211(iVar0)) || func_210(iVar0)) || (func_207(iVar0) && func_206(iVar0)))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_205(iVar0))
		{
			return 1;
		}
	}
	else if (func_200(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x688F
{
	if (((func_205(iParam0) || func_204(iParam0)) || func_203(iParam0)) || func_201(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x68C9
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 19;
			}
		}
	}
	return 0;
}

int func_202(int iParam0)//Position - 0x6910
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

int func_203(int iParam0)//Position - 0x6DC4
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 15;
			}
		}
	}
	return 0;
}

int func_204(int iParam0)//Position - 0x6E0B
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 16;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)//Position - 0x6E52
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 14;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)//Position - 0x6E99
{
	if (iParam0 != func_153())
	{
		return BitTest(Global_2657589[iParam0 /*466*/].f_321.f_5, 26);
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x6EBF
{
	if (func_209(iParam0) && func_208(iParam0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x6EE3
{
	if (iParam0 == func_153())
	{
		return iParam0;
	}
	return Global_2657589[iParam0 /*466*/].f_321.f_10;
}

int func_209(int iParam0)//Position - 0x6F07
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_153())
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 25;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x6F67
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 26;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)//Position - 0x6FAE
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 21;
			}
		}
	}
	return 0;
}

int func_212(int iParam0)//Position - 0x6FF5
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 24;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x703C
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x7083
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 23;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x70CA
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 11;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x7111
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1)
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0x7158
{
	if (iParam0 != func_153())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2657589[iParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[iParam0 /*466*/].f_321.f_10 != func_153())
			{
				return func_202(Global_2657589[iParam0 /*466*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

var func_218(int iParam0)//Position - 0x71B8
{
	return func_219(&(Global_2657589[iParam0 /*466*/].f_445), 0);
}

var func_219(var uParam0, int iParam1)//Position - 0x71D1
{
	return BitTest(*uParam0, iParam1);
}

var func_220()//Position - 0x71DF
{
	return Global_1947731;
}

int func_221()//Position - 0x71EB
{
	int iVar0;
	
	return 0;
	if (func_222(9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_222(int iParam0)//Position - 0x7205
{
	var uVar0;
	
	if (Global_2694560)
	{
		return 1;
	}
	if ((iParam0 >= 0 && iParam0 <= 16) && func_224())
	{
		return 1;
	}
	else if ((iParam0 >= 17 && iParam0 <= 31) && func_223())
	{
		return 1;
	}
	uVar0 = func_25(2481, -1, 0);
	return BitTest(uVar0, iParam0);
}

var func_223()//Position - 0x7268
{
	return BitTest(func_25(2482, -1, 0), 2);
}

var func_224()//Position - 0x727B
{
	return BitTest(func_25(2482, -1, 0), 1);
}

bool func_225()//Position - 0x728E
{
	return Global_1575060;
}

int func_226()//Position - 0x729A
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_193;
}

bool func_227()//Position - 0x72AF
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 0);
}

int func_228(int iParam0, bool bParam1, bool bParam2)//Position - 0x72C8
{
	if (bParam1)
	{
		if (func_229(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_229(int iParam0)//Position - 0x72FA
{
	return func_230(iParam0);
}

var func_230(int iParam0)//Position - 0x7308
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_231(int iParam0)//Position - 0x731F
{
	if (iParam0 == 1)
	{
		if (Global_20383.f_1 > 3)
		{
			if (BitTest(Global_8253, 14))
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
	if (Global_20383.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_232()//Position - 0x7376
{
	return func_233();
}

bool func_233()//Position - 0x7382
{
	return Global_1649046.f_40 == 3;
}

int func_234()//Position - 0x7392
{
	if (Global_21725 == 4)
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

int func_235()//Position - 0x73B7
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x73D9
{
	if (func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	return BitTest(Global_1853910[iParam0 /*862*/].f_139, 25);
}

int func_237()//Position - 0x7405
{
	return Local_85.f_0;
}

int func_238(int iParam0)//Position - 0x740F
{
	return Local_165[iParam0 /*3*/];
}

void func_239(var uParam0)//Position - 0x741D
{
	if (func_241(1))
	{
		if (HUD::DOES_BLIP_EXIST(*uParam0) && !HUD::IS_BLIP_SHORT_RANGE(*uParam0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, true);
			HUD::SET_BLIP_MARKER_LONG_DISTANCE(*uParam0, 0);
			HUD::SET_BLIP_PRIORITY(*uParam0, 5);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam0) && (HUD::IS_BLIP_SHORT_RANGE(*uParam0) && !func_240()))
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, false);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(*uParam0, 1);
	}
}

int func_240()//Position - 0x748F
{
	return 0;
}

bool func_241(bool bParam0)//Position - 0x7498
{
	return func_242(PLAYER::PLAYER_ID(), bParam0);
}

bool func_242(int iParam0, bool bParam1)//Position - 0x74AA
{
	if (!bParam1)
	{
		if (func_243(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_153();
}

int func_243(int iParam0)//Position - 0x74D5
{
	if (iParam0 != func_153())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_153())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_244()//Position - 0x750A
{
	int iVar0;
	
	func_12();
	func_197(12, 0);
	func_75();
	if (iLocal_439 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_439);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
	{
		iVar0 = iLocal_264;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_1935132))
	{
		HUD::SET_BLIP_ROUTE(Global_1935132, false);
		HUD::REMOVE_BLIP(&Global_1935132);
	}
	if (BitTest(uLocal_434, 17))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(208246292))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(208246292, 4, false, false);
		}
	}
	if (BitTest(uLocal_434, 19))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	}
	if (func_247())
	{
		func_246();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::CLEAR_BIT(&(Local_165[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
	}
	if (BitTest(uLocal_434, 25))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	if (BitTest(uLocal_434, 24))
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	func_118();
	CUTSCENE::REMOVE_CUTSCENE();
	func_245();
}

void func_245()//Position - 0x75EF
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_246()//Position - 0x75FB
{
	Global_2672505.f_947.f_9 = 0;
}

bool func_247()//Position - 0x760D
{
	return Global_2672505.f_947.f_9;
}

int func_248()//Position - 0x761E
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_254())
	{
		return 1;
	}
	if (Global_2696917)
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	if (func_252(159))
	{
		if (!func_251())
		{
			return 1;
		}
	}
	if (func_252(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_249() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_249()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_249()//Position - 0x76A2
{
	switch (func_27())
	{
		case 0:
			return func_250();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_250()//Position - 0x76D5
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_251()//Position - 0x76F9
{
	return Global_2683864.f_698;
}

int func_252(int iParam0)//Position - 0x7708
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_253()//Position - 0x771F
{
	return Global_2694526;
}

bool func_254()//Position - 0x772B
{
	return Global_2683864.f_693;
}

void func_255()//Position - 0x773A
{
	SYSTEM::WAIT(0);
}

void func_256(struct<21> Param0)//Position - 0x7747
{
	func_260(func_261(Param0.f_0), Param0);
	func_258(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_85, 79, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_165, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_257())
	{
		func_244();
	}
}

int func_257()//Position - 0x7789
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
		if (func_254())
		{
			return 0;
		}
		if (func_252(157))
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

int func_258(int iParam0, int iParam1, bool bParam2)//Position - 0x77E2
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_245();
			}
			else
			{
				return 0;
			}
		}
		if (!func_259(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_245();
					}
					else
					{
						return 0;
					}
				}
				if (func_254())
				{
					if (!bParam2)
					{
						func_245();
					}
					else
					{
						return 0;
					}
				}
				if (func_252(157))
				{
					if (!bParam2)
					{
						func_245();
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
					func_245();
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
				func_245();
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
			func_245();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_259(bool bParam0)//Position - 0x78F8
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_260(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x7909
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_245();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_261(int iParam0)//Position - 0x7928
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
		
		case 173:
			return 32;
		
		case 174:
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
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_262(func_263(iParam0, 1)))
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

int func_262(int iParam0)//Position - 0x80A9
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
		
		default:
	}
	return -1;
}

int func_263(int iParam0, bool bParam1)//Position - 0x8271
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

