#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<3> Local_41 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50[9];
	float fLocal_78[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	var uLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145[2] = { 0, 0 };
	int iLocal_148[4] = { 0, 0, 0, 0 };
	int iLocal_153[4] = { 0, 0, 0, 0 };
	int iLocal_158[5] = { 0, 0, 0, 0, 0 };
	int iLocal_164[4] = { 0, 0, 0, 0 };
	int iLocal_169[4] = { 0, 0, 0, 0 };
	int iLocal_174[4] = { 0, 0, 0, 0 };
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_192[4] = { 0, 0, 0, 0 };
	int iLocal_197[4] = { 0, 0, 0, 0 };
	var uLocal_202[4] = { 0, 0, 0, 0 };
	var uLocal_207[4] = { 0, 0, 0, 0 };
	int iLocal_212 = 0;
	int iLocal_213[5] = { 0, 0, 0, 0, 0 };
	int iLocal_219[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	struct<3> Local_244[5];
	int iLocal_260 = 0;
	bool bLocal_261 = 0;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 16;
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
	var uLocal_433 = 0;
	struct<3> Local_434 = { 0, 0, 0 } ;
	struct<3> Local_437[4];
	struct<3> Local_450 = { 0, 0, 0 } ;
	int iLocal_453 = 0;
	bool bLocal_454 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_232 = { -1635.6484f, 4737.8013f, 52.4304f };
	Local_235 = { -1640.7454f, 4696.386f, 39.279f };
	Local_47 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_179();
	}
	if (func_137(Local_47, -1, 0, 0, 0))
	{
		func_134(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.5402f, 4934.923f, 114.2284f, 100f, 100f, 100f, false, true, 0)) || iLocal_45 == 2)
		{
			if (!func_133())
			{
				if (func_132())
				{
					func_179();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DGW", 0);
			switch (iLocal_45)
			{
				case 0:
					if (iLocal_453)
					{
						iLocal_45 = 1;
					}
					else
					{
						if (func_120())
						{
							func_179();
						}
						func_117();
					}
					break;
				
				case 1:
					func_116();
					func_105();
					break;
				
				case 2:
					switch (iLocal_44)
					{
						case 0:
							func_116();
							iLocal_44 = 1;
							break;
						
						case 1:
							func_116();
							func_80();
							if (iLocal_46 >= 6)
							{
								if (!func_79())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_265)
										{
											func_78(&(iLocal_148[iVar0]), &(iLocal_192[iVar0]), &(iLocal_174[iVar0]), &(uLocal_202[iVar0]));
											func_73(iLocal_174[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 0f, 0f, 1000, 0f);
											func_73(iLocal_174[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 2f, 0f, 1000, 0f);
											func_68(&(iLocal_148[iVar0]), &(iLocal_192[iVar0]), &(iLocal_174[iVar0]), &(uLocal_202[iVar0]));
										}
										else if (bLocal_262)
										{
											func_78(&(iLocal_148[iVar0]), &(iLocal_192[iVar0]), &(iLocal_164[iVar0]), &(uLocal_202[iVar0]));
											func_73(iLocal_164[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 0f, 0f, 1000, 0f);
											func_73(iLocal_164[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 5f, 0f, 1000, 0f);
											func_68(&(iLocal_148[iVar0]), &(iLocal_192[iVar0]), &(iLocal_164[iVar0]), &(uLocal_202[iVar0]));
										}
										else if (bLocal_263)
										{
											func_78(&(iLocal_153[iVar0]), &(iLocal_197[iVar0]), &(iLocal_169[iVar0]), &(uLocal_207[iVar0]));
											func_73(iLocal_169[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 0f, 0f, 1000, 0f);
											func_73(iLocal_169[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_106, &uLocal_109, &Local_111, &fLocal_110, &uLocal_114, 0f, 5f, 0f, 1000, 0f);
											func_68(&(iLocal_153[iVar0]), &(iLocal_197[iVar0]), &(iLocal_169[iVar0]), &(uLocal_207[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_45();
								}
							}
							if (((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_232, 100f, 100f, 100f, false, true, 0)) && iLocal_46 < 2)
							{
								func_45();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_179();
		}
	}
}

void func_1()//Position - 0x3B1
{
	int iVar0;
	
	if (iLocal_453 && !iLocal_260)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(iLocal_179))
		{
			HUD::REMOVE_BLIP(&iLocal_179);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_180))
		{
			HUD::REMOVE_BLIP(&iLocal_180);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_192[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_192[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_202[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_202[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_148[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_148[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_264 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_197[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_197[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_207[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_207[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_153[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_153[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_264 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
		}
		if (bLocal_264)
		{
			func_3(func_39(), 1, 25000);
		}
		iLocal_260 = 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(Local_232, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), Local_232) > 300f)
	{
		func_179();
	}
}

Vector3 func_2(int iParam0)//Position - 0x554
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x567
{
	if (func_38(iParam0) == 3)
	{
		return 0;
	}
	if (func_38(iParam0) == 4)
	{
		return 0;
	}
	return func_4(func_38(iParam0), 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x59B
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_37();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_36(99, 1);
					func_35(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_35(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_35(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_19(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_16(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_35(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_35(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_35(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_16(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_35(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_35(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_35(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_35(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_35(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_35(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_35(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_35(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_35(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_35(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_35(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_35(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_35(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_35(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_35(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_16(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_35(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_35(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_35(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_35(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_35(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_35(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_15(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_36(95, iParam3);
					break;
				
				case 1:
					func_36(97, iParam3);
					break;
				
				case 2:
					func_36(96, iParam3);
					break;
			}
			func_36(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(bVar1);
	}
	iVar5 = (Global_61212[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61212[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61212[iVar2] = 2147483647;
				}
				else
				{
					Global_61212[iVar2] = (Global_61212[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_35(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_35(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_35(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61212[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61212[iVar2];
			Global_61212[iVar2] = (Global_61212[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_2[Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114370.f_20567.f_233[iVar2 /*69*/]++;
		Global_114370.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114370.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_43922 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0xB9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114370.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114370.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114370.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114370.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114370.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114370.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114370.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114370.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114370.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114370.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114370.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114370.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114370.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114370.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114370.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114370.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114370.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114370.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114370.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)//Position - 0xE1C
{
	int iVar0;
	
	iVar0 = Global_61212[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_7(bool bParam0)//Position - 0xE76
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_14(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_14(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_14(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_14(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_10(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_10(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_10(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_10(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_10(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_10(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114370.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114370.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_9() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114370.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_9() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_8(bool bParam0)//Position - 0xFED
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_9()//Position - 0x10E0
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x10ED
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_11(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_11(int iParam0, var uParam1)//Position - 0x111B
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_12(uParam1));
}

int func_12(var uParam0)//Position - 0x1130
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
		if (iVar1 > -1)
		{
			Global_2750546 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750546 = 1;
		}
	}
	return iVar0;
}

int func_13()//Position - 0x1164
{
	return Global_1574925;
}

void func_14(int iParam0, bool bParam1, int iParam2)//Position - 0x1170
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_15(int iParam0)//Position - 0x118E
{
	func_36(93, iParam0);
	func_36(29, iParam0);
	func_36(30, iParam0);
}

int func_16(int iParam0)//Position - 0x11AE
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_18(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_18(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_18(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_18(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_17(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_17(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_17(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_17(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_17(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_17(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114370.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_9() /*5569*/].f_681.f_10, iParam0);
}

int func_17(int iParam0, int iParam1)//Position - 0x134E
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_11(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)//Position - 0x137D
{
	if (iParam1 == -1)
	{
		iParam1 = func_13();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_19(bool bParam0)//Position - 0x1399
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_34(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_20(27, 1);
	return 1;
}

int func_20(int iParam0, int iParam1)//Position - 0x1450
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_21(iParam0, iParam1);
}

int func_21(int iParam0, int iParam1)//Position - 0x146B
{
	if (func_33(14) && !func_32(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33079 != 0 && !Global_79248)
	{
		return 0;
	}
	if (func_31(&Global_4543283))
	{
		if (func_29(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_22(&Global_4543283, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_22(var uParam0, int iParam1)//Position - 0x1508
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_33(14) && !func_32(iParam1))
	{
		return 0;
	}
	if (func_29(uParam0, iParam1))
	{
		return 0;
	}
	if (func_28(uParam0) < 0f)
	{
		func_27(uParam0, 0);
	}
	func_25(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_23(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_23(var uParam0, int iParam1)//Position - 0x15B9
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_33(14) && !func_32(iParam1))
	{
		return 0;
	}
	if (func_29(uParam0, iParam1))
	{
		return 0;
	}
	if (func_28(uParam0) < 0f)
	{
		func_27(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_24(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_24(var uParam0, int iParam1)//Position - 0x1634
{
	return (*uParam0)[iParam1] == 78;
}

void func_25(var uParam0)//Position - 0x1645
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_26(uParam0, iVar0);
		iVar0++;
	}
	func_27(uParam0, (Global_4543282 - 0.5f));
}

void func_26(var uParam0, int iParam1)//Position - 0x1679
{
	(*uParam0)[iParam1] = 78;
}

void func_27(var uParam0, float fParam1)//Position - 0x1689
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_28(var uParam0)//Position - 0x16A6
{
	return uParam0->f_80;
}

bool func_29(var uParam0, int iParam1)//Position - 0x16B2
{
	return func_30(uParam0, iParam1) != -1;
}

int func_30(var uParam0, int iParam1)//Position - 0x16C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_31(var uParam0)//Position - 0x16F1
{
	return uParam0->f_79 == 1;
}

int func_32(int iParam0)//Position - 0x16FF
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_33(int iParam0)//Position - 0x174F
{
	return Global_43922 == iParam0;
}

int func_34(int iParam0, int iParam1)//Position - 0x175D
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_35(int iParam0, int iParam1)//Position - 0x17AE
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_36(int iParam0, int iParam1)//Position - 0x17D1
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59780[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59780[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59780[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_37()//Position - 0x182E
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[0] == iVar0)
		{
			Global_61212[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[1] == iVar0)
		{
			Global_61212[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61212[2] == iVar0)
		{
			Global_61212[2] = iVar0;
		}
	}
}

int func_38(int iParam0)//Position - 0x18A3
{
	return Global_2139[iParam0 /*29*/].f_17;
}

int func_39()//Position - 0x18B4
{
	func_40();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_40()//Position - 0x18CD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_33(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_41(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_41(int iParam0)//Position - 0x19CA
{
	return iParam0 < 3;
}

int func_42(int iParam0)//Position - 0x19D6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)//Position - 0x1A13
{
	if (func_41(iParam0))
	{
		return func_44(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_44(int iParam0)//Position - 0x1A38
{
	return Global_2139[iParam0 /*29*/];
}

void func_45()//Position - 0x1A47
{
	while (func_67())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_66())
	{
		SYSTEM::WAIT(0);
	}
	func_49(-1, 0);
	func_46();
	iLocal_45 = 3;
}

void func_46()//Position - 0x1A7B
{
	func_47();
}

int func_47()//Position - 0x1A88
{
	if (func_48(0))
	{
		return 0;
	}
	if (Global_101431.f_8)
	{
		if (Global_101431.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101431.f_10 > 1)
	{
		return 0;
	}
	Global_101431.f_10++;
	return 1;
}

int func_48(bool bParam0)//Position - 0x1AD3
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

void func_49(int iParam0, int iParam1)//Position - 0x1AFB
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_63(iParam0))
	{
		func_62(iParam0, iParam1);
		if (!func_61(51))
		{
			func_57("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_60(), 0, 138, 0);
			func_56(51);
		}
		if (func_55(iParam0))
		{
			Global_114370.f_24998.f_2 = 3;
		}
		if (func_54(iParam0, iParam1) != 322)
		{
			func_51(func_54(iParam0, iParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_114358 = iParam1;
		if (Global_114356 == 0)
		{
			if (((Global_114359 == 1 || Global_114359 == 5) || Global_114359 == 11) || Global_114359 == 25)
			{
				func_50(2);
			}
			else if ((Global_114359 == 26 || Global_114359 == 8) || Global_114359 == 17)
			{
				func_50(7);
			}
			else
			{
				func_50(1);
			}
		}
	}
}

void func_50(int iParam0)//Position - 0x1BFF
{
	Global_114356 = iParam0;
}

void func_51(int iParam0, var uParam1, var uParam2)//Position - 0x1C0D
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_14((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114370.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114370.f_10197[iParam0 /*12*/].f_6 == 11 || Global_114370.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114370.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_114370.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_114370.f_10197[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_52();
	}
}

void func_52()//Position - 0x1CF3
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_114106 = 0;
	Global_114107 = 0;
	Global_114108 = 0;
	Global_114109 = 0;
	Global_114110 = 0;
	Global_114111 = 0;
	Global_114112 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114370.f_10197.f_3853;
	Global_114370.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114370.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114370.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114106++;
					fVar1 = (fVar1 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114107++;
					fVar2 = (fVar2 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114108++;
					fVar3 = (fVar3 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114109++;
					fVar4 = (fVar4 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114110++;
					fVar5 = (fVar5 + (Global_114370.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114111++;
					fVar6 = (fVar6 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114112++;
					fVar7 = (fVar7 + Global_114370.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114089 > 0)
	{
		if (Global_114106 == Global_114089)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114090 > 0)
	{
		if (Global_114107 == Global_114090)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114091 > 0)
	{
		if (Global_114108 == Global_114091)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114092 > 0)
	{
		if (Global_114109 == Global_114092)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114093 > 0)
	{
		if (((Global_114110 == Global_114093 || (Global_114093 * 10 / Global_114110) < 41) || Global_114110 > Global_114096) || Global_114110 == Global_114096)
		{
			if (!BitTest(Global_114370.f_10197.f_3856, 14))
			{
				if (Global_114110 == Global_114093)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114093, 0);
					MISC::SET_BIT(&(Global_114370.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114094 > 0)
	{
		if (Global_114111 == Global_114094)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114095 > 0)
	{
		if (Global_114112 == Global_114095)
		{
			fVar7 = 5f;
		}
	}
	Global_114370.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114110 > Global_114096 || Global_114110 == Global_114096)
	{
		iVar9 = Global_114096;
	}
	else
	{
		iVar9 = Global_114110;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114106, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114089, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114107, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114090, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114108, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114091, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114109, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114092, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114096, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_114112 + Global_114111), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_114095 + Global_114094), true);
	Global_114113 = (Global_114106 * 100 / Global_114089);
	Global_114115 = ((Global_114108 + Global_114107) * 100 / (Global_114091 + Global_114090));
	Global_114114 = ((Global_114109 + iVar9) * 100 / (Global_114092 + Global_114096));
	Global_114116 = ((Global_114111 + Global_114112) * 100 / (Global_114094 + Global_114095));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114370.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114113, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114114, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114115, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114370.f_10197.f_3853))
	{
		func_34(13, SYSTEM::FLOOR(Global_114370.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79248)
		{
			if (func_53() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114104 = 0;
				}
				if (!Global_64038)
				{
					func_47();
				}
			}
		}
	}
}

int func_53()//Position - 0x21B1
{
	return Global_32828;
}

int func_54(int iParam0, int iParam1)//Position - 0x21BC
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_55(int iParam0)//Position - 0x2530
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_56(int iParam0)//Position - 0x255F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_114370.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_57(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x25A1
{
	func_58(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_58(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x25C2
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114370.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114370.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114370.f_20413[Global_114370.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_114370.f_20413.f_145++;
		func_59();
	}
}

void func_59()//Position - 0x2795
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114370.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114370.f_20413.f_145)
	{
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[0])
			{
				Global_114370.f_20413.f_146[0] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[1])
			{
				Global_114370.f_20413.f_146[1] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114370.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114370.f_20413[iVar0 /*16*/].f_12 > Global_114370.f_20413.f_146[2])
			{
				Global_114370.f_20413.f_146[2] = Global_114370.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_60()//Position - 0x28AC
{
	func_40();
	switch (Global_114370.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x28F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_114370.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_62(int iParam0, int iParam1)//Position - 0x2932
{
	MISC::SET_BIT(&(Global_114370.f_24998.f_8[iParam0]), iParam1);
}

int func_63(int iParam0)//Position - 0x294D
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_64()//Position - 0x29FE
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_65(Var0);
	return uVar16;
}

int func_65(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2A1B
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_66()//Position - 0x2BF5
{
	return 1;
}

int func_67()//Position - 0x2BFE
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_68(var uParam0, int* iParam1, var uParam2, int* iParam3)//Position - 0x2C20
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, false))
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam2, false))
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_71(*uParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_69(ENTITY::GET_ENTITY_COORDS(*uParam2, true), 0);
					HUD::SET_BLIP_COLOUR(*iParam3, 1);
					HUD::SET_BLIP_PRIORITY(*iParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, "BLIP_VEH" /* GXT: Vehicle */);
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*iParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*iParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_71(*uParam0, 1, 145);
				}
			}
		}
	}
}

int func_69(struct<3> Param0, bool bParam3)//Position - 0x2D6B
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_70(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_70(bool bParam0, float fParam1, float fParam2)//Position - 0x2D97
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_71(int iParam0, bool bParam1, int iParam2)//Position - 0x2DAE
{
	int iVar0;
	
	iVar0 = func_72(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)//Position - 0x2DF8
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_70(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_70(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_70(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x2E9C
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_77(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *fParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				func_76(iParam1, uParam4, fParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_75(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_74(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_111, fLocal_110, Param7) };
							if (!func_74(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_110);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_74(struct<3> Param0)//Position - 0x30BC
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_75(int iParam0, int iParam1, bool bParam2)//Position - 0x30E6
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

void func_76(int iParam0, var uParam1, var uParam2)//Position - 0x3144
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

int func_77(int iParam0)//Position - 0x3174
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_78(int* iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x31BF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

int func_79()//Position - 0x32B0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_454)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_148[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_148[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_148[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, false, true, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_153[iVar1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_153[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_153[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, false, true, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_80()//Position - 0x336D
{
	int iVar0;
	
	if (bLocal_454)
	{
		if (bLocal_265)
		{
		}
		else if (bLocal_262)
		{
			if (!PED::IS_PED_INJURED(iLocal_148[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_164[0], false))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_148[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_164[1], false))
			{
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_153[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_169[0], false))
			{
			}
			if (!PED::IS_PED_INJURED(iLocal_153[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_169[1], false))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_219[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_148[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_192[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_192[iVar0]));
					iLocal_122++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_148[iVar0], false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_192[iVar0]))
				{
					iLocal_192[iVar0] = func_71(iLocal_148[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(iLocal_219[iVar0]);
			if (PED::IS_PED_INJURED(iLocal_153[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_197[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_197[iVar0]));
					iLocal_123++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_153[iVar0], false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_197[iVar0]))
				{
					iLocal_197[iVar0] = func_71(iLocal_153[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_122 >= 4 && iLocal_123 >= 4)
		{
			func_45();
		}
	}
	func_101();
	func_100();
	switch (iLocal_46)
	{
		case 0:
			if (((PLAYER::GET_IS_PLAYER_DRIVING_ON_HIGHWAY(PLAYER::PLAYER_ID()) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_232 + Vector(0f, 20f, 0f), 170f, 270f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.8174f, 49.1791f, 15f, 25f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.2108f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
			{
				if (!bLocal_265)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.8174f, 49.1791f, 15f, 25f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.2108f, 4659.571f, 36.688f, 15f, 25f, 15f, false, true, 0))
					{
						bLocal_265 = true;
					}
				}
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_238, 1, 3f, 0f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_238, 20f, 20f, 20f, false, true, 0))
					{
						MISC::ENABLE_DISPATCH_SERVICE(5, true);
						MISC::ENABLE_DISPATCH_SERVICE(3, true);
						SYSTEM::SETTIMERA(0);
						func_98();
						iLocal_46 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 5000 || bLocal_265)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			if (bLocal_265)
			{
				if (SYSTEM::TIMERA() > 3500)
				{
					if (((!ENTITY::IS_ENTITY_DEAD(iLocal_174[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_174[1], false)) && !PED::IS_PED_INJURED(iLocal_148[0])) && !PED::IS_PED_INJURED(iLocal_148[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_148[0], iLocal_174[0], -1);
						PED::SET_PED_INTO_VEHICLE(iLocal_148[1], iLocal_174[1], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[0], 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[1], 3, false);
						PED::SET_PED_HELMET(iLocal_148[0], false);
						PED::SET_PED_HELMET(iLocal_148[1], false);
						iLocal_46 = 5;
					}
				}
			}
			if (SYSTEM::TIMERA() > 10000)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rebel")))
					{
						iLocal_46 = 3;
					}
					else
					{
						iLocal_46 = 4;
					}
				}
				else
				{
					iLocal_46 = 3;
				}
			}
			break;
		
		case 3:
			Local_241 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_130 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.1528f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_241, iLocal_130, &(Local_437[0 /*3*/]), 1, 3f, 0f))
				{
					Local_437[1 /*3*/] = { Local_437[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(Local_437[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_437[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_164[0], false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_164[0], Local_437[0 /*3*/], true, false, false, true);
							func_97(iLocal_164[0], iLocal_148[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_164[1], false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_164[1], Local_437[1 /*3*/], true, false, false, true);
							func_97(iLocal_164[1], iLocal_148[1]);
						}
						if (func_39() == 0)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_262 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_241 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_130 = MISC::GET_RANDOM_INT_IN_RANGE(30, 35);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.1528f, 4892.943f, 60.1768f, 225f, 225f, 50f, false, true, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_241, iLocal_130, &(Local_437[0 /*3*/]), 1, 3f, 0f))
				{
					Local_437[1 /*3*/] = { Local_437[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(Local_437[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_437[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169[0], false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_169[0], Local_437[0 /*3*/], true, false, false, true);
							func_97(iLocal_169[0], iLocal_153[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_169[1], false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_169[1], Local_437[1 /*3*/], true, false, false, true);
							func_97(iLocal_169[1], iLocal_153[1]);
						}
						if (func_39() == 0)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 1)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_39() == 2)
						{
							func_81(&uLocal_269, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_263 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_46 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_241 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_130 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_241, iLocal_130, &(Local_437[0 /*3*/]), 1, 3f, 0f))
			{
				Local_437[1 /*3*/] = { Local_437[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!CAM::IS_SPHERE_VISIBLE(Local_437[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_437[1 /*3*/], 7f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[0], false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_174[0], Local_437[0 /*3*/], true, false, false, true);
						func_97(iLocal_174[0], iLocal_148[0]);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[1], false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_174[1], Local_437[1 /*3*/], true, false, false, true);
						func_97(iLocal_174[1], iLocal_148[1]);
					}
					if (func_39() == 0)
					{
						func_81(&uLocal_269, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 1)
					{
						func_81(&uLocal_269, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_39() == 2)
					{
						func_81(&uLocal_269, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_262 = true;
					SYSTEM::SETTIMERA(0);
					iLocal_46 = 6;
				}
			}
			break;
		
		case 6:
			if (func_67())
			{
				fLocal_118 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
				fLocal_119 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
				fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
				if (iLocal_132 < 5 && iLocal_133 < MISC::GET_GAME_TIMER())
				{
					Local_88 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS((Local_88.f_0 + fLocal_118), (Local_88.f_1 + fLocal_119), (Local_88.f_2 + fLocal_120), (Local_88.f_0 - fLocal_118), (Local_88.f_1 - fLocal_119), Local_88.f_2, 10, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
					iLocal_133 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 500));
					iLocal_132++;
				}
			}
			if (iLocal_132 > 4)
			{
				iLocal_46 = 7;
			}
			break;
	}
}

bool func_81(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3C11
{
	func_96(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22173 = 0;
	Global_22175 = 0;
	Global_22180 = 0;
	Global_23157 = 0;
	Global_23159 = 0;
	Global_23163 = 0;
	Global_2883585 = 0;
	return func_82(sParam2, iParam3, 0);
}

int func_82(char* sParam0, int iParam1, bool bParam2)//Position - 0x3C5F
{
	Global_22167 = 0;
	if (Global_22166 == 0 || Global_22168 == 2)
	{
		if (Global_22166 != 0)
		{
			if (iParam1 > Global_22168)
			{
				if (Global_22173 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20813.f_1 = 3;
					Global_22166 = 0;
					Global_22167 = 1;
					Global_22219 = 0;
					Global_22162 = 0;
					Global_22163 = 0;
					Global_22177 = 0;
					Global_22176 = 0;
					Global_20812 = 0;
				}
				else
				{
					func_95();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_93();
		Global_21455 = { Global_21620 };
		Global_22172 = Global_22173;
		Global_22179 = Global_22180;
		Global_2883586 = Global_2883585;
		Global_22181 = { Global_22197 };
		Global_22174 = Global_22175;
		Global_23156 = Global_23157;
		Global_23164 = { Global_23170 };
		Global_23158 = Global_23159;
		Global_23160 = Global_23161;
		Global_23162 = Global_23163;
		Global_21785.f_370 = Global_23155;
		Global_21785.f_368 = Global_23153;
		Global_21785.f_369 = Global_23154;
		Global_22162 = Global_22163;
		if (Global_22172)
		{
			MISC::CLEAR_BIT(&Global_8683, 20);
			MISC::CLEAR_BIT(&Global_8684, 17);
			MISC::CLEAR_BIT(&Global_8685, 0);
			if (bParam2)
			{
				func_92();
				if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20813.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20779 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_91())
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
				if (!Global_79248)
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
			if (func_90())
			{
				return 0;
			}
			else
			{
				switch (Global_20813.f_1)
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
				if (BitTest(Global_8683, 9))
				{
					return 0;
				}
			}
			func_89();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_88();
		func_83();
		return 1;
	}
	if (Global_22166 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22168 || iParam1 == Global_22168)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_95();
	}
	return 0;
}

void func_83()//Position - 0x3F2D
{
	if (!func_84())
	{
		return;
	}
	if (Global_22172)
	{
		MemCopy(&(Global_1970561.f_1), {Global_21785}, 4);
		Global_1970561 = Global_7998;
		Global_1970561.f_6 = Global_22176;
	}
}

int func_84()//Position - 0x3F64
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_87())
	{
		return 0;
	}
	if (func_85(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_85(int iParam0)//Position - 0x3FC7
{
	return func_86(iParam0, 20);
}

var func_86(int iParam0, int iParam1)//Position - 0x3FD7
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_87()//Position - 0x3FEF
{
	return -1;
}

void func_88()//Position - 0x3FF8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21034[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22166 = 1;
}

void func_89()//Position - 0x402B
{
	Global_22219 = Global_22218;
	Global_22213 = Global_22214;
	Global_22260 = { Global_22248 };
	Global_22266 = { Global_22254 };
	Global_22221 = Global_22220;
	Global_22290 = { Global_22272 };
	Global_22296 = { Global_22278 };
	Global_22302 = { Global_22284 };
	Global_22308 = { Global_22314 };
	Global_7998 = Global_7999;
	Global_8000 = Global_8001;
	Global_22177 = Global_22178;
	Global_22179 = Global_22180;
	Global_22181 = { Global_22197 };
	Global_22170 = Global_22171;
	Global_23182 = 0;
	Global_22215 = 0;
	Global_22216 = 0;
	MISC::CLEAR_BIT(&Global_8684, 16);
}

int func_90()//Position - 0x40C0
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_91()//Position - 0x40E7
{
	int iVar0;
	int iVar1;
	
	if (Global_79248)
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

void func_92()//Position - 0x4180
{
	if (func_33(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114370.f_28053[2 /*29*/])
			{
				Global_20813 = 2;
			}
			else
			{
				Global_20813 = 0;
			}
		}
	}
	else
	{
		Global_20813 = func_39();
		if (Global_20813 == 145)
		{
			Global_20813 = 3;
		}
		if (Global_79248)
		{
			Global_20813 = 3;
		}
		if (Global_20813 > 3)
		{
			Global_20813 = 3;
		}
	}
}

void func_93()//Position - 0x4222
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21455[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21455[iVar0 /*10*/].f_1), "", 24);
		Global_21455[iVar0 /*10*/].f_7 = 0;
		Global_21455[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21455.f_161 = -99;
	Global_21455.f_162 = { 0f, 0f, 0f };
}

bool func_94(int iParam0, int iParam1)//Position - 0x4279
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

void func_95()//Position - 0x42B1
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20813.f_1 == 9) || Global_20812 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
		Global_20813.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22166 = 6;
		return;
	}
}

void func_96(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4308
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = uParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

void func_97(int iParam0, int iParam1)//Position - 0x435E
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
	Local_434 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Local_450 = { Local_241 - Local_434 };
	ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D(Local_450.f_0, Local_450.f_1));
	if (bLocal_265)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_VEHICLE_CHASE(iParam1, PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(1);
				if (!PED::IS_PED_INJURED(iParam1))
				{
					TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iParam1, 32, true);
				}
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 20f, 786469, -1f, -1f, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::TASK_VEHICLE_CHASE(iParam1, PLAYER::PLAYER_PED_ID());
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, true);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
	}
}

void func_98()//Position - 0x4466
{
	int iVar0;
	
	iLocal_164[0] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1595.9641f, 4732.479f, 0f, 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_164[0], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_164[0], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_164[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_164[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_164[0], "49GNL112");
	iLocal_164[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1570.3396f, 4733.7554f, 0f, 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_164[1], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_164[1], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_164[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_164[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_164[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_164[1], "47TMS703");
	iLocal_174[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4732.479f, -1595.9641f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_174[0], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[0], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_174[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_174[0], "49GNL112");
	iLocal_174[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4733.7554f, -1570.3396f) + Vector(10f, 10f, 10f), 305f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_174[1], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[1], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_174[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_174[1], "47TMS703");
	iLocal_148[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_164[0], 26, joaat("G_M_M_ChiGoon_02"), -1, true, true);
	iLocal_148[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_164[1], 26, joaat("G_M_M_ChiGoon_02"), -1, true, true);
	if (!bLocal_265)
	{
		iLocal_148[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_164[0], 26, joaat("G_M_M_ChiGoon_02"), 0, true, true);
		iLocal_148[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_164[1], 26, joaat("G_M_M_ChiGoon_02"), 0, true, true);
	}
	iLocal_169[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1356.2806f, 5000f, 0f, 125.2811f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_169[0], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_169[0], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_169[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_169[0], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_169[0], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_169[0], "49GNL112");
	iLocal_169[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, true, true, false);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_169[1], true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_169[1], true, true, false);
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_169[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_169[1], true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_169[1], true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_169[1], "47TMS703");
	iLocal_153[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169[0], 26, joaat("G_M_Y_SalvaGoon_03"), -1, true, true);
	iLocal_153[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169[1], 26, joaat("G_M_Y_SalvaGoon_03"), -1, true, true);
	iLocal_153[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169[0], 26, joaat("G_M_Y_SalvaGoon_03"), 0, true, true);
	iLocal_153[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169[1], 26, joaat("G_M_Y_SalvaGoon_03"), 0, true, true);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal1", &iLocal_266);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal2", &iLocal_267);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_148[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_148[iVar0], iLocal_266);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_148[iVar0], true, false);
			if (bLocal_265)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_148[0], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_148[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_148[1], joaat("WEAPON_PISTOL"), -1, true, true);
				}
				PED::SET_PED_ACCURACY(iLocal_148[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[iVar0], 3, false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_148[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
				PED::SET_PED_ACCURACY(iLocal_148[iVar0], 13);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[iVar0], 1, true);
			func_99(&uLocal_269, 4, iLocal_148[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_148[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_153[iVar0], iLocal_267);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_153[iVar0], true, false);
			if (bLocal_265)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_148[0], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_148[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_148[1], joaat("WEAPON_PISTOL"), -1, true, true);
				}
				PED::SET_PED_ACCURACY(iLocal_148[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_148[iVar0], 3, false);
				func_99(&uLocal_269, 4, iLocal_148[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_153[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
				PED::SET_PED_ACCURACY(iLocal_153[iVar0], 13);
				func_99(&uLocal_269, 5, iLocal_153[iVar0], "REDGWSalvadoran", 0, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_153[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_153[iVar0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_153[iVar0], 1, true);
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_266, iLocal_267);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_267, iLocal_266);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_266, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_267, joaat("PLAYER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_M_ChiGoon_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bobcatxl"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
	bLocal_454 = true;
	iLocal_44 = 1;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x4A00
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
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

void func_100()//Position - 0x4A9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_128)
	{
		case 0:
			if (bLocal_262)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_148[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_148[iVar0], 100f, 100f, 20f, false, true, 0))
						{
							iLocal_128 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_263)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_153[iVar1]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153[iVar1], 100f, 100f, 20f, false, true, 0))
						{
							iLocal_128 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, iLocal_267);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, iLocal_266);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_266, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, joaat("PLAYER"));
			if (bLocal_262)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_148[iVar2]))
					{
						if ((!PED::IS_PED_IN_COMBAT(iLocal_148[iVar2], 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_148[iVar2], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_148[iVar2], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 0)
						{
							TASK::CLEAR_PED_TASKS(iLocal_148[iVar2]);
							TASK::TASK_COMBAT_PED(iLocal_148[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_148[iVar2], true);
						}
					}
					iVar2++;
				}
				if (func_81(&uLocal_269, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_128 = 4;
				}
			}
			if (bLocal_263)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_153[iVar3]))
					{
						if ((!PED::IS_PED_IN_COMBAT(iLocal_153[iVar3], 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_153[iVar3], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_153[iVar3], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 0)
						{
							TASK::CLEAR_PED_TASKS(iLocal_153[iVar3]);
							TASK::TASK_COMBAT_PED(iLocal_153[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_153[iVar3], true);
						}
					}
					iVar3++;
				}
				if (func_81(&uLocal_269, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_128 = 4;
				}
			}
			break;
	}
}

void func_101()//Position - 0x4CD0
{
	switch (iLocal_126)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_235, 7f, 7f, 10f, false, true, 0))
				{
					func_103();
					SYSTEM::WAIT(0);
					func_81(&uLocal_269, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_134, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (!HUD::DOES_BLIP_EXIST(iLocal_180))
					{
						iLocal_180 = func_102(iLocal_212);
					}
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_126++;
				}
			}
			else
			{
				iLocal_126++;
			}
			break;
	}
	switch (iLocal_127)
	{
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_134, 10f, 10f, 6f, false, true, 0))
				{
					if (!func_67())
					{
						func_81(&uLocal_269, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!PED::IS_PED_INJURED(iLocal_134))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_134, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							SYSTEM::SETTIMERB(0);
							iLocal_127++;
						}
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_127++;
			}
			break;
		
		case 2:
			if (!func_67() || SYSTEM::TIMERB() > 4000)
			{
				if (!PED::IS_PED_INJURED(iLocal_134))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_134, 0, 0, 0);
					HUD::REMOVE_BLIP(&iLocal_181);
				}
				if (SYSTEM::TIMERB() > 7000)
				{
					if (!PED::IS_PED_INJURED(iLocal_135[6]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_135[6], 0, 0, 0);
						HUD::REMOVE_BLIP(&(iLocal_182[6]));
					}
				}
				if (SYSTEM::TIMERB() > 9000)
				{
					if (!PED::IS_PED_INJURED(iLocal_135[7]))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_135[7], 0, 0, 0);
						HUD::REMOVE_BLIP(&(iLocal_182[7]));
					}
					iLocal_127++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_135[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_135[6], 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_135[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_135[7], 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_134, 0, 0, 0);
			}
			break;
	}
}

int func_102(int iParam0)//Position - 0x4EC5
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_70(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

void func_103()//Position - 0x4EFD
{
	Global_21032 = 0;
	func_104();
}

void func_104()//Position - 0x4F0D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_105()//Position - 0x4F2E
{
	int iVar0;
	
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_212))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_179))
		{
			HUD::REMOVE_BLIP(&iLocal_179);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_180))
		{
			HUD::REMOVE_BLIP(&iLocal_180);
		}
		iLocal_127 = 1;
		iLocal_45 = 2;
		iLocal_44 = 0;
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_135[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_182[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_182[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_145)
		{
			if (!PED::IS_PED_INJURED(iLocal_145[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_133())
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50[7 /*3*/], 110f, 95f, 40f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_179))
				{
					HUD::REMOVE_BLIP(&iLocal_179);
				}
				if ((!HUD::DOES_BLIP_EXIST(iLocal_181) && !HUD::DOES_BLIP_EXIST(iLocal_182[6])) && !HUD::DOES_BLIP_EXIST(iLocal_182[7]))
				{
					iLocal_181 = func_71(iLocal_134, 1, 145);
					iLocal_182[6] = func_71(iLocal_135[6], 1, 145);
					iLocal_182[7] = func_71(iLocal_135[7], 1, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_181, false);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_182[6], false);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_182[7], false);
				func_106(1);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_135[6]))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(iLocal_135[6], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_135[6], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_135[6])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_135[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_135[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_135[6], 0, 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_135[7]))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(iLocal_135[7], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_135[7], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_135[7])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_135[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_135[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_135[7], 0, 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_134))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(iLocal_134, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_134, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 0) || FIRE::IS_ENTITY_ON_FIRE(iLocal_134)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_134)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_134)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_134))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_134, 0, 0, 0);
			}
		}
		if (!bLocal_261)
		{
		}
	}
	func_101();
	switch (iLocal_129)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_135[6]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_135[6], true) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iLocal_135[6]))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_135[6], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[6], 4000, 2048, 2);
					func_81(&uLocal_269, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_129 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_135[7]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_135[7], true) + Vector(0f, 3f, 0f), 9f, 7f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), iLocal_135[7]))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_135[7], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[7], 4000, 2048, 2);
					func_81(&uLocal_269, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_125 = MISC::GET_GAME_TIMER();
					iLocal_129 = 1;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_135[6]) && PED::IS_PED_INJURED(iLocal_135[7]))
			{
				iLocal_129 = 2;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_181))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_181, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_182[6]))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_182[6], true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_182[7]))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_182[7], true);
			}
			iLocal_124 = MISC::GET_GAME_TIMER();
			if ((iLocal_124 - iLocal_125) > 6000 && !func_67())
			{
				if (!PED::IS_PED_INJURED(iLocal_135[6]))
				{
				}
				if (!PED::IS_PED_INJURED(iLocal_135[7]))
				{
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_180))
				{
					iLocal_180 = func_102(iLocal_212);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (!func_133())
				{
					func_106(1);
				}
				iLocal_129 = 2;
			}
			break;
	}
}

int func_106(int iParam0)//Position - 0x53E2
{
	if (func_110())
	{
		Global_114360 = 1;
		Global_114357 = MISC::GET_GAME_TIMER();
		if (func_55(Global_114359))
		{
			func_107(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_55(Global_114359))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_107(int iParam0)//Position - 0x5435
{
	switch (iParam0)
	{
		case 0:
			if (Global_114370.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_108(func_109(iParam0), -1);
					Global_114370.f_24998.f_2++;
					MISC::SET_BIT(&Global_114366, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114366, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_108(func_109(iParam0), -1);
					Global_114370.f_24998.f_3++;
					MISC::SET_BIT(&Global_114366, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114366, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_108(func_109(iParam0), -1);
					Global_114370.f_24998.f_4++;
					MISC::SET_BIT(&Global_114366, 2);
				}
			}
			break;
	}
}

void func_108(char* sParam0, int iParam1)//Position - 0x5510
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_109(int iParam0)//Position - 0x5527
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

int func_110()//Position - 0x556A
{
	switch (func_111(&Global_32888, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x55A0
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98850.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_115(0))
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23572.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43922 = iParam2;
		Global_43884 = *uParam0;
		Global_43885 = iParam4;
		Global_43883 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43883 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43883)
			{
				if (Global_43889[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43884 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_113(iParam2))
		{
			return 0;
		}
		if (Global_43883 == 8)
		{
			return 0;
		}
		Global_43886++;
		*uParam0 = Global_43886;
		Global_43889[Global_43883 /*4*/] = Global_43886;
		Global_43889[Global_43883 /*4*/].f_1 = iParam1;
		Global_43889[Global_43883 /*4*/].f_2 = iParam2;
		Global_43889[Global_43883 /*4*/].f_3 = 0;
		Global_43883++;
		if (iParam4 != 0)
		{
			func_112(uParam0, iParam4);
		}
	}
	return 2;
}

void func_112(var uParam0, int iParam1)//Position - 0x56D7
{
	int iVar0;
	
	if (Global_43883 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43883)
	{
		if (Global_43889[iVar0 /*4*/] == *uParam0)
		{
			Global_43889[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_113(int iParam0)//Position - 0x5726
{
	return func_114(iParam0, Global_43922);
}

int func_114(int iParam0, int iParam1)//Position - 0x5737
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

int func_115(int iParam0)//Position - 0x5918
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_116()//Position - 0x593A
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[0], false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[0], -1, false) == iLocal_135[8])
		{
			AUDIO::SET_HORN_PERMANENTLY_ON_TIME(iLocal_158[0], 60000f);
			AUDIO::SET_HORN_PERMANENTLY_ON(iLocal_158[0]);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_134))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_134))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_134, 0, 0, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_181))
	{
		HUD::REMOVE_BLIP(&iLocal_181);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_232, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), Local_232) > 300f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_135[iVar0]));
			}
		}
		if (PED::IS_PED_INJURED(iLocal_135[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_182[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_182[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_117()//Position - 0x5A23
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	STREAMING::REQUEST_MODEL(joaat("G_M_M_ChiGoon_02"));
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_03"));
	STREAMING::REQUEST_MODEL(joaat("rebel"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("A_C_Rottweiler"));
	STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrong");
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrongdead_peds");
	if ((((((((STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_ChiGoon_02")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_C_Rottweiler"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrong")) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrongdead_peds"))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_232 - Vector(150f, 150f, 150f), Local_232 + Vector(150f, 150f, 150f), false, true, true, true, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rebel"), true);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		iLocal_158[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1626.9401f, 4729.889f, 51.3463f, 347.1188f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_158[0], true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[0], 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[0], true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[0], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_158[0], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_158[0], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[0], 1, true);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_158[0], 0, false, 1000f);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_158[0], 6);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_158[0], "RADIO_06_COUNTRY" /* GXT: Rebel Radio */);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_158[0], "76JON418");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_158[0], true);
		iLocal_158[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1619.4318f, 4747.7925f, 52.7502f, 146.6017f, true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_158[1], true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[1], 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[1], true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[1], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_158[1], 600f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_158[1], 400f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[1], 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[1], 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[1], 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[1], 4, false);
		VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_158[1], 6);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_158[1], "RADIO_06_COUNTRY" /* GXT: Rebel Radio */);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_158[1], "79ERK121");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_158[1], true);
		AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_158[1], true);
		iLocal_158[2] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1636.2161f, 4748.0605f, 51.5484f, 199.3236f, true, true, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_158[2], "83JOH802");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_158[2], true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[2], 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[2], true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[2], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_158[2], 60f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_158[2], 1000f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[2], 1, false);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_158[2], 1, false, 1000f);
		iLocal_158[3] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1641.5785f, 4736.783f, 52.5984f, 278.1865f, true, true, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_158[3], "85TOR114");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_158[3], true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[3], 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[3], true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[3], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_158[3], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_158[3], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[3], 1, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[3], 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[3], 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_158[3], 4, false);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_158[3], 0, false, 1000f);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_158[3], 5, false, 1000f);
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_212))
		{
			iVar0 = 0;
			MISC::SET_BIT(&iVar0, 1);
			MISC::SET_BIT(&iVar0, 3);
			MISC::SET_BIT(&iVar0, 4);
			iLocal_212 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), Local_235, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_security_case_01"));
		}
		Local_244[0 /*3*/] = { -1640.4106f, 4740.7017f, 52.6218f };
		Local_244[1 /*3*/] = { -1624.6636f, 4746.5693f, 51.541f };
		Local_244[2 /*3*/] = { -1626.3386f, 4734.2324f, 51.6176f };
		Local_244[3 /*3*/] = { -1634.2968f, 4741.2134f, 51.9737f };
		Local_244[4 /*3*/] = { -1644.7166f, 4736.4463f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_213[iVar1]))
			{
				iVar2 = 0;
				MISC::SET_BIT(&iVar2, 3);
				MISC::SET_BIT(&iVar2, 4);
				if (iVar1 < 2)
				{
					iLocal_213[iVar1] = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), Local_244[iVar1 /*3*/], iVar2, -1, true, 0);
				}
				else if (iVar1 == 4)
				{
					iLocal_213[iVar1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), Local_244[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, true, 0);
				}
				else
				{
					iLocal_213[iVar1] = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_PISTOL"), Local_244[iVar1 /*3*/], iVar2, -1, true, 0);
				}
			}
			iVar1++;
		}
		Local_50[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_78[0] = 177.0024f;
		Local_50[1 /*3*/] = { -1621.1903f, 4744.8677f, 52.4254f };
		fLocal_78[1] = 146.9645f;
		Local_50[2 /*3*/] = { -1622.7946f, 4735.9746f, 51.474f };
		fLocal_78[2] = 48.6546f;
		Local_50[3 /*3*/] = { -1632.6947f, 4742.906f, 51.8604f };
		fLocal_78[3] = 155.0678f;
		Local_50[4 /*3*/] = { -1629.5437f, 4738.5996f, 52.1784f };
		fLocal_78[4] = 278.3085f;
		Local_50[5 /*3*/] = { -1634.7644f, 4745.1875f, 51.3926f };
		fLocal_78[5] = 270.3501f;
		Local_50[7 /*3*/] = { -1628.3207f, 4731.5024f, 51.7644f };
		fLocal_78[7] = 352.9167f;
		Local_50[6 /*3*/] = { -1640.3105f, 4738.4f, 52.2f };
		fLocal_78[6] = 34.1111f;
		Local_115 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_121 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				iLocal_135[iVar1] = PED::CREATE_PED(22, joaat("G_M_Y_SalvaGoon_03"), Local_50[iVar1 /*3*/], fLocal_78[iVar1], true, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_135[iVar1], 227, true);
			}
			else
			{
				iLocal_135[iVar1] = PED::CREATE_PED(22, joaat("G_M_M_ChiGoon_02"), Local_50[iVar1 /*3*/], fLocal_78[iVar1], true, true);
			}
			iVar1++;
		}
		iLocal_145[0] = PED::CREATE_PED(26, joaat("A_C_Rottweiler"), -1635.0052f, 4737.1807f, 53.4995f, 33.4155f, true, true);
		iLocal_145[1] = PED::CREATE_PED(26, joaat("A_C_Rottweiler"), -1625.2152f, 4741.1187f, 52.5762f, 316.2733f, true, true);
		iVar1 = 0;
		while (iVar1 < iLocal_145)
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_145[iVar1], true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_145[iVar1], true, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_145[iVar1], 227, true);
			Local_88 = { ENTITY::GET_ENTITY_COORDS(iLocal_145[iVar1], true) };
			Local_91 = { Local_88.f_0, (Local_88.f_1 - 2f), (Local_88.f_2 - 0.5f) };
			Local_94 = { Local_88.f_0, (Local_88.f_1 + 50f), (Local_88.f_2 - 0.5f) };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_91, Local_94, 100, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			iVar1++;
		}
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_135[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_145[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_145[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0f, 2, 0);
		GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(50f);
		func_119();
		GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(1f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[0], false))
		{
			iLocal_135[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_158[0], 26, joaat("G_M_Y_SalvaGoon_03"), -1, true, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_135[8], true, false);
			PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_135[8], true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_135[8], 0, 0, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_179))
		{
		}
		PED::ADD_RELATIONSHIP_GROUP("re_DealGoneWrong", &iLocal_268);
		iLocal_135[6] = PED::CREATE_PED(22, joaat("G_M_M_ChiGoon_02"), Local_50[6 /*3*/], fLocal_78[6], true, true);
		func_99(&uLocal_269, 4, iLocal_135[6], "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135[6], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_135[6], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135[6], iLocal_268);
		iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(Local_50[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_135[6], iVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
		PED::SET_PED_KEEP_TASK(iLocal_135[6], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_135[6], 227, true);
		iLocal_135[7] = PED::CREATE_PED(22, joaat("G_M_Y_SalvaGoon_03"), -1640.3105f, 4738.4f, 50.2f, fLocal_78[7], true, true);
		func_99(&uLocal_269, 5, iLocal_135[7], "REDGWSalvadoran", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135[7], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_135[7], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135[7], iLocal_268);
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(Local_50[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_135[7], iVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar4, 0.5f);
		PED::SET_PED_KEEP_TASK(iLocal_135[7], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_135[7], 227, true);
		iLocal_134 = PED::CREATE_PED(22, joaat("G_M_M_ChiGoon_02"), Local_115, fLocal_121, true, true);
		func_99(&uLocal_269, 4, iLocal_134, "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_134, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_134, iLocal_268);
		iVar5 = PED::CREATE_SYNCHRONIZED_SCENE(Local_115, 7.5f, -12.75f, 51.5f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_134, iVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar5, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_134, 4f, 18f, 326.7277f, 0, true);
		PED::SET_PED_KEEP_TASK(iLocal_134, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_134, 227, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, joaat("PLAYER"));
		if (func_39() == 0)
		{
			func_99(&uLocal_269, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_39() == 1)
		{
			func_99(&uLocal_269, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_39() == 2)
		{
			func_99(&uLocal_269, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		iLocal_219[0] = GRAPHICS::ADD_DECAL(1110, -1632.9529f, 4745.3594f, 51.7876f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[1] = GRAPHICS::ADD_DECAL(1110, -1634.8696f, 4744.4585f, 51.8233f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[2] = GRAPHICS::ADD_DECAL(1110, -1636.9706f, 4736.5947f, 52.2814f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[3] = GRAPHICS::ADD_DECAL(1110, -1625.5612f, 4741.2407f, 51.7102f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[4] = GRAPHICS::ADD_DECAL(1110, -1621.5326f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[5] = GRAPHICS::ADD_DECAL(1110, -1621.9626f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[6] = GRAPHICS::ADD_DECAL(1110, -1628.5171f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[7] = GRAPHICS::ADD_DECAL(1110, -1629.324f, 4732.1465f, 51.6947f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[8] = GRAPHICS::ADD_DECAL(1110, -1640.2866f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[9] = GRAPHICS::ADD_DECAL(1110, -1640.055f, 4701.9946f, 41.2428f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		SYSTEM::WAIT(0);
		iLocal_219[10] = GRAPHICS::ADD_DECAL(1110, -1641.9241f, 4692.2363f, 38.3762f, 0f, 0f, -1f, func_118(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_135[iVar1], false))
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_135[iVar1], true);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_135[iVar1], 0, 0.3f, 0.6f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(iLocal_135[iVar1], 0, 0.65f, 0.6f, 3);
				SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
				if (iVar1 <= 5)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_182[iVar1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_182[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
			}
		}
		iLocal_453 = 1;
	}
}

Vector3 func_118(struct<3> Param0)//Position - 0x69F8
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

void func_119()//Position - 0x6A37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			Local_97 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_158[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_131 = 0;
		while (iLocal_131 < 5)
		{
			fLocal_118 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
			fLocal_119 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			SYSTEM::WAIT(0);
			Local_100 = { (Local_97.f_0 - fLocal_118), (Local_97.f_1 - fLocal_119), (Local_97.f_2 + fLocal_120) };
			Local_103 = { (Local_97.f_0 + fLocal_118), (Local_97.f_1 + fLocal_119), Local_97.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_100, Local_103, 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			Local_100 = { (Local_97.f_0 + fLocal_118), (Local_97.f_1 + fLocal_119), (Local_97.f_2 + fLocal_120) };
			Local_103 = { (Local_97.f_0 - fLocal_118), (Local_97.f_1 - fLocal_119), Local_97.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_100, Local_103, 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			Local_100 = { (Local_97.f_0 + fLocal_118), (Local_97.f_1 - fLocal_119), (Local_97.f_2 + fLocal_120) };
			Local_103 = { (Local_97.f_0 - fLocal_118), (Local_97.f_1 + fLocal_119), Local_97.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_100, Local_103, 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			Local_100 = { (Local_97.f_0 - fLocal_118), (Local_97.f_1 + fLocal_119), (Local_97.f_2 + fLocal_120) };
			Local_103 = { (Local_97.f_0 + fLocal_118), (Local_97.f_1 - fLocal_119), Local_97.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_100, Local_103, 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			Local_100 = { Local_97.f_0, (Local_97.f_1 + fLocal_119), (Local_97.f_2 + fLocal_120) };
			Local_103 = { Local_97.f_0, (Local_97.f_1 - fLocal_119), Local_97.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_100, Local_103, 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
			iLocal_131++;
		}
		iVar0++;
	}
}

int func_120()//Position - 0x6C0B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_131())
		{
			return 0;
		}
	}
	if (func_127())
	{
		return 1;
	}
	if (func_121(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_121(float fParam0, bool bParam1)//Position - 0x6C91
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_41(func_39()))
		{
			iVar36 = func_60();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114370.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114370.f_18577[iVar32 /*6*/], 3))
				{
					func_122(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_122(int iParam0, var uParam1)//Position - 0x6D42
{
	switch (iParam0)
	{
		case 0:
			func_123(uParam1, "Abigail1", func_125(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 1:
			func_123(uParam1, "Abigail2", func_125(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 2:
			func_123(uParam1, "Barry1", func_125(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 3:
			func_123(uParam1, "Barry2", func_125(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 4:
			func_123(uParam1, "Barry3", func_125(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 5:
			func_123(uParam1, "Barry3A", func_125(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 6:
			func_123(uParam1, "Barry3C", func_125(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 7:
			func_123(uParam1, "Barry4", func_125(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_124(iParam0), 0, 0);
			break;
		
		case 8:
			func_123(uParam1, "Dreyfuss1", func_125(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 9:
			func_123(uParam1, "Epsilon1", func_125(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 10:
			func_123(uParam1, "Epsilon2", func_125(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 11:
			func_123(uParam1, "Epsilon3", func_125(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 12:
			func_123(uParam1, "Epsilon4", func_125(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 13:
			func_123(uParam1, "Epsilon5", func_125(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 14:
			func_123(uParam1, "Epsilon6", func_125(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 15:
			func_123(uParam1, "Epsilon7", func_125(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 16:
			func_123(uParam1, "Epsilon8", func_125(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 17:
			func_123(uParam1, "Extreme1", func_125(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 18:
			func_123(uParam1, "Extreme2", func_125(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 19:
			func_123(uParam1, "Extreme3", func_125(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 20:
			func_123(uParam1, "Extreme4", func_125(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 21:
			func_123(uParam1, "Fanatic1", func_125(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_124(iParam0), 1, 0);
			break;
		
		case 22:
			func_123(uParam1, "Fanatic2", func_125(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_124(iParam0), 1, 0);
			break;
		
		case 23:
			func_123(uParam1, "Fanatic3", func_125(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_124(iParam0), 0, 1);
			break;
		
		case 24:
			func_123(uParam1, "Hao1", func_125(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_124(iParam0), 0, 1);
			break;
		
		case 25:
			func_123(uParam1, "Hunting1", func_125(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 26:
			func_123(uParam1, "Hunting2", func_125(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 27:
			func_123(uParam1, "Josh1", func_125(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 28:
			func_123(uParam1, "Josh2", func_125(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 29:
			func_123(uParam1, "Josh3", func_125(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 30:
			func_123(uParam1, "Josh4", func_125(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 31:
			func_123(uParam1, "Maude1", func_125(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 32:
			func_123(uParam1, "Minute1", func_125(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 33:
			func_123(uParam1, "Minute2", func_125(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 34:
			func_123(uParam1, "Minute3", func_125(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 35:
			func_123(uParam1, "MrsPhilips1", func_125(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 36:
			func_123(uParam1, "MrsPhilips2", func_125(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 37:
			func_123(uParam1, "Nigel1", func_125(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 38:
			func_123(uParam1, "Nigel1A", func_125(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 39:
			func_123(uParam1, "Nigel1B", func_125(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_124(iParam0), 1, 1);
			break;
		
		case 40:
			func_123(uParam1, "Nigel1C", func_125(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_124(iParam0), 1, 1);
			break;
		
		case 41:
			func_123(uParam1, "Nigel1D", func_125(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_124(iParam0), 1, 1);
			break;
		
		case 42:
			func_123(uParam1, "Nigel2", func_125(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 43:
			func_123(uParam1, "Nigel3", func_125(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_124(iParam0), 1, 1);
			break;
		
		case 44:
			func_123(uParam1, "Omega1", func_125(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 45:
			func_123(uParam1, "Omega2", func_125(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 46:
			func_123(uParam1, "Paparazzo1", func_125(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 47:
			func_123(uParam1, "Paparazzo2", func_125(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 48:
			func_123(uParam1, "Paparazzo3", func_125(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 49:
			func_123(uParam1, "Paparazzo3A", func_125(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 50:
			func_123(uParam1, "Paparazzo3B", func_125(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 51:
			func_123(uParam1, "Paparazzo4", func_125(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 52:
			func_123(uParam1, "Rampage1", func_125(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 54:
			func_123(uParam1, "Rampage3", func_125(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 55:
			func_123(uParam1, "Rampage4", func_125(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 56:
			func_123(uParam1, "Rampage5", func_125(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_124(iParam0), 0, 0);
			break;
		
		case 53:
			func_123(uParam1, "Rampage2", func_125(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_124(iParam0), 1, 0);
			break;
		
		case 57:
			func_123(uParam1, "TheLastOne", func_125(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 58:
			func_123(uParam1, "Tonya1", func_125(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 59:
			func_123(uParam1, "Tonya2", func_125(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 60:
			func_123(uParam1, "Tonya3", func_125(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 61:
			func_123(uParam1, "Tonya4", func_125(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		case 62:
			func_123(uParam1, "Tonya5", func_125(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_124(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_123(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x7EF7
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_124(int iParam0)//Position - 0x7F88
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_125(int iParam0)//Position - 0x833F
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_126(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_126(int iParam0)//Position - 0x8376
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_127()//Position - 0x87C2
{
	if (func_130() && !func_131())
	{
		return 1;
	}
	if (func_129() && func_128())
	{
		return 1;
	}
	return 0;
}

bool func_128()//Position - 0x87F4
{
	return Global_114088 > 0;
}

int func_129()//Position - 0x8802
{
	if (Global_98294 != -1)
	{
		return 1;
	}
	return 0;
}

int func_130()//Position - 0x8817
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 20);
	}
	return 0;
}

int func_131()//Position - 0x883A
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_132()//Position - 0x8857
{
	if (!func_113(5))
	{
		return 1;
	}
	if (func_127())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_131())
		{
			return 0;
		}
	}
	if (func_121(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_133()//Position - 0x88B9
{
	if ((Global_114359 == func_64() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114360)
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0)//Position - 0x88E4
{
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_136(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114356 = 0;
	func_135();
}

void func_135()//Position - 0x891A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_136(int iParam0)//Position - 0x8957
{
	Global_114359 = iParam0;
}

int func_137(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152957)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_64();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_131())
			{
				return 0;
			}
		}
		if (!Global_114370.f_9088)
		{
			return 0;
		}
		if (func_48(0))
		{
			return 0;
		}
		if (func_127())
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (Global_114359 != -1)
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_121(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_176(iParam3))
		{
			return 0;
		}
		if (func_41(func_39()))
		{
			if (func_175(func_39()) == 4 || func_175(func_39()) == 5)
			{
				return 0;
			}
		}
		if (func_41(func_39()))
		{
			if (!func_174(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_173(Global_114370.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114361) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_172())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_163(4))
		{
			return 0;
		}
		if (!func_113(5))
		{
			return 0;
		}
		if (func_162(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_162(0, 0))
		{
			return 0;
		}
		if (Global_32975)
		{
			return 0;
		}
		if (func_176(30) && !func_162(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_41(func_39()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114370.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114370.f_2366.f_539.f_2296[iVar4];
				if (func_161(iVar8))
				{
					if (func_139(iVar4))
					{
						if (!func_138(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_39() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_138(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x8CFF
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_139(int iParam0)//Position - 0x8D46
{
	int iVar0;
	
	iVar0 = Global_114370.f_2366.f_539.f_2296[iParam0];
	return func_140(iVar0);
}

int func_140(int iParam0)//Position - 0x8D67
{
	return func_141(iParam0, 1);
}

int func_141(int iParam0, int iParam1)//Position - 0x8D76
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_161(iParam0))
	{
		return 0;
	}
	func_142(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8DC9
{
	func_143(func_154(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_143(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8DE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_153(iParam0, iParam1))
	{
		iVar0 = func_152(iParam1);
		iVar1 = func_150(iParam0);
		iVar2 = (func_150(iParam0) - func_150(iParam1));
		iVar3 = (func_152(iParam0) - func_152(iParam1));
		iVar4 = (func_149(iParam0) - func_149(iParam1));
		iVar5 = (func_148(iParam0) - func_148(iParam1));
		iVar6 = (func_147(iParam0) - func_147(iParam1));
		iVar7 = (func_146(iParam0) - func_146(iParam1));
	}
	else
	{
		iVar0 = func_152(iParam0);
		iVar1 = func_150(iParam1);
		iVar2 = (func_150(iParam1) - func_150(iParam0));
		iVar3 = (func_152(iParam1) - func_152(iParam0));
		iVar4 = (func_149(iParam1) - func_149(iParam0));
		iVar5 = (func_148(iParam1) - func_148(iParam0));
		iVar6 = (func_147(iParam1) - func_147(iParam0));
		iVar7 = (func_146(iParam1) - func_146(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_145(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_144(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_144(float fParam0, float fParam1, float fParam2)//Position - 0x8FE8
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_145(int iParam0, int iParam1)//Position - 0x902A
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_146(int iParam0)//Position - 0x90CC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_147(int iParam0)//Position - 0x90DF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_148(int iParam0)//Position - 0x90F2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_149(int iParam0)//Position - 0x9105
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_150(int iParam0)//Position - 0x9117
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_151(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_151(bool bParam0, int iParam1, int iParam2)//Position - 0x9139
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_152(int iParam0)//Position - 0x9150
{
	return iParam0 & 15;
}

int func_153(int iParam0, int iParam1)//Position - 0x915D
{
	int iVar0;
	int iVar1;
	
	if (!func_161(iParam1) || !func_161(iParam0))
	{
		return 1;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_154()//Position - 0x9269
{
	var uVar0;
	
	func_160(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_159(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_158(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_157(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_156(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_155(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_155(var uParam0, int iParam1)//Position - 0x92AF
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_156(var uParam0, int iParam1)//Position - 0x9335
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_157(var uParam0, int iParam1)//Position - 0x9368
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_152(*uParam0);
	iVar1 = func_150(*uParam0);
	if (iParam1 < 1 || iParam1 > func_145(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_158(var uParam0, int iParam1)//Position - 0x93B9
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_159(var uParam0, int iParam1)//Position - 0x93F3
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_160(var uParam0, int iParam1)//Position - 0x942E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_161(int iParam0)//Position - 0x946A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_147(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_148(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_150(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_152(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_149(iParam0);
	if (iVar5 < 1 || iVar5 > func_145(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0, bool bParam1)//Position - 0x9546
{
	if (BitTest(Global_114370.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x9566
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_39();
				if (!func_41(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_171()) || Global_113417) || Global_32831) || func_170()) || func_94(8, -1)) || func_169()) || func_168()) || func_167()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_171()) || Global_32831) || func_170()) || func_94(8, -1)) || func_167()) || func_169()) || func_168()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_171()) || Global_113417) || Global_32831) || func_170()) || func_94(8, -1)) || func_167()) || func_169()) || func_168()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5) || Global_44469 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_171()) || Global_113417) || Global_32831) || func_170()) || func_94(8, -1)) || func_169()) || func_168()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_171() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_94(8, -1)) || func_166()) || func_165()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_94(8, -1) || func_169()) || func_168()) || func_165()) || func_164())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_171()) || Global_32831) || func_170()) || func_94(8, -1)) || func_168()) || func_167()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_171()) || func_168()) || Global_113417) || Global_32831) || func_170()) || Global_45122) || func_94(8, -1)) || func_167()) || func_165()) || func_166()) || Global_114370.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_171()) || Global_113417) || Global_32831) || func_170()) || func_94(8, -1)) || func_167()) || func_165()) || func_169()) || func_168()) || func_166())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_164()//Position - 0x9C83
{
	return Global_101431.f_1;
}

int func_165()//Position - 0x9C91
{
	if (Global_98294 != -1)
	{
		return BitTest(Global_92160[Global_98294 /*34*/].f_15, 13);
	}
	return 0;
}

int func_166()//Position - 0x9CB4
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0x9CCE
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

bool func_168()//Position - 0x9CF8
{
	return Global_101444.f_394 > 0;
}

bool func_169()//Position - 0x9D09
{
	return Global_101444.f_393 > 0;
}

var func_170()//Position - 0x9D1A
{
	return Global_1575079;
}

int func_171()//Position - 0x9D26
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

int func_172()//Position - 0x9D42
{
	func_92();
	if (Global_9488[Global_20813 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_173(int iParam0)//Position - 0x9D6A
{
	return func_153(func_154(), iParam0);
}

int func_174(int iParam0, int iParam1, int iParam2)//Position - 0x9D7C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_39();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_175(int iParam0)//Position - 0x9E60
{
	if (!func_41(iParam0))
	{
		return 7;
	}
	return Global_114370.f_7691.f_919[iParam0];
}

int func_176(int iParam0)//Position - 0x9E84
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114370.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114370.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_177()//Position - 0x9EDC
{
	int iVar0;
	
	if (Global_32980)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178()//Position - 0x9F20
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
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
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
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

void func_179()//Position - 0x9FD8
{
	int iVar0;
	
	if (iLocal_453 && !iLocal_260)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(iLocal_179))
		{
			HUD::REMOVE_BLIP(&iLocal_179);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_180))
		{
			HUD::REMOVE_BLIP(&iLocal_180);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_192[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_192[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_202[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_202[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_148[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_148[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_264 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_197[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_197[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_207[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_207[iVar0]));
			}
			if (iLocal_46 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_153[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_153[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							bLocal_264 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_44 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
		}
		if (bLocal_264)
		{
			func_3(func_39(), 1, 25000);
		}
	}
	func_180(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_180(int iParam0)//Position - 0xA150
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_64();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_133())
	{
		func_184(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114361 = MISC::GET_GAME_TIMER();
		func_183(30000);
		StringCopy(&cVar0, func_182(Global_114359, 1), 64);
		if (func_63(Global_114359) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114358, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114356, (MISC::GET_GAME_TIMER() - Global_114357), 0);
	}
	else if (BitTest(Global_114366, 0) && Global_114370.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114366, 0);
	}
	func_181(&Global_32888);
	Global_114360 = 0;
	func_136(-1);
}

void func_181(var uParam0)//Position - 0xA202
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43884)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43883 = 0;
	Global_43885 = 0;
	Global_43922 = 15;
	Global_64035 = 0;
	Global_64036 = 0;
}

char* func_182(int iParam0, bool bParam1)//Position - 0xA23F
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_183(int iParam0)//Position - 0xA488
{
	Global_44473 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_184(int iParam0)//Position - 0xA49A
{
	func_185(iParam0, 0, func_190(iParam0));
}

void func_185(int iParam0, int iParam1, int iParam2)//Position - 0xA4AF
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_154();
	func_188(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_187(iParam0, &uVar0);
	Var1 = { func_186(&uVar0) };
}

struct<16> func_186(var uParam0)//Position - 0xA4DE
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_148(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_147(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_146(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_152(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_150(*uParam0), 64);
	return Var0;
}

void func_187(int iParam0, var uParam1)//Position - 0xA5AE
{
	Global_114370.f_24998.f_43[iParam0] = *uParam1;
}

void func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA5C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_150(*uParam0);
	iVar1 = func_152(*uParam0);
	iVar2 = func_149(*uParam0);
	iVar3 = func_148(*uParam0);
	iVar4 = func_147(*uParam0);
	iVar5 = func_146(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_145(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_145(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_189(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA748
{
	func_160(uParam0, iParam1);
	func_159(uParam0, iParam2);
	func_158(uParam0, iParam3);
	func_156(uParam0, iParam5);
	func_157(uParam0, iParam4);
	func_155(uParam0, iParam6);
}

int func_190(int iParam0)//Position - 0xA780
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

