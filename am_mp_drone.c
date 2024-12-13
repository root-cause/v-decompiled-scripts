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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
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
	struct<3> Local_106[32];
	var uLocal_203 = 0;
	struct<354> Local_204 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_565(ScriptParam_0);
	}
	else
	{
		func_533(0);
	}
	while (true)
	{
		func_532();
		if (func_524())
		{
			func_533(0);
		}
		if (func_519())
		{
			func_533(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xD2
{
}

void func_2()//Position - 0xDA
{
	if (!func_518(6))
	{
		func_517();
		func_516();
		func_515();
		func_511();
		func_510();
	}
	func_507();
	func_505();
	func_501();
	func_498();
	if (func_518(0))
	{
		func_446();
	}
	else if (func_518(1))
	{
		if (!func_445())
		{
			func_438();
			func_420();
		}
		else
		{
			func_419(1);
			func_418(7);
		}
	}
	else if (func_518(2))
	{
		func_411();
	}
	else if (func_518(3))
	{
		func_403();
	}
	else if (func_518(4))
	{
		func_402();
		func_401();
		func_399();
		func_398();
		func_397(&Local_204);
		func_396(&Local_204);
		func_395();
		func_385();
		func_381();
		func_363();
		func_361();
		func_315();
		func_314();
		func_298();
		func_411();
		func_295();
		if (func_288(0))
		{
			func_287();
			return;
		}
		func_283();
		func_277();
		func_265(0);
		func_249();
		func_239();
		func_230();
		func_203();
		func_196();
		func_194();
		func_117();
		func_102();
		func_100();
		func_99();
	}
	else if (func_518(5))
	{
		func_42();
	}
	else if (func_518(7))
	{
		func_35();
	}
	if (!func_518(4) && !func_518(6))
	{
		func_27();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()//Position - 0x236
{
	Local_204.f_47++;
	if (Local_204.f_47 >= 32)
	{
		Local_204.f_47 = 0;
	}
}

void func_4()//Position - 0x256
{
	if (Local_204.f_47 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_106[Local_204.f_47 /*3*/].f_2))
		{
			if (Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_68[Local_204.f_47] != NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2))
			{
				Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_68[Local_204.f_47] = NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2);
			}
		}
	}
}

void func_5()//Position - 0x2BC
{
	int iVar0;
	
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_204.f_47);
	if (PLAYER::PLAYER_ID() != iVar0)
	{
		if (func_26(iVar0, 1, 1))
		{
			if (func_24(func_25()))
			{
				if (BitTest(Local_204.f_7, Local_204.f_47))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar0, "AM_MP_DRONE", 0))
					{
						MISC::CLEAR_BIT(&(Local_204.f_7), Local_204.f_47);
					}
				}
				if (func_15(iVar0, 0))
				{
					if (!BitTest(Local_204.f_7, Local_204.f_47) && func_10(iVar0))
					{
						func_7(iVar0, 1);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_204.f_162, iVar0, true);
						MISC::SET_BIT(&(Local_204.f_7), Local_204.f_47);
					}
				}
				else if ((SYSTEM::VDIST2(func_6(iVar0), Local_204.f_153) > 504100f && !func_518(1)) && !func_518(3))
				{
					if (BitTest(Local_204.f_7, Local_204.f_47))
					{
						func_7(iVar0, 0);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_204.f_162, iVar0, false);
						MISC::CLEAR_BIT(&(Local_204.f_7), Local_204.f_47);
						MISC::CLEAR_BIT(&(Local_204.f_8), Local_204.f_47);
					}
				}
			}
			else if (func_15(iVar0, 1) && func_10(iVar0))
			{
				if (!BitTest(Local_204.f_8, Local_204.f_47))
				{
					func_7(iVar0, 1);
					MISC::SET_BIT(&(Local_204.f_8), Local_204.f_47);
				}
			}
			else if (BitTest(Local_204.f_8, Local_204.f_47))
			{
				func_7(iVar0, 0);
				MISC::CLEAR_BIT(&(Local_204.f_8), Local_204.f_47);
				MISC::CLEAR_BIT(&(Local_204.f_7), Local_204.f_47);
			}
		}
	}
}

Vector3 func_6(int iParam0)//Position - 0x42C
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_7(int iParam0, int iParam1)//Position - 0x43F
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1982590640;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	iVar4 = func_8(iParam0);
	if (!iVar4 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

var func_8(int iParam0)//Position - 0x47B
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)//Position - 0x496
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

int func_10(int iParam0)//Position - 0x4B8
{
	if (func_14(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(iParam0))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_11(int iParam0)//Position - 0x4EA
{
	if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 11))
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x523
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 3);
	}
	return 0;
}

int func_13()//Position - 0x554
{
	return -1;
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x55D
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845221[iParam0 /*889*/].f_268.f_34, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, bool bParam1)//Position - 0x5C1
{
	struct<3> Var0;
	
	if (func_14(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(iParam0))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_22(2) && func_18(PLAYER::PLAYER_ID()) == 2)
	{
		return 0;
	}
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_17())
		{
			if (func_24(func_16()))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(func_16(), true)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Var0, Local_204.f_153) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0x66B
{
	if (Global_1845061 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1668136))
		{
			return Global_1668136;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1962860[Global_1845061]))
		{
			return Global_1962860[Global_1845061];
		}
	}
	return -1;
}

bool func_17()//Position - 0x6AF
{
	return BitTest(Global_1957675.f_2, 8);
}

int func_18(int iParam0)//Position - 0x6C0
{
	switch (func_21(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_19(iParam0);
		
		default:
	}
	return -1;
}

int func_19(int iParam0)//Position - 0x6FB
{
	if (func_20(iParam0, 0))
	{
		return Global_1887549[iParam0 /*611*/].f_10.f_182;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)//Position - 0x71E
{
	if (func_9(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x762
{
	if (func_9(iParam0))
	{
		if (func_20(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

var func_22(int iParam0)//Position - 0x78E
{
	return func_23(&(Global_2672939.f_194), iParam0);
}

var func_23(var uParam0, var uParam1)//Position - 0x7A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_24(int iParam0)//Position - 0x7C5
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

int func_25()//Position - 0x7E6
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1957675.f_23;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x800
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
				if (iVar0 == Global_2672939.f_3)
				{
					return Global_2672939.f_2;
				}
				else if (Global_2657991[iVar0 /*467*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0x860
{
	int iVar0;
	
	if (Local_204.f_159)
	{
		if (func_34(&(Local_204.f_252)))
		{
			if (func_33())
			{
				iVar0 = Global_262145.f_24850 /* Tunable: AW_DRONE_EMP_COOLDOWN_TIME */;
			}
			else if (func_32() || func_31())
			{
				iVar0 = 4000;
			}
			else
			{
				iVar0 = Global_262145.f_24235 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			}
			if (func_29(&(Local_204.f_252), iVar0, 0))
			{
				func_28(&(Local_204.f_252));
				Local_204.f_18 = 100;
				MISC::CLEAR_BIT(&(Local_204.f_5), 4);
				MISC::CLEAR_BIT(&(Local_204.f_5), 3);
				MISC::CLEAR_BIT(&(Local_204.f_5), 24);
				MISC::CLEAR_BIT(&Global_1957675, 29);
				Local_204.f_159 = 0;
			}
		}
	}
}

void func_28(var uParam0)//Position - 0x8F6
{
	uParam0->f_1 = 0;
}

int func_29(var uParam0, int iParam1, bool bParam2)//Position - 0x903
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_30(uParam0, bParam2, 0);
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

void func_30(var uParam0, bool bParam1, bool bParam2)//Position - 0x961
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

bool func_31()//Position - 0x9A6
{
	return BitTest(Global_1957675.f_2, 11);
}

var func_32()//Position - 0x9B7
{
	return BitTest(Global_1957675.f_2, 10);
}

bool func_33()//Position - 0x9C8
{
	return BitTest(Global_1957675.f_2, 2);
}

bool func_34(var uParam0)//Position - 0x9D8
{
	return uParam0->f_1;
}

void func_35()//Position - 0x9E4
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if (!func_36())
			{
				func_533(1);
			}
			else
			{
				func_533(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
	else if (!func_36())
	{
		func_533(1);
	}
	else
	{
		func_533(0);
	}
}

int func_36()//Position - 0xA3B
{
	if (func_41())
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39() && func_37(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0xA72
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_38(int iParam0)//Position - 0xAB9
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
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
	}
	return -1;
}

bool func_39()//Position - 0xFD5
{
	return BitTest(Global_1957675.f_2, 5);
}

bool func_40()//Position - 0xFE5
{
	return BitTest(Global_1957675, 24);
}

bool func_41()//Position - 0xFF4
{
	return BitTest(Global_1957675, 16);
}

void func_42()//Position - 0x1003
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	func_98();
	func_96();
	func_89(1);
	if (!BitTest(Local_204.f_5, 1))
	{
		if (!func_88())
		{
			if (!func_55() && !func_54())
			{
				if ((func_53() || func_33()) || func_52())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_204.f_162), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_36))
		{
			Local_204.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_36, "HUD_Static_Loop", Local_204.f_160, true);
		}
		if (!func_51())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_50());
			MISC::SET_BIT(&(Local_204.f_6), 0);
		}
		MISC::SET_BIT(&(Local_204.f_5), 1);
	}
	else if (!func_34(&(Local_204.f_248)))
	{
		func_30(&(Local_204.f_248), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_49())
		{
			iVar0 = 500;
		}
		else if (func_17() && func_48())
		{
			iVar0 = 150;
		}
		if (func_29(&(Local_204.f_248), iVar0, 0) || func_51())
		{
			if (Local_204.f_40 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_40))
				{
					Local_204.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_40, "HUD_Disconnect", Local_204.f_160, true);
				}
			}
			func_419(1);
			func_418(7);
			if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) != 0)
			{
				func_45(1);
				func_44(0);
				func_43(0);
			}
		}
	}
}

void func_43(bool bParam0)//Position - 0x11AD
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 10))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 10);
		}
	}
	else if (BitTest(Global_1957675.f_2, 10))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 10);
	}
}

void func_44(bool bParam0)//Position - 0x11F5
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 11))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 11);
		}
	}
	else if (BitTest(Global_1957675.f_2, 11))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 11);
	}
}

void func_45(bool bParam0)//Position - 0x123D
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_46())
			{
				MISC::SET_BIT(&Global_1957675, 0);
			}
		}
	}
	else if (func_46())
	{
		MISC::CLEAR_BIT(&Global_1957675, 0);
	}
}

bool func_46()//Position - 0x127F
{
	return BitTest(Global_1957675, 0);
}

bool func_47(bool bParam0)//Position - 0x128D
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

bool func_48()//Position - 0x129E
{
	return Global_2739811.f_384;
}

bool func_49()//Position - 0x12AD
{
	return BitTest(Global_1957675.f_2, 4);
}

char* func_50()//Position - 0x12BD
{
	if (func_17())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_51()//Position - 0x12D5
{
	return BitTest(Global_1957675, 20);
}

bool func_52()//Position - 0x12E4
{
	return BitTest(Global_1957675.f_2, 3);
}

bool func_53()//Position - 0x12F4
{
	return BitTest(Global_1957675, 11);
}

bool func_54()//Position - 0x1303
{
	return Global_2708115;
}

int func_55()//Position - 0x130F
{
	if ((func_87(PLAYER::PLAYER_ID(), 0) && Global_1582028 == 1) && func_56())
	{
		return 1;
	}
	return 0;
}

int func_56()//Position - 0x133C
{
	char* sVar0;
	
	if ((Global_1582028 != -1 || Global_1582034 != -1) || Global_1582037 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_79(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_57())
		{
			return 0;
		}
	}
	return 1;
}

int func_57()//Position - 0x151A
{
	int iVar0;
	
	if (func_76(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_75(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_38(func_74(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_73(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return 1;
			}
			if (!func_72(Global_4718592.f_128476))
			{
				if (func_76(iVar0))
				{
					if (func_71(iVar0))
					{
						return 1;
					}
					else if (func_12(PLAYER::PLAYER_ID()) || func_70())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_69(8))
	{
		if (Global_1574981)
		{
			return 1;
		}
	}
	else if (Global_1957707)
	{
		return 1;
	}
	if (func_68(PLAYER::PLAYER_ID()) && BitTest(Global_1575009, 12))
	{
		return 1;
	}
	if (func_67(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_66(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_38(func_74(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_65(iVar0))
			{
				return 1;
			}
			else if (func_64(iVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_70())
			{
				return 1;
			}
		}
	}
	if (func_87(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_63(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((func_12(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if ((func_62(iVar0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_61(iVar0))
			{
				return 1;
			}
			else if (func_60(iVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_70())
			{
				return 1;
			}
		}
	}
	if (func_59(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_13())
		{
			iVar0 = Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11;
			if (func_26(iVar0, 0, 1))
			{
				if (func_12(PLAYER::PLAYER_ID()) || func_70())
				{
					return 1;
				}
			}
		}
	}
	if (func_67(PLAYER::PLAYER_ID()) || func_68(PLAYER::PLAYER_ID()))
	{
		switch (Global_1582034)
		{
			case 1:
				if (Global_262145.f_22740 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_1 */)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22741 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_2 */)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22742 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_3 */)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1582032 == 1)
	{
		return 1;
	}
	if (func_58(3))
	{
		if (Global_1835508 == 186)
		{
			if (Global_1836724 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_58(int iParam0)//Position - 0x18B9
{
	return Global_262145.f_4707[iParam0] == Global_4718592.f_128476;
}

int func_59(int iParam0)//Position - 0x18D7
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_13())
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1937
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_7, 14);
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x195D
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_3, 4);
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1982
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_7, 18);
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x19A8
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657991[iParam0 /*467*/].f_324.f_11;
}

int func_64(int iParam0)//Position - 0x19CC
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_6, 16);
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x19F2
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324.f_2, 6);
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x1A17
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657991[iParam0 /*467*/].f_324.f_11;
}

int func_67(int iParam0)//Position - 0x1A3B
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_13())
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x1A9B
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_69(int iParam0)//Position - 0x1AE2
{
	return Global_4718592.f_187634 >= iParam0;
}

var func_70()//Position - 0x1AF7
{
	return BitTest(Global_1943917, 6);
}

int func_71(int iParam0)//Position - 0x1B05
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 6);
	}
	return 0;
}

bool func_72(int iParam0)//Position - 0x1B28
{
	return Global_262145.f_4698[4] /* Tunable: WVM_FLOW_ROOTCONTENT_ID_4 */ == iParam0;
}

int func_73(int iParam0)//Position - 0x1B3D
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x1B6B
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return Global_2657991[iParam0 /*467*/].f_324.f_18;
	}
	return -1;
}

int func_75(int iParam0)//Position - 0x1B9C
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657991[iParam0 /*467*/].f_324.f_11;
}

int func_76(int iParam0)//Position - 0x1BC0
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_13())
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x1C1F
{
	if (func_78(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x1C52
{
	if (func_24(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x1C72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("MP_F_Freemode_01"))
	{
		iVar1 = func_85(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_81(iVar0, iVar1, 6, 4);
			iVar3 = func_80(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)//Position - 0x1D90
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1EFD
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_84(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_82(iParam0, func_83(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79472.f_26[iParam2] && iParam1 == Global_79472[iParam2]) && Global_79472.f_13[iParam2] != 0)
		{
			return Global_79472.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_83(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_79472.f_13[iParam2] = Var19.f_1;
		Global_79472[iParam2] = iParam1;
		Global_79472.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_82(int iParam0, int iParam1)//Position - 0x2017
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_83(int iParam0)//Position - 0x23BE
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x246E
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
			break;
		
		case joaat("Player_One"):
			return 175;
			break;
		
		case joaat("Player_Two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
			break;
		
		case joaat("MP_F_Freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_85(int iParam0, int iParam1)//Position - 0x24CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_83(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_86(iParam0, iVar1, iVar2, iParam1);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x252F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_83(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_87(int iParam0, bool bParam1)//Position - 0x2586
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_13())
			{
				return func_38(Global_2657991[iParam0 /*467*/].f_324.f_8) == 12;
			}
		}
	}
	return 0;
}

bool func_88()//Position - 0x2614
{
	return BitTest(Global_1957675, 28);
}

void func_89(int iParam0)//Position - 0x2623
{
	if (func_95())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_94(0))
		{
			func_90(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_90(int iParam0)//Position - 0x2656
{
	if (func_95())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_93())
		{
			func_92(1, 1);
		}
		else
		{
			func_92(0, 0);
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
	if (!func_91())
	{
		Global_21066.f_1 = 3;
	}
}

int func_91()//Position - 0x26E0
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_92(bool bParam0, bool bParam1)//Position - 0x2707
{
	if (bParam0)
	{
		if (func_94(0))
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

bool func_93()//Position - 0x277B
{
	return BitTest(Global_1957675, 5);
}

int func_94(int iParam0)//Position - 0x2789
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

bool func_95()//Position - 0x27E0
{
	return BitTest(Global_1957675, 19);
}

void func_96()//Position - 0x27EF
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_97();
}

void func_97()//Position - 0x27FF
{
	Global_23831.f_134 = 1;
}

void func_98()//Position - 0x280D
{
	Global_1574847 = 1;
}

void func_99()//Position - 0x281A
{
	if (func_39())
	{
		if (func_40())
		{
			if (func_24(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
			}
		}
	}
}

void func_100()//Position - 0x2846
{
	char* sVar0;
	
	if (!func_101())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_177[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_49())
				{
					Local_204.f_177[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_204.f_162), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_204.f_177[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_204.f_162), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_101()//Position - 0x28EB
{
	if (func_49())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

void func_102()//Position - 0x290A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_204.f_164))
		{
			STREAMING::REQUEST_MODEL(func_116());
			if (STREAMING::HAS_MODEL_LOADED(func_116()))
			{
				if (!BitTest(Local_204.f_5, 6))
				{
					if (func_110(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_204.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_204.f_164 = PED::CREATE_PED(26, func_116(), Local_204.f_153, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_204.f_162)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_204.f_164, true, false);
					ENTITY::SET_ENTITY_VISIBLE(Local_204.f_164, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_204.f_164, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_204.f_164, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_116());
					PED::SET_PED_CONFIG_FLAG(Local_204.f_164, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_204.f_164, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_204.f_164, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_204.f_164, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204.f_164, NETWORK::NET_TO_OBJ(Local_204.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_204.f_164, false, false);
					Global_1957675.f_26 = Local_204.f_164;
				}
			}
		}
		else if (func_24(Local_204.f_164))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_204.f_164))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_204.f_164, false, false);
			}
			if (!func_108(PLAYER::PLAYER_ID()) && !func_105(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_104(Global_1837331);
				}
			}
			else if ((Global_1957675.f_5 == -1 || Global_1957675.f_5 == 0) || Global_1957675.f_5 == Global_1837320)
			{
				func_104(Global_1837331);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_204.f_164) != func_103())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_204.f_164, func_103());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_204.f_164))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204.f_164, NETWORK::NET_TO_OBJ(Local_204.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_204.f_164, false, false);
			}
		}
	}
}

int func_103()//Position - 0x2B06
{
	if (Global_1957675.f_5 != -1 && Global_1957675.f_5 != 0)
	{
		return Global_1957675.f_5;
	}
	return Global_1837331;
}

void func_104(int iParam0)//Position - 0x2B33
{
	if (Global_1957675.f_5 != iParam0)
	{
		Global_1957675.f_5 = iParam0;
	}
}

int func_105(int iParam0)//Position - 0x2B4E
{
	if (func_107(iParam0) == 236 || func_107(iParam0) == 150)
	{
		return func_106(iParam0);
	}
	return 0;
}

int func_106(var uParam0)//Position - 0x2B7B
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 7);
	}
	return 0;
}

int func_107(var uParam0)//Position - 0x2B9E
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1887549[iVar0 /*611*/];
	}
	return -1;
}

bool func_108(int iParam0)//Position - 0x2BBD
{
	return func_109(iParam0, 20);
}

var func_109(int iParam0, int iParam1)//Position - 0x2BCD
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

bool func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x2BE5
{
	return func_111(2, iParam0, 1, bParam1, bParam2);
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2BF9
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1686501, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_115(iParam0) - func_114(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_113(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_114(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_115(iParam0) - func_114(iParam0, 1));
		}
		if (!bParam4 && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 3)
		{
			iVar1 = (iVar1 - func_112(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x2CBF
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

int func_113(int iParam0)//Position - 0x2CF9
{
	switch (iParam0)
	{
		case 0:
			return Global_1686501.f_1;
			break;
		
		case 1:
			return Global_1686501.f_2;
			break;
		
		case 2:
			return Global_1686501.f_3;
			break;
	}
	return 0;
}

int func_114(int iParam0, bool bParam1)//Position - 0x2D3F
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x2DDC
{
	switch (iParam0)
	{
		case 0:
			return Global_1686509;
			break;
		
		case 1:
			return Global_1686510;
			break;
		
		case 2:
			return Global_1686511;
			break;
	}
	return 0;
}

int func_116()//Position - 0x2E1C
{
	return joaat("G_M_M_ChiGoon_01");
}

void func_117()//Position - 0x2E29
{
	if (func_193())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_RENDERING(Local_204.f_172))
		{
			if (!func_101())
			{
				func_183();
				func_149();
			}
			else
			{
				func_130();
				func_120();
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			func_119(1);
			func_118(2);
		}
	}
}

void func_118(int iParam0)//Position - 0x2E9A
{
	Global_1577950 = iParam0;
}

void func_119(int iParam0)//Position - 0x2EA8
{
	Global_1675211.f_1163 = iParam0;
}

void func_120()//Position - 0x2EB9
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_204.f_173))
	{
		if (func_17())
		{
			Local_204.f_173 = func_129();
		}
		else
		{
			Local_204.f_173 = func_128();
		}
		return;
	}
	iVar0 = func_25();
	if (iVar0 < 0 || !func_24(iVar0))
	{
		return;
	}
	if (func_17())
	{
		func_124();
	}
	func_123(Local_204.f_173, 0);
	func_122(Local_204.f_173, 3, 3, 3);
	func_121(Local_204.f_173, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_204.f_173, 255, 255, 255, 0, 0);
}

void func_121(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2F51
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F87
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_123(int iParam0, bool bParam1)//Position - 0x2FB0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124()//Position - 0x2FCD
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_17())
	{
		iVar0 = 10;
	}
	fVar1 = Local_204.f_123;
	if (fVar1 >= (func_127() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			Local_204.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_39, "Out_Of_Bounds_Alarm_Loop", Local_204.f_160, true);
		}
		if (fVar1 >= (func_127() - IntToFloat((50 * iVar0))) && fVar1 < (func_127() - IntToFloat((45 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.1f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((45 * iVar0))) && fVar1 < (func_127() - IntToFloat((40 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.2f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((40 * iVar0))) && fVar1 < (func_127() - IntToFloat((35 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.3f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((35 * iVar0))) && fVar1 < (func_127() - IntToFloat((30 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.4f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((30 * iVar0))) && fVar1 < (func_127() - IntToFloat((25 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.5f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((25 * iVar0))) && fVar1 < (func_127() - IntToFloat((20 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.6f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((20 * iVar0))) && fVar1 < (func_127() - IntToFloat((15 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.7f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((15 * iVar0))) && fVar1 < (func_127() - IntToFloat((10 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.8f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((10 * iVar0))) && fVar1 < (func_127() - IntToFloat((5 * iVar0))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.9f);
		}
		else if (fVar1 >= (func_127() - IntToFloat((5 * iVar0))) && fVar1 < func_127())
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(1f);
		}
	}
	else
	{
		func_126("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			AUDIO::STOP_SOUND(Local_204.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_39);
			Local_204.f_39 = -1;
		}
	}
}

void func_125(float fParam0)//Position - 0x3275
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_126(char* sParam0, bool bParam1)//Position - 0x3294
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_127()//Position - 0x32B1
{
	if (Global_1957675.f_11 == 0f)
	{
		return Global_262145.f_24243 /* Tunable: BB_TERRORBYTE_DRONE_DISTANCE_LIMIT */;
	}
	return Global_1957675.f_11;
}

int func_128()//Position - 0x32D7
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_180500)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

int func_129()//Position - 0x3330
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

void func_130()//Position - 0x3344
{
	if (func_17())
	{
		if (!func_148())
		{
			return;
		}
	}
	if (!BitTest(Local_204.f_5, 16))
	{
		if (func_146(0, -1, 0))
		{
			func_145(-1);
			func_144(20, "DRONE_SPACE" /* GXT: / */, -1);
			func_144(21, "DRONE_POSITION" /* GXT: Move */, -1);
			if (func_49())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					func_143(208, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					func_143(207, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
				else
				{
					func_143(209, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					func_143(210, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
			}
			func_143(75, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_204.f_5), 16);
		}
	}
	else
	{
		func_131(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_204.f_5, 17))
		{
			MISC::SET_BIT(&(Local_204.f_5), 17);
			MISC::CLEAR_BIT(&(Local_204.f_5), 16);
		}
	}
	else if (BitTest(Local_204.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_204.f_5), 17);
		MISC::CLEAR_BIT(&(Local_204.f_5), 16);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x343F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_142(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_139(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_134(PLAYER::PLAYER_ID(), 0))
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
					func_133(&(Global_23970.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23970.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_133(&(Global_23970.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23970.f_5610[iVar1] == -1)
					{
						func_132(&(Global_23970.f_5553[iVar1 /*4*/]));
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
				func_133(&Global_4542374);
				if (Global_4542374.f_20 == -1)
				{
					func_132(&(Global_4542374.f_16));
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

void func_132(char* sParam0)//Position - 0x3944
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_133(char* sParam0)//Position - 0x3956
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_134(int iParam0, int iParam1)//Position - 0x3964
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_135(-1, 0) == 8;
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

int func_135(int iParam0, bool bParam1)//Position - 0x39BD
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_136();
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

int func_136()//Position - 0x39FE
{
	return Global_1574926;
}

int func_137()//Position - 0x3A0A
{
	struct<3> Var0;
	
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	if (func_138())
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

int func_138()//Position - 0x3A78
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_139(bool bParam0, bool bParam1)//Position - 0x3A92
{
	if (Global_2672939.f_1761.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_141(8, -1) && func_140() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79800) || Global_23970.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101740.f_1490)
	{
		return 0;
	}
	return 1;
}

int func_140()//Position - 0x3B2F
{
	return Global_1575012;
}

var func_141(int iParam0, int iParam1)//Position - 0x3B3B
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

int func_142(var uParam0, bool bParam1, int iParam2)//Position - 0x3B73
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
			*uParam0 = iVar17;
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
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_143(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3C10
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
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23970.f_5655), Global_23970.f_5326);
	}
	StringCopy(&(Global_23970.f_5328[Global_23970.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23970.f_5553[Global_23970.f_5326 /*4*/]), sParam1, 16);
	Global_23970.f_5610[Global_23970.f_5326] = iParam2;
	Global_23970.f_5625[Global_23970.f_5326] = iParam0;
	Global_23970.f_5640[Global_23970.f_5326] = 32;
	Global_23970.f_5326++;
}

void func_144(int iParam0, char* sParam1, int iParam2)//Position - 0x3CC5
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
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
	Global_23970.f_5625[Global_23970.f_5326] = 365;
	Global_23970.f_5640[Global_23970.f_5326] = iParam0;
	Global_23970.f_5326++;
}

void func_145(int iParam0)//Position - 0x3D75
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
		if (!func_142(&iVar1, 0, iParam0))
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

bool func_146(char* sParam0, int iParam1, bool bParam2)//Position - 0x3E30
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_142(&iVar0, 1, iParam1))
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
	bVar2 = func_147(&(Global_23970.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_147(var uParam0)//Position - 0x3F3E
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

bool func_148()//Position - 0x3FE0
{
	return BitTest(Local_204.f_6, 6);
}

void func_149()//Position - 0x3FEE
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_204.f_173))
	{
		Local_204.f_173 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	if ((func_52() || func_95()) || func_181(0))
	{
		func_126("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_126("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_52() || func_95()) || func_33())
	{
		func_126("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_126("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_31())
	{
		func_126("SET_MG_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_126("SET_MG_METER_IS_VISIBLE", 0);
	}
	if (func_33())
	{
		func_126("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_126("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_52() && !func_95())
	{
		func_126("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_126("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_126("SET_HEADING_METER_IS_VISIBLE", 1);
	func_126("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_52() && !func_95()) && !func_33()) && func_180())
	{
		func_126("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_126("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_179())
	{
		func_126("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_126("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_126("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_126("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_204.f_123 >= (func_127() - 50f) || Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
		{
			func_126("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_178();
			if (BitTest(Local_204.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_204.f_5), 13);
			}
		}
		else
		{
			func_174(func_175());
			if (!BitTest(Local_204.f_5, 13))
			{
				func_126("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_204.f_5), 13);
			}
		}
	}
	else
	{
		func_126("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_178();
	}
	func_126("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_52() && !func_95())
	{
		if (!func_33())
		{
			func_173(Local_204.f_18);
		}
		else
		{
			func_172(Local_204.f_18);
		}
		if (!func_181(0))
		{
			func_171(Local_204.f_19);
		}
	}
	if (func_179())
	{
		func_170(Local_204.f_24);
	}
	if (func_169() > 0f)
	{
		func_167();
	}
	if (func_180())
	{
		func_166(Local_204.f_20);
	}
	func_165(0, "DRONE_ZOOM_1" /* GXT: x1 */);
	func_165(1, "");
	func_165(2, "DRONE_ZOOM_2" /* GXT: x2 */);
	func_165(3, "");
	func_165(4, "DRONE_ZOOM_3" /* GXT: x4 */);
	func_163();
	func_161();
	func_159();
	func_158(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_204.f_162)) + 180f)));
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		func_157(func_175());
	}
	if (func_156())
	{
		func_151();
	}
	else if (func_33() || func_52())
	{
		func_150();
	}
	else if (func_40())
	{
		func_124();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_204.f_173, 255, 255, 255, 0, 0);
}

void func_150()//Position - 0x42F9
{
	if (Local_204.f_153.f_2 >= (func_127() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			Local_204.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_39, "Out_Of_Bounds_Alarm_Loop", Local_204.f_160, true);
		}
		if (Local_204.f_153.f_2 >= (func_127() - 20f) && Local_204.f_153.f_2 < (func_127() - 16f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.1f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 16f) && Local_204.f_153.f_2 < (func_127() - 13f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.2f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 13f) && Local_204.f_153.f_2 < (func_127() - 10f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.3f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 10f) && Local_204.f_153.f_2 < (func_127() - 8f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.4f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 8f) && Local_204.f_153.f_2 < (func_127() - 6f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.5f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 6f) && Local_204.f_153.f_2 < (func_127() - 4f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.6f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 4f) && Local_204.f_153.f_2 < (func_127() - 3f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.7f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 3f) && Local_204.f_153.f_2 < (func_127() - 2f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.8f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 2f) && Local_204.f_153.f_2 < (func_127() - 1f))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.9f);
		}
		else if (Local_204.f_153.f_2 >= (func_127() - 1f) && Local_204.f_153.f_2 < func_127())
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(1f);
		}
	}
	else
	{
		func_126("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			AUDIO::STOP_SOUND(Local_204.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_39);
			Local_204.f_39 = -1;
		}
	}
}

void func_151()//Position - 0x45A7
{
	if (Local_204.f_123 >= (func_127() - 50f) || Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
	{
		func_152();
		if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			Local_204.f_39 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_39, "Out_Of_Bounds_Alarm_Loop", Local_204.f_160, true);
		}
		if ((Local_204.f_123 >= (func_127() - 50f) && Local_204.f_123 < (func_127() - 45f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.1f);
		}
		else if ((Local_204.f_123 >= (func_127() - 45f) && Local_204.f_123 < (func_127() - 40f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.2f);
		}
		else if ((Local_204.f_123 >= (func_127() - 40f) && Local_204.f_123 < (func_127() - 35f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.3f);
		}
		else if ((Local_204.f_123 >= (func_127() - 35f) && Local_204.f_123 < (func_127() - 30f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.4f);
		}
		else if ((Local_204.f_123 >= (func_127() - 30f) && Local_204.f_123 < (func_127() - 25f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.5f);
		}
		else if ((Local_204.f_123 >= (func_127() - 25f) && Local_204.f_123 < (func_127() - 20f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.6f);
		}
		else if ((Local_204.f_123 >= (func_127() - 20f) && Local_204.f_123 < (func_127() - 15f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.7f);
		}
		else if ((Local_204.f_123 >= (func_127() - 15f) && Local_204.f_123 < (func_127() - 10f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.8f);
		}
		else if ((Local_204.f_123 >= (func_127() - 10f) && Local_204.f_123 < (func_127() - 5f)) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10)) && Local_204.f_124 < IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5))))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(0.9f);
		}
		else if ((Local_204.f_123 >= (func_127() - 5f) && Local_204.f_123 < func_127()) || (Local_204.f_124 >= IntToFloat((Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5)) && Local_204.f_124 < IntToFloat(Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */)))
		{
			func_126("SET_WARNING_IS_VISIBLE", 1);
			func_125(1f);
		}
	}
	else
	{
		func_126("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			AUDIO::STOP_SOUND(Local_204.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_39);
			Local_204.f_39 = -1;
		}
	}
}

void func_152()//Position - 0x4A0E
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !BitTest(Global_1943917.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_155(22045, -1);
			if (iVar0 < 4)
			{
				func_154("HACK_DRONE_DIS" /* GXT: The Drone is losing connection. It must remain in proximity to the Terrorbyte in order to receive a signal. If you fly it too far the Drone will be deactivated. */, -1);
				iVar0++;
				func_153(22045, iVar0, -1);
				MISC::SET_BIT(&(Global_1943917.f_3), 15);
			}
		}
	}
}

void func_153(int iParam0, int iParam1, int iParam2)//Position - 0x4A69
{
	if (iParam2 == -1)
	{
		iParam2 = func_136();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_154(char* sParam0, int iParam1)//Position - 0x4A91
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_155(int iParam0, int iParam1)//Position - 0x4AA8
{
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_156()//Position - 0x4AC4
{
	return BitTest(Global_1957675.f_2, 1);
}

void func_157(float fParam0)//Position - 0x4AD4
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_158(int iParam0)//Position - 0x4AF3
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_159()//Position - 0x4B12
{
	if (func_33())
	{
		if (BitTest(Local_204.f_5, 11) && !Local_204.f_159)
		{
			func_160(1);
		}
		else
		{
			func_160(0);
		}
	}
	else if ((BitTest(Local_204.f_5, 11) || BitTest(Local_204.f_5, 23)) || BitTest(Local_204.f_6, 7))
	{
		func_160(1);
	}
	else
	{
		func_160(0);
	}
}

void func_160(bool bParam0)//Position - 0x4B75
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_161()//Position - 0x4B94
{
	if (BitTest(Local_204.f_5, 4) || (BitTest(Local_204.f_5, 3) && func_33()))
	{
		if (Local_204.f_18 == 100)
		{
			func_162(1);
		}
		else if (Local_204.f_18 != 0 && Local_204.f_18 != 100)
		{
			func_162(2);
		}
	}
	else
	{
		func_162(0);
	}
}

void func_162(int iParam0)//Position - 0x4BED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_163()//Position - 0x4C0C
{
	switch (Local_204.f_27)
	{
		case 0:
			func_164(0);
			break;
		
		case 1:
			func_164(2);
			break;
		
		case 2:
			func_164(4);
			break;
	}
}

void func_164(int iParam0)//Position - 0x4C47
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_165(int iParam0, char* sParam1)//Position - 0x4C66
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_132(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_166(int iParam0)//Position - 0x4C8B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_167()//Position - 0x4CAA
{
	int iVar0;
	
	if (func_168() <= 0f)
	{
		iVar0 = Local_204.f_25;
	}
	else
	{
		iVar0 = SYSTEM::ROUND(((Global_1957675.f_8 / Global_1957675.f_9) * 100f));
	}
	iVar0 = (100 - iVar0);
	if (iVar0 <= 0)
	{
		iVar0 = 100;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_MG_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_168()//Position - 0x4D05
{
	return Global_1957675.f_8;
}

float func_169()//Position - 0x4D13
{
	return Global_1957675.f_9;
}

void func_170(int iParam0)//Position - 0x4D21
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_171(int iParam0)//Position - 0x4D40
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_172(int iParam0)//Position - 0x4D5F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_173(int iParam0)//Position - 0x4D7E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_204.f_173, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_174(float fParam0)//Position - 0x4D9D
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_46))
	{
		Local_204.f_46 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_46, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_204.f_46, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_204.f_46, "signalstrength", fParam0);
	}
}

float func_175()//Position - 0x4DE8
{
	float fVar0;
	
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
		{
			fVar0 = func_176(NETWORK::NET_TO_OBJ(Local_204.f_162), func_177(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_176(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x4F8B
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

Vector3 func_177()//Position - 0x4FC5
{
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1963017;
	}
	return 0f, 0f, 0f;
}

void func_178()//Position - 0x4FE9
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_46))
	{
		AUDIO::STOP_SOUND(Local_204.f_46);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_46);
		Local_204.f_46 = -1;
	}
}

bool func_179()//Position - 0x5012
{
	return BitTest(Global_1957675.f_2, 6);
}

int func_180()//Position - 0x5022
{
	if ((func_179() || func_32()) || func_31())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1957675.f_27))
		{
			return 0;
		}
	}
	return 1;
}

int func_181(bool bParam0)//Position - 0x5057
{
	if (func_156())
	{
		if (bParam0)
		{
			if (BitTest(Local_204.f_5, 4))
			{
				return 1;
			}
		}
	}
	if ((func_179() || func_32()) || func_31())
	{
		return 1;
	}
	if (func_182())
	{
		return 1;
	}
	return 0;
}

bool func_182()//Position - 0x50A3
{
	return BitTest(Global_1957675, 27);
}

void func_183()//Position - 0x50B2
{
	int iVar0;
	int iVar1;
	
	if (func_95())
	{
		return;
	}
	if (!BitTest(Local_204.f_5, 16))
	{
		if (func_146(0, -1, 0))
		{
			func_145(-1);
			func_144(21, "DRONE_MOVE" /* GXT: Turn */, -1);
			func_144(20, "DRONE_POSITION" /* GXT: Move */, -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				func_143(210, "CELL_284" /* GXT: Zoom */, -1, 0);
				if ((!func_52() && !func_33()) && func_180())
				{
					func_143(209, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				func_143(208, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				func_143(207, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			else
			{
				func_144(29, "CELL_284" /* GXT: Zoom */, -1);
				if ((!func_52() && !func_33()) && func_180())
				{
					func_143(203, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				func_143(209, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				func_143(210, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			if (!func_52())
			{
				iVar0 = 206;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar0 = 237;
				}
				if (func_33())
				{
					func_143(iVar0, "MOVE_DRONE_EM" /* GXT: EMP */, -1, 0);
				}
				else
				{
					func_143(iVar0, "MOVE_DRONE_ST" /* GXT: Shock */, -1, 0);
				}
				iVar1 = 205;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar1 = 238;
				}
				if (func_169() > 0f)
				{
					func_143(iVar1, "MFH_DRONE_AM0", -1, 0);
				}
				else if (!func_181(0))
				{
					func_143(iVar1, "MOVE_DRONE_EX" /* GXT: Detonate */, -1, 0);
				}
				else if (func_190())
				{
					func_143(iVar1, "MOVE_DRONE_TRG" /* GXT: Tranquilizer Gun */, -1, 0);
				}
			}
			if (!func_33())
			{
				if ((((((func_189(0) || func_189(1)) || func_188()) || RECORDING::IS_REPLAY_RECORDING()) || func_184(PLAYER::PLAYER_ID())) || func_32()) || func_31())
				{
				}
				else
				{
					func_143(201, "DRONE_PHOTO" /* GXT: Photo Mode */, -1, 0);
				}
			}
			func_143(80, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_204.f_5), 16);
		}
	}
	else
	{
		func_131(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_204.f_5, 17))
		{
			MISC::SET_BIT(&(Local_204.f_5), 17);
			MISC::CLEAR_BIT(&(Local_204.f_5), 16);
		}
	}
	else if (BitTest(Local_204.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_204.f_5), 17);
		MISC::CLEAR_BIT(&(Local_204.f_5), 16);
	}
}

int func_184(int iParam0)//Position - 0x52F0
{
	if (func_187(func_21(iParam0)))
	{
		if (func_186() != func_13())
		{
			if (func_185() == func_186())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_185()//Position - 0x5320
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_35;
}

int func_186()//Position - 0x5337
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

int func_187(int iParam0)//Position - 0x534C
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

int func_188()//Position - 0x536C
{
	return Global_23831.f_135;
	return 0;
}

bool func_189(bool bParam0)//Position - 0x537D
{
	if (bParam0)
	{
		return (Global_23831.f_4 && Global_23831.f_104 == 4);
	}
	return Global_23831.f_4;
}

int func_190()//Position - 0x53A6
{
	if (func_192())
	{
		return 0;
	}
	if (func_191() <= 0)
	{
		return 0;
	}
	if (func_179())
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0x53D1
{
	return Global_1957675.f_7;
}

int func_192()//Position - 0x53DF
{
	if (func_169() > 0f)
	{
		return 1;
	}
	return 0;
}

bool func_193()//Position - 0x53F5
{
	return BitTest(Global_1957675, 7);
}

void func_194()//Position - 0x5403
{
	int iVar0;
	
	if (!func_195())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if ((CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_RENDERING(Local_204.f_172)) && !func_95())
			{
				iVar0 = 80;
				if (func_101())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					if (!BitTest(Local_204.f_5, 7))
					{
						MISC::SET_BIT(&(Local_204.f_5), 7);
					}
				}
			}
		}
	}
}

int func_195()//Position - 0x549A
{
	if (func_17())
	{
		if (!func_148())
		{
			return 0;
		}
	}
	return 1;
}

void func_196()//Position - 0x54B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_202() || !func_184(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_201(1);
	func_200(iVar0);
	iVar1 = func_201(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_204.f_144, 2f, iVar1, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_204.f_165)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!BitTest(Local_204.f_5, 26))
			{
				func_199(func_186(), 1, 1, 0);
				MISC::SET_BIT(&(Local_204.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_204.f_165))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_204.f_165, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_204.f_165) == 999)
		{
			if (!BitTest(Local_204.f_5, 26))
			{
				func_199(func_186(), 1, 1, 0);
				MISC::SET_BIT(&(Local_204.f_5), 26);
			}
		}
	}
	if (BitTest(Local_204.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_204.f_144, 2f, iVar0, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204.f_165))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_204.f_165, false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
			}
			func_197(1);
		}
	}
}

void func_197(bool bParam0)//Position - 0x55FE
{
	if (bParam0)
	{
		if (!func_198())
		{
			MISC::SET_BIT(&Global_1957675, 1);
		}
	}
	else if (func_198())
	{
		MISC::CLEAR_BIT(&Global_1957675, 1);
	}
}

bool func_198()//Position - 0x562F
{
	return BitTest(Global_1957675, 1);
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x563D
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = -171282281;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar6 = 0;
	if (iParam0 != func_13())
	{
		MISC::SET_BIT(&iVar6, iParam0);
	}
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

bool func_200(int iParam0)//Position - 0x5691
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_201(bool bParam0)//Position - 0x56AF
{
	if (!bParam0)
	{
		if (Global_1957675.f_22 != 0)
		{
			return Global_1957675.f_22;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

var func_202()//Position - 0x56E7
{
	return BitTest(Global_1957675, 14);
}

void func_203()//Position - 0x56F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_204.f_5, 1) || func_219()) || func_218())
	{
		Local_204.f_18 = 0;
		Local_204.f_19 = 0;
		if (!BitTest(Local_204.f_5, 10))
		{
			MISC::SET_BIT(&(Local_204.f_5), 10);
		}
		return;
	}
	if (!func_218())
	{
		if (BitTest(Local_204.f_5, 10))
		{
			Local_204.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_204.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if ((CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_RENDERING(Local_204.f_172)) && !BitTest(Local_204.f_5, 2))
			{
				if ((!BitTest(Local_204.f_5, 4) && !BitTest(Local_204.f_5, 3)) && !Local_204.f_159)
				{
					iVar0 = 206;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0)) && !BitTest(Local_204.f_5, 5)) && !BitTest(Local_204.f_5, 24)) && !func_95())
					{
						MISC::SET_BIT(&Global_1957675, 29);
						MISC::SET_BIT(&(Local_204.f_5), 24);
						if (BitTest(Local_204.f_5, 11) || BitTest(Local_204.f_5, 23))
						{
							Local_204.f_29++;
						}
					}
					if (func_33() && !func_182())
					{
						func_215();
					}
					else
					{
						func_214();
					}
				}
				else if (func_34(&(Local_204.f_252)))
				{
					if (func_182())
					{
						iVar1 = 3000;
					}
					else if (func_33())
					{
						iVar1 = Global_262145.f_24850 /* Tunable: AW_DRONE_EMP_COOLDOWN_TIME */;
					}
					else if (func_32() || func_31())
					{
						iVar1 = 4000;
					}
					else
					{
						iVar1 = Global_262145.f_24235 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
					}
					if (func_29(&(Local_204.f_252), iVar1, 0))
					{
						func_28(&(Local_204.f_252));
						Local_204.f_18 = 100;
						if (Local_204.f_34 != -1)
						{
							AUDIO::STOP_SOUND(Local_204.f_34);
							AUDIO::RELEASE_SOUND_ID(Local_204.f_34);
							Local_204.f_34 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_37))
						{
							AUDIO::STOP_SOUND(Local_204.f_37);
							AUDIO::RELEASE_SOUND_ID(Local_204.f_37);
							Local_204.f_37 = -1;
						}
						MISC::CLEAR_BIT(&(Local_204.f_5), 4);
						MISC::CLEAR_BIT(&(Local_204.f_5), 3);
						MISC::CLEAR_BIT(&(Local_204.f_5), 24);
						MISC::CLEAR_BIT(&Global_1957675, 29);
						Local_204.f_159 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_252)));
						Local_204.f_18 = (iVar2 / iVar1);
						if (!func_33())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_34))
							{
								Local_204.f_34 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_34, "HUD_Shock_Recharge", Local_204.f_160, true);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_204.f_34, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_212();
				func_209();
				func_204();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

void func_204()//Position - 0x59B7
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	
	if (!func_192())
	{
		return;
	}
	if (func_168() <= 0f)
	{
		func_207();
		return;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ie_vv");
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ie_vv"))
	{
		return;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar0 = 238;
	}
	else
	{
		iVar0 = 205;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		bVar1 = true;
		Global_1957675.f_8 = (Global_1957675.f_8 - MISC::GET_FRAME_TIME());
	}
	else
	{
		Global_1957675.f_8 = (Global_1957675.f_8 + (MISC::GET_FRAME_TIME() / 2f));
		if (Global_1957675.f_8 >= func_169())
		{
			Global_1957675.f_8 = func_169();
		}
	}
	if (!BitTest(Local_204.f_6, 9))
	{
		if (!BitTest(Local_204.f_6, 8))
		{
			if (bVar1)
			{
				MISC::SET_BIT(&(Local_204.f_6), 8);
			}
		}
		else
		{
			Var2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			Var5 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			Var8 = { (-SYSTEM::SIN(Var5.f_2) * SYSTEM::COS(Var5.f_0)), (SYSTEM::COS(Var5.f_2) * SYSTEM::COS(Var5.f_0)), SYSTEM::SIN(Var5.f_0) };
			Var11 = { 10f, 10f, 10f };
			Var14 = { Var2 + Var8 * Var11 };
			iVar17 = 30;
			if (BitTest(Local_204.f_5, 23))
			{
				iVar17 = Global_262145.f_24237 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
			}
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ie_vv");
			GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_ie_vv_muzzle_flash", NETWORK::NET_TO_OBJ(Local_204.f_162), 0f, -0.5f, -0.3f, 180f, 0f, 0f, 1.4f, false, false, false);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_204.f_153 + Vector(0f, 0f, 0f), Var14, iVar17, true, joaat("WEAPON_ASSAULTSMG"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_204.f_162), true, false, 0, true, 0, 1, 1);
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_204.f_134)));
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Gun_Fire", Local_204.f_153, Local_204.f_160, true, 0, false);
			MISC::SET_BIT(&(Local_204.f_6), 9);
			func_30(&(Local_204.f_262), 0, 0);
		}
	}
	else
	{
		func_205();
	}
}

void func_205()//Position - 0x5BAA
{
	int iVar0;
	int iVar1;
	
	if (func_34(&(Local_204.f_262)))
	{
		iVar0 = 100;
		if (func_206(Local_204.f_262, iVar0, 0))
		{
			MISC::CLEAR_BIT(&(Local_204.f_6), 9);
			MISC::CLEAR_BIT(&(Local_204.f_6), 8);
			func_28(&(Local_204.f_262));
		}
		else
		{
			iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_262)));
			Local_204.f_25 = (iVar1 / iVar0);
		}
	}
	else
	{
		func_30(&(Local_204.f_262), 0, 0);
	}
}

int func_206(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x5C20
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_207()//Position - 0x5C73
{
	int iVar0;
	int iVar1;
	
	if (func_34(&(Local_204.f_262)))
	{
		iVar0 = SYSTEM::ROUND(((func_169() * 1.5f) * 1000f));
		if (func_206(Local_204.f_262, iVar0, 0))
		{
			MISC::CLEAR_BIT(&(Local_204.f_6), 9);
			MISC::CLEAR_BIT(&(Local_204.f_6), 8);
			func_28(&(Local_204.f_262));
			func_208(func_169());
		}
		else
		{
			iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_262)));
			Local_204.f_25 = (iVar1 / iVar0);
		}
	}
	else
	{
		func_30(&(Local_204.f_262), 0, 0);
	}
}

void func_208(float fParam0)//Position - 0x5D03
{
	if (Global_1957675.f_8 != fParam0)
	{
		Global_1957675.f_8 = fParam0;
	}
}

void func_209()//Position - 0x5D1F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_190())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_204.f_6, 5))
		{
			if (!BitTest(Local_204.f_6, 4))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					MISC::SET_BIT(&(Local_204.f_6), 4);
				}
			}
			else if (Local_204.f_13 == 1)
			{
				if (Local_204.f_247 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24236 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
					if (BitTest(Local_204.f_5, 23))
					{
						iVar16 = Global_262145.f_24237 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_204.f_153 + Vector(0f, 0f, 0f), Var13, iVar16, true, joaat("WEAPON_TRANQUILIZER"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_204.f_162), false, false, 0, true, 0, 0, 0);
					Local_204.f_24 = 100;
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_204.f_134)));
					if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_83))
					{
						Local_204.f_83 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_83, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_204.f_162), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (BitTest(Local_204.f_5, 11) || BitTest(Local_204.f_5, 23))
					{
						Local_204.f_31++;
					}
					func_211((func_191() - 1));
					if (func_191() <= 0)
					{
						Local_204.f_24 = 0;
						MISC::CLEAR_BIT(&(Local_204.f_5), 16);
					}
					MISC::SET_BIT(&(Local_204.f_6), 5);
					func_30(&(Local_204.f_260), 0, 0);
				}
			}
		}
		else
		{
			func_210();
		}
	}
}

void func_210()//Position - 0x5EF1
{
	int iVar0;
	int iVar1;
	
	if (func_191() > 0)
	{
		if (func_34(&(Local_204.f_260)))
		{
			iVar0 = Global_262145.f_24235 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			if (func_29(&(Local_204.f_260), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_204.f_6), 5);
				MISC::CLEAR_BIT(&(Local_204.f_6), 4);
				func_28(&(Local_204.f_260));
				Local_204.f_24 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_37))
				{
					AUDIO::STOP_SOUND(Local_204.f_37);
					AUDIO::RELEASE_SOUND_ID(Local_204.f_37);
					Local_204.f_37 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_260)));
				Local_204.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_211(int iParam0)//Position - 0x5F88
{
	if (Global_1957675.f_7 != iParam0)
	{
		Global_1957675.f_7 = iParam0;
	}
}

void func_212()//Position - 0x5FA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_204.f_353.f_4 = 2;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		Local_204.f_353.f_5 = 238;
	}
	else
	{
		Local_204.f_353.f_5 = 205;
	}
	iVar0 = Global_262145.f_24238 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
	if (!BitTest(Local_204.f_5, 31))
	{
		Local_204.f_22 = 100;
	}
	if (func_33())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_204.f_6, 1))
		{
			Local_204.f_21 = ((Local_204.f_23 * (Global_262145.f_24238 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2)) / 100);
			Local_204.f_21 = ((Global_262145.f_24238 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2) - Local_204.f_21);
			MISC::CLEAR_BIT(&(Local_204.f_6), 1);
		}
		if (BitTest(Local_204.f_5, 31))
		{
			iVar0 = Local_204.f_21;
		}
	}
	else
	{
		Local_204.f_22 = 100;
	}
	if (!func_181(1))
	{
		if (!func_95() && func_213(&(Local_204.f_353), 1, iVar0, 0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_38))
			{
				Local_204.f_38 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_38, "Destroyed", NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_160, true, 0);
			}
			HUD::THEFEED_SHOW();
			iVar1 = 0;
			if (func_33())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_204.f_153, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_204.f_134)));
			MISC::SET_BIT(&(Local_204.f_5), 2);
		}
	}
	if (func_34(&(Local_204.f_353)))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 20);
		if (!BitTest(Local_204.f_5, 5))
		{
			MISC::SET_BIT(&(Local_204.f_5), 5);
		}
		func_28(&(Local_204.f_278));
		if (!func_29(&(Local_204.f_353), iVar0, 0))
		{
			iVar2 = (Local_204.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_353)));
			if (!func_33())
			{
				Local_204.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_204.f_5, 31))
			{
				Local_204.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_204.f_19 = (Local_204.f_23 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_35))
			{
				Local_204.f_35 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_35, "HUD_Detonate_Charge", Local_204.f_160, true);
			}
		}
	}
	else if (BitTest(Local_204.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_204.f_5), 5);
		if (!func_33())
		{
			Local_204.f_19 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_204.f_5), 31);
			Local_204.f_22 = (100 - Local_204.f_19);
			Local_204.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_353)));
			Local_204.f_23 = Local_204.f_19;
			func_28(&(Local_204.f_278));
		}
		if (Local_204.f_35 != -1)
		{
			AUDIO::STOP_SOUND(Local_204.f_35);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_35);
			Local_204.f_35 = -1;
		}
	}
	else if (func_33())
	{
		if (Local_204.f_19 > 0)
		{
			if (Local_204.f_19 <= 2)
			{
				Local_204.f_19 = 0;
			}
			if (!func_34(&(Local_204.f_278)))
			{
				func_30(&(Local_204.f_278), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24238 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
				if (!func_29(&(Local_204.f_278), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_204.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_278)))));
					Local_204.f_19 = (Local_204.f_19 - SYSTEM::ROUND(fVar4));
					Local_204.f_23 = Local_204.f_19;
					Local_204.f_22 = (100 - Local_204.f_19);
					MISC::SET_BIT(&(Local_204.f_6), 1);
				}
				else
				{
					Local_204.f_19 = 0;
				}
			}
		}
		else
		{
			func_28(&(Local_204.f_353));
			MISC::CLEAR_BIT(&(Local_204.f_5), 31);
			MISC::CLEAR_BIT(&(Local_204.f_6), 1);
		}
	}
}

int func_213(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6307
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_4, uParam0->f_5) && iParam1))
	{
		if (!bParam3 || func_29(&(uParam0->f_2), 500, 0))
		{
			if (!func_34(uParam0))
			{
				func_30(uParam0, 0, 0);
			}
			else if (func_29(uParam0, iParam2, 0))
			{
				func_28(uParam0);
				func_28(&(uParam0->f_2));
				return 1;
			}
		}
	}
	else
	{
		func_28(uParam0);
		func_28(&(uParam0->f_2));
	}
	return 0;
}

void func_214()//Position - 0x6394
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (BitTest(Local_204.f_5, 24))
	{
		if (Local_204.f_13 == 1)
		{
			if (Local_204.f_247 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var6 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.f_0)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.f_0)), SYSTEM::SIN(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24236 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
				if (BitTest(Local_204.f_5, 23))
				{
					iVar15 = Global_262145.f_24237 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
				}
				if (func_179())
				{
					iVar15 = 1;
				}
				else if (func_32() || func_31())
				{
					iVar15 = Global_262145.f_24237 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_204.f_153 + Vector(0f, 0f, 0f), Var12, iVar15, true, joaat("WEAPON_STUNGUN"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_204.f_162), false, false, 0, true, 0, 0, 0);
				Local_204.f_18 = 100;
				Local_204.f_19 = 0;
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_204.f_134)));
				if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_37))
				{
					Local_204.f_37 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_37, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_160, true, 0);
				}
				if (Local_204.f_35 != -1)
				{
					AUDIO::STOP_SOUND(Local_204.f_35);
					AUDIO::RELEASE_SOUND_ID(Local_204.f_35);
					Local_204.f_35 = -1;
				}
				MISC::SET_BIT(&(Local_204.f_5), 4);
				func_30(&(Local_204.f_252), 0, 0);
			}
		}
	}
}

void func_215()//Position - 0x6510
{
	if ((BitTest(Local_204.f_5, 24) && !BitTest(Local_204.f_5, 3)) && !Local_204.f_159)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_204.f_162), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_204.f_18 = 100;
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_204.f_134)));
		if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_37))
		{
			Local_204.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_37, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_160, true, 0);
		}
		if (Local_204.f_35 != -1)
		{
			AUDIO::STOP_SOUND(Local_204.f_35);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_35);
			Local_204.f_35 = -1;
		}
		func_216(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_204.f_162), true), 0);
		MISC::SET_BIT(&(Local_204.f_5), 3);
		Local_204.f_159 = 1;
		func_30(&(Local_204.f_252), 0, 0);
	}
}

void func_216(struct<3> Param0, bool bParam3)//Position - 0x6608
{
	struct<7> Var0;
	
	Var0.f_0 = 1872545935;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = bParam3;
	if (!bParam3)
	{
		if (!func_217(1, 1) == 0)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_217(1, 1), Var0.f_0);
		}
	}
	else if (Global_1957675.f_24 != func_13())
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_8(Global_1957675.f_24), Var0.f_0);
	}
}

int func_217(int iParam0, bool bParam1)//Position - 0x667B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_26(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_134(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_218()//Position - 0x66E0
{
	return BitTest(Global_1957675, 8);
}

int func_219()//Position - 0x66EF
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false)) && !BitTest(Local_204.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (func_184(PLAYER::PLAYER_ID()) && BitTest(Global_2738536, 0))
		{
		}
		else if (func_229())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_204.f_162)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_204.f_162)) != 0)
			{
				Local_204.f_28 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_204.f_5, 2))
	{
		Local_204.f_28 = 4;
		return 1;
	}
	if (BitTest(Local_204.f_5, 9))
	{
		Local_204.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_204.f_5, 7))
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_204.f_162)) || func_228(NETWORK::NET_TO_ENT(Local_204.f_162), 0))
		{
			if (BitTest(Local_204.f_5, 29))
			{
				Local_204.f_28 = 3;
				return 1;
			}
		}
	}
	if (func_226(PLAYER::PLAYER_ID()))
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (Global_1943917.f_5214 != -1)
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_156())
	{
		if (Global_1845060 != func_13())
		{
			if (func_61(Global_1845060) || func_60(Global_1845060))
			{
				Local_204.f_28 = 0;
				return 1;
			}
		}
	}
	if (func_225())
	{
		Local_204.f_28 = 1;
		return 1;
	}
	if (func_224(PLAYER::PLAYER_ID()))
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_223())
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_222())
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_41())
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_51())
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (func_40())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
		{
			Local_204.f_28 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_204.f_28 = 6;
			return 1;
		}
		if (func_176(PLAYER::PLAYER_PED_ID(), Local_204.f_156, 1) > 2f)
		{
			Local_204.f_28 = 7;
			return 1;
		}
	}
	if (func_221())
	{
		return 1;
	}
	if (func_17())
	{
		if (func_48())
		{
			return 1;
		}
		if (func_220("AIRDEF_WARN" /* GXT: You are entering protected air space. If you remain you will be shot. */))
		{
			if (func_29(&(Local_204.f_351), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_204.f_351));
		}
	}
	return 0;
}

bool func_220(char* sParam0)//Position - 0x6956
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_221()//Position - 0x6969
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_204.f_162), Var0, Var3, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_222()//Position - 0x69C7
{
	return Global_98972;
}

bool func_223()//Position - 0x69D3
{
	return BitTest(Global_1957675, 9);
}

int func_224(int iParam0)//Position - 0x69E2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1887549[iVar0 /*611*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_225()//Position - 0x6A07
{
	struct<3> Var0;
	
	if (Local_204.f_17 == joaat("v_faceoffice"))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_204.f_162)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_204.f_162)) == joaat("GtaMloRoom001"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_204.f_162), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_204.f_162)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_204.f_162), -1071.2579f, -242.54842f, 48.021328f, -1069.456f, -245.9234f, 43.879833f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_204.f_162), 2494.398f, -276.2f, -69.09f, 2494.3423f, -277.48242f, -67.987564f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)//Position - 0x6AE9
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		if (func_12(iParam0) && !func_227(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x6B22
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 4);
	}
	return 0;
}

int func_228(int iParam0, int iParam1)//Position - 0x6B53
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_229()//Position - 0x6B94
{
	return BitTest(Global_1957675, 15);
}

void func_230()//Position - 0x6BA3
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	var uVar19;
	struct<3> Var22;
	int iVar25;
	bool bVar26;
	int iVar27;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			Var0 = { Local_204.f_153 };
			switch (Local_204.f_13)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.f_2) * SYSTEM::COS(Var6.f_0)), (SYSTEM::COS(Var6.f_2) * SYSTEM::COS(Var6.f_0)), SYSTEM::SIN(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					if (func_33())
					{
						Var12 = { Global_262145.f_24851 /* Tunable: AW_DRONE_EMP_RANGE */, Global_262145.f_24851 /* Tunable: AW_DRONE_EMP_RANGE */, Global_262145.f_24851 /* Tunable: AW_DRONE_EMP_RANGE */ };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_204.f_153, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_204.f_162)), 0f, -0.1f, 0f) };
					Local_204.f_170 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_204.f_162), 7);
					if (Local_204.f_170 != 0)
					{
						Local_204.f_13 = 1;
					}
					break;
				
				case 1:
					Local_204.f_247 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_204.f_170, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_204.f_247 == 2)
					{
						if (iVar18 == 0)
						{
							Local_204.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_204.f_5, 11) && !func_33())
							{
								MISC::CLEAR_BIT(&(Local_204.f_5), 11);
							}
							MISC::CLEAR_BIT(&(Local_204.f_5), 23);
							MISC::CLEAR_BIT(&(Local_204.f_6), 7);
							func_238();
						}
						else
						{
							Local_204.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, false))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_236(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!BitTest(Local_204.f_5, 23))
											{
												MISC::SET_BIT(&(Local_204.f_5), 23);
												if (BitTest(Local_204.f_5, 11) && !func_33())
												{
													MISC::CLEAR_BIT(&(Local_204.f_5), 11);
												}
											}
											if (!func_108(PLAYER::PLAYER_ID()) && !func_105(PLAYER::PLAYER_ID()))
											{
												if ((func_235(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_234(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_233(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_104(Global_1837331);
													func_232(&(Local_204.f_264), 0, 0);
												}
												else
												{
													func_238();
												}
											}
										}
										if ((((!BitTest(Local_204.f_5, 11) && !bVar26) && func_24(Global_1957675.f_26)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1957675.f_26, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_204.f_5), 11);
											if (BitTest(Local_204.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_204.f_5), 23);
											}
										}
									}
								}
								else
								{
									iVar27 = func_231(iVar25);
									if (((iVar27 > -1 && iVar27 < Global_4980736.f_7020) && ENTITY::IS_ENTITY_AN_OBJECT(iVar25)) && BitTest(Global_4980736.f_7023[iVar27 /*636*/].f_336, 0))
									{
										MISC::SET_BIT(&(Local_204.f_6), 7);
									}
									if (!func_33())
									{
										if (BitTest(Local_204.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_204.f_5), 11);
										}
									}
									if (BitTest(Local_204.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_204.f_5), 23);
									}
									func_238();
								}
							}
							else
							{
								func_238();
							}
							Local_204.f_170 = 0;
							Local_204.f_13 = 0;
						}
					}
					else if (Local_204.f_247 == 0)
					{
						Local_204.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

int func_231(int iParam0)//Position - 0x6F24
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = -1;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MC_EntityID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MC_EntityID"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MC_EntityID");
		}
	}
	return iVar0;
}

void func_232(var uParam0, bool bParam1, bool bParam2)//Position - 0x6F60
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

int func_233(int iParam0)//Position - 0x6F9D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("SECURITY_GUARD"))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x6FC1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x7096
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("ARMY")) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0, int iParam1)//Position - 0x70F9
{
	int iVar0;
	
	iVar0 = func_237(iParam0);
	if (func_9(iVar0))
	{
		if (iVar0 == func_237(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x7122
{
	if (func_9(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_13();
}

void func_238()//Position - 0x7145
{
	if (func_34(&(Local_204.f_264)))
	{
		if (func_29(&(Local_204.f_264), 60000, 0))
		{
			func_28(&(Local_204.f_264));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_104(Global_1837320);
			}
		}
	}
}

void func_239()//Position - 0x7187
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	var uVar21;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (((func_49() || func_33()) || func_52()) || func_17())
	{
		if (!BitTest(Local_204.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_204.f_162)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			switch (Local_204.f_11)
			{
				case 0:
					if ((func_33() || func_52()) || func_49())
					{
						fVar13 = 0.3f;
					}
					else if (func_17())
					{
						fVar13 = 0.65f;
					}
					else
					{
						fVar13 = (func_243(Local_204.f_243) * 1.5f);
					}
					if (func_101())
					{
						Var14 = { Local_204.f_153 };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						if (func_17())
						{
							Var10 = { 1.9f, 1.9f, 1.9f };
						}
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_204.f_153 };
						Var17 = { Local_204.f_153 };
					}
					Local_204.f_169 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var14, Var17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_204.f_162), 4);
					if (Local_204.f_169 != 0)
					{
						Local_204.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_204.f_169, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_204.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_204.f_243)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_240(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!BitTest(Local_204.f_5, 9))
											{
												MISC::SET_BIT(&(Local_204.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar27)))
										{
											if (Local_204.f_30 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_204.f_30 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_204.f_153, 5000f);
												func_232(&(Local_204.f_270), 0, 0);
											}
										}
									}
								}
							}
							Local_204.f_12 = 2;
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 50);
							Local_204.f_169 = 0;
							Local_204.f_11 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_204.f_11 = 0;
					}
					break;
			}
			if (Local_204.f_30 != 0)
			{
				if (func_34(&(Local_204.f_270)))
				{
					if (func_29(&(Local_204.f_270), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_204.f_30);
						func_28(&(Local_204.f_270));
						Local_204.f_30 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

int func_240(int iParam0)//Position - 0x7499
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_241(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x74F4
{
	if (func_242(iParam0, 1))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("polfaction2"):
			return 1;
			break;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)//Position - 0x751F
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_243(int iParam0)//Position - 0x78FE
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_244(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_244(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x792C
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_247(iParam0);
		if (iVar0 != 0)
		{
			func_245(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_245(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x7A2B
{
	int iVar0;
	
	func_246(iParam0, &Global_1578046);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1578046[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1578046[iVar0], &(Global_1578050[iVar0 /*3*/]), &(Global_1578057[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1578050[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578057[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1578050[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578057[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1578050[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578057[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1578050[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578057[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578064[iVar0] = (Global_1578057[iVar0 /*3*/] - Global_1578050[iVar0 /*3*/]);
		Global_1578067[iVar0] = (Global_1578057[iVar0 /*3*/].f_1 - Global_1578050[iVar0 /*3*/].f_1);
		Global_1578070[iVar0] = (Global_1578057[iVar0 /*3*/].f_2 - Global_1578050[iVar0 /*3*/].f_2);
		if (Global_1578064[iVar0] > Global_1578073)
		{
			Global_1578073 = Global_1578064[iVar0];
		}
		if (Global_1578070[iVar0] > Global_1578074)
		{
			Global_1578074 = Global_1578070[iVar0];
		}
		iVar0++;
	}
	Global_1578075 = (Global_1578073 * -0.5f);
	Global_1578078 = (Global_1578073 * 0.5f);
	Global_1578075.f_1 = ((((0.5f * Global_1578067[0]) + Global_1578067[1]) + Global_1578046.f_3) * -1f);
	Global_1578078.f_1 = (0.5f * Global_1578067[0]);
	Global_1578075.f_2 = (Global_1578070[0] * -0.5f);
	Global_1578078.f_2 = (Global_1578070[0] * 0.5f);
	*uParam1 = { Global_1578075 };
	*uParam2 = { Global_1578078 };
}

void func_246(int iParam0, var uParam1)//Position - 0x7C37
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_247(int iParam0)//Position - 0x7CB8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_248(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x7CE7
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_249()//Position - 0x7CF9
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_204.f_162)))
		{
			iVar0 = func_252(NETWORK::NET_TO_OBJ(Local_204.f_162));
			if (iVar0 != -1)
			{
				if (!func_251(&(Global_1835509.f_398), iVar0) && !func_251(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_538), iVar0))
				{
					func_250(1);
				}
			}
		}
	}
}

void func_250(bool bParam0)//Position - 0x7D5F
{
	if (bParam0)
	{
		if (func_93())
		{
			if (!BitTest(Global_1957675, 9))
			{
				MISC::SET_BIT(&Global_1957675, 9);
			}
		}
	}
	else if (BitTest(Global_1957675, 9))
	{
		MISC::CLEAR_BIT(&Global_1957675, 9);
	}
}

bool func_251(var uParam0, int iParam1)//Position - 0x7DA2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_252(int iParam0)//Position - 0x7DC1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_256(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_253(iVar3);
				if (Global_1949305[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_253(int iParam0)//Position - 0x7E30
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1949305[iVar0] == 0)
	{
		Global_1949305[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_255(iParam0), func_254(iParam0));
	}
}

char* func_254(int iParam0)//Position - 0x7E60
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_255(int iParam0)//Position - 0x80A4
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.7616f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.7676f, 30.4388f;
		
		case 7:
			return 1179.7448f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.5913f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.1914f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.6997f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.9233f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.3843f, 30.0499f;
		
		case 14:
			return 2449.7852f, 4983.8247f, 45.8106f;
		
		case 15:
			return -1426.3616f, 6754.5063f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.3019f, 26.3052f;
		
		case 17:
			return 3522.8452f, 3707.9653f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.6248f, 3687.8262f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.9883f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.3213f, 25.4223f;
		
		case 27:
			return -1074.8533f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.3816f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.5608f, -1678.6155f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.5117f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.8452f, 3707.9653f, 19.9918f;
		
		case 34:
			return 1087.1952f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.5647f, -4653.6704f, 5.0773f;
		
		case 37:
			return 3058.0024f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.6187f, -4772.6904f, 5.0773f;
		
		case 39:
			return 3088.4688f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.2224f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.4587f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.4937f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_256(int iParam0)//Position - 0x84BA
{
	if (func_263(iParam0))
	{
		return 15;
	}
	if (func_261(iParam0))
	{
		return 28;
	}
	if (func_259(iParam0))
	{
		return 36;
	}
	if (func_258(iParam0))
	{
		return 23;
	}
	if (func_257(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_257(int iParam0)//Position - 0x8509
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.912086f, 3818.2024f, 3654.002f, -26.373154f, 12.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.7842f, 3661.9458f, -15.336578f, 3823.8271f, 3654.6235f, -24.843678f, 13.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.8206f, -0.487321f, 3767.1792f, 3661.7053f, -32.335686f, 115f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0)//Position - 0x85BA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.61975f, 36.637207f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.406733f, 14.144746f, -690.1883f, 38.617584f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.799168f, -15.31378f, -703.7052f, 38.08809f, 54.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.765583f, -693.0358f, 38.08809f, 24.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.704739f, -39.693424f, -690.2305f, 36.588085f, 17.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.588087f, -72.39151f, -683.4483f, 39.483612f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.637825f, -686.18097f, 30.588087f, -39.304077f, -662.2571f, 39.480827f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_259(int iParam0)//Position - 0x8751
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.9146f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_260());
}

int func_260()//Position - 0x8797
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), 3042.596f, -4667.9146f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.9146f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(int iParam0)//Position - 0x87EB
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.5997f, -1039.8674f, -3.801932f, -2129.9556f, -1003.3514f, 22.18234f, 15.75f, false, true, 0)) || func_262());
}

int func_262()//Position - 0x8838
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.10364f, 14.99213f };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_263(int iParam0)//Position - 0x8889
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f), Vector(22.18234f, -1003.3514f, -2129.9556f) + Vector(0f, 7773.9673f, 654.731f), 15.75f, false, true, 0)) || func_264());
}

int func_264()//Position - 0x88EE
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f) };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_265(int iParam0)//Position - 0x894B
{
	int iVar0;
	int iVar1;
	
	if (func_49())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_ACTIVE(Local_204.f_172))
		{
			if (CAM::IS_CAM_RENDERING(Local_204.f_172) || iParam0)
			{
				if (!func_95())
				{
					func_89(0);
				}
				func_276(1);
				if ((!func_275() || BitTest(Local_204.f_5, 1)) || func_219())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_98();
					func_273(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_204.f_162));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1957675.f_27 = iVar0;
						if (!BitTest(Local_204.f_5, 8))
						{
							Local_204.f_126 = func_272(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_204.f_150), &(Local_204.f_17));
							MISC::SET_BIT(&(Local_204.f_5), 8);
						}
						iVar1 = 0;
						if (func_271(Local_204.f_153.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1957675.f_12 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1957675.f_12);
						}
						if ((!func_184(PLAYER::PLAYER_ID()) && !func_268(PLAYER::PLAYER_ID())) && !func_17())
						{
							if (!func_267())
							{
								func_266(1);
							}
						}
						if (!func_17())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_204.f_17, Local_204.f_150, Local_204.f_150.f_1, SYSTEM::FLOOR(Local_204.f_126), iVar1);
					}
					else
					{
						Local_204.f_17 = -1;
						if (Global_1957675.f_12 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1957675.f_12);
						}
						if (!func_267() && !func_17())
						{
							func_266(1);
						}
						if (!func_17())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1957675.f_27 = -1;
						if (BitTest(Local_204.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_204.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_266(int iParam0)//Position - 0x8B2E
{
	Global_2699041 = iParam0;
}

bool func_267()//Position - 0x8B3C
{
	return Global_2699041;
}

int func_268(int iParam0)//Position - 0x8B48
{
	if (func_270(iParam0))
	{
		return 1;
	}
	if (func_269(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_269(int iParam0)//Position - 0x8B6B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_109(iParam0, 9);
	}
	return 0;
}

int func_270(var uParam0)//Position - 0x8B89
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

int func_271(float fParam0, float fParam1, float fParam2)//Position - 0x8BAC
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_272(float fParam0)//Position - 0x8BCB
{
	return (fParam0 * 57.29578f);
}

void func_273(bool bParam0)//Position - 0x8BDB
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101740.f_8 = 1;
	}
	else
	{
		Global_101740.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		func_274(iVar0);
		iVar0++;
	}
}

void func_274(int iParam0)//Position - 0x8C12
{
	Global_101740.f_208[iParam0] = 1;
	Global_101740.f_207 = 1;
}

bool func_275()//Position - 0x8C2C
{
	return BitTest(Global_1957675, 4);
}

void func_276(int iParam0)//Position - 0x8C3A
{
	if (Global_2739811.f_4691 != iParam0)
	{
		Global_2739811.f_4691 = iParam0;
	}
}

void func_277()//Position - 0x8C57
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	struct<3> Var38;
	
	if ((BitTest(Local_204.f_5, 1) || func_219()) || func_101())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_204.f_162));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_204.f_162));
			if (func_39())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_282();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			func_281(&(Local_204[0]), &(Local_204[1]), &(Local_204[2]), &(Local_204[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 5;
				Local_204[2] = (Local_204[2] * iVar3);
				Local_204[3] = (Local_204[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_204[3] = (Local_204[3] * -1);
			}
			if (func_29(&(Local_204.f_282), 750, 0))
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_232(&(Local_204.f_282), 0, 0);
				}
			}
			if (bVar7 && !func_280())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					Local_204.f_27++;
				}
				else if (bVar8)
				{
					Local_204.f_27 = (Local_204.f_27 - 1);
				}
				else
				{
					Local_204.f_27++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_41))
				{
					Local_204.f_41 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_41, "HUD_Zoom_Change", Local_204.f_160, true);
				}
				if (Local_204.f_27 > 2)
				{
					Local_204.f_27 = 0;
				}
				else if (Local_204.f_27 < 0)
				{
					Local_204.f_27 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_41))
			{
				AUDIO::STOP_SOUND(Local_204.f_41);
				AUDIO::RELEASE_SOUND_ID(Local_204.f_41);
				Local_204.f_41 = -1;
			}
			Local_204.f_131 = (Local_204.f_131 + (((Local_204.f_129 - Local_204.f_131) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_204.f_172, Local_204.f_131);
			if (Local_204[2] != 0 || Local_204[3] != 0)
			{
				if (Local_204[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_204[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_204[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_204[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_204.f_133);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_204.f_133);
				if ((fVar4 != 0f || Local_204[0] != 0) && !func_95())
				{
					if (Local_204[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_204[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_204[0] == 0)
					{
						if (Var17.f_1 > fVar1)
						{
							Var17.f_1 = fVar1;
						}
						else if (Var17.f_1 < -fVar1)
						{
							Var17.f_1 = -fVar1;
						}
					}
					else if (Var17.f_1 > fVar1)
					{
						Var17.f_1 = fVar1;
					}
					else if (Var17.f_1 < -fVar1)
					{
						Var17.f_1 = -fVar1;
					}
				}
				if (Var17.f_0 > fVar2)
				{
					Var17.f_0 = fVar2;
				}
				else if (Var17.f_0 < -fVar2)
				{
					Var17.f_0 = -fVar2;
				}
				if (!BitTest(Local_204.f_5, 12))
				{
					MISC::SET_BIT(&(Local_204.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, true);
			}
			else if (((Local_204[0] != 0 || Local_204[1] != 0) && !func_280()) && !func_95())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				if (func_280())
				{
					if (func_279())
					{
						fVar25 = -1f;
						Local_204.f_132 = fVar25;
					}
				}
				else
				{
					if (Local_204[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_204[0])));
						Local_204.f_132 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_204[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_204[1])));
						Local_204.f_132 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_204[0] == 0 && !func_95()) || func_280())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.f_1 < 1.5f && Var21.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.f_1 > -1.5f && Var21.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.f_1 > fVar1)
				{
					Var28.f_1 = fVar1;
				}
				else if (Var28.f_1 < -fVar1)
				{
					Var28.f_1 = -fVar1;
				}
				if (Var28.f_0 > fVar2)
				{
					Var28.f_0 = fVar2;
				}
				else if (Var28.f_0 < -fVar2)
				{
					Var28.f_0 = -fVar2;
				}
				if (BitTest(Local_204.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_204.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, true);
			}
			else if (!func_279() && !func_280())
			{
				Local_204.f_132 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.f_0 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 1.5f && Var31.f_1 > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.f_1 > -1.5f && Var31.f_1 < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.f_0 != 0f)
					{
						if (Var31.f_0 < 1.5f && Var31.f_0 > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.f_0 > -1.5f && Var31.f_0 < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_278(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_278(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (BitTest(Local_204.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

float func_278(float fParam0)//Position - 0x9409
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_279()//Position - 0x9443
{
	return BitTest(Local_204.f_5, 22);
}

bool func_280()//Position - 0x9452
{
	return BitTest(Local_204.f_5, 21);
}

void func_281(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x9461
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_282()//Position - 0x9565
{
	if (func_156())
	{
		switch (Local_204.f_27)
		{
			case 0:
				Local_204.f_130 = 90f;
				Local_204.f_129 = 90f;
				break;
			
			case 1:
				Local_204.f_130 = 75f;
				Local_204.f_129 = 75f;
				break;
			
			case 2:
				Local_204.f_130 = 45f;
				Local_204.f_129 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_204.f_27)
		{
			case 0:
				Local_204.f_130 = 90f;
				Local_204.f_129 = 90f;
				break;
			
			case 1:
				Local_204.f_130 = 80f;
				Local_204.f_129 = 80f;
				break;
			
			case 2:
				Local_204.f_130 = 70f;
				Local_204.f_129 = 70f;
				break;
			}
	}
}

void func_283()//Position - 0x962B
{
	int iVar0;
	int iVar1;
	
	if (func_87(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_201(0);
		Local_204.f_144 = { func_286(&Local_204) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_204.f_165))
		{
			if (!func_285(Local_204.f_144))
			{
				if (func_200(iVar0))
				{
					Local_204.f_165 = OBJECT::CREATE_OBJECT(iVar0, Local_204.f_144, false, false, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_204.f_165, Local_204.f_144, false, false, true);
					ENTITY::SET_ENTITY_COLLISION(Local_204.f_165, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_204.f_165, true, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_204.f_165, true);
					ENTITY::SET_ENTITY_HEADING(Local_204.f_165, func_284());
					ENTITY::FREEZE_ENTITY_POSITION(Local_204.f_165, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_204.f_165, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_204.f_144, 2f, iVar0, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_204.f_165)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_204.f_144 = { func_286(&Local_204) };
	}
}

float func_284()//Position - 0x973E
{
	if (Global_1957675.f_10 != 0f)
	{
		return Global_1957675.f_10;
	}
	return 0f;
}

int func_285(struct<3> Param0)//Position - 0x975B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_286(var uParam0)//Position - 0x9785
{
	if (!func_285(Global_1957675.f_13))
	{
		return Global_1957675.f_13;
	}
	else
	{
		return uParam0->f_144;
	}
	return 0f, 0f, 0f;
}

void func_287()//Position - 0x97B7
{
	if (Local_204.f_35 != -1)
	{
		AUDIO::STOP_SOUND(Local_204.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_35);
		Local_204.f_35 = -1;
	}
}

int func_288(bool bParam0)//Position - 0x97DC
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (func_193())
	{
		return 1;
	}
	if (func_293(PLAYER::PLAYER_ID()) && !func_292())
	{
		return 1;
	}
	if (func_184(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2738536, 0))
		{
			return 1;
		}
	}
	if (Global_1928799 || Global_1574972)
	{
		func_291(1);
		return 1;
	}
	if (((func_289(0) || func_189(1)) || func_188()) && !bParam0)
	{
		func_89(0);
		func_98();
		func_117();
		return 1;
	}
	return 0;
}

int func_289(bool bParam0)//Position - 0x9891
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_290(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23831.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x997C
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_291(bool bParam0)//Position - 0x99D9
{
	if (bParam0)
	{
		if (!func_51())
		{
			MISC::SET_BIT(&Global_1957675, 20);
		}
	}
	else if (func_51())
	{
		MISC::CLEAR_BIT(&Global_1957675, 20);
	}
}

bool func_292()//Position - 0x9A0C
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1964609, 0));
}

int func_293(int iParam0)//Position - 0x9A28
{
	if (func_134(iParam0, 0))
	{
		return 1;
	}
	if (func_294())
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

bool func_294()//Position - 0x9A67
{
	return BitTest(Global_2621446, 3);
}

void func_295()//Position - 0x9A75
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	var uVar37;
	var uVar38;
	struct<3> Var39;
	var uVar42;
	
	if (!func_101() || func_219())
	{
		return;
	}
	if (func_49() && func_288(0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_204.f_162));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_204.f_162));
			iVar6 = 1;
			if (func_17())
			{
				if (func_288(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_288(0))
			{
				iVar6 = 0;
			}
			if (func_17())
			{
				if (!func_148())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * MISC::GET_FRAME_TIME());
			func_282();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			func_281(&(Local_204[0]), &(Local_204[1]), &(Local_204[2]), &(Local_204[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 2;
				if (func_17())
				{
					iVar3 = 3;
				}
				Local_204[2] = (Local_204[2] * iVar3);
				Local_204[3] = (Local_204[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_204[3] = (Local_204[3] * -1);
				Local_204[1] = (Local_204[1] * -1);
			}
			if (Local_204[3] != 0 && Local_204[2] != 0)
			{
				iVar8 = func_297(MISC::ABSI(Local_204[3]), MISC::ABSI(Local_204[2]));
				Local_204.f_132 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_204[1] != 0 && Local_204[0] != 0)
			{
				iVar9 = func_297(MISC::ABSI(Local_204[1]), MISC::ABSI(Local_204[0]));
				Local_204.f_132 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_204[3] != 0)
			{
				Local_204.f_132 = (1f / (127f / IntToFloat(Local_204[3])));
			}
			else if (Local_204[2] != 0)
			{
				Local_204.f_132 = (1f / (127f / IntToFloat(Local_204[2])));
			}
			else if (Local_204[1] != 0)
			{
				Local_204.f_132 = (1f / (127f / IntToFloat(Local_204[1])));
			}
			else if (Local_204[0] != 0)
			{
				Local_204.f_132 = (1f / (127f / IntToFloat(Local_204[0])));
			}
			else
			{
				Local_204.f_132 = 0f;
			}
			if (iVar6 && ((Local_204[2] != 0 || Local_204[3] != 0) || (Local_204[0] != 0 || Local_204[1] != 0)))
			{
				if (Local_204[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_204[2])));
				}
				else if (Local_204[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_204[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_204[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_204[3])));
				}
				else if (Local_204[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_204[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_204.f_133);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_204.f_133);
				if ((fVar4 != 0f || Local_204[2] != 0) || Local_204[0] != 0)
				{
					if (Local_204[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_204[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_204[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_204[0])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar21 = -1f;
							}
							else
							{
								fVar21 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar21 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar21 = -0.0001f;
							}
						}
						else
						{
							fVar21 = 0f;
						}
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var18 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_204[2] == 0 && Local_204[0] == 0)
					{
						if (Var18.f_1 > fVar1)
						{
							Var18.f_1 = fVar1;
						}
						else if (Var18.f_1 < -fVar1)
						{
							Var18.f_1 = -fVar1;
						}
					}
					else if (Var18.f_1 > fVar1)
					{
						Var18.f_1 = fVar1;
					}
					else if (Var18.f_1 < -fVar1)
					{
						Var18.f_1 = -fVar1;
					}
				}
				if (Var18.f_0 > fVar2)
				{
					Var18.f_0 = fVar2;
				}
				else if (Var18.f_0 < -fVar2)
				{
					Var18.f_0 = -fVar2;
				}
				if (!BitTest(Local_204.f_5, 12))
				{
					MISC::SET_BIT(&(Local_204.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.f_0), 2, true);
			}
			else if (iVar6 && (((Local_204[2] != 0 || Local_204[3] != 0) || Local_204[0] != 0) || Local_204[1] != 0))
			{
				Var22 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				if (func_280())
				{
					if (func_279())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_204[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_204[2])));
					}
					else if (Local_204[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_204[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_204[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_204[3])));
					}
					else if (Local_204[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_204[1])));
					}
					else
					{
						fVar26 = 0f;
					}
				}
				fVar27 = -(((fVar26 * 0.05f) * fVar7) * fVar0);
				fVar28 = -(((fVar25 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_204[2] == 0 && Local_204[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar25 = -1f;
							}
							else
							{
								fVar25 = 1f;
							}
						}
						if (Var22.f_1 < 2f && Var22.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var22.f_1 > -2f && Var22.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
						fVar28 = -(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var29 = { Vector(0f, fVar28, fVar27) + Var22 };
				if (Var29.f_1 > fVar1)
				{
					Var29.f_1 = fVar1;
				}
				else if (Var29.f_1 < -fVar1)
				{
					Var29.f_1 = -fVar1;
				}
				if (Var29.f_0 > fVar2)
				{
					Var29.f_0 = fVar2;
				}
				else if (Var29.f_0 < -fVar2)
				{
					Var29.f_0 = -fVar2;
				}
				if (BitTest(Local_204.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_204.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.f_0), 2, true);
			}
			else
			{
				Var32 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var32.f_0 < 0f)
						{
							fVar36 = -1f;
						}
						else
						{
							fVar36 = 1f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 2f && Var32.f_1 > 0f)
						{
							fVar35 = 0.0001f;
						}
						else if (Var32.f_1 > -2f && Var32.f_1 < 0f)
						{
							fVar35 = -0.0001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var32.f_0 != 0f)
					{
						if (Var32.f_0 < 2f && Var32.f_0 > 0f)
						{
							fVar36 = 0.0001f;
						}
						else if (Var32.f_0 > -2f && Var32.f_0 < 0f)
						{
							fVar36 = -0.0001f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					uVar37 = func_278(-(((fVar36 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar38 = func_278(-(((fVar35 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var39 = { Vector(0f, uVar38, uVar37) + Var32 };
					if (BitTest(Local_204.f_5, 12))
					{
						Var39.f_0 = Var32.f_0;
					}
					uVar42 = Var32.f_2;
					if (func_17())
					{
						if (!func_148())
						{
							uVar42 = Local_204.f_118;
							Var39.f_1 = 0f;
						}
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.f_0), 2, true);
					if (func_17())
					{
						if (MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f)
						{
							func_296(1);
						}
					}
				}
				else if (func_17())
				{
					func_296(1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

void func_296(bool bParam0)//Position - 0xA34B
{
	if (!bParam0)
	{
		if (BitTest(Local_204.f_6, 6))
		{
			MISC::CLEAR_BIT(&(Local_204.f_6), 6);
		}
	}
	else if (!BitTest(Local_204.f_6, 6))
	{
		MISC::SET_BIT(&(Local_204.f_6), 6);
	}
}

int func_297(int iParam0, int iParam1)//Position - 0xA381
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_298()//Position - 0xA397
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_49())
	{
		return;
	}
	if (func_275())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_204.f_174))
			{
				Local_204.f_174 = func_313(Local_204.f_153, 0);
				HUD::SET_BLIP_SPRITE(Local_204.f_174, func_312());
				if (func_39() && !HUD::DOES_BLIP_EXIST(Local_204.f_175))
				{
					Local_204.f_175 = func_309(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_204.f_175, 6 /*RADAR_CENTRE*/);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_204.f_175, false);
					HUD::SET_BLIP_SCALE(Local_204.f_175, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_204.f_175, (13 - 1));
					if (func_306(PLAYER::PLAYER_ID()) != -1)
					{
						func_302(&(Local_204.f_175), func_304(func_306(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_302(&(Local_204.f_175), func_301());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_204.f_175, true);
				}
			}
			else
			{
				fVar0 = func_300(Local_204.f_127);
				fVar1 = Local_204.f_153;
				fVar2 = Local_204.f_153.f_1;
				HUD::SET_BLIP_DISPLAY(Local_204.f_174, 2);
				HUD::SET_BLIP_COORDS(Local_204.f_174, Local_204.f_153);
				if (((func_33() || func_52()) && HUD::IS_PAUSE_MENU_ACTIVE()) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)))
				{
					if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_204.f_174, fVar1, fVar2, 0f);
						HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_204.f_174, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_204.f_174, 1f);
				HUD::SET_BLIP_PRIORITY(Local_204.f_174, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_204.f_175))
				{
					HUD::SET_BLIP_ROTATION(Local_204.f_175, func_299(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_299(int iParam0)//Position - 0xA545
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_300(float fParam0)//Position - 0xA55B
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_301()//Position - 0xA584
{
	return 10;
}

void func_302(var uParam0, int iParam1)//Position - 0xA58E
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_303(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_303(int iParam0)//Position - 0xA5B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_304(int iParam0)//Position - 0xA81C
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_305(iParam0);
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

var func_305(int iParam0)//Position - 0xA8DF
{
	return Global_2648914.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_306(int iParam0)//Position - 0xA8F6
{
	if (func_9(iParam0))
	{
		if (func_307(iParam0, 1))
		{
			return Global_2648914.f_818.f_11[func_237(iParam0)];
		}
	}
	return -1;
}

int func_307(int iParam0, bool bParam1)//Position - 0xA926
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_308(iParam0))
		{
			return 0;
		}
	}
	return func_9(Global_1887549[iParam0 /*611*/].f_10);
}

int func_308(int iParam0)//Position - 0xA95E
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_309(int iParam0, bool bParam1, bool bParam2)//Position - 0xA993
{
	return func_310(iParam0, !bParam1, bParam2);
}

int func_310(int iParam0, bool bParam1, bool bParam2)//Position - 0xA9A6
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_311(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_311(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_311(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_311(bool bParam0, float fParam1, float fParam2)//Position - 0xAA4A
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_312()//Position - 0xAA61
{
	if (func_17())
	{
		return 548;
	}
	return 627;
}

int func_313(struct<3> Param0, bool bParam3)//Position - 0xAA79
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_311(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_314()//Position - 0xAAA5
{
	if (func_49())
	{
		if (Local_204.f_153.f_2 >= (func_127() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
			{
				Local_204.f_39 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_39, "Out_Of_Bounds_Alarm_Loop", Local_204.f_160, true);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
		{
			AUDIO::STOP_SOUND(Local_204.f_39);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_39);
			Local_204.f_39 = -1;
		}
	}
}

void func_315()//Position - 0xAB10
{
	if (((func_52() || func_156()) || func_39()) || func_179())
	{
		switch (Local_204.f_245)
		{
			case 0:
				func_338();
				break;
			
			case 1:
				func_325();
				break;
			
			case 2:
				func_323();
				break;
			
			case 3:
				func_316();
				break;
			}
	}
}

void func_316()//Position - 0xAB7A
{
	func_90(1);
	if (!func_322())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_320(0);
	func_318(0);
	func_317(0);
}

void func_317(int iParam0)//Position - 0xABA5
{
	if (Local_204.f_245 != iParam0)
	{
		Local_204.f_245 = iParam0;
	}
}

void func_318(bool bParam0)//Position - 0xABBC
{
	if (bParam0)
	{
		if (!func_319())
		{
			MISC::SET_BIT(&Global_1957675, 17);
		}
	}
	else if (func_319())
	{
		MISC::CLEAR_BIT(&Global_1957675, 17);
	}
}

bool func_319()//Position - 0xABEF
{
	return BitTest(Global_1957675, 17);
}

void func_320(bool bParam0)//Position - 0xABFE
{
	if (bParam0)
	{
		if (!func_321())
		{
			MISC::SET_BIT(&Global_1957675, 18);
		}
	}
	else if (func_321())
	{
		MISC::CLEAR_BIT(&Global_1957675, 18);
	}
}

bool func_321()//Position - 0xAC31
{
	return BitTest(Global_1957675, 18);
}

bool func_322()//Position - 0xAC40
{
	return Global_1943917.f_740;
}

void func_323()//Position - 0xAC4F
{
	if (func_321() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_90(1);
		func_324(0);
		MISC::CLEAR_BIT(&(Local_204.f_5), 16);
		func_317(3);
	}
}

void func_324(bool bParam0)//Position - 0xAC81
{
	if (bParam0)
	{
		if (!func_95())
		{
			MISC::SET_BIT(&Global_1957675, 19);
		}
	}
	else if (func_95())
	{
		MISC::CLEAR_BIT(&Global_1957675, 19);
	}
}

void func_325()//Position - 0xACB4
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_29(&(Local_204.f_272), 3000, 0))
		{
			if (func_337())
			{
				if (BitTest(Global_4546023, 2) || func_29(&(Local_204.f_276), 8000, 0))
				{
					if (!BitTest(Global_4546023, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_326(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_28(&(Local_204.f_272));
					func_28(&(Local_204.f_276));
					func_317(2);
				}
			}
			else if (func_29(&(Local_204.f_276), 15000, 0))
			{
				func_28(&(Local_204.f_272));
				func_28(&(Local_204.f_276));
				func_90(1);
				func_324(0);
				MISC::CLEAR_BIT(&(Local_204.f_5), 16);
				func_317(3);
			}
		}
	}
}

void func_326(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xAD6D
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
	if (func_336())
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
		if (!func_334())
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
				else if (bVar14 || ((!func_134(PLAYER::PLAYER_ID(), 0) && !func_294()) && !func_293(PLAYER::PLAYER_ID())))
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
					func_331(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_330(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_329();
					func_328();
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
				if (!func_330(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_327(Global_4718592.f_187633))
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

bool func_327(int iParam0)//Position - 0xB221
{
	return iParam0 == 17;
}

void func_328()//Position - 0xB22E
{
	struct<3> Var0;
	
	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { Var0 };
}

void func_329()//Position - 0xB27B
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
}

int func_330(int iParam0)//Position - 0xB2B9
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

void func_331(bool bParam0, int iParam1, int iParam2)//Position - 0xB2EA
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
				func_333();
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
		if (func_134(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_332(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_332(int iParam0, bool bParam1)//Position - 0xB3BA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_333()//Position - 0xB3D6
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

int func_334()//Position - 0xB42E
{
	if (func_335() == 0)
	{
		return 1;
	}
	return 0;
}

int func_335()//Position - 0xB443
{
	return Global_1574633.f_18;
}

int func_336()//Position - 0xB451
{
	if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2) && !Global_2685658.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_337()//Position - 0xB482
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_338()//Position - 0xB49F
{
	if (func_360())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (!func_337())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_324(1);
					func_145(-1);
					func_326(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_358(1, -1);
					func_339(3, 1, 1, 0);
					func_30(&(Local_204.f_272), 0, 0);
					func_30(&(Local_204.f_276), 0, 0);
					func_317(1);
				}
			}
		}
	}
}

int func_339(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB51C
{
	if (Global_79539)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 24) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4546023, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 15);
			}
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 29);
			}
		}
		if (Global_8926[iParam0 /*15*/].f_9 == 0)
		{
			func_351();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4546023, 14);
			MISC::CLEAR_BIT(&Global_4546023, 16);
			MISC::CLEAR_BIT(&Global_4546023, 15);
			MISC::CLEAR_BIT(&Global_4546023, 27);
			MISC::CLEAR_BIT(&Global_4546023, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_344();
	if (Global_21066.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_94(0) == 1)
		{
			return 0;
		}
	}
	if (Global_21032 == 1)
	{
		return 0;
	}
	if (Global_21066.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21063))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21066.f_1 < 4)
			{
				func_343("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_21063 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_21048)
	{
		SYSTEM::WAIT(0);
	}
	func_351();
	func_340();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
	{
		Global_9542 = 0;
		Global_21066.f_1 = 7;
		func_343(&(Global_8926[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
			{
				Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
		{
			Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_340()//Position - 0xB75D
{
	if (Global_79539 == 0)
	{
		Global_8926[14 /*15*/].f_4 = -99;
		Global_8926[4 /*15*/].f_4 = -99;
		if (Global_2696411)
		{
			if (func_342(14))
			{
				func_341(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_341(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_341(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_341(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_341(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB7EB
{
	StringCopy(&(Global_8926[iParam0 /*15*/]), sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = iParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8926[iParam0 /*15*/].f_12 == 0)
	{
		Global_8926[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_13 == 0)
	{
		Global_8926[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8926[iParam0 /*15*/].f_14 == 0)
	{
		Global_8926[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_342(int iParam0)//Position - 0xB8A1
{
	return Global_44181 == iParam0;
}

void func_343(char* sParam0)//Position - 0xB8AF
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_344()//Position - 0xB8CF
{
	if (func_342(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_345();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

var func_345()//Position - 0xB971
{
	func_346();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_346()//Position - 0xB98A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_349(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_348(PLAYER::PLAYER_PED_ID());
			if (func_347(iVar0) && (!func_342(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_347(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_347(int iParam0)//Position - 0xBA87
{
	return iParam0 < 3;
}

int func_348(int iParam0)//Position - 0xBA93
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_349(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_349(int iParam0)//Position - 0xBAD0
{
	if (func_347(iParam0))
	{
		return func_350(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_350(int iParam0)//Position - 0xBAF5
{
	return Global_2201[iParam0 /*29*/];
}

void func_351()//Position - 0xBB04
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		Global_8926[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79539 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_357(iVar2, Global_21066) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_341(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_341(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_341(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44181 == 15 && func_356(0) == 0) && Global_8924 == 0)
		{
			func_341(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 0;
			Global_8925 = 255;
		}
		else
		{
			func_341(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 1;
			Global_8925 = 42;
		}
		if (iVar1 == 1)
		{
			func_341(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_341(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_341(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_341(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_341(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114135.f_14055.f_89 == 1)
		{
			func_341(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114135.f_14055.f_88 == 1)
		{
			func_341(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_341(26, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_341(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_341(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_341(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_341(29, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_341(30, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_341(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_341(32, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_341(33, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_341(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_341(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (func_353())
		{
			func_341(23, "CELL_HACKER_ROB" /* GXT: Darnell Inc. */, 5, "appHackerDen", 62, 1, 1, 0, 0);
		}
		else
		{
			func_341(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		}
		func_341(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_341(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_341(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_341(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_341(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		if (BitTest(Global_4546023, 4))
		{
			func_341(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_341(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_341(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_341(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_341(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_341(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_341(24, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_341(25, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_341(26, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_341(27, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_341(28, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_341(29, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_341(30, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_341(31, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_341(32, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_341(33, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_341(34, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4546023, 4))
		{
			if (Global_1836180)
			{
				func_341(24, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 20))
			{
				func_341(24, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 22))
			{
				func_341(24, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4546023, 26))
			{
				if (func_352())
				{
					func_341(24, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_341(24, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4546023, 4) == 0 && Global_1836180 == 0) && BitTest(Global_4546023, 20) == 0) && BitTest(Global_4546023, 22) == 0) && BitTest(Global_4546023, 26) == 0)
		{
			if (func_352())
			{
				func_341(24, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_341(24, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_352()//Position - 0xC0D0
{
	if (Global_79539)
	{
		if (Global_1836586 || Global_1836587 == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_353()//Position - 0xC0F7
{
	return (func_354() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_354()//Position - 0xC10D
{
	return func_355(9539, -1);
}

bool func_355(int iParam0, int iParam1)//Position - 0xC11D
{
	if (iParam1 == -1)
	{
		iParam1 = func_136();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_356(bool bParam0)//Position - 0xC139
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

int func_357(int iParam0, int iParam1)//Position - 0xC161
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2201[iParam0 /*29*/].f_19[iParam1];
}

void func_358(bool bParam0, int iParam1)//Position - 0xC18B
{
	int iVar0;
	
	if (!func_142(&iVar0, 0, iParam1))
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
		func_359(&(Global_23970.f_6263[iVar0 /*10*/]));
		Global_23970.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23970.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_359(int* iParam0)//Position - 0xC251
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

int func_360()//Position - 0xC27D
{
	if (func_95())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_189(0) || func_188()) || RECORDING::IS_REPLAY_RECORDING())
	{
		func_28(&(Local_204.f_280));
		func_30(&(Local_204.f_280), 0, 0);
		MISC::CLEAR_BIT(&(Local_204.f_5), 16);
		func_117();
		return 0;
	}
	else if (func_34(&(Local_204.f_280)))
	{
		if (!func_29(&(Local_204.f_280), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_204.f_5), 16);
			func_28(&(Local_204.f_280));
		}
	}
	if (func_184(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_361()//Position - 0xC327
{
	if (func_362())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
			{
				if (!BitTest(Local_204.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_204.f_162), true);
					MISC::SET_BIT(&(Local_204.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
			}
		}
	}
	else if (BitTest(Local_204.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_204.f_162), false);
				MISC::CLEAR_BIT(&(Local_204.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
			}
		}
	}
	if (BitTest(Global_1957675, 2))
	{
		MISC::CLEAR_BIT(&Global_1957675, 2);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1957675.f_23, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_1957675.f_23, false);
	}
}

int func_362()//Position - 0xC40E
{
	if (func_184(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2738536, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_363()//Position - 0xC42F
{
	int iVar0;
	
	if (func_101())
	{
		Global_1957675.f_1 = 0;
	}
	if (func_372() || func_219())
	{
		if (!func_34(&(Local_204.f_250)))
		{
			func_30(&(Local_204.f_250), 0, 0);
		}
		else if (func_29(&(Local_204.f_250), Global_1957675.f_1, 0) || func_219())
		{
			func_28(&(Local_204.f_248));
			if (func_101())
			{
				if (func_24(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_371(), func_370(), func_369(), true, false, 1f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(func_371(), func_370(), func_369(), true, false, 1f, false);
				}
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_204.f_134)));
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_204.f_162, true);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_204.f_162);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_204.f_6), 2);
			}
			if (func_40())
			{
				func_368(1);
				if (Local_204.f_28 == 0)
				{
					func_366(6, 0, 0);
				}
				else
				{
					func_366(5, 0, 0);
				}
			}
			if ((((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && !BitTest(Local_204.f_5, 7)) && !BitTest(Global_1957675.f_4, 1)) && func_69(11))
			{
				MISC::SET_BIT(&(Global_1957675.f_4), 0);
				func_364(PLAYER::PLAYER_ID(), func_13(), 0);
				MISC::SET_BIT(&(Global_1957675.f_4), 1);
			}
			func_419(1);
			func_418(5);
		}
	}
	else if (func_34(&(Local_204.f_250)))
	{
		func_232(&(Local_204.f_250), 0, 0);
	}
}

void func_364(int iParam0, int iParam1, int iParam2)//Position - 0xC5B8
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = -2124500184;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam2;
	iVar6 = func_365(1);
	if (!iVar6 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, iVar6, Var0.f_0);
	}
}

var func_365(int iParam0)//Position - 0xC5FF
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
			if (func_26(iVar2, 0, 0))
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

void func_366(int iParam0, bool bParam1, bool bParam2)//Position - 0xC65C
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_367(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_204.f_81 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_204.f_156, 0f, 0f, Local_204.f_121, 2, bParam2, bParam1, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_204.f_81, Local_204.f_161, &cVar0, fVar17, fVar18, iVar16, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_204.f_162), Local_204.f_81, Local_204.f_161, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_367(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_163))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_204.f_163), &cVar0, Local_204.f_161, fVar17, bParam1, bParam2, false, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_204.f_163));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_204.f_81);
}

char* func_367(int iParam0)//Position - 0xC74D
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_368(bool bParam0)//Position - 0xC7BB
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_24(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

float func_369()//Position - 0xC7FE
{
	if (func_17())
	{
		return 1f;
	}
	return 0.5f;
}

int func_370()//Position - 0xC816
{
	if (func_17())
	{
		return 81;
	}
	return 72;
}

Vector3 func_371()//Position - 0xC82C
{
	if (func_17())
	{
		return CAM::GET_CAM_COORD(Local_204.f_172);
	}
	return Local_204.f_153;
}

int func_372()//Position - 0xC84C
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false)) && !BitTest(Local_204.f_5, 2))
	{
		return 1;
	}
	if (Local_204.f_12 == 2)
	{
		Local_204.f_28 = 1;
		return 1;
	}
	if (BitTest(Local_204.f_5, 1))
	{
		return 1;
	}
	if (func_380())
	{
		Local_204.f_28 = 5;
		return 1;
	}
	if (func_156() && func_374())
	{
		Local_204.f_28 = 5;
		return 1;
	}
	if (func_40() || func_17())
	{
		if (func_374())
		{
			Local_204.f_28 = 5;
			return 1;
		}
	}
	if (BitTest(Local_204.f_5, 2))
	{
		Local_204.f_28 = 4;
		return 1;
	}
	if (func_198())
	{
		if (!func_34(&(Local_204.f_258)))
		{
			func_30(&(Local_204.f_258), 0, 0);
		}
		else if (func_29(&(Local_204.f_258), 3000, 0))
		{
			Local_204.f_28 = 0;
			return 1;
		}
	}
	if (BitTest(Local_204.f_5, 7))
	{
		Local_204.f_28 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_204.f_162)) || func_228(NETWORK::NET_TO_ENT(Local_204.f_162), 0))
		{
			if (BitTest(Local_204.f_5, 29))
			{
				Local_204.f_28 = 3;
				return 1;
			}
		}
	}
	if (!func_156() && !func_373())
	{
		if (Local_204.f_153.f_2 >= func_127())
		{
			Local_204.f_28 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_373()//Position - 0xC9B2
{
	return BitTest(Global_1957675.f_2, 0);
}

int func_374()//Position - 0xC9C2
{
	struct<3> Var0;
	int iVar3;
	
	if (func_379())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
		{
			if (func_156())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_378()) && !ENTITY::IS_ENTITY_DEAD(func_378(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_378(), true) };
				}
			}
			else if (func_39())
			{
				if (!func_40())
				{
					iVar3 = func_375(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
			}
			else if (func_17())
			{
				if (func_24(func_16()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (func_24(NETWORK::NET_TO_OBJ(Local_204.f_162)))
			{
				Local_204.f_123 = func_176(NETWORK::NET_TO_OBJ(Local_204.f_162), Var0, 1);
				if (Local_204.f_123 > func_127())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_375(int iParam0)//Position - 0xCB7C
{
	int iVar0;
	
	if (iParam0 != func_13())
	{
		iVar0 = func_377(iParam0);
		if (iVar0 != 0)
		{
			return func_376(iVar0);
		}
	}
	return -1;
}

int func_376(int iParam0)//Position - 0xCBA5
{
	switch (iParam0)
	{
		case 1:
			return 128;
		
		case 2:
			return 129;
		
		case 3:
			return 130;
		
		case 4:
			return 131;
		
		case 5:
			return 132;
		
		case 6:
			return 133;
		
		default:
	}
	return -1;
}

int func_377(int iParam0)//Position - 0xCBF7
{
	if (iParam0 != func_13())
	{
		return Global_1845221[iParam0 /*889*/].f_268.f_435;
	}
	return 0;
}

int func_378()//Position - 0xCC1B
{
	if (Global_1845060 != func_13())
	{
		if (!func_61(Global_1845060) && !func_60(Global_1845060))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1668128))
			{
				return Global_1668128;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1962794[Global_1845060]))
			{
				return Global_1962794[Global_1845060];
			}
		}
	}
	return -1;
}

bool func_379()//Position - 0xCC79
{
	return BitTest(Global_1957675, 6);
}

int func_380()//Position - 0xCC87
{
	float fVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false))
	{
		iVar1 = Global_262145.f_24242 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */;
		if (func_17())
		{
			iVar1 *= 10;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_204.f_153, &fVar0, true, false))
		{
			Local_204.f_124 = (Local_204.f_153.f_2 - fVar0);
			if (Local_204.f_124 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_381()//Position - 0xCCF1
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (!func_101())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false)) && CAM::DOES_CAM_EXIST(Local_204.f_172))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if (BitTest(Local_204.f_5, 1) || func_219())
			{
				return;
			}
			Var0 = { func_382(func_383()) };
			bVar5 = false;
			bVar6 = true;
			iVar7 = 0;
			if (func_17())
			{
				bVar5 = true;
				bVar6 = false;
				iVar7 = 0;
			}
			if (func_49())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
					{
						iVar4 = 1;
					}
				}
				else
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) != 0f)
					{
						iVar4 = 1;
					}
				}
			}
			if (iVar3 && !func_288(bVar5))
			{
				Local_204.f_122 = 140f;
			}
			else if (iVar4 && !func_288(bVar5))
			{
				Local_204.f_122 = 60f;
			}
			else if (!func_17())
			{
				Local_204.f_122 = 100f;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), iVar7, Var0 * Vector(-Local_204.f_122, -Local_204.f_122, -Local_204.f_122), false, true, bVar6, false);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

Vector3 func_382(struct<3> Param0)//Position - 0xCE39
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

Vector3 func_383()//Position - 0xCE78
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_384(&Var0);
	return Var0;
}

void func_384(var uParam0)//Position - 0xCE91
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_385()//Position - 0xCF5A
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	
	if (func_101())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_204.f_162), false)) && CAM::DOES_CAM_EXIST(Local_204.f_172))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			fVar0 = 0f;
			if (!func_52() && !func_33())
			{
				if (!func_280())
				{
					if (func_34(&(Local_204.f_256)))
					{
						iVar1 = func_394((func_32() || func_31()), 2000, Global_262145.f_24240 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_RECHARGE_TIME */);
						if (func_33())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_29(&(Local_204.f_256), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_256)));
							Local_204.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_24(Local_204.f_164))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204.f_164, NETWORK::NET_TO_OBJ(Local_204.f_162), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_204.f_20 = 100;
							func_28(&(Local_204.f_256));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_45))
							{
								AUDIO::STOP_SOUND(Local_204.f_45);
								AUDIO::RELEASE_SOUND_ID(Local_204.f_45);
								Local_204.f_45 = -1;
							}
						}
					}
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					}
					if ((((bVar3 && Local_204.f_20 == 100) && !func_288(0)) && !func_95()) && func_180())
					{
						fVar0 = 120f;
						if (func_33())
						{
							fVar0 = 110f;
						}
						else if (func_39())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_204[1]) != 0f)
						{
							func_393(1);
						}
						else
						{
							func_393(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_30(&(Local_204.f_254), 0, 0);
						func_392(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_44))
						{
							Local_204.f_44 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_44, "HUD_Boost_Loop", Local_204.f_160, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_33())
					{
						fVar0 = 115f;
					}
					else if (func_39())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_204.f_172))
					{
						if (!CAM::IS_CAM_SHAKING(Local_204.f_172))
						{
							CAM::SHAKE_CAM(Local_204.f_172, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_204.f_172, 0.15f);
						}
					}
					if (func_34(&(Local_204.f_254)))
					{
						if (func_29(&(Local_204.f_254), func_394((func_32() || func_31()), 2000, Global_262145.f_24239 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */), 0))
						{
							Local_204.f_20 = 0;
							func_393(0);
							func_392(0);
							func_28(&(Local_204.f_256));
							func_30(&(Local_204.f_256), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_204.f_172, true);
							PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_28(&(Local_204.f_254));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_44))
							{
								AUDIO::STOP_SOUND(Local_204.f_44);
								AUDIO::RELEASE_SOUND_ID(Local_204.f_44);
								Local_204.f_44 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_45))
							{
								Local_204.f_45 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_45, "HUD_Boost_Recharge_Loop", Local_204.f_160, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(func_394((func_32() || func_31()), 2000, Global_262145.f_24239 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */)) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_254))));
							Local_204.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, func_394((func_32() || func_31()), 2000, Global_262145.f_24239 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */), SYSTEM::ROUND((255f * Local_204.f_134)));
						}
					}
				}
			}
			Var5 = { Local_204.f_153 };
			if (BitTest(Local_204.f_5, 1) || func_219())
			{
				return;
			}
			Var8 = { func_382(func_383()) };
			Var11 = { func_382(func_391(func_383())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_390())
			{
				if (Local_204.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_204[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f || Local_204[1] != 0)
					{
						if ((Var5.f_2 - fVar14) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
						{
							fVar15 = 24f;
						}
						else
						{
							fVar15 = 10f;
						}
					}
					else
					{
						fVar15 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, fVar15, false, true, true, false);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (Local_204[2] >= 127)
				{
					Local_204[2] = 127;
				}
				else if (Local_204[2] <= -127)
				{
					Local_204[2] = -127;
				}
				if (Local_204[0] >= 127)
				{
					Local_204[0] = 127;
				}
				else if (Local_204[0] <= -127)
				{
					Local_204[0] = -127;
				}
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f)
				{
					iVar17 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/) != 0f)
				{
					iVar17 = 1;
				}
			}
			if (((iVar16 && func_389()) && !func_95()) || (func_280() && !func_279()))
			{
				fVar20 = Local_204.f_122;
				if (func_179())
				{
					fVar20 = 5f;
				}
				if (func_52() || func_33())
				{
					fVar19 = 10f;
				}
				if (func_280() && !func_279())
				{
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)));
					}
					else
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)));
					}
				}
				else if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/)));
				}
				else
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/)));
				}
				fVar18 = func_388(fVar18, -149f, 149f);
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var21, false, true, true, false);
			}
			else if (((iVar17 && !func_95()) && func_389()) && !func_288(0))
			{
				if (func_52() || func_33())
				{
					fVar25 = 10f;
				}
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					fVar24 = ((Local_204.f_122 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)));
				}
				else
				{
					fVar24 = ((Local_204.f_122 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/)));
				}
				fVar24 = func_388(fVar24, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if (((Local_204[1] > 0 && !func_280()) && !func_288(0)) && !func_95())
			{
				fVar28 = func_387();
				fVar26 = (Local_204.f_122 / (127f / IntToFloat(Local_204[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_204[1])));
				fVar26 = func_388(fVar26, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if ((((Local_204[1] < 0 && !func_280()) && !func_288(0)) && !func_95()) || (func_280() && func_279()))
			{
				if (func_280() && func_279())
				{
					fVar31 = 50f;
					if (func_33())
					{
						fVar29 = (Local_204.f_122 / -1f);
					}
					else
					{
						fVar29 = ((Local_204.f_122 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_387();
					if (func_33())
					{
						fVar29 = (Local_204.f_122 / (127f / IntToFloat(Local_204[1])));
					}
					else
					{
						fVar29 = ((Local_204.f_122 + fVar0) / (127f / IntToFloat(Local_204[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_204[1])));
				}
				fVar29 = func_388(fVar29, -149f, 149f);
				if (func_33())
				{
					if (!func_279())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, -fVar30, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, 41f, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, -fVar30, false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
				}
			}
			Var32 = { func_386(Var8, Var11) };
			if ((!func_280() && !func_288(0)) && !func_95())
			{
				if (Local_204[0] > 0)
				{
					fVar35 = -(Local_204.f_122 / (127f / IntToFloat(Local_204[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_204[0])));
					fVar35 = func_388(fVar35, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_204[0] < 0)
				{
					fVar37 = -(Local_204.f_122 / (127f / IntToFloat(Local_204[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_204[0])));
					fVar37 = func_388(fVar37, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, Var32 * Vector(fVar37, fVar37, fVar37), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_204.f_162), 0, 0f, 0f, -fVar38, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

Vector3 func_386(struct<3> Param0, struct<3> Param3)//Position - 0xD932
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_387()//Position - 0xD96B
{
	if (func_33() || func_52())
	{
		return 40f;
	}
	else if ((func_39() || func_32()) || func_31())
	{
		return 30f;
	}
	else if (func_179())
	{
		return 2.5f;
	}
	return 6.4f;
}

float func_388(float fParam0, float fParam1, float fParam2)//Position - 0xD9C9
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_389()//Position - 0xD9F0
{
	if (func_288(0))
	{
		return 0;
	}
	if (func_280() && !func_279())
	{
		return 0;
	}
	return 1;
}

bool func_390()//Position - 0xDA1A
{
	return BitTest(Global_1957675, 2);
}

Vector3 func_391(struct<2> Param0, var uParam2)//Position - 0xDA28
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

void func_392(bool bParam0)//Position - 0xDA5F
{
	if (bParam0)
	{
		if (!BitTest(Local_204.f_5, 21))
		{
			MISC::SET_BIT(&(Local_204.f_5), 21);
		}
	}
	else if (BitTest(Local_204.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_204.f_5), 21);
	}
}

void func_393(bool bParam0)//Position - 0xDA98
{
	if (bParam0)
	{
		if (!BitTest(Local_204.f_5, 22))
		{
			MISC::SET_BIT(&(Local_204.f_5), 22);
		}
	}
	else if (BitTest(Local_204.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_204.f_5), 22);
	}
}

int func_394(bool bParam0, int iParam1, var uParam2)//Position - 0xDAD1
{
	if (bParam0)
	{
		return iParam1;
	}
	return uParam2;
}

void func_395()//Position - 0xDAE8
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_204.f_162), false))
		{
			if ((func_33() || func_52()) || func_49())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_204.f_153;
				fVar1 = Local_204.f_153.f_1;
			}
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1957675.f_27) && !func_49())
			{
				if (!BitTest(Local_204.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_396(var uParam0)//Position - 0xDB82
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_162))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_43) && uParam0->f_43 == -1)
		{
			uParam0->f_43 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_43, "HUD_Loop", uParam0->f_160, true);
		}
	}
}

void func_397(var uParam0)//Position - 0xDBC4
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_162))
	{
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_33))
		{
			uParam0->f_33 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_33, "Flight_Loop", NETWORK::NET_TO_OBJ(uParam0->f_162), uParam0->f_160, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_132);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_33, "DroneRotationalSpeed", uParam0->f_132);
		}
		if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_42))
		{
			AUDIO::RELEASE_SOUND_ID(uParam0->f_42);
			uParam0->f_42 = -1;
		}
	}
}

void func_398()//Position - 0xDC3F
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
	}
}

void func_399()//Position - 0xDC60
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_204.f_47);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162) && func_26(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false))
			{
				if (func_400(NETWORK::NET_TO_OBJ(Local_204.f_162), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_24851 /* Tunable: AW_DRONE_EMP_RANGE */, 1))
				{
					if (!func_236(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_204.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_204.f_5), 11);
	}
}

bool func_400(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xDD03
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_401()//Position - 0xDD25
{
	int iVar0;
	
	if (((((func_49() || func_33()) || func_52()) || func_17()) || func_32()) || func_31())
	{
		iVar0 = 1000;
		if (func_33() || func_52())
		{
			iVar0 = 7000;
		}
		else if (func_17())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_204.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_RENDERING(Local_204.f_172))
			{
				if (func_24(func_25()))
				{
					if (func_29(&(Local_204.f_274), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), false, false);
						ENTITY::SET_ENTITY_COLLISION(func_25(), true, false);
						PHYSICS::SET_DISABLE_FRAG_DAMAGE(Global_1957675.f_23, true);
						PHYSICS::SET_DISABLE_BREAKING(Global_1957675.f_23, true);
						MISC::SET_BIT(&(Local_204.f_5), 29);
					}
				}
			}
		}
	}
}

void func_402()//Position - 0xDE01
{
	if (!func_17() || PLAYER::PLAYER_ID() == func_13())
	{
		return;
	}
	if (func_29(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/]), 2500, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_210[PLAYER::PLAYER_ID()]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_204.f_210[PLAYER::PLAYER_ID()], false);
		}
		func_28(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/]));
	}
}

void func_403()//Position - 0xDE68
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	sVar0 = "scr_ih_sub";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (func_24(func_16()) && PLAYER::PLAYER_ID() != func_13())
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_210[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				sVar1 = func_410(PLAYER::PLAYER_ID());
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
				Local_204.f_210[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", func_16(), func_409(PLAYER::PLAYER_ID()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				func_30(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			if (func_34(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/])))
			{
				if (func_29(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/]), 1000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_204.f_210[PLAYER::PLAYER_ID()], "flame", 0.15f, false);
					func_405();
					func_295();
					func_381();
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162), true, false);
					}
					func_404();
					if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_42))
					{
						Local_204.f_42 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_42, "HUD_Startup", Local_204.f_160, true);
					}
					func_298();
					func_120();
					func_265(1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_204.f_176 = NETWORK::GET_NETWORK_TIME();
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162), false, false);
					func_418(4);
				}
			}
		}
		else
		{
			func_419(1);
			func_418(7);
		}
	}
}

void func_404()//Position - 0xDFE4
{
	if (func_156() || func_40())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_33())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_52())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_49())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_17())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_405()//Position - 0xE08E
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	
	sVar1 = func_410(PLAYER::PLAYER_ID());
	if (Global_1582037 == 1)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_204.f_147 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	else if (Global_1582037 == 2)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_204.f_147 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	Var5 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_147, true, false, false, true);
	func_407(Local_204.f_147, (Var5.f_0 + 90f), 180f, 0f);
	Var8 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
	Var11 = { 0f, 0f, 0f };
	Local_204.f_118 = func_406(Var11, Var8);
	ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_118);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_204.f_162), (Var5.f_0 - 90f), 0f, Local_204.f_118, 2, true);
	if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_117))
	{
		Local_204.f_117 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_117, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_204.f_162), Local_204.f_160, true, 0);
	}
}

float func_406(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0xE1D8
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_407(struct<3> Param0, struct<3> Param3)//Position - 0xE1F2
{
	if (!func_408(Global_1957675.f_16, Param0, 0))
	{
		Global_1957675.f_16 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1957675.f_19 = { Param3 };
	}
}

bool func_408(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xE23B
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_409(int iParam0)//Position - 0xE282
{
	if (Local_204.f_84[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_410(int iParam0)//Position - 0xE2A7
{
	if (iParam0 == func_13())
	{
		return "";
	}
	switch (Local_204.f_84[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_411()//Position - 0xE338
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_417() || !func_40())
	{
		return;
	}
	switch (Local_204.f_82)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_163))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_200(iVar0))
				{
					if (func_110(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_204.f_6, 3))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_204.f_6), 3);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_416(&(Local_204.f_163), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1, 1, 0, 0, 0, 1, 0))
							{
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_204.f_163, PLAYER::PLAYER_ID(), true);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_204.f_163), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_204.f_82 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				func_366(0, 0, 0);
				Local_204.f_82 = 2;
			}
			break;
		
		case 2:
			if (func_415(0, "CREATE"))
			{
				func_397(&Local_204);
				if (func_414(Local_204.f_163))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_163)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_163), true, false);
					}
				}
				if (func_414(Local_204.f_162))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162), true, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_204.f_166, false, false);
					}
				}
			}
			if (func_412(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204.f_166, NETWORK::NET_TO_OBJ(Local_204.f_162), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_204.f_166, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_204.f_162));
				OBJECT::PLAY_OBJECT_AUTO_START_ANIM(NETWORK::NET_TO_OBJ(Local_204.f_162));
				func_298();
				func_149();
				func_265(1);
				func_277();
				func_385();
				func_404();
				if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_42))
				{
					Local_204.f_42 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_42, "HUD_Startup", Local_204.f_160, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				Local_204.f_176 = NETWORK::GET_NETWORK_TIME();
				func_418(4);
				func_366(1, 1, 0);
				Local_204.f_82 = 3;
			}
			break;
		
		case 3:
			if (func_412(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_366(2, 0, 0);
						Local_204.f_246 = 2;
						break;
					
					case 1:
						func_366(3, 0, 0);
						Local_204.f_246 = 3;
						break;
					
					case 2:
						func_366(4, 0, 0);
						Local_204.f_246 = 4;
						break;
				}
				Local_204.f_82 = 4;
			}
			break;
		
		case 4:
			if (func_412(0))
			{
				func_366(1, 1, 0);
				Local_204.f_82 = 3;
			}
			break;
	}
}

int func_412(bool bParam0)//Position - 0xE602
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_24(iVar0))
	{
		fVar1 = func_413();
		iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_204.f_81);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_368(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_413()//Position - 0xE64F
{
	return 0.95f;
}

int func_414(int iParam0)//Position - 0xE65C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_415(int iParam0, char* sParam1)//Position - 0xE67E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_204.f_81);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_204.f_163), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_204.f_162), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_416(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0xE6E5
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

bool func_417()//Position - 0xE78C
{
	return BitTest(Global_1957675, 13);
}

void func_418(int iParam0)//Position - 0xE79B
{
	if (Local_204.f_244 != iParam0)
	{
		Local_204.f_244 = iParam0;
	}
}

void func_419(bool bParam0)//Position - 0xE7B2
{
	if (bParam0)
	{
		if (!func_417())
		{
			MISC::SET_BIT(&Global_1957675, 13);
		}
	}
	else if (func_417())
	{
		MISC::CLEAR_BIT(&Global_1957675, 13);
	}
}

void func_420()//Position - 0xE7E5
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if (!CAM::DOES_CAM_EXIST(Local_204.f_172) && BitTest(Local_204.f_5, 0))
			{
				if (func_432())
				{
					if (func_373())
					{
						func_326(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_49())
					{
						func_326(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_431())
					{
						HUD::THEFEED_HIDE();
					}
					else
					{
						HUD::THEFEED_SHOW();
					}
					Local_204.f_172 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FOV(Local_204.f_172, Local_204.f_128);
					CAM::SET_CAM_NEAR_CLIP(Local_204.f_172, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_204.f_172, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_49())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { func_430() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_204.f_172, NETWORK::NET_TO_OBJ(Local_204.f_162), 0f, 0f, 180f, Var0, true);
					if (func_49())
					{
						CAM::SET_CAM_ROT(Local_204.f_172, func_429() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_204.f_153, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_204.f_153, CAM::GET_CAM_ROT(Local_204.f_172, 2));
					if (!func_17())
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162), false, false);
					}
					if (!func_373())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_40() && !func_17())
					{
						func_404();
						if (AUDIO::HAS_SOUND_FINISHED(Local_204.f_42))
						{
							Local_204.f_42 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_42, "HUD_Startup", Local_204.f_160, true);
						}
						func_298();
						if (func_101())
						{
							func_120();
						}
						else
						{
							func_149();
						}
						func_265(1);
						func_277();
						func_385();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						Local_204.f_176 = NETWORK::GET_NETWORK_TIME();
					}
					func_426(1);
					func_425(1);
					func_423(158);
					MISC::SET_BIT(&(Local_106[PLAYER::PLAYER_ID() /*3*/]), 0);
					if (!func_40() && !func_17())
					{
						if (func_32() || func_31())
						{
							if (func_422(Local_204.f_36) && !AUDIO::HAS_SOUND_FINISHED(Local_204.f_36))
							{
								AUDIO::STOP_SOUND(Local_204.f_36);
								AUDIO::RELEASE_SOUND_ID(Local_204.f_36);
								Local_204.f_36 = -1;
							}
						}
						func_418(4);
					}
					else if (func_17())
					{
						func_418(3);
					}
					else
					{
						Local_204.f_156 = { func_6(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_204.f_156, &(Local_204.f_156.f_2), false, false);
						Local_204.f_121 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_421();
						Local_204.f_156 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_204.f_156, Local_204.f_121, -0.0695723f, 0.177497f, 0f) };
						func_418(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_204.f_172))
				{
				}
				if (!BitTest(Local_204.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
		}
	}
}

void func_421()//Position - 0xEAC2
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_422(int iParam0)//Position - 0xEB0B
{
	if (iParam0 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_423(int iParam0)//Position - 0xEB1E
{
	int iVar0;
	
	if (Global_262145.f_9090 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_424() /*5571*/].f_681.f_4245[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_424()//Position - 0xEB81
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_425(bool bParam0)//Position - 0xEB8E
{
	if (bParam0)
	{
		if (!BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372, 26))
		{
			MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372), 26);
		}
	}
	else if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372, 26))
	{
		MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372), 26);
	}
}

void func_426(bool bParam0)//Position - 0xEBFB
{
	if (bParam0)
	{
		if (!func_93())
		{
			MISC::SET_BIT(&Global_1957675, 5);
		}
	}
	else
	{
		if (func_93())
		{
			MISC::CLEAR_BIT(&Global_1957675, 5);
		}
		func_427(0);
	}
}

void func_427(bool bParam0)//Position - 0xEC31
{
	if (bParam0)
	{
		if (!func_428())
		{
			MISC::SET_BIT(&Global_1957675, 12);
		}
	}
	else if (func_428())
	{
		MISC::CLEAR_BIT(&Global_1957675, 12);
	}
}

bool func_428()//Position - 0xEC64
{
	return BitTest(Global_1957675, 12);
}

Vector3 func_429()//Position - 0xEC73
{
	return Global_1957675.f_19;
}

Vector3 func_430()//Position - 0xEC83
{
	if (func_31())
	{
		return 0f, -0.2f, -0.02f;
	}
	else if (func_33() || func_52())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_49())
	{
		return 0f, -0.9f, 0f;
	}
	else if ((func_39() || func_179()) || func_32())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_17())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_431()//Position - 0xED21
{
	return BitTest(Global_1957675, 10);
}

int func_432()//Position - 0xED30
{
	if (func_53() && !func_55())
	{
		return 1;
	}
	if (func_436())
	{
		return 1;
	}
	if (func_435())
	{
		return 1;
	}
	if (func_55() && func_434())
	{
		return 1;
	}
	if (func_433() && func_434())
	{
		return 1;
	}
	if (!func_87(PLAYER::PLAYER_ID(), 0) && !func_322())
	{
		return 1;
	}
	return 0;
}

int func_433()//Position - 0xEDA7
{
	if (func_59(PLAYER::PLAYER_ID()) && func_56())
	{
		if (Global_1582037 == 2 || Global_1582037 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_434()//Position - 0xEDDD
{
	if (Global_1582028 != -1 || Global_1582034 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_57())
		{
			return 0;
		}
	}
	return 0;
}

int func_435()//Position - 0xEE5F
{
	return 0;
}

int func_436()//Position - 0xEE68
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_55() || func_437())
	{
		return 0;
	}
	if (func_435())
	{
		return 0;
	}
	return 1;
}

int func_437()//Position - 0xEEA1
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.5931f, -3011.17f, -80.24994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.1448f, -80.49994f, -1420.6843f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_438()//Position - 0xEF0B
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("blazer5");
	if (func_200(Local_204.f_243) && func_200(iVar0))
	{
		if (!BitTest(Local_204.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
			{
				if (!func_373())
				{
					if (func_156())
					{
						if (func_24(func_378()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(func_378(), true) };
						}
					}
					else
					{
						Var1 = { Local_204.f_141 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_326(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!BitTest(Local_204.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_204.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!BitTest(Local_204.f_5, 19))
						{
							if (func_444())
							{
								if (func_441())
								{
									MISC::SET_BIT(&(Local_204.f_5), 19);
								}
							}
							else
							{
								if (!func_285(func_440()))
								{
									Local_204.f_141 = { func_440() };
								}
								MISC::SET_BIT(&(Local_204.f_5), 19);
								if (func_17())
								{
									Local_204.f_141.f_2 = (Local_204.f_141.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_204.f_5, 19) || func_373())
				{
					if (!BitTest(Local_204.f_5, 20))
					{
						Local_204.f_166 = VEHICLE::CREATE_VEHICLE(iVar0, Local_204.f_141, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_204.f_166, true, false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_204.f_166, Local_204.f_141, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_204.f_166, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_204.f_166, false, false);
						MISC::SET_BIT(&(Local_204.f_5), 20);
					}
					else if (func_110(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_204.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_204.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_439();
							if (func_40())
							{
								Local_204.f_156 = { func_6(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_204.f_156, &(Local_204.f_156.f_2), false, false);
								Local_204.f_141 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_204.f_161, "ENTER", Local_204.f_156, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0f, 2) };
							}
							if (func_416(&(Local_204.f_162), Local_204.f_243, Local_204.f_141, 0, 1, 1, 1, 1, 0, bVar4, 0))
							{
								Global_1957675.f_23 = NETWORK::NET_TO_OBJ(Local_204.f_162);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_204.f_162), true, false);
								if (func_156())
								{
									if (func_24(func_378()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_25(), ENTITY::GET_ENTITY_ROTATION(func_378(), 2), 2, true);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_378()) + 180f);
									}
								}
								Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_433 = { Local_204.f_141 };
								Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_436 = fVar5;
								Local_106[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_204.f_162;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_204.f_162, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_204.f_162), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_204.f_162), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_25(), Local_204.f_141, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_25(), fVar5);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_25(), true);
								if (!func_285(func_429()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_25(), func_429(), 2, true);
								}
								if (func_49() || func_17())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), false, false);
								}
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_204.f_162, true);
								if (func_184(PLAYER::PLAYER_ID()) || func_31())
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24241 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */ * 5, 0, 0);
								}
								else if (func_17())
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), 1, 0, 0);
									NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_204.f_162, true);
									ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_204.f_162), 700);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24241 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */, 0, 0);
								}
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_204.f_162, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_204.f_162), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_204.f_141, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_204.f_162), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_204.f_162), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_204.f_243);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_204.f_162), false);
				if (func_24(Local_204.f_166))
				{
					if (func_24(NETWORK::NET_TO_ENT(Local_204.f_162)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204.f_166, NETWORK::NET_TO_OBJ(Local_204.f_162), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_204.f_5), 0);
					}
				}
			}
		}
	}
}

int func_439()//Position - 0xF36E
{
	if (func_40())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

Vector3 func_440()//Position - 0xF38D
{
	return Global_1957675.f_16;
}

int func_441()//Position - 0xF39D
{
	if (Local_204.f_16 == 0)
	{
		if (!BitTest(Local_204.f_5, 14))
		{
			if ((!func_184(PLAYER::PLAYER_ID()) && func_156()) && func_24(func_378()))
			{
				Local_204.f_141 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_378(), true), ENTITY::GET_ENTITY_HEADING(func_378()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_204.f_5), 14);
			}
			else
			{
				if (func_156() && func_24(func_378()))
				{
					Local_204.f_141 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_378(), true), ENTITY::GET_ENTITY_HEADING(func_378()), -0.7f, 1.6f, 4f) };
				}
				Local_204.f_141 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141 - 1.5f), (Local_204.f_141 + 1.5f));
				Local_204.f_141.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141.f_1 - 1.5f), (Local_204.f_141.f_1 + 1.5f));
				Local_204.f_141.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141.f_2 + 0.5f), (Local_204.f_141.f_2 + 1.5f));
				if (!func_443(Local_204.f_141))
				{
					MISC::SET_BIT(&(Local_204.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_204.f_5, 15))
		{
			Local_204.f_141 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141 - 1.5f), (Local_204.f_141 + 1.5f));
			Local_204.f_141.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141.f_1 - 1.5f), (Local_204.f_141.f_1 + 1.5f));
			Local_204.f_141.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_204.f_141.f_2 + 0.5f), (Local_204.f_141.f_2 + 1.5f));
			if (!func_443(Local_204.f_141))
			{
				MISC::CLEAR_BIT(&(Local_204.f_5), 15);
			}
		}
		func_442(Local_204.f_141);
	}
	else if (Local_204.f_16 == 1 && !func_443(Local_204.f_141))
	{
		return 1;
	}
	else
	{
		Local_204.f_16 = 0;
		MISC::SET_BIT(&(Local_204.f_5), 15);
	}
	return 0;
}

void func_442(struct<3> Param0)//Position - 0xF581
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_204.f_15)
	{
		case 0:
			if (func_156())
			{
				if (func_24(func_378()))
				{
					iVar0 = func_378();
				}
			}
			if (func_33() || func_52())
			{
				fVar1 = func_243(Local_204.f_243);
			}
			else
			{
				fVar1 = (func_243(Local_204.f_243) * 11f);
			}
			Local_204.f_171 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_204.f_171 != 0)
			{
				Local_204.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_204.f_171, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_204.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_204.f_16 = 2;
					Local_204.f_171 = 0;
					Local_204.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_204.f_15 = 0;
			}
			break;
	}
}

int func_443(struct<3> Param0)//Position - 0xF659
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.2699f, -228.70403f, 53.76435f, -1096.765f, -258.69f, 35.778076f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_444()//Position - 0xF696
{
	if (func_156())
	{
		return 1;
	}
	if (func_39() && !func_40())
	{
		return 1;
	}
	return 0;
}

int func_445()//Position - 0xF6BF
{
	if (func_322())
	{
		return Global_1943917.f_741 == 0;
	}
	return 0;
}

void func_446()//Position - 0xF6DB
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_204.f_144 = { func_286(&Local_204) };
		if (!func_285(func_440()))
		{
			Local_204.f_141 = { func_440() };
		}
		else
		{
			Local_204.f_141 = { func_6(PLAYER::PLAYER_ID()) };
			Local_204.f_141 = { Local_204.f_141, Local_204.f_141.f_1, (Local_204.f_141.f_2 + 1.5f) };
		}
		if (func_32() || func_31())
		{
			if (!func_422(Local_204.f_36) || AUDIO::HAS_SOUND_FINISHED(Local_204.f_36))
			{
				Local_204.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_204.f_36, "HUD_Static_Loop", Local_204.f_160, true);
			}
		}
		if (func_87(PLAYER::PLAYER_ID(), 0))
		{
			func_497(1);
		}
		if (func_87(PLAYER::PLAYER_ID(), 0))
		{
			func_494();
		}
		else if (((func_492(PLAYER::PLAYER_ID()) == 2 || func_492(PLAYER::PLAYER_ID()) == 1) && !BitTest(Global_1964609, 6)) && !BitTest(Global_1964610, 0))
		{
			if (BitTest(Global_2708242, 0))
			{
				func_491(1);
				func_482(0, 0);
				func_481();
				func_427(1);
				func_418(1);
			}
		}
		else if ((func_54() && func_477()) && !BitTest(Global_1964609, 6))
		{
			func_462();
		}
		else if (BitTest(Global_1964609, 6) && BitTest(Global_1964610, 0))
		{
			func_482(0, 0);
			func_427(1);
			func_418(1);
		}
		else if (func_17())
		{
			func_448();
		}
		else if (func_40() && !func_447())
		{
			HUD::CLEAR_HELP(true);
			func_154("PIM_DRONAMOS" /* GXT: You are not in a safe place to launch the Nano Drone. Find an open space before launching. */, -1);
			func_326(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_418(7);
		}
		else if (func_285(Local_204.f_138))
		{
			Local_204.f_159 = 0;
			func_427(1);
			func_418(1);
		}
	}
}

bool func_447()//Position - 0xF8A6
{
	return BitTest(Global_1957675, 23);
}

void func_448()//Position - 0xF8B5
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_433() && !func_461()) && !func_452())
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (Global_1582037 == 1)
			{
				Local_204.f_84[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			}
			else
			{
				Local_204.f_84[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
			}
			if (Global_1582037 == 1)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_410(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_204.f_147 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			else if (Global_1582037 == 2)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_410(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_204.f_147 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			Var4 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
			func_407(Local_204.f_147, (Var4.f_0 + 90f), 180f, Var4.f_2);
			func_427(1);
			func_451(Local_204.f_84[PLAYER::PLAYER_ID()]);
			func_418(1);
			func_450();
			func_449();
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!func_24(func_16()))
	{
	}
	if (func_461())
	{
		if (func_220("MP_SUBSEAT_2" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to launch a guided missile. ~n~Press ~INPUT_CONTEXT~ to stand up. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_449()//Position - 0xFA1B
{
	Global_2739811.f_379++;
}

void func_450()//Position - 0xFA33
{
	Global_2739811.f_379 = 0;
	Global_2739811.f_379.f_1 = 0;
}

void func_451(var uParam0)//Position - 0xFA4D
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1799415011;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	iVar4 = func_217(0, 1);
	if (iVar4 != 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

int func_452()//Position - 0xFA87
{
	struct<3> Var0;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.1323f, -79.99994f, -1421.9803f, -3009.1213f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1957675.f_2, 2))
	{
		return 1;
	}
	if (func_460())
	{
		return 1;
	}
	if (func_459())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_322())
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_ID(), 0))
	{
		if (func_61(Global_1845060) || func_60(Global_1845060))
		{
			return 1;
		}
	}
	if (func_156())
	{
		if (func_458())
		{
			if (func_457())
			{
				return 1;
			}
			if (BitTest(Local_204.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_17())
	{
		if ((func_456() && Global_1582037 == 1) || (func_455() && Global_1582037 == 2))
		{
			return 1;
		}
		if (BitTest(Local_204.f_5, 28))
		{
			return 1;
		}
		if (!func_24(func_16()))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_16(), -1, false);
		if (func_24(iVar3))
		{
			if (PED::IS_PED_A_PLAYER(iVar3))
			{
				if (func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_224(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_94(0))
	{
		return 1;
	}
	if (func_337())
	{
		return 1;
	}
	if (func_156())
	{
		if (func_53())
		{
			if (func_26(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_176(PLAYER::PLAYER_PED_ID(), -1422.1885f, -3015.9255f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_454())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_453(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_262145.f_24250 /* Tunable: BB_TERRORBYTE_DISABLE_DISABLE_DRONE_STATION */)
	{
		return 1;
	}
	if (BitTest(Local_204.f_5, 27))
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_ID(), 0))
	{
		if (func_24(func_378()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_378(), -136.16142f, 4617.176f, 124.513405f, -490.30576f, 4924.749f, 159.06767f, 19.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_378(), 908.465f, 34.857258f, 79.354294f, 926.41394f, 64.377426f, 87.99218f, 19f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_378(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1582032)
	{
		return 1;
	}
	if (Global_2711015)
	{
		return 1;
	}
	if (Global_2711010)
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0, int iParam1)//Position - 0xFD8A
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_454()//Position - 0xFDE0
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.5879f, -3013.3743f, -79.99994f, -1421.9183f, -3012.8044f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_455()//Position - 0xFE1E
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845221[Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 /*889*/].f_268.f_486, 2);
	}
	return 0;
}

int func_456()//Position - 0xFE7E
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845221[Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 /*889*/].f_268.f_486, 1);
	}
	return 0;
}

int func_457()//Position - 0xFEDE
{
	if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845221[Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 /*889*/].f_268.f_372, 20);
	}
	return 0;
}

int func_458()//Position - 0xFF30
{
	if (func_184(PLAYER::PLAYER_ID()) && Global_1957675.f_6 == -1)
	{
		return 0;
	}
	return 1;
}

int func_459()//Position - 0xFF55
{
	if (Global_2672939.f_1023.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_460()//Position - 0xFF6F
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

int func_461()//Position - 0xFF84
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_79(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		return 1;
	}
	return 0;
}

void func_462()//Position - 0x10060
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_452())
	{
		if ((((((func_476() || func_475()) && !Global_1928799) && func_477()) && !BitTest(Global_2708120, 6)) && Global_1574973) && !(func_476() && Global_262145.f_26208 /* Tunable: AW_TABLET_DISABLE_SPECTATOR_DRONE */))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26210 /* Tunable: AW_TABLET_SPECTATOR_DRONE_COST */, false, false, true, -1, 0) || BitTest(Global_2708120, 2))
				{
					MISC::SET_BIT(&Global_2708120, 0);
					func_482(0, 0);
					func_427(1);
					func_418(1);
					func_470();
					func_468(73, -1);
					func_464();
					Var0 = { func_463() };
					func_407(Var0, 0f, 0f, 0f);
					if (func_476())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!BitTest(Global_2708120, 4))
				{
					MISC::SET_BIT(&Global_2708120, 4);
				}
			}
		}
	}
}

Vector3 func_463()//Position - 0x101A2
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_180500.f_1 == 3 || Global_4718592.f_180500.f_1 == 3) || Global_4718592.f_180500.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_464()//Position - 0x10238
{
	int iVar0;
	
	iVar0 = func_465(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_379.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_379.f_3), 13);
	}
}

int func_465(int iParam0, int iParam1)//Position - 0x10285
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_466(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_466(int iParam0, var uParam1)//Position - 0x102A9
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_467(uParam1));
}

int func_467(var uParam0)//Position - 0x102BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_136();
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

void func_468(int iParam0, int iParam1)//Position - 0x102F3
{
	int iVar0;
	
	iVar0 = func_465(iParam0, func_467(iParam1));
	iVar0++;
	func_469(iParam0, iVar0, iParam1);
}

void func_469(int iParam0, int iParam1, var uParam2)//Position - 0x10319
{
	int iVar0;
	
	iVar0 = func_466(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

void func_470()//Position - 0x10335
{
	func_471(7985, -1);
}

void func_471(int iParam0, int iParam1)//Position - 0x10345
{
	int iVar0;
	
	iVar0 = func_474(iParam0, func_467(iParam1));
	iVar0++;
	func_472(iParam0, iVar0, iParam1, 1);
}

void func_472(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1036C
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_473(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_473(int iParam0, var uParam1)//Position - 0x1039A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_467(uParam1));
}

int func_474(int iParam0, var uParam1)//Position - 0x103AF
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_473(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_475()//Position - 0x103DE
{
	return Global_2696444;
}

int func_476()//Position - 0x103EA
{
	if (Global_2696443 >= 0 && Global_2696443 < 10)
	{
		return 1;
	}
	return 0;
}

int func_477()//Position - 0x1040C
{
	int iVar0;
	int iVar1;
	
	if (func_480() && !func_479())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058116.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_3592[iVar0 /*26190*/].f_8558[iVar1], 23) && BitTest(Global_4718592.f_3592[iVar0 /*26190*/].f_8558[iVar1], 24)) && BitTest(Global_4718592.f_3592[iVar0 /*26190*/].f_8558[iVar1], 25)) && BitTest(Global_4718592.f_3592[iVar0 /*26190*/].f_8558[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_475() || func_478(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

var func_478(int iParam0)//Position - 0x10504
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_36.f_18, 14);
}

int func_479()//Position - 0x1051C
{
	if (Global_4718592.f_129054 == 1 || Global_4718592.f_129054 == 2)
	{
		return 1;
	}
	return 0;
}

var func_480()//Position - 0x1054A
{
	return BitTest(Global_4718592.f_180429, 12);
}

void func_481()//Position - 0x1055F
{
	MISC::CLEAR_BIT(&Global_2708242, 0);
}

void func_482(bool bParam0, bool bParam1)//Position - 0x10570
{
	int iVar0;
	int iVar1;
	
	Local_204.f_122 = Global_262145.f_24244 /* Tunable: BB_TERRORBYTE_DRONE_FORWARD_SPEED */;
	Local_204.f_133 = 40f;
	if (func_182())
	{
		Local_204.f_122 = 200f;
		Local_204.f_133 = 90f;
	}
	else if (func_52() || func_33())
	{
		Local_204.f_122 = (Local_204.f_122 * 4.5f);
	}
	else if (func_49())
	{
		Local_204.f_122 = 100f;
		Local_204.f_133 = 26f;
	}
	else if (func_39())
	{
		Local_204.f_122 = 100f;
		Local_204.f_133 = 70f;
	}
	else if (func_179())
	{
		Local_204.f_122 = 10f;
		Local_204.f_133 = 35f;
	}
	else if (func_32() || func_31())
	{
		Local_204.f_122 = 70f;
		Local_204.f_133 = 70f;
	}
	else if (func_17())
	{
		Local_204.f_122 = 149f;
		Local_204.f_133 = 16f;
	}
	if (func_31())
	{
		Local_204.f_243 = joaat("m24_2_prop_m42_drone_01a");
		func_490(5f);
		func_208(func_169());
	}
	else if (func_52())
	{
		Local_204.f_243 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_33())
	{
		Local_204.f_243 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_49())
	{
		Local_204.f_243 = joaat("xs_prop_arena_airmissile_01a");
		func_489(1);
	}
	else if (func_39())
	{
		if (!func_40())
		{
			iVar0 = func_488(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_204.f_243 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_204.f_243 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_204.f_243 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_204.f_243 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_204.f_243 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_179() || func_32())
	{
		Local_204.f_243 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_17())
	{
		Local_204.f_243 = joaat("h4_prop_h4_airmissile_01a");
		func_489(1);
	}
	else
	{
		Local_204.f_243 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_204.f_141 = { Local_204.f_147 };
	}
	Global_1957675.f_1 = 1500;
	MISC::CLEAR_BIT(&(Global_1957675.f_4), 0);
	MISC::CLEAR_BIT(&(Global_1957675.f_4), 1);
	func_487();
	func_486(1);
	func_485(1);
	if (func_52() || func_101())
	{
		func_484(1);
	}
	else if (func_33())
	{
		func_484(0);
	}
	if (func_40())
	{
		Local_204.f_161 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_204.f_161);
	}
	if (func_33())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_40())
	{
		func_483(Global_262145.f_28314 /* Tunable: CH_NANO_DRONE_DISTANCE_LIMIT */);
	}
	else if (func_39() && !func_40())
	{
		func_483(Global_262145.f_28315 /* Tunable: CH_ARCADE_DRONE_DISTANCE_LIMIT */);
	}
	else if (func_17())
	{
		func_483(SYSTEM::TO_FLOAT(Global_262145.f_29636 /* Tunable: IH_SUBMARINE_MISSILES_DISTANCE */));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_204.f_48[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_156() && !func_373())
	{
		func_483(200f);
	}
	func_104(Global_1837320);
	if (bParam0)
	{
	}
}

void func_483(float fParam0)//Position - 0x1088A
{
	if (Global_1957675.f_11 != fParam0)
	{
		Global_1957675.f_11 = fParam0;
	}
}

void func_484(bool bParam0)//Position - 0x108A6
{
	if (bParam0)
	{
		if (!func_218())
		{
			MISC::SET_BIT(&Global_1957675, 8);
		}
	}
	else if (func_218())
	{
		MISC::CLEAR_BIT(&Global_1957675, 8);
	}
}

void func_485(bool bParam0)//Position - 0x108D9
{
	if (bParam0)
	{
		if (!func_390())
		{
			MISC::SET_BIT(&Global_1957675, 2);
		}
	}
	else if (func_390())
	{
		MISC::CLEAR_BIT(&Global_1957675, 2);
	}
}

void func_486(bool bParam0)//Position - 0x1090A
{
	if (bParam0)
	{
		if (!func_275())
		{
			MISC::SET_BIT(&Global_1957675, 4);
		}
	}
	else if (func_275())
	{
		MISC::CLEAR_BIT(&Global_1957675, 4);
	}
}

void func_487()//Position - 0x1093B
{
	if (!Local_204.f_159)
	{
		Local_204.f_18 = 100;
	}
	if (func_179())
	{
		Local_204.f_24 = 100;
	}
	Local_204.f_19 = 0;
	Local_204.f_20 = 100;
	Local_204.f_128 = 90f;
	Local_204.f_131 = 90f;
	if (!func_101())
	{
		Local_204.f_173 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	}
	else if (func_17())
	{
		Local_204.f_173 = func_129();
	}
	else
	{
		Local_204.f_173 = func_128();
	}
	if (func_32() || func_31())
	{
		Local_204.f_160 = "GTAO_Drone_Sounds";
	}
	else if (func_52())
	{
		Local_204.f_160 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_33())
	{
		Local_204.f_160 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_49())
	{
		Local_204.f_160 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_17())
	{
		Local_204.f_160 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_204.f_160 = "DLC_BTL_Drone_Sounds";
	}
}

int func_488(int iParam0)//Position - 0x10A18
{
	if (iParam0 != func_13())
	{
		return Global_2657991[iParam0 /*467*/].f_440.f_1;
	}
	return -1;
}

void func_489(bool bParam0)//Position - 0x10A3B
{
	if (bParam0)
	{
		if (!func_229())
		{
			MISC::SET_BIT(&Global_1957675, 15);
		}
	}
	else if (func_229())
	{
		MISC::CLEAR_BIT(&Global_1957675, 15);
	}
}

void func_490(float fParam0)//Position - 0x10A6E
{
	if (Global_1957675.f_9 != fParam0)
	{
		Global_1957675.f_9 = fParam0;
	}
}

void func_491(bool bParam0)//Position - 0x10A8A
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 4))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 4);
		}
	}
	else if (BitTest(Global_1957675.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 4);
	}
}

int func_492(int iParam0)//Position - 0x10ACE
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_493())
	{
		return Global_2708147.f_1;
	}
	return Global_2648914.f_1400[iParam0 /*3*/].f_1;
}

int func_493()//Position - 0x10B00
{
	if (((Global_2708150 != 0 && Global_2708150 == Global_2708151) && Global_2708139 != 3) && Global_2708139 != 1)
	{
		return 0;
	}
	return 1;
}

void func_494()//Position - 0x10B3A
{
	if (!func_452())
	{
		if (func_55())
		{
			if (func_436())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_496("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
				}
			}
			else if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_55() || func_435())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
				{
					func_427(1);
					func_418(1);
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_204.f_159 = 0;
					func_427(1);
					func_418(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((func_53() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.6843f, -3010.617f, -77.99994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0)) && func_436())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_496("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
			}
			if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					Local_204.f_159 = 0;
					func_427(1);
					func_418(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_495() || func_55())
		{
			if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_495()//Position - 0x10CDE
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_496(char* sParam0)//Position - 0x10D93
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_497(bool bParam0)//Position - 0x10DA9
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 1))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 1);
		}
	}
	else if (BitTest(Global_1957675.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 1);
	}
}

void func_498()//Position - 0x10DED
{
	char* sVar0;
	
	if (Local_204.f_47 == -1)
	{
		return;
	}
	if (!func_500(Local_204.f_47) && !func_499(Local_204.f_47))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_106[Local_204.f_47 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_177[Local_204.f_47]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_500(Local_204.f_47))
				{
					Local_204.f_177[Local_204.f_47] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_204.f_177[Local_204.f_47] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_177[Local_204.f_47]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_204.f_177[Local_204.f_47], false);
	}
}

int func_499(int iParam0)//Position - 0x10EE8
{
	if (iParam0 != func_13())
	{
		if (Local_106[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)//Position - 0x10F0B
{
	if (iParam0 != func_13())
	{
		if (Local_106[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_501()//Position - 0x10F2D
{
	if (!func_518(6) && !func_504())
	{
		return;
	}
	if (Local_204.f_47 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_106[Local_204.f_47 /*3*/].f_2) && func_24(NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2)))
		{
			if (func_503(Local_204.f_47))
			{
				Local_204.f_160 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_502(Local_204.f_47))
			{
				Local_204.f_160 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_500(Local_204.f_47))
			{
				Local_204.f_160 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_499(Local_204.f_47))
			{
				Local_204.f_160 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_204.f_160 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_204.f_48[Local_204.f_47] == -1)
			{
				Local_204.f_48[Local_204.f_47] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_204.f_48[Local_204.f_47], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_106[Local_204.f_47 /*3*/].f_2), Local_204.f_160, false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_204.f_48[Local_204.f_47], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_204.f_48[Local_204.f_47], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_204.f_48[Local_204.f_47] != -1)
		{
			AUDIO::STOP_SOUND(Local_204.f_48[Local_204.f_47]);
			AUDIO::RELEASE_SOUND_ID(Local_204.f_48[Local_204.f_47]);
			Local_204.f_48[Local_204.f_47] = -1;
		}
	}
}

int func_502(int iParam0)//Position - 0x1107E
{
	if (iParam0 != func_13())
	{
		if (Local_106[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_503(int iParam0)//Position - 0x110A0
{
	if (iParam0 != func_13())
	{
		if (Local_106[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_504()//Position - 0x110C2
{
	return BitTest(Global_1943917.f_7, 14);
}

void func_505()//Position - 0x110D3
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	if (Local_204.f_47 == -1)
	{
		return;
	}
	iVar0 = Local_204.f_47;
	if (!func_26(iVar0, 1, 1))
	{
		return;
	}
	if (!func_518(6) && !func_504())
	{
		return;
	}
	if (BitTest(Local_204.f_119, Local_204.f_47))
	{
		iVar1 = func_506(Global_2657991[Local_204.f_47 /*467*/].f_324.f_11);
		if (!func_24(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_210[iVar0]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
				sVar3 = func_410(iVar0);
				iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, sVar3);
				Local_204.f_210[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_409(iVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!func_34(&(Local_204.f_286[iVar0 /*2*/])))
			{
				func_30(&(Local_204.f_286[iVar0 /*2*/]), 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_204.f_210[iVar0], "flame", 0.15f, false);
			}
			if (func_34(&(Local_204.f_286[iVar0 /*2*/])))
			{
				if (func_29(&(Local_204.f_286[iVar0 /*2*/]), 3000, 0))
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_210[iVar0]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_204.f_210[iVar0], false);
					}
					func_28(&(Local_204.f_286[iVar0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_204.f_119), Local_204.f_47);
				}
				else if (func_29(&(Local_204.f_286[iVar0 /*2*/]), 2000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_204.f_210[iVar0], "flame", 0f, false);
				}
			}
		}
	}
}

int func_506(int iParam0)//Position - 0x11259
{
	if (iParam0 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1962860[iParam0]))
		{
			return Global_1962860[iParam0];
		}
	}
	return -1;
}

void func_507()//Position - 0x11285
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_518(6))
				{
					func_509(iVar0);
				}
				break;
			
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1799415011:
						if (Global_1689004.f_878)
						{
							return;
						}
						func_508(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_508(int iParam0)//Position - 0x11302
{
	struct<4> Var0;
	
	if (!func_518(6) && !func_504())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 != func_13())
		{
			Local_204.f_84[Var0.f_1] = Var0.f_3;
			MISC::SET_BIT(&(Local_204.f_119), Var0.f_1);
		}
	}
}

void func_509(int iParam0)//Position - 0x11355
{
	struct<6> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_204.f_162) == Var0.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_204.f_28 = 2;
							if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && func_69(11)) && !BitTest(Global_1957675.f_4, 1))
							{
								func_364(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)), 0);
								MISC::SET_BIT(&(Global_1957675.f_4), 1);
							}
						}
					}
				}
				if ((((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0)) && func_69(11)) && Var0.f_5) && !BitTest(Global_1957675.f_4, 1))
				{
					MISC::SET_BIT(&(Global_1957675.f_4), 0);
					if (Var0.f_0 == Var0.f_1 || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						func_364(PLAYER::PLAYER_ID(), PLAYER::PLAYER_ID(), 0);
						MISC::SET_BIT(&(Global_1957675.f_4), 1);
					}
					else
					{
						func_364(PLAYER::PLAYER_ID(), func_13(), 1);
						MISC::SET_BIT(&(Global_1957675.f_4), 1);
					}
				}
			}
		}
	}
}

void func_510()//Position - 0x114A5
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_204.f_162), false))
		{
			Local_204.f_153 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_204.f_162), true) };
			Local_204.f_127 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_204.f_162));
			if (!func_34(&(Local_204.f_266)))
			{
				func_30(&(Local_204.f_266), 0, 0);
			}
			else if (func_29(&(Local_204.f_266), 1000, 0))
			{
				if (!func_408(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_433, Local_204.f_153, 0))
				{
					Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_433 = { Local_204.f_153 };
				}
				if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_436 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_204.f_162)))
				{
					Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_436 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_204.f_162));
				}
				func_28(&(Local_204.f_266));
			}
		}
	}
	if (func_24(Local_204.f_166))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_204.f_166))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_204.f_166, false, false);
		}
	}
	if (func_24(Local_204.f_164))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_204.f_164))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_204.f_164, false, false);
		}
	}
}

void func_511()//Position - 0x115CD
{
	if (func_518(4))
	{
		if ((((func_156() || func_33()) || func_52()) || (func_39() && !func_40())) || func_17())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_326(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, false);
		if (func_17())
		{
			func_514();
		}
		if (!func_49())
		{
			func_512();
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 209 /*INPUT_FRONTEND_LS*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			if (func_17())
			{
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/, true);
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 245 /*INPUT_MP_TEXT_CHAT_ALL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 246 /*INPUT_MP_TEXT_CHAT_TEAM*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 247 /*INPUT_MP_TEXT_CHAT_FRIENDS*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 248 /*INPUT_MP_TEXT_CHAT_CREW*/, true);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
				PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 198 /*INPUT_FRONTEND_RIGHT_AXIS_Y*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/, true);
				PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 217 /*INPUT_FRONTEND_SELECT*/, true);
			}
		}
	}
}

void func_512()//Position - 0x117E1
{
	func_513();
}

void func_513()//Position - 0x117ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 365)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		iVar0++;
	}
}

void func_514()//Position - 0x11811
{
	Global_23831.f_6 = 1;
}

void func_515()//Position - 0x1181F
{
	if (BitTest(Local_204.f_5, 28))
	{
		if (!func_34(&(Local_204.f_268)))
		{
			func_30(&(Local_204.f_268), 0, 0);
		}
		else if (func_29(&(Local_204.f_268), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_204.f_5), 28);
			func_28(&(Local_204.f_268));
		}
	}
}

void func_516()//Position - 0x1186F
{
	int iVar0;
	
	if (BitTest(Local_204.f_5, 27))
	{
		if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 != func_13())
		{
			iVar0 = Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11;
		}
		else if (Global_1845060 != func_13())
		{
			iVar0 = Global_1845060;
		}
		else if (func_307(PLAYER::PLAYER_ID(), 0))
		{
			if (func_186() != func_13())
			{
				iVar0 = func_186();
			}
		}
		if (iVar0 != func_13())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_199(iVar0, 0, 1, 0);
					MISC::CLEAR_BIT(&(Local_204.f_5), 27);
				}
			}
		}
	}
}

void func_517()//Position - 0x11913
{
	struct<3> Var0;
	
	if (func_156())
	{
		if (func_518(1))
		{
			if (func_24(func_378()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_378(), true) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_204.f_153, 60f, 30);
			}
		}
	}
	if (func_518(1) || func_518(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
		{
			if (CAM::DOES_CAM_EXIST(Local_204.f_172) && CAM::IS_CAM_RENDERING(Local_204.f_172))
			{
				if (func_518(4))
				{
					if (!func_285(Local_204.f_153))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_204.f_153, 60f, 200f);
						INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_204.f_153, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_204.f_162)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_204.f_153, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_518(int iParam0)//Position - 0x119FB
{
	return Local_204.f_244 == iParam0;
}

int func_519()//Position - 0x11A0A
{
	if (func_46())
	{
		return 1;
	}
	if (!func_334())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_13())
	{
		if (!func_523())
		{
			if (func_293(PLAYER::PLAYER_ID()) && !func_292())
			{
				return 1;
			}
		}
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1957675.f_2, 2))
	{
		return 1;
	}
	if (func_226(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_523())
	{
		if (func_522())
		{
			return 1;
		}
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_54())
		{
			return 1;
		}
		if (!func_521() && !func_520())
		{
			if (func_29(&(Local_204.f_284), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_204.f_284));
		}
	}
	return 0;
}

int func_520()//Position - 0x11AF1
{
	if (Global_1957675.f_25 != func_13())
	{
		if (Global_2657991[Global_1957675.f_25 /*467*/].f_324.f_11 != func_13())
		{
			if (func_24(Global_1962860[Global_2657991[Global_1957675.f_25 /*467*/].f_324.f_11]))
			{
				if (func_26(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1962860[Global_2657991[Global_1957675.f_25 /*467*/].f_324.f_11], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_521()//Position - 0x11B82
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_106[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_522()//Position - 0x11BBC
{
	return BitTest(Global_1957675, 22);
}

bool func_523()//Position - 0x11BCB
{
	return BitTest(Global_1957675.f_2, 9);
}

int func_524()//Position - 0x11BDC
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_531())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_530())
	{
		return 1;
	}
	if (func_529(159))
	{
		if (!func_528())
		{
			return 1;
		}
	}
	if (func_529(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_525() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_525()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_525()//Position - 0x11C60
{
	switch (func_527())
	{
		case 0:
			return func_526();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_526()//Position - 0x11C93
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_527()//Position - 0x11CB7
{
	return Global_33087;
}

bool func_528()//Position - 0x11CC2
{
	return Global_2684718.f_700;
}

int func_529(int iParam0)//Position - 0x11CD1
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_530()//Position - 0x11CE8
{
	return Global_2696416;
}

bool func_531()//Position - 0x11CF4
{
	return Global_2684718.f_695;
}

void func_532()//Position - 0x11D03
{
	SYSTEM::WAIT(0);
}

void func_533(bool bParam0)//Position - 0x11D10
{
	if (!func_523())
	{
		func_540(bParam0);
	}
	else
	{
		func_534();
	}
}

void func_534()//Position - 0x11D2D
{
	Global_1957675.f_25 = func_13();
	func_28(&(Local_204.f_284));
	func_539(0);
	func_538(0);
	func_537(0);
	func_536(0);
	func_535();
}

void func_535()//Position - 0x11D60
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_536(bool bParam0)//Position - 0x11D6C
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 9))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 9);
		}
	}
	else if (BitTest(Global_1957675.f_2, 9))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 9);
	}
}

void func_537(bool bParam0)//Position - 0x11DB4
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675, 21))
		{
			MISC::SET_BIT(&Global_1957675, 21);
		}
	}
	else if (BitTest(Global_1957675, 21))
	{
		MISC::CLEAR_BIT(&Global_1957675, 21);
	}
}

void func_538(bool bParam0)//Position - 0x11DED
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675, 22))
		{
			MISC::SET_BIT(&Global_1957675, 22);
		}
	}
	else if (BitTest(Global_1957675, 22))
	{
		MISC::CLEAR_BIT(&Global_1957675, 22);
	}
}

void func_539(bool bParam0)//Position - 0x11E26
{
	if (bParam0)
	{
		if (!BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_313, 31))
		{
			MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_313), 31);
		}
	}
	else if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_313, 31))
	{
		MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_313), 31);
	}
}

void func_540(bool bParam0)//Position - 0x11E93
{
	int iVar0;
	struct<8> Var1;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_162))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_204.f_162, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_204.f_162))
		{
			if (!BitTest(Local_204.f_6, 2))
			{
				if (func_101())
				{
					if (func_24(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_371(), func_370(), func_369(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_371(), func_370(), func_369(), true, false, 1f, false);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_204.f_134)));
					MISC::SET_BIT(&(Local_204.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_204.f_162);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_204.f_162);
			return;
		}
	}
	if (func_39() && !func_40())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_564(&Var1, 11);
	}
	if (func_220("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_24(Local_204.f_164))
	{
		uVar10 = Local_204.f_164;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_204.f_165))
	{
		OBJECT::DELETE_OBJECT(&(Local_204.f_165));
	}
	if (HUD::DOES_BLIP_EXIST(Local_204.f_174))
	{
		HUD::REMOVE_BLIP(&(Local_204.f_174));
	}
	if (HUD::DOES_BLIP_EXIST(Local_204.f_175))
	{
		HUD::REMOVE_BLIP(&(Local_204.f_175));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_204.f_166))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_204.f_166));
	}
	HUD::THEFEED_SHOW();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_267())
	{
		func_266(0);
	}
	func_561();
	func_358(1, -1);
	func_560();
	if (func_40())
	{
		func_368(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_204.f_163))
	{
		iVar11 = NETWORK::NET_TO_OBJ(Local_204.f_163);
		OBJECT::DELETE_OBJECT(&iVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_204.f_161))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_204.f_161);
		}
		func_559(0);
	}
	func_276(0);
	if ((func_557() && (!func_293(PLAYER::PLAYER_ID()) || func_292())) && Global_1943917.f_5214 == -1)
	{
		func_326(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_204.f_123 = 0f;
	Local_204.f_124 = 0f;
	Local_204.f_12 = 0;
	Local_204.f_14 = 0;
	Local_204.f_10 = 0;
	Local_204.f_16 = 0;
	func_28(&(Local_204.f_248));
	func_28(&(Local_204.f_250));
	if (!Local_204.f_159)
	{
		func_28(&(Local_204.f_252));
	}
	func_28(&(Local_204.f_256));
	func_28(&(Local_204.f_254));
	func_28(&(Local_204.f_258));
	func_28(&(Local_204.f_264));
	func_28(&(Local_204.f_270));
	func_28(&(Local_204.f_268));
	func_28(&(Local_204.f_266));
	func_28(&(Local_204.f_272));
	func_28(&(Local_204.f_274));
	func_28(&(Local_204.f_276));
	func_28(&(Local_204.f_280));
	func_28(&(Local_204.f_282));
	func_28(&(Local_204.f_260));
	func_28(&(Local_204.f_351));
	if (PLAYER::PLAYER_ID() != func_13())
	{
		func_28(&(Local_204.f_286[PLAYER::PLAYER_ID() /*2*/]));
	}
	MISC::CLEAR_BIT(&(Global_1957675.f_4), 0);
	MISC::CLEAR_BIT(&(Global_1957675.f_4), 1);
	Local_204.f_30 = 0;
	Local_204.f_5 = 0;
	Local_204.f_6 = 0;
	Global_1957675.f_5 = -1;
	func_556(-1f);
	func_483(0f);
	func_273(0);
	func_486(0);
	func_45(0);
	func_484(0);
	func_250(0);
	func_555(0);
	func_197(0);
	func_554(0);
	func_553(0);
	func_552(0);
	func_551(0);
	func_550(0);
	func_90(1);
	func_320(0);
	func_318(0);
	func_324(0);
	func_489(0);
	MISC::CLEAR_BIT(&Global_1957675, 29);
	func_407(0f, 0f, 0f, 0f, 0f, 0f);
	func_549();
	Global_1957675.f_27 = -1;
	MISC::CLEAR_BIT(&Global_2708120, 0);
	MISC::CLEAR_BIT(&Global_1964610, 0);
	func_418(0);
	if (!func_548(0))
	{
		func_316();
	}
	if (func_93())
	{
		func_126("SET_WARNING_IS_VISIBLE", 0);
		if (func_156() || func_17())
		{
			if (Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11 != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11))
			{
				iVar12 = Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_11;
			}
			else if ((func_156() && Global_1845060 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845060))
			{
				iVar12 = Global_1845060;
			}
			else if ((func_17() && Global_1845061 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845061))
			{
				iVar12 = Global_1845061;
			}
			else if (func_307(PLAYER::PLAYER_ID(), 0))
			{
				if (func_186() != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_186()))
				{
					iVar12 = func_186();
				}
			}
			if (iVar12 != func_13())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_156())
					{
						func_199(iVar12, 0, 1, 0);
					}
					else if (func_17())
					{
						func_199(iVar12, 0, 8, Global_1582037);
					}
					MISC::SET_BIT(&(Local_204.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_204.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_204.f_5), 27);
			}
		}
		else if (func_39() || func_179())
		{
			func_28(&Global_1957637);
			func_547(300000);
			func_546(1);
			MISC::SET_BIT(&(Local_204.f_5), 28);
		}
		func_426(0);
		func_425(0);
		MISC::CLEAR_BIT(&(Local_106[PLAYER::PLAYER_ID() /*3*/]), 0);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_204.f_176));
		if (((func_39() || func_179()) || func_32()) || func_31())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_47(0))
			{
				Var14.f_0 = Global_4718592.f_128476;
			}
			else
			{
				Var14.f_0 = func_545(PLAYER::PLAYER_ID());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_204.f_29;
			Var14.f_5 = Local_204.f_31;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_204.f_28;
			STATS::PLAYSTATS_HEIST3_DRONE(&Var14);
		}
		else
		{
			STATS::PLAYSTATS_DRONE_USAGE(iVar13, Local_204.f_28, Local_204.f_29);
		}
		if (func_17())
		{
			func_543(2, func_544());
		}
	}
	func_542();
	func_427(0);
	func_291(0);
	func_211(0);
	func_208(0f);
	func_490(0f);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_204.f_173));
	if (func_201(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_201(1));
	}
	if (func_201(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_201(0));
	}
	func_419(0);
	func_358(1, -1);
	Local_204.f_28 = 0;
	Local_204.f_29 = 0;
	Local_204.f_31 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_204.f_30);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_177[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_204.f_177[PLAYER::PLAYER_ID()], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_204.f_210[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_204.f_210[PLAYER::PLAYER_ID()], false);
	}
	if (!bParam0)
	{
		if (!func_184(PLAYER::PLAYER_ID()))
		{
			func_541(0f, 0f, 0f, 0f);
		}
		Global_1957675.f_2 = 0;
		func_535();
	}
	else
	{
		func_482(0, 1);
	}
}

void func_541(struct<3> Param0, float fParam3)//Position - 0x12591
{
	if (!func_408(Global_1957675.f_13, Param0, 0))
	{
		Global_1957675.f_13 = { Param0 };
		Global_1957675.f_10 = fParam3;
	}
}

void func_542()//Position - 0x125C2
{
	int iVar0;
	
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_43))
	{
		AUDIO::STOP_SOUND(Local_204.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_43);
		Local_204.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_32))
	{
		AUDIO::STOP_SOUND(Local_204.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_32);
		Local_204.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_33))
	{
		AUDIO::STOP_SOUND(Local_204.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_33);
		Local_204.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_34))
	{
		AUDIO::STOP_SOUND(Local_204.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_34);
		Local_204.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_35))
	{
		AUDIO::STOP_SOUND(Local_204.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_35);
		Local_204.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_36))
	{
		AUDIO::STOP_SOUND(Local_204.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_36);
		Local_204.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_42))
	{
		AUDIO::STOP_SOUND(Local_204.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_42);
		Local_204.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_41))
	{
		AUDIO::STOP_SOUND(Local_204.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_41);
		Local_204.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_40))
	{
		AUDIO::STOP_SOUND(Local_204.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_40);
		Local_204.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_39))
	{
		AUDIO::STOP_SOUND(Local_204.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_39);
		Local_204.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_38))
	{
		AUDIO::STOP_SOUND(Local_204.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_38);
		Local_204.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_37))
	{
		AUDIO::STOP_SOUND(Local_204.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_37);
		Local_204.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_44))
	{
		AUDIO::STOP_SOUND(Local_204.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_44);
		Local_204.f_44 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_45))
	{
		AUDIO::STOP_SOUND(Local_204.f_45);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_45);
		Local_204.f_45 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_83))
	{
		AUDIO::STOP_SOUND(Local_204.f_83);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_83);
		Local_204.f_83 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_204.f_117))
	{
		AUDIO::STOP_SOUND(Local_204.f_117);
		AUDIO::RELEASE_SOUND_ID(Local_204.f_117);
		Local_204.f_117 = -1;
	}
	if (func_523())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_204.f_48[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_204.f_48[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_204.f_48[iVar0]);
				Local_204.f_48[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_178();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_543(int iParam0, int iParam1)//Position - 0x12884
{
	if (Global_2739811.f_379 > 0 || Global_2739811.f_379.f_1 > 0)
	{
		STATS::PLAYSTATS_SUB_WEAP(iParam0, iParam1, Global_2739811.f_379, Global_2739811.f_379.f_1);
	}
	func_450();
}

bool func_544()//Position - 0x128C5
{
	return Global_1845061 == PLAYER::PLAYER_ID();
}

int func_545(int iParam0)//Position - 0x128D6
{
	if (func_21(iParam0) == 243)
	{
		return func_19(iParam0);
	}
	return -1;
}

void func_546(bool bParam0)//Position - 0x128F3
{
	if (bParam0)
	{
		if (!BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372, 20))
		{
			MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372), 20);
		}
	}
	else if (BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372, 20))
	{
		MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_372), 20);
	}
}

void func_547(int iParam0)//Position - 0x12960
{
	if (Global_1957675.f_6 != iParam0)
	{
		Global_1957675.f_6 = iParam0;
	}
}

bool func_548(int iParam0)//Position - 0x1297B
{
	return Local_204.f_245 == iParam0;
}

void func_549()//Position - 0x1298A
{
	if (func_193())
	{
		MISC::CLEAR_BIT(&Global_1957675, 7);
	}
}

void func_550(bool bParam0)//Position - 0x129A2
{
	if (bParam0)
	{
		if (func_93())
		{
			if (!BitTest(Global_1957675, 16))
			{
				MISC::SET_BIT(&Global_1957675, 16);
			}
		}
	}
	else if (BitTest(Global_1957675, 16))
	{
		MISC::CLEAR_BIT(&Global_1957675, 16);
	}
}

void func_551(bool bParam0)//Position - 0x129E5
{
	if (bParam0)
	{
		if (!func_46())
		{
			MISC::SET_BIT(&Global_1957675, 6);
		}
	}
	else if (func_46())
	{
		MISC::CLEAR_BIT(&Global_1957675, 6);
	}
}

void func_552(bool bParam0)//Position - 0x12A16
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675, 3))
		{
			MISC::SET_BIT(&Global_1957675, 3);
		}
	}
	else if (BitTest(Global_1957675, 3))
	{
		MISC::CLEAR_BIT(&Global_1957675, 3);
	}
}

void func_553(bool bParam0)//Position - 0x12A4B
{
	if (bParam0)
	{
		if (!func_88())
		{
			MISC::SET_BIT(&Global_1957675, 28);
		}
	}
	else if (func_88())
	{
		MISC::CLEAR_BIT(&Global_1957675, 28);
	}
}

void func_554(bool bParam0)//Position - 0x12A7E
{
	if (bParam0)
	{
		if (!func_182())
		{
			MISC::SET_BIT(&Global_1957675, 27);
		}
	}
	else if (func_182())
	{
		MISC::CLEAR_BIT(&Global_1957675, 27);
	}
}

void func_555(bool bParam0)//Position - 0x12AB1
{
	if (bParam0)
	{
		if (!func_431())
		{
			MISC::SET_BIT(&Global_1957675, 10);
		}
	}
	else if (func_431())
	{
		MISC::CLEAR_BIT(&Global_1957675, 10);
	}
}

void func_556(float fParam0)//Position - 0x12AE4
{
	if (Global_1957675.f_12 != fParam0)
	{
		Global_1957675.f_12 = fParam0;
	}
}

int func_557()//Position - 0x12B00
{
	if (!func_334())
	{
		return 0;
	}
	if (func_12(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_93())
	{
		return 0;
	}
	if (func_101())
	{
		return 0;
	}
	if (func_182() && (!func_558(0) || !func_9(func_186())))
	{
		return 0;
	}
	return 1;
}

bool func_558(bool bParam0)//Position - 0x12B60
{
	return func_307(PLAYER::PLAYER_ID(), bParam0);
}

void func_559(bool bParam0)//Position - 0x12B72
{
	if (bParam0)
	{
		if (!func_40())
		{
			MISC::SET_BIT(&Global_1957675, 24);
		}
	}
	else if (func_40())
	{
		MISC::CLEAR_BIT(&Global_1957675, 24);
	}
}

void func_560()//Position - 0x12BA5
{
	if (CAM::DOES_CAM_EXIST(Local_204.f_172))
	{
		CAM::DESTROY_CAM(Local_204.f_172, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_51() || BitTest(Local_204.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_561()//Position - 0x12BE5
{
	if (CAM::DOES_CAM_EXIST(Local_204.f_172))
	{
		if (func_563(PLAYER::PLAYER_ID()))
		{
			func_562(0);
		}
	}
}

void func_562(bool bParam0)//Position - 0x12C08
{
	if (bParam0)
	{
		Global_1943917.f_4082 = bParam0;
	}
	if (!Global_1943917.f_4081)
	{
		Global_1943917.f_4081 = 1;
	}
}

int func_563(int iParam0)//Position - 0x12C31
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			return Global_2657991[iParam0 /*467*/].f_324.f_8 != -1;
		}
		else if ((Global_1575084 && iParam0 == PLAYER::PLAYER_ID()) && func_26(iParam0, 1, 0))
		{
			return Global_2657991[iParam0 /*467*/].f_324.f_8 != -1;
		}
	}
	return 0;
}

void func_564(var uParam0, int iParam1)//Position - 0x12C97
{
	struct<9> Var0;
	bool bVar9;
	bool bVar10;
	int iVar11;
	
	Var0.f_6 = 1073741824;
	Var0.f_7 = -1073741824;
	Var0.f_0 = 66206781;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam0->f_3;
	Var0.f_5 = uParam0->f_4;
	Var0.f_6 = uParam0->f_6;
	Var0.f_7 = uParam0->f_7;
	Var0.f_8 = uParam0->f_8;
	bVar9 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_440, 1))
		{
			MISC::CLEAR_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_440), 1);
			bVar9 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_34(&(uParam0->f_1)))
	{
		func_30(&(uParam0->f_1), 0, 0);
	}
	bVar10 = true;
	if (*uParam0 == iParam1 && !bVar9)
	{
		if (func_34(&(uParam0->f_1)) && !func_29(&(uParam0->f_1), 1000, 0))
		{
			bVar10 = false;
		}
		else
		{
			func_28(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_28(&(uParam0->f_1));
	}
	if (bVar10)
	{
		iVar11 = func_8(PLAYER::PLAYER_ID());
		if (iVar11 != -1)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, iVar11, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

void func_565(struct<9> Param0, var uParam9, var uParam10, var uParam11)//Position - 0x12DBD
{
	float fVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	func_574(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_203, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_106, 97, 0);
	if (!func_573())
	{
		func_533(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_523())
		{
			Local_204.f_138 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_378()) && !ENTITY::IS_ENTITY_DEAD(func_378(), false))
					{
						Local_204.f_147 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_378(), true), ENTITY::GET_ENTITY_HEADING(func_378()), 0f, 1.6f, 2.9f) };
						Local_204.f_141 = { Local_204.f_147 };
					}
					func_497(1);
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 1;
					break;
				
				case 2:
					func_572(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 2;
					break;
				
				case 3:
					func_571(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 3;
					break;
				
				case 4:
					func_491(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 4;
					break;
				
				case 5:
					func_570(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 5;
					break;
				
				case 6:
					func_569(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 6;
					break;
				
				case 8:
					func_568(1);
					Local_204.f_147 = { Param0.f_5 };
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 8;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 8;
					break;
				
				case 9:
					func_536(1);
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 9;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 9;
					break;
				
				case 10:
					func_43(1);
					Local_204.f_147 = { Param0.f_5 };
					fVar0 = func_284();
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 10;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 10;
					break;
				
				case 12:
					func_44(1);
					Local_204.f_147 = { Param0.f_5 };
					fVar0 = func_284();
					Local_106[PLAYER::PLAYER_ID() /*3*/].f_1 = 12;
					Global_1907163[PLAYER::PLAYER_ID() /*306*/].f_101 = 12;
					break;
				
				default:
					func_567(1);
					Local_204.f_147 = { Param0.f_5 };
					break;
			}
			Local_204.f_144 = { Param0.f_8 };
			if (func_285(func_440()))
			{
				func_407(Local_204.f_147, 0f, 0f, fVar0);
			}
		}
	}
	else
	{
		func_533(0);
	}
	if (!func_523())
	{
		func_482(1, 1);
	}
	else
	{
		func_566();
	}
}

void func_566()//Position - 0x130B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_204.f_48[iVar0] = -1;
		iVar0++;
	}
	func_418(6);
}

void func_567(bool bParam0)//Position - 0x130E0
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 0))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 0);
		}
	}
	else if (BitTest(Global_1957675.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 0);
	}
}

void func_568(bool bParam0)//Position - 0x13124
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 8))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 8);
		}
	}
	else if (BitTest(Global_1957675.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 8);
	}
}

void func_569(bool bParam0)//Position - 0x1316C
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 6))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 6);
		}
	}
	else if (BitTest(Global_1957675.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 6);
	}
}

void func_570(bool bParam0)//Position - 0x131B0
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 5))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 5);
		}
	}
	else if (BitTest(Global_1957675.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 5);
	}
}

void func_571(bool bParam0)//Position - 0x131F4
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 3))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 3);
		}
	}
	else if (BitTest(Global_1957675.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 3);
	}
}

void func_572(bool bParam0)//Position - 0x13238
{
	if (bParam0)
	{
		if (!BitTest(Global_1957675.f_2, 2))
		{
			Global_1957675.f_2 = 0;
			MISC::SET_BIT(&(Global_1957675.f_2), 2);
		}
	}
	else if (BitTest(Global_1957675.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1957675.f_2), 2);
	}
}

int func_573()//Position - 0x1327C
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
		if (func_531())
		{
			return 0;
		}
		if (func_529(157))
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

int func_574(int iParam0, int iParam1, bool bParam2)//Position - 0x132D5
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_535();
			}
			else
			{
				return 0;
			}
		}
		if (!func_47(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_535();
					}
					else
					{
						return 0;
					}
				}
				if (func_531())
				{
					if (!bParam2)
					{
						func_535();
					}
					else
					{
						return 0;
					}
				}
				if (func_529(157))
				{
					if (!bParam2)
					{
						func_535();
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
					func_535();
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
				func_535();
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
			func_535();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

