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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	int iLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	struct<3> Local_39[70];
	float fLocal_250 = 0f;
	struct<3> Local_251 = { 0, 0, 0 } ;
	struct<3> Local_254 = { 0, 0, 0 } ;
	struct<3> Local_257 = { 0, 0, 0 } ;
	struct<3> Local_260 = { 0, 0, 0 } ;
	float fLocal_263 = 0f;
	struct<3> Local_264 = { 0, 0, 0 } ;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_250 = 40000f;
	Local_264 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if ((func_53(13) || func_53(14)) || func_52(0))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_30();
	func_29();
	func_26();
	func_25();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_24();
		func_17();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				func_16();
				switch (iLocal_27)
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_39[bLocal_31 /*3*/]) < fLocal_250)
							{
								if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
								{
									if ((((((((((((((bLocal_31 == 33 || bLocal_31 == 34) || bLocal_31 == 35) || bLocal_31 == 36) || bLocal_31 == 50) || bLocal_31 == 51) || bLocal_31 == 52) || bLocal_31 == 53) || bLocal_31 == 54) || bLocal_31 == 55) || bLocal_31 == 56) || bLocal_31 == 57) || bLocal_31 == 58) || bLocal_31 == 59) || bLocal_31 == 60)
									{
										bLocal_38 = true;
									}
									else
									{
										bLocal_38 = false;
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										if (func_15())
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0))
											{
												bLocal_33 = true;
												iLocal_27 = 1;
											}
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
											{
												bLocal_34 = true;
												iLocal_27 = 1;
											}
										}
									}
								}
							}
						}
						SYSTEM::SETTIMERA(0);
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
							{
								func_14();
							}
							else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								func_14();
							}
							else if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								func_14();
							}
							if (bLocal_33)
							{
								if (iLocal_37)
								{
									if (iLocal_36)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
										{
											func_14();
											func_1();
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
										}
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
									{
										iLocal_36 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
									{
										func_14();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
								{
									func_14();
								}
							}
							else if (bLocal_34)
							{
								if (iLocal_37)
								{
									if (iLocal_35)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
										{
											func_14();
											func_1();
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
										}
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
									{
										iLocal_35 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
									{
										func_14();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_251, Local_254, fLocal_263, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_257, Local_260, fLocal_263, false, true, 0))
								{
									func_14();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_28 == 0)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1()//Position - 0x53A
{
	bool bVar0;
	
	if (bLocal_31 < 32)
	{
		bVar0 = BitTest(Global_113648.f_10051.f_96, bLocal_31);
	}
	else if (bLocal_31 < 64)
	{
		bVar0 = BitTest(Global_113648.f_10051.f_97, (bLocal_31 - 32));
	}
	else
	{
		bVar0 = BitTest(Global_113648.f_10051.f_98, (bLocal_31 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_267)
		{
			if (bLocal_38)
			{
				STATS::STAT_INCREMENT(joaat("SP_KNIFE_FLIGHTS_COUNT"), 1f);
			}
			else
			{
				STATS::STAT_INCREMENT(joaat("SP_UNDER_THE_BRIDGE_COUNT"), 1f);
			}
			func_3(func_8(), 5, 3);
			func_2();
		}
		if (bLocal_31 < 32)
		{
			MISC::SET_BIT(&(Global_113648.f_10051.f_96), bLocal_31);
		}
		else if (bLocal_31 < 64)
		{
			MISC::SET_BIT(&(Global_113648.f_10051.f_97), (bLocal_31 - 32));
		}
		else
		{
			MISC::SET_BIT(&(Global_113648.f_10051.f_98), (bLocal_31 - 64));
		}
		Global_97126 = 1;
		func_30();
		iLocal_29 = 1;
	}
}

int func_2()//Position - 0x614
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_100720.f_8)
	{
		if (Global_100720.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100720.f_10 > 1)
	{
		return 0;
	}
	Global_100720.f_10++;
	return 1;
}

void func_3(int iParam0, int iParam1, int iParam2)//Position - 0x65F
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14192;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14192)
			{
				iVar0 = func_7(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x74F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805029[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_5(var uParam0)//Position - 0x77F
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
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

int func_6()//Position - 0x7B3
{
	return Global_1574918;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x7BF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805029[iParam0 /*3*/][func_5(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_8()//Position - 0x7FC
{
	func_9();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_9()//Position - 0x815
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_53(14) || Global_112599))
			{
				if (Global_113648.f_2365.f_539.f_4321 != iVar0 && func_10(Global_113648.f_2365.f_539.f_4321))
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

bool func_10(int iParam0)//Position - 0x912
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x91E
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x95B
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)//Position - 0x980
{
	return Global_2028[iParam0 /*29*/];
}

void func_14()//Position - 0x98F
{
	bLocal_33 = false;
	bLocal_34 = false;
	iLocal_35 = 0;
	iLocal_36 = 0;
	iLocal_37 = 0;
	iLocal_27 = 0;
}

int func_15()//Position - 0x9A9
{
	if (bLocal_38)
	{
		if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > -0.6f && ENTITY::GET_ENTITY_UPRIGHT_VALUE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 0.6f)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_16()//Position - 0x9FB
{
	if ((MISC::GET_GAME_TIMER() - iLocal_268) > 500)
	{
		if (bLocal_31 == 29)
		{
			if (BitTest(Global_113648.f_10051.f_96, bLocal_31))
			{
				bLocal_267 = true;
			}
		}
		iLocal_268 = MISC::GET_GAME_TIMER();
	}
}

void func_17()//Position - 0xA32
{
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_29 && !bLocal_267)
			{
				if (!func_23())
				{
					iLocal_30 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_30))
					{
						SYSTEM::WAIT(0);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_30, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (bLocal_38)
					{
						func_22("FU_KNIFE" /* GXT: Knife Flight~s~ */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
					}
					else
					{
						func_22("FU_TITLE" /* GXT: Under the Bridge~s~ */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
					}
					func_22("FU_PASS" /* GXT: Success! */);
					if (bLocal_38)
					{
						func_22("FU_CHALL_KN" /* GXT: Flights completed */);
					}
					else
					{
						func_22("FU_CHALLENGE" /* GXT: Bridges flown under */);
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_30());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_32 = func_30();
					Global_32399 = iLocal_32;
					SYSTEM::SETTIMERB(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
				iLocal_28 = 1;
			}
			break;
		
		case 1:
			if ((((((SYSTEM::TIMERB() > 3750 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_23()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_21()) || func_20())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_30, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 2;
			}
			else
			{
				func_19();
				if (Global_32399 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((SYSTEM::TIMERB() > 500 || CAM::IS_SCREEN_FADED_OUT()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_23()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_21()) || func_20())
			{
				iLocal_28 = 3;
			}
			else
			{
				func_19();
				if (Global_32399 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 3:
			func_18();
			iLocal_29 = 0;
			func_26();
			bLocal_267 = true;
			iLocal_28 = 0;
			break;
	}
}

void func_18()//Position - 0xC08
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_30))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_30);
	}
}

void func_19()//Position - 0xC1F
{
	if (!func_23())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_30))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_30, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_20()//Position - 0xC51
{
	if (Global_43257 == 9 || Global_43257 == 10)
	{
		return Global_112298;
	}
	Global_112298 = 0;
	return 0;
}

int func_21()//Position - 0xC7E
{
	if (((Global_100681 == 13 || Global_100681 == 10) || Global_100681 == 11) || Global_100681 == 12)
	{
		return 0;
	}
	return 1;
}

void func_22(char* sParam0)//Position - 0xCBC
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_23()//Position - 0xCCE
{
	if (Global_78819)
	{
		return 1;
	}
	else if (Global_63356 && !Global_63362)
	{
		return 1;
	}
	return 0;
}

void func_24()//Position - 0xCF8
{
}

void func_25()//Position - 0xD00
{
}

void func_26()//Position - 0xD08
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_28(Local_264, Local_39[iVar0 /*3*/], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_250 = 490000f;
				bLocal_31 = 29;
			}
			else
			{
				bLocal_31 = iVar0;
			}
		}
		iVar0++;
	}
	if (bLocal_31 < 32)
	{
		if (BitTest(Global_113648.f_10051.f_96, bLocal_31))
		{
			bLocal_267 = true;
		}
	}
	else if (bLocal_31 < 64)
	{
		if (BitTest(Global_113648.f_10051.f_97, (bLocal_31 - 32)))
		{
			bLocal_267 = true;
		}
	}
	else if (BitTest(Global_113648.f_10051.f_98, (bLocal_31 - 64)))
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
	}
	else
	{
		func_27(bLocal_31);
	}
}

void func_27(bool bParam0)//Position - 0xDC4
{
	switch (bParam0)
	{
		case 0:
			Local_251 = { 1103.0139f, -233.03737f, 56.13004f };
			Local_254 = { 1073.1909f, -214.8478f, 66.059296f };
			fLocal_263 = 30f;
			Local_257 = { 1093.5886f, -248.5926f, 56.88639f };
			Local_260 = { 1063.7744f, -230.14253f, 66.67847f };
			break;
		
		case 1:
			Local_251 = { 1044.1819f, -324.59036f, 49.334076f };
			Local_254 = { 1016.7097f, -307.73825f, 64.81343f };
			fLocal_263 = 30f;
			Local_257 = { 1007.98315f, -320.61588f, 48.454296f };
			Local_260 = { 1036.0067f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_251 = { 916.599f, -419.8782f, 35.62748f };
			Local_254 = { 910.37933f, -383.88257f, 47.54339f };
			fLocal_263 = 7f;
			Local_257 = { 912.13617f, -420.51614f, 35.380337f };
			Local_260 = { 906.8952f, -384.6779f, 47.249256f };
			break;
		
		case 3:
			Local_251 = { 757.7189f, -472.92395f, 19.253498f };
			Local_254 = { 696.5936f, -420.21146f, 35.460842f };
			fLocal_263 = 20.75f;
			Local_257 = { 744.91144f, -480.73734f, 19.065138f };
			Local_260 = { 682.5614f, -429.55334f, 37.0266f };
			break;
		
		case 4:
			Local_251 = { 680.3677f, -581.1792f, 14.214504f };
			Local_254 = { 599.81006f, -528.3059f, 33.40958f };
			fLocal_263 = 45f;
			Local_257 = { 667.3692f, -610.53564f, 13.854013f };
			Local_260 = { 582.84326f, -556.7818f, 33.403355f };
			break;
		
		case 5:
			Local_251 = { 644.2497f, -844.7504f, 12.367073f };
			Local_254 = { 526.86084f, -845.2521f, 35.9896f };
			fLocal_263 = 25f;
			Local_257 = { 644.3659f, -859.38776f, 12.596766f };
			Local_260 = { 526.8615f, -857.52075f, 36.32857f };
			break;
		
		case 6:
			Local_251 = { 634.972f, -1011.6402f, 10.925943f };
			Local_254 = { 539.6501f, -1024.0171f, 35.958515f };
			fLocal_263 = 25f;
			Local_257 = { 634.96124f, -1029.123f, 10.618461f };
			Local_260 = { 543.4893f, -1038.2615f, 35.9593f };
			break;
		
		case 7:
			Local_251 = { 645.7223f, -1191.2153f, 10.451977f };
			Local_254 = { 524.30176f, -1197.1669f, 39.611725f };
			fLocal_263 = 50f;
			Local_257 = { 645.7223f, -1228.9664f, 10.98015f };
			Local_260 = { 521.93787f, -1217.6073f, 39.47172f };
			break;
		
		case 8:
			Local_251 = { 642.12164f, -1295.7301f, 9.005976f };
			Local_254 = { 568.17017f, -1375.3508f, 20.129887f };
			fLocal_263 = 7f;
			Local_257 = { 644.7772f, -1298.1683f, 9.128529f };
			Local_260 = { 571.63416f, -1378.6444f, 20.358023f };
			break;
		
		case 9:
			Local_251 = { 686.5675f, -1444.7098f, 9.065001f };
			Local_254 = { 598.9328f, -1444.438f, 25.688457f };
			fLocal_263 = 25f;
			Local_257 = { 682.3027f, -1429.872f, 9.890836f };
			Local_260 = { 593.82166f, -1432.9955f, 25.600723f };
			break;
		
		case 10:
			Local_251 = { 718.76166f, -1734.3129f, 9.082874f };
			Local_254 = { 615.0017f, -1725.8973f, 27.54585f };
			fLocal_263 = 30f;
			Local_257 = { 717.53546f, -1748.6456f, 9.363478f };
			Local_260 = { 614.21796f, -1734.8475f, 27.357079f };
			break;
		
		case 11:
			Local_251 = { 694.31647f, -2049.8057f, 0.009695f };
			Local_254 = { 618.6845f, -2040.0137f, 25.834118f };
			fLocal_263 = 30f;
			Local_257 = { 693.1836f, -2063.225f, 0.429037f };
			Local_260 = { 607.59436f, -2055.3264f, 26.918158f };
			break;
		
		case 12:
			Local_251 = { 642.66705f, -2494.5513f, 0.468485f };
			Local_254 = { 570.18066f, -2513.9587f, 11.787938f };
			fLocal_263 = 20f;
			Local_257 = { 647.0339f, -2506.2021f, 0.583701f };
			Local_260 = { 571.14154f, -2522.9753f, 10.450453f };
			break;
		
		case 13:
			Local_251 = { 691.82355f, -2558.2185f, 0.363352f };
			Local_254 = { 645.8863f, -2600.3113f, 9.898791f };
			fLocal_263 = 10.25f;
			Local_257 = { 695.79285f, -2561.0337f, 0.346731f };
			Local_260 = { 656.3919f, -2601.9717f, 9.643657f };
			break;
		
		case 14:
			Local_251 = { 723.6254f, -2562.1707f, 0.255647f };
			Local_254 = { 720.75195f, -2619.7695f, 15.732105f };
			fLocal_263 = 20f;
			Local_257 = { 735.76495f, -2561.935f, 0.311182f };
			Local_260 = { 736.1214f, -2618.7666f, 15.790609f };
			break;
		
		case 15:
			Local_251 = { 891.43866f, -2603.12f, 0f };
			Local_254 = { 704.49316f, -2634.7932f, 45f };
			fLocal_263 = 20f;
			Local_257 = { 893.2578f, -2616.235f, 0f };
			Local_260 = { 707.72614f, -2647.6956f, 45f };
			break;
		
		case 16:
			Local_251 = { -2669.587f, 2491.96f, 2.043799f };
			Local_254 = { -2617.7646f, 2841.5947f, 14.082197f };
			fLocal_263 = 26.5f;
			Local_257 = { -2687.6057f, 2494.8682f, 2.608733f };
			Local_260 = { -2637.0847f, 2846.8752f, 14.159884f };
			break;
		
		case 17:
			Local_251 = { -1986.1726f, 4521.799f, 0f };
			Local_254 = { -1809.9026f, 4699.5513f, 53.508797f };
			fLocal_263 = 17f;
			Local_257 = { -1995.6681f, 4531.2593f, 0f };
			Local_260 = { -1817.5435f, 4708.3945f, 53.50917f };
			break;
		
		case 18:
			Local_251 = { -526.0265f, 4472.4424f, 0f };
			Local_254 = { -505.57144f, 4335.7246f, 86.73311f };
			fLocal_263 = 10f;
			Local_257 = { -519.9281f, 4476.3457f, 0f };
			Local_260 = { -500.73132f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_251 = { 98.1615f, 3384.489f, 45.45169f };
			Local_254 = { 154.97403f, 3350.694f, 30.033585f };
			fLocal_263 = 8f;
			Local_257 = { 152.68018f, 3346.7935f, 45.021557f };
			Local_260 = { 95.57188f, 3380.0906f, 30.432842f };
			break;
		
		case 20:
			Local_251 = { 147.86061f, 3406.7961f, 38.036716f };
			Local_254 = { 126.132935f, 3416.9268f, 30.029865f };
			fLocal_263 = 14.5f;
			Local_257 = { 130.09163f, 3425.4172f, 38.056725f };
			Local_260 = { 151.87035f, 3415.3914f, 30.057804f };
			break;
		
		case 21:
			Local_251 = { 2830.9722f, 4967.1396f, 34.560127f };
			Local_254 = { 2818.7188f, 4992.2983f, 51.2909f };
			fLocal_263 = 10f;
			Local_257 = { 2826.7668f, 4964.185f, 34.10636f };
			Local_260 = { 2814.2163f, 4989.9834f, 51.21849f };
			break;
		
		case 22:
			Local_251 = { -151.57642f, 4264.417f, 31.047348f };
			Local_254 = { -193.19623f, 4224.604f, 43.87255f };
			fLocal_263 = 10f;
			Local_257 = { -148.38419f, 4261.0713f, 31.57409f };
			Local_260 = { -190.47188f, 4222.076f, 43.954426f };
			break;
		
		case 23:
			Local_251 = { -426.69186f, 2964.272f, 14.848002f };
			Local_254 = { -396.2298f, 2959.2776f, 23.506374f };
			fLocal_263 = 7f;
			Local_257 = { -425.0283f, 2967.8613f, 15.226991f };
			Local_260 = { -395.60727f, 2962.6067f, 24.38079f };
			break;
		
		case 24:
			Local_251 = { -192.34137f, 2864.9163f, 30.72595f };
			Local_254 = { -170.15094f, 2857.1282f, 43.941822f };
			fLocal_263 = 10f;
			Local_257 = { -192.01286f, 2871.6025f, 29.999426f };
			Local_260 = { -169.59575f, 2863.8384f, 44.032505f };
			break;
		
		case 25:
			Local_251 = { 2539.185f, 2228.7717f, 18.610205f };
			Local_254 = { 2574.3733f, 2169.4014f, 27.265978f };
			fLocal_263 = 10f;
			Local_257 = { 2543.7075f, 2231.4016f, 18.331003f };
			Local_260 = { 2578.0789f, 2171.5837f, 27.26057f };
			break;
		
		case 26:
			Local_251 = { 2954.0867f, 815.7209f, 0.037901f };
			Local_254 = { 2933.1892f, 796.4688f, 12.983917f };
			fLocal_263 = 35f;
			Local_257 = { 2966.1226f, 806.88885f, 0.544056f };
			Local_260 = { 2950.8013f, 786.78156f, 11.745959f };
			break;
		
		case 27:
			Local_251 = { 2329.6726f, -459.66476f, 70.24277f };
			Local_254 = { 2413.3838f, -361.21884f, 91.77886f };
			fLocal_263 = 12f;
			Local_257 = { 2324.752f, -455.52377f, 70.25145f };
			Local_260 = { 2407.4094f, -356.20032f, 91.43083f };
			break;
		
		case 28:
			Local_251 = { 1943.4285f, -753.251f, 80.17905f };
			Local_254 = { 1850.3645f, -760.95874f, 93.025215f };
			fLocal_263 = 7f;
			Local_257 = { 1943.366f, -758.28705f, 80.322914f };
			Local_260 = { 1851.3535f, -765.18066f, 92.935455f };
			break;
		
		case 29:
			Local_251 = { -655.1467f, -2138.0935f, -0.339008f };
			Local_254 = { -146.0279f, -2493.7244f, 54.67567f };
			fLocal_263 = 47.75f;
			Local_257 = { -672.2213f, -2162.6746f, -0.082912f };
			Local_260 = { -163.55562f, -2519.058f, 54.72249f };
			break;
		
		case 30:
			Local_251 = { -1483.0004f, 2691.4277f, -10f };
			Local_254 = { -1377.1682f, 2600.7688f, 15.955276f };
			fLocal_263 = 12f;
			Local_257 = { -1478.1521f, 2696.688f, -10f };
			Local_260 = { -1378.5032f, 2608.6978f, 15.609236f };
			break;
		
		case 31:
			Local_251 = { 222.15187f, -2343.4866f, 0.039199f };
			Local_254 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_263 = 12f;
			Local_257 = { 216.95901f, -2343.4866f, 0.207734f };
			Local_260 = { 216.60204f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_251 = { 346.46216f, -2244.374f, 0.159779f };
			Local_254 = { 346.83472f, -2389.5906f, 7.852059f };
			fLocal_263 = 20f;
			Local_257 = { 359.60904f, -2244.4678f, 0.129684f };
			Local_260 = { 355.40543f, -2390.2583f, 7.080691f };
			break;
		
		case 33:
			Local_251 = { -1859.6799f, -322.63574f, 56.16368f };
			Local_254 = { -1836.6136f, -335.41412f, 96.116104f };
			fLocal_263 = 7.5f;
			Local_257 = { -1860.2698f, -327.86343f, 57.543f };
			Local_260 = { -1837.2709f, -339.22272f, 95.69325f };
			break;
		
		case 34:
			Local_251 = { -680.26324f, -600.818f, 69.11289f };
			Local_254 = { -706.66125f, -600.7515f, 30.476036f };
			fLocal_263 = 31.5f;
			Local_257 = { -680.6077f, -618.36584f, 69.27496f };
			Local_260 = { -706.3596f, -618.23846f, 30.312347f };
			break;
		
		case 35:
			Local_251 = { -1468.0961f, -591.71576f, 67.055176f };
			Local_254 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_263 = 11.75f;
			Local_257 = { -1474.903f, -591.12146f, 67.08091f };
			Local_260 = { -1457.1731f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_251 = { -1544.9578f, -537.1475f, 72.443474f };
			Local_254 = { -1564.6162f, -551.1829f, 32.861633f };
			fLocal_263 = 11.75f;
			Local_257 = { -1541.0079f, -541.5494f, 71.61972f };
			Local_260 = { -1561.2189f, -555.86804f, 32.927902f };
			break;
		
		case 37:
			Local_251 = { 333.2108f, -2727.2737f, 20.716625f };
			Local_254 = { 333.4297f, -2791.609f, 41.990227f };
			fLocal_263 = 20f;
			Local_257 = { 343.11273f, -2727.2358f, 20.236126f };
			Local_260 = { 343.66782f, -2791.6023f, 41.379284f };
			break;
		
		case 38:
			Local_251 = { 1928.0713f, 6228.3555f, 43.493977f };
			Local_254 = { 2039.8823f, 6167.3975f, 55.46405f };
			fLocal_263 = 13f;
			Local_257 = { 1931.8202f, 6235.634f, 43.373817f };
			Local_260 = { 2039.5975f, 6176.5254f, 55.25597f };
			break;
		
		case 39:
			Local_251 = { -736.4309f, -1590.9208f, 10.808919f };
			Local_254 = { -710.81104f, -1516.3495f, -0.098598f };
			fLocal_263 = 15f;
			Local_257 = { -727.2307f, -1585.2212f, 11.78027f };
			Local_260 = { -700.02014f, -1511.7826f, -0.341655f };
			break;
		
		case 40:
			Local_251 = { -686.3775f, -1548.5526f, 12.337475f };
			Local_254 = { -669.329f, -1507.0629f, -0.788618f };
			fLocal_263 = 25f;
			Local_257 = { -654.203f, -1536.146f, 9.191055f };
			Local_260 = { -645.9954f, -1500.2194f, -2.406948f };
			break;
		
		case 41:
			Local_251 = { -624.2344f, -1537.0453f, 12.601933f };
			Local_254 = { -622.1749f, -1472.8766f, -0.292606f };
			fLocal_263 = 8f;
			Local_257 = { -615.4003f, -1536.65f, 12.402705f };
			Local_260 = { -619.7385f, -1472.9371f, -0.243267f };
			break;
		
		case 42:
			Local_251 = { -492.5057f, -1632.4572f, 24.3307f };
			Local_254 = { -418.2088f, -1487.4521f, 0f };
			fLocal_263 = 25f;
			Local_257 = { -486.2016f, -1636.095f, 24.208052f };
			Local_260 = { -398.76483f, -1490.4403f, 0f };
			break;
		
		case 43:
			Local_251 = { -359.3541f, -1639.6927f, 13.134555f };
			Local_254 = { -388.49548f, -1690.9452f, -0.183164f };
			fLocal_263 = 25f;
			Local_257 = { -378.15182f, -1705.6597f, 12.471957f };
			Local_260 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_251 = { -243.44357f, -1814.6228f, 25.694649f };
			Local_254 = { -183.99873f, -1780.6447f, -0.085802f };
			fLocal_263 = 25f;
			Local_257 = { -235.13191f, -1822.0938f, 25.865416f };
			Local_260 = { -175.51047f, -1788.2748f, -0.506062f };
			break;
		
		case 45:
			Local_251 = { 84.55537f, -2046.1588f, 13.307674f };
			Local_254 = { 17.93164f, -2045.1519f, -0.031946f };
			fLocal_263 = 25f;
			Local_257 = { 17.907875f, -2035.773f, 12.627057f };
			Local_260 = { 84.57207f, -2034.1838f, 0.048385f };
			break;
		
		case 46:
			Local_251 = { -3064.9727f, 780.1677f, 18.70642f };
			Local_254 = { -3093.9575f, 757.28864f, 29.19696f };
			fLocal_263 = 5f;
			Local_257 = { -3063.0537f, 778.01654f, 18.671673f };
			Local_260 = { -3092.1746f, 754.9156f, 29.145802f };
			break;
		
		case 47:
			Local_251 = { -1471.5166f, 2406.8152f, 2.485338f };
			Local_254 = { -1489.4221f, 2404.3904f, 21.769384f };
			fLocal_263 = 15f;
			Local_257 = { -1468.8894f, 2400.6682f, 2.60396f };
			Local_260 = { -1487.055f, 2398.0874f, 21.837677f };
			break;
		
		case 48:
			Local_251 = { 2326.57f, 1096.0305f, 76.314575f };
			Local_254 = { 2290.332f, 1136.1307f, 58.857056f };
			fLocal_263 = 21f;
			Local_257 = { 2334.4534f, 1103.0668f, 76.26603f };
			Local_260 = { 2297.8457f, 1142.8969f, 58.84243f };
			break;
		
		case 49:
			Local_251 = { 2379.4421f, 1150.7755f, 58.796318f };
			Local_254 = { 2327.658f, 1212.3663f, 72.8333f };
			fLocal_263 = 12f;
			Local_257 = { 2374.0637f, 1146.2821f, 58.833305f };
			Local_260 = { 2320.8945f, 1209.5961f, 72.79299f };
			break;
		
		case 50:
			Local_251 = { -1179.4052f, -355.25543f, 56.53003f };
			Local_254 = { -1198.0641f, -357.8363f, 35.35551f };
			fLocal_263 = 12.5f;
			Local_257 = { -1178.3853f, -361.87842f, 56.150814f };
			Local_260 = { -1197.1038f, -364.70044f, 36.494755f };
			break;
		
		case 51:
			Local_251 = { -921.3846f, -384.93997f, 137.01813f };
			Local_254 = { -912.4324f, -429.22897f, 36.701126f };
			fLocal_263 = 16f;
			Local_257 = { -914.1658f, -387.94437f, 137.07936f };
			Local_260 = { -906.25336f, -424.69104f, 47.11882f };
			break;
		
		case 52:
			Local_251 = { -740.2564f, 246.45285f, 132.29219f };
			Local_254 = { -718.3602f, 201.00415f, 80.95571f };
			fLocal_263 = 20f;
			Local_257 = { -726.6429f, 253.06764f, 132.33194f };
			Local_260 = { -705.5858f, 210.43356f, 78.70573f };
			break;
		
		case 53:
			Local_251 = { -771.2068f, 268.2729f, 132.16891f };
			Local_254 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_263 = 16f;
			Local_257 = { -770.8035f, 310.86252f, 137.41614f };
			Local_260 = { -763.06805f, 269.04404f, 83.31474f };
			break;
		
		case 54:
			Local_251 = { 259.22052f, 135.41461f, 136.70827f };
			Local_254 = { 279.23962f, 128.13794f, 100.8233f };
			fLocal_263 = 16f;
			Local_257 = { 261.96936f, 142.96764f, 136.68892f };
			Local_260 = { 281.72034f, 134.95508f, 100.77042f };
			break;
		
		case 55:
			Local_251 = { 393.54797f, -30.871658f, 152.66345f };
			Local_254 = { 369.9622f, -23.884607f, 88.35776f };
			fLocal_263 = 8f;
			Local_257 = { 390.5358f, -36.088818f, 152.78125f };
			Local_260 = { 368.12747f, -28.818884f, 88.69447f };
			break;
		
		case 56:
			Local_251 = { 114.31391f, -648.42975f, 261.8488f };
			Local_254 = { 131.07816f, -733.7684f, 39.343933f };
			fLocal_263 = 20f;
			Local_257 = { 124.8467f, -646.65753f, 261.8488f };
			Local_260 = { 140.05025f, -737.427f, 39.349304f };
			break;
		
		case 57:
			Local_251 = { -215.91899f, -823.8436f, 126.02239f };
			Local_254 = { -193.22368f, -761.77814f, 27.913818f };
			fLocal_263 = 20f;
			Local_257 = { -225.39696f, -820.39374f, 126.08122f };
			Local_260 = { -202.94325f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_251 = { -296.4725f, -802.08154f, 95.401085f };
			Local_254 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_263 = 20f;
			Local_257 = { -305.46024f, -798.8369f, 95.48194f };
			Local_260 = { -285.73764f, -745.0959f, 49.576508f };
			break;
		
		case 59:
			Local_251 = { -292.30344f, -823.3569f, 95.376205f };
			Local_254 = { -258.59906f, -835.56323f, 27.979462f };
			fLocal_263 = 20f;
			Local_257 = { -288.92062f, -814.02203f, 95.375565f };
			Local_260 = { -255.2116f, -826.25604f, 27.737495f };
			break;
		
		case 60:
			Local_251 = { -256.35886f, -714.78375f, 110.16166f };
			Local_254 = { -212.90544f, -730.53204f, 32.21946f };
			fLocal_263 = 20f;
			Local_257 = { -253.77232f, -705.6632f, 110.17357f };
			Local_260 = { -210.05878f, -722.6748f, 32.465363f };
			break;
		
		case 61:
			Local_251 = { 1808.2145f, 1949.2458f, 71.73707f };
			Local_254 = { 1837.9062f, 2127.2832f, 52.80491f };
			fLocal_263 = 9.75f;
			Local_257 = { 1802.7859f, 1950.2617f, 71.74002f };
			Local_260 = { 1831.9944f, 2127.4326f, 52.83893f };
			break;
		
		case 62:
			Local_251 = { 2388.733f, 2931.941f, 46.62681f };
			Local_254 = { 2426.6807f, 2883.0662f, 36.215237f };
			fLocal_263 = 10f;
			Local_257 = { 2392.5466f, 2934.8672f, 46.626797f };
			Local_260 = { 2430.3325f, 2885.9084f, 36.28148f };
			break;
		
		case 63:
			Local_251 = { 2700.0557f, 4836.381f, 42.078537f };
			Local_254 = { 2685.6733f, 4893.3804f, 30.908669f };
			fLocal_263 = 20.75f;
			Local_257 = { 2685.6719f, 4821.653f, 42.184708f };
			Local_260 = { 2672.8123f, 4880.3564f, 31.133106f };
			break;
		
		case 64:
			Local_251 = { -1053.4464f, 4766.245f, 234.32512f };
			Local_254 = { -1040.2634f, 4737.1567f, 204.49164f };
			fLocal_263 = 5f;
			Local_257 = { -1051.4143f, 4767.193f, 234.4293f };
			Local_260 = { -1037.9542f, 4738.3545f, 204.52815f };
			break;
		
		case 67:
			Local_251 = { 1001.1451f, -987.1138f, 42.62456f };
			Local_254 = { 1078.645f, -963.7435f, 28.933376f };
			fLocal_263 = 14f;
			Local_257 = { 1002.8642f, -992.8986f, 42.62456f };
			Local_260 = { 1080.4836f, -969.9034f, 28.88377f };
			break;
		
		case 68:
			Local_251 = { 952.50415f, -847.6615f, 43.01844f };
			Local_254 = { 1021.0931f, -844.5063f, 29.719673f };
			fLocal_263 = 20f;
			Local_257 = { 945.54944f, -835.97766f, 43.156578f };
			Local_260 = { 1016.3639f, -835.3861f, 29.729702f };
			break;
		
		case 69:
			Local_251 = { 1212.4767f, -1183.0126f, 46.473896f };
			Local_254 = { 1267.1887f, -1161.9967f, 32.48297f };
			fLocal_263 = 40f;
			Local_257 = { 1206.0096f, -1157.063f, 47.936985f };
			Local_260 = { 1258.374f, -1140.6799f, 32.42903f };
			break;
	}
}

int func_28(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x26D7
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_29()//Position - 0x2752
{
	Local_39[0 /*3*/] = { 1083f, -231f, 60f };
	Local_39[1 /*3*/] = { 1024f, -325f, 60f };
	Local_39[2 /*3*/] = { 910f, -401f, 43f };
	Local_39[3 /*3*/] = { 721f, -457f, 26f };
	Local_39[4 /*3*/] = { 643f, -579f, 26f };
	Local_39[5 /*3*/] = { 590f, -851f, 26f };
	Local_39[6 /*3*/] = { 590f, -1023f, 16f };
	Local_39[7 /*3*/] = { 582f, -1205f, 24f };
	Local_39[8 /*3*/] = { 608f, -1335f, 16f };
	Local_39[9 /*3*/] = { 640f, -1434f, 16f };
	Local_39[10 /*3*/] = { 671f, -1742f, 20f };
	Local_39[11 /*3*/] = { 651f, -2046f, 16f };
	Local_39[12 /*3*/] = { 603f, -2505f, 9f };
	Local_39[13 /*3*/] = { 673f, -2582f, 4f };
	Local_39[14 /*3*/] = { 728f, -2594f, 10f };
	Local_39[15 /*3*/] = { 794f, -2624f, 27f };
	Local_39[16 /*3*/] = { -2663f, 2594f, 7.5f };
	Local_39[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_39[18 /*3*/] = { -513f, 4427f, 40f };
	Local_39[19 /*3*/] = { 126f, 3366f, 40f };
	Local_39[20 /*3*/] = { 143f, 3418f, 36f };
	Local_39[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_39[22 /*3*/] = { -162f, 4249f, 40f };
	Local_39[23 /*3*/] = { -408f, 2964f, 20f };
	Local_39[24 /*3*/] = { -181f, 2862f, 38f };
	Local_39[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_39[26 /*3*/] = { 2950f, 803f, 8f };
	Local_39[27 /*3*/] = { 2369f, -409f, 80f };
	Local_39[28 /*3*/] = { 1906f, -755f, 84f };
	Local_39[29 /*3*/] = { -403f, -2333f, 40f };
	Local_39[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_39[31 /*3*/] = { 219f, -2315f, 5f };
	Local_39[32 /*3*/] = { 350f, -2315f, 5f };
	Local_39[33 /*3*/] = { -1848f, -333f, 75f };
	Local_39[34 /*3*/] = { -693f, -608f, 69f };
	Local_39[35 /*3*/] = { -1461f, -582f, 53f };
	Local_39[36 /*3*/] = { -1553f, -546f, 59f };
	Local_39[37 /*3*/] = { 338f, -2758f, 23f };
	Local_39[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_39[39 /*3*/] = { -713f, -1538f, 13f };
	Local_39[40 /*3*/] = { -659f, -1518f, 13f };
	Local_39[41 /*3*/] = { -620f, -1502f, 16f };
	Local_39[42 /*3*/] = { -445f, -1575f, 26f };
	Local_39[43 /*3*/] = { -373f, -1680f, 19f };
	Local_39[44 /*3*/] = { -212f, -1805f, 29f };
	Local_39[45 /*3*/] = { 47f, -2040f, 18f };
	Local_39[46 /*3*/] = { -3080f, 766f, 25f };
	Local_39[47 /*3*/] = { -1478f, 2400f, 20f };
	Local_39[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_39[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_39[50 /*3*/] = { -1186f, -365f, 46f };
	Local_39[51 /*3*/] = { -916f, -407f, 93f };
	Local_39[52 /*3*/] = { -726f, 235f, 105f };
	Local_39[53 /*3*/] = { -774f, 286f, 112f };
	Local_39[54 /*3*/] = { 271f, 134f, 125f };
	Local_39[55 /*3*/] = { 377f, -28f, 125f };
	Local_39[56 /*3*/] = { 121f, -703f, 150f };
	Local_39[57 /*3*/] = { -204f, -784f, 74f };
	Local_39[58 /*3*/] = { -287f, -774f, 72f };
	Local_39[59 /*3*/] = { -272f, -824f, 71f };
	Local_39[60 /*3*/] = { -230f, -723f, 80f };
	Local_39[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_39[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_39[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_39[64 /*3*/] = { -1046f, 4751f, 244f };
	Local_39[65 /*3*/] = { -213f, -2463f, 38f };
	Local_39[66 /*3*/] = { -597f, -2192f, 38f };
	Local_39[67 /*3*/] = { 1036f, -980f, 41f };
	Local_39[68 /*3*/] = { 980f, -837f, 42f };
	Local_39[69 /*3*/] = { 1208f, -1173f, 38f };
}

int func_30()//Position - 0x2D90
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_51();
	iVar1 = func_49();
	if ((iVar2 + iVar1) > 0)
	{
		func_48(32, (iVar2 + iVar1));
	}
	if (bLocal_38)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_44(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_DEATHS"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_DEATHS"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_44(290, 0, 0);
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_DEATHS"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("SP0_WATER_CANNON_DEATHS"), 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_31(32, 1);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)//Position - 0x2E56
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)//Position - 0x2E71
{
	if (func_53(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32414 != 0 && !Global_78558)
	{
		return 0;
	}
	if (func_42(&Global_4542597))
	{
		if (func_40(&Global_4542597, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4542597, iParam0))
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

int func_33(var uParam0, int iParam1)//Position - 0x2F0E
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)//Position - 0x2FBF
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_53(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)//Position - 0x303A
{
	return (*uParam0)[iParam1] == 78;
}

void func_36(var uParam0)//Position - 0x304B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_4542596 - 0.5f));
}

void func_37(var uParam0, int iParam1)//Position - 0x307F
{
	(*uParam0)[iParam1] = 78;
}

void func_38(var uParam0, float fParam1)//Position - 0x308F
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

float func_39(var uParam0)//Position - 0x30AC
{
	return uParam0->f_80;
}

bool func_40(var uParam0, int iParam1)//Position - 0x30B8
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)//Position - 0x30CA
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

bool func_42(var uParam0)//Position - 0x30F7
{
	return uParam0->f_79 == 1;
}

int func_43(int iParam0)//Position - 0x3105
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

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x3155
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
		func_47((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
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
		func_45();
	}
}

void func_45()//Position - 0x323B
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
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113648.f_10196[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113384++;
					fVar1 = (fVar1 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113385++;
					fVar2 = (fVar2 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113386++;
					fVar3 = (fVar3 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113387++;
					fVar4 = (fVar4 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113388++;
					fVar5 = (fVar5 + (Global_113648.f_10196[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113389++;
					fVar6 = (fVar6 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113390++;
					fVar7 = (fVar7 + Global_113648.f_10196[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113367 > 0)
	{
		if (Global_113384 == Global_113367)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113368 > 0)
	{
		if (Global_113385 == Global_113368)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113369 > 0)
	{
		if (Global_113386 == Global_113369)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113370 > 0)
	{
		if (Global_113387 == Global_113370)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113371 > 0)
	{
		if (((Global_113388 == Global_113371 || (Global_113371 * 10 / Global_113388) < 41) || Global_113388 > Global_113374) || Global_113388 == Global_113374)
		{
			if (!BitTest(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113372 > 0)
	{
		if (Global_113389 == Global_113372)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113373 > 0)
	{
		if (Global_113390 == Global_113373)
		{
			fVar7 = 5f;
		}
	}
	Global_113648.f_10196.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
	{
		iVar9 = Global_113374;
	}
	else
	{
		iVar9 = Global_113388;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113390 + Global_113389), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113373 + Global_113372), true);
	Global_113391 = (Global_113384 * 100 / Global_113367);
	Global_113393 = ((Global_113386 + Global_113385) * 100 / (Global_113369 + Global_113368));
	Global_113392 = ((Global_113387 + iVar9) * 100 / (Global_113370 + Global_113374));
	Global_113394 = ((Global_113389 + Global_113390) * 100 / (Global_113372 + Global_113373));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
	{
		func_48(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_46() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113382 = 0;
				}
				if (!Global_63362)
				{
					func_2();
				}
			}
		}
	}
}

int func_46()//Position - 0x36F9
{
	return Global_32163;
}

void func_47(int iParam0, bool bParam1, int iParam2)//Position - 0x3704
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_48(int iParam0, int iParam1)//Position - 0x3722
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

int func_49()//Position - 0x3773
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113648.f_10051.f_96, bVar1))
		{
			if (func_50(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113648.f_10051.f_97, bVar1))
		{
			if (func_50(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113648.f_10051.f_98, bVar1))
		{
			if (func_50(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_50(bool bParam0)//Position - 0x37EE
{
	switch (bParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_51()//Position - 0x385F
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113648.f_10051.f_96, bVar1))
		{
			if (!func_50(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113648.f_10051.f_97, bVar1))
		{
			if (!func_50(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113648.f_10051.f_98, bVar1))
		{
			if (!func_50(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_52(bool bParam0)//Position - 0x38DD
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

bool func_53(int iParam0)//Position - 0x3905
{
	return Global_43257 == iParam0;
}

