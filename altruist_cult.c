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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49[16];
	float fLocal_98[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	float fLocal_127 = 0f;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_134 = 0f;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<3> Local_138 = { 0, 0, 0 } ;
	float fLocal_141 = 0f;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	float fLocal_148 = 0f;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	float fLocal_155 = 0f;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_159 = { 0, 0, 0 } ;
	float fLocal_162 = 0f;
	struct<3> Local_163 = { 0, 0, 0 } ;
	struct<3> Local_166 = { 0, 0, 0 } ;
	float fLocal_169 = 0f;
	bool bLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	int iLocal_174 = 0;
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	int iLocal_179 = 0;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191[2] = { 0, 0 };
	int iLocal_194[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214[4] = { 0, 0, 0, 0 };
	int iLocal_219[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_226 = 0;
	var uLocal_227[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int* iLocal_247 = NULL;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 8;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 4;
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
	var uLocal_289 = 4;
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
	var uLocal_304 = 4;
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
	var uLocal_319 = 4;
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
	var uLocal_334 = 4;
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
	var uLocal_349 = 4;
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
	var uLocal_364 = 4;
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
	var uLocal_379 = 4;
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
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	char[] cLocal_399[8] = 0;
	char* sLocal_400 = NULL;
	char* sLocal_401 = NULL;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408 = 0;
	var uLocal_409 = 16;
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
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_44 = -1f;
	Local_115 = { -1109.213f, 4914.744f, 216.101f };
	Local_118 = { -1034.6f, 4918.6f, 205.9f };
	Local_121 = { -1066.9633f, 4873.13f, 207.32806f };
	Local_124 = { -1112.9463f, 4986.957f, 241.13301f };
	fLocal_127 = 72.3125f;
	Local_128 = { -1138.3865f, 4872.0396f, 207.54884f };
	Local_131 = { -1091.9586f, 4983.27f, 241.16985f };
	fLocal_134 = 57.8125f;
	Local_135 = { -1171.648f, 4888.6577f, 211.07564f };
	Local_138 = { -1137.9072f, 4926.5723f, 240.99902f };
	fLocal_141 = 17.9375f;
	Local_142 = { -1177.9814f, 4903.231f, 212.47699f };
	Local_145 = { -1153.3978f, 4902.6313f, 241.15503f };
	fLocal_148 = 17.9375f;
	Local_149 = { -1175.6934f, 4904.839f, 207.52066f };
	Local_152 = { -1142.0797f, 4985.32f, 241.28865f };
	fLocal_155 = 36.375f;
	Local_156 = { -1106.2119f, 4860.086f, 206.12071f };
	Local_159 = { -1105.016f, 4873.8545f, 241.1453f };
	fLocal_162 = 11.5625f;
	Local_163 = { -1044.2683f, 4916.587f, 209.83649f };
	Local_166 = { -1063.6053f, 4972.88f, 241.12991f };
	fLocal_169 = 12.875f;
	iLocal_190 = 4;
	cLocal_399 = "REPLAY_TMG" /* GXT: ~r~FAILED~s~ */;
	sLocal_400 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_196();
	}
	if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_171)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_48)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_114372.f_24998.f_5 >= iLocal_190 && !func_195())
						{
							iLocal_48 = 2;
						}
						func_192();
						func_189();
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_185 == 1)
							{
								func_188();
							}
							else if (iLocal_185 == 2)
							{
								func_160();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_187 < 3)
							{
								func_159();
							}
							else
							{
								func_158();
							}
						}
						if (iLocal_172)
						{
							func_145(26, 1);
							iLocal_172 = 0;
							iLocal_48 = 0;
						}
					}
					break;
				
				case 2:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_117();
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[9 /*31*/], 0, false, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[10 /*31*/], 0, false, true);
					break;
				
				case 4:
					if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						iLocal_48 = 3;
						break;
					}
					bLocal_173 = false;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_194)
					{
						if (PED::IS_PED_INJURED(iLocal_194[iVar0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_227[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_227[iVar0]));
							}
						}
						else
						{
							if (TASK::IS_PED_IN_WRITHE(iLocal_194[iVar0]))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_227[iVar0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_227[iVar0]));
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_194[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
							{
								if (!func_116())
								{
									if (iLocal_189 < MISC::GET_GAME_TIMER())
									{
										iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											func_101(&uLocal_409, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_100(&uLocal_409, 1, iLocal_194[iVar0], "ACULTMember1", 0, 1);
											func_101(&uLocal_409, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_100(&uLocal_409, 2, iLocal_194[iVar0], "ACULTMember2", 0, 1);
											func_101(&uLocal_409, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_189 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6000));
									}
								}
							}
							bLocal_173 = true;
						}
						iVar0++;
					}
					if (!bLocal_173)
					{
						func_64();
					}
					break;
				
				case 3:
					if (!iLocal_171)
					{
						iLocal_247 = func_63();
						if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_247))
						{
							break;
						}
						func_62(&uLocal_252, 0);
						iLocal_171 = 1;
					}
					if (func_33(&uLocal_252, &uLocal_258, &iLocal_247, cLocal_399, sLocal_400, &bLocal_170, 78))
					{
						iLocal_188 = 0;
						PED::REMOVE_RELATIONSHIP_GROUP(iLocal_408);
						TASK::REMOVE_COVER_POINT(iLocal_246);
						iVar0 = 0;
						while (iVar0 < iLocal_194)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[iVar0]))
							{
								PED::DELETE_PED(&(iLocal_194[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_219)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_219[iVar0]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_219[iVar0]));
							}
							iVar0++;
						}
						if (CAM::DOES_CAM_EXIST(iLocal_244))
						{
							CAM::SET_CAM_ACTIVE(iLocal_244, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
						{
							OBJECT::DELETE_OBJECT(&iLocal_213);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
						{
							OBJECT::DELETE_OBJECT(&iLocal_213);
						}
						if (bLocal_170)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_171 = 0;
							iLocal_48 = 2;
						}
						else
						{
							iLocal_171 = 0;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_175)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)//Position - 0x55E
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		MISC::PAUSE_DEATH_ARREST_RESTART(true);
		MISC::SET_FADE_OUT_AFTER_DEATH(false);
		func_2(1);
		Global_96630 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		func_2(0);
		Global_96630 = 0;
	}
}

void func_2(bool bParam0)//Position - 0x5A0
{
	if ((Global_43922 == 9 || Global_43922 == 10) || Global_43922 == 5)
	{
		Global_113018 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_113018 = 0;
	}
}

void func_3(bool bParam0)//Position - 0x5E6
{
	if (bParam0)
	{
		func_10();
		if (Global_20813.f_1 == 10 || Global_20813.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8684, 16);
		}
		Global_20813.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_20813.f_1 == 1)
	{
		if (!Global_20813.f_1 == 0)
		{
			Global_20813.f_1 = 3;
		}
	}
}

void func_4(int iParam0)//Position - 0x649
{
	if (func_8())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20813.f_1 = 3;
	}
}

int func_5()//Position - 0x6D3
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6FA
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()//Position - 0x76E
{
	return BitTest(Global_1956030, 5);
}

bool func_8()//Position - 0x77C
{
	return BitTest(Global_1956030, 19);
}

int func_9(int iParam0)//Position - 0x78B
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

void func_10()//Position - 0x7E2
{
	if (Global_20813.f_1 == 9 || Global_20813.f_1 == 10)
	{
		Global_22219 = 0;
		Global_22215 = 1;
	}
}

void func_11()//Position - 0x80B
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)//Position - 0x823
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, false);
		MISC::SET_BIT(&iLocal_46, 1);
		func_13(1, 2, 0);
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(2);
	}
	else
	{
		if (BitTest(iLocal_46, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_13(0, 2, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_46, 1);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)//Position - 0x87F
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_46, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (BitTest(iLocal_46, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_46, 2);
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x8DD
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(iLocal_46, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&iLocal_46, 0);
			func_13(1, 1, 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
		}
	}
	else
	{
		if (BitTest(iLocal_46, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_13(0, 1, 1);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&iLocal_46, 0);
	}
}

int func_15()//Position - 0x974
{
	func_16();
	return Global_114372.f_2366.f_539.f_4321;
}

void func_16()//Position - 0x98D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20(Global_114372.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_19(PLAYER::PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_17(14) || Global_113320))
			{
				if (Global_114372.f_2366.f_539.f_4321 != iVar0 && func_18(Global_114372.f_2366.f_539.f_4321))
				{
					Global_114372.f_2366.f_539.f_4322 = Global_114372.f_2366.f_539.f_4321;
				}
				Global_114372.f_2366.f_539.f_4323 = iVar0;
				Global_114372.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114372.f_2366.f_539.f_4321 != 145)
			{
				Global_114372.f_2366.f_539.f_4323 = Global_114372.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114372.f_2366.f_539.f_4321 = 145;
}

bool func_17(int iParam0)//Position - 0xA8A
{
	return Global_43922 == iParam0;
}

bool func_18(int iParam0)//Position - 0xA98
{
	return iParam0 < 3;
}

int func_19(int iParam0)//Position - 0xAA4
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

int func_20(int iParam0)//Position - 0xAE1
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

var func_21(int iParam0)//Position - 0xB06
{
	return Global_2139[iParam0 /*29*/];
}

void func_22()//Position - 0xB15
{
	iLocal_46 = 0;
	iLocal_47 = 0;
	func_23(0, 1, 1, 0, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB33
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_32(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20813.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_5())
			{
				Global_20813.f_1 = 3;
			}
			Global_22166 = 5;
		}
		func_31(1, bParam3, iParam2, 0);
		Global_64044 = 1;
		Global_76372 = 1;
		Global_79246 = 1;
	}
	else
	{
		func_32(0);
		HUD::THEFEED_RESUME();
		Global_64044 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_31(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_29(PLAYER::PLAYER_ID())) && !func_25(PLAYER::PLAYER_ID(), 0)) && !func_24()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_29(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79246 = 0;
	}
}

bool func_24()//Position - 0xC80
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

bool func_25(int iParam0, int iParam1)//Position - 0xC9A
{
	bool bVar0;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)//Position - 0xCF3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0xD34
{
	return Global_1574925;
}

int func_28(var uParam0)//Position - 0xD40
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

int func_29(int iParam0)//Position - 0xD62
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
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

bool func_30()//Position - 0xDA1
{
	return BitTest(Global_2621446, 3);
}

int func_31(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xDAF
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

void func_32(int iParam0)//Position - 0xDE2
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8683, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8683, 13);
	}
}

int func_33(var uParam0, var uParam1, int* iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xE05
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			func_61(&(uParam0->f_1));
			func_22();
			func_60(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		
		case 1:
			if (func_58() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_57(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					func_55(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_57(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					func_55(&(uParam0->f_4), 2);
				}
				func_34(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_34(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					MISC::IGNORE_NEXT_RESTART(true);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
				func_14(0, 1);
				func_12(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xFBD
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_54(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			func_53(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (func_54(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_54(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
			}
			func_52(&(uParam1->f_10), 0, 1, 1, 1);
			func_51(&(uParam1->f_10), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
			func_51(&(uParam1->f_10), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
			if (func_54(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_54(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, false);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, false);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, false);
						break;
					}
			}
			if (!func_50(&(uParam1->f_1)))
			{
				func_49(&(uParam1->f_1));
			}
			if (func_54(iParam5, 2))
			{
				if (!func_50(&(uParam1->f_4)))
				{
					func_49(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_54(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_47(uParam0, 0, 0);
			if (!func_54(iParam5, 16) && (func_45(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_39(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_54(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_54(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_54(iParam5, 2))
			{
				if (func_45(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_54(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					func_38(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_47(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_54(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_35(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_45(&(uParam1->f_4)) <= 0.1f)
			{
				func_47(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_35(int* iParam0)//Position - 0x139D
{
	func_36(iParam0, 0f);
}

void func_36(int* iParam0, float fParam1)//Position - 0x13AC
{
	iParam0->f_1 = (func_37(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_37(bool bParam0)//Position - 0x13D7
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_38(int* iParam0)//Position - 0x142F
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_39(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x1452
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_44(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_54(uParam0->f_1, 256) || (func_54(uParam0->f_1, 8192) && PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_54(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
					break;
				
				case 2:
					bVar4 = !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					bVar7 = false;
					while (bVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[bVar7 /*2*/].f_1;
						bVar2 = BitTest(uParam0->f_2[iVar6 /*15*/].f_13, bVar7);
						if (!BitTest(uParam0->f_2[iVar6 /*15*/].f_12, bVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_43(sVar3);
						}
						bVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_53(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_54(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_42(bParam4, func_42(func_54(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_41(&(uParam0->f_1), 256);
		func_40(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_40(var uParam0, int iParam1)//Position - 0x170C
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_41(var uParam0, int iParam1)//Position - 0x1721
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_42(bool bParam0, float fParam1, float fParam2)//Position - 0x1732
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_43(char* sParam0)//Position - 0x1749
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_44(var uParam0)//Position - 0x1757
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_41(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_45(var uParam0)//Position - 0x177E
{
	if (func_50(uParam0))
	{
		if (func_46(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_37(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_46(var uParam0)//Position - 0x17BA
{
	return BitTest(*uParam0, 2);
}

int func_47(var uParam0, bool bParam1, bool bParam2)//Position - 0x17C7
{
	if (!func_50(&(uParam0->f_2)))
	{
		func_35(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_45(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_48(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_48(var uParam0)//Position - 0x1859
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_49(int* iParam0)//Position - 0x186F
{
	if (!func_50(iParam0))
	{
		func_35(iParam0);
	}
}

bool func_50(var uParam0)//Position - 0x1887
{
	return BitTest(*uParam0, 1);
}

int func_51(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1894
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x195D
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_41(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_41(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_41(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_41(&(uParam0->f_1), 8192);
	}
}

void func_53(char* sParam0)//Position - 0x19D7
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_54(var uParam0, int iParam1)//Position - 0x19E9
{
	return (uParam0 && iParam1) != 0;
}

void func_55(var uParam0, int iParam1)//Position - 0x19F8
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)//Position - 0x1A08
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_57(var uParam0, int iParam1)//Position - 0x1A19
{
	return (uParam0 && iParam1) != 0;
}

int func_58()//Position - 0x1A28
{
	if (!BitTest(iLocal_46, 0) && !BitTest(iLocal_46, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_14(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PED::SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_46, 1))
		{
			func_12(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_47 == 0)
			{
				iLocal_47 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				HUD::SET_FRONTEND_ACTIVE(false);
				HUD::SET_PAUSE_MENU_ACTIVE(false);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				func_14(0, 0);
				func_59(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_47)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0)//Position - 0x1B66
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!BitTest(iLocal_46, 3))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&iLocal_46, 3);
			}
		}
		else if (BitTest(iLocal_46, 3))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&iLocal_46, 3);
		}
	}
}

void func_60(var uParam0, float fParam1, float fParam2)//Position - 0x1BA7
{
	if (func_50(&(uParam0->f_1)))
	{
		func_48(&(uParam0->f_1));
	}
	if (func_50(&(uParam0->f_4)))
	{
		func_48(&(uParam0->f_4));
	}
	func_38(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_61(int* iParam0)//Position - 0x1BF7
{
	if (!func_50(iParam0))
	{
		func_49(iParam0);
	}
	else
	{
		func_35(iParam0);
	}
}

void func_62(var uParam0, int iParam1)//Position - 0x1C18
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1);
}

int func_63()//Position - 0x1C39
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_64()//Position - 0x1C49
{
	if (!iLocal_174)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		Global_114372.f_24998.f_5 = 1000;
		AUDIO::UNLOCK_MISSION_NEWS_STORY(64);
		Global_114372.f_20567.f_472 = 54;
		iLocal_397 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
		func_99(1);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_397))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_397, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_53("CULT_PASS" /* GXT: ALTRUIST CLEARED */);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!func_98())
		{
			SYSTEM::WAIT(0);
		}
		func_97();
		SYSTEM::SETTIMERA(0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", true);
		iLocal_174 = 1;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_397, 255, 255, 255, 255, 0);
	if (!iLocal_176)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_397, "SHARD_ANIM_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_176 = 1;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_397))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_397);
			func_99(0);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_96(PLAYER::PLAYER_ID()), Local_115, true) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_65(18);
		func_196();
	}
}

void func_65(int iParam0)//Position - 0x1D7D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_94();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_93())
	{
		func_71(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114363 = MISC::GET_GAME_TIMER();
		func_70(30000);
		StringCopy(&cVar0, func_69(Global_114361, 1), 64);
		if (func_68(Global_114361) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114360, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114358, (MISC::GET_GAME_TIMER() - Global_114359), 0);
	}
	else if (BitTest(Global_114368, 0) && Global_114372.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114368, 0);
	}
	func_67(&Global_32888);
	Global_114362 = 0;
	func_66(-1);
}

void func_66(int iParam0)//Position - 0x1E2F
{
	Global_114361 = iParam0;
}

void func_67(var uParam0)//Position - 0x1E3D
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

int func_68(int iParam0)//Position - 0x1E7A
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

char* func_69(int iParam0, bool bParam1)//Position - 0x1F2B
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

void func_70(int iParam0)//Position - 0x2174
{
	Global_44473 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_71(int iParam0)//Position - 0x2186
{
	func_72(iParam0, 0, func_92(iParam0));
}

void func_72(int iParam0, int iParam1, int iParam2)//Position - 0x219B
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_91();
	func_82(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_81(iParam0, &uVar0);
	Var1 = { func_73(&uVar0) };
}

struct<16> func_73(var uParam0)//Position - 0x21CA
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_80(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_79(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_78(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_77(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_76(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_74(*uParam0), 64);
	return Var0;
}

int func_74(int iParam0)//Position - 0x229B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_75(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_75(bool bParam0, int iParam1, int iParam2)//Position - 0x22BD
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_76(var uParam0)//Position - 0x22D4
{
	return uParam0 & 15;
}

int func_77(int iParam0)//Position - 0x22E1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_78(int iParam0)//Position - 0x22F3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_79(int iParam0)//Position - 0x2306
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_80(int iParam0)//Position - 0x2319
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_81(int iParam0, var uParam1)//Position - 0x232C
{
	Global_114372.f_24998.f_43[iParam0] = *uParam1;
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2344
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_74(*uParam0);
	iVar1 = func_76(*uParam0);
	iVar2 = func_77(*uParam0);
	iVar3 = func_80(*uParam0);
	iVar4 = func_79(*uParam0);
	iVar5 = func_78(*uParam0);
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
	iVar6 = func_90(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_90(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_83(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_83(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x24C6
{
	func_89(uParam0, iParam1);
	func_88(uParam0, iParam2);
	func_87(uParam0, iParam3);
	func_86(uParam0, iParam5);
	func_85(uParam0, iParam4);
	func_84(uParam0, iParam6);
}

void func_84(var uParam0, int iParam1)//Position - 0x24FE
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

void func_85(var uParam0, int iParam1)//Position - 0x2584
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_76(*uParam0);
	iVar1 = func_74(*uParam0);
	if (iParam1 < 1 || iParam1 > func_90(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_86(var uParam0, int iParam1)//Position - 0x25D5
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_87(var uParam0, int iParam1)//Position - 0x2608
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_88(var uParam0, int iParam1)//Position - 0x2642
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_89(var uParam0, int iParam1)//Position - 0x267D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_90(int iParam0, int iParam1)//Position - 0x26B9
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

var func_91()//Position - 0x275B
{
	var uVar0;
	
	func_89(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_88(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_87(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_85(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_86(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_84(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_92(int iParam0)//Position - 0x27A1
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

int func_93()//Position - 0x2944
{
	if ((Global_114361 == func_94() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114362)
	{
		return 1;
	}
	return 0;
}

int func_94()//Position - 0x296F
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_95(Var0);
	return uVar16;
}

int func_95(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x298C
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

Vector3 func_96(int iParam0)//Position - 0x2B66
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_97()//Position - 0x2B79
{
	Global_33067 = 0;
	Global_33068 = 0;
	Global_33070 = 0;
	Global_33071 = 0;
	Global_33072 = 0;
}

int func_98()//Position - 0x2B95
{
	return 1;
}

void func_99(int iParam0)//Position - 0x2B9E
{
	Global_79509 = iParam0;
	Global_79510 = iParam0;
}

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2BB2
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

int func_101(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2C4D
{
	func_115(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_102(sParam2, iParam3, 0);
}

int func_102(char* sParam0, int iParam1, bool bParam2)//Position - 0x2C9B
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
					func_114();
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
		if (func_113(8, -1))
		{
			return 0;
		}
		Global_22242 = { Global_22236 };
		func_112();
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
				func_111();
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
				if (func_110())
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
			if (func_5())
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
			func_109();
			Global_22176 = bParam2;
		}
		Global_22168 = iParam1;
		StringCopy(&Global_21785, sParam0, 24);
		Global_21032 = 0;
		func_108();
		func_103();
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
		func_114();
	}
	return 0;
}

void func_103()//Position - 0x2F69
{
	if (!func_104())
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

int func_104()//Position - 0x2FA0
{
	if (!Global_262145.f_29155 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79248)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_107())
	{
		return 0;
	}
	if (func_105(PLAYER::PLAYER_ID()))
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

bool func_105(int iParam0)//Position - 0x3003
{
	return func_106(iParam0, 20);
}

var func_106(int iParam0, int iParam1)//Position - 0x3013
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_107()//Position - 0x302B
{
	return -1;
}

void func_108()//Position - 0x3034
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

void func_109()//Position - 0x3066
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

int func_110()//Position - 0x30FB
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

void func_111()//Position - 0x3194
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[0 /*29*/])
			{
				Global_20813 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[1 /*29*/])
			{
				Global_20813 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114372.f_28054[2 /*29*/])
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
		Global_20813 = func_15();
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

void func_112()//Position - 0x3236
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

bool func_113(int iParam0, int iParam1)//Position - 0x328E
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

void func_114()//Position - 0x32C6
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

void func_115(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x331D
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

int func_116()//Position - 0x3373
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_117()//Position - 0x3395
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_188)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 20f);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!func_144() || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_ACult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood03a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood04a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_574 = func_137(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 1, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_574, "Trevors_weapon", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_ASSAULTRIFLE_CLIP_01")), 0);
			if (func_144() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_194[11], "Cult_Master", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_194[12], "Rear_Cult", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_194[13], "Left_Old_Cult", 2, joaat("A_M_O_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_194[14], "Carbine_Cult", 2, joaat("A_M_Y_ACult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_194[15], "Shotgun_Cult", 2, joaat("A_M_Y_ACult_02"), 0);
				CUTSCENE::START_CUTSCENE(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_170 && Global_114372.f_24998.f_5 != 1000)
			{
				func_136();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[0]))
			{
				PED::DELETE_PED(&(iLocal_194[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[1]))
			{
				PED::DELETE_PED(&(iLocal_194[1]));
			}
			if (CAM::DOES_CAM_EXIST(iLocal_244))
			{
				CAM::SET_CAM_ACTIVE(iLocal_244, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
			{
				OBJECT::DELETE_OBJECT(&iLocal_213);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
			{
				OBJECT::DELETE_OBJECT(&iLocal_213);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (HUD::DOES_BLIP_EXIST(iLocal_226))
			{
				HUD::REMOVE_BLIP(&iLocal_226);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			HUD::CLEAR_HELP(true);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
			}
			MISC::CLEAR_AREA(Local_115, 100f, true, false, false, false);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_115 - Vector(100f, 60f, 80f), Local_115 + Vector(100f, 60f, 80f), false, true, true, true, 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			iLocal_246 = TASK::ADD_COVER_POINT(-1173.5094f, 4924.3647f, 222.21f, 277.2293f, 2, 0, 2, true);
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_188 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194[11]))
					{
						iLocal_194[11] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194[12]))
					{
						iLocal_194[12] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194[13]))
					{
						iLocal_194[13] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194[14]))
					{
						iLocal_194[14] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194[15]))
					{
						iLocal_194[15] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1173.5309f, 4924.357f, 222.2101f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 188.9369f);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -1173.5094f, 4924.3647f, 222.21f, -1, false, 0f, true, false, iLocal_246, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_574, PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1f);
				func_23(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				Local_49[0 /*3*/] = { -1044.6324f, 4918.1494f, 211.3315f };
				fLocal_98[0] = 254.8275f;
				Local_49[1 /*3*/] = { -1054.9197f, 4915.155f, 210.8241f };
				fLocal_98[1] = 270.2025f;
				Local_49[2 /*3*/] = { -1051.8595f, 4903.9023f, 209.6199f };
				fLocal_98[2] = 299.8404f;
				Local_49[3 /*3*/] = { -1068.2458f, 4899.5317f, 213.2755f };
				fLocal_98[3] = 298.4257f;
				Local_49[4 /*3*/] = { -1083.3221f, 4899.5317f, 213.2755f };
				fLocal_98[4] = 283.5311f;
				Local_49[5 /*3*/] = { -1084.0582f, 4933.8047f, 228.2246f };
				fLocal_98[5] = 87.5233f;
				Local_49[6 /*3*/] = { -1081.9757f, 4937.3394f, 232.3275f };
				fLocal_98[6] = 109.6546f;
				Local_49[7 /*3*/] = { -1092.075f, 4939.9575f, 217.3385f };
				fLocal_98[7] = 210.2433f;
				Local_49[8 /*3*/] = { -1101.7976f, 4930.33f, 217.3544f };
				fLocal_98[8] = 203.732f;
				Local_49[9 /*3*/] = { -1070.6748f, 4869.3013f, 220.2917f };
				fLocal_98[9] = 39.1109f;
				Local_49[10 /*3*/] = { -1115.7025f, 4878.439f, 225.8085f };
				fLocal_98[10] = 25.8472f;
				PED::ADD_RELATIONSHIP_GROUP("rghCult", &iLocal_408);
				iVar1 = 0;
				while (iVar1 < iLocal_194)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_194[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_01"), Local_49[iVar1 /*3*/], fLocal_98[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_194[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[iVar1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_194[iVar1], 0);
						PED::SET_PED_COMBAT_ABILITY(iLocal_194[iVar1], 2);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_194[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_194[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_194[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_194[iVar1], 100f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_194[iVar1], 150, 0, 0);
						PED::SET_PED_SHOOT_RATE(iLocal_194[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_194[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_194[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), Local_49[iVar1 /*3*/], fLocal_98[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_194[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_194[iVar1], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_194[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_194[iVar1], 1);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_194[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_194[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_194[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_194[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_194[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_194[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!PED::IS_PED_INJURED(iLocal_194[iVar1]) && !PED::IS_PED_INJURED(iLocal_194[11])) && !PED::IS_PED_INJURED(iLocal_194[12])) && !PED::IS_PED_INJURED(iLocal_194[13])) && !PED::IS_PED_INJURED(iLocal_194[14])) && !PED::IS_PED_INJURED(iLocal_194[15]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[11], joaat("WEAPON_PISTOL"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[12], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[13], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[14], joaat("WEAPON_CARBINERIFLE"), -1, true, true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[15], joaat("WEAPON_PUMPSHOTGUN"), -1, true, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_194[iVar1], 0, true);
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_194[iVar1], 3);
							PED::SET_PED_COMBAT_ABILITY(iLocal_194[iVar1], 0);
							PED::SET_PED_ACCURACY(iLocal_194[iVar1], 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_194[iVar1], 1f, 1f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.3301f, 4924.4116f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6000, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_194[15], iLocal_245);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.2794f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_194[14], iLocal_245);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2500, false);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.1754f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_194[13], iLocal_245);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.9622f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_194[12], iLocal_245);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 10000, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.4755f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_194[11], iLocal_245);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
							PED::SET_PED_KEEP_TASK(iLocal_194[iVar1], true);
							PED::SET_PED_RESET_FLAG(iLocal_194[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_194[iVar1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), Local_49[iVar1 /*3*/], fLocal_98[iVar1], true, true);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_194[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[iVar1], joaat("WEAPON_PISTOL"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_194[iVar1], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_194[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_194[iVar1], 0);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_194[iVar1], 50f, 20);
						PED::SET_PED_COMBAT_RANGE(iLocal_194[iVar1], 1);
						PED::SET_PED_ACCURACY(iLocal_194[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_194[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_194[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_194[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_194[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_194[iVar1], iLocal_408);
					ENTITY::SET_ENTITY_HEADING(iLocal_194[iVar1], func_135(ENTITY::GET_ENTITY_COORDS(iLocal_194[iVar1], true), func_96(PLAYER::PLAYER_ID())));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_194[iVar1], true);
					PED::SET_PED_CONFIG_FLAG(iLocal_194[iVar1], 42, true);
					uLocal_227[iVar1] = func_133(iLocal_194[iVar1], 1, 145);
					iVar1++;
				}
				func_100(&uLocal_409, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				func_100(&uLocal_409, 3, iLocal_194[11], "ACULTMaster", 0, 1);
				func_100(&uLocal_409, 4, 0, "ACULTGroup", 0, 1);
				MISC::SET_BIT(&iVar0, 1);
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				if (!bLocal_170)
				{
					iLocal_214[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1074.165f, 4897.4683f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_214[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1094.6711f, 4892.7886f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_214[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1113.9503f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
					iLocal_214[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_CASE"), -1145.2728f, 4907.8936f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, true, joaat("prop_security_case_01"));
				}
				iLocal_214[0] = iLocal_214[0];
				iLocal_214[1] = iLocal_214[1];
				iLocal_214[2] = iLocal_214[2];
				iLocal_214[3] = iLocal_214[3];
				iLocal_219[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1158.69f, 4915.7095f, 220.26443f, true, true, false);
				iLocal_219[1] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1156.2462f, 4918.5996f, 220.54323f, true, true, false);
				iLocal_219[2] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1145.8025f, 4931.8164f, 219.96826f, true, true, false);
				iLocal_219[3] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1133.369f, 4919.0674f, 218.8385f, true, true, false);
				iLocal_219[4] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.0251f, 4921.483f, 218.8244f, true, true, false);
				iLocal_219[5] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1112.6599f, 4929.2676f, 217.17519f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[0], 12.242877f, -0.014582f, 27.060556f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[1], 7.733739f, 9.432779f, -2.865618f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[2], 3.735082f, 4.551246f, 86.309166f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[3], 0.240341f, 1.095195f, 36.590313f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[4], 7.6772f, 1.232743f, 93.27483f, 2, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_219[5], 3.367802f, -5.14387f, 97.30567f, 2, true);
				if (func_132() < 50)
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, true, 0);
				}
				if (func_131() != 18)
				{
					func_129(18);
				}
				if (!func_93())
				{
					func_118(0);
				}
				func_1(1);
				bLocal_170 = false;
				iLocal_48 = 4;
			}
			break;
	}
}

int func_118(int iParam0)//Position - 0x4357
{
	if (func_123())
	{
		Global_114362 = 1;
		Global_114359 = MISC::GET_GAME_TIMER();
		if (func_122(Global_114361))
		{
			func_119(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_122(Global_114361))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_119(int iParam0)//Position - 0x43AA
{
	switch (iParam0)
	{
		case 0:
			if (Global_114372.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_120(func_121(iParam0), -1);
					Global_114372.f_24998.f_2++;
					MISC::SET_BIT(&Global_114368, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114368, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_120(func_121(iParam0), -1);
					Global_114372.f_24998.f_3++;
					MISC::SET_BIT(&Global_114368, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114368, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_120(func_121(iParam0), -1);
					Global_114372.f_24998.f_4++;
					MISC::SET_BIT(&Global_114368, 2);
				}
			}
			break;
	}
}

void func_120(char* sParam0, int iParam1)//Position - 0x4485
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_121(int iParam0)//Position - 0x449C
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

int func_122(int iParam0)//Position - 0x44E0
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

int func_123()//Position - 0x450F
{
	switch (func_124(&Global_32888, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_124(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4545
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
		if (func_128(0))
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
		if (!func_126(iParam2))
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
			func_125(uParam0, iParam4);
		}
	}
	return 2;
}

void func_125(var uParam0, int iParam1)//Position - 0x467C
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

bool func_126(int iParam0)//Position - 0x46CB
{
	return func_127(iParam0, Global_43922);
}

int func_127(int iParam0, int iParam1)//Position - 0x46DC
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

int func_128(int iParam0)//Position - 0x48BD
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_129(int iParam0)//Position - 0x48DF
{
	if (iParam0 == -1)
	{
		iParam0 = func_94();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_66(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114358 = 0;
	func_130();
}

void func_130()//Position - 0x4915
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

int func_131()//Position - 0x4952
{
	return Global_114361;
}

int func_132()//Position - 0x495E
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_133(int iParam0, bool bParam1, int iParam2)//Position - 0x49B3
{
	int iVar0;
	
	iVar0 = func_134(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)//Position - 0x49FD
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_42(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_135(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)//Position - 0x4AA1
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_136()//Position - 0x4ABB
{
	Global_33068 = 1;
}

int func_137(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x4AC7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar2 = iParam1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		bVar0 = true;
	}
	if (iVar2 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar3 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				WEAPON::GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_141(iVar2, iVar8) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_141(iVar2, iVar8)))
			{
				if (func_140(func_141(iVar2, iVar8)))
				{
					iVar9 = WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(func_141(iVar2, iVar8));
				}
			}
		}
		iVar8++;
	}
	iVar1 = WEAPON::CREATE_WEAPON_OBJECT(iVar2, iVar3, Var5, bVar0, 1f, iVar9, iParam7, iParam8);
	while (func_141(iVar2, iVar10) != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_141(iVar2, iVar10)))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar1, func_141(iVar2, iVar10));
				func_138(iVar1, func_141(iVar2, iVar10));
			}
		}
		iVar10++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar2, false))
		{
			WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar1, WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_138(int iParam0, int iParam1)//Position - 0x4C3B
{
	int iVar0;
	
	iVar0 = func_139(iParam1);
	if (iVar0 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iParam0, iVar0);
	}
}

int func_139(int iParam0)//Position - 0x4C59
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3"):
			return joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE");
			break;
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x4DF0
{
	if ((((((((((((((((((((((((((((((((((((iParam0 == joaat("COMPONENT_PISTOL_VARMOD_LUXE") || iParam0 == joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SMG_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_MG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_PISTOL50_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW")) || iParam0 == joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER")) || iParam0 == joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PIMP")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_HATE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_LOVE")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_KING")) || iParam0 == joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1")) || iParam0 == joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_BOSS")) || iParam0 == joaat("COMPONENT_REVOLVER_VARMOD_GOON")) || iParam0 == joaat("COMPONENT_GUNRUN_MK2_UPGRADE")) || iParam0 == joaat("COMPONENT_APPISTOL_VARMOD_SECURITY")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY")) || iParam0 == joaat("COMPONENT_MICROSMG_VARMOD_SECURITY")) || iParam0 == joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3"))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)//Position - 0x5000
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
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_XMAS23");
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
				
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
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
				
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
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
				
				case 4:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_VARMOD_XMAS23");
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
				
				case 8:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_XMAS23");
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
		
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
		
		case joaat("WEAPON_BATTLERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BATTLERIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_143(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_142(Var43.f_3))
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

int func_142(int iParam0)//Position - 0x5D21
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

int func_143(int iParam0, var* uParam1)//Position - 0x5DC2
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

bool func_144()//Position - 0x5DFD
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_79247)
	{
		if (!bVar0)
		{
			Global_79247 = 1;
		}
	}
	return bVar0;
}

int func_145(int iParam0, int iParam1)//Position - 0x5E20
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_146(iParam0, iParam1);
}

int func_146(int iParam0, int iParam1)//Position - 0x5E3B
{
	if (func_17(14) && !func_157(iParam0))
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
	if (func_156(&Global_4543283))
	{
		if (func_154(&Global_4543283, iParam0))
		{
			return 0;
		}
		if (func_147(&Global_4543283, iParam0))
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

int func_147(var uParam0, int iParam1)//Position - 0x5ED8
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_157(iParam1))
	{
		return 0;
	}
	if (func_154(uParam0, iParam1))
	{
		return 0;
	}
	if (func_153(uParam0) < 0f)
	{
		func_152(uParam0, 0);
	}
	func_150(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_148(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_148(var uParam0, int iParam1)//Position - 0x5F89
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_157(iParam1))
	{
		return 0;
	}
	if (func_154(uParam0, iParam1))
	{
		return 0;
	}
	if (func_153(uParam0) < 0f)
	{
		func_152(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_149(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_149(var uParam0, int iParam1)//Position - 0x6004
{
	return (*uParam0)[iParam1] == 78;
}

void func_150(var uParam0)//Position - 0x6015
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_151(uParam0, iVar0);
		iVar0++;
	}
	func_152(uParam0, (Global_4543282 - 0.5f));
}

void func_151(var uParam0, int iParam1)//Position - 0x6049
{
	(*uParam0)[iParam1] = 78;
}

void func_152(var uParam0, float fParam1)//Position - 0x6059
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

float func_153(var uParam0)//Position - 0x6076
{
	return uParam0->f_80;
}

bool func_154(var uParam0, int iParam1)//Position - 0x6082
{
	return func_155(uParam0, iParam1) != -1;
}

int func_155(var uParam0, int iParam1)//Position - 0x6094
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

bool func_156(var uParam0)//Position - 0x60C1
{
	return uParam0->f_79 == 1;
}

int func_157(int iParam0)//Position - 0x60CF
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

void func_158()//Position - 0x611F
{
	if (fLocal_181 > 0f)
	{
		fLocal_181 = (fLocal_181 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_181 = 0f;
	}
	if (fLocal_181 >= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42618[10 /*31*/], fLocal_181, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[10 /*31*/], 4, false, true);
	}
	if (fLocal_180 < 0f)
	{
		fLocal_180 = (fLocal_180 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_180 = 0f;
	}
	if (fLocal_180 <= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42618[9 /*31*/], fLocal_180, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[9 /*31*/], 4, false, true);
	}
}

void func_159()//Position - 0x61AB
{
	if (fLocal_181 < 1f)
	{
		fLocal_181 = (fLocal_181 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_181 = 1f;
	}
	if (fLocal_181 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42618[10 /*31*/], fLocal_181, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[10 /*31*/], 4, false, true);
	}
	if (fLocal_180 > -1f)
	{
		fLocal_180 = (fLocal_180 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_180 = -1f;
	}
	if (fLocal_180 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_42618[9 /*31*/], fLocal_180, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_42618[9 /*31*/], 4, false, true);
	}
}

void func_160()//Position - 0x6237
{
	switch (iLocal_187)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_114372.f_24998.f_5 < 2)
				{
					if (Global_114372.f_24998.f_5 == 0)
					{
						sLocal_407 = "ACULT_HI";
					}
					else
					{
						sLocal_407 = "ACULT_LEAVE5";
					}
					sLocal_401 = "cult_p5_guard";
					sLocal_403 = "cult_p5_trv";
					sLocal_404 = "cult_p5_victim_01";
					sLocal_405 = "cult_p5_victim_02";
					sLocal_406 = "cult_p5_cam";
					fLocal_183 = 0.75f;
					fLocal_182 = 0.999f;
				}
				else if (Global_114372.f_24998.f_5 >= 2)
				{
					sLocal_407 = "ACULT_CAPT";
					sLocal_401 = "cult_p7_guard_01";
					sLocal_402 = "cult_p7_guard_02";
					sLocal_403 = "cult_p7_trv";
					sLocal_404 = "cult_p7_victim_01";
					sLocal_405 = "cult_p7_victim_02";
					sLocal_406 = "cult_p7_cam";
					fLocal_183 = 0.98f;
					fLocal_182 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_226))
				{
					HUD::REMOVE_BLIP(&iLocal_226);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_211 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_211, false))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_211))
						{
							iLocal_187++;
						}
					}
				}
				else
				{
					iLocal_211 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(iLocal_191[0]) && !PED::IS_PED_INJURED(iLocal_191[1]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_191[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_191[0]);
						TASK::CLEAR_PED_TASKS(iLocal_191[1]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_191[1]);
					}
					iLocal_187++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_211))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_211, true, false);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_211, Local_118, 13f, 13f, 13f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_211, -1028.4147f, 4924.863f, 205.9386f, false, false, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_211, false))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_211, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_211, 5f);
					}
				}
			}
			MISC::CLEAR_AREA(Local_118, 12f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.6248f, 4915.1523f, 205.5761f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(iLocal_191[0]) && !PED::IS_PED_INJURED(iLocal_191[1]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_191[0], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 0f, 1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_191[0], 128.2065f);
				ENTITY::SET_ENTITY_COORDS(iLocal_191[1], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 1f, 0f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_191[1], 128.2065f);
			}
			iLocal_194[0] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1042.5597f, 4913.516f, 207.0988f, 282.4169f, true, true);
			func_100(&uLocal_409, 1, iLocal_194[0], "ACULTMember1", 0, 1);
			if (Global_114372.f_24998.f_5 >= 2)
			{
				iLocal_194[1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1041.7574f, 4908.4897f, 207.2777f, 305.3168f, true, true);
				func_100(&uLocal_409, 2, iLocal_194[1], "ACULTMember2", 0, 1);
			}
			func_100(&uLocal_409, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_100(&uLocal_409, 3, 0, "ACULTMaster", 0, 1);
			func_100(&uLocal_409, 4, 0, "ACULTGroup", 0, 1);
			func_101(&uLocal_409, "ACULTAU", sLocal_407, 4, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_194[0], true);
			iLocal_213 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_194[0], true), true, 1f, 0, 0, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_213, iLocal_194[0], PED::GET_PED_BONE_INDEX(iLocal_194[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_114372.f_24998.f_5 < 2)
			{
				iLocal_212 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_115, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			else if (Global_114372.f_24998.f_5 >= 2)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_244 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_186 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_186, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_194[0], iLocal_186, "random@altruist_cult", sLocal_401, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_114372.f_24998.f_5 >= 2)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_194[1], iLocal_186, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1000f, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_244, iLocal_186, sLocal_406, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(iLocal_191[0]) && !PED::IS_PED_INJURED(iLocal_191[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_191[0], iLocal_186, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_191[1], iLocal_186, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_187++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				if (PED::IS_PED_MALE(iLocal_191[0]))
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_191[1]))
			{
				if (PED::IS_PED_MALE(iLocal_191[1]))
				{
					func_182(iLocal_191[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) > fLocal_183)
			{
				iLocal_187++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				if (PED::IS_PED_MALE(iLocal_191[0]))
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_191[1]))
			{
				if (PED::IS_PED_MALE(iLocal_191[1]))
				{
					func_182(iLocal_191[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) > fLocal_182)
			{
				iLocal_187++;
			}
			break;
		
		case 4:
			if (Global_114372.f_24998.f_5 < 2)
			{
				func_136();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[0]))
				{
					PED::DELETE_PED(&(iLocal_194[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[1]))
				{
					PED::DELETE_PED(&(iLocal_194[1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
				{
					OBJECT::DELETE_OBJECT(&iLocal_212);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
				{
					OBJECT::DELETE_OBJECT(&iLocal_213);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				CAM::SET_CAM_ACTIVE(iLocal_244, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_161(func_15(), 1, 2000, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_114372.f_24998.f_5 += 2;
			iLocal_172 = 1;
			break;
	}
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6A71
{
	int iVar0;
	int iVar1;
	
	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_162(func_181(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6B43
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
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
					func_179(99, 1);
					func_178(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_178(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_178(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_173(5))
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
							func_178(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_173(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_178(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_178(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_173(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_172(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_165(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_165(bVar1);
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
					func_178(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_178(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_178(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_2[Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114372.f_20567.f_233[iVar2 /*69*/]++;
		Global_114372.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114372.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_164(iParam0);
	if (Global_43922 == 15)
	{
		func_163(0);
	}
	return 1;
}

void func_163(bool bParam0)//Position - 0x7142
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
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114372.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61220[iVar0 /*3*/][0] = Global_114372.f_20567[iVar0];
		Global_61220.f_31[iVar0 /*3*/][0] = Global_114372.f_20567.f_11[iVar0];
		Global_61220.f_62[iVar0 /*3*/][0] = Global_114372.f_20567.f_22[iVar0];
		Global_61220.f_93[iVar0 /*3*/][0] = Global_114372.f_20567.f_33[iVar0];
		Global_61220.f_124[iVar0 /*3*/][0] = Global_114372.f_20567.f_44[iVar0];
		Global_61220.f_155[iVar0 /*3*/][0] = Global_114372.f_20567.f_55[iVar0];
		Global_61220.f_186[iVar0 /*3*/][0] = Global_114372.f_20567.f_66[iVar0];
		Global_61220.f_217[iVar0 /*3*/][0] = Global_114372.f_20567.f_77[iVar0];
		Global_61220.f_248[iVar0 /*3*/][0] = Global_114372.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61220[iVar0 /*3*/][1] = Global_114372.f_20567[iVar0];
			Global_61220.f_31[iVar0 /*3*/][1] = Global_114372.f_20567.f_11[iVar0];
			Global_61220.f_62[iVar0 /*3*/][1] = Global_114372.f_20567.f_22[iVar0];
			Global_61220.f_93[iVar0 /*3*/][1] = Global_114372.f_20567.f_33[iVar0];
			Global_61220.f_124[iVar0 /*3*/][1] = Global_114372.f_20567.f_44[iVar0];
			Global_61220.f_155[iVar0 /*3*/][1] = Global_114372.f_20567.f_55[iVar0];
			Global_61220.f_186[iVar0 /*3*/][1] = Global_114372.f_20567.f_66[iVar0];
			Global_61220.f_217[iVar0 /*3*/][1] = Global_114372.f_20567.f_77[iVar0];
			Global_61220.f_248[iVar0 /*3*/][1] = Global_114372.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_164(int iParam0)//Position - 0x73C4
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

void func_165(bool bParam0)//Position - 0x741E
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_171(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_171(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_171(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_171(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_168(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_168(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_168(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_168(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_168(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_168(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114372.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114372.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114372.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_167() /*5569*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114372.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_167() /*5569*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_166(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_166(bool bParam0)//Position - 0x7598
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

int func_167()//Position - 0x769B
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x76A8
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_169(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_169(int iParam0, var uParam1)//Position - 0x76D6
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_170(uParam1));
}

int func_170(var uParam0)//Position - 0x76EB
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

void func_171(int iParam0, bool bParam1, int iParam2)//Position - 0x771F
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_172(int iParam0)//Position - 0x773D
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

int func_173(int iParam0)//Position - 0x775D
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
		return func_175(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_175(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_175(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_175(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_174(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_174(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_174(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_174(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_174(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_174(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114372.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_167() /*5569*/].f_681.f_10, iParam0);
}

int func_174(int iParam0, int iParam1)//Position - 0x78FD
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_169(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_175(int iParam0, int iParam1)//Position - 0x792C
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_176(bool bParam0)//Position - 0x7948
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
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_145(27, 1);
	return 1;
}

int func_177(int iParam0, int iParam1)//Position - 0x79FF
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

void func_178(int iParam0, int iParam1)//Position - 0x7A50
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_179(int iParam0, int iParam1)//Position - 0x7A73
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

void func_180()//Position - 0x7AD0
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

int func_181(int iParam0)//Position - 0x7B45
{
	return Global_2139[iParam0 /*29*/].f_17;
}

void func_182(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x7B56
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_183(iParam3), false);
}

int func_183(int iParam0)//Position - 0x7B6F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_184()//Position - 0x7D64
{
	Global_21032 = 0;
	func_185();
}

void func_185()//Position - 0x7D74
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23177 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22166 = 6;
	}
}

void func_186(int iParam0)//Position - 0x7D95
{
	Global_23177 = iParam0;
}

int func_187()//Position - 0x7DA2
{
	if (Global_23177 == 1)
	{
		return 1;
	}
	return 0;
}

void func_188()//Position - 0x7DB9
{
	switch (iLocal_187)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_M_O_ACult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_ASSAULTRIFLE"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_O_ACult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_ASSAULTRIFLE")))
			{
				if (Global_114372.f_24998.f_5 == 0)
				{
					sLocal_407 = "ACULT_HI";
					sLocal_401 = "cult_p2_guard";
					sLocal_403 = "cult_p2_trv";
					sLocal_404 = "cult_p2_victim";
					sLocal_406 = "cult_p2_cam";
					fLocal_183 = 0.8f;
					fLocal_182 = 0.968f;
				}
				else if (Global_114372.f_24998.f_5 == 1)
				{
					sLocal_407 = "ACULT_LEAVE3";
					sLocal_401 = "cult_p4_guard";
					sLocal_403 = "cult_p4_trv";
					sLocal_404 = "cult_p4_victim";
					sLocal_406 = "cult_p4_cam";
					fLocal_183 = 0.77f;
					fLocal_182 = 0.999f;
				}
				else if (Global_114372.f_24998.f_5 == 2)
				{
					sLocal_407 = "ACULT_LEAVE3";
					sLocal_401 = "cult_p4_guard";
					sLocal_403 = "cult_p4_trv";
					sLocal_404 = "cult_p4_victim";
					sLocal_406 = "cult_p4_cam";
					fLocal_183 = 0.77f;
					fLocal_182 = 0.999f;
				}
				else if (Global_114372.f_24998.f_5 >= 3)
				{
					sLocal_407 = "ACULT_CAPT";
					sLocal_401 = "cult_p7_guard_01";
					sLocal_402 = "cult_p7_guard_02";
					sLocal_403 = "cult_p7_trv";
					sLocal_404 = "cult_p7_victim_01";
					sLocal_406 = "cult_p7_cam";
					fLocal_183 = 0.98f;
					fLocal_182 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_226))
				{
					HUD::REMOVE_BLIP(&iLocal_226);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_211 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_211, false))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_211))
						{
							iLocal_187++;
						}
					}
				}
				else
				{
					iLocal_211 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(iLocal_191[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_191[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_191[0]);
					}
					iLocal_187++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_211))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_211))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_211, true, false);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_211, Local_118, 13f, 13f, 13f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_211, -1028.4147f, 4924.863f, 205.9386f, false, false, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_211, false))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_211, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_211, 5f);
					}
				}
			}
			MISC::CLEAR_AREA(Local_118, 12f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.6248f, 4915.1523f, 205.5761f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_191[0], Vector(205.5761f, 4915.1523f, -1035.6248f) - Vector(0f, 0f, 1f), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_191[0], 128.2065f);
			}
			iLocal_194[0] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1042.5597f, 4913.516f, 207.0988f, 282.4169f, true, true);
			func_100(&uLocal_409, 1, iLocal_194[0], "ACULTMember1", 0, 1);
			if (Global_114372.f_24998.f_5 >= 3)
			{
				iLocal_194[1] = PED::CREATE_PED(26, joaat("A_M_O_ACult_02"), -1041.7574f, 4908.4897f, 207.2777f, 305.3168f, true, true);
				func_100(&uLocal_409, 2, iLocal_194[1], "ACULTMember2", 0, 1);
			}
			func_100(&uLocal_409, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_100(&uLocal_409, 3, 0, "ACULTMaster", 0, 1);
			func_100(&uLocal_409, 4, 0, "ACULTGroup", 0, 1);
			if (Global_114372.f_24998.f_5 != 1 && Global_114372.f_24998.f_5 != 2)
			{
				func_101(&uLocal_409, "ACULTAU", sLocal_407, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_194[0], true);
			iLocal_212 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_115, true, true, false);
			iLocal_213 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_194[0], true), true, 1f, 0, 0, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_213, iLocal_194[0], PED::GET_PED_BONE_INDEX(iLocal_194[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, false, false, false, false, 2, true, 0);
			if (Global_114372.f_24998.f_5 < 3)
			{
				if (Global_114372.f_24998.f_5 == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_212, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
			}
			else if (Global_114372.f_24998.f_5 >= 3)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_194[1], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			}
			iLocal_244 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_186 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_186, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_194[0], iLocal_186, "random@altruist_cult", sLocal_401, 1000f, -2f, 4, 0, 1000f, 0);
			if (Global_114372.f_24998.f_5 >= 3)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_194[1], iLocal_186, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1000f, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_244, iLocal_186, sLocal_406, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_191[0], iLocal_186, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1000f, 0);
			}
			iLocal_187++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				if (PED::IS_PED_MALE(iLocal_191[0]))
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_114372.f_24998.f_5 == 1 || Global_114372.f_24998.f_5 == 2)
				{
					if (!func_116())
					{
						func_101(&uLocal_409, "ACULTAU", sLocal_407, 4, 0, 0, 0);
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) > fLocal_183)
			{
				iLocal_187++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_191[0]))
			{
				if (PED::IS_PED_MALE(iLocal_191[0]))
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_191[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_114372.f_24998.f_5 == 1 || Global_114372.f_24998.f_5 == 2)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) > 0.9742857f && !iLocal_179) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_179 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) > fLocal_182)
			{
				iLocal_187++;
			}
			break;
		
		case 4:
			if (Global_114372.f_24998.f_5 < 3)
			{
				if (Global_114372.f_24998.f_5 != 1 && Global_114372.f_24998.f_5 != 2)
				{
					func_136();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[0]))
					{
						PED::DELETE_PED(&(iLocal_194[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[1]))
					{
						PED::DELETE_PED(&(iLocal_194[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_194[0], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[1]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_194[1], false, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_191[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_191[0], false, false);
					}
					iLocal_187++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
				{
					OBJECT::DELETE_OBJECT(&iLocal_212);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
				{
					OBJECT::DELETE_OBJECT(&iLocal_213);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_114372.f_24998.f_5 == 0)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, 0f, true, false, 0);
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_406, "cult_p4_cam"))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				}
				CAM::SET_CAM_ACTIVE(iLocal_244, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_161(func_15(), 1, 1000, 0, 0);
			}
			if (Global_114372.f_24998.f_5 != 1 && Global_114372.f_24998.f_5 != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_114372.f_24998.f_5++;
				iLocal_172 = 1;
			}
			break;
		
		case 5:
			if (!func_116() || SYSTEM::TIMERB() > 7000)
			{
				func_136();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[0]))
				{
					PED::DELETE_PED(&(iLocal_194[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_194[1]))
				{
					PED::DELETE_PED(&(iLocal_194[1]));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_114372.f_24998.f_5++;
				iLocal_172 = 1;
			}
			break;
	}
}

void func_189()//Position - 0x878D
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (PED::DOES_GROUP_EXIST(func_190()))
			{
				PED::GET_GROUP_SIZE(func_190(), &uLocal_184, &iLocal_185);
				if (iLocal_185 == 1)
				{
					iLocal_191[0] = PED::GET_PED_AS_GROUP_MEMBER(func_190(), 0);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_191[0], Local_118, 5f, 5f, 5f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, false);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 1;
					}
				}
				else if (iLocal_185 == 2)
				{
					iLocal_191[0] = PED::GET_PED_AS_GROUP_MEMBER(func_190(), 0);
					iLocal_191[1] = PED::GET_PED_AS_GROUP_MEMBER(func_190(), 1);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_191[0], Local_118, 5f, 5f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_191[1], Local_118, 5f, 5f, 5f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, false);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 1;
					}
				}
			}
		}
	}
}

int func_190()//Position - 0x8898
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_191()//Position - 0x88A8
{
	return Global_33067;
}

void func_192()//Position - 0x88B3
{
	if (func_195())
	{
		if (iLocal_398 == 0)
		{
			iLocal_398 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_115 - Vector(100f, 60f, 80f), Local_115 + Vector(100f, 60f, 80f), false, true, true, true, 1);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(func_96(PLAYER::PLAYER_ID()), Local_115, true) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_194())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (func_193())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	else if (func_15() == 2)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 5)
		{
			if (func_194())
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
				}
			}
			else if (func_193())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
			else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(joaat("AMBIENT_GANG_CULT"), joaat("PLAYER")) != 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
			}
		}
	}
	if (func_194())
	{
		if (iLocal_177)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_START");
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", true);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_42618[9 /*31*/].f_2, 6f, Global_42618[9 /*31*/].f_5, false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_42618[9 /*31*/].f_5, Global_42618[9 /*31*/].f_2, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_42618[10 /*31*/].f_2, 6f, Global_42618[10 /*31*/].f_5, false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_42618[10 /*31*/].f_5, Global_42618[10 /*31*/].f_2, false, 0f, false);
			}
			bLocal_178 = true;
			iLocal_177 = 0;
		}
	}
	else if (!iLocal_177)
	{
		if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_END");
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		if (!bLocal_178)
		{
			func_158();
		}
		iLocal_177 = 1;
	}
}

int func_193()//Position - 0x8AE5
{
	if ((((((MISC::IS_BULLET_IN_ANGLED_AREA(Local_121, Local_124, fLocal_127, true) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_128, Local_131, fLocal_134, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_135, Local_138, fLocal_141, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_142, Local_145, fLocal_148, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_149, Local_152, fLocal_155, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_156, Local_159, fLocal_162, true)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_163, Local_166, fLocal_169, true))
	{
		return 1;
	}
	return 0;
}

int func_194()//Position - 0x8B82
{
	if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_121, Local_124, fLocal_127, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_128, Local_131, fLocal_134, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_135, Local_138, fLocal_141, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_142, Local_145, fLocal_148, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_149, Local_152, fLocal_155, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_156, Local_159, fLocal_162, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_163, Local_166, fLocal_169, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0x8C49
{
	if (Global_114372.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_196()//Position - 0x8C65
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("AMBIENT_GANG_CULT"), joaat("PLAYER"));
	if (Global_114372.f_24998.f_5 >= iLocal_190 && Global_114372.f_24998.f_5 != 1000)
	{
		if (bLocal_170)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_48 = 3;
		}
		else
		{
			func_197(&iLocal_247);
			Global_96629 = 0;
			Global_96630 = 0;
			Global_96631 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			MISC::SET_FADE_OUT_AFTER_DEATH(true);
			MISC::PAUSE_DEATH_ARREST_RESTART(false);
			MISC::IGNORE_NEXT_RESTART(false);
			func_3(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_177 = 0;
			func_97();
			Global_114372.f_24998.f_5 = (iLocal_190 - 1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_197(&iLocal_247);
		Global_96629 = 0;
		Global_96630 = 0;
		Global_96631 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(true);
		MISC::PAUSE_DEATH_ARREST_RESTART(false);
		MISC::IGNORE_NEXT_RESTART(false);
		func_3(0);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_397))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_397);
			func_99(0);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_177 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_197(int* iParam0)//Position - 0x8D91
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

