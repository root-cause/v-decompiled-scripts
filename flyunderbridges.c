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
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	struct<3> Local_46 = { 0, 0, 0 } ;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	struct<2> Local_49 = { 0, 5 } ;
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
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 5;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
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
	fLocal_40 = 40000f;
	Local_46 = { ScriptParam_49.f_1[0 /*3*/] };
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
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_39[bLocal_31 /*3*/]) < fLocal_40)
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
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0))
											{
												bLocal_33 = true;
												iLocal_27 = 1;
											}
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
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
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
										{
											func_14();
											func_1();
											RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
									{
										iLocal_36 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
									{
										func_14();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
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
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
										{
											func_14();
											func_1();
											RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
										}
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
									{
										iLocal_35 = 1;
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
									{
										func_14();
									}
								}
								else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
								{
									iLocal_37 = 1;
								}
								else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_41, Local_42, fLocal_45, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_43, Local_44, fLocal_45, false, true, 0))
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
		bVar0 = BitTest(Global_113386.f_10049.f_96, bLocal_31);
	}
	else if (bLocal_31 < 64)
	{
		bVar0 = BitTest(Global_113386.f_10049.f_97, (bLocal_31 - 32));
	}
	else
	{
		bVar0 = BitTest(Global_113386.f_10049.f_98, (bLocal_31 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_47)
		{
			if (bLocal_38)
			{
				STATS::STAT_INCREMENT(joaat("sp_knife_flights_count"), 1f);
			}
			else
			{
				STATS::STAT_INCREMENT(joaat("sp_under_the_bridge_count"), 1f);
			}
			func_3(func_8(), 5, 3);
			func_2();
		}
		if (bLocal_31 < 32)
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_96), bLocal_31);
		}
		else if (bLocal_31 < 64)
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_97), (bLocal_31 - 32));
		}
		else
		{
			MISC::SET_BIT(&(Global_113386.f_10049.f_98), (bLocal_31 - 64));
		}
		Global_96886 = 1;
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
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
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
			Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113386.f_2363.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 13122;
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
			if (iVar1 != 13122)
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
	iVar0 = Global_2826809[iParam0 /*3*/][func_5(iParam2)];
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

int func_6()//Position - 0x7B3
{
	return Global_1574918;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x7BF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_5(iParam1)];
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
	return Global_113386.f_2363.f_539.f_4321;
}

void func_9()//Position - 0x815
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_53(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_10(Global_113386.f_2363.f_539.f_4321))
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
	return Global_1998[iParam0 /*29*/];
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
	if ((MISC::GET_GAME_TIMER() - iLocal_48) > 500)
	{
		if (bLocal_31 == 29)
		{
			if (BitTest(Global_113386.f_10049.f_96, bLocal_31))
			{
				bLocal_47 = true;
			}
		}
		iLocal_48 = MISC::GET_GAME_TIMER();
	}
}

void func_17()//Position - 0xA32
{
	switch (iLocal_28)
	{
		case 0:
			if (iLocal_29 && !bLocal_47)
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
						func_22("FU_KNIFE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(15);
					}
					else
					{
						func_22("FU_TITLE");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
					}
					func_22("FU_PASS");
					if (bLocal_38)
					{
						func_22("FU_CHALL_KN");
					}
					else
					{
						func_22("FU_CHALLENGE");
					}
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_30());
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_32 = func_30();
					Global_32194 = iLocal_32;
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
				if (Global_32194 > iLocal_32)
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
				if (Global_32194 > iLocal_32)
				{
					iLocal_28 = 3;
				}
			}
			break;
		
		case 3:
			func_18();
			iLocal_29 = 0;
			func_26();
			bLocal_47 = true;
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
	if (Global_43052 == 9 || Global_43052 == 10)
	{
		return Global_112036;
	}
	Global_112036 = 0;
	return 0;
}

int func_21()//Position - 0xC7E
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
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
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
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
		if (func_28(Local_46, Local_39[iVar0 /*3*/], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_40 = 490000f;
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
		if (BitTest(Global_113386.f_10049.f_96, bLocal_31))
		{
			bLocal_47 = true;
		}
	}
	else if (bLocal_31 < 64)
	{
		if (BitTest(Global_113386.f_10049.f_97, (bLocal_31 - 32)))
		{
			bLocal_47 = true;
		}
	}
	else if (BitTest(Global_113386.f_10049.f_98, (bLocal_31 - 64)))
	{
		bLocal_47 = true;
	}
	if (bLocal_47)
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
			Local_41 = { 1103.014f, -233.0374f, 56.13004f };
			Local_42 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_45 = 30f;
			Local_43 = { 1093.589f, -248.5926f, 56.88639f };
			Local_44 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			Local_41 = { 1044.182f, -324.5904f, 49.33408f };
			Local_42 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_45 = 30f;
			Local_43 = { 1007.983f, -320.6159f, 48.4543f };
			Local_44 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			Local_41 = { 916.599f, -419.8782f, 35.62748f };
			Local_42 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_45 = 7f;
			Local_43 = { 912.1362f, -420.5161f, 35.38034f };
			Local_44 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			Local_41 = { 757.7189f, -472.924f, 19.2535f };
			Local_42 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_45 = 20.75f;
			Local_43 = { 744.9114f, -480.7373f, 19.06514f };
			Local_44 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			Local_41 = { 680.3677f, -581.1792f, 14.2145f };
			Local_42 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_45 = 45f;
			Local_43 = { 667.3692f, -610.5356f, 13.85401f };
			Local_44 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			Local_41 = { 644.2497f, -844.7504f, 12.36707f };
			Local_42 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_45 = 25f;
			Local_43 = { 644.3659f, -859.3878f, 12.59677f };
			Local_44 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			Local_41 = { 634.972f, -1011.64f, 10.92594f };
			Local_42 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_45 = 25f;
			Local_43 = { 634.9612f, -1029.123f, 10.61846f };
			Local_44 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			Local_41 = { 645.7223f, -1191.215f, 10.45198f };
			Local_42 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_45 = 50f;
			Local_43 = { 645.7223f, -1228.966f, 10.98015f };
			Local_44 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			Local_41 = { 642.1216f, -1295.73f, 9.005976f };
			Local_42 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_45 = 7f;
			Local_43 = { 644.7772f, -1298.168f, 9.128529f };
			Local_44 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			Local_41 = { 686.5675f, -1444.71f, 9.065001f };
			Local_42 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_45 = 25f;
			Local_43 = { 682.3027f, -1429.872f, 9.890836f };
			Local_44 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			Local_41 = { 718.7617f, -1734.313f, 9.082874f };
			Local_42 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_45 = 30f;
			Local_43 = { 717.5355f, -1748.646f, 9.363478f };
			Local_44 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			Local_41 = { 694.3165f, -2049.806f, 0.009695f };
			Local_42 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_45 = 30f;
			Local_43 = { 693.1836f, -2063.225f, 0.429037f };
			Local_44 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			Local_41 = { 642.6671f, -2494.551f, 0.468485f };
			Local_42 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_45 = 20f;
			Local_43 = { 647.0339f, -2506.202f, 0.583701f };
			Local_44 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			Local_41 = { 691.8235f, -2558.219f, 0.363352f };
			Local_42 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_45 = 10.25f;
			Local_43 = { 695.7928f, -2561.034f, 0.346731f };
			Local_44 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			Local_41 = { 723.6254f, -2562.171f, 0.255647f };
			Local_42 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_45 = 20f;
			Local_43 = { 735.765f, -2561.935f, 0.311182f };
			Local_44 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			Local_41 = { 891.4387f, -2603.12f, 0f };
			Local_42 = { 704.4932f, -2634.793f, 45f };
			fLocal_45 = 20f;
			Local_43 = { 893.2578f, -2616.235f, 0f };
			Local_44 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			Local_41 = { -2669.587f, 2491.96f, 2.043799f };
			Local_42 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_45 = 26.5f;
			Local_43 = { -2687.606f, 2494.868f, 2.608733f };
			Local_44 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			Local_41 = { -1986.173f, 4521.799f, 0f };
			Local_42 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_45 = 17f;
			Local_43 = { -1995.668f, 4531.259f, 0f };
			Local_44 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			Local_41 = { -526.0265f, 4472.442f, 0f };
			Local_42 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_45 = 10f;
			Local_43 = { -519.9281f, 4476.346f, 0f };
			Local_44 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			Local_41 = { 98.1615f, 3384.489f, 45.45169f };
			Local_42 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_45 = 8f;
			Local_43 = { 152.6802f, 3346.793f, 45.02156f };
			Local_44 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			Local_41 = { 147.8606f, 3406.796f, 38.03672f };
			Local_42 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_45 = 14.5f;
			Local_43 = { 130.0916f, 3425.417f, 38.05672f };
			Local_44 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			Local_41 = { 2830.972f, 4967.14f, 34.56013f };
			Local_42 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_45 = 10f;
			Local_43 = { 2826.767f, 4964.185f, 34.10636f };
			Local_44 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			Local_41 = { -151.5764f, 4264.417f, 31.04735f };
			Local_42 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_45 = 10f;
			Local_43 = { -148.3842f, 4261.071f, 31.57409f };
			Local_44 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			Local_41 = { -426.6919f, 2964.272f, 14.848f };
			Local_42 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_45 = 7f;
			Local_43 = { -425.0283f, 2967.861f, 15.22699f };
			Local_44 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			Local_41 = { -192.3414f, 2864.916f, 30.72595f };
			Local_42 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_45 = 10f;
			Local_43 = { -192.0129f, 2871.603f, 29.99943f };
			Local_44 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			Local_41 = { 2539.185f, 2228.772f, 18.6102f };
			Local_42 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_45 = 10f;
			Local_43 = { 2543.708f, 2231.402f, 18.331f };
			Local_44 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			Local_41 = { 2954.087f, 815.7209f, 0.037901f };
			Local_42 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_45 = 35f;
			Local_43 = { 2966.123f, 806.8889f, 0.544056f };
			Local_44 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			Local_41 = { 2329.673f, -459.6648f, 70.24277f };
			Local_42 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_45 = 12f;
			Local_43 = { 2324.752f, -455.5238f, 70.25145f };
			Local_44 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			Local_41 = { 1943.428f, -753.251f, 80.17905f };
			Local_42 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_45 = 7f;
			Local_43 = { 1943.366f, -758.287f, 80.32291f };
			Local_44 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			Local_41 = { -655.1467f, -2138.094f, -0.339008f };
			Local_42 = { -146.0279f, -2493.724f, 54.67567f };
			fLocal_45 = 47.75f;
			Local_43 = { -672.2213f, -2162.675f, -0.082912f };
			Local_44 = { -163.5556f, -2519.058f, 54.72249f };
			break;
		
		case 30:
			Local_41 = { -1483f, 2691.428f, -10f };
			Local_42 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_45 = 12f;
			Local_43 = { -1478.152f, 2696.688f, -10f };
			Local_44 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			Local_41 = { 222.1519f, -2343.487f, 0.039199f };
			Local_42 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_45 = 12f;
			Local_43 = { 216.959f, -2343.487f, 0.207734f };
			Local_44 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			Local_41 = { 346.4622f, -2244.374f, 0.159779f };
			Local_42 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_45 = 20f;
			Local_43 = { 359.609f, -2244.468f, 0.129684f };
			Local_44 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			Local_41 = { -1859.68f, -322.6357f, 56.16368f };
			Local_42 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_45 = 7.5f;
			Local_43 = { -1860.27f, -327.8634f, 57.543f };
			Local_44 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			Local_41 = { -680.2632f, -600.818f, 69.11289f };
			Local_42 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_45 = 31.5f;
			Local_43 = { -680.6077f, -618.3658f, 69.27496f };
			Local_44 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			Local_41 = { -1468.096f, -591.7158f, 67.05518f };
			Local_42 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_45 = 11.75f;
			Local_43 = { -1474.903f, -591.1215f, 67.08091f };
			Local_44 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			Local_41 = { -1544.958f, -537.1475f, 72.44347f };
			Local_42 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_45 = 11.75f;
			Local_43 = { -1541.008f, -541.5494f, 71.61972f };
			Local_44 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			Local_41 = { 333.2108f, -2727.274f, 20.71663f };
			Local_42 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_45 = 20f;
			Local_43 = { 343.1127f, -2727.236f, 20.23613f };
			Local_44 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			Local_41 = { 1928.071f, 6228.355f, 43.49398f };
			Local_42 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_45 = 13f;
			Local_43 = { 1931.82f, 6235.634f, 43.37382f };
			Local_44 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			Local_41 = { -736.4309f, -1590.921f, 10.80892f };
			Local_42 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_45 = 15f;
			Local_43 = { -727.2307f, -1585.221f, 11.78027f };
			Local_44 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			Local_41 = { -686.3775f, -1548.553f, 12.33747f };
			Local_42 = { -669.329f, -1507.063f, -0.788618f };
			fLocal_45 = 25f;
			Local_43 = { -654.203f, -1536.146f, 9.191055f };
			Local_44 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			Local_41 = { -624.2344f, -1537.045f, 12.60193f };
			Local_42 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_45 = 8f;
			Local_43 = { -615.4003f, -1536.65f, 12.40271f };
			Local_44 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			Local_41 = { -492.5057f, -1632.457f, 24.3307f };
			Local_42 = { -418.2088f, -1487.452f, 0f };
			fLocal_45 = 25f;
			Local_43 = { -486.2016f, -1636.095f, 24.20805f };
			Local_44 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			Local_41 = { -359.3541f, -1639.693f, 13.13455f };
			Local_42 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_45 = 25f;
			Local_43 = { -378.1518f, -1705.66f, 12.47196f };
			Local_44 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			Local_41 = { -243.4436f, -1814.623f, 25.69465f };
			Local_42 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_45 = 25f;
			Local_43 = { -235.1319f, -1822.094f, 25.86542f };
			Local_44 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			Local_41 = { 84.55537f, -2046.159f, 13.30767f };
			Local_42 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_45 = 25f;
			Local_43 = { 17.90788f, -2035.773f, 12.62706f };
			Local_44 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			Local_41 = { -3064.973f, 780.1677f, 18.70642f };
			Local_42 = { -3093.958f, 757.2886f, 29.19696f };
			fLocal_45 = 5f;
			Local_43 = { -3063.054f, 778.0165f, 18.67167f };
			Local_44 = { -3092.175f, 754.9156f, 29.1458f };
			break;
		
		case 47:
			Local_41 = { -1471.517f, 2406.815f, 2.485338f };
			Local_42 = { -1489.422f, 2404.39f, 21.76938f };
			fLocal_45 = 15f;
			Local_43 = { -1468.889f, 2400.668f, 2.60396f };
			Local_44 = { -1487.055f, 2398.087f, 21.83768f };
			break;
		
		case 48:
			Local_41 = { 2326.57f, 1096.031f, 76.31458f };
			Local_42 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_45 = 21f;
			Local_43 = { 2334.453f, 1103.067f, 76.26603f };
			Local_44 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			Local_41 = { 2379.442f, 1150.776f, 58.79632f };
			Local_42 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_45 = 12f;
			Local_43 = { 2374.064f, 1146.282f, 58.83331f };
			Local_44 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			Local_41 = { -1179.405f, -355.2554f, 56.53003f };
			Local_42 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_45 = 12.5f;
			Local_43 = { -1178.385f, -361.8784f, 56.15081f };
			Local_44 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			Local_41 = { -921.3846f, -384.94f, 137.0181f };
			Local_42 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_45 = 16f;
			Local_43 = { -914.1658f, -387.9444f, 137.0794f };
			Local_44 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			Local_41 = { -740.2564f, 246.4529f, 132.2922f };
			Local_42 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_45 = 20f;
			Local_43 = { -726.6429f, 253.0676f, 132.3319f };
			Local_44 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			Local_41 = { -771.2068f, 268.2729f, 132.1689f };
			Local_42 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_45 = 16f;
			Local_43 = { -770.8035f, 310.8625f, 137.4161f };
			Local_44 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			Local_41 = { 259.2205f, 135.4146f, 136.7083f };
			Local_42 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_45 = 16f;
			Local_43 = { 261.9694f, 142.9676f, 136.6889f };
			Local_44 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			Local_41 = { 393.548f, -30.87166f, 152.6635f };
			Local_42 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_45 = 8f;
			Local_43 = { 390.5358f, -36.08882f, 152.7813f };
			Local_44 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			Local_41 = { 114.3139f, -648.4297f, 261.8488f };
			Local_42 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_45 = 20f;
			Local_43 = { 124.8467f, -646.6575f, 261.8488f };
			Local_44 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			Local_41 = { -215.919f, -823.8436f, 126.0224f };
			Local_42 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_45 = 20f;
			Local_43 = { -225.397f, -820.3937f, 126.0812f };
			Local_44 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			Local_41 = { -296.4725f, -802.0815f, 95.40108f };
			Local_42 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_45 = 20f;
			Local_43 = { -305.4602f, -798.8369f, 95.48194f };
			Local_44 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			Local_41 = { -292.3034f, -823.3569f, 95.37621f };
			Local_42 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_45 = 20f;
			Local_43 = { -288.9206f, -814.022f, 95.37556f };
			Local_44 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			Local_41 = { -256.3589f, -714.7838f, 110.1617f };
			Local_42 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_45 = 20f;
			Local_43 = { -253.7723f, -705.6632f, 110.1736f };
			Local_44 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			Local_41 = { 1808.214f, 1949.246f, 71.73707f };
			Local_42 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_45 = 9.75f;
			Local_43 = { 1802.786f, 1950.262f, 71.74002f };
			Local_44 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			Local_41 = { 2388.733f, 2931.941f, 46.62681f };
			Local_42 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_45 = 10f;
			Local_43 = { 2392.547f, 2934.867f, 46.6268f };
			Local_44 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			Local_41 = { 2700.056f, 4836.381f, 42.07854f };
			Local_42 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_45 = 20.75f;
			Local_43 = { 2685.672f, 4821.653f, 42.18471f };
			Local_44 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			Local_41 = { -1053.446f, 4766.245f, 234.3251f };
			Local_42 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_45 = 5f;
			Local_43 = { -1051.414f, 4767.193f, 234.4293f };
			Local_44 = { -1037.954f, 4738.354f, 204.5282f };
			break;
		
		case 67:
			Local_41 = { 1001.145f, -987.1138f, 42.62456f };
			Local_42 = { 1078.645f, -963.7435f, 28.93338f };
			fLocal_45 = 14f;
			Local_43 = { 1002.864f, -992.8986f, 42.62456f };
			Local_44 = { 1080.484f, -969.9034f, 28.88377f };
			break;
		
		case 68:
			Local_41 = { 952.5042f, -847.6615f, 43.01844f };
			Local_42 = { 1021.093f, -844.5063f, 29.71967f };
			fLocal_45 = 20f;
			Local_43 = { 945.5494f, -835.9777f, 43.15658f };
			Local_44 = { 1016.364f, -835.3861f, 29.7297f };
			break;
		
		case 69:
			Local_41 = { 1212.477f, -1183.013f, 46.4739f };
			Local_42 = { 1267.189f, -1161.997f, 32.48297f };
			fLocal_45 = 40f;
			Local_43 = { 1206.01f, -1157.063f, 47.93699f };
			Local_44 = { 1258.374f, -1140.68f, 32.42903f };
			break;
	}
}

int func_28(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x26D7
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
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
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_44(290, 0, 0);
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("sp0_water_cannon_deaths"), 25, 0);
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
	if (Global_32209 != 0 && !Global_78319)
	{
		return 0;
	}
	if (func_42(&Global_4541529))
	{
		if (func_40(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_4541529, iParam0))
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
	func_38(uParam0, (Global_4541528 - 0.5f));
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
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_48(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_46() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_2();
				}
			}
		}
	}
}

int func_46()//Position - 0x36F9
{
	return Global_31959;
}

void func_47(int iParam0, bool bParam1, int iParam2)//Position - 0x3704
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
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
		if (BitTest(Global_113386.f_10049.f_96, bVar1))
		{
			if (func_50(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_97, bVar1))
		{
			if (func_50(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_98, bVar1))
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
		if (BitTest(Global_113386.f_10049.f_96, bVar1))
		{
			if (!func_50(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_97, bVar1))
		{
			if (!func_50(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_98, bVar1))
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
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

bool func_53(int iParam0)//Position - 0x3905
{
	return Global_43052 == iParam0;
}

