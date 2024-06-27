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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58[2] = { 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<3> Local_65[2];
	float fLocal_72[2] = { 0f, 0f };
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116[2] = { 0, 0 };
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121[2] = { 0, 0 };
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
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	char[] cLocal_137[8] = 0;
	struct<10> Local_138[16];
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = -1;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 1000;
	var uLocal_313 = 1000;
	var uLocal_314 = 0;
	var uLocal_315 = 8;
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
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 1;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	float fLocal_467 = 0f;
	struct<3> Local_468 = { 0, 0, 0 } ;
	struct<3> Local_471 = { 0, 0, 0 } ;
	int iLocal_474 = 0;
	struct<3> Local_475 = { 0, 0, 0 } ;
	float fLocal_478 = 0f;
	int iLocal_479[2] = { 0, 0 };
	int iLocal_482 = 0;
	struct<3> Local_483 = { 0, 0, 0 } ;
	struct<3> Local_486 = { 0, 0, 0 } ;
	struct<3> Local_489 = { 0, 0, 0 } ;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	bool bLocal_494 = 0;
	int iLocal_495 = 0;
	float fLocal_496 = 0f;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	struct<3> Local_499 = { 0, 0, 0 } ;
	int iLocal_502[2] = { 0, 0 };
	int iLocal_505 = 0;
	float fLocal_506 = 0f;
	float fLocal_507 = 0f;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510[2] = { 0, 0 };
	int iLocal_513[2] = { 0, 0 };
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
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_16 = 3;
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
	Local_79 = { 0.0203f, -3.1441f, 0.5027f };
	Local_82 = { 90f, 0f, 0f };
	Local_88 = { 0f, 0f, 0f };
	Local_91 = { 0f, 0f, 0f };
	iLocal_127 = 1;
	iLocal_128 = 1;
	cLocal_137 = "RESECAU";
	iLocal_463 = -1;
	fLocal_467 = -3.55f;
	Local_468 = { 0.014f, -0.9111f, 1.2317f };
	Local_471 = { 0f, -3.4368f, 1.2317f };
	iLocal_492 = -1;
	iLocal_493 = -1;
	iLocal_505 = -1;
	Local_85 = { Local_85 };
	Local_85 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SYSTEM::VDIST(Local_85, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		bLocal_45 = true;
	}
	else if (SYSTEM::VDIST(Local_85, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		bLocal_45 = 2;
	}
	else if (SYSTEM::VDIST(Local_85, -389f, 6061f, 31f) < 5f)
	{
		bLocal_45 = 3;
	}
	else if (SYSTEM::VDIST(Local_85, -600f, -1094f, 22.76f) < 5f)
	{
		bLocal_45 = 4;
	}
	else if (SYSTEM::VDIST(Local_85, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_45 = 5;
	}
	else if (SYSTEM::VDIST(Local_85, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		bLocal_45 = 6;
	}
	else if (SYSTEM::VDIST(Local_85, 3018.3843f, 3634.0168f, 70.4076f) < 5f)
	{
		bLocal_45 = 7;
	}
	else if (SYSTEM::VDIST(Local_85, -2815.6614f, 2208.1707f, 27.8382f) < 5f)
	{
		bLocal_45 = 8;
	}
	else if (SYSTEM::VDIST(Local_85, 856.7742f, -2067.8452f, 29.0704f) < 5f)
	{
		bLocal_45 = 9;
	}
	else if (SYSTEM::VDIST(Local_85, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		bLocal_45 = 10;
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_4)
	{
		if (bLocal_45 != 2)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_52, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[iVar0], iLocal_52, -1, func_248(iLocal_52), 2f, 1, 0, 0);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_85, 9, bLocal_45, 1, 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	iLocal_63 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_75 + Vector(30f, 30f, 30f), Local_75 - Vector(30f, 30f, 30f), false, true, true, true, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_184(&uLocal_315);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SV", 0);
			switch (iLocal_508)
			{
				case 0:
					if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_44 == 3 && !(CAM::IS_SPHERE_VISIBLE(Local_75, 3f) && func_160(PLAYER::PLAYER_PED_ID(), Local_75, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_75, 8f))
									{
										MISC::CLEAR_AREA(Local_75, 4f, true, false, false, false);
									}
									iLocal_46 = 4;
									bLocal_107 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_159();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && iLocal_44 == 3)
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_52, 5f);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_508++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) < 10000f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_52)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1])))
						{
							iLocal_508++;
						}
					}
					if (func_158())
					{
						iLocal_508++;
					}
					if (iLocal_508 != 1)
					{
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 2:
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_153();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_52) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_44 == 3)
						{
							func_148();
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_52) && (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_52) && iLocal_46 == 4) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_94, Local_97, fLocal_100, false, true, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_46 == 4 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_52)) && iLocal_44 != 3)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_508 > 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_52))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) > 62500f)
					{
						func_231();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) > 10000f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!HUD::DOES_BLIP_EXIST(iLocal_61))
			{
				if (!func_138(2) && !bLocal_112)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_137("SV_VANHELP1" /* GXT: If you blow off the doors or destroy a security truck, you will be able to get to the cash inside. */, 15000);
						func_136(2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
				{
					if (iLocal_509 != 0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_54, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 0;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				else if (((bLocal_107 && !OBJECT::DOES_PICKUP_EXIST(iLocal_135)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false)) && !bLocal_119)
				{
					if (iLocal_509 != 1)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 1;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
				{
					if (iLocal_509 != 2)
					{
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = 2;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				if (iLocal_509 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
						func_128(&uLocal_303, iLocal_54, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_54, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				else if (iLocal_509 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, true))
					{
						func_128(&uLocal_303, iLocal_52, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				else if (iLocal_509 == 2)
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
					{
						func_105(&uLocal_303, OBJECT::GET_PICKUP_COORDS(iLocal_135), 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_509 = -1;
							func_135(&uLocal_303, 0, 0);
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_DEAD(iLocal_52, false) && bLocal_107) && !bLocal_109) && (!func_138(0) || (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false) && !func_138(1))))
				{
					switch (iLocal_132)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f)
							{
								func_137("SV_DOORHELP1" /* GXT: When attacking a Security Van damage the center of the rear doors to open them. */, 15000);
								func_136(0);
								iLocal_132++;
							}
							break;
						
						case 1:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_133 = MISC::GET_GAME_TIMER();
								iLocal_132++;
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_133) > 2000 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
							{
								func_137("SV_DOORHELP2" /* GXT: Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open. */, 15000);
								func_136(1);
								iLocal_132++;
							}
							break;
						}
				}
				if (bLocal_109 || bLocal_119)
				{
					if (func_104("SV_DOORHELP1" /* GXT: When attacking a Security Van damage the center of the rear doors to open them. */) || func_104("SV_DOORHELP2" /* GXT: Alternatively, attach a sticky bomb to the rear doors of the van and detonate it to blow them open. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_49[0]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_49[0]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_49[0], 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_49[1]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_49[1], 3);
						}
					}
					if (((!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false)) && !PED::IS_PED_INJURED(iLocal_49[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
					{
						iLocal_127 = 1;
						func_79(iLocal_49[1]);
						func_77(0, 1);
					}
					else if (iLocal_127 == 1)
					{
						if (PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
						{
							iLocal_48 = 0;
							iLocal_127 = 0;
						}
						else
						{
							func_79(iLocal_49[1]);
						}
					}
					else if (iLocal_127 == 0)
					{
						if (PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
						{
							iLocal_127 = -1;
						}
						else
						{
							func_79(iLocal_49[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false) == PLAYER::PLAYER_PED_ID()) && !bLocal_111) && iLocal_46 != 8)
			{
				if (bLocal_107)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_108)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_64, joaat("PLAYER")) != 5)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_64, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_64);
				}
			}
			if (bLocal_109)
			{
				if ((OBJECT::DOES_PICKUP_EXIST(iLocal_135) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_135)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_119)
			{
				if (func_67())
				{
					bLocal_119 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar2]))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar2], false) && !PED::IS_PED_INJURED(iLocal_49[iVar2])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, false))
						{
							iVar3 = 1;
						}
					}
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_52)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_105)
		{
			if (func_28())
			{
				iLocal_125 = MISC::GET_GAME_TIMER();
				bLocal_105 = true;
			}
		}
		if (bLocal_105)
		{
			if (!bLocal_106)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_125) > 5000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					if (func_27() < 30f)
					{
						if (func_4(&Local_138, cLocal_137, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_106 = true;
						}
					}
					else
					{
						bLocal_106 = true;
					}
				}
			}
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_125) > 10000 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && !iLocal_124)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar4 == 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_124 = 1;
		}
		if (bLocal_106)
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < SYSTEM::POW(50f, 2f))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && func_2())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 0) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 1) > 0f)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_52) == 3)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_52, 1);
				}
			}
			if (!bLocal_110)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, false))
				{
					bLocal_110 = true;
				}
			}
			if (!bLocal_110)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 1) == 0f)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_52) == 1)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_52, 3);
					}
				}
			}
		}
		if (iLocal_129 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_129);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar5], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_510[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, true);
								iLocal_510[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_513[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, true);
								iLocal_513[iVar5] = 1;
							}
						}
						if (WEAPON::IS_PED_ARMED(iLocal_49[iVar5], 4) && !iLocal_113)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[iVar5], true);
							iLocal_113 = 1;
						}
					}
					else
					{
						if (iLocal_510[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
							iLocal_510[iVar5] = 0;
						}
						if (iLocal_513[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
							iLocal_513[iVar5] = 0;
						}
						if (iLocal_510[iVar5] || iLocal_513[iVar5])
						{
							iLocal_510[iVar5] = 0;
							iLocal_513[iVar5] = 0;
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
						}
						if (WEAPON::IS_PED_ARMED(iLocal_49[iVar5], 4) && iLocal_113)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_49[iVar5], true);
							iLocal_113 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar5]))
				{
					if (iLocal_510[iVar5] || iLocal_513[iVar5])
					{
						iLocal_510[iVar5] = 0;
						iLocal_513[iVar5] = 0;
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 0, -8f);
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_107 && !bLocal_494)
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED(iLocal_54)) && !PED::IS_PED_INJURED(iLocal_49[iLocal_128])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_hand_override", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_case_into_van_panic", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_case_into_van_calm", 3))
			{
				TASK::TASK_PLAY_ANIM(iLocal_49[iLocal_128], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0f, false, false, false);
			}
		}
		if (!iLocal_114)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_114 = 1;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_52);
			}
		}
	}
}

int func_1()//Position - 0x11BB
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_2()//Position - 0x11D7
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && bLocal_112) && OBJECT::DOES_PICKUP_EXIST(iLocal_135)) || (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && OBJECT::DOES_PICKUP_EXIST(iLocal_135)))) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) < 20f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_135)) < 20f)
	{
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01"))
			{
				return 1;
			}
		}
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_M_Y_Cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("S_F_Y_Cop_01"))
			{
				return 1;
			}
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()//Position - 0x1337
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
			iVar1 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13CA
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)//Position - 0x1418
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_23();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
			if (bParam2)
			{
				func_15();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_14())
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
				if (!Global_79389)
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
			if (func_13())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_12();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_11();
		func_6();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_25();
	}
	return 0;
}

void func_6()//Position - 0x16E6
{
	if (!func_7())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_7()//Position - 0x171D
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_10())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_8(int iParam0)//Position - 0x1780
{
	return func_9(iParam0, 20);
}

var func_9(int iParam0, int iParam1)//Position - 0x1790
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_10()//Position - 0x17A8
{
	return -1;
}

void func_11()//Position - 0x17B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_12()//Position - 0x17E3
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_13()//Position - 0x1878
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x189F
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_15()//Position - 0x1938
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_16();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_16()//Position - 0x19DA
{
	func_17();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_17()//Position - 0x19F3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_19(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_22(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_18(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_18(int iParam0)//Position - 0x1AF0
{
	return iParam0 < 3;
}

int func_19(int iParam0)//Position - 0x1AFC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)//Position - 0x1B39
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)//Position - 0x1B5E
{
	return Global_2169[iParam0 /*29*/];
}

bool func_22(int iParam0)//Position - 0x1B6D
{
	return Global_44042 == iParam0;
}

void func_23()//Position - 0x1B7B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_24(int iParam0, int iParam1)//Position - 0x1BD3
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_25()//Position - 0x1C0B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1C62
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

float func_27()//Position - 0x1CB8
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true));
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_28()//Position - 0x1D42
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_49)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar1]))
			{
				if (((!PED::IS_PED_INJURED(iLocal_49[iVar1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar1], PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_INJURED(iLocal_49[iVar1])) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar1], false))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && iLocal_114)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()//Position - 0x1DE7
{
	if (!bLocal_119)
	{
		if (!bLocal_107)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
				{
					OBJECT::DELETE_OBJECT(&iLocal_54);
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_135) && !bLocal_109)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_134) > 3000)
				{
					if (PED::IS_PED_INJURED(iLocal_49[iLocal_128]) || PED::IS_PED_RAGDOLL(iLocal_49[iLocal_128]))
					{
						ENTITY::DETACH_ENTITY(iLocal_54, true, true);
						iLocal_134 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (!OBJECT::DOES_PICKUP_EXIST(iLocal_135))
			{
				if (PED::IS_PED_INJURED(iLocal_49[iLocal_128]) || ((!PED::IS_PED_INJURED(iLocal_49[iLocal_128]) && PED::IS_PED_RAGDOLL(iLocal_49[iLocal_128])) && !bLocal_109))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			OBJECT::DELETE_OBJECT(&iLocal_54);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
		{
			OBJECT::REMOVE_PICKUP(iLocal_135);
		}
	}
}

void func_30(struct<3> Param0, bool bParam3)//Position - 0x1ED4
{
	if (!bLocal_119 && !bLocal_109)
	{
		if (!bParam3)
		{
			if (bLocal_107)
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_49[iLocal_128], false), 1.2f, 1.5f) };
			}
		}
		MISC::SET_BIT(&iLocal_136, 3);
		MISC::SET_BIT(&iLocal_136, 4);
		MISC::SET_BIT(&iLocal_136, 1);
		if (bParam3)
		{
			iLocal_135 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_SECURITY_CASE"), Param0, ENTITY::GET_ENTITY_ROTATION(iLocal_54, 2), 0, iLocal_126, 2, true, 0);
		}
		else
		{
			iLocal_135 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_SECURITY_CASE"), Param0, iLocal_136, iLocal_126, true, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_62))
		{
			iLocal_62 = func_31(iLocal_135);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			OBJECT::DELETE_OBJECT(&iLocal_54);
		}
		bLocal_109 = true;
	}
}

int func_31(int iParam0)//Position - 0x1FA6
{
	return func_32(iParam0);
}

int func_32(int iParam0)//Position - 0x1FB4
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_33(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)//Position - 0x1FEC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()//Position - 0x2003
{
	if (func_36())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_52, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_52, 3, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
			{
				OBJECT::DELETE_OBJECT(&iLocal_55);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_107)
			{
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 2) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 3) == 0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
					{
						ENTITY::DETACH_ENTITY(iLocal_54, true, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_54, iLocal_52, 0, Local_79, Local_82, false, false, false, false, 2, true, 0);
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_109 && !bLocal_119)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 2) > 0.25f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 3) > 0.25f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), "DOORS_BLOWN", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_52, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								ENTITY::DETACH_ENTITY(iLocal_54, true, false);
								ENTITY::SET_ENTITY_COLLISION(iLocal_54, true, false);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_54);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_54, true);
								Local_475 = { ENTITY::GET_ENTITY_COORDS(iLocal_54, true) - ENTITY::GET_ENTITY_COORDS(iLocal_52, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(Local_475) > 10f)
								{
									Local_475 = { func_35(Local_475) };
									Local_475 = { Local_475 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_131 < 100)
								{
									iLocal_115 = 1;
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_54, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_474 = MISC::GET_GAME_TIMER();
							}
							else if (MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iLocal_54, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, Local_468), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, Local_471), false) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_121[0] = 0;
								iLocal_121[1] = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_474) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_52, 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_52, 3, false, false);
					func_30(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_46 != 8)
			{
				func_68(8);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !OBJECT::DOES_PICKUP_EXIST(iLocal_135))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_54) == 0f && (MISC::GET_GAME_TIMER() - iLocal_474) > 1000)
				{
					func_30(ENTITY::GET_ENTITY_COORDS(iLocal_54, true), 1);
					OBJECT::DELETE_OBJECT(&iLocal_54);
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_474) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)//Position - 0x22B4
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

int func_36()//Position - 0x22F3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_55) && ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
	{
		if (!iLocal_464)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_55, true), joaat("WEAPON_STICKYBOMB"), 0.25f, false) || OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_55, true), 0.3f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_STICKYBOMB")), false))
			{
				iLocal_464 = 1;
			}
		}
		iVar0 = 0;
		GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_55, true), 0.1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_55, true), 1f, 1) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_55, true), 0.3f) && iLocal_464))
		{
			iLocal_115 = 1;
			iVar0 = 1;
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_55) < iLocal_130 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_131 = (iLocal_131 + (iLocal_130 - ENTITY::GET_ENTITY_HEALTH(iLocal_55)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_55);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_465) > 200 && ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			if (MISC::IS_BULLET_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 0f, (1.2195f - 0.27f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, fLocal_467, (1.2195f + 0.09f)), 0.45f, true))
			{
				iLocal_465 = MISC::GET_GAME_TIMER();
				iLocal_466++;
			}
		}
		if (iLocal_466 > 5)
		{
			return 1;
		}
		if (iLocal_131 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_130 = ENTITY::GET_ENTITY_HEALTH(iLocal_55);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)//Position - 0x245C
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param3))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param3, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param6, fParam9) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)//Position - 0x2867
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()//Position - 0x2891
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!HUD::DOES_BLIP_EXIST(iLocal_61))
	{
		if (!bLocal_108)
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false)) && !bLocal_119)
			{
				if (!bLocal_107)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_58[1]))
					{
						uLocal_58[1] = func_42(iLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_58[1]));
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_57))
					{
						iLocal_57 = func_40(iLocal_52, 0, 0);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_58[1]));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					HUD::REMOVE_BLIP(&iLocal_57);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_58[0]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_58[0]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_58[0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_58[1]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_58[1]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_58[1]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_57) && HUD::GET_BLIP_HUD_COLOUR(iLocal_57) != 119)
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_52, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_57))
				{
					iLocal_57 = func_40(iLocal_52, 1, 0);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_57))
			{
				HUD::REMOVE_BLIP(&iLocal_57);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && HUD::DOES_BLIP_EXIST(iLocal_57)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, false))
				{
					if (HUD::GET_BLIP_ALPHA(iLocal_57) != 0)
					{
						HUD::SET_BLIP_ALPHA(iLocal_57, 0);
					}
				}
				else if (HUD::GET_BLIP_ALPHA(iLocal_57) != 255)
				{
					HUD::SET_BLIP_ALPHA(iLocal_57, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_135) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
					{
						if (!PED::IS_PED_FLEEING(iLocal_49[iVar0]) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_58[iVar0]))
					{
						uLocal_58[iVar0] = func_42(iLocal_49[iVar0], 1, 145);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_58[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_58[iVar0]));
				}
				iVar0++;
			}
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_135) && !bLocal_119)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_62))
				{
					iLocal_62 = func_32(iLocal_135);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_62))
			{
				HUD::REMOVE_BLIP(&iLocal_62);
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
	{
		if ((((((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_52) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 100f, 100f, 30f, false, true, 0)) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 100f, 100f, 30f, false, true, 0))) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 100f, 100f, 30f, false, true, 0))) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[0], 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 50f, 50f, 20f, false, true, 0))
		{
			HUD::REMOVE_BLIP(&iLocal_61);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_58[0]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58[0], iLocal_120);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_58[1]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_58[1], bLocal_120);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_57))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57, bLocal_120);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_62))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_62, bLocal_120);
	}
	if (!bLocal_120)
	{
		if (bLocal_108 || iLocal_47 == 3)
		{
			bLocal_120 = false;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D31
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D44
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_33(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_33(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_33(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_42(int iParam0, bool bParam1, int iParam2)//Position - 0x2DE8
{
	int iVar0;
	
	iVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_43()//Position - 0x2E32
{
	func_45(9, bLocal_45);
	while (!func_44())
	{
		SYSTEM::WAIT(0);
	}
	func_231();
}

int func_44()//Position - 0x2E56
{
	return 1;
}

void func_45(int iParam0, bool bParam1)//Position - 0x2E5F
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_64(iParam0))
	{
		func_63(iParam0, bParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_55(iParam0, bParam1) != 322)
		{
			func_47(func_55(iParam0, bParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113957 = bParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_46(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)//Position - 0x2F63
{
	Global_113955 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)//Position - 0x2F71
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
		func_53((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_48();
	}
}

void func_48()//Position - 0x3057
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113711 + Global_113710), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113694 + Global_113693), true);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
	{
		func_52(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_51() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()//Position - 0x3515
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_50(bool bParam0)//Position - 0x3560
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_51()//Position - 0x3588
{
	return Global_32948;
}

int func_52(int iParam0, int iParam1)//Position - 0x3593
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

void func_53(int iParam0, bool bParam1, int iParam2)//Position - 0x35E4
{
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_54()//Position - 0x3602
{
	return Global_1574926;
}

int func_55(int iParam0, int iParam1)//Position - 0x360E
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

int func_56(int iParam0)//Position - 0x3982
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

void func_57(int iParam0)//Position - 0x39B1
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
		MISC::SET_BIT(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x39F3
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x3A15
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
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_60();
	}
}

void func_60()//Position - 0x3BE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_61()//Position - 0x3D00
{
	func_17();
	switch (Global_113969.f_2366.f_539.f_4321)
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

int func_62(int iParam0)//Position - 0x3D46
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
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_63(int iParam0, int iParam1)//Position - 0x3D86
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)//Position - 0x3DA1
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

int func_65()//Position - 0x3E52
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_66(Var0);
	return uVar16;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x3E6F
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

int func_67()//Position - 0x404A
{
	if (bLocal_109)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_135))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)//Position - 0x4065
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_69()//Position - 0x4074
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_135))
	{
		if (bLocal_107)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				if (!func_70(iLocal_52))
				{
					if (iLocal_463 == -1)
					{
						iLocal_463 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_463 != -1)
				{
					iLocal_463 = -1;
				}
			}
		}
		if (!bLocal_107)
		{
			if (iLocal_128 != -1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
				{
					if (!func_70(iLocal_52))
					{
						if (iLocal_463 == -1)
						{
							iLocal_463 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_463 != -1)
					{
						iLocal_463 = -1;
					}
				}
			}
		}
		if (iLocal_463 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_463) > 3000)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_49[1]));
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -1000f, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_52, true, false);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_52);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_463 != -1)
		{
			iLocal_463 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(OBJECT::GET_PICKUP_COORDS(iLocal_135), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x417E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()//Position - 0x41EF
{
	int iVar0;
	int iVar1;
	
	if (iLocal_505 == -1)
	{
		iLocal_505 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_108 = true;
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (func_27() < 30f && !PED::IS_PED_INJURED(Local_138[3 /*10*/]))
					{
						func_4(&Local_138, cLocal_137, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
						if ((iVar0 != iLocal_128 || bLocal_107) || !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[iVar0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], false))
							{
								if (iLocal_115)
								{
									if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic"))
									{
										PED::SET_PED_MOVEMENT_CLIPSET(iLocal_49[iVar0], "move_injured_generic", 0.25f);
										iLocal_116[iVar0] = 1;
									}
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							}
							TASK::TASK_CLEAR_LOOK_AT(0);
							if (iLocal_116[iVar0])
							{
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							}
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar0], iLocal_56);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 6, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_49[iVar0], 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_49[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED(iLocal_54)) && !PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_128]);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_48++;
				break;
			
			case 1:
				if (func_76(iLocal_128))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[iLocal_128]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iLocal_128], false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iLocal_128], iLocal_56);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
					{
						if (Local_138[3 /*10*/] != iLocal_49[1])
						{
							func_75(&Local_138, 3);
							func_75(&Local_138, 4);
							func_74(&Local_138, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_49)
					{
						if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_121[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[iVar0], iLocal_52, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -4f, 0f), 5f, false);
								iLocal_121[iVar0] = 1;
							}
							if (((OBJECT::DOES_PICKUP_EXIST(iLocal_135) && !iLocal_121[iVar0]) && iLocal_47 == 3) && !bLocal_119)
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_49[iVar0], iLocal_52, OBJECT::GET_PICKUP_COORDS(iLocal_135), 5f, false);
								iLocal_121[iVar0] = 1;
							}
							if (bLocal_119)
							{
								if (iLocal_121[iVar0])
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_49[iVar0], false);
									iLocal_121[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_498)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
							{
								if (func_4(&Local_138, cLocal_137, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_498 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
					{
						if (!bLocal_107)
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, false) && (MISC::GET_GAME_TIMER() - iLocal_505) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_107)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_121[0] = 0;
									iLocal_121[1] = 0;
									iLocal_505 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_116[iVar0])
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_49[iVar0], 0.25f);
					iLocal_116[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()//Position - 0x46BF
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_482) > 250)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), 19) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_479[iVar0] = 1;
					}
					else
					{
						iLocal_479[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_479[0] || iLocal_479[1]);
}

int func_73()//Position - 0x474C
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x476E
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

void func_75(var uParam0, int iParam1)//Position - 0x4809
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)//Position - 0x4826
{
	bool bVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						ENTITY::DETACH_ENTITY(iLocal_54, true, true);
						OBJECT::DELETE_OBJECT(&iLocal_54);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], true);
					TASK::TASK_PLAY_ANIM(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
				}
			}
		}
	}
	bVar0 = (!ENTITY::DOES_ENTITY_EXIST(iLocal_54) || (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iParam0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)//Position - 0x490A
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	int iVar14;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { func_35(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_52, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) };
		fVar3 = ((ENTITY::GET_ENTITY_HEADING(iLocal_52) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((ENTITY::GET_ENTITY_HEADING(iLocal_52) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), fVar4, 0f, 4.5f, 0f) };
		func_78(&fVar3);
		func_78(&fVar4);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_499) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar12]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar12], true), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_49)
			{
				if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar12]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar12], true), Var5[iVar12 /*3*/]) > 2f) && (MISC::GET_GAME_TIMER() - iLocal_502[iVar12]) > 1000) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar12], false)) && !iLocal_479[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_499 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar14);
						if (func_72() || func_38(Local_499))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var5[iVar12 /*3*/], PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var5[iVar12 /*3*/], Local_499, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_499, -1, true, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar14);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar12], iVar14);
						TASK::CLEAR_SEQUENCE_TASK(&iVar14);
					}
					iLocal_502[iVar12] = MISC::GET_GAME_TIMER();
				}
				iVar12++;
			}
		}
	}
}

void func_78(float fParam0)//Position - 0x4B6F
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)//Position - 0x4BAA
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_107)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					TASK::CLEAR_PED_TASKS(iParam0);
					Local_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_52, 0) };
					Local_486 = { ENTITY::GET_ENTITY_ROTATION(iLocal_52, 2) };
					Local_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_panic", Local_483, Local_486, 0f, 2) };
					if (((!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false)) && !PED::IS_PED_INJURED(iLocal_49[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
					{
						if (func_27() < 20f)
						{
							if (bLocal_108)
							{
								func_4(&Local_138, cLocal_137, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
						{
							if (bLocal_108)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_135), 2f, -1, 0.25f, 0, 40000f);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_135), 1f, -1, 0.25f, 0, 40000f);
							}
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_135), 2f, -1, 0.25f, 0, 40000f);
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iParam0) && OBJECT::DOES_PICKUP_EXIST(iLocal_135))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), OBJECT::GET_PICKUP_COORDS(iLocal_135), true) < 2f && !PED::IS_PED_RAGDOLL(iParam0)) && (MISC::GET_GAME_TIMER() - iLocal_134) > 3000)
					{
						if (WEAPON::IS_PED_ARMED(iParam0, 4))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true);
						}
						OBJECT::REMOVE_PICKUP(iLocal_135);
						func_85(iParam0);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true);
						bLocal_109 = false;
						iLocal_128 = iLocal_127;
						iLocal_48++;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
					{
						if (bLocal_108)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_489, 2f, -1, 0.1f, 512, Local_486.f_2);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_489, 1f, -1, 0.1f, 512, Local_486.f_2);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
					{
						iLocal_48 = 0;
					}
					else
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_486.f_2 > 180f)
						{
							Local_486.f_2 = (Local_486.f_2 - 360f);
						}
						if (Local_486.f_2 <= -180f)
						{
							Local_486.f_2 = (Local_486.f_2 + 360f);
						}
						if (SYSTEM::VDIST(Local_489, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 0.3f)
						{
							if (MISC::ABSF((fVar0 - Local_486.f_2)) < 15f)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iParam0, -8f);
								TASK::CLEAR_PED_TASKS(iParam0);
								bLocal_494 = true;
								iLocal_492 = PED::CREATE_SYNCHRONIZED_SCENE(Local_483, Local_486, 2);
								if (bLocal_108)
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_492, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, iLocal_492, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_492, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, iLocal_492, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
								iLocal_48++;
							}
						}
						else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0) && !CAM::IS_SPHERE_VISIBLE(Local_483, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0, Local_483, true, false, false, true);
						}
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (bLocal_108)
					{
						fLocal_506 = 0.42f;
					}
					else
					{
						fLocal_506 = 0.3893f;
					}
					if (bLocal_108)
					{
						fLocal_507 = 0.52f;
					}
					else
					{
						fLocal_507 = 0.546243f;
					}
					if (!bLocal_107)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iParam0)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_506)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_52))
							{
								ENTITY::DETACH_ENTITY(iLocal_54, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_54, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_54, iLocal_52, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_52, ENTITY::GET_ENTITY_COORDS(iLocal_54, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_107 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_507)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -4f, true);
						TASK::CLEAR_PED_TASKS(iParam0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							iLocal_104 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 3, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > fLocal_507) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (!bLocal_108)
					{
						if (!PED::IS_PED_INJURED(iLocal_49[0]))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_52, -1, -1, 1f, 1, 0, 0);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
				{
					if (bLocal_108)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1]))
		{
			func_68(8);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_107)
		{
			if ((((((func_27() < 10f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_72()) || ((func_27() < 20f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))) || (func_27() < 5f && bLocal_108)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_107)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -8f, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && iLocal_46 != 7) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -8f, true);
	}
}

int func_80(int iParam0)//Position - 0x5292
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		uVar59 = 4;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, fVar73, 1.5f, 0f) };
		if (!bLocal_107)
		{
			if (func_81(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, true))
		{
			if (func_81(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, true))
		{
			if (func_81(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)//Position - 0x54DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)//Position - 0x5562
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)//Position - 0x569A
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)//Position - 0x56B4
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)//Position - 0x56CE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			iLocal_54 = OBJECT::CREATE_OBJECT(iLocal_103, Local_75, true, true, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_54, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_54, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_88, Local_91, true, false, false, false, 2, true, 0);
		}
	}
}

void func_86()//Position - 0x5729
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_108 = true;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
				{
					if (!PED::IS_PED_INJURED(func_89()))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false) != func_89() && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_52, -1, false))
						{
							TASK::TASK_ENTER_VEHICLE(func_89(), iLocal_52, 20000, -1, 2f, 1, 0, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_49[1]) && func_89() != iLocal_49[1])
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, 0, false) != iLocal_49[1] && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_52, 0, false))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_52, -1, 0, 2f, 1, 0, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_89(), iLocal_52, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_89()))
				{
					TASK::TASK_VEHICLE_MISSION(func_89(), iLocal_52, 0, 5, 0f, 786484, 100f, 100f, true);
					iLocal_48++;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_52) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_52) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false))) && (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false), false) || PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false))))
	{
		iVar1 = 0;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_52, -1, false) == iLocal_49[0])
		{
			iVar1 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_52, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar1]) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[iVar1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar1], 2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_52, false);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_52, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar1], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) || OBJECT::DOES_PICKUP_EXIST(iLocal_135)) || iLocal_47 == 3) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_52, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_52, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_52, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_52, 1, 40000)) || (iLocal_48 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()//Position - 0x5A3F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_52))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_52, false))
		{
			if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_52) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_52) < 200f) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 1, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 5, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 4, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_52, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()//Position - 0x5AEB
{
	int iVar0;
	
	iVar0 = 1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, false))
			{
				iVar0 = 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, false))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()//Position - 0x5B68
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
	{
		return iLocal_49[0];
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
	{
		return iLocal_49[1];
	}
	return 0;
}

void func_90()//Position - 0x5BC1
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_107)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
				{
					ENTITY::DETACH_ENTITY(iLocal_54, true, true);
				}
			}
			if ((!PED::IS_PED_INJURED(iLocal_49[0]) || !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_138, cLocal_137, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 17, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 16, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iVar0], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_49[iVar0], 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_111 = true;
			iLocal_48++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				if (func_91(iLocal_52, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x5D17
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)//Position - 0x5DFB
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5E5B
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_94()//Position - 0x5EF6
{
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_4(&Local_138, cLocal_137, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[0]))
						{
							func_95(0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						}
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[1]))
						{
							func_95(1);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_48 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_128))
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
					{
						func_95(iLocal_128);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_138, cLocal_137, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if ((SYSTEM::TIMERA() > 12000 && !func_73()) && func_4(&Local_138, cLocal_137, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_48++;
				}
				break;
			
			case 4:
				if ((SYSTEM::TIMERA() > 7000 && !func_73()) && func_4(&Local_138, cLocal_137, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_77(-1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_53, true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) > 10f)
			{
				func_68(7);
			}
		}
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_53, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false)) || (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_53, 90f) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, true)))
		{
			if (!func_80(iLocal_53))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_114)
		{
			func_68(8);
		}
	}
	if (bLocal_119)
	{
		func_68(8);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_72()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
	{
		func_68(2);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		func_68(5);
	}
}

void func_95(int iParam0)//Position - 0x61EB
{
	if (!PED::IS_PED_INJURED(iLocal_49[iParam0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(iLocal_49[iParam0]);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_49[iParam0], false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		}
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_49[iParam0], iLocal_56);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
		if (iLocal_129 == 0)
		{
			iLocal_129 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(118 /*EVENT_SHOCKING_SEEN_WEAPON_THREAT*/, ENTITY::GET_ENTITY_COORDS(iLocal_49[iParam0], true), -1f);
		}
	}
}

void func_96()//Position - 0x6288
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
			}
			if (func_103())
			{
				if (func_4(&Local_138, cLocal_137, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_68(8);
				}
			}
			else if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_138, cLocal_137, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					func_4(&Local_138, cLocal_137, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_138, cLocal_137, "RESEC_WARN", 8, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED(iLocal_54))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[0]))
					{
						func_95(0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[1]))
					{
						func_95(1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_128))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iLocal_128]))
				{
					func_95(iLocal_128);
				}
				iLocal_48++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_52, 1000) && SYSTEM::TIMERA() > 10000)
				{
					bVar0 = true;
				}
				else if (SYSTEM::TIMERA() > 7000)
				{
					SYSTEM::SETTIMERA(7000);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_49)
				{
					if (!func_99(iLocal_49[iVar1], 1000) && (func_27() < 2f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
					{
						bVar0 = true;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar1], false))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_498)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_138, cLocal_137, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_498 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_49)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar2]))
		{
			if ((PED::IS_PED_INJURED(iLocal_49[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar2], false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar2], PLAYER::PLAYER_PED_ID(), false))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((PED::IS_PED_INJURED(iLocal_49[0]) || PED::IS_PED_INJURED(iLocal_49[1])) || bLocal_119)
	{
		func_68(8);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_72())
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true))
		{
			func_68(8);
		}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		func_68(5);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_479[0] && !iLocal_479[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()//Position - 0x6680
{
	Global_21152 = 0;
	func_98();
}

void func_98()//Position - 0x6690
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

int func_99(int iParam0, int iParam1)//Position - 0x66B1
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if ((ENTITY::IS_ENTITY_A_PED(iParam0) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false)))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > fLocal_496)
				{
					iVar0 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_497) > iParam1)
				{
					fLocal_496 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
					iLocal_497 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	return iVar0;
}

int func_100()//Position - 0x6751
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_52, 20f, 20f, 5f, false, true, 0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()//Position - 0x67A1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 1.7532f, 0.5984f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(iLocal_49[iVar0], iLocal_52, false) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()//Position - 0x6863
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_52)
		{
			if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()//Position - 0x68A0
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_INJURED(iLocal_49[0]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)) || (!PED::IS_PED_INJURED(iLocal_49[1]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)//Position - 0x692F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x6942
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_106(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)//Position - 0x6978
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_122(uParam0, bParam6, bParam8, 0))
		{
			func_121(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_104(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)//Position - 0x6C52
{
	if (func_108(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_108(int iParam0)//Position - 0x6CBB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(var uParam0)//Position - 0x6D16
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_110(bool bParam0)//Position - 0x6D41
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113969.f_10052.f_100++;
			}
			return Global_113969.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113969.f_10052.f_101++;
			}
			return Global_113969.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113969.f_10052.f_102++;
			}
			return Global_113969.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_111(char* sParam0)//Position - 0x6DEB
{
	if (!func_112(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_104(sParam0)) || func_104("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6E84
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61347)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_118() || func_117(Global_4718592.f_185586)) || func_116())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_115(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_114(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955929)
	{
		return 0;
	}
	if (func_113(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)//Position - 0x70DD
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == PLAYER::PLAYER_ID()) && func_92(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x7143
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_115(int iParam0, bool bParam1)//Position - 0x71A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_116()//Position - 0x722A
{
	return Global_2684504.f_19;
}

bool func_117(int iParam0)//Position - 0x7238
{
	return iParam0 == 51;
}

var func_118()//Position - 0x7245
{
	return Global_2684504.f_18;
}

bool func_119()//Position - 0x7253
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

int func_120(int iParam0)//Position - 0x7268
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, struct<3> Param1, int iParam4)//Position - 0x72BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x735B
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)//Position - 0x76C7
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7719
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7762
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)//Position - 0x77C1
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_127()//Position - 0x7817
{
	MISC::SET_BIT(&Global_8801, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x7827
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x7844
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x787C
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_122(uParam0, bParam7, bParam9, 0))
			{
				func_131(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_104(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x7BE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582021 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_135(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_132())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()//Position - 0x7CF9
{
	return func_133(PLAYER::PLAYER_ID());
}

int func_133(int iParam0)//Position - 0x7D09
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x7D28
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_135(var uParam0, int iParam1, bool bParam2)//Position - 0x7D6F
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2738934.f_4712, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_104(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_136(int iParam0)//Position - 0x7E49
{
	MISC::SET_BIT(&(Global_113969.f_24998.f_6), iParam0);
}

void func_137(char* sParam0, int iParam1)//Position - 0x7E60
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_138(int iParam0)//Position - 0x7E77
{
	return BitTest(Global_113969.f_24998.f_6, iParam0);
}

int func_139(int iParam0)//Position - 0x7E8B
{
	if (func_142())
	{
		Global_113959 = 1;
		Global_113956 = MISC::GET_GAME_TIMER();
		if (func_56(Global_113958))
		{
			func_140(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_56(Global_113958))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)//Position - 0x7EDE
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_137(func_141(iParam0), -1);
					Global_113969.f_24998.f_2++;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_137(func_141(iParam0), -1);
					Global_113969.f_24998.f_3++;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_137(func_141(iParam0), -1);
					Global_113969.f_24998.f_4++;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)//Position - 0x7FB9
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

int func_142()//Position - 0x7FFD
{
	switch (func_143(&Global_33008, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8036
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_147(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_145(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)//Position - 0x816D
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_145(int iParam0)//Position - 0x81BC
{
	return func_146(iParam0, Global_44042);
}

int func_146(int iParam0, int iParam1)//Position - 0x81CD
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

int func_147(int iParam0)//Position - 0x83AE
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()//Position - 0x83D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], 6, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], true);
					if (PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, false) && PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, false))
					{
						if (bLocal_45 == 2)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_52, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iLocal_48++;
						}
						else if (bLocal_45 == 4)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_52, -551.2968f, -1119.4176f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							iLocal_48++;
						}
						else if (bLocal_45 == 7)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_52, 2786.7524f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_52, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_49[0], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							iLocal_48++;
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_49[0], iLocal_52, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_52, -1, -1, 1f, 8388608, 0, 0);
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_52, -1, 0, 1f, 8388608, 0, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_138, cLocal_137, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iVar3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar3], false))
					{
						if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, true))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true);
			if ((iVar4 == joaat("WEAPON_STICKYBOMB") || iVar4 == joaat("WEAPON_MOLOTOV")) || iVar4 == joaat("WEAPON_GRENADE"))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("PLAYER HAS PROJECTILE WEAPON", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 255, 255);
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -13.44f, 3f), 2.3f, false, true, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) < 225f)
				{
					func_68(6);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, -13.44f, 3f), 2.3f, false, true, 0))
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_52, true)) < 225f)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_46 != 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[0], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[0], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_49[1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[1], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49[1], false);
			}
		}
	}
}

int func_149()//Position - 0x891A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_52, true) };
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_52) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_52, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (((Var6.f_1 > 1f && (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_52) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_52)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[1]))) && MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()//Position - 0x8A0A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 2.7f, -3.25f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, -2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, -2.7f, -3.25f, 3f), 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_52, 0f, 0f, 3f), 2.4f, false, true, 0))
		{
			if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()//Position - 0x8ACB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iLocal_52))
		{
			return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_52)) && ENTITY::GET_ENTITY_SPEED(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()//Position - 0x8B64
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_114)
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_49[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_49[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_49[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()//Position - 0x8BE6
{
	float fVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_49[0]) && !PED::IS_PED_INJURED(iLocal_49[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		switch (iLocal_48)
		{
			case 0:
				Local_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_52, 0) };
				Local_486 = { ENTITY::GET_ENTITY_ROTATION(iLocal_52, 2) };
				Local_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_483, Local_486, 0f, 2) };
				bLocal_494 = false;
				iLocal_495 = 0;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_52, 5f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
				TASK::TASK_STAND_STILL(0, 5000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_489, 1f, -1, 0.1f, 512, Local_486.f_2);
				TASK::TASK_ACHIEVE_HEADING(0, Local_486.f_2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_56);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
				iLocal_48++;
				break;
			
			case 1:
				Local_483 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_52, 0) };
				Local_486 = { ENTITY::GET_ENTITY_ROTATION(iLocal_52, 2) };
				Local_489 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_483, Local_486, 0f, 2) };
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_75) < 22500f && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_52))
					{
						iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(Local_483, Local_486, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_493, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_493, true);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_56);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_489, 1f, -1, 0.1f, 512, Local_486.f_2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_486.f_2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_56);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_49[1], iLocal_56);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_56);
				}
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_49[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_486.f_2 > 180f)
				{
					Local_486.f_2 = (Local_486.f_2 - 360f);
				}
				if (Local_486.f_2 <= -180f)
				{
					Local_486.f_2 = (Local_486.f_2 + 360f);
				}
				if (MISC::ABSF((fVar0 - Local_486.f_2)) < 15f && SYSTEM::VDIST(Local_489, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true)) < 0.2f)
				{
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_49[1], -8f);
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					bLocal_494 = true;
					iLocal_492 = PED::CREATE_SYNCHRONIZED_SCENE(Local_483, Local_486, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[1], iLocal_492, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, iLocal_492, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!iLocal_104)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.09f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) < 0.11f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
						{
							if (func_4(&Local_138, cLocal_137, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_104 = 1;
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
				{
					if (!bLocal_107)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_54) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_49[1])) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.3793f)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_54, iLocal_52))
							{
								ENTITY::DETACH_ENTITY(iLocal_54, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_54, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_54, iLocal_52, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_52, ENTITY::GET_ENTITY_COORDS(iLocal_54, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_107 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.546243f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -4f, true);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
						{
							iLocal_104 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 3, true);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_104)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.56f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_49[1], 20f, 20f, 5f, false, true, 0))
					{
						if (func_4(&Local_138, cLocal_137, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_104 = 1;
						}
					}
				}
				if (!iLocal_495)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_492) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49[0]);
							iLocal_493 = PED::CREATE_SYNCHRONIZED_SCENE(Local_483, Local_486, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_49[0], iLocal_493, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_495 = 1;
					}
				}
				else if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_493) >= 0.92f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_493))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_49[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_ENTER_VEHICLE(iLocal_49[0], iLocal_52, -1, -1, 1f, 1, 0, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_49[1], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_49[1]);
					TASK::TASK_ENTER_VEHICLE(iLocal_49[1], iLocal_52, -1, 0, 1f, 1, 0, 0);
					SYSTEM::SETTIMERA(0);
				}
				if ((func_88() && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 0) == 0f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_52, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 0, true);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 1, true);
				}
				break;
		}
		if (((!PED::IS_PED_INJURED(func_3()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < 30f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			func_68(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[1]))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
		{
			func_68(7);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_97();
			if (!PED::IS_PED_INJURED(iLocal_49[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_45 != 2)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_49[0], "random@security_van", "driver_exit_panic", Local_483, Local_486, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[0]);
						TASK::TASK_PLAY_ANIM(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0f, false, false, false);
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_492)) && !PED::IS_PED_INJURED(iLocal_49[1]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_52, -1000f, true);
				TASK::CLEAR_PED_TASKS(iLocal_49[1]);
			}
		}
		if (bLocal_107 && !OBJECT::DOES_PICKUP_EXIST(iLocal_135))
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 2, true);
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_52, 3, true);
		}
	}
}

int func_154()//Position - 0x9385
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (func_80(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_53 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					return 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (func_80(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				fLocal_478 = (fLocal_478 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_478 > 0f)
			{
				fLocal_478 = (fLocal_478 - (MISC::GET_FRAME_TIME() * 10f));
			}
			else if (fLocal_478 < 0f)
			{
				fLocal_478 = 0f;
			}
			if (fLocal_478 > 3f)
			{
				iLocal_53 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()//Position - 0x943B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_49[iVar0]) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true)) < 9f) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7)) && func_72())
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_52, false) || !PED::IS_PED_IN_VEHICLE(iLocal_49[1], iLocal_52, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()//Position - 0x953D
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (iVar0 == joaat("WEAPON_PETROLCAN") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_49[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[0], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_49[1]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_49[1], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()//Position - 0x95EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (!PED::IS_PED_INJURED(iLocal_49[iVar0]) && PED::IS_PED_IN_COMBAT(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID()))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52, PLAYER::PLAYER_PED_ID(), true) && func_72())) || PED::IS_PED_INJURED(iLocal_49[iVar0])) || ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], false))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
			{
				if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_52, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_75, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_52, false) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_52, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_49[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()//Position - 0x97E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			if ((!PED::IS_PED_INJURED(iLocal_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_49[iVar0], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true), 5f, true) || func_37(ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_49[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_49[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					bLocal_108 = true;
					return 1;
				}
			}
			else
			{
				bLocal_108 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()//Position - 0x98A6
{
	int iVar0;
	
	iLocal_52 = VEHICLE::CREATE_VEHICLE(iLocal_102, Local_75, fLocal_78, true, true, false);
	iLocal_55 = OBJECT::CREATE_OBJECT(joaat("prop_security_case_01"), Local_75, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_55, iLocal_52, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_55, false, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_55, iLocal_52, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_52, 5f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_52, 3);
	ENTITY::SET_ENTITY_PROOFS(iLocal_55, false, true, true, true, true, true, false, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_52, true, 0f);
	ENTITY::SET_ENTITY_HEALTH(iLocal_52, 700, 0, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_52, false, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
	VEHICLE::SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(iLocal_52, false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_52, true);
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Local_75.f_0 - 200f), (Local_75.f_1 - 200f), (Local_75.f_0 + 200f), (Local_75.f_1 + 200f));
	if (iLocal_44 == 3)
	{
		iLocal_49[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_52, 26, iLocal_101, -1, true, true);
		iLocal_49[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_52, 26, iLocal_101, 0, true, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_52, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52, true, 1);
	}
	else
	{
		iLocal_49[1] = PED::CREATE_PED(26, iLocal_101, Local_65[1 /*3*/], fLocal_72[1], true, true);
		iLocal_49[0] = PED::CREATE_PED(26, iLocal_101, Local_65[0 /*3*/], fLocal_72[0], true, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}
	func_85(iLocal_49[1]);
	PED::ADD_RELATIONSHIP_GROUP("Security_guards", &iLocal_64);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		PED::SET_PED_MONEY(iLocal_49[iVar0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 6, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 8, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_49[iVar0], 10, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 512, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_49[iVar0], 118, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_49[iVar0], 128, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_49[iVar0], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_49[iVar0], true, 0f);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_49[iVar0], true);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_49[iVar0], true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_49[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_49[iVar0], iLocal_64);
		PED::SET_PED_KEEP_TASK(iLocal_49[iVar0], true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_49[iVar0], 250);
		iVar0++;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_49[1], true, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_64);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_64, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_64, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_64);
	if (iLocal_44 == 1)
	{
		PED::SET_PED_PROP_INDEX(iLocal_49[0], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[0], false);
		PED::SET_PED_PROP_INDEX(iLocal_49[1], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_49[1], false);
	}
	if (func_16() == 0 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_74(&Local_138, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_74(&Local_138, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_74(&Local_138, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_74(&Local_138, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	func_74(&Local_138, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_102, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_101, true);
	if (iLocal_44 != 3)
	{
	}
}

float func_160(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x9C1D
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

bool func_161()//Position - 0x9C57
{
	func_169(&uLocal_315, iLocal_101);
	func_169(&uLocal_315, iLocal_102);
	func_169(&uLocal_315, iLocal_103);
	func_167(&uLocal_315, "random@security_van");
	func_167(&uLocal_315, "weapons@holster_1h");
	func_167(&uLocal_315, "move_injured_generic");
	func_166(&uLocal_315, 3);
	return func_162(&uLocal_315);
}

int func_162(var uParam0)//Position - 0x9CA9
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)//Position - 0x9D05
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(char* sParam0, char* sParam1, int iParam2)//Position - 0x9D1C
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_165(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(var uParam0)//Position - 0x9E07
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_166(var uParam0, int iParam1)//Position - 0x9E30
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)//Position - 0x9E47
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x9E5A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)//Position - 0x9F39
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()//Position - 0x9F4D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)//Position - 0x9FD3
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
		if (func_18(func_16()))
		{
			iVar36 = func_61();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113969.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar32 /*6*/], 3))
				{
					func_172(iVar32, &Var0);
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

void func_172(int iParam0, var uParam1)//Position - 0xA084
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xB2CB
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

int func_174(int iParam0)//Position - 0xB35C
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

struct<2> func_175(int iParam0)//Position - 0xB6A2
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)//Position - 0xB6DA
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

int func_177()//Position - 0xBB27
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()//Position - 0xBB59
{
	return Global_113687 > 0;
}

int func_179()//Position - 0xBB67
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()//Position - 0xBB7C
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()//Position - 0xBB9F
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

int func_182()//Position - 0xBBBC
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()//Position - 0xBC1E
{
	if ((Global_113958 == func_65() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)//Position - 0xBC49
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_101533.f_20, 2)) || BitTest(Global_101533.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(int* iParam0)//Position - 0xBCC7
{
	func_186(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_186(int* iParam0, char* sParam1, int iParam2)//Position - 0xBCDD
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_165(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_187()//Position - 0xBDAE
{
	iLocal_103 = joaat("prop_security_case_01");
	iLocal_102 = joaat("stockade");
	iLocal_101 = joaat("S_M_M_Armoured_01");
	iLocal_126 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000);
	switch (bLocal_45)
	{
		case 1:
			Local_94 = { -315.889f, -1550.5544f, 7.233013f };
			Local_97 = { -315.23523f, -1366.5808f, 45.29617f };
			fLocal_100 = 180f;
			Local_75 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_78 = -64.3539f;
			Local_65[0 /*3*/] = { -335.564f, -1462.2369f, 29.5452f };
			fLocal_72[0] = 158.3857f;
			Local_65[1 /*3*/] = { -342.7024f, -1475.0432f, 29.6004f };
			fLocal_72[1] = 290.3041f;
			iLocal_44 = 1;
			break;
		
		case 2:
			Local_94 = { -538.2149f, -868.7426f, 17.96054f };
			Local_97 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_100 = 121.5f;
			Local_75 = { -588.51276f, -866.9584f, 25.32786f };
			fLocal_78 = -89.026794f;
			Local_65[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_72[0] = 12.5464f;
			Local_65[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_72[1] = 352.4951f;
			iLocal_44 = 1;
			break;
		
		case 3:
			Local_94 = { -468.6309f, 6101.9067f, 14.891197f };
			Local_97 = { -359.97336f, 5994.152f, 50.368435f };
			fLocal_100 = 152.25f;
			Local_75 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_78 = 188.9862f;
			Local_65[0 /*3*/] = { -398.4612f, 6051.2964f, 30.5003f };
			fLocal_72[0] = 251.7138f;
			Local_65[1 /*3*/] = { -378.408f, 6035.6895f, 30.498f };
			fLocal_72[1] = 154.0836f;
			iLocal_44 = 2;
			break;
		
		case 4:
			Local_94 = { -631.34076f, -1105.5807f, 7.220509f };
			Local_97 = { -462.17215f, -1103.5974f, 62.535828f };
			fLocal_100 = 177.25f;
			Local_75 = { -595.7766f, -1094.0891f, 21.1785f };
			fLocal_78 = 263.4662f;
			Local_65[0 /*3*/] = { -600.8182f, -1103.7783f, 21.3292f };
			fLocal_72[0] = 338.8304f;
			Local_65[1 /*3*/] = { -595.3461f, -1096.0538f, 21.1785f };
			fLocal_72[1] = 151.297f;
			iLocal_44 = 1;
			break;
		
		case 5:
			Local_75 = { -1042.7682f, -1049.2957f, 1.0825f };
			fLocal_78 = 26.9919f;
			iLocal_44 = 3;
			break;
		
		case 6:
			Local_75 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_78 = 271.1543f;
			iLocal_44 = 3;
			break;
		
		case 7:
			Local_75 = { 3018.3843f, 3634.0168f, 70.4076f };
			fLocal_78 = 335.9052f;
			iLocal_44 = 3;
			break;
		
		case 8:
			Local_75 = { -2815.6614f, 2208.1707f, 27.8382f };
			fLocal_78 = 119.1519f;
			iLocal_44 = 3;
			break;
		
		case 9:
			Local_75 = { 856.7742f, -2067.8452f, 29.0704f };
			fLocal_78 = 83.1204f;
			iLocal_44 = 3;
			break;
		
		case 10:
			Local_75 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_78 = 248.8625f;
			iLocal_44 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)//Position - 0xC113
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_189();
}

void func_189()//Position - 0xC149
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

void func_190(int iParam0)//Position - 0xC186
{
	Global_113958 = iParam0;
}

int func_191(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC194
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_65();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_230())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
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
		if (!func_228(iParam3))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_113969.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113960) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113969.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113969.f_2366.f_539.f_2296[iVar4];
				if (func_214(iVar8))
				{
					if (func_192(iVar4))
					{
						if (!func_134(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_16() != iVar4)
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

bool func_192(int iParam0)//Position - 0xC52E
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)//Position - 0xC54F
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)//Position - 0xC55E
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC5B1
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC5CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_197(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)//Position - 0xC7D0
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

int func_198(int iParam0, int iParam1)//Position - 0xC812
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

int func_199(int iParam0)//Position - 0xC8B4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_200(int iParam0)//Position - 0xC8C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_201(int iParam0)//Position - 0xC8DA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_202(int iParam0)//Position - 0xC8ED
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_203(int iParam0)//Position - 0xC8FF
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_204(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)//Position - 0xC921
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)//Position - 0xC938
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)//Position - 0xC945
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xCA51
{
	var uVar0;
	
	func_213(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_212(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_211(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_210(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_209(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_208(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_208(var uParam0, int iParam1)//Position - 0xCA97
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

void func_209(var uParam0, int iParam1)//Position - 0xCB1D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)//Position - 0xCB50
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_211(var uParam0, int iParam1)//Position - 0xCBA1
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_212(var uParam0, int iParam1)//Position - 0xCBDB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_213(var uParam0, int iParam1)//Position - 0xCC16
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_214(int iParam0)//Position - 0xCC52
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, bool bParam1)//Position - 0xCD2E
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xCD4E
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_1()) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_1()) || Global_32951) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_1()) || func_221()) || Global_113016) || Global_32951) || func_223()) || Global_45250) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_1()) || Global_113016) || Global_32951) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()//Position - 0xD46B
{
	return Global_101572.f_1;
}

int func_218()//Position - 0xD479
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()//Position - 0xD49C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()//Position - 0xD4B6
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_221()//Position - 0xD4E0
{
	return Global_101585.f_394 > 0;
}

bool func_222()//Position - 0xD4F1
{
	return Global_101585.f_393 > 0;
}

var func_223()//Position - 0xD502
{
	return Global_1575083;
}

int func_224()//Position - 0xD50E
{
	func_15();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)//Position - 0xD536
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)//Position - 0xD548
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)//Position - 0xD62C
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_228(int iParam0)//Position - 0xD650
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_229()//Position - 0xD6A8
{
	int iVar0;
	
	if (Global_33100)
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

int func_230()//Position - 0xD6EC
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
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

void func_231()//Position - 0xD7A4
{
	if (func_183())
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_135))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_62))
			{
				HUD::REMOVE_BLIP(&iLocal_62);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_54))
			{
				OBJECT::DELETE_OBJECT(&iLocal_54);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_54);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_102);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_101);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_101, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_102, false);
	}
	if (iLocal_129 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_129);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_63, false);
	func_135(&uLocal_303, 0, 0);
	func_237(-1);
	func_232(&uLocal_315, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_232(var uParam0, bool bParam1)//Position - 0xD852
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)//Position - 0xD88D
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)//Position - 0xD8A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)//Position - 0xD8DC
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(int iParam0, char* sParam1, int iParam2)//Position - 0xD8F3
{
	if (BitTest(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)//Position - 0xD9AD
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_113958, 1), 64);
		if (func_64(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113955, (MISC::GET_GAME_TIMER() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}
	func_238(&Global_33008);
	Global_113959 = 0;
	func_190(-1);
}

void func_238(var uParam0)//Position - 0xDA5F
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

char* func_239(int iParam0, bool bParam1)//Position - 0xDA9C
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

void func_240(int iParam0)//Position - 0xDCE5
{
	Global_44593 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_241(int iParam0)//Position - 0xDCF7
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)//Position - 0xDD0C
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)//Position - 0xDD3B
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_205(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)//Position - 0xDE0C
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDE24
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDFA6
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)//Position - 0xDFDE
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

int func_248(int iParam0)//Position - 0xE181
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return -1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 2;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 3, false))
		{
			return 3;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4, false))
		{
			return 4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 5, false))
		{
			return 5;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 6, false))
		{
			return 6;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 7, false))
		{
			return 7;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 8, false))
		{
			return 8;
		}
	}
	return -2;
}

