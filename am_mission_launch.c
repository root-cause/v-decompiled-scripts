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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<22> Local_90 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<15> Local_115 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_130[32];
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	struct<2> Local_241 = { 0, 0 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 16;
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
	char* sLocal_414 = NULL;
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
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	func_403(ScriptParam_0);
	while (true)
	{
		func_402();
		if (func_394() || !func_393(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_391();
		}
		switch (func_390(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_389() == 2)
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
				else if (func_389() == 6)
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_389() == 2)
				{
					func_382();
					func_55();
				}
				else if (func_389() == 6)
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				if (((func_52(PLAYER::PLAYER_ID(), 1, 0) || func_49(PLAYER::PLAYER_ID())) || BitTest(uLocal_229, 8)) || BitTest(uLocal_229, 16))
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_48(&(Local_90.f_19));
				if (func_47(&(Local_90.f_19)))
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
			
			case 6:
				func_391();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_389())
			{
				case 0:
					func_46(&(Local_90.f_17), 0, 0);
					Local_90.f_1 = 2;
					break;
				
				case 2:
					func_42();
					func_40();
					func_3();
					if (func_1())
					{
						Local_90.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1F9
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()//Position - 0x20D
{
	return BitTest(Local_90.f_0, 6);
}

void func_3()//Position - 0x219
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_90.f_2)
		{
			case 0:
				if (!BitTest(Local_90.f_0, 10))
				{
					if (func_39(&(Local_90.f_17), 300000, 0))
					{
						MISC::SET_BIT(&Local_90, 10);
					}
				}
				if (!BitTest(Local_90.f_0, 10))
				{
					if (BitTest(Local_90.f_0, 0))
					{
						Local_90.f_5 = func_38();
						Local_90.f_2 = 1;
						Local_90.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					MISC::SET_BIT(&Local_90, 3);
					MISC::CLEAR_BIT(&Local_90, 13);
					func_46(&(Local_90.f_21), 0, 0);
					Local_90.f_2 = 2;
				}
				break;
			
			case 2:
				if (BitTest(Local_90.f_0, 4))
				{
					func_4(Local_90.f_5);
					Local_90.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_90.f_5);
				break;
			}
	}
}

void func_4(int iParam0)//Position - 0x2D9
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_90.f_9[0]));
			func_5(&(Local_90.f_12[0]));
			break;
	}
}

void func_5(var uParam0)//Position - 0x307
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_6()//Position - 0x32B
{
	if (Local_90.f_5 == 0)
	{
		if (!BitTest(Local_90.f_0, 1))
		{
			iLocal_237 = 0;
			iLocal_238 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iLocal_114 = 0;
			Local_90.f_3 = -1;
			Local_90.f_4 = 0;
			MISC::SET_BIT(&Local_90, 1);
		}
		if (!BitTest(Local_90.f_0, 2))
		{
			if (func_37())
			{
				MISC::SET_BIT(&Local_90, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()//Position - 0x387
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	iVar0 = func_36();
	iVar1 = func_35();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
	{
		if (Local_90.f_15 == 0)
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
			Local_90.f_15 = 1;
		}
		if (!BitTest(Local_90.f_0, 13))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_34(1, 1, 1))
					{
						if (func_28(1, 1, 1))
						{
							MISC::SET_BIT(&Local_90, 13);
						}
					}
				}
			}
		}
		if (BitTest(Local_90.f_0, 13))
		{
			if (func_27(iVar1))
			{
				if (func_27(iVar0))
				{
					if (func_14(&Var2, &fVar5))
					{
						if (func_11(&(Local_90.f_12[0]), iVar1, Var2, fVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_90.f_12[0]), true);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_90.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_90.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
		{
			if (Local_90.f_16 == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				Local_90.f_16 = 1;
			}
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_27(iVar0))
				{
					if (func_9(Local_90.f_12[0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_12[0]))
						{
							if (func_8(&(Local_90.f_9[0]), Local_90.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_90.f_9[0]), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_9[0]), true, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_90.f_9[0]), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_9[0]), Global_1837312);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_9[0]), true, 0f);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_90.f_9[0]), SYSTEM::ROUND((200f * Global_262145.f_156 /* Tunable: AI_HEALTH */)), 0, 0);
								Local_90.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x582
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x60A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_10(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x62A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x663
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_12(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_12(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x76C
{
	int iVar0;
	
	if (func_13(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635563.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_13(int iParam0, struct<3> Param1, int iParam4)//Position - 0x83F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_14(var uParam0, var uParam1)//Position - 0x8DD
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_26(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_238)
	{
		case 0:
			if (BitTest(Local_90.f_4, iLocal_238))
			{
				Var0 = { -1232.8418f, -1095.0028f, 2.2331f };
				Var3 = { -1226.248f, -1089.8192f, 10.1513f };
				Var6 = { func_25(0, 0) };
				fVar9 = 19.7853f;
			}
			break;
		
		case 1:
			if (BitTest(Local_90.f_4, iLocal_238))
			{
				Var0 = { -622.0966f, 250.3288f, 75.7075f };
				Var3 = { -614.8635f, 255.2288f, 88.7755f };
				Var6 = { func_25(0, 1) };
				fVar9 = 266.4686f;
			}
			break;
		
		case 2:
			if (BitTest(Local_90.f_4, iLocal_238))
			{
				Var0 = { 794.4784f, -2034.3386f, 25.2469f };
				Var3 = { 798.8026f, -2026.0035f, 33.2793f };
				Var6 = { func_25(0, 2) };
				fVar9 = 355.9428f;
			}
			break;
		
		case 3:
			if (BitTest(Local_90.f_4, iLocal_238))
			{
				Var0 = { -1623.9193f, 1249.831f, 135.2495f };
				Var3 = { -1621.5536f, 1257.98f, 145.2376f };
				Var6 = { func_25(0, 3) };
				fVar9 = 353.7463f;
			}
			break;
		
		case 4:
			if (BitTest(Local_90.f_4, iLocal_238))
			{
				Var0 = { 1118.077f, 1875.0347f, 60.3776f };
				Var3 = { 1127.6384f, 1883.0828f, 70.1053f };
				Var6 = { func_25(0, 4) };
				fVar9 = 201.3967f;
			}
			break;
	}
	if (iLocal_238 < 5)
	{
		if (!func_26(Var0, 0f, 0f, 0f, 0))
		{
			if (Local_90.f_3 == -1)
			{
				Local_90.f_3 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var3);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_90.f_3))
			{
				if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Local_90.f_3))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_90.f_3))
					{
						if (!func_15(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_90.f_3);
							return 1;
						}
						else
						{
							iLocal_238++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_90.f_3);
							Local_90.f_3 = -1;
						}
					}
					else
					{
						iLocal_238++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_90.f_3);
						Local_90.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_238++;
		}
	}
	else
	{
		iLocal_238 = 0;
	}
	return 0;
}

int func_15(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xB39
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_393(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_21(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_393(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_16(iVar1) || !bParam10) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_21(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_21(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0xCF1
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)//Position - 0xD1D
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0xD76
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575063[iVar1] == 1)
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

int func_19()//Position - 0xDB7
{
	return Global_1574926;
}

int func_20(int iParam0)//Position - 0xDC3
{
	int iVar0;
	
	iVar0 = iParam0;
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

Vector3 func_21(int iParam0)//Position - 0xDE5
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_24() && Global_1845281[iVar0 /*883*/].f_860) && !func_23(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_22(iParam0);
}

Vector3 func_22(int iParam0)//Position - 0xE38
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_23(struct<3> Param0)//Position - 0xE4B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_24()//Position - 0xE75
{
	return Global_2684504.f_19;
}

Vector3 func_25(int iParam0, int iParam1)//Position - 0xE83
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				Var0 = { -1228.9904f, -1092.2307f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				Var0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				Var0 = { 796.6768f, -2029.6017f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				Var0 = { -1622.8806f, 1253.5157f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				Var0 = { 1123.2698f, 1878.9169f, 65.7957f };
			}
			break;
	}
	return Var0;
}

bool func_26(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xF2F
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_27(int iParam0)//Position - 0xF76
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_28(int iParam0, bool bParam1, bool bParam2)//Position - 0xF94
{
	return func_29(0, iParam0, 1, bParam1, bParam2);
}

int func_29(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xFA8
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_33(iParam0) - func_32(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_31(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_32(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_33(iParam0) - func_32(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_30(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x106E
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x10A8
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_32(int iParam0, bool bParam1)//Position - 0x10EE
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x118B
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

bool func_34(int iParam0, bool bParam1, bool bParam2)//Position - 0x11CB
{
	return func_29(1, iParam0, 1, bParam1, bParam2);
}

int func_35()//Position - 0x11DF
{
	return joaat("cavalcade");
}

int func_36()//Position - 0x11EC
{
	return joaat("A_M_Y_Business_03");
}

int func_37()//Position - 0x11F9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (BitTest(Local_90.f_0, 1))
	{
		if (iLocal_114 >= 32)
		{
			if (iLocal_237 < 5)
			{
				iLocal_237++;
			}
			iLocal_114 = 0;
		}
		if (iLocal_114 == 0)
		{
			MISC::SET_BIT(&uLocal_229, 1);
		}
		if (iLocal_237 < 5)
		{
			iVar9 = iLocal_114;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar9)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar9));
				if (func_393(iVar0, 1, 1))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					if (BitTest(uLocal_229, 1))
					{
						Var2 = { func_25(Local_90.f_5, iLocal_237) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
						fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var5, true);
						if (fVar8 < 300f)
						{
							MISC::CLEAR_BIT(&uLocal_229, 1);
						}
					}
				}
			}
			iLocal_114++;
			if (iLocal_114 == 32)
			{
				if (BitTest(uLocal_229, 1))
				{
					MISC::SET_BIT(&(Local_90.f_4), iLocal_237);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_38()//Position - 0x12C8
{
	return 0;
}

int func_39(var uParam0, int iParam1, bool bParam2)//Position - 0x12D1
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_46(uParam0, bParam2, 0);
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

void func_40()//Position - 0x132F
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_90.f_6)
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
				{
					Local_90.f_6 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
						{
							if (func_9(Local_90.f_12[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0]), NETWORK::NET_TO_VEH(Local_90.f_12[0])))
								{
									if (BitTest(Local_90.f_0, 7))
									{
										MISC::SET_BIT(&Local_90, 9);
										Local_90.f_6 = 2;
									}
									else if (BitTest(Local_90.f_0, 14))
									{
										MISC::SET_BIT(&Local_90, 9);
										Local_90.f_6 = 2;
									}
									else if (BitTest(Local_90.f_0, 19))
									{
										Local_90.f_6 = 3;
									}
								}
								else
								{
									Local_90.f_6 = 4;
								}
							}
							else
							{
								Local_90.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0])))
						{
							Local_90.f_6 = 4;
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
						{
							if (!func_9(Local_90.f_12[0]))
							{
								Local_90.f_6 = 3;
							}
							else if (BitTest(Local_90.f_0, 19))
							{
								Local_90.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
				{
					if (!func_41(Local_90.f_9[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0]), false))
						{
							Local_90.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_41(int iParam0)//Position - 0x14D9
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_42()//Position - 0x14F8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_113 >= 32)
		{
			iLocal_113 = 0;
			iLocal_236 = 0;
			MISC::CLEAR_BIT(&uLocal_229, 0);
			MISC::SET_BIT(&uLocal_229, 5);
			MISC::CLEAR_BIT(&Local_90, 5);
			MISC::CLEAR_BIT(&Local_90, 17);
			MISC::CLEAR_BIT(&uLocal_229, 14);
			MISC::CLEAR_BIT(&uLocal_229, 19);
			if (!BitTest(Local_90.f_0, 16))
			{
				if (BitTest(Local_90.f_0, 18))
				{
					if (!BitTest(Local_90.f_0, 4))
					{
						MISC::SET_BIT(&Local_90, 16);
					}
				}
			}
			if (func_45(&(Local_90.f_21)))
			{
				if (!BitTest(Local_90.f_0, 12))
				{
					if (func_39(&(Local_90.f_21), 360000, 0))
					{
						MISC::SET_BIT(&Local_90, 12);
					}
					if (!BitTest(Local_90.f_0, 15))
					{
						if (func_39(&(Local_90.f_21), 240000, 0))
						{
							MISC::SET_BIT(&Local_90, 15);
						}
					}
				}
				else
				{
					MISC::SET_BIT(&uLocal_229, 9);
				}
			}
		}
		iVar0 = iLocal_113;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			bVar2 = iVar3;
			if (BitTest(uLocal_229, 5))
			{
				if (Local_130[iVar0 /*3*/].f_2 < 7)
				{
					MISC::CLEAR_BIT(&uLocal_229, 5);
				}
			}
			if (!BitTest(Local_90.f_0, 0))
			{
				if (BitTest(Local_130[iVar0 /*3*/], 0))
				{
					iLocal_236++;
				}
			}
			else if (BitTest(Local_130[iVar0 /*3*/], 2))
			{
				if (!BitTest(Local_90.f_0, 17))
				{
					if (!BitTest(Local_90.f_7, bVar2))
					{
						if (Local_130[iVar0 /*3*/].f_2 > 4)
						{
							MISC::SET_BIT(&(Local_90.f_7), bVar2);
							MISC::SET_BIT(&Local_90, 17);
						}
					}
				}
				if (!BitTest(Local_90.f_0, 5))
				{
					MISC::SET_BIT(&Local_90, 5);
				}
				if (!BitTest(Local_90.f_0, 4))
				{
					if (BitTest(Local_130[iVar0 /*3*/], 1))
					{
						Local_90.f_8 = iVar3;
						MISC::SET_BIT(&Local_90, 4);
						MISC::CLEAR_BIT(&uLocal_229, 15);
						MISC::CLEAR_BIT(&Local_90, 18);
					}
				}
				if (!BitTest(Local_90.f_0, 4))
				{
					if (!BitTest(Local_90.f_0, 18))
					{
						if (BitTest(Local_130[iVar0 /*3*/], 7))
						{
							MISC::SET_BIT(&Local_90, 18);
						}
					}
				}
				if (BitTest(uLocal_229, 9))
				{
					if (BitTest(Local_130[iVar0 /*3*/], 5))
					{
						MISC::CLEAR_BIT(&uLocal_229, 9);
					}
				}
				if (!BitTest(uLocal_229, 14))
				{
					if (BitTest(Local_130[iVar0 /*3*/], 6))
					{
						MISC::SET_BIT(&uLocal_229, 14);
					}
				}
				if (!BitTest(uLocal_229, 20))
				{
					if (BitTest(Local_130[iVar0 /*3*/], 8))
					{
						MISC::SET_BIT(&uLocal_229, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				func_44(iVar1);
			}
			iVar1++;
		}
		iLocal_113++;
		if (iLocal_113 >= 32)
		{
			if (!BitTest(Local_90.f_0, 16))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
				{
					if (func_41(Local_90.f_9[0]))
					{
						if (!BitTest(Local_90.f_0, 4))
						{
							if (BitTest(uLocal_229, 15))
							{
								if (!func_45(&uLocal_234))
								{
									func_46(&uLocal_234, 0, 0);
								}
								else if (func_39(&uLocal_234, 2000, 0))
								{
									MISC::SET_BIT(&Local_90, 16);
								}
							}
						}
					}
				}
			}
			MISC::SET_BIT(&uLocal_229, 0);
			if (!BitTest(Local_90.f_0, 0))
			{
				if (iLocal_236 >= 1)
				{
					MISC::SET_BIT(&Local_90, 0);
				}
			}
			if (!BitTest(Local_90.f_0, 14))
			{
				if (BitTest(uLocal_229, 14))
				{
					MISC::SET_BIT(&Local_90, 14);
				}
			}
			if (!BitTest(Local_90.f_0, 19))
			{
				if (BitTest(uLocal_229, 20))
				{
					MISC::SET_BIT(&Local_90, 19);
				}
			}
			if (!BitTest(Local_90.f_0, 6))
			{
				if (BitTest(uLocal_229, 5))
				{
					if (Local_90.f_2 > 1 && Local_90.f_2 <= 7)
					{
						MISC::SET_BIT(&Local_90, 6);
					}
					else if (BitTest(Local_90.f_0, 10))
					{
						MISC::SET_BIT(&Local_90, 6);
					}
				}
			}
			if (BitTest(Local_90.f_0, 17))
			{
				MISC::CLEAR_BIT(&Local_90, 17);
				MISC::CLEAR_BIT(&Local_90, 15);
				MISC::CLEAR_BIT(&Local_90, 12);
				func_43(&(Local_90.f_21));
				func_46(&(Local_90.f_21), 0, 0);
			}
			if (!BitTest(Local_90.f_0, 11))
			{
				if (BitTest(Local_90.f_0, 12))
				{
					if (BitTest(uLocal_229, 9))
					{
						MISC::SET_BIT(&Local_90, 11);
					}
				}
			}
		}
	}
}

void func_43(var uParam0)//Position - 0x1874
{
	uParam0->f_1 = 0;
}

void func_44(int iParam0)//Position - 0x1881
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_90.f_0, 7))
		{
			if (BitTest(Local_130[iParam0 /*3*/], 3))
			{
				MISC::SET_BIT(&Local_90, 7);
			}
		}
	}
}

bool func_45(var uParam0)//Position - 0x18AA
{
	return uParam0->f_1;
}

void func_46(var uParam0, bool bParam1, bool bParam2)//Position - 0x18B6
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

int func_47(var uParam0)//Position - 0x18FB
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

void func_48(var uParam0)//Position - 0x1924
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_46(uParam0, 0, 0);
		}
	}
}

int func_49(int iParam0)//Position - 0x1943
{
	if (func_51(iParam0))
	{
		if (!func_50(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)//Position - 0x1965
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_51(int iParam0)//Position - 0x197B
{
	if (Global_2657971[iParam0 /*465*/].f_219 == 0)
	{
		return 0;
	}
	return 1;
}

int func_52(int iParam0, bool bParam1, bool bParam2)//Position - 0x1997
{
	if (bParam1)
	{
		if (func_53(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_53(int iParam0)//Position - 0x19C9
{
	return func_54(iParam0);
}

var func_54(int iParam0)//Position - 0x19D7
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

void func_55()//Position - 0x19EE
{
	func_373();
	func_370();
	if (BitTest(Local_90.f_0, 10))
	{
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_90.f_0, 4))
	{
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (BitTest(Local_90.f_0, 16))
	{
		if (!BitTest(Local_90.f_0, 4))
		{
			if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
			{
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				Local_115.f_3 = 1141680977;
				func_368(Local_115, func_369(1));
			}
		}
	}
	if (BitTest(Local_90.f_0, 11))
	{
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			Local_115.f_3 = 1141680977;
			func_368(Local_115, func_369(1));
		}
	}
	if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if ((((func_52(PLAYER::PLAYER_ID(), 1, 0) || func_367()) || func_366() > 0) || func_50(PLAYER::PLAYER_ID(), 1)) || func_365())
			{
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if (func_363(PLAYER::PLAYER_ID()))
			{
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	switch (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0))
			{
				if (BitTest(Local_90.f_0, 3))
				{
					if (!BitTest(Local_90.f_0, 15))
					{
						MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 2);
						func_362(11, 1);
						Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
					}
					else
					{
						Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
						MISC::SET_BIT(&uLocal_229, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_361(Local_90.f_5))
			{
				func_360(Local_90.f_5);
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_359())
			{
				if (func_235())
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
					func_233(88, 1);
					func_232();
				}
				else if (BitTest(uLocal_229, 8))
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
			}
			else if (func_221())
			{
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
			}
			else
			{
				if (BitTest(uLocal_229, 8))
				{
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
				if (BitTest(Local_90.f_0, 15))
				{
					func_207(12, 116);
					Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
					MISC::SET_BIT(&uLocal_229, 16);
				}
			}
			break;
		
		case 5:
			if (Local_90.f_5 == 0)
			{
				func_64();
			}
			break;
		
		case 6:
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
			MISC::CLEAR_BIT(&uLocal_229, 3);
			MISC::CLEAR_BIT(&uLocal_229, 4);
			iLocal_228 = 0;
			func_207(12, 116);
			if (HUD::DOES_BLIP_EXIST(Global_1928409))
			{
				HUD::REMOVE_BLIP(&Global_1928409);
			}
			func_63(&Local_241);
			func_56();
			func_362(11, 0);
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_90.f_2 == 0 && !BitTest(Local_90.f_0, 10))
			{
				Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_56()//Position - 0x1D04
{
	if (!func_62())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574765.f_9)
	{
		return;
	}
	func_57();
}

void func_57()//Position - 0x1D31
{
	func_59();
	func_58(0);
}

void func_58(bool bParam0)//Position - 0x1D42
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_59()//Position - 0x1DD4
{
	if (!func_61())
	{
	}
	if (func_62())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574765.f_12));
		func_60();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_60()//Position - 0x1DFD
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

bool func_61()//Position - 0x206F
{
	if (!func_62())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574765.f_12));
	func_60();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_62()//Position - 0x2095
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

void func_63(int* iParam0)//Position - 0x20AB
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_64()//Position - 0x211D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
	{
		if (!func_41(Local_90.f_9[0]))
		{
			if (HUD::DOES_BLIP_EXIST(Global_1928409))
			{
				if (func_206() || func_205())
				{
					HUD::SET_BLIP_DISPLAY(Global_1928409, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Global_1928409, 4);
				}
			}
			else
			{
				Global_1928409 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_90.f_9[0]));
				HUD::SET_BLIP_COLOUR(Global_1928409, 1);
				HUD::SET_BLIP_SCALE(Global_1928409, 0f);
			}
			if (HUD::DOES_BLIP_EXIST(Local_241.f_0))
			{
				if (func_206() || func_205())
				{
					HUD::SET_BLIP_DISPLAY(Local_241.f_0, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_241.f_0, 4);
				}
				if (!BitTest(uLocal_229, 10))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_241.f_0, "FM_GDM_BLP" /* GXT: Target */);
					MISC::SET_BIT(&uLocal_229, 10);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_241.f_1))
			{
				if (func_206() || func_205())
				{
					HUD::SET_BLIP_DISPLAY(Local_241.f_1, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_241.f_1, 4);
				}
				if (!BitTest(uLocal_229, 12))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_241.f_1, "FM_GDM_BLP" /* GXT: Target */);
					MISC::SET_BIT(&uLocal_229, 12);
				}
			}
			if (!BitTest(uLocal_229, 6))
			{
				if (!BitTest(Global_2621446, 7) && !func_201(PLAYER::PLAYER_ID(), 0, -1))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (!func_206())
						{
							func_195("FM_GDM_KIL" /* GXT: Take out the ~r~target. */, 0);
						}
						MISC::SET_BIT(&uLocal_229, 6);
					}
				}
			}
			else if (BitTest(Global_2621446, 7))
			{
				func_56();
				MISC::CLEAR_BIT(&uLocal_229, 6);
			}
			else if (func_194())
			{
				func_56();
				MISC::CLEAR_BIT(&uLocal_229, 6);
			}
			else if (func_201(PLAYER::PLAYER_ID(), 0, -1))
			{
				func_56();
				MISC::CLEAR_BIT(&uLocal_229, 6);
			}
		}
		else if (BitTest(uLocal_229, 6))
		{
			func_56();
			MISC::CLEAR_BIT(&uLocal_229, 6);
		}
		if (!BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
		{
			iVar1 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_90.f_9[0], &uVar0);
			if (iVar1 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 1);
				iVar2 = func_191(func_193(PLAYER::PLAYER_ID(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_262145.f_3932 /* Tunable: XP_TUNABLE_LESTER_NPC_TARGET */ * IntToFloat(iVar3)));
				func_148(2, "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_KILLS"), iVar3, 1, -1, 0);
				if (Global_262145.f_2406 /* Tunable: LOW_LESTER_NPC_TARGET_MODIFIER */ != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_262145.f_2406 /* Tunable: LOW_LESTER_NPC_TARGET_MODIFIER */);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2402 /* Tunable: HIGH_LESTER_NPC_TARGET_MODIFIER */ != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_262145.f_2402 /* Tunable: HIGH_LESTER_NPC_TARGET_MODIFIER */);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(iVar6, iVar7 + 1) * 100;
				iVar8 = func_147(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_81(&iVar8, 1);
				if (func_80())
				{
					if (iVar8 > 0)
					{
						func_68(joaat("SERVICE_EARN_LESTER_TARGET_KILL"), iVar8, &iVar9, 0, 0, 0);
						Global_4535950[iVar9 /*85*/] = -1146479277;
					}
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(iVar8, -1146479277);
				}
				func_66(5, iVar8);
			}
			else if (iVar1 != func_65())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (!BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 7))
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_65()//Position - 0x244A
{
	return -1;
}

void func_66(int iParam0, int iParam1)//Position - 0x2453
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 /* Tunable: SETTINGFORCASHSHARE */ != -1)
		{
			if (func_67())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_67()//Position - 0x24A8
{
	if (MISC::IS_PC_VERSION() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x24C7
{
	int iVar0;
	
	if (!func_80())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_69(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_69(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_69(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
			func_69(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2E10
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_76(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_75(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_70(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2FBD
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_71(iParam0);
	}
}

void func_71(int iParam0)//Position - 0x2FF5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_74(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_72(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_72(var uParam0)//Position - 0x3049
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_73(&(uParam0->f_14));
	func_73(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_73(var uParam0)//Position - 0x3155
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

int func_74(int iParam0)//Position - 0x319D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_75(int iParam0, int iParam1)//Position - 0x31C8
{
	Global_2698855 = iParam1;
	Global_2698854 = iParam0;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x31DC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_80())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_77(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_77(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x3319
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_79(Var0.f_1);
	if ((Global_262145.f_23711 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_23712 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_23713 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_78();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_78()//Position - 0x33AD
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_79(int iParam0)//Position - 0x33BC
{
	var uVar0;
	
	if (func_20(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_80()//Position - 0x33D7
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_81(int iParam0, int iParam1)//Position - 0x33EE
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_146())
		{
			if (func_145(0))
			{
				if (!func_141(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_140()))
					{
						if (func_139() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_139());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_137(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_86("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_140(), iVar0, 0, 0, 1);
						}
						func_85(20);
						func_82(func_140(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_82(int iParam0, int iParam1, int iParam2)//Position - 0x348D
{
	struct<9> Var0;
	
	if (func_393(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_84(iParam0);
		func_83(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_79(iParam0), Var0.f_0);
	}
}

void func_83(var uParam0, var uParam1)//Position - 0x34E5
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_84(int iParam0)//Position - 0x34FF
{
	return Global_1887305[iParam0 /*610*/].f_512;
}

void func_85(int iParam0)//Position - 0x3513
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738934.f_5249.f_7[iVar0]), iVar1);
}

int func_86(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x353C
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_93(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_91(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_87(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_87(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x35D4
{
	int iVar0;
	
	if ((!func_90() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_88(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_88(int iParam0)//Position - 0x36DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_89(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_89(int iParam0)//Position - 0x373E
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_90()//Position - 0x3777
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_91(char* sParam0)//Position - 0x3788
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_92(&cVar0);
}

var func_92(char[4] cParam0)//Position - 0x37AA
{
	return cParam0;
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x37B4
{
	int iVar0;
	int iVar1;
	
	if (!func_20(iParam0))
	{
		return 1;
	}
	if (func_363(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_363(PLAYER::PLAYER_ID()) || (func_136() && func_135())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		iVar1 = func_134();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_393(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_132(iParam1, iParam0, 0);
							}
							else
							{
								return func_108(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_108(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_132(iParam1, iParam0, 0);
				}
				else
				{
					return func_94(0, -1, 0);
				}
			}
			else
			{
				return func_94(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_132(iParam1, iParam0, 0);
		}
		else
		{
			return func_108(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_108(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_94(bool bParam0, int iParam1, bool bParam2)//Position - 0x399F
{
	return func_95(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_95(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x39B5
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_107() || (func_106() && func_104())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_103(iParam2, iVar0);
		}
		else
		{
			return func_103(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_100(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_99(1);
				}
				else
				{
					return func_99(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_96(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_96(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_99(1);
	}
	return func_99(0);
}

int func_96(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3AB7
{
	int iVar0;
	
	iVar0 = func_98(iParam0, iParam1, iParam3);
	if (func_97(Global_4718592.f_127178, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_97(int iParam0, bool bParam1)//Position - 0x3BCF
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x3C20
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_100(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_99(bool bParam0)//Position - 0x3C68
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C7F
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_101(iParam0, bVar0, iParam1, bVar1) || !func_101(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_101(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3FCA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_393(iVar1, 1, 1) || func_17(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_102(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_102(int iParam0)//Position - 0x40F9
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_103(int iParam0, int iParam1)//Position - 0x4111
{
	if (iParam0 == -1)
	{
		iParam0 = func_98(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_104()//Position - 0x415F
{
	if (func_105())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_105()//Position - 0x417E
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_106()//Position - 0x4193
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_107()//Position - 0x41DA
{
	if (func_105() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x41F7
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_117())
			{
				iVar3 = func_113(iParam0);
				if (!iVar3 == -1)
				{
					return func_111(iVar3);
				}
			}
			if ((func_110(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_100(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_99(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_109(1);
			}
			else
			{
				return func_95(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_99(1);
			}
			else
			{
				return func_95(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_113(iParam0);
	if (!iVar4 == -1)
	{
		return func_111(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_109(bool bParam0)//Position - 0x438F
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x43A6
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_111(int iParam0)//Position - 0x441E
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_112(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_112(int iParam0)//Position - 0x44E1
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_113(int iParam0)//Position - 0x44F8
{
	if (func_20(iParam0))
	{
		if (func_115(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_114(iParam0)];
		}
	}
	return -1;
}

int func_114(int iParam0)//Position - 0x4528
{
	if (func_20(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_65();
}

int func_115(int iParam0, bool bParam1)//Position - 0x454B
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_116(iParam0))
		{
			return 0;
		}
	}
	return func_20(Global_1887305[iParam0 /*610*/].f_10);
}

int func_116(int iParam0)//Position - 0x4583
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_117()//Position - 0x45B8
{
	if ((((((((func_131() || func_130()) || func_24()) || func_129()) || func_128()) || func_126()) || func_124()) || func_121()) || func_118())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_118()//Position - 0x4634
{
	return func_119(Global_4718592.f_127178);
}

int func_119(int iParam0)//Position - 0x464A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_120(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x467E
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_121()//Position - 0x469D
{
	return func_122(Global_4718592.f_127178);
}

int func_122(int iParam0)//Position - 0x46B3
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_123(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x46E7
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_124()//Position - 0x4706
{
	return func_125(Global_4718592.f_127178);
}

int func_125(int iParam0)//Position - 0x471C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_126()//Position - 0x4755
{
	return func_127(Global_4718592.f_127178);
}

int func_127(int iParam0)//Position - 0x476B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_128()//Position - 0x47A5
{
	return Global_2684504.f_24;
}

var func_129()//Position - 0x47B3
{
	return Global_2684504.f_21;
}

var func_130()//Position - 0x47C1
{
	return Global_2684504.f_18;
}

var func_131()//Position - 0x47CF
{
	return Global_2684504.f_17;
}

int func_132(int iParam0, int iParam1, bool bParam2)//Position - 0x47DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_117())
	{
		iVar2 = func_113(iParam1);
		if (!iVar2 == -1)
		{
			return func_111(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_95(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_133(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_100(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_109(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_133(int iParam0)//Position - 0x495D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_134()//Position - 0x4A32
{
	return Global_2621446.f_2;
}

var func_135()//Position - 0x4A40
{
	return BitTest(Global_2621446, 4);
}

var func_136()//Position - 0x4A4E
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

void func_137(int iParam0, bool bParam1)//Position - 0x4A68
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_138(1);
	}
	else
	{
		iVar1 = func_138(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_138(bool bParam0)//Position - 0x4A9A
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12843 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_139()//Position - 0x4AC0
{
	return Global_262145.f_12842 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_140()//Position - 0x4ACF
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

bool func_141(bool bParam0)//Position - 0x4AE4
{
	return func_142(PLAYER::PLAYER_ID(), bParam0);
}

int func_142(int iParam0, bool bParam1)//Position - 0x4AF6
{
	return func_143(iParam0, bParam1, 1);
}

int func_143(int iParam0, bool bParam1, int iParam2)//Position - 0x4B07
{
	int iVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_144(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_20(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)//Position - 0x4B63
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_145(bool bParam0)//Position - 0x4BB2
{
	return func_115(PLAYER::PLAYER_ID(), bParam0);
}

bool func_146()//Position - 0x4BC4
{
	return func_116(PLAYER::PLAYER_ID());
}

int func_147(int iParam0, int iParam1)//Position - 0x4BD4
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4C15
{
	return func_149(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4C31
{
	var uVar0;
	
	uVar0 = func_150(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4C54
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_181();
	if (func_180(sParam2))
	{
	}
	if (func_179())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_176(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_175(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_173(0, &iVar1);
					break;
				
				case 3:
					func_173(1, &iVar1);
					break;
				
				case 1:
					func_170(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369 /* Tunable: -9502162 */)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_169(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_159((func_168(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_2 != -1)
				{
					func_169(1166, iVar1, -1);
				}
				func_155(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_151((func_153(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_151((func_153(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_151(int iParam0)//Position - 0x4DC2
{
	if (func_179())
	{
		Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_5 = iParam0;
		func_152(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_152(int iParam0, int iParam1)//Position - 0x4DED
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_153(int iParam0)//Position - 0x4E09
{
	if (iParam0 > -1)
	{
		if (func_393(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_154(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_154(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x4E5A
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

void func_155(int iParam0)//Position - 0x4E78
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_158(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_156(func_157(&Var0));
			if (iVar13 == 0)
			{
				func_152(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_154(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_152(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_154(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_152(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_154(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_152(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_154(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_152(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_154(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_156(int iParam0)//Position - 0x4F42
{
	if (iParam0 == func_154(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_154(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_154(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_154(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_154(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_157(var* uParam0)//Position - 0x4FB8
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

struct<13> func_158(int iParam0)//Position - 0x4FDB
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_159(int iParam0, int iParam1, int iParam2)//Position - 0x4FF2
{
	if (func_179())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_167(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_167(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_INITIALISE"), joaat("XPCATEGORY_LIVE_RP_RESET"));
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_166(PLAYER::PLAYER_ID()))
		{
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_6 = func_191(iParam0, 1);
		}
		func_163(640, iParam0, -1, 1);
		func_163(641, func_191(iParam0, 1), -1, 1);
		func_160(-1109644434, 7, 0);
	}
}

void func_160(int iParam0, int iParam1, int iParam2)//Position - 0x5104
{
	int iVar0;
	
	if (func_162(iParam1, iParam2))
	{
		iVar0 = func_161();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_161()//Position - 0x5131
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_162(int iParam0, var uParam1)//Position - 0x5166
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_163(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x51EC
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_164(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_164(int iParam0, var uParam1)//Position - 0x521A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_165(uParam1));
}

int func_165(var uParam0)//Position - 0x522F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_166(int iParam0)//Position - 0x5263
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_167(int iParam0, int iParam1)//Position - 0x5282
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_164(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x52B1
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_167(640, -1);
			}
			else if (func_166(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_167(640, -1);
	}
	return 0;
}

void func_169(int iParam0, int iParam1, int iParam2)//Position - 0x5308
{
	int iVar0;
	
	iVar0 = func_167(iParam0, func_165(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_163(iParam0, iVar0, iParam2, 1);
}

void func_170(int iParam0)//Position - 0x5330
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_100(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_172(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_171(*iParam0, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_171(*iParam0, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_171(int iParam0, int iParam1)//Position - 0x541C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_172(int iParam0, int iParam1)//Position - 0x543D
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { func_158(iParam0) };
		Global_2707320 = { func_158(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_173(bool bParam0, int iParam1)//Position - 0x54AA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_393(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_172(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_393(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_174(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_172(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_171(*iParam1, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_171(*iParam1, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_174(int iParam0, int iParam1)//Position - 0x55C2
{
	return SYSTEM::VDIST(func_22(iParam0), func_22(iParam1));
	return 0f;
}

int func_175(int iParam0)//Position - 0x55DE
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_171(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_176(int iParam0)//Position - 0x5615
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_168(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_168(PLAYER::PLAYER_ID());
		}
	}
	if (func_177(8000, 0, 0) > 0)
	{
		if (func_177(8000, 0, 0) < (iParam0 + func_168(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_177(8000, 0, 0) - func_168(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_177(int iParam0, bool bParam1, int iParam2)//Position - 0x5679
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_178(iParam0);
}

int func_178(int iParam0)//Position - 0x569F
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

int func_179()//Position - 0x5BDA
{
	return 1;
}

int func_180(char* sParam0)//Position - 0x5BE3
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

int func_181()//Position - 0x5C1B
{
	int iVar0;
	
	if (func_190(PLAYER::PLAYER_ID()) || func_189(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_187() || func_183(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_182(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 /* Tunable: 1840127983 */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169 /* Tunable: 1840127983 */;
		}
	}
	else if (Global_262145.f_7168 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_182(int iParam0)//Position - 0x5CE9
{
	return iParam0 == 89;
}

int func_183(int iParam0)//Position - 0x5CF6
{
	return func_184(func_185(iParam0));
}

int func_184(int iParam0)//Position - 0x5D08
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x5D22
{
	if (func_20(iParam0))
	{
		if (func_186(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_186(int iParam0, int iParam1)//Position - 0x5D4E
{
	if (func_20(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_187()//Position - 0x5D92
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_24();
	}
	return func_188(Global_4718592.f_127178);
}

int func_188(int iParam0)//Position - 0x5DB6
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_189(int iParam0)//Position - 0x5DF0
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_190(int iParam0)//Position - 0x5E05
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

int func_191(int iParam0, bool bParam1)//Position - 0x5E1A
{
	if (bParam1)
	{
	}
	return func_192(iParam0, 0);
}

int func_192(int iParam0, int iParam1)//Position - 0x5E2E
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
		if (func_178(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_178(iVar3) < iParam0)
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

int func_193(int iParam0, bool bParam1)//Position - 0x5EE9
{
	if (bParam1)
	{
	}
	return func_168(iParam0);
}

bool func_194()//Position - 0x5EFC
{
	return Global_76498;
}

void func_195(char* sParam0, bool bParam1)//Position - 0x5F08
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_199(sParam0))
	{
		return;
	}
	func_57();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_198();
	func_197(bParam1);
	func_196();
}

void func_196()//Position - 0x5F73
{
	MISC::SET_BIT(&(Global_1574765.f_59), 1);
}

void func_197(bool bParam0)//Position - 0x5F86
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574765.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574765.f_59), 0);
}

void func_198()//Position - 0x5FAC
{
	Global_1574765.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_199(char* sParam0)//Position - 0x5FD1
{
	if (!func_62())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_200(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
}

bool func_200(char* sParam0)//Position - 0x6015
{
	if (!func_62())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

int func_201(int iParam0, bool bParam1, int iParam2)//Position - 0x6047
{
	if (Global_1845281[iParam0 /*883*/].f_268.f_35 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
	{
		if (iParam2 == -1 || func_204(Global_2657971[iParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
			{
				return func_202(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)//Position - 0x60CE
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return iParam0;
	}
	if (func_203(iParam0) != -1)
	{
		iVar0 = func_204(func_203(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_115(iParam0, 0))
			{
				return func_114(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_65();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_65();
}

int func_203(int iParam0)//Position - 0x615D
{
	if (iParam0 != func_65())
	{
		if (func_393(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == PLAYER::PLAYER_ID()) && func_393(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_204(int iParam0)//Position - 0x61CC
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
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

var func_205()//Position - 0x66CC
{
	return Global_2647061.f_1870;
}

int func_206()//Position - 0x66DB
{
	return 1;
}

void func_207(int iParam0, int iParam1)//Position - 0x66E4
{
	int iVar0;
	
	iVar0 = func_220(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2624658[iVar0 /*46*/].f_4 && Global_2624658[iVar0 /*46*/])
	{
		Global_2624658[iVar0 /*46*/].f_4 = 1;
		func_211();
	}
	func_208(iVar0);
}

void func_208(int iParam0)//Position - 0x6741
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1680128)
	{
		return;
	}
	if (Global_2624658[iParam0 /*46*/].f_26 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2624658[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1680128)
	{
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		Global_2624658[iVar0 /*46*/] = { Global_2624658[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_210(iVar0);
	Global_1680128 = (Global_1680128 - 1);
	if (Global_1680099)
	{
		if (Global_1680097 > 0)
		{
			func_209();
		}
	}
}

void func_209()//Position - 0x67E2
{
	Global_1680099 = 0;
}

void func_210(int iParam0)//Position - 0x67EF
{
	Global_2624658[iParam0 /*46*/] = 0;
	Global_2624658[iParam0 /*46*/].f_2 = 0;
	Global_2624658[iParam0 /*46*/].f_3 = 0;
	Global_2624658[iParam0 /*46*/].f_4 = 0;
	Global_2624658[iParam0 /*46*/].f_5 = func_65();
	Global_2624658[iParam0 /*46*/].f_6 = 145;
	Global_2624658[iParam0 /*46*/].f_7 = 1;
	Global_2624658[iParam0 /*46*/].f_8 = -1;
	Global_2624658[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_10), "", 64);
	Global_2624658[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iParam0 /*46*/].f_27), "", 32);
	Global_2624658[iParam0 /*46*/].f_35 = -1;
	Global_2624658[iParam0 /*46*/].f_36 = -1;
	Global_2624658[iParam0 /*46*/].f_37 = 0;
	Global_2624658[iParam0 /*46*/].f_39 = 0;
	Global_2624658[iParam0 /*46*/].f_40 = -1;
	Global_2624658[iParam0 /*46*/].f_41 = 0;
	Global_2624658[iParam0 /*46*/].f_42 = 0;
	Global_2624658[iParam0 /*46*/].f_43 = 0;
	Global_2624658[iParam0 /*46*/].f_45 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2624658[iParam0 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_211()//Position - 0x68FD
{
	Global_23349 = (Global_23349 - 1);
	if (Global_23349 < 0)
	{
		func_219("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_212();
}

void func_212()//Position - 0x691F
{
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_213(int iParam0)//Position - 0x697C
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_217();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_216(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
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
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_215(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_214(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_214(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6EF1
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
		func_215(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_215(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_215(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_215(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_215(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_215(char* sParam0)//Position - 0x6FA4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_216(int iParam0)//Position - 0x6FB6
{
	return Global_44042 == iParam0;
}

void func_217()//Position - 0x6FC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_218(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6FE7
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

void func_219(char* sParam0)//Position - 0x704A
{
	if (Global_23349 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_23349 = 0;
	}
}

int func_220(int iParam0)//Position - 0x7067
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1680128)
	{
		if (!Global_2624658[iVar0 /*46*/].f_7)
		{
			if (Global_2624658[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_221()//Position - 0x70AA
{
	if (!BitTest(uLocal_229, 17))
	{
		func_223(12, 116, "", 1, 0, 1, 0);
		MISC::SET_BIT(&uLocal_229, 17);
	}
	else if (!BitTest(uLocal_229, 18))
	{
		if (func_222(12, 116))
		{
			MISC::SET_BIT(&uLocal_229, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0, int iParam1)//Position - 0x70F6
{
	int iVar0;
	
	iVar0 = func_220(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2624658[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2624658[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_208(iVar0);
	Global_2625824 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_223(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x7149
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_220(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_208(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_224(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_224(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x718F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar51;
	struct<13> Var52;
	int iVar65;
	
	iVar0 = func_65();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_231())
		{
			return;
		}
	}
	iVar2 = Global_1680128;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2624658[iVar2 /*46*/] = { Global_2624658[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1680128++;
	if (Global_1680128 > 12)
	{
		Global_1680128 = 12;
	}
	iVar4 = 0;
	if (Global_2624658[1 /*46*/].f_1)
	{
		Global_2624658[0 /*46*/] = { Global_2624658[1 /*46*/] };
		Global_2624658[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2624658[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2624658[iVar4 /*46*/].f_1 = 0;
	}
	Global_2624658[iVar4 /*46*/] = 0;
	Global_2624658[iVar4 /*46*/].f_2 = 0;
	Global_2624658[iVar4 /*46*/].f_3 = 0;
	Global_2624658[iVar4 /*46*/].f_4 = 0;
	Global_2624658[iVar4 /*46*/].f_5 = iVar0;
	Global_2624658[iVar4 /*46*/].f_6 = iVar1;
	Global_2624658[iVar4 /*46*/].f_7 = bParam2;
	Global_2624658[iVar4 /*46*/].f_8 = iParam0;
	Global_2624658[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2624658[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2624658[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2624658[iVar4 /*46*/].f_35 = iParam6;
	Global_2624658[iVar4 /*46*/].f_36 = iParam7;
	Global_2624658[iVar4 /*46*/].f_37 = 0;
	Global_2624658[iVar4 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	Global_2624658[iVar4 /*46*/].f_39 = uParam5;
	Global_2624658[iVar4 /*46*/].f_40 = Global_2625823;
	Global_2624658[iVar4 /*46*/].f_44 = iParam8;
	Global_2624658[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2624658[iVar4 /*46*/].f_9 = func_227();
	}
	else if (iParam0 == 272)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	else if (iParam0 == 212)
	{
		Global_2624658[iVar4 /*46*/].f_9 = iParam6;
	}
	Global_2625823++;
	func_226();
	Global_2624658[iVar4 /*46*/].f_41 = 0;
	Global_2624658[iVar4 /*46*/].f_42 = 0;
	Global_2624658[iVar4 /*46*/].f_43 = 0;
	if (func_225())
	{
		if (bParam2)
		{
			bVar51 = true;
			if (bVar51)
			{
				Var52 = { func_158(iVar0) };
				iVar65 = NETWORK::NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(&Var52);
				if (iVar65 != -1)
				{
					Global_2624658[iVar4 /*46*/].f_41 = iVar65;
					Global_2624658[iVar4 /*46*/].f_42 = 1;
					Global_2624658[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

bool func_225()//Position - 0x7431
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_226()//Position - 0x7447
{
	Global_1680101 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_227()//Position - 0x745E
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_230() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_228(135, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_228(136, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_228(137, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_228(138, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_228(139, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_228(140, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_228(141, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && !MISC::ARE_STRINGS_EQUAL(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_167(12480, -1);
	bVar9 = false;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		bVar9 = iVar6 * 3;
		if (bVar9 != -1)
		{
			if (!BitTest(uVar8, bVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

char* func_228(int iParam0, int iParam1)//Position - 0x75AB
{
	int iVar0;
	
	iVar0 = func_229(iParam0, iParam1);
	return STATS::STAT_GET_STRING(iVar0, -1);
}

int func_229(int iParam0, var uParam1)//Position - 0x75C4
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_165(uParam1));
}

struct<6> func_230()//Position - 0x75D9
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934536.f_10)))
	{
		iVar7 = func_167(12481, -1);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = MISC::GET_CONTENT_ID_INDEX(iVar7);
			if (iVar6 != -1)
			{
				Var0 = { Global_794744.f_154855[Global_794744.f_135107[iVar6 /*13*/].f_10 /*6*/] };
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1934536.f_10 = { Var0 };
		return Var0;
	}
	return Global_1934536.f_10;
}

bool func_231()//Position - 0x765E
{
	return Global_1575036 == 10;
}

void func_232()//Position - 0x766D
{
	int iVar0;
	
	iVar0 = func_167(1304, -1);
	MISC::SET_BIT(&iVar0, 8);
	func_163(1304, iVar0, -1, 1);
}

void func_233(int iParam0, bool bParam1)//Position - 0x7692
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_234() /*5570*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_234() /*5570*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_234() /*5570*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_234() /*5570*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_234() /*5570*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_234() /*5570*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_234() /*5570*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_234() /*5570*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_234() /*5570*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_234() /*5570*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_234() /*5570*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_234() /*5570*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_234() /*5570*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_234() /*5570*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_234() /*5570*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_234() /*5570*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_234() /*5570*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_234() /*5570*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_234()//Position - 0x78D1
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_235()//Position - 0x78DE
{
	if (!BitTest(uLocal_229, 4))
	{
		if (!BitTest(uLocal_229, 8) || (BitTest(uLocal_229, 8) && func_39(&uLocal_232, 600000, 0)))
		{
			if (func_241(Local_90.f_5))
			{
				MISC::SET_BIT(&uLocal_229, 4);
				MISC::CLEAR_BIT(&uLocal_229, 8);
			}
		}
	}
	else if (!func_240())
	{
		if (!BitTest(uLocal_229, 19))
		{
			if (func_239())
			{
				MISC::SET_BIT(&uLocal_229, 19);
			}
			else if (!func_238() && !func_236())
			{
				MISC::SET_BIT(&uLocal_229, 8);
				MISC::CLEAR_BIT(&uLocal_229, 4);
				func_46(&uLocal_232, 0, 0);
				iLocal_228 = 0;
			}
		}
		else if (!func_236())
		{
			if (func_238())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		MISC::SET_BIT(&uLocal_229, 8);
		MISC::CLEAR_BIT(&uLocal_229, 4);
		func_46(&uLocal_232, 0, 0);
		iLocal_228 = 0;
	}
	return 0;
}

bool func_236()//Position - 0x79B9
{
	return func_237();
}

bool func_237()//Position - 0x79C5
{
	return Global_1663588.f_40 == 3;
}

bool func_238()//Position - 0x79D5
{
	return Global_1663588.f_57.f_1;
}

int func_239()//Position - 0x79E5
{
	if (Global_22286 == 4)
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

int func_240()//Position - 0x7A0A
{
	if (Global_23302)
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x7A20
{
	int iVar0;
	
	switch (iLocal_228)
	{
		case 0:
			if (func_352(0, 1, 1, 1))
			{
				if (!func_351(12, -1))
				{
					func_343(iParam0);
					iLocal_228++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_342(iParam0);
			func_341(iParam0);
			if (func_242(&uLocal_249, iVar0, "FM_1AU", sLocal_414, 0, 0))
			{
				MISC::CLEAR_BIT(&uLocal_229, 11);
				iLocal_228++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_242(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7AA1
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_339())
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_243(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_243(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x7AE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_337(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_336(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_331(uParam6))
	{
		return 0;
	}
	if (func_328(iVar0, iVar1, iVar2))
	{
		if (func_327())
		{
			return 0;
		}
		func_326();
		return func_250(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_249(iParam4))
	{
		return 0;
	}
	func_244(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_244(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x7BCB
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_245(iParam4);
	func_326();
	Global_1663588.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_245(int iParam0)//Position - 0x7C38
{
	if (func_248(iParam0))
	{
		func_247();
		return;
	}
	func_246();
}

void func_246()//Position - 0x7C54
{
	Global_1663588.f_40.f_10 = 0;
}

void func_247()//Position - 0x7C65
{
	Global_1663588.f_40.f_10 = 1;
}

int func_248(int iParam0)//Position - 0x7C76
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_249(int iParam0)//Position - 0x7CBE
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_250(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x7CD1
{
	struct<2> Var0;
	
	func_325();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_322(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_319(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_322(uParam0, sParam3, sParam4);
		}
		return func_302(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_301(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_289(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_288(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_251(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_251(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7DCB
{
	bool bVar0;
	
	func_287();
	bVar0 = true;
	if (func_253(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_252(120000);
		return 1;
	}
	return 0;
}

void func_252(int iParam0)//Position - 0x7E02
{
	Global_1663588.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_253(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x7E25
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_65();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_281(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_280(sParam5, bParam6, &iVar3);
	uVar5 = func_278(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_277(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_257(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_256();
	}
	func_287();
	func_255();
	func_254();
	return 1;
}

void func_254()//Position - 0x7F6E
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_255()//Position - 0x7F86
{
	Global_1663588.f_40 = 3;
}

void func_256()//Position - 0x7F95
{
	MISC::SET_BIT(&Global_8800, 8);
}

int func_257(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7FA6
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_258(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			MISC::SET_BIT(&Global_4543084, 0);
		}
		return 1;
	}
	return 0;
}

int func_258(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x8014
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_270();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4543069 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_269() == 0)
	{
		func_267();
		return 0;
	}
	func_266(Global_4543068);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/]), sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}
	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = uParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = uParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = uParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = uParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	func_270();
	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
		
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case 0:
				func_265(0);
				break;
			
			case 1:
				func_265(1);
				break;
			
			case 2:
				func_265(2);
				break;
			
			case 3:
				func_265(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
			
			case 0:
				Global_4543069 = 1;
				break;
			
			case 2:
				Global_4543069 = 1;
				break;
			
			case 1:
				Global_4543069 = 1;
				break;
			}
	}
	Global_23355[Global_4543068] = 0;
	if (bParam10)
	{
		func_270();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_264())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_259(iParam0, sParam1, bVar1, func_263(PLAYER::PLAYER_ID()));
	return 1;
}

void func_259(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x83FF
{
	struct<14> Var0;
	
	if (!func_260())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_260()//Position - 0x849A
{
	if (!Global_262145.f_28397 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_65())
	{
		return 0;
	}
	if (func_261(PLAYER::PLAYER_ID()))
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

bool func_261(int iParam0)//Position - 0x84FD
{
	return func_262(iParam0, 20);
}

var func_262(int iParam0, int iParam1)//Position - 0x850D
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_263(int iParam0)//Position - 0x8525
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

bool func_264()//Position - 0x853A
{
	return Global_1575083;
}

void func_265(int iParam0)//Position - 0x8546
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_266(int iParam0)//Position - 0x8565
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4541819[iParam0 /*104*/].f_18 = iVar0;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_267()//Position - 0x85E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_268(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_268(struct<6> Param0, struct<6> Param6)//Position - 0x868F
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_269()//Position - 0x877A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0)
		{
			Global_4543068 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0 || Global_4541819[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_268(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			{
				Global_4543068 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4543068 == 11)
	{
		return 0;
	}
	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

void func_270()//Position - 0x88A5
{
	if (func_216(14))
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
		Global_20930 = func_271();
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

var func_271()//Position - 0x8947
{
	func_272();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_272()//Position - 0x8960
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_275(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_274(PLAYER::PLAYER_PED_ID());
			if (func_273(iVar0) && (!func_216(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_273(Global_113969.f_2366.f_539.f_4321))
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

bool func_273(int iParam0)//Position - 0x8A5D
{
	return iParam0 < 3;
}

int func_274(int iParam0)//Position - 0x8A69
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_275(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_275(int iParam0)//Position - 0x8AA6
{
	if (func_273(iParam0))
	{
		return func_276(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_276(int iParam0)//Position - 0x8ACB
{
	return Global_2169[iParam0 /*29*/];
}

int func_277(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x8ADA
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_258(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			MISC::SET_BIT(&Global_4543084, 0);
		}
		return 1;
	}
	return 0;
}

int func_278(int iParam0, int iParam1)//Position - 0x8B5C
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_279(2, iParam1);
	return iParam0;
}

void func_279(int iParam0, var uParam1)//Position - 0x8B7B
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_280(char* sParam0, bool bParam1, int iParam2)//Position - 0x8C2C
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_279(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_281(int iParam0)//Position - 0x8C69
{
	int iVar0;
	
	iVar0 = func_284(iParam0);
	if (iVar0 == -1)
	{
		func_282(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_282(int iParam0, bool bParam1)//Position - 0x8C9F
{
	if (!func_393(iParam0, 0, 1))
	{
		return;
	}
	if (func_284(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_283(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_283(int iParam0)//Position - 0x8D0B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_284(int iParam0)//Position - 0x8D3D
{
	int iVar0;
	
	if (!func_393(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_285(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_285(int iParam0)//Position - 0x8DBC
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1681386)
	{
		Global_1681225[iVar32 /*5*/] = { Global_1681225[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_286(&(Global_1681225[iVar32 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_286(var uParam0)//Position - 0x8E72
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_287()//Position - 0x8E9F
{
	Global_1663588.f_40.f_9 = 4;
}

int func_288(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8EB0
{
	bool bVar0;
	
	func_287();
	bVar0 = false;
	return func_253(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8ED7
{
	bool bVar0;
	
	bVar0 = false;
	return func_290(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_290(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x8EFA
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_65();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_281(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23347 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_280(sParam5, bParam6, &iVar3);
	uVar5 = func_278(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_300(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_292(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_256();
	}
	func_291();
	func_255();
	func_254();
	return 1;
}

void func_291()//Position - 0x9048
{
	Global_1663588.f_40.f_9 = 3;
}

int func_292(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x9059
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_294(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_293(iParam0) };
			Global_9487 = iParam0;
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_293(int iParam0)//Position - 0x90E8
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_294(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x90FB
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_270();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_299() == 0)
	{
		func_297();
		return 0;
	}
	func_296(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_265(0);
		func_265(2);
		func_265(1);
	}
	else
	{
		func_270();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_265(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_265(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_265(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_265(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_270();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_264())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_218(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_213(1);
			func_218(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_295(iParam0, sParam1, bVar1, func_263(PLAYER::PLAYER_ID()));
	return 1;
}

void func_295(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x95D4
{
	struct<14> Var0;
	
	if (!func_260())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

void func_296(int iParam0)//Position - 0x966F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_297()//Position - 0x9701
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_298(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_298(struct<6> Param0, struct<6> Param6)//Position - 0x97CC
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_299()//Position - 0x98B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_298(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

int func_300(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x9A1F
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 3;
	if (func_294(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_293(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_301(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x9ACB
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_291();
	bVar0 = true;
	if (func_290(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_252(120000);
		return 1;
	}
	return 0;
}

int func_302(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x9B1D
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_318(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_308(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_307(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_306(1);
		}
		func_305();
		func_255();
		func_304();
		func_303();
		return 1;
	}
	return 0;
}

void func_303()//Position - 0x9BB4
{
	Global_2749372 = 0;
}

void func_304()//Position - 0x9BC1
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_305()//Position - 0x9BD9
{
	Global_1663588.f_40.f_9 = 1;
}

void func_306(int iParam0)//Position - 0x9BEA
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8802, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8802, 0);
	}
}

void func_307(int iParam0)//Position - 0x9C0B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 20);
	}
}

int func_308(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9C2E
{
	func_317(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam7);
}

int func_309(char* sParam0, int iParam1, bool bParam2)//Position - 0x9C7C
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
					func_316();
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
		if (func_351(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_315();
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
				func_270();
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
				if (func_314())
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
			if (func_313())
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
			func_312();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_311();
		func_310();
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
		func_316();
	}
	return 0;
}

void func_310()//Position - 0x9F4A
{
	if (!func_260())
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

void func_311()//Position - 0x9F81
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

void func_312()//Position - 0x9FB2
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

int func_313()//Position - 0xA047
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_314()//Position - 0xA06E
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

void func_315()//Position - 0xA107
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

void func_316()//Position - 0xA15E
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

void func_317(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA1B5
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
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

int func_318(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xA20B
{
	func_317(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam7);
}

int func_319(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0xA259
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_321(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_320();
		func_305();
		func_255();
		func_304();
		func_303();
		return 1;
	}
	return 0;
}

void func_320()//Position - 0xA2AB
{
	Global_23304 = 0;
}

bool func_321(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0xA2B7
{
	func_317(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	StringCopy(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_309(sParam3, iParam4, bParam8);
}

int func_322(var uParam0, char* sParam1, char* sParam2)//Position - 0xA30C
{
	if (func_324(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_323();
		func_255();
		func_304();
		return 1;
	}
	return 0;
}

void func_323()//Position - 0xA337
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_324(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA348
{
	func_317(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_309(sParam2, iParam3, 0);
}

void func_325()//Position - 0xA396
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_326()//Position - 0xA3BC
{
	Global_1663588.f_40 = 1;
}

bool func_327()//Position - 0xA3CB
{
	return Global_1663588.f_40 == 1;
}

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0xA3DB
{
	if (!func_329(iParam0))
	{
		return 0;
	}
	if (Global_1663588.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663588.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_329(int iParam0)//Position - 0xA41A
{
	if (!func_330())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_330()//Position - 0xA442
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_331(var uParam0)//Position - 0xA459
{
	if (func_335())
	{
		return 0;
	}
	if (func_237())
	{
		return 0;
	}
	if (func_334(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_333())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_332())
		{
			return 0;
		}
	}
	return 1;
}

bool func_332()//Position - 0xA4BA
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1680101);
}

int func_333()//Position - 0xA4CE
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0)//Position - 0xA4E6
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

bool func_335()//Position - 0xA53D
{
	return func_313();
}

int func_336(int iParam0, int iParam1, int iParam2)//Position - 0xA549
{
	if (!func_237())
	{
		return 0;
	}
	return func_328(iParam0, iParam1, iParam2);
}

int func_337(char* sParam0, char* sParam1)//Position - 0xA567
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_338()//Position - 0xA581
{
	return Global_2746025.f_1;
}

int func_339()//Position - 0xA58F
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_340();
}

bool func_340()//Position - 0xA5A8
{
	return func_335();
}

void func_341(int iParam0)//Position - 0xA5B4
{
	if (!BitTest(uLocal_229, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_414 = "FMA_KIL1";
				MISC::SET_BIT(&uLocal_229, 11);
				break;
			}
	}
}

int func_342(int iParam0)//Position - 0xA5E4
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_343(int iParam0)//Position - 0xA606
{
	switch (iParam0)
	{
		case 0:
			func_345(12, 3, 0);
			func_344(&uLocal_249, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_344(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA634
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

void func_345(int iParam0, int iParam1, bool bParam2)//Position - 0xA6CF
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_270();
		if (iParam1 == 4)
		{
			func_350(iParam0, 0, 1);
			func_350(iParam0, 1, 1);
			func_350(iParam0, 2, 1);
			func_349(iParam0, 0, 1);
			func_349(iParam0, 1, 1);
			func_349(iParam0, 2, 1);
		}
		else
		{
			if (func_348(iParam0, iParam1) == 1 && func_347(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_350(iParam0, iVar0, 1);
			func_349(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_293(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_293(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_346();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_293(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_346();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_293(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_346();
			}
		}
	}
}

void func_346()//Position - 0xA84D
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, 0);
}

int func_347(int iParam0, int iParam1)//Position - 0xA8C8
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_348(int iParam0, int iParam1)//Position - 0xA8F2
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_349(int iParam0, int iParam1, int iParam2)//Position - 0xA91C
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_350(int iParam0, int iParam1, int iParam2)//Position - 0xA961
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

bool func_351(int iParam0, int iParam1)//Position - 0xA9A6
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

int func_352(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xA9DE
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_358())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_52(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_51(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_356())
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
	if (Global_1836444)
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (func_354())
	{
		return 0;
	}
	if (func_365())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (Global_2749856)
	{
		return 0;
	}
	if (func_353())
	{
		return 0;
	}
	return 1;
}

bool func_353()//Position - 0xAAD7
{
	return Global_2708056;
}

bool func_354()//Position - 0xAAE3
{
	return Global_2684504.f_693;
}

bool func_355()//Position - 0xAAF2
{
	return Global_2684504.f_848;
}

bool func_356()//Position - 0xAB01
{
	return Global_2672855.f_2881.f_582;
}

bool func_357()//Position - 0xAB13
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

int func_358()//Position - 0xAB28
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_359()//Position - 0xAB4A
{
	var uVar0;
	
	uVar0 = func_167(1304, -1);
	if (BitTest(uVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_360(int iParam0)//Position - 0xAB69
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
			{
				Global_2672855.f_3604.f_1[0] = NETWORK::NET_TO_VEH(Local_90.f_12[0]);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				Global_2672855.f_3604.f_4[0] = NETWORK::NET_TO_PED(Local_90.f_9[0]);
			}
			break;
	}
}

int func_361(int iParam0)//Position - 0xABCB
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_362(bool bParam0, bool bParam1)//Position - 0xAC06
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
		{
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
	}
}

int func_363(int iParam0)//Position - 0xAC63
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_364())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_364()//Position - 0xACA2
{
	return BitTest(Global_2621446, 3);
}

bool func_365()//Position - 0xACB0
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

int func_366()//Position - 0xACC7
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_194;
}

bool func_367()//Position - 0xACDC
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

void func_368(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0xACF5
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_369(int iParam0)//Position - 0xAD24
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_393(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_370()//Position - 0xAD81
{
	if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
	{
		if (BitTest(Local_90.f_0, 4))
		{
			if (!BitTest(uLocal_229, 3))
			{
				if (func_393(Local_90.f_8, 0, 1))
				{
					func_371("FM_TGDM_KIL" /* GXT: ~a~ ~s~killed the target. */, Local_90.f_8, 0, 0, 0, 1, 0);
				}
				MISC::SET_BIT(&uLocal_229, 3);
			}
		}
	}
}

int func_371(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xADDE
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (func_20(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
			}
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
			if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
			{
				if (Global_4718592.f_121471[iVar1] != -1)
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_132(iVar1, iParam1, 0));
				}
				else
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_93(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_93(iParam1, -2, 1, 0, 0));
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_91(&Var2));
			if (!bParam4)
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2707307 = { func_158(iParam1) };
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307))
				{
					bVar18 = false;
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2707237.f_22), "Leader") && Global_2707237.f_30 == 0)
					{
						bVar18 = true;
					}
					if (Global_2707237.f_21 > 0)
					{
						bVar19 = false;
					}
					else
					{
						bVar19 = true;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_372(&Var2) };
						}
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, bVar18, false, Global_2707237, &Var2, Global_1576240, Global_1576241, Global_1576242);
					}
					else
					{
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, bVar18, false, Global_2707237, Global_1576240, Global_1576241, Global_1576242);
					}
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
			func_87(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

struct<16> func_372(char* sParam0)//Position - 0xAFAA
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_373()//Position - 0xAFD4
{
	int iVar0;
	
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iLocal_239 != Local_90.f_15)
	{
		iLocal_239 = Local_90.f_15;
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_239);
	}
	if (iLocal_240 != Local_90.f_16)
	{
		iLocal_240 = Local_90.f_16;
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_240);
	}
	if (func_393(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (!BitTest(Local_130[iVar0 /*3*/], 0))
		{
			if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
			{
				if (func_366() == 0)
				{
					MISC::SET_BIT(&(Local_130[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (BitTest(Local_130[iVar0 /*3*/], 0))
		{
			if ((func_52(PLAYER::PLAYER_ID(), 1, 0) || func_49(PLAYER::PLAYER_ID())) || func_366() > 0)
			{
				func_43(&uLocal_230);
				MISC::CLEAR_BIT(&(Local_130[iVar0 /*3*/]), 0);
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!BitTest(uLocal_229, 7))
					{
						MISC::SET_BIT(&uLocal_229, 7);
						func_381();
					}
				}
				else if (BitTest(uLocal_229, 7))
				{
					MISC::CLEAR_BIT(&uLocal_229, 7);
					if (!func_50(PLAYER::PLAYER_ID(), 0))
					{
						func_379();
					}
				}
			}
		}
		if (!BitTest(Local_130[iVar0 /*3*/], 3))
		{
			if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3 && Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
			{
				if (BitTest(Global_2672855.f_3604, 1))
				{
					MISC::SET_BIT(&(Local_130[iVar0 /*3*/]), 3);
				}
			}
		}
		if (Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3)
		{
			if (!BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 5))
			{
				if (func_378(Local_90.f_5))
				{
					MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
				}
			}
			else if (!func_378(Local_90.f_5))
			{
				MISC::CLEAR_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
			}
			if (!BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 6))
			{
				if (func_375(Local_90.f_5))
				{
					MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 6);
				}
			}
			if (!BitTest(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 8))
			{
				if (func_374())
				{
					MISC::SET_BIT(&(Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 8);
				}
			}
		}
		if (!BitTest(uLocal_229, 13))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_9[0]), true, 0f);
					MISC::SET_BIT(&uLocal_229, 13);
				}
			}
		}
	}
}

int func_374()//Position - 0xB1F8
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
	{
		if (func_9(Local_90.f_12[0]))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_90.f_12[0]), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_90.f_12[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0)//Position - 0xB258
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_376(NETWORK::NET_TO_PED(Local_90.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_376(int iParam0)//Position - 0xB2B0
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_377())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_377()//Position - 0xB322
{
	return Global_1836674;
}

int func_378(int iParam0)//Position - 0xB32E
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_90.f_9[0]), true)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_379()//Position - 0xB39A
{
	if (!Global_1574755)
	{
		return;
	}
	func_380();
}

void func_380()//Position - 0xB3B1
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_381()//Position - 0xB3D0
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
}

void func_382()//Position - 0xB3F9
{
	switch (Local_90.f_6)
	{
		case 1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
				{
					if (func_9(Local_90.f_12[0]))
					{
						if (!func_41(Local_90.f_9[0]))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0]), NETWORK::NET_TO_VEH(Local_90.f_12[0])))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_90.f_9[0]), NETWORK::NET_TO_VEH(Local_90.f_12[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_12[0]))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
					{
						if (func_9(Local_90.f_12[0]))
						{
							if (!func_41(Local_90.f_9[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0]), NETWORK::NET_TO_VEH(Local_90.f_12[0])))
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0) || BitTest(Local_90.f_0, 9))
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_90.f_9[0]), NETWORK::NET_TO_VEH(Local_90.f_12[0]), 30f, 786469);
										if (BitTest(Local_90.f_0, 9))
										{
											MISC::CLEAR_BIT(&Local_90, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
					{
						if (func_386(Local_90.f_9[0]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_9[0]))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_90.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
			{
				if (!func_41(Local_90.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_90.f_9[0]), joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 0)
						{
							if (func_386(Local_90.f_9[0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_9[0]))
								{
									TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_90.f_9[0]), PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_9[0]))
	{
		if ((Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6) && !func_201(PLAYER::PLAYER_ID(), 0, -1))
		{
			func_383(Local_90.f_9[0], &Local_241, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
		}
		else
		{
			func_63(&Local_241);
		}
	}
}

void func_383(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0xB717
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_385(0))
		{
			Global_2672855 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_384(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2672855, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_384(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2672855, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_63(iParam1);
	}
}

int func_384(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)//Position - 0xB79B
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_385(bool bParam0)//Position - 0xB98F
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_386(int iParam0)//Position - 0xB9A0
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_387(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_387(int iParam0)//Position - 0xB9C3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0)//Position - 0xB9F3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_389()//Position - 0xBA15
{
	return Local_90.f_1;
}

int func_390(int iParam0)//Position - 0xBA21
{
	return Local_130[iParam0 /*3*/].f_1;
}

void func_391()//Position - 0xBA31
{
	func_56();
	func_362(11, 0);
	func_207(12, 116);
	MISC::CLEAR_BIT(&(Global_2672855.f_3604), 0);
	MISC::CLEAR_BIT(&(Global_2672855.f_3604), 1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
		{
			Local_130[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_90.f_3))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_90.f_3);
			}
			Local_90.f_3 = -1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Global_1928409))
	{
		HUD::REMOVE_BLIP(&Global_1928409);
	}
	MISC::CLEAR_BIT(&uLocal_229, 3);
	MISC::CLEAR_BIT(&uLocal_229, 4);
	iLocal_228 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_241.f_0))
	{
		HUD::REMOVE_BLIP(&Local_241);
	}
	func_392();
}

void func_392()//Position - 0xBAD9
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_393(int iParam0, bool bParam1, bool bParam2)//Position - 0xBAE5
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

int func_394()//Position - 0xBB45
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_401())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_399(159))
	{
		if (!func_398())
		{
			return 1;
		}
	}
	if (func_399(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_395() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_395()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_395()//Position - 0xBBC9
{
	switch (func_397())
	{
		case 0:
			return func_396();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_396()//Position - 0xBBFC
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_397()//Position - 0xBC20
{
	return Global_32948;
}

bool func_398()//Position - 0xBC2B
{
	return Global_2684504.f_700;
}

int func_399(int iParam0)//Position - 0xBC3A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_400()//Position - 0xBC51
{
	return Global_2696172;
}

bool func_401()//Position - 0xBC5D
{
	return Global_2684504.f_695;
}

void func_402()//Position - 0xBC6C
{
	SYSTEM::WAIT(0);
}

void func_403(struct<21> Param0)//Position - 0xBC79
{
	func_406(func_407(Param0.f_0), Param0);
	func_405(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_90, 23, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_130, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_404())
	{
		func_391();
	}
	MISC::SET_BIT(&(Global_2672855.f_3604), 0);
	MISC::CLEAR_BIT(&(Global_2672855.f_3604), 1);
}

int func_404()//Position - 0xBCD3
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
		if (func_401())
		{
			return 0;
		}
		if (func_399(157))
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

int func_405(int iParam0, int iParam1, bool bParam2)//Position - 0xBD2C
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_392();
			}
			else
			{
				return 0;
			}
		}
		if (!func_385(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_401())
				{
					if (!bParam2)
					{
						func_392();
					}
					else
					{
						return 0;
					}
				}
				if (func_399(157))
				{
					if (!bParam2)
					{
						func_392();
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
					func_392();
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
				func_392();
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
			func_392();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_406(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0xBE42
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_392();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_407(int iParam0)//Position - 0xBE61
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
		
		case 197:
			return 32;
		
		case 198:
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
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
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
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_408(func_409(iParam0, 1)))
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

int func_408(int iParam0)//Position - 0xC78E
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
		
		default:
	}
	return -1;
}

int func_409(int iParam0, bool bParam1)//Position - 0xCA46
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

