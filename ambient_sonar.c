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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	struct<8> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<11> Local_53[30];
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int* iLocal_392 = NULL;
	int iLocal_393[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	bLocal_38 = true;
	bLocal_39 = true;
	iLocal_389 = -1;
	iLocal_390 = 5;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_127();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_sonar")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_126(13);
	func_125(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_124(PLAYER::PLAYER_PED_ID());
		switch (iLocal_386)
		{
			case 0:
				func_118();
				break;
			
			case 1:
				func_110();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_127();
				break;
		}
	}
}

void func_1()//Position - 0xEB
{
	iLocal_387 = 0;
	if (func_109(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_76(&Local_40, &Local_53))
			{
				func_31();
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_384 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_125(1);
				func_13(0);
				if (func_109(PLAYER::PLAYER_PED_ID()))
				{
					if (func_11(&Local_40, &Local_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_389))
					{
						func_8();
					}
				}
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				func_7();
				func_6(1);
			}
			else if (func_109(iLocal_384))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_384, true)) > 62500f)
				{
					func_5();
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_385))
				{
					iLocal_385 = func_2(iLocal_384, 0, 0);
					HUD::SET_BLIP_SPRITE(iLocal_385, 308 /*RADAR_SUB*/);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2)//Position - 0x1CF
{
	return func_3(iParam0, !bParam1, bParam2);
}

int func_3(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E2
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_4(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)//Position - 0x286
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()//Position - 0x29D
{
	func_7();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_384);
	}
}

void func_6(int iParam0)//Position - 0x2BA
{
	iLocal_386 = iParam0;
}

void func_7()//Position - 0x2C7
{
	if (HUD::DOES_BLIP_EXIST(iLocal_385))
	{
		HUD::REMOVE_BLIP(&iLocal_385);
	}
}

void func_8()//Position - 0x2E0
{
	func_9(func_10(iLocal_389), 1, 1);
	iLocal_388 = 1;
}

void func_9(struct<3> Param0, bool bParam3, bool bParam4)//Position - 0x2F9
{
	Global_23392 = { Param0 };
	MISC::CLEAR_BIT(&Global_8801, 30);
	if (bParam3)
	{
		MISC::SET_BIT(&Global_8801, 29);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8801, 29);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&Global_8802, 1);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8802, 1);
	}
}

Vector3 func_10(int iParam0)//Position - 0x345
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x681
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = SYSTEM::VDIST2(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

int func_12(var uParam0, int iParam1)//Position - 0x6E8
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return BitTest(*uParam0, iParam1);
	}
	return BitTest(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)//Position - 0x720
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_8801, 22);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8801, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x757
{
	if (Global_79389)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4543084, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4543084, 14);
				MISC::SET_BIT(&Global_4543084, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4543084, 14);
				MISC::SET_BIT(&Global_4543084, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4543084, 14);
				MISC::SET_BIT(&Global_4543084, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4543084, 14);
				MISC::SET_BIT(&Global_4543084, 29);
			}
		}
		if (Global_8807[iParam0 /*15*/].f_9 == 0)
		{
			func_27();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4543084, 14);
			MISC::CLEAR_BIT(&Global_4543084, 16);
			MISC::CLEAR_BIT(&Global_4543084, 15);
			MISC::CLEAR_BIT(&Global_4543084, 27);
			MISC::CLEAR_BIT(&Global_4543084, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_20();
	if (Global_20930.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_19(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20896 == 1)
	{
		return 0;
	}
	if (Global_20930.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20927))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20930.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20927 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20912)
	{
		SYSTEM::WAIT(0);
	}
	func_27();
	func_15();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
	{
		Global_9406 = 0;
		Global_20930.f_1 = 7;
		func_18(&(Global_8807[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
			{
				Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8807[iParam0 /*15*/].f_9) == 0)
		{
			Global_20928 = SYSTEM::START_NEW_SCRIPT(&(Global_8807[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8807[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x992
{
	if (Global_79389 == 0)
	{
		Global_8807[14 /*15*/].f_4 = -99;
		Global_8807[4 /*15*/].f_4 = -99;
		if (Global_2696167)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA16
{
	StringCopy(&(Global_8807[iParam0 /*15*/]), sParam1, 16);
	Global_8807[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8807[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8807[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8807[iParam0 /*15*/].f_10 = iParam4;
	Global_8807[iParam0 /*15*/].f_11 = iParam5;
	Global_8807[iParam0 /*15*/].f_12 = iParam6;
	Global_8807[iParam0 /*15*/].f_13 = iParam7;
	Global_8807[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8807[iParam0 /*15*/].f_12 == 0)
	{
		Global_8807[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_13 == 0)
	{
		Global_8807[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_14 == 0)
	{
		Global_8807[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)//Position - 0xACC
{
	return Global_44042 == iParam0;
}

void func_18(char* sParam0)//Position - 0xADA
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_19(int iParam0)//Position - 0xAFA
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

void func_20()//Position - 0xB51
{
	if (func_17(14))
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
		Global_20930 = func_21();
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

var func_21()//Position - 0xBF3
{
	func_22();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_22()//Position - 0xC0C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_17(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_23(Global_113969.f_2366.f_539.f_4321))
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

bool func_23(int iParam0)//Position - 0xD09
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0xD15
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0xD52
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)//Position - 0xD77
{
	return Global_2169[iParam0 /*29*/];
}

void func_27()//Position - 0xD86
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8807[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79389 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_30(iVar2, Global_20930) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44042 == 15 && func_29(0) == 0) && Global_8805 == 0)
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 0;
			Global_8806 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 1;
			Global_8806 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113969.f_14054.f_89 == 1)
		{
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113969.f_14054.f_88 == 1)
		{
			func_16(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4543084, 4))
		{
			func_16(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4543084, 4))
		{
			if (Global_1836172)
			{
				func_16(23, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 20))
			{
				func_16(23, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 22))
			{
				func_16(23, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 26))
			{
				if (func_28())
				{
					func_16(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_16(23, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4543084, 4) == 0 && Global_1836172 == 0) && BitTest(Global_4543084, 20) == 0) && BitTest(Global_4543084, 22) == 0) && BitTest(Global_4543084, 26) == 0)
		{
			if (func_28())
			{
				func_16(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_16(23, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_28()//Position - 0x12B3
{
	if (Global_79389)
	{
		if (Global_1836576 || Global_1836577 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(bool bParam0)//Position - 0x12DA
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_30(int iParam0, int iParam1)//Position - 0x1302
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_19[iParam1];
}

void func_31()//Position - 0x132C
{
	func_54(3, 250000);
	func_47(299, 0, 0);
	func_34(20, 1);
	func_32();
	func_6(3);
}

void func_32()//Position - 0x1357
{
	int iVar0;
	
	iVar0 = func_33(65);
	Global_2645400[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_33(int iParam0)//Position - 0x1384
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645400[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645400[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_34(int iParam0, int iParam1)//Position - 0x13D1
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)//Position - 0x13EC
{
	if (func_17(14) && !func_46(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_45(&Global_4543384))
	{
		if (func_43(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4543384, iParam0))
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

int func_36(var uParam0, int iParam1)//Position - 0x1489
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)//Position - 0x153A
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)//Position - 0x15B5
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)//Position - 0x15C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4543383 - 0.5f));
}

void func_40(var uParam0, int iParam1)//Position - 0x15FA
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)//Position - 0x160A
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

float func_42(var uParam0)//Position - 0x1627
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)//Position - 0x1633
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)//Position - 0x1645
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

bool func_45(var uParam0)//Position - 0x1672
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)//Position - 0x1680
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

void func_47(int iParam0, int iParam1, int iParam2)//Position - 0x16D0
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
		func_52((891 + iParam0), 1, -1);
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
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

void func_48()//Position - 0x17B6
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
		func_51(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_50() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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

int func_49()//Position - 0x1C74
{
	if (func_29(0))
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

int func_50()//Position - 0x1CBF
{
	return Global_32948;
}

int func_51(int iParam0, int iParam1)//Position - 0x1CCA
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

void func_52(int iParam0, bool bParam1, int iParam2)//Position - 0x1D1B
{
	if (iParam2 == -1)
	{
		iParam2 = func_53();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_53()//Position - 0x1D39
{
	return Global_1574926;
}

void func_54(int iParam0, int iParam1)//Position - 0x1D45
{
	int iVar0;
	
	func_56(Global_113969.f_24907[iParam0 /*4*/], func_75(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_113969.f_24907.f_69 = (Global_113969.f_24907.f_69 + iParam1);
			break;
		
		case 2:
			Global_113969.f_24907.f_70 = (Global_113969.f_24907.f_70 + iParam1);
			break;
		
		case 0:
			Global_113969.f_24907.f_71 = (Global_113969.f_24907.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(func_55(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_55(iParam0, 1), iVar0, true);
}

int func_55(int iParam0, int iParam1)//Position - 0x1DEC
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TOWI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TOWI");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TAXI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TAXI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_TAXI");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_TRAF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_TRAF");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_SOCO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_SOCO");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CMSH");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CMSH");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINV");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINV");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINV");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CIND");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CIND");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CIND");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CINM");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CINM");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CINM");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_GOLF");
					break;
				
				case 1:
					return joaat("PROP_EARNED_GOLF");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_CSCR");
					break;
				
				case 1:
					return joaat("PROP_EARNED_CSCR");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_CSCR");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_WEED");
					break;
				
				case 1:
					return joaat("PROP_EARNED_WEED");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_WEED");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARTE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARTE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARTE");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARPI");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARPI");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARPI");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHE");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHE");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHE");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_BARHO");
					break;
				
				case 1:
					return joaat("PROP_EARNED_BARHO");
					break;
				
				case 2:
					return joaat("PROP_MISSIONS_BARHO");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("PROP_BOUGHT_STRIP");
					break;
				
				case 1:
					return joaat("PROP_EARNED_STRIP");
					break;
			}
			break;
	}
	return joaat("PROP_BOUGHT_TOWI");
}

void func_56(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x21CA
{
	int iVar0;
	int iVar1;
	
	if (func_74(iParam0) == 3)
	{
		return;
	}
	if (func_74(iParam0) == 4)
	{
		return;
	}
	func_57(func_74(iParam0), 1, iParam1, iParam2, 0);
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

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x229C
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_73();
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
					func_72(99, 1);
					func_71(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_71(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_71(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_67(5))
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
							func_71(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_67(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_71(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_71(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_71(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_71(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_71(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_67(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_71(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_71(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_71(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_66(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_72(95, iParam3);
					break;
				
				case 1:
					func_72(97, iParam3);
					break;
				
				case 2:
					func_72(96, iParam3);
					break;
			}
			func_72(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_60(bVar1);
	}
	iVar5 = (Global_61340[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61340[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61340[iVar2] = 2147483647;
				}
				else
				{
					Global_61340[iVar2] = (Global_61340[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_71(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_71(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_71(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61340[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61340[iVar2];
			Global_61340[iVar2] = (Global_61340[iVar2] - iParam3);
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
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_2[Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[iVar2 /*69*/]++;
		Global_113969.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113969.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_59(iParam0);
	if (Global_44042 == 15)
	{
		func_58(0);
	}
	return 1;
}

void func_58(bool bParam0)//Position - 0x289B
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
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113969.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61348[iVar0 /*3*/][0] = Global_113969.f_20567[iVar0];
		Global_61348.f_31[iVar0 /*3*/][0] = Global_113969.f_20567.f_11[iVar0];
		Global_61348.f_62[iVar0 /*3*/][0] = Global_113969.f_20567.f_22[iVar0];
		Global_61348.f_93[iVar0 /*3*/][0] = Global_113969.f_20567.f_33[iVar0];
		Global_61348.f_124[iVar0 /*3*/][0] = Global_113969.f_20567.f_44[iVar0];
		Global_61348.f_155[iVar0 /*3*/][0] = Global_113969.f_20567.f_55[iVar0];
		Global_61348.f_186[iVar0 /*3*/][0] = Global_113969.f_20567.f_66[iVar0];
		Global_61348.f_217[iVar0 /*3*/][0] = Global_113969.f_20567.f_77[iVar0];
		Global_61348.f_248[iVar0 /*3*/][0] = Global_113969.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_61348[iVar0 /*3*/][1] = Global_113969.f_20567[iVar0];
			Global_61348.f_31[iVar0 /*3*/][1] = Global_113969.f_20567.f_11[iVar0];
			Global_61348.f_62[iVar0 /*3*/][1] = Global_113969.f_20567.f_22[iVar0];
			Global_61348.f_93[iVar0 /*3*/][1] = Global_113969.f_20567.f_33[iVar0];
			Global_61348.f_124[iVar0 /*3*/][1] = Global_113969.f_20567.f_44[iVar0];
			Global_61348.f_155[iVar0 /*3*/][1] = Global_113969.f_20567.f_55[iVar0];
			Global_61348.f_186[iVar0 /*3*/][1] = Global_113969.f_20567.f_66[iVar0];
			Global_61348.f_217[iVar0 /*3*/][1] = Global_113969.f_20567.f_77[iVar0];
			Global_61348.f_248[iVar0 /*3*/][1] = Global_113969.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_59(int iParam0)//Position - 0x2B1D
{
	int iVar0;
	
	iVar0 = Global_61340[iParam0];
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

void func_60(bool bParam0)//Position - 0x2B77
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_52(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_52(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_52(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_52(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_63(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_63(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_63(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_63(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_63(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_63(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113969.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113969.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_62() /*5570*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_62() /*5570*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_61(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_61(bool bParam0)//Position - 0x2CF1
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

int func_62()//Position - 0x2DF4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E01
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_64(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_64(int iParam0, var uParam1)//Position - 0x2E2F
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_65(uParam1));
}

int func_65(var uParam0)//Position - 0x2E44
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_53();
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

void func_66(int iParam0)//Position - 0x2E78
{
	func_72(93, iParam0);
	func_72(29, iParam0);
	func_72(30, iParam0);
}

int func_67(int iParam0)//Position - 0x2E98
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
		return func_69(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_69(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_69(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_69(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_68(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_68(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_68(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_68(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_68(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_68(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113969.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_62() /*5570*/].f_681.f_10, iParam0);
}

int func_68(int iParam0, int iParam1)//Position - 0x3038
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_64(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_69(int iParam0, int iParam1)//Position - 0x3067
{
	if (iParam1 == -1)
	{
		iParam1 = func_53();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_70(bool bParam0)//Position - 0x3083
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
		func_51(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

void func_71(int iParam0, int iParam1)//Position - 0x313A
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_72(int iParam0, int iParam1)//Position - 0x315D
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_73()//Position - 0x31BA
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[0] == iVar0)
		{
			Global_61340[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[1] == iVar0)
		{
			Global_61340[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_61340[2] == iVar0)
		{
			Global_61340[2] = iVar0;
		}
	}
}

int func_74(int iParam0)//Position - 0x322F
{
	return Global_2169[iParam0 /*29*/].f_17;
}

int func_75(int iParam0)//Position - 0x3240
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_76(var uParam0, int iParam1)//Position - 0x3330
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	
	PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < iLocal_390)
	{
		bVar4 = func_12(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar4)
			{
				if (!func_108((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 1, 0);
				}
				else
				{
					func_106(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bVar4)
		{
			if (func_93(uParam0, iParam1, Var1))
			{
				if (func_11(uParam0, iParam1, Var1, &iLocal_389))
				{
					func_54(3, 23000);
					func_8();
				}
			}
		}
		func_90(uParam0->f_10, bVar4);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_79650)
	{
		func_83(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_391, &iLocal_392, "SUBM_TITLE" /* GXT: Waste Collected~s~ */, "SUBM_COLLECT" /* GXT: ~1~/30 nuclear waste collected. */);
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_82();
		func_125(0);
		func_77(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_77(int iParam0)//Position - 0x3492
{
	if (func_81())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_80())
		{
			func_79(1, 1);
		}
		else
		{
			func_79(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_78())
	{
		Global_20930.f_1 = 3;
	}
}

int func_78()//Position - 0x351C
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)//Position - 0x3543
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_80()//Position - 0x35B7
{
	return BitTest(Global_1956920, 5);
}

bool func_81()//Position - 0x35C5
{
	return BitTest(Global_1956920, 19);
}

void func_82()//Position - 0x35D4
{
	MISC::SET_BIT(&Global_8801, 30);
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)//Position - 0x35E5
{
	int iVar0;
	
	func_89(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_85(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*iParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*iParam4++;
				}
				else if (!func_84())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_89(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_84())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_89(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				func_89(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_84()//Position - 0x376F
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

int func_85(int iParam0)//Position - 0x3799
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			if (BitTest(Global_113969.f_10052.f_108, func_87(func_88(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_88(iParam0))
		{
			iVar2 = (func_86(iParam0) + iVar1);
			if (func_69(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_86(int iParam0)//Position - 0x385D
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_87(int iParam0, int iParam1)//Position - 0x38A4
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_88(int iParam0)//Position - 0x38C0
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_89(int iParam0)//Position - 0x3910
{
	if (Global_79657 != iParam0)
	{
		Global_79657 = iParam0;
	}
}

void func_90(int iParam0, bool bParam1)//Position - 0x392A
{
	int iVar0;
	
	if (func_92(iParam0) == 0)
	{
		return;
	}
	if (iLocal_393[iParam0] == -1)
	{
		if (!bParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_53[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_91(&iVar0))
				{
					GRAPHICS::PROCGRASS_ENABLE_CULLSPHERE(iVar0, Local_53[iParam0 /*11*/].f_3, 8f);
					iLocal_393[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_53[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_393[iParam0] >= 0 && iLocal_393[iParam0] < 8)
			{
				GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_393[iParam0]);
				iLocal_393[iParam0] = -1;
			}
		}
	}
}

int func_91(var uParam0)//Position - 0x3A10
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!GRAPHICS::PROCGRASS_IS_CULLSPHERE_ENABLED(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

int func_92(int iParam0)//Position - 0x3A47
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

int func_93(var uParam0, var uParam1, struct<3> Param2)//Position - 0x3A5B
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || func_105((uParam1[iVar0 /*11*/])->f_1))
			{
				func_95(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_94(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_94(var uParam0)//Position - 0x3B18
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

void func_95(var uParam0, var uParam1, int iParam2)//Position - 0x3B31
{
	int iVar0;
	
	iVar0 = (func_86(*uParam0) + iParam2);
	func_94(&((uParam1[iParam2 /*11*/])->f_1));
	func_104(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_103(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_102(*uParam0, iParam2, 1);
	}
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
	STATS::STAT_INCREMENT(uParam0->f_6, 1f);
	if (bLocal_39)
	{
		func_101(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_99(&(uParam0->f_1));
	}
	func_97();
	STATS::PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(iVar0);
	func_96(1, 0);
	func_49();
	uParam0->f_11 = 1;
}

void func_96(int iParam0, int iParam1)//Position - 0x3BDC
{
	Global_101572.f_7 = iParam0;
	Global_101572.f_8 = iParam1;
}

void func_97()//Position - 0x3BF4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	STATS::STAT_GET_INT(func_98(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(18, iVar0);
	}
	STATS::STAT_GET_INT(func_98(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(19, iVar0);
	}
	STATS::STAT_GET_INT(func_98(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_51(20, iVar0);
	}
	iVar2 = ((func_88(0) + func_88(1)) + func_88(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	STATS::STAT_SET_INT(joaat("PERCENT_HIDDEN_PACKAGES"), iVar3, true);
}

int func_98(int iParam0)//Position - 0x3C97
{
	if (iParam0 == 3)
	{
		return joaat("NUM_HIDDEN_PACKAGES_3");
	}
	if (iParam0 == 1)
	{
		return joaat("NUM_HIDDEN_PACKAGES_0");
	}
	if (iParam0 == 0)
	{
		return joaat("NUM_HIDDEN_PACKAGES_1");
	}
	if (iParam0 == 5)
	{
		return joaat("NUM_HIDDEN_PACKAGES_4");
	}
	return joaat("NUM_HIDDEN_PACKAGES_2");
}

void func_99(var uParam0)//Position - 0x3CE8
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_52((uParam0->f_2 + iVar0), 1, -1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_100(int iParam0, int iParam1)//Position - 0x3D69
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_101(var uParam0, int iParam1)//Position - 0x3DA6
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_52((uParam0->f_2 + iParam1), 1, -1);
		if (bLocal_38)
		{
		}
	}
	if (bLocal_38)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_100(168, 0);
	}
}

void func_102(int iParam0, int iParam1, bool bParam2)//Position - 0x3E18
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113969.f_10052.f_122), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113969.f_10052.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_113969.f_10052.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113969.f_10052.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_113969.f_10052.f_125), iParam1);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_113969.f_10052.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_113969.f_10052.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113969.f_10052.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_103(int* iParam0, int iParam1, bool bParam2)//Position - 0x3F04
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			MISC::SET_BIT(iParam0, iParam1);
		}
		else
		{
			MISC::CLEAR_BIT(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_104(int* iParam0)//Position - 0x3F65
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

int func_105(int iParam0)//Position - 0x3F85
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	if (func_109(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_106(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x4014
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(iParam1);
						while (!STREAMING::HAS_MODEL_LOADED(iParam1))
						{
							STREAMING::REQUEST_MODEL(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_107(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_CUSTOM_SCRIPT"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							MISC::SET_BIT(&iVar0, 3);
							MISC::SET_BIT(&iVar0, 4);
							MISC::SET_BIT(&iVar0, 8);
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_107(struct<3> Param0)//Position - 0x412D
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		while (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

bool func_108(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x416B
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_109(int iParam0)//Position - 0x41B2
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

void func_110()//Position - 0x41D3
{
	if (func_109(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			func_125(0);
			func_77(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
		else
		{
			if (!func_117(15))
			{
				func_114("SUBM_HELP1" /* GXT: Follow the sonar blips on Trackify to locate nuclear waste lost on the sea bed. */, 1, 0, -1, 10000, 7, 0, 0, 0);
				func_113(15);
			}
			if (!func_112())
			{
				func_125(1);
				if (!iLocal_387 && !Local_40.f_1.f_4 >= Local_40.f_1.f_3)
				{
					func_114("SUBM_TRKHELP" /* GXT: To restart Trackify, select the Trackify app from the bottom right of the phone. */, 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_387 = 1;
				}
			}
			func_111();
			if (func_76(&Local_40, &Local_53))
			{
				func_31();
			}
		}
	}
}

void func_111()//Position - 0x427B
{
	iLocal_388++;
	if ((iLocal_388 % 30) == 0 || iLocal_389 == -1)
	{
		if (func_11(&Local_40, &Local_53, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_389))
		{
			func_8();
		}
	}
}

int func_112()//Position - 0x42BC
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0)//Position - 0x42D9
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

void func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x431B
{
	func_115(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_115(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x433D
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
		func_116();
	}
}

void func_116()//Position - 0x4511
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

int func_117(int iParam0)//Position - 0x4628
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

void func_118()//Position - 0x4668
{
	iLocal_391 = 0;
	func_122();
	func_121(&Local_40, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT" /* GXT: ~1~/30 nuclear waste collected. */);
	func_119(&Local_40, joaat("NUM_HIDDEN_PACKAGES_3"), 815, 30);
	if (func_109(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			func_6(1);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_6(2);
		}
	}
}

void func_119(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x46C5
{
	uParam0->f_6 = iParam1;
	func_120(&(uParam0->f_1), iParam2, iParam3);
}

void func_120(int* iParam0, var uParam1, var uParam2)//Position - 0x46DF
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_69((iParam0->f_2 + iVar0), -1))
		{
			iVar1++;
			func_103(iParam0, iVar0, 1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x4747
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_122()//Position - 0x4765
{
	int iVar0;
	
	Local_53[0 /*11*/].f_3 = { func_10(0) };
	Local_53[0 /*11*/].f_9 = 179.47f;
	Local_53[1 /*11*/].f_3 = { func_10(1) };
	Local_53[1 /*11*/].f_9 = 104f;
	Local_53[2 /*11*/].f_3 = { func_10(2) };
	Local_53[2 /*11*/].f_9 = 321.5f;
	Local_53[3 /*11*/].f_3 = { func_10(3) };
	Local_53[3 /*11*/].f_9 = -29.79f;
	Local_53[4 /*11*/].f_3 = { func_10(4) };
	Local_53[4 /*11*/].f_9 = -165.6f;
	Local_53[5 /*11*/].f_3 = { func_10(5) };
	Local_53[5 /*11*/].f_9 = 116f;
	Local_53[6 /*11*/].f_3 = { func_10(6) };
	Local_53[6 /*11*/].f_9 = -68.65f;
	Local_53[7 /*11*/].f_3 = { func_10(7) };
	Local_53[7 /*11*/].f_9 = 40f;
	Local_53[8 /*11*/].f_3 = { func_10(8) };
	Local_53[8 /*11*/].f_9 = 40f;
	Local_53[9 /*11*/].f_3 = { func_10(9) };
	Local_53[9 /*11*/].f_9 = 40f;
	Local_53[10 /*11*/].f_3 = { func_10(10) };
	Local_53[10 /*11*/].f_9 = 40f;
	Local_53[11 /*11*/].f_3 = { func_10(11) };
	Local_53[11 /*11*/].f_9 = 27.04f;
	Local_53[12 /*11*/].f_3 = { func_10(12) };
	Local_53[12 /*11*/].f_9 = 40f;
	Local_53[13 /*11*/].f_3 = { func_10(13) };
	Local_53[13 /*11*/].f_9 = 40f;
	Local_53[14 /*11*/].f_3 = { func_10(14) };
	Local_53[14 /*11*/].f_9 = 40f;
	Local_53[15 /*11*/].f_3 = { func_10(15) };
	Local_53[15 /*11*/].f_9 = 40f;
	Local_53[16 /*11*/].f_3 = { func_10(16) };
	Local_53[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_53[17 /*11*/].f_3 = { func_10(17) };
	Local_53[17 /*11*/].f_9 = 40f;
	Local_53[18 /*11*/].f_3 = { func_10(18) };
	Local_53[18 /*11*/].f_9 = 40f;
	Local_53[19 /*11*/].f_3 = { func_10(19) };
	Local_53[19 /*11*/].f_9 = 40f;
	Local_53[20 /*11*/].f_3 = { func_10(20) };
	Local_53[20 /*11*/].f_9 = 40f;
	Local_53[21 /*11*/].f_3 = { func_10(21) };
	Local_53[21 /*11*/].f_9 = 40f;
	Local_53[22 /*11*/].f_3 = { func_10(22) };
	Local_53[22 /*11*/].f_9 = 40f;
	Local_53[23 /*11*/].f_3 = { func_10(23) };
	Local_53[23 /*11*/].f_9 = 40f;
	Local_53[24 /*11*/].f_3 = { func_10(24) };
	Local_53[24 /*11*/].f_9 = 40f;
	Local_53[25 /*11*/].f_3 = { func_10(25) };
	Local_53[25 /*11*/].f_9 = 198f;
	Local_53[26 /*11*/].f_3 = { func_10(26) };
	Local_53[26 /*11*/].f_9 = 198f;
	Local_53[27 /*11*/].f_3 = { func_10(27) };
	Local_53[27 /*11*/].f_9 = 198f;
	Local_53[28 /*11*/].f_3 = { func_10(28) };
	Local_53[28 /*11*/].f_9 = 198f;
	Local_53[29 /*11*/].f_3 = { func_10(29) };
	Local_53[29 /*11*/].f_9 = -109.43f;
	func_123(&Local_53);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_393[iVar0] = -1;
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x4AE8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

bool func_124(int iParam0)//Position - 0x4B0D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_125(bool bParam0)//Position - 0x4B2B
{
	if (bParam0)
	{
		Global_113969.f_14054.f_89 = 1;
	}
	else
	{
		Global_113969.f_14054.f_89 = 0;
	}
}

int func_126(int iParam0)//Position - 0x4B4F
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_127()//Position - 0x4BA6
{
	int iVar0;
	
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_53.f_0)
	{
		func_104(&(Local_53[iVar0 /*11*/].f_2));
		func_94(&(Local_53[iVar0 /*11*/].f_1));
		if (iLocal_393[iVar0] >= 0 && iLocal_393[iVar0] < 8)
		{
			GRAPHICS::PROCGRASS_DISABLE_CULLSPHERE(iLocal_393[iVar0]);
		}
		iVar0++;
	}
	if (func_129(&(Local_40.f_1)))
	{
		func_128(13);
	}
	func_82();
	func_125(0);
	func_77(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_40.f_7);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_128(int iParam0)//Position - 0x4C34
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

bool func_129(var uParam0)//Position - 0x4C8B
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

