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
	struct<3> Local_99[32];
	var uLocal_196 = 0;
	struct<349> Local_197 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_540(ScriptParam_0);
	}
	else
	{
		func_507(0);
	}
	while (true)
	{
		func_506();
		if (func_498())
		{
			func_507(0);
		}
		if (func_492())
		{
			func_507(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xCF
{
}

void func_2()//Position - 0xD7
{
	if (!func_491(6))
	{
		func_490();
		func_489();
		func_488();
		func_484();
		func_483();
	}
	func_480();
	func_478();
	func_474();
	func_471();
	if (func_491(0))
	{
		func_420();
	}
	else if (func_491(1))
	{
		if (!func_419())
		{
			func_412();
			func_395();
		}
		else
		{
			func_394(1);
			func_393(7);
		}
	}
	else if (func_491(2))
	{
		func_386();
	}
	else if (func_491(3))
	{
		func_378();
	}
	else if (func_491(4))
	{
		func_377();
		func_376();
		func_374();
		func_373();
		func_372();
		func_371();
		func_370();
		func_361();
		func_357();
		func_341();
		func_339();
		func_296();
		func_295();
		func_279();
		func_386();
		func_276();
		if (func_269(0))
		{
			func_268();
			return;
		}
		func_264();
		func_258();
		func_246(0);
		func_230();
		func_221();
		func_213();
		func_191();
		func_184();
		func_182();
		func_109();
		func_94();
		func_92();
		func_91();
	}
	else if (func_491(5))
	{
		func_40();
	}
	else if (func_491(7))
	{
		func_33();
	}
	if (!func_491(4) && !func_491(6))
	{
		func_27();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()//Position - 0x22F
{
	Local_197.f_45++;
	if (Local_197.f_45 >= 32)
	{
		Local_197.f_45 = 0;
	}
}

void func_4()//Position - 0x24F
{
	if (Local_197.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[Local_197.f_45 /*3*/].f_2))
		{
			if (Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_64[Local_197.f_45] != NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2))
			{
				Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_64[Local_197.f_45] = NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()//Position - 0x2B5
{
	int iVar0;
	
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_197.f_45);
	if (PLAYER::PLAYER_ID() != iVar0)
	{
		if (func_26(iVar0, 1, 1))
		{
			if (func_24(func_25()))
			{
				if (BitTest(Local_197.f_7, Local_197.f_45))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iVar0, "AM_MP_DRONE", 0))
					{
						MISC::CLEAR_BIT(&(Local_197.f_7), Local_197.f_45);
					}
				}
				if (func_15(iVar0, 0))
				{
					if (!BitTest(Local_197.f_7, Local_197.f_45) && func_10(iVar0))
					{
						func_7(iVar0, 1);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_197.f_159, iVar0, true);
						MISC::SET_BIT(&(Local_197.f_7), Local_197.f_45);
					}
				}
				else if ((SYSTEM::VDIST2(func_6(iVar0), Local_197.f_150) > 504100f && !func_491(1)) && !func_491(3))
				{
					if (BitTest(Local_197.f_7, Local_197.f_45))
					{
						func_7(iVar0, 0);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_197.f_159, iVar0, false);
						MISC::CLEAR_BIT(&(Local_197.f_7), Local_197.f_45);
						MISC::CLEAR_BIT(&(Local_197.f_8), Local_197.f_45);
					}
				}
			}
			else if (func_15(iVar0, 1) && func_10(iVar0))
			{
				if (!BitTest(Local_197.f_8, Local_197.f_45))
				{
					func_7(iVar0, 1);
					MISC::SET_BIT(&(Local_197.f_8), Local_197.f_45);
				}
			}
			else if (BitTest(Local_197.f_8, Local_197.f_45))
			{
				func_7(iVar0, 0);
				MISC::CLEAR_BIT(&(Local_197.f_8), Local_197.f_45);
				MISC::CLEAR_BIT(&(Local_197.f_7), Local_197.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)//Position - 0x425
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_7(int iParam0, int iParam1)//Position - 0x438
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

var func_8(int iParam0)//Position - 0x474
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)//Position - 0x48F
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

int func_10(int iParam0)//Position - 0x4B1
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

int func_11(int iParam0)//Position - 0x4E3
{
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 11))
	{
		return 1;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x51C
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_13()//Position - 0x54D
{
	return -1;
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x556
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845263[iParam0 /*877*/].f_267.f_32, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, bool bParam1)//Position - 0x5BA
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
	else if (SYSTEM::VDIST2(Var0, Local_197.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_16()//Position - 0x664
{
	if (Global_1845103 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1663013))
		{
			return Global_1663013;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1961212[Global_1845103]))
		{
			return Global_1961212[Global_1845103];
		}
	}
	return -1;
}

bool func_17()//Position - 0x6A8
{
	return BitTest(Global_1956030.f_2, 8);
}

int func_18(int iParam0)//Position - 0x6B9
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

int func_19(int iParam0)//Position - 0x6F4
{
	if (func_20(iParam0, 0))
	{
		return Global_1886967[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)//Position - 0x717
{
	if (func_9(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x75B
{
	if (func_9(iParam0))
	{
		if (func_20(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

var func_22(int iParam0)//Position - 0x787
{
	return func_23(&(Global_2672741.f_188), iParam0);
}

var func_23(var uParam0, var uParam1)//Position - 0x79B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_24(int iParam0)//Position - 0x7BE
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

int func_25()//Position - 0x7DF
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1956030.f_20;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x7F9
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
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0x859
{
	int iVar0;
	
	if (Local_197.f_156)
	{
		if (func_32(&(Local_197.f_249)))
		{
			if (func_31())
			{
				iVar0 = Global_262145.f_25523 /* Tunable: AW_DRONE_EMP_COOLDOWN_TIME */;
			}
			else
			{
				iVar0 = Global_262145.f_24876 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			}
			if (func_29(&(Local_197.f_249), iVar0, 0))
			{
				func_28(&(Local_197.f_249));
				Local_197.f_18 = 100;
				MISC::CLEAR_BIT(&(Local_197.f_5), 4);
				MISC::CLEAR_BIT(&(Local_197.f_5), 3);
				MISC::CLEAR_BIT(&(Local_197.f_5), 24);
				MISC::CLEAR_BIT(&Global_1956030, 29);
				Local_197.f_156 = 0;
			}
		}
	}
}

void func_28(var uParam0)//Position - 0x8D6
{
	uParam0->f_1 = 0;
}

int func_29(var uParam0, int iParam1, bool bParam2)//Position - 0x8E3
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

void func_30(var uParam0, bool bParam1, bool bParam2)//Position - 0x941
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

bool func_31()//Position - 0x986
{
	return BitTest(Global_1956030.f_2, 2);
}

bool func_32(var uParam0)//Position - 0x996
{
	return uParam0->f_1;
}

void func_33()//Position - 0x9A2
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if (!func_34())
			{
				func_507(1);
			}
			else
			{
				func_507(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
	else if (!func_34())
	{
		func_507(1);
	}
	else
	{
		func_507(0);
	}
}

int func_34()//Position - 0x9F9
{
	if (func_39())
	{
		return 1;
	}
	if (func_38())
	{
		return 1;
	}
	if (func_37() && func_35(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0xA30
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 17;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)//Position - 0xA77
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
	}
	return -1;
}

bool func_37()//Position - 0xF51
{
	return BitTest(Global_1956030.f_2, 5);
}

bool func_38()//Position - 0xF61
{
	return BitTest(Global_1956030, 24);
}

bool func_39()//Position - 0xF70
{
	return BitTest(Global_1956030, 16);
}

void func_40()//Position - 0xF7F
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	func_90();
	func_88();
	func_81(1);
	if (!BitTest(Local_197.f_5, 1))
	{
		if (!func_80())
		{
			if (!func_48() && !func_47())
			{
				if ((func_46() || func_31()) || func_45())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_197.f_159), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_34))
		{
			Local_197.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_34, "HUD_Static_Loop", Local_197.f_157, true);
		}
		if (!func_44())
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_43());
			MISC::SET_BIT(&(Local_197.f_6), 0);
		}
		MISC::SET_BIT(&(Local_197.f_5), 1);
	}
	else if (!func_32(&(Local_197.f_245)))
	{
		func_30(&(Local_197.f_245), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_42())
		{
			iVar0 = 500;
		}
		else if (func_17() && func_41())
		{
			iVar0 = 150;
		}
		if (func_29(&(Local_197.f_245), iVar0, 0) || func_44())
		{
			if (Local_197.f_38 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_38))
				{
					Local_197.f_38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_38, "HUD_Disconnect", Local_197.f_157, true);
				}
			}
			func_394(1);
			func_393(7);
		}
	}
}

bool func_41()//Position - 0x10F8
{
	return Global_2738587.f_358;
}

bool func_42()//Position - 0x1107
{
	return BitTest(Global_1956030.f_2, 4);
}

char* func_43()//Position - 0x1117
{
	if (func_17())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_44()//Position - 0x112F
{
	return BitTest(Global_1956030, 20);
}

bool func_45()//Position - 0x113E
{
	return BitTest(Global_1956030.f_2, 3);
}

bool func_46()//Position - 0x114E
{
	return BitTest(Global_1956030, 11);
}

bool func_47()//Position - 0x115D
{
	return Global_2707412;
}

int func_48()//Position - 0x1169
{
	if ((func_79(PLAYER::PLAYER_ID(), 0) && Global_1581997 == 1) && func_49())
	{
		return 1;
	}
	return 0;
}

int func_49()//Position - 0x1196
{
	char* sVar0;
	
	if ((Global_1581997 != -1 || Global_1582003 != -1) || Global_1582006 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_71(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_69(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_50())
		{
			return 0;
		}
	}
	return 1;
}

int func_50()//Position - 0x1374
{
	int iVar0;
	
	if (func_68(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_67(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_36(func_66(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_65(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return 1;
			}
			if (!func_64(Global_4718592.f_126144))
			{
				if (func_68(iVar0))
				{
					if (func_63(iVar0))
					{
						return 1;
					}
					else if (func_12(PLAYER::PLAYER_ID()) || func_62())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_61(8))
	{
		if (Global_1574980)
		{
			return 1;
		}
	}
	else if (Global_1956059)
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID()) && BitTest(Global_1575005, 12))
	{
		return 1;
	}
	if (func_59(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_58(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_36(func_66(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_57(iVar0))
			{
				return 1;
			}
			else if (func_56(iVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_62())
			{
				return 1;
			}
		}
	}
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_55(PLAYER::PLAYER_ID());
		if (func_26(iVar0, 0, 1))
		{
			if ((((Global_1845102 != func_13() && func_12(Global_1845102)) && func_36(func_66(Global_1845102)) == 11) && func_54(Global_1845102, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1845102), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_53(iVar0))
			{
				return 1;
			}
			else if (func_12(PLAYER::PLAYER_ID()) || func_62())
			{
				return 1;
			}
		}
	}
	if (func_52(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_13())
		{
			iVar0 = Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10;
			if (func_26(iVar0, 0, 1))
			{
				if (func_12(PLAYER::PLAYER_ID()) || func_62())
				{
					return 1;
				}
			}
		}
	}
	if (func_59(PLAYER::PLAYER_ID()) || func_60(PLAYER::PLAYER_ID()))
	{
		switch (Global_1582003)
		{
			case 1:
				if (Global_262145.f_23302 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_1 */)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_23303 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_2 */)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_23304 /* Tunable: H2_AVENGER_DISABLE_ROCKET_TURRET_3 */)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1582001 == 1)
	{
		return 1;
	}
	if (func_51(3))
	{
		if (Global_1835504 == 186)
		{
			if (Global_1836702 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_51(int iParam0)//Position - 0x16EE
{
	return Global_262145.f_4868[iParam0] == Global_4718592.f_126144;
}

int func_52(int iParam0)//Position - 0x170C
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_13())
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 20;
			}
		}
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x176C
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_3, 4);
	}
	return 0;
}

int func_54(int iParam0, int iParam1)//Position - 0x1791
{
	int iVar0;
	
	if (func_26(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x17DE
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_56(int iParam0)//Position - 0x1802
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_6, 16);
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1828
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321.f_2, 6);
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x184D
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_59(int iParam0)//Position - 0x1871
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_13())
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x18D1
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

bool func_61(int iParam0)//Position - 0x1918
{
	return Global_4718592.f_183008 >= iParam0;
}

var func_62()//Position - 0x192D
{
	return BitTest(Global_1942781, 6);
}

int func_63(int iParam0)//Position - 0x193B
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 6);
	}
	return 0;
}

bool func_64(int iParam0)//Position - 0x195E
{
	return Global_262145.f_4859[4] == iParam0;
}

int func_65(int iParam0)//Position - 0x1973
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x19A1
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_67(int iParam0)//Position - 0x19D2
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657921[iParam0 /*463*/].f_321.f_10;
}

int func_68(int iParam0)//Position - 0x19F6
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_13())
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)//Position - 0x1A55
{
	if (func_70(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x1A88
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

int func_71(int iParam0)//Position - 0x1AA8
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
		iVar1 = func_77(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_73(iVar0, iVar1, 6, 4);
			iVar3 = func_72(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)//Position - 0x1BC6
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

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D33
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
		iVar17 = (iParam1 - func_76(iParam0));
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
		iVar36 = (iParam1 - func_74(iParam0, func_75(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79181.f_26[iParam2] && iParam1 == Global_79181[iParam2]) && Global_79181.f_13[iParam2] != 0)
		{
			return Global_79181.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_75(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_79181.f_13[iParam2] = Var19.f_1;
		Global_79181[iParam2] = iParam1;
		Global_79181.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_74(int iParam0, int iParam1)//Position - 0x1E4D
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

int func_75(int iParam0)//Position - 0x21F4
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

int func_76(int iParam0)//Position - 0x22A4
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

int func_77(int iParam0, int iParam1)//Position - 0x2305
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_75(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_78(iParam0, iVar1, iVar2, iParam1);
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2365
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_75(iParam3);
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

int func_79(int iParam0, bool bParam1)//Position - 0x23BC
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
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_13())
			{
				return func_36(Global_2657921[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

bool func_80()//Position - 0x244A
{
	return BitTest(Global_1956030, 28);
}

void func_81(int iParam0)//Position - 0x2459
{
	if (func_87())
	{
		return;
	}
	if (!Global_20813.f_1 == 1)
	{
		if (func_86(0))
		{
			func_82(iParam0);
		}
		MISC::SET_BIT(&Global_8684, 2);
	}
}

void func_82(int iParam0)//Position - 0x248C
{
	if (func_87())
	{
		return;
	}
	if (Global_21025)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
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
	if (!func_83())
	{
		Global_20813.f_1 = 3;
	}
}

int func_83()//Position - 0x2516
{
	if (Global_20813.f_1 == 1 || Global_20813.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_84(bool bParam0, bool bParam1)//Position - 0x253D
{
	if (bParam0)
	{
		if (func_86(0))
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

bool func_85()//Position - 0x25B1
{
	return BitTest(Global_1956030, 5);
}

int func_86(int iParam0)//Position - 0x25BF
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

bool func_87()//Position - 0x2616
{
	return BitTest(Global_1956030, 19);
}

void func_88()//Position - 0x2625
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_89();
}

void func_89()//Position - 0x2635
{
	Global_23572.f_134 = 1;
}

void func_90()//Position - 0x2643
{
	Global_1574846 = 1;
}

void func_91()//Position - 0x2650
{
	if (func_37())
	{
		if (func_38())
		{
			if (func_24(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
			}
		}
	}
}

void func_92()//Position - 0x267C
{
	char* sVar0;
	
	if (!func_93())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_174[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_42())
				{
					Local_197.f_174[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_197.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_197.f_174[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_197.f_159), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_93()//Position - 0x2721
{
	if (func_42())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

void func_94()//Position - 0x2740
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_197.f_161))
		{
			STREAMING::REQUEST_MODEL(func_108());
			if (STREAMING::HAS_MODEL_LOADED(func_108()))
			{
				if (!BitTest(Local_197.f_5, 6))
				{
					if (func_102(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_197.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_197.f_161 = PED::CREATE_PED(26, func_108(), Local_197.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_197.f_159)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_197.f_161, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_197.f_161, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_197.f_161, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197.f_161, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_108());
					PED::SET_PED_CONFIG_FLAG(Local_197.f_161, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_197.f_161, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_197.f_161, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_197.f_161, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_197.f_161, NETWORK::NET_TO_OBJ(Local_197.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_197.f_161, false, false);
					Global_1956030.f_23 = Local_197.f_161;
				}
			}
		}
		else if (func_24(Local_197.f_161))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_197.f_161))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_197.f_161, false, false);
			}
			if (!func_100(PLAYER::PLAYER_ID()) && !func_97(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_96(Global_1837302);
				}
			}
			else if ((Global_1956030.f_4 == -1 || Global_1956030.f_4 == 0) || Global_1956030.f_4 == Global_1837291)
			{
				func_96(Global_1837302);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_197.f_161) != func_95())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_197.f_161, func_95());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_197.f_161))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_197.f_161, NETWORK::NET_TO_OBJ(Local_197.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_197.f_161, false, false);
			}
		}
	}
}

int func_95()//Position - 0x293B
{
	if (Global_1956030.f_4 != -1 && Global_1956030.f_4 != 0)
	{
		return Global_1956030.f_4;
	}
	return Global_1837302;
}

void func_96(int iParam0)//Position - 0x2968
{
	if (Global_1956030.f_4 != iParam0)
	{
		Global_1956030.f_4 = iParam0;
	}
}

int func_97(int iParam0)//Position - 0x2983
{
	if (func_99(iParam0) == 236 || func_99(iParam0) == 150)
	{
		return func_98(iParam0);
	}
	return 0;
}

int func_98(var uParam0)//Position - 0x29B0
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

int func_99(var uParam0)//Position - 0x29D3
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1886967[iVar0 /*609*/];
	}
	return -1;
}

bool func_100(int iParam0)//Position - 0x29F2
{
	return func_101(iParam0, 20);
}

var func_101(int iParam0, int iParam1)//Position - 0x2A02
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

bool func_102(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A1A
{
	return func_103(2, iParam0, 1, bParam1, bParam2);
}

int func_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2A2E
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681028, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_107(iParam0) - func_106(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_106(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_107(iParam0) - func_105(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_106(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_107(iParam0) - func_106(iParam0, 1));
		}
		if (!bParam4 && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 3)
		{
			iVar1 = (iVar1 - func_104(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x2AF4
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

int func_105(int iParam0)//Position - 0x2B2E
{
	switch (iParam0)
	{
		case 0:
			return Global_1681028.f_1;
			break;
		
		case 1:
			return Global_1681028.f_2;
			break;
		
		case 2:
			return Global_1681028.f_3;
			break;
	}
	return 0;
}

int func_106(int iParam0, bool bParam1)//Position - 0x2B74
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657921[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x2C11
{
	switch (iParam0)
	{
		case 0:
			return Global_1681036;
			break;
		
		case 1:
			return Global_1681037;
			break;
		
		case 2:
			return Global_1681038;
			break;
	}
	return 0;
}

int func_108()//Position - 0x2C51
{
	return joaat("G_M_M_ChiGoon_01");
}

void func_109()//Position - 0x2C5E
{
	if (func_181())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_RENDERING(Local_197.f_169))
		{
			if (!func_93())
			{
				func_172();
				func_141();
			}
			else
			{
				func_122();
				func_112();
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			func_111(1);
			func_110(2);
		}
	}
}

void func_110(int iParam0)//Position - 0x2CCF
{
	Global_1577933 = iParam0;
}

void func_111(int iParam0)//Position - 0x2CDD
{
	Global_1669875.f_1163 = iParam0;
}

void func_112()//Position - 0x2CEE
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_197.f_170))
	{
		if (func_17())
		{
			Local_197.f_170 = func_121();
		}
		else
		{
			Local_197.f_170 = func_120();
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
		func_116();
	}
	func_115(Local_197.f_170, 0);
	func_114(Local_197.f_170, 3, 3, 3);
	func_113(Local_197.f_170, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_197.f_170, 255, 255, 255, 0, 0);
}

void func_113(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2D86
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2DBC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_115(int iParam0, bool bParam1)//Position - 0x2DE5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_116()//Position - 0x2E02
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_17())
	{
		iVar0 = 10;
	}
	fVar1 = Local_197.f_120;
	if (fVar1 >= (func_119() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			Local_197.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_37, "Out_Of_Bounds_Alarm_Loop", Local_197.f_157, true);
		}
		if (fVar1 >= (func_119() - IntToFloat((50 * iVar0))) && fVar1 < (func_119() - IntToFloat((45 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.1f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((45 * iVar0))) && fVar1 < (func_119() - IntToFloat((40 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.2f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((40 * iVar0))) && fVar1 < (func_119() - IntToFloat((35 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.3f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((35 * iVar0))) && fVar1 < (func_119() - IntToFloat((30 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.4f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((30 * iVar0))) && fVar1 < (func_119() - IntToFloat((25 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.5f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((25 * iVar0))) && fVar1 < (func_119() - IntToFloat((20 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.6f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((20 * iVar0))) && fVar1 < (func_119() - IntToFloat((15 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.7f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((15 * iVar0))) && fVar1 < (func_119() - IntToFloat((10 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.8f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((10 * iVar0))) && fVar1 < (func_119() - IntToFloat((5 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.9f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((5 * iVar0))) && fVar1 < func_119())
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			AUDIO::STOP_SOUND(Local_197.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_37);
			Local_197.f_37 = -1;
		}
	}
}

void func_117(float fParam0)//Position - 0x30AA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_118(char* sParam0, bool bParam1)//Position - 0x30C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_119()//Position - 0x30E6
{
	if (Global_1956030.f_8 == 0f)
	{
		return Global_262145.f_24884 /* Tunable: BB_TERRORBYTE_DRONE_DISTANCE_LIMIT */;
	}
	return Global_1956030.f_8;
}

int func_120()//Position - 0x310C
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_176310)
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

int func_121()//Position - 0x3165
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
}

void func_122()//Position - 0x3179
{
	if (func_17())
	{
		if (!func_140())
		{
			return;
		}
	}
	if (!BitTest(Local_197.f_5, 16))
	{
		if (func_138(0, -1, 0))
		{
			func_137(-1);
			func_136(20, "DRONE_SPACE" /* GXT: / */, -1);
			func_136(21, "DRONE_POSITION" /* GXT: Move */, -1);
			if (func_42())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					func_135(208, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					func_135(207, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
				else
				{
					func_135(209, "DRONE_SPEEDU" /* GXT: Speed Up */, -1, 0);
					func_135(210, "DRONE_SLOWD" /* GXT: Slow Down */, -1, 0);
				}
			}
			func_135(75, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_197.f_5), 16);
		}
	}
	else
	{
		func_123(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_197.f_5, 17))
		{
			MISC::SET_BIT(&(Local_197.f_5), 17);
			MISC::CLEAR_BIT(&(Local_197.f_5), 16);
		}
	}
	else if (BitTest(Local_197.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_197.f_5), 17);
		MISC::CLEAR_BIT(&(Local_197.f_5), 16);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x3274
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_134(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_131(bParam4, bParam8))
	{
		return;
	}
	if (func_129())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_126(PLAYER::PLAYER_ID(), 0))
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
	if (Global_23711.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (Global_23711.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5625[iVar1], true), 64);
				}
				else if (Global_23711.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23711.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23711.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23711.f_5327 = 0;
		}
		if (!Global_23711.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23711.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23711.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_125(&(Global_23711.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23711.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_125(&(Global_23711.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23711.f_5610[iVar1] == -1)
					{
						func_124(&(Global_23711.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23711.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
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
						if (Global_23711.f_5625[iVar1] != 365 && BitTest(Global_23711.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5625[iVar1]);
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
			if (MISC::GET_HASH_KEY(&(Global_4541639.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23711.f_5326);
				func_125(&Global_4541639);
				if (Global_4541639.f_20 == -1)
				{
					func_124(&(Global_4541639.f_16));
				}
				else
				{
					iVar4 = Global_23711.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23711.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23711.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23711.f_5326)
		{
			if (Global_23711.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23711.f_5553[iVar1 /*4*/]));
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
		if (Global_4541639.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4541639.f_16));
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
			if (!Global_23711.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23711.f_9116 = 1;
			}
		}
		else if (Global_23711.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23711.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23711.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23711.f_6263[iVar0 /*10*/], Global_23711.f_5656, Global_23711.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23711.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_124(char* sParam0)//Position - 0x3779
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_125(char* sParam0)//Position - 0x378B
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_126(int iParam0, int iParam1)//Position - 0x3799
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_127(-1, 0) == 8;
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

int func_127(int iParam0, bool bParam1)//Position - 0x37F2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_128();
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

int func_128()//Position - 0x3833
{
	return Global_1574925;
}

int func_129()//Position - 0x383F
{
	struct<3> Var0;
	
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	if (func_130())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20758 == 0)
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

int func_130()//Position - 0x38AD
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_131(bool bParam0, bool bParam1)//Position - 0x38C7
{
	if (Global_2672741.f_1689.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_133(8, -1) && func_132() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79509) || Global_23711.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101444.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_132()//Position - 0x3964
{
	return Global_1575008;
}

var func_133(int iParam0, int iParam1)//Position - 0x3970
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

int func_134(var uParam0, bool bParam1, int iParam2)//Position - 0x39A8
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
		if (Global_23711.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23711.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23711.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_135(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3A45
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	}
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = iParam0;
	Global_23711.f_5640[Global_23711.f_5326] = 32;
	Global_23711.f_5326++;
}

void func_136(int iParam0, char* sParam1, int iParam2)//Position - 0x3AFA
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23711.f_5326 >= 14)
	{
		StringCopy(&Global_4541639, sVar0, 64);
		StringCopy(&(Global_4541639.f_16), sParam1, 16);
		Global_4541639.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23711.f_5655), Global_23711.f_5326);
	StringCopy(&(Global_23711.f_5328[Global_23711.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23711.f_5553[Global_23711.f_5326 /*4*/]), sParam1, 16);
	Global_23711.f_5610[Global_23711.f_5326] = iParam2;
	Global_23711.f_5625[Global_23711.f_5326] = 365;
	Global_23711.f_5640[Global_23711.f_5326] = iParam0;
	Global_23711.f_5326++;
}

void func_137(int iParam0)//Position - 0x3BAA
{
	int iVar0;
	int iVar1;
	
	Global_23711.f_5326 = 0;
	Global_23711.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23711.f_5553[iVar0 /*4*/]), "", 16);
		Global_23711.f_5610[iVar0] = -1;
		Global_23711.f_5625[iVar0] = 365;
		Global_23711.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23711.f_5655 = 0;
	StringCopy(&(Global_4541639.f_16), "", 16);
	Global_4541639.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_134(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23711.f_6263[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23711.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_138(char* sParam0, int iParam1, bool bParam2)//Position - 0x3C65
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_134(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23711.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23711.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23711.f_6238[iVar0 /*4*/]), 9);
		Global_23711.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23711.f_6238[iVar0 /*4*/]), 9))
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
	Global_23711.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23711.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23711.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_139(&(Global_23711.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_139(var uParam0)//Position - 0x3D73
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

bool func_140()//Position - 0x3E15
{
	return BitTest(Local_197.f_6, 6);
}

void func_141()//Position - 0x3E23
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_197.f_170))
	{
		Local_197.f_170 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
		return;
	}
	if ((func_45() || func_87()) || func_170(0))
	{
		func_118("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_118("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_45() || func_87()) || func_31())
	{
		func_118("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_118("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_31())
	{
		func_118("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_45() && !func_87())
	{
		func_118("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_118("SET_HEADING_METER_IS_VISIBLE", 1);
	func_118("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_45() && !func_87()) && !func_31()) && func_169())
	{
		func_118("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_168())
	{
		func_118("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_118("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_118("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_197.f_120 >= (func_119() - 50f) || Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
		{
			func_118("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_167();
			if (BitTest(Local_197.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_197.f_5), 13);
			}
		}
		else
		{
			func_163(func_164());
			if (!BitTest(Local_197.f_5, 13))
			{
				func_118("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_197.f_5), 13);
			}
		}
	}
	else
	{
		func_118("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_167();
	}
	func_118("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_45() && !func_87())
	{
		if (!func_31())
		{
			func_162(Local_197.f_18);
		}
		else
		{
			func_161(Local_197.f_18);
		}
		if (!func_170(0))
		{
			func_160(Local_197.f_19);
		}
	}
	if (func_168())
	{
		func_159(Local_197.f_24);
	}
	if (func_169())
	{
		func_158(Local_197.f_20);
	}
	func_157(0, "DRONE_ZOOM_1" /* GXT: x1 */);
	func_157(1, "");
	func_157(2, "DRONE_ZOOM_2" /* GXT: x2 */);
	func_157(3, "");
	func_157(4, "DRONE_ZOOM_3" /* GXT: x4 */);
	func_155();
	func_153();
	func_151();
	func_150(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_197.f_159)) + 180f)));
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		func_149(func_164());
	}
	if (func_148())
	{
		func_143();
	}
	else if (func_31() || func_45())
	{
		func_142();
	}
	else if (func_38())
	{
		func_116();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_197.f_170, 255, 255, 255, 0, 0);
}

void func_142()//Position - 0x4105
{
	if (Local_197.f_150.f_2 >= (func_119() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			Local_197.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_37, "Out_Of_Bounds_Alarm_Loop", Local_197.f_157, true);
		}
		if (Local_197.f_150.f_2 >= (func_119() - 20f) && Local_197.f_150.f_2 < (func_119() - 16f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.1f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 16f) && Local_197.f_150.f_2 < (func_119() - 13f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.2f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 13f) && Local_197.f_150.f_2 < (func_119() - 10f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.3f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 10f) && Local_197.f_150.f_2 < (func_119() - 8f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.4f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 8f) && Local_197.f_150.f_2 < (func_119() - 6f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.5f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 6f) && Local_197.f_150.f_2 < (func_119() - 4f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.6f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 4f) && Local_197.f_150.f_2 < (func_119() - 3f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.7f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 3f) && Local_197.f_150.f_2 < (func_119() - 2f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.8f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 2f) && Local_197.f_150.f_2 < (func_119() - 1f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.9f);
		}
		else if (Local_197.f_150.f_2 >= (func_119() - 1f) && Local_197.f_150.f_2 < func_119())
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			AUDIO::STOP_SOUND(Local_197.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_37);
			Local_197.f_37 = -1;
		}
	}
}

void func_143()//Position - 0x43B3
{
	if (Local_197.f_120 >= (func_119() - 50f) || Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)))
	{
		func_144();
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			Local_197.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_37, "Out_Of_Bounds_Alarm_Loop", Local_197.f_157, true);
		}
		if ((Local_197.f_120 >= (func_119() - 50f) && Local_197.f_120 < (func_119() - 45f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 50)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.1f);
		}
		else if ((Local_197.f_120 >= (func_119() - 45f) && Local_197.f_120 < (func_119() - 40f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 45)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.2f);
		}
		else if ((Local_197.f_120 >= (func_119() - 40f) && Local_197.f_120 < (func_119() - 35f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 40)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.3f);
		}
		else if ((Local_197.f_120 >= (func_119() - 35f) && Local_197.f_120 < (func_119() - 30f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 35)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.4f);
		}
		else if ((Local_197.f_120 >= (func_119() - 30f) && Local_197.f_120 < (func_119() - 25f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 30)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.5f);
		}
		else if ((Local_197.f_120 >= (func_119() - 25f) && Local_197.f_120 < (func_119() - 20f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 25)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.6f);
		}
		else if ((Local_197.f_120 >= (func_119() - 20f) && Local_197.f_120 < (func_119() - 15f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 20)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.7f);
		}
		else if ((Local_197.f_120 >= (func_119() - 15f) && Local_197.f_120 < (func_119() - 10f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 15)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.8f);
		}
		else if ((Local_197.f_120 >= (func_119() - 10f) && Local_197.f_120 < (func_119() - 5f)) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 10)) && Local_197.f_121 < IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0.9f);
		}
		else if ((Local_197.f_120 >= (func_119() - 5f) && Local_197.f_120 < func_119()) || (Local_197.f_121 >= IntToFloat((Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */ - 5)) && Local_197.f_121 < IntToFloat(Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */)))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			AUDIO::STOP_SOUND(Local_197.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_37);
			Local_197.f_37 = -1;
		}
	}
}

void func_144()//Position - 0x481A
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !BitTest(Global_1942781.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_147(22045, -1);
			if (iVar0 < 4)
			{
				func_146("HACK_DRONE_DIS" /* GXT: The Drone is losing connection. It must remain in proximity to the Terrorbyte in order to receive a signal. If you fly it too far the Drone will be deactivated. */, -1);
				iVar0++;
				func_145(22045, iVar0, -1);
				MISC::SET_BIT(&(Global_1942781.f_3), 15);
			}
		}
	}
}

void func_145(int iParam0, int iParam1, int iParam2)//Position - 0x4875
{
	if (iParam2 == -1)
	{
		iParam2 = func_128();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

void func_146(char* sParam0, int iParam1)//Position - 0x489D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_147(int iParam0, int iParam1)//Position - 0x48B4
{
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_148()//Position - 0x48D0
{
	return BitTest(Global_1956030.f_2, 1);
}

void func_149(float fParam0)//Position - 0x48E0
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_150(int iParam0)//Position - 0x48FF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_151()//Position - 0x491E
{
	if (func_31())
	{
		if (BitTest(Local_197.f_5, 11) && !Local_197.f_156)
		{
			func_152(1);
		}
		else
		{
			func_152(0);
		}
	}
	else if (BitTest(Local_197.f_5, 11) || BitTest(Local_197.f_5, 23))
	{
		func_152(1);
	}
	else
	{
		func_152(0);
	}
}

void func_152(bool bParam0)//Position - 0x4975
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_153()//Position - 0x4994
{
	if (BitTest(Local_197.f_5, 4) || (BitTest(Local_197.f_5, 3) && func_31()))
	{
		if (Local_197.f_18 == 100)
		{
			func_154(1);
		}
		else if (Local_197.f_18 != 0 && Local_197.f_18 != 100)
		{
			func_154(2);
		}
	}
	else
	{
		func_154(0);
	}
}

void func_154(int iParam0)//Position - 0x49ED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_155()//Position - 0x4A0C
{
	switch (Local_197.f_25)
	{
		case 0:
			func_156(0);
			break;
		
		case 1:
			func_156(2);
			break;
		
		case 2:
			func_156(4);
			break;
	}
}

void func_156(int iParam0)//Position - 0x4A47
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_157(int iParam0, char* sParam1)//Position - 0x4A66
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_124(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_158(int iParam0)//Position - 0x4A8B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_159(int iParam0)//Position - 0x4AAA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_160(int iParam0)//Position - 0x4AC9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_161(int iParam0)//Position - 0x4AE8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_162(int iParam0)//Position - 0x4B07
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_197.f_170, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_163(float fParam0)//Position - 0x4B26
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_44))
	{
		Local_197.f_44 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_44, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_44, "signalstrength", fParam0);
	}
}

float func_164()//Position - 0x4B71
{
	float fVar0;
	
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
		{
			fVar0 = func_165(NETWORK::NET_TO_OBJ(Local_197.f_159), func_166(), 1);
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

float func_165(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x4D14
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

Vector3 func_166()//Position - 0x4D4E
{
	if (func_21(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1961369;
	}
	return 0f, 0f, 0f;
}

void func_167()//Position - 0x4D72
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_44))
	{
		AUDIO::STOP_SOUND(Local_197.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_44);
		Local_197.f_44 = -1;
	}
}

bool func_168()//Position - 0x4D9B
{
	return BitTest(Global_1956030.f_2, 6);
}

int func_169()//Position - 0x4DAB
{
	if (func_168())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1956030.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(bool bParam0)//Position - 0x4DCC
{
	if (func_148())
	{
		if (bParam0)
		{
			if (BitTest(Local_197.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	return 0;
}

bool func_171()//Position - 0x4E04
{
	return BitTest(Global_1956030, 27);
}

void func_172()//Position - 0x4E13
{
	int iVar0;
	int iVar1;
	
	if (func_87())
	{
		return;
	}
	if (!BitTest(Local_197.f_5, 16))
	{
		if (func_138(0, -1, 0))
		{
			func_137(-1);
			func_136(21, "DRONE_MOVE" /* GXT: Turn */, -1);
			func_136(20, "DRONE_POSITION" /* GXT: Move */, -1);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				func_135(210, "CELL_284" /* GXT: Zoom */, -1, 0);
				if ((!func_45() && !func_31()) && func_169())
				{
					func_135(209, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				func_135(208, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				func_135(207, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			else
			{
				func_136(29, "CELL_284" /* GXT: Zoom */, -1);
				if ((!func_45() && !func_31()) && func_169())
				{
					func_135(203, "BOOST_DRONE_E" /* GXT: Boost */, -1, 0);
				}
				func_135(209, "MOVE_DRONE_UP" /* GXT: Move Up */, -1, 0);
				func_135(210, "MOVE_DRONE_DO" /* GXT: Move Down */, -1, 0);
			}
			if (!func_45())
			{
				iVar0 = 206;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar0 = 237;
				}
				if (func_31())
				{
					func_135(iVar0, "MOVE_DRONE_EM" /* GXT: EMP */, -1, 0);
				}
				else
				{
					func_135(iVar0, "MOVE_DRONE_ST" /* GXT: Shock */, -1, 0);
				}
				iVar1 = 205;
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					iVar1 = 238;
				}
				if (!func_170(0))
				{
					func_135(iVar1, "MOVE_DRONE_EX" /* GXT: Detonate */, -1, 0);
				}
				else if (func_179())
				{
					func_135(iVar1, "MOVE_DRONE_TRG" /* GXT: Tranquilizer Gun */, -1, 0);
				}
			}
			if (!func_31())
			{
				if ((((func_178(0) || func_178(1)) || func_177()) || RECORDING::IS_REPLAY_RECORDING()) || func_173(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_135(201, "DRONE_PHOTO" /* GXT: Photo Mode */, -1, 0);
				}
			}
			func_135(80, "MOVE_DRONE_RE" /* GXT: Exit */, -1, 0);
			MISC::SET_BIT(&(Local_197.f_5), 16);
		}
	}
	else
	{
		func_123(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (!BitTest(Local_197.f_5, 17))
		{
			MISC::SET_BIT(&(Local_197.f_5), 17);
			MISC::CLEAR_BIT(&(Local_197.f_5), 16);
		}
	}
	else if (BitTest(Local_197.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_197.f_5), 17);
		MISC::CLEAR_BIT(&(Local_197.f_5), 16);
	}
}

int func_173(int iParam0)//Position - 0x5025
{
	if (func_176(func_21(iParam0)))
	{
		if (func_175() != func_13())
		{
			if (func_174() == func_175())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()//Position - 0x5055
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_35;
}

int func_175()//Position - 0x506C
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

int func_176(int iParam0)//Position - 0x5081
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

var func_177()//Position - 0x50A1
{
	return Global_23572.f_135;
}

bool func_178(bool bParam0)//Position - 0x50AE
{
	if (bParam0)
	{
		return (Global_23572.f_4 && Global_23572.f_104 == 4);
	}
	return Global_23572.f_4;
}

int func_179()//Position - 0x50D7
{
	if (func_180() <= 0)
	{
		return 0;
	}
	if (func_168())
	{
		return 1;
	}
	return 0;
}

int func_180()//Position - 0x50F7
{
	return Global_1956030.f_6;
}

bool func_181()//Position - 0x5105
{
	return BitTest(Global_1956030, 7);
}

void func_182()//Position - 0x5113
{
	int iVar0;
	
	if (!func_183())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if ((CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_RENDERING(Local_197.f_169)) && !func_87())
			{
				iVar0 = 80;
				if (func_93())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					if (!BitTest(Local_197.f_5, 7))
					{
						MISC::SET_BIT(&(Local_197.f_5), 7);
					}
				}
			}
		}
	}
}

int func_183()//Position - 0x51AA
{
	if (func_17())
	{
		if (!func_140())
		{
			return 0;
		}
	}
	return 1;
}

void func_184()//Position - 0x51C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_190() || !func_173(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_189(1);
	func_188(iVar0);
	iVar1 = func_189(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_197.f_141, 2f, iVar1, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_197.f_162)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!BitTest(Local_197.f_5, 26))
			{
				func_187(func_175(), 1, 1, 0);
				MISC::SET_BIT(&(Local_197.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_197.f_162))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_197.f_162, joaat("WEAPON_STUNGUN"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_197.f_162) == 999)
		{
			if (!BitTest(Local_197.f_5, 26))
			{
				func_187(func_175(), 1, 1, 0);
				MISC::SET_BIT(&(Local_197.f_5), 26);
			}
		}
	}
	if (BitTest(Local_197.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_197.f_141, 2f, iVar0, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_197.f_162))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_197.f_162, false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
			}
			func_185(1);
		}
	}
}

void func_185(bool bParam0)//Position - 0x530E
{
	if (bParam0)
	{
		if (!func_186())
		{
			MISC::SET_BIT(&Global_1956030, 1);
		}
	}
	else if (func_186())
	{
		MISC::CLEAR_BIT(&Global_1956030, 1);
	}
}

bool func_186()//Position - 0x533F
{
	return BitTest(Global_1956030, 1);
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x534D
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

bool func_188(int iParam0)//Position - 0x53A1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_189(bool bParam0)//Position - 0x53BF
{
	if (!bParam0)
	{
		if (Global_1956030.f_19 != 0)
		{
			return Global_1956030.f_19;
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

var func_190()//Position - 0x53F7
{
	return BitTest(Global_1956030, 14);
}

void func_191()//Position - 0x5406
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_197.f_5, 1) || func_202()) || func_201())
	{
		Local_197.f_18 = 0;
		Local_197.f_19 = 0;
		if (!BitTest(Local_197.f_5, 10))
		{
			MISC::SET_BIT(&(Local_197.f_5), 10);
		}
		return;
	}
	if (!func_201())
	{
		if (BitTest(Local_197.f_5, 10))
		{
			Local_197.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_197.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if ((CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_RENDERING(Local_197.f_169)) && !BitTest(Local_197.f_5, 2))
			{
				if ((!BitTest(Local_197.f_5, 4) && !BitTest(Local_197.f_5, 3)) && !Local_197.f_156)
				{
					iVar0 = 206;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0)) && !BitTest(Local_197.f_5, 5)) && !BitTest(Local_197.f_5, 24)) && !func_87())
					{
						MISC::SET_BIT(&Global_1956030, 29);
						MISC::SET_BIT(&(Local_197.f_5), 24);
						if (BitTest(Local_197.f_5, 11) || BitTest(Local_197.f_5, 23))
						{
							Local_197.f_27++;
						}
					}
					if (func_31() && !func_171())
					{
						func_198();
					}
					else
					{
						func_197();
					}
				}
				else if (func_32(&(Local_197.f_249)))
				{
					if (func_171())
					{
						iVar1 = 3000;
					}
					else if (func_31())
					{
						iVar1 = Global_262145.f_25523 /* Tunable: AW_DRONE_EMP_COOLDOWN_TIME */;
					}
					else
					{
						iVar1 = Global_262145.f_24876 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
					}
					if (func_29(&(Local_197.f_249), iVar1, 0))
					{
						func_28(&(Local_197.f_249));
						Local_197.f_18 = 100;
						if (Local_197.f_32 != -1)
						{
							AUDIO::STOP_SOUND(Local_197.f_32);
							AUDIO::RELEASE_SOUND_ID(Local_197.f_32);
							Local_197.f_32 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_35))
						{
							AUDIO::STOP_SOUND(Local_197.f_35);
							AUDIO::RELEASE_SOUND_ID(Local_197.f_35);
							Local_197.f_35 = -1;
						}
						MISC::CLEAR_BIT(&(Local_197.f_5), 4);
						MISC::CLEAR_BIT(&(Local_197.f_5), 3);
						MISC::CLEAR_BIT(&(Local_197.f_5), 24);
						MISC::CLEAR_BIT(&Global_1956030, 29);
						Local_197.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_249)));
						Local_197.f_18 = (iVar2 / iVar1);
						if (!func_31())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_32))
							{
								Local_197.f_32 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_32, "HUD_Shock_Recharge", Local_197.f_157, true);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_195();
				func_192();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

void func_192()//Position - 0x56AA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_179())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_197.f_6, 5))
		{
			if (!BitTest(Local_197.f_6, 4))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iVar0))
				{
					MISC::SET_BIT(&(Local_197.f_6), 4);
				}
			}
			else if (Local_197.f_13 == 1)
			{
				if (Local_197.f_244 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.f_0)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.f_0)), SYSTEM::SIN(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24877 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
					if (BitTest(Local_197.f_5, 23))
					{
						iVar16 = Global_262145.f_24878 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_197.f_150 + Vector(0f, 0f, 0f), Var13, iVar16, true, joaat("WEAPON_TRANQUILIZER"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_197.f_159), false, false, 0, true, 0, 0, 0);
					Local_197.f_24 = 100;
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_197.f_131)));
					if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_81))
					{
						Local_197.f_81 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_81, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_197.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (BitTest(Local_197.f_5, 11) || BitTest(Local_197.f_5, 23))
					{
						Local_197.f_29++;
					}
					func_194((func_180() - 1));
					if (func_180() <= 0)
					{
						Local_197.f_24 = 0;
						MISC::CLEAR_BIT(&(Local_197.f_5), 16);
					}
					MISC::SET_BIT(&(Local_197.f_6), 5);
					func_30(&(Local_197.f_257), 0, 0);
				}
			}
		}
		else
		{
			func_193();
		}
	}
}

void func_193()//Position - 0x587C
{
	int iVar0;
	int iVar1;
	
	if (func_180() > 0)
	{
		if (func_32(&(Local_197.f_257)))
		{
			iVar0 = Global_262145.f_24876 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_COOLDOWN_TIME */;
			if (func_29(&(Local_197.f_257), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_197.f_6), 5);
				MISC::CLEAR_BIT(&(Local_197.f_6), 4);
				func_28(&(Local_197.f_257));
				Local_197.f_24 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_35))
				{
					AUDIO::STOP_SOUND(Local_197.f_35);
					AUDIO::RELEASE_SOUND_ID(Local_197.f_35);
					Local_197.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_257)));
				Local_197.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_194(int iParam0)//Position - 0x5913
{
	if (Global_1956030.f_6 != iParam0)
	{
		Global_1956030.f_6 = iParam0;
	}
}

void func_195()//Position - 0x592E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_197.f_348.f_2 = 2;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		Local_197.f_348.f_3 = 238;
	}
	else
	{
		Local_197.f_348.f_3 = 205;
	}
	iVar0 = Global_262145.f_24879 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
	if (!BitTest(Local_197.f_5, 31))
	{
		Local_197.f_22 = 100;
	}
	if (func_31())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_197.f_6, 1))
		{
			Local_197.f_21 = ((Local_197.f_23 * (Global_262145.f_24879 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2)) / 100);
			Local_197.f_21 = ((Global_262145.f_24879 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */ / 2) - Local_197.f_21);
			MISC::CLEAR_BIT(&(Local_197.f_6), 1);
		}
		if (BitTest(Local_197.f_5, 31))
		{
			iVar0 = Local_197.f_21;
		}
	}
	else
	{
		Local_197.f_22 = 100;
	}
	if (!func_170(1))
	{
		if (!func_87() && func_196(&(Local_197.f_348), 1, iVar0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_36))
			{
				Local_197.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_36, "Destroyed", NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_157, true, 0);
			}
			HUD::THEFEED_SHOW();
			iVar1 = 0;
			if (func_31())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_197.f_150, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_197.f_131)));
			MISC::SET_BIT(&(Local_197.f_5), 2);
		}
	}
	if (func_32(&(Local_197.f_348)))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 20);
		if (!BitTest(Local_197.f_5, 5))
		{
			MISC::SET_BIT(&(Local_197.f_5), 5);
		}
		func_28(&(Local_197.f_273));
		if (!func_29(&(Local_197.f_348), iVar0, 0))
		{
			iVar2 = (Local_197.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_348)));
			if (!func_31())
			{
				Local_197.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_197.f_5, 31))
			{
				Local_197.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_197.f_19 = (Local_197.f_23 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_33))
			{
				Local_197.f_33 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_33, "HUD_Detonate_Charge", Local_197.f_157, true);
			}
		}
	}
	else if (BitTest(Local_197.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_197.f_5), 5);
		if (!func_31())
		{
			Local_197.f_19 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_197.f_5), 31);
			Local_197.f_22 = (100 - Local_197.f_19);
			Local_197.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_348)));
			Local_197.f_23 = Local_197.f_19;
			func_28(&(Local_197.f_273));
		}
		if (Local_197.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_197.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_33);
			Local_197.f_33 = -1;
		}
	}
	else if (func_31())
	{
		if (Local_197.f_19 > 0)
		{
			if (Local_197.f_19 <= 2)
			{
				Local_197.f_19 = 0;
			}
			if (!func_32(&(Local_197.f_273)))
			{
				func_30(&(Local_197.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24879 /* Tunable: BB_TERRORBYTE_DRONE_DETONATE_TIME */;
				if (!func_29(&(Local_197.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_197.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_273)))));
					Local_197.f_19 = (Local_197.f_19 - SYSTEM::ROUND(fVar4));
					Local_197.f_23 = Local_197.f_19;
					Local_197.f_22 = (100 - Local_197.f_19);
					MISC::SET_BIT(&(Local_197.f_6), 1);
				}
				else
				{
					Local_197.f_19 = 0;
				}
			}
		}
		else
		{
			func_28(&(Local_197.f_348));
			MISC::CLEAR_BIT(&(Local_197.f_5), 31);
			MISC::CLEAR_BIT(&(Local_197.f_6), 1);
		}
	}
}

int func_196(var uParam0, int iParam1, int iParam2)//Position - 0x5C91
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_32(uParam0))
		{
			func_30(uParam0, 0, 0);
		}
		else if (func_29(uParam0, iParam2, 0))
		{
			func_28(uParam0);
			return 1;
		}
	}
	else
	{
		func_28(uParam0);
	}
	return 0;
}

void func_197()//Position - 0x5CF6
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (BitTest(Local_197.f_5, 24))
	{
		if (Local_197.f_13 == 1)
		{
			if (Local_197.f_244 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var6 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.f_0)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.f_0)), SYSTEM::SIN(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24877 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PLAYERS */;
				if (BitTest(Local_197.f_5, 23))
				{
					iVar15 = Global_262145.f_24878 /* Tunable: BB_TERRORBYTE_DRONE_SHOCK_DAMAGE_PEDS */;
				}
				if (func_168())
				{
					iVar15 = 1;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_197.f_150 + Vector(0f, 0f, 0f), Var12, iVar15, true, joaat("WEAPON_STUNGUN"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_197.f_159), false, false, 0, true, 0, 0, 0);
				Local_197.f_18 = 100;
				Local_197.f_19 = 0;
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_197.f_131)));
				if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_35))
				{
					Local_197.f_35 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_157, true, 0);
				}
				if (Local_197.f_33 != -1)
				{
					AUDIO::STOP_SOUND(Local_197.f_33);
					AUDIO::RELEASE_SOUND_ID(Local_197.f_33);
					Local_197.f_33 = -1;
				}
				MISC::SET_BIT(&(Local_197.f_5), 4);
				func_30(&(Local_197.f_249), 0, 0);
			}
		}
	}
}

void func_198()//Position - 0x5E55
{
	if ((BitTest(Local_197.f_5, 24) && !BitTest(Local_197.f_5, 3)) && !Local_197.f_156)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_197.f_159), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_197.f_18 = 100;
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((150f * Local_197.f_131)));
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_35))
		{
			Local_197.f_35 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_157, true, 0);
		}
		if (Local_197.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_197.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_33);
			Local_197.f_33 = -1;
		}
		func_199(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_197.f_159), true), 0);
		MISC::SET_BIT(&(Local_197.f_5), 3);
		Local_197.f_156 = 1;
		func_30(&(Local_197.f_249), 0, 0);
	}
}

void func_199(struct<3> Param0, bool bParam3)//Position - 0x5F4D
{
	struct<7> Var0;
	
	Var0.f_0 = 1872545935;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = bParam3;
	if (!bParam3)
	{
		if (!func_200(1, 1) == 0)
		{
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_200(1, 1), Var0.f_0);
		}
	}
	else if (Global_1956030.f_21 != func_13())
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 7, func_8(Global_1956030.f_21), Var0.f_0);
	}
}

int func_200(int iParam0, bool bParam1)//Position - 0x5FC0
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
				else if (!func_126(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_201()//Position - 0x6025
{
	return BitTest(Global_1956030, 8);
}

int func_202()//Position - 0x6034
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false)) && !BitTest(Local_197.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (func_173(PLAYER::PLAYER_ID()) && BitTest(Global_2737317, 0))
		{
		}
		else if (func_212())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_197.f_159)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_197.f_159)) != 0)
			{
				Local_197.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_197.f_5, 2))
	{
		Local_197.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_197.f_5, 9))
	{
		Local_197.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_197.f_5, 7))
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_197.f_159)) || func_211(NETWORK::NET_TO_ENT(Local_197.f_159), 0))
		{
			if (BitTest(Local_197.f_5, 29))
			{
				Local_197.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_209(PLAYER::PLAYER_ID()))
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_148())
	{
		if (Global_1845102 != func_13())
		{
			if (func_53(Global_1845102))
			{
				Local_197.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_208())
	{
		Local_197.f_26 = 1;
		return 1;
	}
	if (func_207(PLAYER::PLAYER_ID()))
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_206())
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_205())
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_39())
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_44())
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (func_38())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
		{
			Local_197.f_26 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_197.f_26 = 6;
			return 1;
		}
		if (func_165(PLAYER::PLAYER_PED_ID(), Local_197.f_153, 1) > 2f)
		{
			Local_197.f_26 = 7;
			return 1;
		}
	}
	if (func_204())
	{
		return 1;
	}
	if (func_17())
	{
		if (func_41())
		{
			return 1;
		}
		if (func_203("AIRDEF_WARN" /* GXT: You are entering protected air space. If you remain you will be shot. */))
		{
			if (func_29(&(Local_197.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_197.f_346));
		}
	}
	return 0;
}

bool func_203(char* sParam0)//Position - 0x6279
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_204()//Position - 0x628C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_197.f_159), Var0, Var3, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_205()//Position - 0x62EA
{
	return Global_98681;
}

bool func_206()//Position - 0x62F6
{
	return BitTest(Global_1956030, 9);
}

int func_207(int iParam0)//Position - 0x6305
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1886967[iVar0 /*609*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_208()//Position - 0x632A
{
	struct<3> Var0;
	
	if (Local_197.f_17 == joaat("v_faceoffice"))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_197.f_159)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_197.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_197.f_159), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_197.f_159)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_197.f_159), -1071.2579f, -242.54842f, 48.021328f, -1069.456f, -245.9234f, 43.879833f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_197.f_159), 2494.398f, -276.2f, -69.09f, 2494.3423f, -277.48242f, -67.987564f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x640C
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		if (func_12(iParam0) && !func_210(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x6445
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 4);
	}
	return 0;
}

int func_211(int iParam0, int iParam1)//Position - 0x6476
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

bool func_212()//Position - 0x64B7
{
	return BitTest(Global_1956030, 15);
}

void func_213()//Position - 0x64C6
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
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			Var0 = { Local_197.f_150 };
			switch (Local_197.f_13)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.f_2) * SYSTEM::COS(Var6.f_0)), (SYSTEM::COS(Var6.f_2) * SYSTEM::COS(Var6.f_0)), SYSTEM::SIN(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					if (func_31())
					{
						Var12 = { Global_262145.f_25524 /* Tunable: AW_DRONE_EMP_RANGE */, Global_262145.f_25524 /* Tunable: AW_DRONE_EMP_RANGE */, Global_262145.f_25524 /* Tunable: AW_DRONE_EMP_RANGE */ };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_197.f_150, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_197.f_159)), 0f, -0.1f, 0f) };
					Local_197.f_167 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_197.f_159), 7);
					if (Local_197.f_167 != 0)
					{
						Local_197.f_13 = 1;
					}
					break;
				
				case 1:
					Local_197.f_244 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_197.f_167, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_197.f_244 == 2)
					{
						if (iVar18 == 0)
						{
							Local_197.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (BitTest(Local_197.f_5, 11) && !func_31())
							{
								MISC::CLEAR_BIT(&(Local_197.f_5), 11);
							}
							if (BitTest(Local_197.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_197.f_5), 23);
							}
							func_220();
						}
						else
						{
							Local_197.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, false))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_218(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!BitTest(Local_197.f_5, 23))
											{
												MISC::SET_BIT(&(Local_197.f_5), 23);
												if (BitTest(Local_197.f_5, 11) && !func_31())
												{
													MISC::CLEAR_BIT(&(Local_197.f_5), 11);
												}
											}
											if (!func_100(PLAYER::PLAYER_ID()) && !func_97(PLAYER::PLAYER_ID()))
											{
												if ((func_217(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_216(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_215(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_96(Global_1837302);
													func_214(&(Local_197.f_259), 0, 0);
												}
												else
												{
													func_220();
												}
											}
										}
										if ((((!BitTest(Local_197.f_5, 11) && !bVar26) && func_24(Global_1956030.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1956030.f_23, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_197.f_5), 11);
											if (BitTest(Local_197.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_197.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_31())
									{
										if (BitTest(Local_197.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_197.f_5), 11);
										}
									}
									if (BitTest(Local_197.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_197.f_5), 23);
									}
									func_220();
								}
							}
							else
							{
								func_220();
							}
							Local_197.f_167 = 0;
							Local_197.f_13 = 0;
						}
					}
					else if (Local_197.f_244 == 0)
					{
						Local_197.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

void func_214(var uParam0, bool bParam1, bool bParam2)//Position - 0x6800
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

int func_215(int iParam0)//Position - 0x683D
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

int func_216(int iParam0)//Position - 0x6861
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

int func_217(int iParam0)//Position - 0x6936
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

int func_218(int iParam0, int iParam1)//Position - 0x6999
{
	int iVar0;
	
	iVar0 = func_219(iParam0);
	if (func_9(iVar0))
	{
		if (iVar0 == func_219(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x69C2
{
	if (func_9(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_13();
}

void func_220()//Position - 0x69E5
{
	if (func_32(&(Local_197.f_259)))
	{
		if (func_29(&(Local_197.f_259), 60000, 0))
		{
			func_28(&(Local_197.f_259));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_96(Global_1837291);
			}
		}
	}
}

void func_221()//Position - 0x6A27
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
	
	if (((func_42() || func_31()) || func_45()) || func_17())
	{
		if (!BitTest(Local_197.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::IS_ENTITY_IN_GHOST_COLLISION(NETWORK::NET_TO_OBJ(Local_197.f_159)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			switch (Local_197.f_11)
			{
				case 0:
					if ((func_31() || func_45()) || func_42())
					{
						fVar13 = 0.3f;
					}
					else if (func_17())
					{
						fVar13 = 0.65f;
					}
					else
					{
						fVar13 = (func_224(Local_197.f_240) * 1.5f);
					}
					if (func_93())
					{
						Var14 = { Local_197.f_150 };
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
						Var14 = { Local_197.f_150 };
						Var17 = { Local_197.f_150 };
					}
					Local_197.f_166 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var14, Var17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_197.f_159), 4);
					if (Local_197.f_166 != 0)
					{
						Local_197.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_197.f_166, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_197.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_197.f_240)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_222(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!BitTest(Local_197.f_5, 9))
											{
												MISC::SET_BIT(&(Local_197.f_5), 9);
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
											if (Local_197.f_28 == 0)
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
												Local_197.f_28 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_197.f_150, 5000f);
												func_214(&(Local_197.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_197.f_12 = 2;
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, 50);
							Local_197.f_166 = 0;
							Local_197.f_11 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_197.f_11 = 0;
					}
					break;
			}
			if (Local_197.f_28 != 0)
			{
				if (func_32(&(Local_197.f_265)))
				{
					if (func_29(&(Local_197.f_265), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_197.f_28);
						func_28(&(Local_197.f_265));
						Local_197.f_28 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

int func_222(int iParam0)//Position - 0x6D39
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
	if (func_223(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0, int iParam1)//Position - 0x6D95
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
			if (!Global_262145.f_14937 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14938 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14936 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14939 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14941 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14940 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
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
			if (Global_262145.f_19351 /* Tunable: ENABLE_IE_COMET3 */)
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
			if (Global_262145.f_19353 /* Tunable: ENABLE_IE_DIABLOUS2 */)
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
			if (Global_262145.f_19357 /* Tunable: ENABLE_IE_FCR2 */)
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
			if (Global_262145.f_19354 /* Tunable: ENABLE_IE_ELEGY */)
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
			if (Global_262145.f_19361 /* Tunable: ENABLE_IE_NERO2 */)
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
			if (Global_262145.f_19359 /* Tunable: ENABLE_IE_ITALIGTB2 */)
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
			if (Global_262145.f_19364 /* Tunable: ENABLE_IE_SPECTER2 */)
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
			if (Global_262145.f_21310 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
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
			if (Global_262145.f_21311 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
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

float func_224(int iParam0)//Position - 0x7174
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_225(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_225(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x71A2
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_228(iParam0);
		if (iVar0 != 0)
		{
			func_226(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_226(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x72A1
{
	int iVar0;
	
	func_227(iParam0, &Global_1578029);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1578029[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1578029[iVar0], &(Global_1578033[iVar0 /*3*/]), &(Global_1578040[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1578033[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578040[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1578033[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578040[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1578033[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578040[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1578033[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578040[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578047[iVar0] = (Global_1578040[iVar0 /*3*/] - Global_1578033[iVar0 /*3*/]);
		Global_1578050[iVar0] = (Global_1578040[iVar0 /*3*/].f_1 - Global_1578033[iVar0 /*3*/].f_1);
		Global_1578053[iVar0] = (Global_1578040[iVar0 /*3*/].f_2 - Global_1578033[iVar0 /*3*/].f_2);
		if (Global_1578047[iVar0] > Global_1578056)
		{
			Global_1578056 = Global_1578047[iVar0];
		}
		if (Global_1578053[iVar0] > Global_1578057)
		{
			Global_1578057 = Global_1578053[iVar0];
		}
		iVar0++;
	}
	Global_1578058 = (Global_1578056 * -0.5f);
	Global_1578061 = (Global_1578056 * 0.5f);
	Global_1578058.f_1 = ((((0.5f * Global_1578050[0]) + Global_1578050[1]) + Global_1578029.f_3) * -1f);
	Global_1578061.f_1 = (0.5f * Global_1578050[0]);
	Global_1578058.f_2 = (Global_1578053[0] * -0.5f);
	Global_1578061.f_2 = (Global_1578053[0] * 0.5f);
	*uParam1 = { Global_1578058 };
	*uParam2 = { Global_1578061 };
}

void func_227(int iParam0, var uParam1)//Position - 0x74AD
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

int func_228(int iParam0)//Position - 0x752E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_229(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x755D
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_230()//Position - 0x756F
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (func_24(NETWORK::NET_TO_OBJ(Local_197.f_159)))
		{
			iVar0 = func_233(NETWORK::NET_TO_OBJ(Local_197.f_159));
			if (iVar0 != -1)
			{
				if (!func_232(&(Global_1835505.f_395), iVar0) && !func_232(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_536), iVar0))
				{
					func_231(1);
				}
			}
		}
	}
}

void func_231(bool bParam0)//Position - 0x75D5
{
	if (bParam0)
	{
		if (func_85())
		{
			if (!BitTest(Global_1956030, 9))
			{
				MISC::SET_BIT(&Global_1956030, 9);
			}
		}
	}
	else if (BitTest(Global_1956030, 9))
	{
		MISC::CLEAR_BIT(&Global_1956030, 9);
	}
}

bool func_232(var uParam0, int iParam1)//Position - 0x7618
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_233(int iParam0)//Position - 0x7637
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_237(iParam0);
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
				func_234(iVar3);
				if (Global_1947833[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_234(int iParam0)//Position - 0x76A6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1947833[iVar0] == 0)
	{
		Global_1947833[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_236(iParam0), func_235(iParam0));
	}
}

char* func_235(int iParam0)//Position - 0x76D6
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

Vector3 func_236(int iParam0)//Position - 0x7918
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

int func_237(int iParam0)//Position - 0x7D2E
{
	if (func_244(iParam0))
	{
		return 15;
	}
	if (func_242(iParam0))
	{
		return 28;
	}
	if (func_240(iParam0))
	{
		return 36;
	}
	if (func_239(iParam0))
	{
		return 23;
	}
	if (func_238(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_238(int iParam0)//Position - 0x7D7D
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

int func_239(int iParam0)//Position - 0x7E2E
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

bool func_240(int iParam0)//Position - 0x7FC5
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.9146f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_241());
}

int func_241()//Position - 0x800C
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

bool func_242(int iParam0)//Position - 0x8060
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.5997f, -1039.8674f, -3.801932f, -2129.9556f, -1003.3514f, 22.18234f, 15.75f, false, true, 0)) || func_243());
}

int func_243()//Position - 0x80AD
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

bool func_244(int iParam0)//Position - 0x80FE
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f), Vector(22.18234f, -1003.3514f, -2129.9556f) + Vector(0f, 7773.9673f, 654.731f), 15.75f, false, true, 0)) || func_245());
}

int func_245()//Position - 0x8163
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

void func_246(int iParam0)//Position - 0x81C0
{
	int iVar0;
	int iVar1;
	
	if (func_42())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_ACTIVE(Local_197.f_169))
		{
			if (CAM::IS_CAM_RENDERING(Local_197.f_169) || iParam0)
			{
				if (!func_87())
				{
					func_81(0);
				}
				func_257(1);
				if ((!func_256() || BitTest(Local_197.f_5, 1)) || func_202())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_90();
					func_254(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_197.f_159));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1956030.f_24 = iVar0;
						if (!BitTest(Local_197.f_5, 8))
						{
							Local_197.f_123 = func_253(INTERIOR::GET_INTERIOR_HEADING(iVar0));
							INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iVar0, &(Local_197.f_147), &(Local_197.f_17));
							MISC::SET_BIT(&(Local_197.f_5), 8);
						}
						iVar1 = 0;
						if (func_252(Local_197.f_150.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1956030.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1956030.f_9);
						}
						if ((!func_173(PLAYER::PLAYER_ID()) && !func_249(PLAYER::PLAYER_ID())) && !func_17())
						{
							if (!func_248())
							{
								func_247(1);
							}
						}
						if (!func_17())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_197.f_17, Local_197.f_147, Local_197.f_147.f_1, SYSTEM::FLOOR(Local_197.f_123), iVar1);
					}
					else
					{
						Local_197.f_17 = -1;
						if (Global_1956030.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1956030.f_9);
						}
						if (!func_248() && !func_17())
						{
							func_247(1);
						}
						if (!func_17())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1956030.f_24 = -1;
						if (BitTest(Local_197.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_197.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_247(int iParam0)//Position - 0x83A3
{
	Global_2698571 = iParam0;
}

bool func_248()//Position - 0x83B1
{
	return Global_2698571;
}

int func_249(int iParam0)//Position - 0x83BD
{
	if (func_251(iParam0))
	{
		return 1;
	}
	if (func_250(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x83E0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_101(iParam0, 9);
	}
	return 0;
}

int func_251(var uParam0)//Position - 0x83FE
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_252(float fParam0, float fParam1, float fParam2)//Position - 0x8421
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_253(float fParam0)//Position - 0x8440
{
	return (fParam0 * 57.29578f);
}

void func_254(bool bParam0)//Position - 0x8450
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101444.f_8 = 1;
	}
	else
	{
		Global_101444.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_255(iVar0);
		iVar0++;
	}
}

void func_255(int iParam0)//Position - 0x8487
{
	Global_101444.f_205[iParam0] = 1;
	Global_101444.f_204 = 1;
}

bool func_256()//Position - 0x84A1
{
	return BitTest(Global_1956030, 4);
}

void func_257(int iParam0)//Position - 0x84AF
{
	if (Global_2738587.f_4660 != iParam0)
	{
		Global_2738587.f_4660 = iParam0;
	}
}

void func_258()//Position - 0x84CC
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
	
	if ((BitTest(Local_197.f_5, 1) || func_202()) || func_93())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_197.f_159));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_197.f_159));
			if (func_37())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_263();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			func_262(&(Local_197[0]), &(Local_197[1]), &(Local_197[2]), &(Local_197[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 5;
				Local_197[2] = (Local_197[2] * iVar3);
				Local_197[3] = (Local_197[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_197[3] = (Local_197[3] * -1);
			}
			if (func_29(&(Local_197.f_277), 750, 0))
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
					func_214(&(Local_197.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_261())
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					Local_197.f_25++;
				}
				else if (bVar8)
				{
					Local_197.f_25 = (Local_197.f_25 - 1);
				}
				else
				{
					Local_197.f_25++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_39))
				{
					Local_197.f_39 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_39, "HUD_Zoom_Change", Local_197.f_157, true);
				}
				if (Local_197.f_25 > 2)
				{
					Local_197.f_25 = 0;
				}
				else if (Local_197.f_25 < 0)
				{
					Local_197.f_25 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_39))
			{
				AUDIO::STOP_SOUND(Local_197.f_39);
				AUDIO::RELEASE_SOUND_ID(Local_197.f_39);
				Local_197.f_39 = -1;
			}
			Local_197.f_128 = (Local_197.f_128 + (((Local_197.f_126 - Local_197.f_128) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_197.f_169, Local_197.f_128);
			if (Local_197[2] != 0 || Local_197[3] != 0)
			{
				if (Local_197[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_197[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_197[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_197[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_197.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_197.f_130);
				if ((fVar4 != 0f || Local_197[0] != 0) && !func_87())
				{
					if (Local_197[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_197[0])));
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
					if (Local_197[0] == 0)
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
				if (!BitTest(Local_197.f_5, 12))
				{
					MISC::SET_BIT(&(Local_197.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, true);
			}
			else if (((Local_197[0] != 0 || Local_197[1] != 0) && !func_261()) && !func_87())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
				if (func_261())
				{
					if (func_260())
					{
						fVar25 = -1f;
						Local_197.f_129 = fVar25;
					}
				}
				else
				{
					if (Local_197[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_197[0])));
						Local_197.f_129 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_197[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_197[1])));
						Local_197.f_129 = fVar24;
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
					if ((Local_197[0] == 0 && !func_87()) || func_261())
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
				if (BitTest(Local_197.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_197.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, true);
			}
			else if (!func_260() && !func_261())
			{
				Local_197.f_129 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
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
					uVar36 = func_259(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_259(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (BitTest(Local_197.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

float func_259(float fParam0)//Position - 0x8C7E
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

bool func_260()//Position - 0x8CB8
{
	return BitTest(Local_197.f_5, 22);
}

bool func_261()//Position - 0x8CC7
{
	return BitTest(Local_197.f_5, 21);
}

void func_262(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x8CD6
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

void func_263()//Position - 0x8DDA
{
	if (func_148())
	{
		switch (Local_197.f_25)
		{
			case 0:
				Local_197.f_127 = 90f;
				Local_197.f_126 = 90f;
				break;
			
			case 1:
				Local_197.f_127 = 75f;
				Local_197.f_126 = 75f;
				break;
			
			case 2:
				Local_197.f_127 = 45f;
				Local_197.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_197.f_25)
		{
			case 0:
				Local_197.f_127 = 90f;
				Local_197.f_126 = 90f;
				break;
			
			case 1:
				Local_197.f_127 = 80f;
				Local_197.f_126 = 80f;
				break;
			
			case 2:
				Local_197.f_127 = 70f;
				Local_197.f_126 = 70f;
				break;
			}
	}
}

void func_264()//Position - 0x8EA0
{
	int iVar0;
	int iVar1;
	
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_189(0);
		Local_197.f_141 = { func_267(&Local_197) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_197.f_162))
		{
			if (!func_266(Local_197.f_141))
			{
				if (func_188(iVar0))
				{
					Local_197.f_162 = OBJECT::CREATE_OBJECT(iVar0, Local_197.f_141, false, false, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_197.f_162, Local_197.f_141, false, false, true);
					ENTITY::SET_ENTITY_COLLISION(Local_197.f_162, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_197.f_162, true, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_197.f_162, true);
					ENTITY::SET_ENTITY_HEADING(Local_197.f_162, func_265());
					ENTITY::FREEZE_ENTITY_POSITION(Local_197.f_162, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_197.f_162, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_197.f_141, 2f, iVar0, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_197.f_162)
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
		Local_197.f_141 = { func_267(&Local_197) };
	}
}

float func_265()//Position - 0x8FB3
{
	if (Global_1956030.f_7 != 0f)
	{
		return Global_1956030.f_7;
	}
	return 0f;
}

int func_266(struct<3> Param0)//Position - 0x8FD0
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_267(var uParam0)//Position - 0x8FFA
{
	if (!func_266(Global_1956030.f_10))
	{
		return Global_1956030.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_268()//Position - 0x902C
{
	if (Local_197.f_33 != -1)
	{
		AUDIO::STOP_SOUND(Local_197.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_33);
		Local_197.f_33 = -1;
	}
}

int func_269(bool bParam0)//Position - 0x9051
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 1;
	}
	if (func_181())
	{
		return 1;
	}
	if (func_274(PLAYER::PLAYER_ID()) && !func_273())
	{
		return 1;
	}
	if (func_173(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2737317, 0))
		{
			return 1;
		}
	}
	if (Global_1927715 || Global_1574971)
	{
		func_272(1);
		return 1;
	}
	if (((func_270(0) || func_178(1)) || func_177()) && !bParam0)
	{
		func_81(0);
		func_90();
		func_109();
		return 1;
	}
	return 0;
}

int func_270(bool bParam0)//Position - 0x9106
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_271(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23572.f_130)
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

int func_271(int iParam0)//Position - 0x91F1
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

void func_272(bool bParam0)//Position - 0x924E
{
	if (bParam0)
	{
		if (!func_44())
		{
			MISC::SET_BIT(&Global_1956030, 20);
		}
	}
	else if (func_44())
	{
		MISC::CLEAR_BIT(&Global_1956030, 20);
	}
}

bool func_273()//Position - 0x9281
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1962942, 0));
}

int func_274(int iParam0)//Position - 0x929D
{
	if (func_126(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()//Position - 0x92DC
{
	return BitTest(Global_2621446, 3);
}

void func_276()//Position - 0x92EA
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
	
	if (!func_93() || func_202())
	{
		return;
	}
	if (func_42() && func_269(0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_197.f_159));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_197.f_159));
			iVar6 = 1;
			if (func_17())
			{
				if (func_269(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_269(0))
			{
				iVar6 = 0;
			}
			if (func_17())
			{
				if (!func_140())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * MISC::GET_FRAME_TIME());
			func_263();
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			func_262(&(Local_197[0]), &(Local_197[1]), &(Local_197[2]), &(Local_197[3]), 0, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				iVar3 = 2;
				if (func_17())
				{
					iVar3 = 3;
				}
				Local_197[2] = (Local_197[2] * iVar3);
				Local_197[3] = (Local_197[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_197[3] = (Local_197[3] * -1);
				Local_197[1] = (Local_197[1] * -1);
			}
			if (Local_197[3] != 0 && Local_197[2] != 0)
			{
				iVar8 = func_278(MISC::ABSI(Local_197[3]), MISC::ABSI(Local_197[2]));
				Local_197.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_197[1] != 0 && Local_197[0] != 0)
			{
				iVar9 = func_278(MISC::ABSI(Local_197[1]), MISC::ABSI(Local_197[0]));
				Local_197.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_197[3] != 0)
			{
				Local_197.f_129 = (1f / (127f / IntToFloat(Local_197[3])));
			}
			else if (Local_197[2] != 0)
			{
				Local_197.f_129 = (1f / (127f / IntToFloat(Local_197[2])));
			}
			else if (Local_197[1] != 0)
			{
				Local_197.f_129 = (1f / (127f / IntToFloat(Local_197[1])));
			}
			else if (Local_197[0] != 0)
			{
				Local_197.f_129 = (1f / (127f / IntToFloat(Local_197[0])));
			}
			else
			{
				Local_197.f_129 = 0f;
			}
			if (iVar6 && ((Local_197[2] != 0 || Local_197[3] != 0) || (Local_197[0] != 0 || Local_197[1] != 0)))
			{
				if (Local_197[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_197[2])));
				}
				else if (Local_197[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_197[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_197[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_197[3])));
				}
				else if (Local_197[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_197[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_197.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_197.f_130);
				if ((fVar4 != 0f || Local_197[2] != 0) || Local_197[0] != 0)
				{
					if (Local_197[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_197[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_197[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_197[0])));
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
					if (Local_197[2] == 0 && Local_197[0] == 0)
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
				if (!BitTest(Local_197.f_5, 12))
				{
					MISC::SET_BIT(&(Local_197.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.f_0), 2, true);
			}
			else if (iVar6 && (((Local_197[2] != 0 || Local_197[3] != 0) || Local_197[0] != 0) || Local_197[1] != 0))
			{
				Var22 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
				if (func_261())
				{
					if (func_260())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_197[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_197[2])));
					}
					else if (Local_197[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_197[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_197[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_197[3])));
					}
					else if (Local_197[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_197[1])));
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
					if (Local_197[2] == 0 && Local_197[0] == 0)
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
				if (BitTest(Local_197.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_197.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.f_0), 2, true);
			}
			else
			{
				Var32 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), 2) };
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
					uVar37 = func_259(-(((fVar36 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar38 = func_259(-(((fVar35 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var39 = { Vector(0f, uVar38, uVar37) + Var32 };
					if (BitTest(Local_197.f_5, 12))
					{
						Var39.f_0 = Var32.f_0;
					}
					uVar42 = Var32.f_2;
					if (func_17())
					{
						if (!func_140())
						{
							uVar42 = Local_197.f_116;
							Var39.f_1 = 0f;
						}
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.f_0), 2, true);
					if (func_17())
					{
						if (MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f)
						{
							func_277(1);
						}
					}
				}
				else if (func_17())
				{
					func_277(1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

void func_277(bool bParam0)//Position - 0x9BC0
{
	if (!bParam0)
	{
		if (BitTest(Local_197.f_6, 6))
		{
			MISC::CLEAR_BIT(&(Local_197.f_6), 6);
		}
	}
	else if (!BitTest(Local_197.f_6, 6))
	{
		MISC::SET_BIT(&(Local_197.f_6), 6);
	}
}

int func_278(int iParam0, int iParam1)//Position - 0x9BF6
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_279()//Position - 0x9C0C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_42())
	{
		return;
	}
	if (func_256())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_197.f_171))
			{
				Local_197.f_171 = func_294(Local_197.f_150, 0);
				HUD::SET_BLIP_SPRITE(Local_197.f_171, func_293());
				if (func_37() && !HUD::DOES_BLIP_EXIST(Local_197.f_172))
				{
					Local_197.f_172 = func_290(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_197.f_172, 6 /*RADAR_CENTRE*/);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_197.f_172, false);
					HUD::SET_BLIP_SCALE(Local_197.f_172, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_197.f_172, (13 - 1));
					if (func_287(PLAYER::PLAYER_ID()) != -1)
					{
						func_283(&(Local_197.f_172), func_285(func_287(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_283(&(Local_197.f_172), func_282());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_197.f_172, true);
				}
			}
			else
			{
				fVar0 = func_281(Local_197.f_124);
				fVar1 = Local_197.f_150;
				fVar2 = Local_197.f_150.f_1;
				HUD::SET_BLIP_DISPLAY(Local_197.f_171, 2);
				HUD::SET_BLIP_COORDS(Local_197.f_171, Local_197.f_150);
				if (((func_31() || func_45()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::IS_PAUSEMAP_IN_INTERIOR_MODE())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_197.f_171, fVar1, fVar2, 0f);
						HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_197.f_171, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_197.f_171, 1f);
				HUD::SET_BLIP_PRIORITY(Local_197.f_171, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_197.f_172))
				{
					HUD::SET_BLIP_ROTATION(Local_197.f_172, func_280(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_280(int iParam0)//Position - 0x9DAF
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_HEADING_FROM_EULERS(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_281(float fParam0)//Position - 0x9DC5
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_282()//Position - 0x9DEE
{
	return 10;
}

void func_283(var uParam0, int iParam1)//Position - 0x9DF8
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_284(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_284(int iParam0)//Position - 0x9E1E
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

int func_285(int iParam0)//Position - 0xA086
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_286(iParam0);
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

var func_286(int iParam0)//Position - 0xA149
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_287(int iParam0)//Position - 0xA160
{
	if (func_9(iParam0))
	{
		if (func_288(iParam0, 1))
		{
			return Global_2648918.f_818.f_11[func_219(iParam0)];
		}
	}
	return -1;
}

bool func_288(int iParam0, bool bParam1)//Position - 0xA190
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_289(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_13();
}

int func_289(int iParam0)//Position - 0xA1C9
{
	if (func_9(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_13())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_290(int iParam0, bool bParam1, bool bParam2)//Position - 0xA1FE
{
	return func_291(iParam0, !bParam1, bParam2);
}

int func_291(int iParam0, bool bParam1, bool bParam2)//Position - 0xA211
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_292(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_292(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_292(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_292(bool bParam0, float fParam1, float fParam2)//Position - 0xA2B5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_293()//Position - 0xA2CC
{
	if (func_17())
	{
		return 548;
	}
	return 627;
}

int func_294(struct<3> Param0, bool bParam3)//Position - 0xA2E4
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_292(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_295()//Position - 0xA310
{
	if (func_42())
	{
		if (Local_197.f_150.f_2 >= (func_119() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
			{
				Local_197.f_37 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_37, "Out_Of_Bounds_Alarm_Loop", Local_197.f_157, true);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
		{
			AUDIO::STOP_SOUND(Local_197.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_37);
			Local_197.f_37 = -1;
		}
	}
}

void func_296()//Position - 0xA37B
{
	if (((func_45() || func_148()) || func_37()) || func_168())
	{
		switch (Local_197.f_242)
		{
			case 0:
				func_319();
				break;
			
			case 1:
				func_306();
				break;
			
			case 2:
				func_304();
				break;
			
			case 3:
				func_297();
				break;
			}
	}
}

void func_297()//Position - 0xA3E5
{
	func_82(1);
	if (!func_303())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_301(0);
	func_299(0);
	func_298(0);
}

void func_298(int iParam0)//Position - 0xA410
{
	if (Local_197.f_242 != iParam0)
	{
		Local_197.f_242 = iParam0;
	}
}

void func_299(bool bParam0)//Position - 0xA427
{
	if (bParam0)
	{
		if (!func_300())
		{
			MISC::SET_BIT(&Global_1956030, 17);
		}
	}
	else if (func_300())
	{
		MISC::CLEAR_BIT(&Global_1956030, 17);
	}
}

bool func_300()//Position - 0xA45A
{
	return BitTest(Global_1956030, 17);
}

void func_301(bool bParam0)//Position - 0xA469
{
	if (bParam0)
	{
		if (!func_302())
		{
			MISC::SET_BIT(&Global_1956030, 18);
		}
	}
	else if (func_302())
	{
		MISC::CLEAR_BIT(&Global_1956030, 18);
	}
}

bool func_302()//Position - 0xA49C
{
	return BitTest(Global_1956030, 18);
}

bool func_303()//Position - 0xA4AB
{
	return Global_1942781.f_544;
}

void func_304()//Position - 0xA4BA
{
	if (func_302() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_82(1);
		func_305(0);
		MISC::CLEAR_BIT(&(Local_197.f_5), 16);
		func_298(3);
	}
}

void func_305(bool bParam0)//Position - 0xA4EC
{
	if (bParam0)
	{
		if (!func_87())
		{
			MISC::SET_BIT(&Global_1956030, 19);
		}
	}
	else if (func_87())
	{
		MISC::CLEAR_BIT(&Global_1956030, 19);
	}
}

void func_306()//Position - 0xA51F
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_29(&(Local_197.f_267), 3000, 0))
		{
			if (func_318())
			{
				if (BitTest(Global_4542983, 2) || func_29(&(Local_197.f_271), 8000, 0))
				{
					if (!BitTest(Global_4542983, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_307(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_28(&(Local_197.f_267));
					func_28(&(Local_197.f_271));
					func_298(2);
				}
			}
			else if (func_29(&(Local_197.f_271), 15000, 0))
			{
				func_28(&(Local_197.f_267));
				func_28(&(Local_197.f_271));
				func_82(1);
				func_305(0);
				MISC::CLEAR_BIT(&(Local_197.f_5), 16);
				func_298(3);
			}
		}
	}
}

void func_307(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA5D8
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
	if (func_317())
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
		if (!func_315())
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
				else if (bVar14 || ((!func_126(PLAYER::PLAYER_ID(), 0) && !func_275()) && !func_274(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657921[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_312(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_311(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_310();
					func_309();
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
				Global_2657921[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697318)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697318 = 0;
				}
				if (Global_2635562.f_2981)
				{
					Global_2635562.f_2981 = 0;
				}
			}
			else
			{
				if (!func_311(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_308(Global_4718592.f_183007))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575052)
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

bool func_308(int iParam0)//Position - 0xAA8A
{
	return iParam0 == 17;
}

void func_309()//Position - 0xAA97
{
	struct<3> Var0;
	
	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { Var0 };
}

void func_310()//Position - 0xAAE4
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
}

int func_311(int iParam0)//Position - 0xAB22
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

void func_312(bool bParam0, int iParam1, int iParam2)//Position - 0xAB53
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
				func_314();
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
		if (func_126(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_313(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_313(int iParam0, bool bParam1)//Position - 0xAC23
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_314()//Position - 0xAC3F
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

int func_315()//Position - 0xAC97
{
	if (func_316() == 0)
	{
		return 1;
	}
	return 0;
}

int func_316()//Position - 0xACAC
{
	return Global_1574632.f_18;
}

int func_317()//Position - 0xACBA
{
	if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_873, 2) && !Global_2685249.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_318()//Position - 0xACEB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_319()//Position - 0xAD08
{
	if (func_338())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (!func_318())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_305(1);
					func_137(-1);
					func_307(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_336(1, -1);
					func_320(3, 1, 1, 0);
					func_30(&(Local_197.f_267), 0, 0);
					func_30(&(Local_197.f_271), 0, 0);
					func_298(1);
				}
			}
		}
	}
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xAD85
{
	if (Global_79248)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4542983, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4542983, 14);
				MISC::SET_BIT(&Global_4542983, 29);
			}
		}
		if (Global_8690[iParam0 /*15*/].f_9 == 0)
		{
			func_332();
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4542983, 14);
			MISC::CLEAR_BIT(&Global_4542983, 16);
			MISC::CLEAR_BIT(&Global_4542983, 15);
			MISC::CLEAR_BIT(&Global_4542983, 27);
			MISC::CLEAR_BIT(&Global_4542983, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_325();
	if (Global_20813.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_86(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20779 == 1)
	{
		return 0;
	}
	if (Global_20813.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_20810))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20813.f_1 < 4)
			{
				func_324("cellphone_flashhand");
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_20810 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_20795)
	{
		SYSTEM::WAIT(0);
	}
	func_332();
	func_321();
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
	{
		Global_9289 = 0;
		Global_20813.f_1 = 7;
		func_324(&(Global_8690[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
			{
				Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8690[iParam0 /*15*/].f_9) == 0)
		{
			Global_20811 = SYSTEM::START_NEW_SCRIPT(&(Global_8690[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8690[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_321()//Position - 0xAFC6
{
	if (Global_79248 == 0)
	{
		Global_8690[14 /*15*/].f_4 = -99;
		Global_8690[4 /*15*/].f_4 = -99;
		if (Global_2695946)
		{
			if (func_323(14))
			{
				func_322(2, "CELL_2" /* GXT: Internet */, 2, "appInternet", 6, 1, 1, 0, 0);
				func_322(14, "CELL_29" /* GXT: Job List */, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_322(14, "CELL_29" /* GXT: Job List */, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_322(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_322(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xB054
{
	StringCopy(&(Global_8690[iParam0 /*15*/]), sParam1, 16);
	Global_8690[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8690[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8690[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8690[iParam0 /*15*/].f_10 = iParam4;
	Global_8690[iParam0 /*15*/].f_11 = iParam5;
	Global_8690[iParam0 /*15*/].f_12 = iParam6;
	Global_8690[iParam0 /*15*/].f_13 = iParam7;
	Global_8690[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8690[iParam0 /*15*/].f_12 == 0)
	{
		Global_8690[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8690[iParam0 /*15*/].f_13 == 0)
	{
		Global_8690[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8690[iParam0 /*15*/].f_14 == 0)
	{
		Global_8690[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_323(int iParam0)//Position - 0xB10A
{
	return Global_43922 == iParam0;
}

void func_324(char* sParam0)//Position - 0xB118
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_325()//Position - 0xB138
{
	if (func_323(14))
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
		Global_20813 = func_326();
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

var func_326()//Position - 0xB1DA
{
	func_327();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_327()//Position - 0xB1F3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_330(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_329(PLAYER::PLAYER_PED_ID());
			if (func_328(iVar0) && (!func_323(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_328(Global_114370.f_2366.f_539.f_4321))
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

bool func_328(int iParam0)//Position - 0xB2F0
{
	return iParam0 < 3;
}

int func_329(int iParam0)//Position - 0xB2FC
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_330(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_330(int iParam0)//Position - 0xB339
{
	if (func_328(iParam0))
	{
		return func_331(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_331(int iParam0)//Position - 0xB35E
{
	return Global_2139[iParam0 /*29*/];
}

void func_332()//Position - 0xB36D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8690[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79248 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_335(iVar2, Global_20813) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_322(7, "CELL_5" /* GXT: Email */, 0, "appEmail", 4, 1, 1, 0, 0);
		func_322(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_322(4, "CELL_23" /* GXT: Check List */, 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_43922 == 15 && func_334(0) == 0) && Global_8688 == 0)
		{
			func_322(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 0;
			Global_8689 = 255;
		}
		else
		{
			func_322(20, "CELL_32" /* GXT: Quick Save */, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21028 = 1;
			Global_8689 = 42;
		}
		if (iVar1 == 1)
		{
			func_322(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_322(0, "CELL_0" /* GXT: Contacts */, 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_322(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_322(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_322(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_114370.f_14054.f_89 == 1)
		{
			func_322(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_114370.f_14054.f_88 == 1)
		{
			func_322(16, "CELL_25" /* GXT: Sniper */, 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_322(25, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_322(11, "CELL_14" /* GXT: More Apps */, -99, "appContacts", 8, 2, 1, 0, 0);
		func_322(27, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(28, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(29, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
		func_322(30, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(31, "CELL_15" /* GXT: Spare */, -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(32, "CELL_15" /* GXT: Spare */, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_322(7, "CELL_5" /* GXT: Email */, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_322(10, "CELL_16" /* GXT: Settings */, 5, "appSettings", 24, 1, 1, 0, 0);
		func_322(1, "CELL_1" /* GXT: Texts */, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_322(3, "CELL_7" /* GXT: Snapmatic */, 6, "appCamera", 1, 1, 1, 0, 0);
		func_322(2, "CELL_2" /* GXT: Internet */, 7, "appInternet", 6, 1, 1, 0, 0);
		func_322(14, "CELL_29" /* GXT: Job List */, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_322(0, "CELL_0" /* GXT: Contacts */, 2, "appContacts", 5, 1, 1, 0, 0);
		func_322(21, "CELL_37" /* GXT: Quick Join */, 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4542983, 4) == 1)
		{
			func_322(17, "CELL_28" /* GXT: Trackify */, 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_322(13, "CELL_35" /* GXT: Player List */, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_322(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_322(15, "CELL_18" /* GXT: Map */, -99, "appContacts", 8, 1, 1, 0, 0);
		func_322(9, "CELL_13" /* GXT: BAWSAQ */, -99, "appContacts", 13, 2, 1, 0, 0);
		func_322(5, "CELL_4" /* GXT: Sidetasks */, -99, "appContacts", 12, 2, 1, 0, 0);
		func_322(23, "CELL_15" /* GXT: Spare */, 0, "appContacts", 17, 2, 1, 0, 0);
		func_322(24, "CELL_15" /* GXT: Spare */, 1, "appContacts", 17, 2, 1, 0, 0);
		func_322(25, "CELL_15" /* GXT: Spare */, 2, "appContacts", 17, 2, 1, 0, 0);
		func_322(26, "CELL_15" /* GXT: Spare */, 3, "appContacts", 17, 2, 1, 0, 0);
		func_322(27, "CELL_15" /* GXT: Spare */, 4, "appContacts", 17, 2, 1, 0, 0);
		func_322(28, "CELL_15" /* GXT: Spare */, 5, "appContacts", 17, 2, 1, 0, 0);
		func_322(29, "CELL_15" /* GXT: Spare */, 6, "appContacts", 17, 2, 1, 0, 0);
		func_322(30, "CELL_15" /* GXT: Spare */, 7, "appContacts", 17, 2, 1, 0, 0);
		func_322(31, "CELL_15" /* GXT: Spare */, 8, "appContacts", 17, 2, 1, 0, 0);
		func_322(32, "CELL_15" /* GXT: Spare */, 9, "appContacts", 17, 2, 1, 0, 0);
		func_322(33, "CELL_15" /* GXT: Spare */, 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4542983, 4) == 1)
		{
			if (Global_1836171)
			{
				func_322(23, "CELL_CIRCBREAK" /* GXT: VLSI Unlock */, 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 20) == 1)
			{
				func_322(23, "CELL_SIGHTS" /* GXT: Sightseer */, 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 22) == 1)
			{
				func_322(23, "CELL_EXTRACT" /* GXT: Extraction */, 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4542983, 26) == 1)
			{
				if (func_333())
				{
					func_322(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_322(23, "CELL_SECHACK" /* GXT: SecuroServ Hack */, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4542983, 4) == 0 && Global_1836171 == 0) && BitTest(Global_4542983, 20) == 0) && BitTest(Global_4542983, 22) == 0) && BitTest(Global_4542983, 26) == 0)
		{
			if (func_333())
			{
				func_322(23, "CELL_0" /* GXT: Contacts */, -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_322(23, "CELL_BOSSAGE" /* GXT: SecuroServ */, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_333()//Position - 0xB91D
{
	if (Global_79248)
	{
		if (Global_1836571 || Global_1836572 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_334(bool bParam0)//Position - 0xB944
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79497, 0);
}

int func_335(int iParam0, int iParam1)//Position - 0xB96C
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2139[iParam0 /*29*/].f_19[iParam1];
}

void func_336(bool bParam0, int iParam1)//Position - 0xB996
{
	int iVar0;
	
	if (!func_134(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23711.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23711.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23711.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23711.f_6231[iVar0] = 0;
	}
	if (Global_23711.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23711.f_6217[iVar0] = 0;
	}
	if (Global_23711.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23711.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_337(&(Global_23711.f_6263[iVar0 /*10*/]));
		Global_23711.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23711.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_337(int* iParam0)//Position - 0xBA5C
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

int func_338()//Position - 0xBA88
{
	if (func_87())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_178(0) || func_177()) || RECORDING::IS_REPLAY_RECORDING())
	{
		func_28(&(Local_197.f_275));
		func_30(&(Local_197.f_275), 0, 0);
		MISC::CLEAR_BIT(&(Local_197.f_5), 16);
		func_109();
		return 0;
	}
	else if (func_32(&(Local_197.f_275)))
	{
		if (!func_29(&(Local_197.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_197.f_5), 16);
			func_28(&(Local_197.f_275));
		}
	}
	if (func_173(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_339()//Position - 0xBB32
{
	if (func_340())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
			{
				if (!BitTest(Local_197.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_197.f_159), true);
					MISC::SET_BIT(&(Local_197.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
			}
		}
	}
	else if (BitTest(Local_197.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_197.f_159), false);
				MISC::CLEAR_BIT(&(Local_197.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
			}
		}
	}
}

int func_340()//Position - 0xBBF1
{
	if (func_173(PLAYER::PLAYER_ID()))
	{
		if (BitTest(Global_2737317, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()//Position - 0xBC12
{
	int iVar0;
	
	if (func_93())
	{
		Global_1956030.f_1 = 0;
	}
	if (func_348() || func_202())
	{
		if (!func_32(&(Local_197.f_247)))
		{
			func_30(&(Local_197.f_247), 0, 0);
		}
		else if (func_29(&(Local_197.f_247), Global_1956030.f_1, 0) || func_202())
		{
			func_28(&(Local_197.f_245));
			if (func_93())
			{
				if (func_24(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_347(), func_346(), func_345(), true, false, 1f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(func_347(), func_346(), func_345(), true, false, 1f, false);
				}
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_197.f_131)));
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_197.f_159, true);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_197.f_159);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_197.f_6), 2);
			}
			if (func_38())
			{
				func_344(1);
				if (Local_197.f_26 == 0)
				{
					func_342(6, 0, 0);
				}
				else
				{
					func_342(5, 0, 0);
				}
			}
			func_394(1);
			func_393(5);
		}
	}
	else if (func_32(&(Local_197.f_247)))
	{
		func_214(&(Local_197.f_247), 0, 0);
	}
}

void func_342(int iParam0, bool bParam1, bool bParam2)//Position - 0xBD41
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_343(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_197.f_79 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_197.f_153, 0f, 0f, Local_197.f_118, 2, bParam2, bParam1, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_197.f_79, Local_197.f_158, &cVar0, fVar17, fVar18, iVar16, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_197.f_159), Local_197.f_79, Local_197.f_158, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_343(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_160))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_197.f_160), &cVar0, Local_197.f_158, fVar17, bParam1, bParam2, false, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_197.f_160));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_197.f_79);
}

char* func_343(int iParam0)//Position - 0xBE32
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

void func_344(bool bParam0)//Position - 0xBEA0
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

float func_345()//Position - 0xBEE3
{
	if (func_17())
	{
		return 1f;
	}
	return 0.5f;
}

int func_346()//Position - 0xBEFB
{
	if (func_17())
	{
		return 81;
	}
	return 72;
}

Vector3 func_347()//Position - 0xBF11
{
	if (func_17())
	{
		return CAM::GET_CAM_COORD(Local_197.f_169);
	}
	return Local_197.f_150;
}

int func_348()//Position - 0xBF31
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false)) && !BitTest(Local_197.f_5, 2))
	{
		return 1;
	}
	if (Local_197.f_12 == 2)
	{
		Local_197.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_197.f_5, 1))
	{
		return 1;
	}
	if (func_356())
	{
		Local_197.f_26 = 5;
		return 1;
	}
	if (func_148() && func_350())
	{
		Local_197.f_26 = 5;
		return 1;
	}
	if (func_38() || func_17())
	{
		if (func_350())
		{
			Local_197.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_197.f_5, 2))
	{
		Local_197.f_26 = 4;
		return 1;
	}
	if (func_186())
	{
		if (!func_32(&(Local_197.f_255)))
		{
			func_30(&(Local_197.f_255), 0, 0);
		}
		else if (func_29(&(Local_197.f_255), 3000, 0))
		{
			Local_197.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_197.f_5, 7))
	{
		Local_197.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_197.f_159)) || func_211(NETWORK::NET_TO_ENT(Local_197.f_159), 0))
		{
			if (BitTest(Local_197.f_5, 29))
			{
				Local_197.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_148() && !func_349())
	{
		if (Local_197.f_150.f_2 >= func_119())
		{
			Local_197.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_349()//Position - 0xC095
{
	return BitTest(Global_1956030.f_2, 0);
}

int func_350()//Position - 0xC0A5
{
	struct<3> Var0;
	int iVar3;
	
	if (func_355())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
		{
			if (func_148())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_354()) && !ENTITY::IS_ENTITY_DEAD(func_354(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_354(), true) };
				}
			}
			else if (func_37())
			{
				if (!func_38())
				{
					iVar3 = func_351(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10);
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
			if (func_24(NETWORK::NET_TO_OBJ(Local_197.f_159)))
			{
				Local_197.f_120 = func_165(NETWORK::NET_TO_OBJ(Local_197.f_159), Var0, 1);
				if (Local_197.f_120 > func_119())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_351(int iParam0)//Position - 0xC25F
{
	int iVar0;
	
	if (iParam0 != func_13())
	{
		iVar0 = func_353(iParam0);
		if (iVar0 != 0)
		{
			return func_352(iVar0);
		}
	}
	return -1;
}

int func_352(int iParam0)//Position - 0xC288
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

int func_353(int iParam0)//Position - 0xC2DA
{
	if (iParam0 != func_13())
	{
		return Global_1845263[iParam0 /*877*/].f_267.f_431;
	}
	return 0;
}

int func_354()//Position - 0xC2FE
{
	if (Global_1845102 != func_13())
	{
		if (!func_53(Global_1845102))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1663005))
			{
				return Global_1663005;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1961146[Global_1845102]))
			{
				return Global_1961146[Global_1845102];
			}
		}
	}
	return -1;
}

bool func_355()//Position - 0xC34E
{
	return BitTest(Global_1956030, 6);
}

int func_356()//Position - 0xC35C
{
	float fVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false))
	{
		iVar1 = Global_262145.f_24883 /* Tunable: BB_TERRORBYTE_DRONE_HEIGHT_LIMIT */;
		if (func_17())
		{
			iVar1 *= 10;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_197.f_150, &fVar0, true, false))
		{
			Local_197.f_121 = (Local_197.f_150.f_2 - fVar0);
			if (Local_197.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_357()//Position - 0xC3C6
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (!func_93())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false)) && CAM::DOES_CAM_EXIST(Local_197.f_169))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if (BitTest(Local_197.f_5, 1) || func_202())
			{
				return;
			}
			Var0 = { func_358(func_359()) };
			bVar5 = false;
			bVar6 = true;
			iVar7 = 0;
			if (func_17())
			{
				bVar5 = true;
				bVar6 = false;
				iVar7 = 0;
			}
			if (func_42())
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
			if (iVar3 && !func_269(bVar5))
			{
				Local_197.f_119 = 140f;
			}
			else if (iVar4 && !func_269(bVar5))
			{
				Local_197.f_119 = 60f;
			}
			else if (!func_17())
			{
				Local_197.f_119 = 100f;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), iVar7, Var0 * Vector(-Local_197.f_119, -Local_197.f_119, -Local_197.f_119), false, true, bVar6, false);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

Vector3 func_358(struct<3> Param0)//Position - 0xC50E
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

Vector3 func_359()//Position - 0xC54D
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_360(&Var0);
	return Var0;
}

void func_360(var uParam0)//Position - 0xC566
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

void func_361()//Position - 0xC62F
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
	
	if (func_93())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_197.f_159), false)) && CAM::DOES_CAM_EXIST(Local_197.f_169))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			fVar0 = 0f;
			if (!func_45() && !func_31())
			{
				if (!func_261())
				{
					if (func_32(&(Local_197.f_253)))
					{
						iVar1 = Global_262145.f_24881 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_RECHARGE_TIME */;
						if (func_31())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_29(&(Local_197.f_253), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_253)));
							Local_197.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_24(Local_197.f_161))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_197.f_161, NETWORK::NET_TO_OBJ(Local_197.f_159), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							Local_197.f_20 = 100;
							func_28(&(Local_197.f_253));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_43))
							{
								AUDIO::STOP_SOUND(Local_197.f_43);
								AUDIO::RELEASE_SOUND_ID(Local_197.f_43);
								Local_197.f_43 = -1;
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
					if ((((bVar3 && Local_197.f_20 == 100) && !func_269(0)) && !func_87()) && func_169())
					{
						fVar0 = 120f;
						if (func_31())
						{
							fVar0 = 110f;
						}
						else if (func_37())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_197[1]) != 0f)
						{
							func_369(1);
						}
						else
						{
							func_369(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_30(&(Local_197.f_251), 0, 0);
						func_368(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_42))
						{
							Local_197.f_42 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_42, "HUD_Boost_Loop", Local_197.f_157, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_31())
					{
						fVar0 = 115f;
					}
					else if (func_37())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_197.f_169))
					{
						if (!CAM::IS_CAM_SHAKING(Local_197.f_169))
						{
							CAM::SHAKE_CAM(Local_197.f_169, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_197.f_169, 0.15f);
						}
					}
					if (func_32(&(Local_197.f_251)))
					{
						if (func_29(&(Local_197.f_251), Global_262145.f_24880 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */, 0))
						{
							Local_197.f_20 = 0;
							func_369(0);
							func_368(0);
							func_28(&(Local_197.f_253));
							func_30(&(Local_197.f_253), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_197.f_169, true);
							PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_28(&(Local_197.f_251));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_42))
							{
								AUDIO::STOP_SOUND(Local_197.f_42);
								AUDIO::RELEASE_SOUND_ID(Local_197.f_42);
								Local_197.f_42 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_43))
							{
								Local_197.f_43 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_43, "HUD_Boost_Recharge_Loop", Local_197.f_157, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24880 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_251))));
							Local_197.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, Global_262145.f_24880 /* Tunable: BB_TERRORBYTE_DRONE_BOOST_TIME */, SYSTEM::ROUND((255f * Local_197.f_131)));
						}
					}
				}
			}
			Var5 = { Local_197.f_150 };
			if (BitTest(Local_197.f_5, 1) || func_202())
			{
				return;
			}
			Var8 = { func_358(func_359()) };
			Var11 = { func_358(func_367(func_359())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_366())
			{
				if (Local_197.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_197[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) != 0f || Local_197[1] != 0)
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
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, fVar15, false, true, true, false);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (Local_197[2] >= 127)
				{
					Local_197[2] = 127;
				}
				else if (Local_197[2] <= -127)
				{
					Local_197[2] = -127;
				}
				if (Local_197[0] >= 127)
				{
					Local_197[0] = 127;
				}
				else if (Local_197[0] <= -127)
				{
					Local_197[0] = -127;
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
			if (((iVar16 && func_365()) && !func_87()) || (func_261() && !func_260()))
			{
				fVar20 = Local_197.f_119;
				if (func_168())
				{
					fVar20 = 5f;
				}
				if (func_45() || func_31())
				{
					fVar19 = 10f;
				}
				if (func_261() && !func_260())
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
				fVar18 = func_364(fVar18, -149f, 149f);
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var21, false, true, true, false);
			}
			else if (((iVar17 && !func_87()) && func_365()) && !func_269(0))
			{
				if (func_45() || func_31())
				{
					fVar25 = 10f;
				}
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					fVar24 = ((Local_197.f_119 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/)));
				}
				else
				{
					fVar24 = ((Local_197.f_119 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/)));
				}
				fVar24 = func_364(fVar24, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if (((Local_197[1] > 0 && !func_261()) && !func_269(0)) && !func_87())
			{
				fVar28 = func_363();
				fVar26 = (Local_197.f_119 / (127f / IntToFloat(Local_197[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_197[1])));
				fVar26 = func_364(fVar26, -149f, 149f);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if ((((Local_197[1] < 0 && !func_261()) && !func_269(0)) && !func_87()) || (func_261() && func_260()))
			{
				if (func_261() && func_260())
				{
					fVar31 = 50f;
					if (func_31())
					{
						fVar29 = (Local_197.f_119 / -1f);
					}
					else
					{
						fVar29 = ((Local_197.f_119 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_363();
					if (func_31())
					{
						fVar29 = (Local_197.f_119 / (127f / IntToFloat(Local_197[1])));
					}
					else
					{
						fVar29 = ((Local_197.f_119 + fVar0) / (127f / IntToFloat(Local_197[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_197[1])));
				}
				fVar29 = func_364(fVar29, -149f, 149f);
				if (func_31())
				{
					if (!func_260())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, -fVar30, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, 41f, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, -fVar30, false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
				}
			}
			Var32 = { func_362(Var8, Var11) };
			if ((!func_261() && !func_269(0)) && !func_87())
			{
				if (Local_197[0] > 0)
				{
					fVar35 = -(Local_197.f_119 / (127f / IntToFloat(Local_197[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_197[0])));
					fVar35 = func_364(fVar35, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_197[0] < 0)
				{
					fVar37 = -(Local_197.f_119 / (127f / IntToFloat(Local_197[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_197[0])));
					fVar37 = func_364(fVar37, -149f, 149f);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, Var32 * Vector(fVar37, fVar37, fVar37), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_197.f_159), 0, 0f, 0f, -fVar38, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

Vector3 func_362(struct<3> Param0, struct<3> Param3)//Position - 0xCFAD
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

float func_363()//Position - 0xCFE6
{
	if (func_31() || func_45())
	{
		return 40f;
	}
	else if (func_37())
	{
		return 30f;
	}
	else if (func_168())
	{
		return 2.5f;
	}
	return 6.4f;
}

float func_364(float fParam0, float fParam1, float fParam2)//Position - 0xD030
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

int func_365()//Position - 0xD057
{
	if (func_269(0))
	{
		return 0;
	}
	if (func_261() && !func_260())
	{
		return 0;
	}
	return 1;
}

bool func_366()//Position - 0xD081
{
	return BitTest(Global_1956030, 2);
}

Vector3 func_367(struct<2> Param0, var uParam2)//Position - 0xD08F
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0.f_0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0.f_0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

void func_368(bool bParam0)//Position - 0xD0C6
{
	if (bParam0)
	{
		if (!BitTest(Local_197.f_5, 21))
		{
			MISC::SET_BIT(&(Local_197.f_5), 21);
		}
	}
	else if (BitTest(Local_197.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_197.f_5), 21);
	}
}

void func_369(bool bParam0)//Position - 0xD0FF
{
	if (bParam0)
	{
		if (!BitTest(Local_197.f_5, 22))
		{
			MISC::SET_BIT(&(Local_197.f_5), 22);
		}
	}
	else if (BitTest(Local_197.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_197.f_5), 22);
	}
}

void func_370()//Position - 0xD138
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_197.f_159), false))
		{
			if ((func_31() || func_45()) || func_42())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_197.f_150;
				fVar1 = Local_197.f_150.f_1;
			}
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1956030.f_24) && !func_42())
			{
				if (!BitTest(Local_197.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_371()//Position - 0xD1D2
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_41) && Local_197.f_41 == -1)
		{
			Local_197.f_41 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_41, "HUD_Loop", Local_197.f_157, true);
		}
	}
}

void func_372()//Position - 0xD214
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_31))
		{
			Local_197.f_31 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_31, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_157, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_31, "DroneRotationalSpeed", Local_197.f_129);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_31, "DroneRotationalSpeed", Local_197.f_129);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_40))
		{
			AUDIO::RELEASE_SOUND_ID(Local_197.f_40);
			Local_197.f_40 = -1;
		}
	}
}

void func_373()//Position - 0xD28F
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
	}
}

void func_374()//Position - 0xD2B0
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_197.f_45);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159) && func_26(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false))
			{
				if (func_375(NETWORK::NET_TO_OBJ(Local_197.f_159), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_25524 /* Tunable: AW_DRONE_EMP_RANGE */, 1))
				{
					if (!func_218(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_197.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_197.f_5), 11);
	}
}

bool func_375(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xD353
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_376()//Position - 0xD375
{
	int iVar0;
	
	if (((func_42() || func_31()) || func_45()) || func_17())
	{
		iVar0 = 1000;
		if (func_31() || func_45())
		{
			iVar0 = 7000;
		}
		else if (func_17())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_197.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_RENDERING(Local_197.f_169))
			{
				if (func_24(func_25()))
				{
					if (func_29(&(Local_197.f_269), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), true, false);
						ENTITY::SET_ENTITY_COLLISION(func_25(), true, false);
						MISC::SET_BIT(&(Local_197.f_5), 29);
					}
				}
			}
		}
	}
}

void func_377()//Position - 0xD427
{
	if (!func_17() || PLAYER::PLAYER_ID() == func_13())
	{
		return;
	}
	if (func_29(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/]), 2500, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_207[PLAYER::PLAYER_ID()]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_197.f_207[PLAYER::PLAYER_ID()], false);
		}
		func_28(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/]));
	}
}

void func_378()//Position - 0xD48E
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
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_207[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				sVar1 = func_385(PLAYER::PLAYER_ID());
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
				Local_197.f_207[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", func_16(), func_384(PLAYER::PLAYER_ID()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				func_30(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			if (func_32(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/])))
			{
				if (func_29(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/]), 1000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_197.f_207[PLAYER::PLAYER_ID()], "flame", 0.15f, false);
					func_380();
					func_276();
					func_357();
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159), true, false);
					}
					func_379();
					if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_40))
					{
						Local_197.f_40 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_40, "HUD_Startup", Local_197.f_157, true);
					}
					func_279();
					func_112();
					func_246(1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_197.f_173 = NETWORK::GET_NETWORK_TIME();
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159), false);
					func_393(4);
				}
			}
		}
		else
		{
			func_394(1);
			func_393(7);
		}
	}
}

void func_379()//Position - 0xD609
{
	if (func_148() || func_38())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_31())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_45())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_42())
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

void func_380()//Position - 0xD6B3
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	
	sVar1 = func_385(PLAYER::PLAYER_ID());
	if (Global_1582006 == 1)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_197.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	else if (Global_1582006 == 2)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), sVar1);
		Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
		Local_197.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
	}
	Var5 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_144, true, false, false, true);
	func_382(Local_197.f_144, (Var5.f_0 + 90f), 180f, 0f);
	Var8 = { ENTITY::GET_ENTITY_COORDS(func_16(), true) };
	Var11 = { 0f, 0f, 0f };
	Local_197.f_116 = func_381(Var11, Var8);
	ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_116);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_197.f_159), (Var5.f_0 - 90f), 0f, Local_197.f_116, 2, true);
	if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_115))
	{
		Local_197.f_115 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_115, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_197.f_159), Local_197.f_157, true, 0);
	}
}

float func_381(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0xD7FD
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_382(struct<3> Param0, struct<3> Param3)//Position - 0xD817
{
	if (!func_383(Global_1956030.f_13, Param0, 0))
	{
		Global_1956030.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1956030.f_16 = { Param3 };
	}
}

bool func_383(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xD860
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_384(int iParam0)//Position - 0xD8A7
{
	if (Local_197.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_385(int iParam0)//Position - 0xD8CC
{
	if (iParam0 == func_13())
	{
		return "";
	}
	switch (Local_197.f_82[iParam0])
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

void func_386()//Position - 0xD95D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_392() || !func_38())
	{
		return;
	}
	switch (Local_197.f_80)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_188(iVar0))
				{
					if (func_102(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_197.f_6, 3))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_197.f_6), 3);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_391(&(Local_197.f_160), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_197.f_160, PLAYER::PLAYER_ID(), true);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_197.f_160), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_197.f_80 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				func_342(0, 0, 0);
				Local_197.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_390(0, "CREATE"))
			{
				func_372();
				if (func_389(Local_197.f_160))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_160)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_160), true, false);
					}
				}
				if (func_389(Local_197.f_159))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159), true, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_197.f_163, false, false);
					}
				}
			}
			if (func_387(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_197.f_163, NETWORK::NET_TO_OBJ(Local_197.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_197.f_163, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_197.f_159));
				OBJECT::PLAY_OBJECT_AUTO_START_ANIM(NETWORK::NET_TO_OBJ(Local_197.f_159));
				func_279();
				func_141();
				func_246(1);
				func_258();
				func_361();
				func_379();
				if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_40))
				{
					Local_197.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_40, "HUD_Startup", Local_197.f_157, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				Local_197.f_173 = NETWORK::GET_NETWORK_TIME();
				func_393(4);
				func_342(1, 1, 0);
				Local_197.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_387(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_342(2, 0, 0);
						Local_197.f_243 = 2;
						break;
					
					case 1:
						func_342(3, 0, 0);
						Local_197.f_243 = 3;
						break;
					
					case 2:
						func_342(4, 0, 0);
						Local_197.f_243 = 4;
						break;
				}
				Local_197.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_387(0))
			{
				func_342(1, 1, 0);
				Local_197.f_80 = 3;
			}
			break;
	}
}

int func_387(bool bParam0)//Position - 0xDC24
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_24(iVar0))
	{
		fVar1 = func_388();
		iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_197.f_79);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_344(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_388()//Position - 0xDC71
{
	return 0.95f;
}

int func_389(int iParam0)//Position - 0xDC7E
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_390(int iParam0, char* sParam1)//Position - 0xDCA0
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_197.f_79);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_197.f_160), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_197.f_159), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0xDD07
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
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

bool func_392()//Position - 0xDDAC
{
	return BitTest(Global_1956030, 13);
}

void func_393(int iParam0)//Position - 0xDDBB
{
	if (Local_197.f_241 != iParam0)
	{
		Local_197.f_241 = iParam0;
	}
}

void func_394(bool bParam0)//Position - 0xDDD2
{
	if (bParam0)
	{
		if (!func_392())
		{
			MISC::SET_BIT(&Global_1956030, 13);
		}
	}
	else if (func_392())
	{
		MISC::CLEAR_BIT(&Global_1956030, 13);
	}
}

void func_395()//Position - 0xDE05
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if (!CAM::DOES_CAM_EXIST(Local_197.f_169) && BitTest(Local_197.f_5, 0))
			{
				if (func_406())
				{
					if (func_349())
					{
						func_307(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_42())
					{
						func_307(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_405())
					{
						HUD::THEFEED_HIDE();
					}
					else
					{
						HUD::THEFEED_SHOW();
					}
					Local_197.f_169 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_FOV(Local_197.f_169, Local_197.f_125);
					CAM::SET_CAM_NEAR_CLIP(Local_197.f_169, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_197.f_169, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_42())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { func_404() };
					CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_197.f_169, NETWORK::NET_TO_OBJ(Local_197.f_159), 0f, 0f, 180f, Var0, true);
					if (func_42())
					{
						CAM::SET_CAM_ROT(Local_197.f_169, func_403() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_197.f_150, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_197.f_150, CAM::GET_CAM_ROT(Local_197.f_169, 2));
					if (!func_17())
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159), false);
					}
					if (!func_349())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_38() && !func_17())
					{
						func_379();
						if (AUDIO::HAS_SOUND_FINISHED(Local_197.f_40))
						{
							Local_197.f_40 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_197.f_40, "HUD_Startup", Local_197.f_157, true);
						}
						func_279();
						if (func_93())
						{
							func_112();
						}
						else
						{
							func_141();
						}
						func_246(1);
						func_258();
						func_361();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						Local_197.f_173 = NETWORK::GET_NETWORK_TIME();
					}
					func_400(1);
					func_399(1);
					func_397(158);
					MISC::SET_BIT(&(Local_99[PLAYER::PLAYER_ID() /*3*/]), 0);
					if (!func_38() && !func_17())
					{
						func_393(4);
					}
					else if (func_17())
					{
						func_393(3);
					}
					else
					{
						Local_197.f_153 = { func_6(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_197.f_153, &(Local_197.f_153.f_2), false, false);
						Local_197.f_118 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_396();
						Local_197.f_153 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_197.f_153, Local_197.f_118, -0.0695723f, 0.177497f, 0f) };
						func_393(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_197.f_169))
				{
				}
				if (!BitTest(Local_197.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
		}
	}
}

void func_396()//Position - 0xE0A2
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

void func_397(int iParam0)//Position - 0xE0EB
{
	int iVar0;
	
	if (Global_262145.f_9222 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_398() /*5569*/].f_681.f_4243[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574743.f_1[iVar0] == -1)
			{
				Global_1574743.f_1[iVar0] = iParam0;
				Global_1574743 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_398()//Position - 0xE14E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_399(bool bParam0)//Position - 0xE15B
{
	if (bParam0)
	{
		if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 26))
		{
			MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 26);
		}
	}
	else if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 26))
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 26);
	}
}

void func_400(bool bParam0)//Position - 0xE1C8
{
	if (bParam0)
	{
		if (!func_85())
		{
			MISC::SET_BIT(&Global_1956030, 5);
		}
	}
	else
	{
		if (func_85())
		{
			MISC::CLEAR_BIT(&Global_1956030, 5);
		}
		func_401(0);
	}
}

void func_401(bool bParam0)//Position - 0xE1FE
{
	if (bParam0)
	{
		if (!func_402())
		{
			MISC::SET_BIT(&Global_1956030, 12);
		}
	}
	else if (func_402())
	{
		MISC::CLEAR_BIT(&Global_1956030, 12);
	}
}

bool func_402()//Position - 0xE231
{
	return BitTest(Global_1956030, 12);
}

Vector3 func_403()//Position - 0xE240
{
	return Global_1956030.f_16;
}

Vector3 func_404()//Position - 0xE250
{
	if (func_31() || func_45())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_42())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_37() || func_168())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_17())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_405()//Position - 0xE2CC
{
	return BitTest(Global_1956030, 10);
}

int func_406()//Position - 0xE2DB
{
	if (func_46() && !func_48())
	{
		return 1;
	}
	if (func_410())
	{
		return 1;
	}
	if (func_409())
	{
		return 1;
	}
	if (func_48() && func_408())
	{
		return 1;
	}
	if (func_407() && func_408())
	{
		return 1;
	}
	if (!func_79(PLAYER::PLAYER_ID(), 0) && !func_303())
	{
		return 1;
	}
	return 0;
}

int func_407()//Position - 0xE352
{
	if (func_52(PLAYER::PLAYER_ID()) && func_49())
	{
		if (Global_1582006 == 2 || Global_1582006 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_408()//Position - 0xE388
{
	if (Global_1581997 != -1 || Global_1582003 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_50())
		{
			return 0;
		}
	}
	return 0;
}

int func_409()//Position - 0xE40A
{
	return 0;
}

int func_410()//Position - 0xE413
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_48() || func_411())
	{
		return 0;
	}
	if (func_409())
	{
		return 0;
	}
	return 1;
}

int func_411()//Position - 0xE44C
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.5931f, -3011.17f, -80.24994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.1448f, -80.49994f, -1420.6843f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_412()//Position - 0xE4B6
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("blazer5");
	if (func_188(Local_197.f_240) && func_188(iVar0))
	{
		if (!BitTest(Local_197.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
			{
				if (!func_349())
				{
					if (func_148())
					{
						if (func_24(func_354()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(func_354(), true) };
						}
					}
					else
					{
						Var1 = { Local_197.f_138 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_307(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!BitTest(Local_197.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_197.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!BitTest(Local_197.f_5, 19))
						{
							if (func_418())
							{
								if (func_415())
								{
									MISC::SET_BIT(&(Local_197.f_5), 19);
								}
							}
							else
							{
								if (!func_266(func_414()))
								{
									Local_197.f_138 = { func_414() };
								}
								MISC::SET_BIT(&(Local_197.f_5), 19);
								if (func_17())
								{
									Local_197.f_138.f_2 = (Local_197.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_197.f_5, 19) || func_349())
				{
					if (!BitTest(Local_197.f_5, 20))
					{
						Local_197.f_163 = VEHICLE::CREATE_VEHICLE(iVar0, Local_197.f_138, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_197.f_163, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_197.f_163, Local_197.f_138, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_197.f_163, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_197.f_163, false, false);
						MISC::SET_BIT(&(Local_197.f_5), 20);
					}
					else if (func_102(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_197.f_5, 30))
						{
							NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_197.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_413();
							if (func_38())
							{
								Local_197.f_153 = { func_6(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_197.f_153, &(Local_197.f_153.f_2), false, false);
								Local_197.f_138 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_197.f_158, "ENTER", Local_197.f_153, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0f, 2) };
							}
							if (func_391(&(Local_197.f_159), Local_197.f_240, Local_197.f_138, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1956030.f_20 = NETWORK::NET_TO_OBJ(Local_197.f_159);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_197.f_159), true);
								if (func_148())
								{
									if (func_24(func_354()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_25(), ENTITY::GET_ENTITY_ROTATION(func_354(), 2), 2, true);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_354()) + 180f);
									}
								}
								Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_429 = { Local_197.f_138 };
								Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_432 = fVar5;
								Local_99[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_197.f_159;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_197.f_159, PLAYER::PLAYER_ID(), true);
								INTERIOR::FORCE_ACTIVATING_TRACKING_ON_ENTITY(NETWORK::NET_TO_ENT(Local_197.f_159), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_197.f_159), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_25(), Local_197.f_138, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_25(), fVar5);
								NETWORK::SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(func_25(), true);
								if (!func_266(func_403()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_25(), func_403(), 2, true);
								}
								if (func_42() || func_17())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_25(), false, false);
								}
								NETWORK::NETWORK_USE_HIGH_PRECISION_BLENDING(Local_197.f_159, true);
								if (func_173(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24882 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */ * 5, 0, 0);
								}
								else if (func_17())
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), 1, 0, 0);
									NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_197.f_159, true);
									ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_197.f_159), 700);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_25(), Global_262145.f_24882 /* Tunable: BB_TERRORBYTE_DRONE_HEALTH */, 0, 0);
								}
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_197.f_159, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_197.f_159), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_197.f_138, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_197.f_159), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_197.f_159), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_197.f_240);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_197.f_159), false);
				if (func_24(Local_197.f_163))
				{
					if (func_24(NETWORK::NET_TO_ENT(Local_197.f_159)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_197.f_163, NETWORK::NET_TO_OBJ(Local_197.f_159), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						MISC::SET_BIT(&(Local_197.f_5), 0);
					}
				}
			}
		}
	}
}

int func_413()//Position - 0xE909
{
	if (func_38())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

Vector3 func_414()//Position - 0xE928
{
	return Global_1956030.f_13;
}

int func_415()//Position - 0xE938
{
	if (Local_197.f_16 == 0)
	{
		if (!BitTest(Local_197.f_5, 14))
		{
			if ((!func_173(PLAYER::PLAYER_ID()) && func_148()) && func_24(func_354()))
			{
				Local_197.f_138 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_354(), true), ENTITY::GET_ENTITY_HEADING(func_354()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_197.f_5), 14);
			}
			else
			{
				if (func_148() && func_24(func_354()))
				{
					Local_197.f_138 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_354(), true), ENTITY::GET_ENTITY_HEADING(func_354()), -0.7f, 1.6f, 4f) };
				}
				Local_197.f_138 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138 - 1.5f), (Local_197.f_138 + 1.5f));
				Local_197.f_138.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138.f_1 - 1.5f), (Local_197.f_138.f_1 + 1.5f));
				Local_197.f_138.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138.f_2 + 0.5f), (Local_197.f_138.f_2 + 1.5f));
				if (!func_417(Local_197.f_138))
				{
					MISC::SET_BIT(&(Local_197.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_197.f_5, 15))
		{
			Local_197.f_138 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138 - 1.5f), (Local_197.f_138 + 1.5f));
			Local_197.f_138.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138.f_1 - 1.5f), (Local_197.f_138.f_1 + 1.5f));
			Local_197.f_138.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_197.f_138.f_2 + 0.5f), (Local_197.f_138.f_2 + 1.5f));
			if (!func_417(Local_197.f_138))
			{
				MISC::CLEAR_BIT(&(Local_197.f_5), 15);
			}
		}
		func_416(Local_197.f_138);
	}
	else if (Local_197.f_16 == 1 && !func_417(Local_197.f_138))
	{
		return 1;
	}
	else
	{
		Local_197.f_16 = 0;
		MISC::SET_BIT(&(Local_197.f_5), 15);
	}
	return 0;
}

void func_416(struct<3> Param0)//Position - 0xEB1C
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_197.f_15)
	{
		case 0:
			if (func_148())
			{
				if (func_24(func_354()))
				{
					iVar0 = func_354();
				}
			}
			if (func_31() || func_45())
			{
				fVar1 = func_224(Local_197.f_240);
			}
			else
			{
				fVar1 = (func_224(Local_197.f_240) * 11f);
			}
			Local_197.f_168 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_197.f_168 != 0)
			{
				Local_197.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_197.f_168, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_197.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_197.f_16 = 2;
					Local_197.f_168 = 0;
					Local_197.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_197.f_15 = 0;
			}
			break;
	}
}

int func_417(struct<3> Param0)//Position - 0xEBF4
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.2699f, -228.70403f, 53.76435f, -1096.765f, -258.69f, 35.778076f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_418()//Position - 0xEC31
{
	if (func_148())
	{
		return 1;
	}
	if (func_37() && !func_38())
	{
		return 1;
	}
	return 0;
}

int func_419()//Position - 0xEC5A
{
	if (func_303())
	{
		return Global_1942781.f_545 == 0;
	}
	return 0;
}

void func_420()//Position - 0xEC76
{
	if (func_26(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_197.f_141 = { func_267(&Local_197) };
		if (!func_266(func_414()))
		{
			Local_197.f_138 = { func_414() };
		}
		else
		{
			Local_197.f_138 = { func_6(PLAYER::PLAYER_ID()) };
			Local_197.f_138 = { Local_197.f_138, Local_197.f_138.f_1, (Local_197.f_138.f_2 + 1.5f) };
		}
		if (func_79(PLAYER::PLAYER_ID(), 0))
		{
			func_470(1);
		}
		if (func_79(PLAYER::PLAYER_ID(), 0))
		{
			func_467();
		}
		else if (((func_465(PLAYER::PLAYER_ID()) == 2 || func_465(PLAYER::PLAYER_ID()) == 1) && !BitTest(Global_1962942, 6)) && !BitTest(Global_1962943, 0))
		{
			if (BitTest(Global_2707539, 0))
			{
				func_464(1);
				func_456(0, 0);
				func_455();
				func_401(1);
				func_393(1);
			}
		}
		else if ((func_47() && func_451()) && !BitTest(Global_1962942, 6))
		{
			func_436();
		}
		else if (BitTest(Global_1962942, 6) && BitTest(Global_1962943, 0))
		{
			func_456(0, 0);
			func_401(1);
			func_393(1);
		}
		else if (func_17())
		{
			func_422();
		}
		else if (func_38() && !func_421())
		{
			HUD::CLEAR_HELP(true);
			func_146("PIM_DRONAMOS" /* GXT: You are not in a safe place to launch the Nano Drone. Find an open space before launching. */, -1);
			func_307(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_393(7);
		}
		else if (func_266(Local_197.f_135))
		{
			Local_197.f_156 = 0;
			func_401(1);
			func_393(1);
		}
	}
}

bool func_421()//Position - 0xEDFE
{
	return BitTest(Global_1956030, 23);
}

void func_422()//Position - 0xEE0D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_407() && !func_435()) && !func_426())
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (Global_1582006 == 1)
			{
				Local_197.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			}
			else
			{
				Local_197.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
			}
			if (Global_1582006 == 1)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_385(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_197.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			else if (Global_1582006 == 2)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_16(), func_385(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::GET_ENTITY_BONE_POSTION(func_16(), iVar0) };
				Local_197.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_16()), 0f, 0f, -2.6f) };
			}
			Var4 = { ENTITY::GET_ENTITY_ROTATION(func_16(), 2) };
			func_382(Local_197.f_144, (Var4.f_0 + 90f), 180f, Var4.f_2);
			func_401(1);
			func_425(Local_197.f_82[PLAYER::PLAYER_ID()]);
			func_393(1);
			func_424();
			func_423();
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!func_24(func_16()))
	{
	}
	if (func_435())
	{
		if (func_203("MP_SUBSEAT_2" /* GXT: Press ~INPUT_CELLPHONE_SELECT~ to launch a guided missile. ~n~Press ~INPUT_CONTEXT~ to stand up. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_423()//Position - 0xEF73
{
	Global_2738587.f_353++;
}

void func_424()//Position - 0xEF8B
{
	Global_2738587.f_353 = 0;
	Global_2738587.f_353.f_1 = 0;
}

void func_425(var uParam0)//Position - 0xEFA5
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1799415011;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = uParam0;
	iVar4 = func_200(0, 1);
	if (iVar4 != 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 4, iVar4, Var0.f_0);
	}
}

int func_426()//Position - 0xEFDF
{
	struct<3> Var0;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.1323f, -79.99994f, -1421.9803f, -3009.1213f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1956030.f_2, 2))
	{
		return 1;
	}
	if (func_434())
	{
		return 1;
	}
	if (func_433())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_303())
	{
		return 1;
	}
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		if (func_53(Global_1845102))
		{
			return 1;
		}
	}
	if (func_148())
	{
		if (func_432())
		{
			if (func_431())
			{
				return 1;
			}
			if (BitTest(Local_197.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_17())
	{
		if ((func_430() && Global_1582006 == 1) || (func_429() && Global_1582006 == 2))
		{
			return 1;
		}
		if (BitTest(Local_197.f_5, 28))
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
				if (func_207(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_207(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_86(0))
	{
		return 1;
	}
	if (func_318())
	{
		return 1;
	}
	if (func_148())
	{
		if (func_46())
		{
			if (func_26(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_165(PLAYER::PLAYER_PED_ID(), -1422.1885f, -3015.9255f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_428())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_427(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_205())
	{
		return 1;
	}
	if (Global_262145.f_24892 /* Tunable: BB_TERRORBYTE_DISABLE_DISABLE_DRONE_STATION */)
	{
		return 1;
	}
	if (BitTest(Local_197.f_5, 27))
	{
		return 1;
	}
	if (func_79(PLAYER::PLAYER_ID(), 0))
	{
		if (func_24(func_354()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_354(), -136.16142f, 4617.176f, 124.513405f, -490.30576f, 4924.749f, 159.06767f, 19.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_354(), 908.465f, 34.857258f, 79.354294f, 926.41394f, 64.377426f, 87.99218f, 19f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_354(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1582001)
	{
		return 1;
	}
	if (Global_2710110)
	{
		return 1;
	}
	if (Global_2710107)
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)//Position - 0xF2D4
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

int func_428()//Position - 0xF32A
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.5879f, -3013.3743f, -79.99994f, -1421.9183f, -3012.8044f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_429()//Position - 0xF368
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845263[Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 /*877*/].f_267.f_482, 2);
	}
	return 0;
}

int func_430()//Position - 0xF3C8
{
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845263[Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 /*877*/].f_267.f_482, 1);
	}
	return 0;
}

int func_431()//Position - 0xF428
{
	if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != func_13() && PLAYER::PLAYER_ID() != func_13())
	{
		return BitTest(Global_1845263[Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 /*877*/].f_267.f_368, 20);
	}
	return 0;
}

int func_432()//Position - 0xF47A
{
	if (func_173(PLAYER::PLAYER_ID()) && Global_1956030.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_433()//Position - 0xF49F
{
	if (Global_2672741.f_951.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_434()//Position - 0xF4B9
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_435()//Position - 0xF4CE
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_71(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_69(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		return 1;
	}
	return 0;
}

void func_436()//Position - 0xF5A6
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_426())
	{
		if ((((((func_450() || func_449()) && !Global_1927715) && func_451()) && !BitTest(Global_2707417, 6)) && Global_1574972) && !(func_450() && Global_262145.f_26902 /* Tunable: AW_TABLET_DISABLE_SPECTATOR_DRONE */))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_26904 /* Tunable: AW_TABLET_SPECTATOR_DRONE_COST */, false, false, true, -1, 0) || BitTest(Global_2707417, 2))
				{
					MISC::SET_BIT(&Global_2707417, 0);
					func_456(0, 0);
					func_401(1);
					func_393(1);
					func_444();
					func_442(73, -1);
					func_438();
					Var0 = { func_437() };
					func_382(Var0, 0f, 0f, 0f);
					if (func_450())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!BitTest(Global_2707417, 4))
				{
					MISC::SET_BIT(&Global_2707417, 4);
				}
			}
		}
	}
}

Vector3 func_437()//Position - 0xF6E8
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4718592.f_176310.f_1 == 3 || Global_4718592.f_176310.f_1 == 3) || Global_4718592.f_176310.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_438()//Position - 0xF77E
{
	int iVar0;
	
	iVar0 = func_439(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_375.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_375.f_3), 13);
	}
}

int func_439(int iParam0, int iParam1)//Position - 0xF7CB
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_440(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_440(int iParam0, var uParam1)//Position - 0xF7EF
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_441(uParam1));
}

int func_441(var uParam0)//Position - 0xF805
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_128();
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

void func_442(int iParam0, int iParam1)//Position - 0xF839
{
	int iVar0;
	
	iVar0 = func_439(iParam0, func_441(iParam1));
	iVar0++;
	func_443(iParam0, iVar0, iParam1);
}

void func_443(int iParam0, int iParam1, var uParam2)//Position - 0xF85F
{
	int iVar0;
	
	iVar0 = func_440(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

void func_444()//Position - 0xF87B
{
	func_445(7985, -1);
}

void func_445(int iParam0, int iParam1)//Position - 0xF88B
{
	int iVar0;
	
	iVar0 = func_448(iParam0, func_441(iParam1));
	iVar0++;
	func_446(iParam0, iVar0, iParam1, 1);
}

void func_446(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0xF8B2
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_447(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_447(int iParam0, var uParam1)//Position - 0xF8E0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_441(uParam1));
}

int func_448(int iParam0, var uParam1)//Position - 0xF8F5
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_447(iParam0, uParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_449()//Position - 0xF924
{
	return Global_2695979;
}

int func_450()//Position - 0xF930
{
	if (Global_2695978 >= 0 && Global_2695978 < 10)
	{
		return 1;
	}
	return 0;
}

int func_451()//Position - 0xF952
{
	int iVar0;
	int iVar1;
	
	if (func_454() && !func_453())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058104.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_3318[iVar0 /*25763*/].f_8514[iVar1], 23) && BitTest(Global_4718592.f_3318[iVar0 /*25763*/].f_8514[iVar1], 24)) && BitTest(Global_4718592.f_3318[iVar0 /*25763*/].f_8514[iVar1], 25)) && BitTest(Global_4718592.f_3318[iVar0 /*25763*/].f_8514[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_449() || func_452(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

var func_452(int iParam0)//Position - 0xFA4A
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_36.f_18, 14);
}

int func_453()//Position - 0xFA62
{
	if (Global_4718592.f_126721 == 1 || Global_4718592.f_126721 == 2)
	{
		return 1;
	}
	return 0;
}

var func_454()//Position - 0xFA90
{
	return BitTest(Global_4718592.f_176243, 12);
}

void func_455()//Position - 0xFAA5
{
	MISC::CLEAR_BIT(&Global_2707539, 0);
}

void func_456(bool bParam0, bool bParam1)//Position - 0xFAB6
{
	int iVar0;
	int iVar1;
	
	Local_197.f_119 = Global_262145.f_24885 /* Tunable: BB_TERRORBYTE_DRONE_FORWARD_SPEED */;
	Local_197.f_130 = 40f;
	if (func_171())
	{
		Local_197.f_119 = 200f;
		Local_197.f_130 = 90f;
	}
	else if (func_45() || func_31())
	{
		Local_197.f_119 = (Local_197.f_119 * 4.5f);
	}
	else if (func_42())
	{
		Local_197.f_119 = 100f;
		Local_197.f_130 = 26f;
	}
	else if (func_37())
	{
		Local_197.f_119 = 100f;
		Local_197.f_130 = 70f;
	}
	else if (func_168())
	{
		Local_197.f_119 = 10f;
		Local_197.f_130 = 35f;
	}
	else if (func_17())
	{
		Local_197.f_119 = 149f;
		Local_197.f_130 = 16f;
	}
	if (func_45())
	{
		Local_197.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_31())
	{
		Local_197.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_42())
	{
		Local_197.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_463(1);
	}
	else if (func_37())
	{
		if (!func_38())
		{
			iVar0 = func_462(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_197.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_197.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_197.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_197.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_197.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_168())
	{
		Local_197.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_17())
	{
		Local_197.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_463(1);
	}
	else
	{
		Local_197.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_197.f_138 = { Local_197.f_144 };
	}
	Global_1956030.f_1 = 1500;
	func_461();
	func_460(1);
	func_459(1);
	if (func_45() || func_93())
	{
		func_458(1);
	}
	else if (func_31())
	{
		func_458(0);
	}
	if (func_38())
	{
		Local_197.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_197.f_158);
	}
	if (func_31())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_38())
	{
		func_457(Global_262145.f_29069 /* Tunable: CH_NANO_DRONE_DISTANCE_LIMIT */);
	}
	else if (func_37() && !func_38())
	{
		func_457(Global_262145.f_29070 /* Tunable: CH_ARCADE_DRONE_DISTANCE_LIMIT */);
	}
	else if (func_17())
	{
		func_457(SYSTEM::TO_FLOAT(Global_262145.f_30465 /* Tunable: IH_SUBMARINE_MISSILES_DISTANCE */));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_197.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_148() && !func_349())
	{
		func_457(200f);
	}
	func_96(Global_1837291);
	if (bParam0)
	{
	}
}

void func_457(float fParam0)//Position - 0xFD6A
{
	if (Global_1956030.f_8 != fParam0)
	{
		Global_1956030.f_8 = fParam0;
	}
}

void func_458(bool bParam0)//Position - 0xFD86
{
	if (bParam0)
	{
		if (!func_201())
		{
			MISC::SET_BIT(&Global_1956030, 8);
		}
	}
	else if (func_201())
	{
		MISC::CLEAR_BIT(&Global_1956030, 8);
	}
}

void func_459(bool bParam0)//Position - 0xFDB9
{
	if (bParam0)
	{
		if (!func_366())
		{
			MISC::SET_BIT(&Global_1956030, 2);
		}
	}
	else if (func_366())
	{
		MISC::CLEAR_BIT(&Global_1956030, 2);
	}
}

void func_460(bool bParam0)//Position - 0xFDEA
{
	if (bParam0)
	{
		if (!func_256())
		{
			MISC::SET_BIT(&Global_1956030, 4);
		}
	}
	else if (func_256())
	{
		MISC::CLEAR_BIT(&Global_1956030, 4);
	}
}

void func_461()//Position - 0xFE1B
{
	if (!Local_197.f_156)
	{
		Local_197.f_18 = 100;
	}
	if (func_168())
	{
		Local_197.f_24 = 100;
	}
	Local_197.f_19 = 0;
	Local_197.f_20 = 100;
	Local_197.f_125 = 90f;
	Local_197.f_128 = 90f;
	if (!func_93())
	{
		Local_197.f_170 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DRONE_CAM");
	}
	else if (func_17())
	{
		Local_197.f_170 = func_121();
	}
	else
	{
		Local_197.f_170 = func_120();
	}
	if (func_45())
	{
		Local_197.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_31())
	{
		Local_197.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_42())
	{
		Local_197.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_17())
	{
		Local_197.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_197.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

int func_462(int iParam0)//Position - 0xFEDC
{
	if (iParam0 != func_13())
	{
		return Global_2657921[iParam0 /*463*/].f_436.f_1;
	}
	return -1;
}

void func_463(bool bParam0)//Position - 0xFEFF
{
	if (bParam0)
	{
		if (!func_212())
		{
			MISC::SET_BIT(&Global_1956030, 15);
		}
	}
	else if (func_212())
	{
		MISC::CLEAR_BIT(&Global_1956030, 15);
	}
}

void func_464(bool bParam0)//Position - 0xFF32
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 4))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 4);
		}
	}
	else if (BitTest(Global_1956030.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 4);
	}
}

int func_465(int iParam0)//Position - 0xFF76
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_466())
	{
		return Global_2707444.f_1;
	}
	return Global_2648918.f_1400[iParam0 /*3*/].f_1;
}

int func_466()//Position - 0xFFA8
{
	if (((Global_2707447 != 0 && Global_2707447 == Global_2707448) && Global_2707436 != 3) && Global_2707436 != 1)
	{
		return 0;
	}
	return 1;
}

void func_467()//Position - 0xFFE2
{
	if (!func_426())
	{
		if (func_48())
		{
			if (func_410())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_469("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
				}
			}
			else if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_48() || func_409())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
				{
					func_401(1);
					func_393(1);
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_197.f_156 = 0;
					func_401(1);
					func_393(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((func_46() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.6843f, -3010.617f, -77.99994f, -1423.1421f, -3012.2954f, -77.74994f, 2f, false, true, 0)) && func_410())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_469("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */);
			}
			if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					Local_197.f_156 = 0;
					func_401(1);
					func_393(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_468() || func_48())
		{
			if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_468()//Position - 0x10189
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_69(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_469(char* sParam0)//Position - 0x1023E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_470(bool bParam0)//Position - 0x10254
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 1))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 1);
		}
	}
	else if (BitTest(Global_1956030.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 1);
	}
}

void func_471()//Position - 0x10298
{
	char* sVar0;
	
	if (Local_197.f_45 == -1)
	{
		return;
	}
	if (!func_473(Local_197.f_45) && !func_472(Local_197.f_45))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[Local_197.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_174[Local_197.f_45]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_473(Local_197.f_45))
				{
					Local_197.f_174[Local_197.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_197.f_174[Local_197.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_174[Local_197.f_45]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_197.f_174[Local_197.f_45], false);
	}
}

int func_472(int iParam0)//Position - 0x10393
{
	if (iParam0 != func_13())
	{
		if (Local_99[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x103B6
{
	if (iParam0 != func_13())
	{
		if (Local_99[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_474()//Position - 0x103D8
{
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (Local_197.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[Local_197.f_45 /*3*/].f_2) && func_24(NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2)))
		{
			if (func_476(Local_197.f_45))
			{
				Local_197.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_475(Local_197.f_45))
			{
				Local_197.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_473(Local_197.f_45))
			{
				Local_197.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_472(Local_197.f_45))
			{
				Local_197.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_197.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_197.f_46[Local_197.f_45] == -1)
			{
				Local_197.f_46[Local_197.f_45] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_197.f_46[Local_197.f_45], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_99[Local_197.f_45 /*3*/].f_2), Local_197.f_157, false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_46[Local_197.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_197.f_46[Local_197.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_197.f_46[Local_197.f_45] != -1)
		{
			AUDIO::STOP_SOUND(Local_197.f_46[Local_197.f_45]);
			AUDIO::RELEASE_SOUND_ID(Local_197.f_46[Local_197.f_45]);
			Local_197.f_46[Local_197.f_45] = -1;
		}
	}
}

int func_475(int iParam0)//Position - 0x10529
{
	if (iParam0 != func_13())
	{
		if (Local_99[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)//Position - 0x1054B
{
	if (iParam0 != func_13())
	{
		if (Local_99[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_477()//Position - 0x1056D
{
	return BitTest(Global_1942781.f_7, 14);
}

void func_478()//Position - 0x1057E
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	if (Local_197.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_197.f_45;
	if (!func_26(iVar0, 1, 1))
	{
		return;
	}
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (BitTest(Local_197.f_117, Local_197.f_45))
	{
		iVar1 = func_479(Global_2657921[Local_197.f_45 /*463*/].f_321.f_10);
		if (!func_24(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_207[iVar0]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
				sVar3 = func_385(iVar0);
				iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, sVar3);
				Local_197.f_207[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_384(iVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!func_32(&(Local_197.f_281[iVar0 /*2*/])))
			{
				func_30(&(Local_197.f_281[iVar0 /*2*/]), 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_197.f_207[iVar0], "flame", 0.15f, false);
			}
			if (func_32(&(Local_197.f_281[iVar0 /*2*/])))
			{
				if (func_29(&(Local_197.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_207[iVar0]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_197.f_207[iVar0], false);
					}
					func_28(&(Local_197.f_281[iVar0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_197.f_117), Local_197.f_45);
				}
				else if (func_29(&(Local_197.f_281[iVar0 /*2*/]), 2000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_197.f_207[iVar0], "flame", 0f, false);
				}
			}
		}
	}
}

int func_479(int iParam0)//Position - 0x10704
{
	if (iParam0 != func_13())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1961212[iParam0]))
		{
			return Global_1961212[iParam0];
		}
	}
	return -1;
}

void func_480()//Position - 0x10730
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
				if (!func_491(6))
				{
					func_482(iVar0);
				}
				break;
			
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1799415011:
						if (Global_1683531.f_833)
						{
							return;
						}
						func_481(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_481(int iParam0)//Position - 0x107AD
{
	struct<4> Var0;
	
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 != func_13())
		{
			Local_197.f_82[Var0.f_1] = Var0.f_3;
			MISC::SET_BIT(&(Local_197.f_117), Var0.f_1);
		}
	}
}

void func_482(int iParam0)//Position - 0x10800
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0) && NETWORK::NET_TO_ENT(Local_197.f_159) == Var0.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_197.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_483()//Position - 0x10876
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_197.f_159), false))
		{
			Local_197.f_150 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_197.f_159), true) };
			Local_197.f_124 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_197.f_159));
			if (!func_32(&(Local_197.f_261)))
			{
				func_30(&(Local_197.f_261), 0, 0);
			}
			else if (func_29(&(Local_197.f_261), 1000, 0))
			{
				if (!func_383(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_429, Local_197.f_150, 0))
				{
					Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_429 = { Local_197.f_150 };
				}
				if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_432 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_197.f_159)))
				{
					Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_432 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_197.f_159));
				}
				func_28(&(Local_197.f_261));
			}
		}
	}
	if (func_24(Local_197.f_163))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_197.f_163))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_197.f_163, false, false);
		}
	}
	if (func_24(Local_197.f_161))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_197.f_161))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_197.f_161, false, false);
		}
	}
}

void func_484()//Position - 0x1099E
{
	if (func_491(4))
	{
		if ((((func_148() || func_31()) || func_45()) || (func_37() && !func_38())) || func_17())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_307(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, false);
		if (func_17())
		{
			func_487();
		}
		if (!func_42())
		{
			func_485();
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

void func_485()//Position - 0x10BB2
{
	func_486();
}

void func_486()//Position - 0x10BBE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 365)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
		iVar0++;
	}
}

void func_487()//Position - 0x10BE2
{
	Global_23572.f_6 = 1;
}

void func_488()//Position - 0x10BF0
{
	if (BitTest(Local_197.f_5, 28))
	{
		if (!func_32(&(Local_197.f_263)))
		{
			func_30(&(Local_197.f_263), 0, 0);
		}
		else if (func_29(&(Local_197.f_263), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_197.f_5), 28);
			func_28(&(Local_197.f_263));
		}
	}
}

void func_489()//Position - 0x10C40
{
	int iVar0;
	
	if (BitTest(Local_197.f_5, 27))
	{
		if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != func_13())
		{
			iVar0 = Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10;
		}
		else if (Global_1845102 != func_13())
		{
			iVar0 = Global_1845102;
		}
		else if (func_288(PLAYER::PLAYER_ID(), 0))
		{
			if (func_175() != func_13())
			{
				iVar0 = func_175();
			}
		}
		if (iVar0 != func_13())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_187(iVar0, 0, 1, 0);
					MISC::CLEAR_BIT(&(Local_197.f_5), 27);
				}
			}
		}
	}
}

void func_490()//Position - 0x10CE4
{
	struct<3> Var0;
	
	if (func_148())
	{
		if (func_491(1))
		{
			if (func_24(func_354()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_354(), true) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_197.f_150, 60f, 30);
			}
		}
	}
	if (func_491(1) || func_491(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
		{
			if (CAM::DOES_CAM_EXIST(Local_197.f_169) && CAM::IS_CAM_RENDERING(Local_197.f_169))
			{
				if (func_491(4))
				{
					if (!func_266(Local_197.f_150))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_197.f_150, 60f, 200f);
						INTERIOR::ACTIVATE_INTERIOR_GROUPS_USING_CAMERA();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_197.f_150, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_197.f_159)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_197.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_491(int iParam0)//Position - 0x10DCC
{
	return Local_197.f_241 == iParam0;
}

int func_492()//Position - 0x10DDB
{
	if (func_497())
	{
		return 1;
	}
	if (!func_315())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_13())
	{
		if (!func_496())
		{
			if (func_274(PLAYER::PLAYER_ID()) && !func_273())
			{
				return 1;
			}
		}
	}
	if (!func_24(PLAYER::PLAYER_PED_ID()) && BitTest(Global_1956030.f_2, 2))
	{
		return 1;
	}
	if (func_209(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_496())
	{
		if (func_495())
		{
			return 1;
		}
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_47())
		{
			return 1;
		}
		if (!func_494() && !func_493())
		{
			if (func_29(&(Local_197.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_197.f_279));
		}
	}
	return 0;
}

int func_493()//Position - 0x10EC2
{
	if (Global_1956030.f_22 != func_13())
	{
		if (Global_2657921[Global_1956030.f_22 /*463*/].f_321.f_10 != func_13())
		{
			if (func_24(Global_1961212[Global_2657921[Global_1956030.f_22 /*463*/].f_321.f_10]))
			{
				if (func_26(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1961212[Global_2657921[Global_1956030.f_22 /*463*/].f_321.f_10], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_494()//Position - 0x10F53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_99[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_495()//Position - 0x10F8D
{
	return BitTest(Global_1956030, 22);
}

bool func_496()//Position - 0x10F9C
{
	return BitTest(Global_1956030.f_2, 9);
}

bool func_497()//Position - 0x10FAD
{
	return BitTest(Global_1956030, 0);
}

int func_498()//Position - 0x10FBB
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_505())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_504())
	{
		return 1;
	}
	if (func_503(159))
	{
		if (!func_502())
		{
			return 1;
		}
	}
	if (func_503(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_499() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_499()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_499()//Position - 0x1103F
{
	switch (func_501())
	{
		case 0:
			return func_500();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_500()//Position - 0x11072
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_501()//Position - 0x11096
{
	return Global_32828;
}

bool func_502()//Position - 0x110A1
{
	return Global_2684312.f_698;
}

int func_503(int iParam0)//Position - 0x110B0
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_504()//Position - 0x110C7
{
	return Global_2695951;
}

bool func_505()//Position - 0x110D3
{
	return Global_2684312.f_693;
}

void func_506()//Position - 0x110E2
{
	SYSTEM::WAIT(0);
}

void func_507(bool bParam0)//Position - 0x110EF
{
	if (!func_496())
	{
		func_514(bParam0);
	}
	else
	{
		func_508();
	}
}

void func_508()//Position - 0x1110C
{
	Global_1956030.f_22 = func_13();
	func_28(&(Local_197.f_279));
	func_513(0);
	func_512(0);
	func_511(0);
	func_510(0);
	func_509();
}

void func_509()//Position - 0x1113F
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_510(bool bParam0)//Position - 0x1114B
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 9))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 9);
		}
	}
	else if (BitTest(Global_1956030.f_2, 9))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 9);
	}
}

void func_511(bool bParam0)//Position - 0x11193
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030, 21))
		{
			MISC::SET_BIT(&Global_1956030, 21);
		}
	}
	else if (BitTest(Global_1956030, 21))
	{
		MISC::CLEAR_BIT(&Global_1956030, 21);
	}
}

void func_512(bool bParam0)//Position - 0x111CC
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030, 22))
		{
			MISC::SET_BIT(&Global_1956030, 22);
		}
	}
	else if (BitTest(Global_1956030, 22))
	{
		MISC::CLEAR_BIT(&Global_1956030, 22);
	}
}

void func_513(bool bParam0)//Position - 0x11205
{
	if (bParam0)
	{
		if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_309, 31))
		{
			MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_309), 31);
		}
	}
	else if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_309, 31))
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_309), 31);
	}
}

void func_514(bool bParam0)//Position - 0x11272
{
	int iVar0;
	struct<8> Var1;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_159))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_197.f_159, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_197.f_159))
		{
			if (!BitTest(Local_197.f_6, 2))
			{
				if (func_93())
				{
					if (func_24(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_347(), func_346(), func_345(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_347(), func_346(), func_345(), true, false, 1f, false);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 300, SYSTEM::ROUND((200f * Local_197.f_131)));
					MISC::SET_BIT(&(Local_197.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_197.f_159);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_197.f_159);
			return;
		}
	}
	if (func_37() && !func_38())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_539(&Var1, 11);
	}
	if (func_203("DRONE_TRIG" /* GXT: Press ~INPUT_CONTEXT~ to launch a drone. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_24(Local_197.f_161))
	{
		uVar10 = Local_197.f_161;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_197.f_162))
	{
		OBJECT::DELETE_OBJECT(&(Local_197.f_162));
	}
	if (HUD::DOES_BLIP_EXIST(Local_197.f_171))
	{
		HUD::REMOVE_BLIP(&(Local_197.f_171));
	}
	if (HUD::DOES_BLIP_EXIST(Local_197.f_172))
	{
		HUD::REMOVE_BLIP(&(Local_197.f_172));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_197.f_163))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_197.f_163));
	}
	HUD::THEFEED_SHOW();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_248())
	{
		func_247(0);
	}
	func_536();
	func_336(1, -1);
	func_535();
	if (func_38())
	{
		func_344(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_197.f_160))
	{
		iVar11 = NETWORK::NET_TO_OBJ(Local_197.f_160);
		OBJECT::DELETE_OBJECT(&iVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_197.f_158))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_197.f_158);
		}
		func_534(0);
	}
	func_257(0);
	if (func_532() && (!func_274(PLAYER::PLAYER_ID()) || func_273()))
	{
		func_307(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_197.f_120 = 0f;
	Local_197.f_121 = 0f;
	Local_197.f_12 = 0;
	Local_197.f_14 = 0;
	Local_197.f_10 = 0;
	Local_197.f_16 = 0;
	func_28(&(Local_197.f_245));
	func_28(&(Local_197.f_247));
	if (!Local_197.f_156)
	{
		func_28(&(Local_197.f_249));
	}
	func_28(&(Local_197.f_253));
	func_28(&(Local_197.f_251));
	func_28(&(Local_197.f_255));
	func_28(&(Local_197.f_259));
	func_28(&(Local_197.f_265));
	func_28(&(Local_197.f_263));
	func_28(&(Local_197.f_261));
	func_28(&(Local_197.f_267));
	func_28(&(Local_197.f_269));
	func_28(&(Local_197.f_271));
	func_28(&(Local_197.f_275));
	func_28(&(Local_197.f_277));
	func_28(&(Local_197.f_257));
	func_28(&(Local_197.f_346));
	if (PLAYER::PLAYER_ID() != func_13())
	{
		func_28(&(Local_197.f_281[PLAYER::PLAYER_ID() /*2*/]));
	}
	Local_197.f_28 = 0;
	Local_197.f_5 = 0;
	Local_197.f_6 = 0;
	Global_1956030.f_4 = -1;
	func_531(-1f);
	func_457(0f);
	func_254(0);
	func_460(0);
	func_530(0);
	func_458(0);
	func_231(0);
	func_529(0);
	func_185(0);
	func_528(0);
	func_527(0);
	func_526(0);
	func_525(0);
	func_524(0);
	func_82(1);
	func_301(0);
	func_299(0);
	func_305(0);
	func_463(0);
	MISC::CLEAR_BIT(&Global_1956030, 29);
	func_382(0f, 0f, 0f, 0f, 0f, 0f);
	func_523();
	Global_1956030.f_24 = -1;
	MISC::CLEAR_BIT(&Global_2707417, 0);
	MISC::CLEAR_BIT(&Global_1962943, 0);
	func_393(0);
	if (!func_522(0))
	{
		func_297();
	}
	if (func_85())
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (func_148() || func_17())
		{
			if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10 != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10))
			{
				iVar12 = Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_10;
			}
			else if ((func_148() && Global_1845102 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845102))
			{
				iVar12 = Global_1845102;
			}
			else if ((func_17() && Global_1845103 != func_13()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1845103))
			{
				iVar12 = Global_1845103;
			}
			else if (func_288(PLAYER::PLAYER_ID(), 0))
			{
				if (func_175() != func_13() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_175()))
				{
					iVar12 = func_175();
				}
			}
			if (iVar12 != func_13())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_148())
					{
						func_187(iVar12, 0, 1, 0);
					}
					else if (func_17())
					{
						func_187(iVar12, 0, 8, Global_1582006);
					}
					MISC::SET_BIT(&(Local_197.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_197.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_197.f_5), 27);
			}
		}
		else if (func_37() || func_168())
		{
			func_28(&Global_1955971);
			func_521(300000);
			func_520(1);
			MISC::SET_BIT(&(Local_197.f_5), 28);
		}
		func_400(0);
		func_399(0);
		MISC::CLEAR_BIT(&(Local_99[PLAYER::PLAYER_ID() /*3*/]), 0);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_197.f_173));
		if (func_37() || func_168())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Var14.f_0 = Global_4718592.f_126144;
			}
			else
			{
				Var14.f_0 = func_519(PLAYER::PLAYER_ID());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_197.f_27;
			Var14.f_5 = Local_197.f_29;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_197.f_26;
			STATS::PLAYSTATS_HEIST3_DRONE(&Var14);
		}
		else
		{
			STATS::PLAYSTATS_DRONE_USAGE(iVar13, Local_197.f_26, Local_197.f_27);
		}
		if (func_17())
		{
			func_517(2, func_518());
		}
	}
	func_516();
	func_401(0);
	func_272(0);
	func_194(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_197.f_170));
	if (func_189(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_189(1));
	}
	if (func_189(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_189(0));
	}
	func_394(0);
	func_336(1, -1);
	Local_197.f_26 = 0;
	Local_197.f_27 = 0;
	Local_197.f_29 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_197.f_28);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_174[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_197.f_174[PLAYER::PLAYER_ID()], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_197.f_207[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_197.f_207[PLAYER::PLAYER_ID()], false);
	}
	if (!bParam0)
	{
		if (!func_173(PLAYER::PLAYER_ID()))
		{
			func_515(0f, 0f, 0f, 0f);
		}
		Global_1956030.f_2 = 0;
		func_509();
	}
	else
	{
		func_456(0, 1);
	}
}

void func_515(struct<3> Param0, float fParam3)//Position - 0x11921
{
	if (!func_383(Global_1956030.f_10, Param0, 0))
	{
		Global_1956030.f_10 = { Param0 };
		Global_1956030.f_7 = fParam3;
	}
}

void func_516()//Position - 0x11952
{
	int iVar0;
	
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_41))
	{
		AUDIO::STOP_SOUND(Local_197.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_41);
		Local_197.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_30))
	{
		AUDIO::STOP_SOUND(Local_197.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_30);
		Local_197.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_31))
	{
		AUDIO::STOP_SOUND(Local_197.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_31);
		Local_197.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_32))
	{
		AUDIO::STOP_SOUND(Local_197.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_32);
		Local_197.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_33))
	{
		AUDIO::STOP_SOUND(Local_197.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_33);
		Local_197.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_34))
	{
		AUDIO::STOP_SOUND(Local_197.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_34);
		Local_197.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_40))
	{
		AUDIO::STOP_SOUND(Local_197.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_40);
		Local_197.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_39))
	{
		AUDIO::STOP_SOUND(Local_197.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_39);
		Local_197.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_38))
	{
		AUDIO::STOP_SOUND(Local_197.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_38);
		Local_197.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_37))
	{
		AUDIO::STOP_SOUND(Local_197.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_37);
		Local_197.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_36))
	{
		AUDIO::STOP_SOUND(Local_197.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_36);
		Local_197.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_35))
	{
		AUDIO::STOP_SOUND(Local_197.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_35);
		Local_197.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_42))
	{
		AUDIO::STOP_SOUND(Local_197.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_42);
		Local_197.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_43))
	{
		AUDIO::STOP_SOUND(Local_197.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_43);
		Local_197.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_81))
	{
		AUDIO::STOP_SOUND(Local_197.f_81);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_81);
		Local_197.f_81 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_197.f_115))
	{
		AUDIO::STOP_SOUND(Local_197.f_115);
		AUDIO::RELEASE_SOUND_ID(Local_197.f_115);
		Local_197.f_115 = -1;
	}
	if (func_496())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_197.f_46[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_197.f_46[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_197.f_46[iVar0]);
				Local_197.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_167();
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

void func_517(int iParam0, int iParam1)//Position - 0x11C14
{
	if (Global_2738587.f_353 > 0 || Global_2738587.f_353.f_1 > 0)
	{
		STATS::PLAYSTATS_SUB_WEAP(iParam0, iParam1, Global_2738587.f_353, Global_2738587.f_353.f_1);
	}
	func_424();
}

bool func_518()//Position - 0x11C55
{
	return Global_1845103 == PLAYER::PLAYER_ID();
}

int func_519(int iParam0)//Position - 0x11C66
{
	if (func_21(iParam0) == 243)
	{
		return func_19(iParam0);
	}
	return -1;
}

void func_520(bool bParam0)//Position - 0x11C83
{
	if (bParam0)
	{
		if (!BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 20))
		{
			MISC::SET_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 20);
		}
	}
	else if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368, 20))
	{
		MISC::CLEAR_BIT(&(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_368), 20);
	}
}

void func_521(int iParam0)//Position - 0x11CF0
{
	if (Global_1956030.f_5 != iParam0)
	{
		Global_1956030.f_5 = iParam0;
	}
}

bool func_522(int iParam0)//Position - 0x11D0B
{
	return Local_197.f_242 == iParam0;
}

void func_523()//Position - 0x11D1A
{
	if (func_181())
	{
		MISC::CLEAR_BIT(&Global_1956030, 7);
	}
}

void func_524(bool bParam0)//Position - 0x11D32
{
	if (bParam0)
	{
		if (func_85())
		{
			if (!BitTest(Global_1956030, 16))
			{
				MISC::SET_BIT(&Global_1956030, 16);
			}
		}
	}
	else if (BitTest(Global_1956030, 16))
	{
		MISC::CLEAR_BIT(&Global_1956030, 16);
	}
}

void func_525(bool bParam0)//Position - 0x11D75
{
	if (bParam0)
	{
		if (!func_497())
		{
			MISC::SET_BIT(&Global_1956030, 6);
		}
	}
	else if (func_497())
	{
		MISC::CLEAR_BIT(&Global_1956030, 6);
	}
}

void func_526(bool bParam0)//Position - 0x11DA6
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030, 3))
		{
			MISC::SET_BIT(&Global_1956030, 3);
		}
	}
	else if (BitTest(Global_1956030, 3))
	{
		MISC::CLEAR_BIT(&Global_1956030, 3);
	}
}

void func_527(bool bParam0)//Position - 0x11DDB
{
	if (bParam0)
	{
		if (!func_80())
		{
			MISC::SET_BIT(&Global_1956030, 28);
		}
	}
	else if (func_80())
	{
		MISC::CLEAR_BIT(&Global_1956030, 28);
	}
}

void func_528(bool bParam0)//Position - 0x11E0E
{
	if (bParam0)
	{
		if (!func_171())
		{
			MISC::SET_BIT(&Global_1956030, 27);
		}
	}
	else if (func_171())
	{
		MISC::CLEAR_BIT(&Global_1956030, 27);
	}
}

void func_529(bool bParam0)//Position - 0x11E41
{
	if (bParam0)
	{
		if (!func_405())
		{
			MISC::SET_BIT(&Global_1956030, 10);
		}
	}
	else if (func_405())
	{
		MISC::CLEAR_BIT(&Global_1956030, 10);
	}
}

void func_530(bool bParam0)//Position - 0x11E74
{
	if (bParam0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_497())
			{
				MISC::SET_BIT(&Global_1956030, 0);
			}
		}
	}
	else if (func_497())
	{
		MISC::CLEAR_BIT(&Global_1956030, 0);
	}
}

void func_531(float fParam0)//Position - 0x11EB6
{
	if (Global_1956030.f_9 != fParam0)
	{
		Global_1956030.f_9 = fParam0;
	}
}

int func_532()//Position - 0x11ED2
{
	if (!func_315())
	{
		return 0;
	}
	if (func_12(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (func_93())
	{
		return 0;
	}
	if (func_171() && (!func_533(0) || !func_9(func_175())))
	{
		return 0;
	}
	return 1;
}

bool func_533(bool bParam0)//Position - 0x11F32
{
	return func_288(PLAYER::PLAYER_ID(), bParam0);
}

void func_534(bool bParam0)//Position - 0x11F44
{
	if (bParam0)
	{
		if (!func_38())
		{
			MISC::SET_BIT(&Global_1956030, 24);
		}
	}
	else if (func_38())
	{
		MISC::CLEAR_BIT(&Global_1956030, 24);
	}
}

void func_535()//Position - 0x11F77
{
	if (CAM::DOES_CAM_EXIST(Local_197.f_169))
	{
		CAM::DESTROY_CAM(Local_197.f_169, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_44() || BitTest(Local_197.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_536()//Position - 0x11FB7
{
	if (CAM::DOES_CAM_EXIST(Local_197.f_169))
	{
		if (func_538(PLAYER::PLAYER_ID()))
		{
			func_537(0);
		}
	}
}

void func_537(bool bParam0)//Position - 0x11FDA
{
	if (bParam0)
	{
		Global_1942781.f_3760 = bParam0;
	}
	if (!Global_1942781.f_3759)
	{
		Global_1942781.f_3759 = 1;
	}
}

int func_538(int iParam0)//Position - 0x12003
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_26(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

void func_539(var uParam0, int iParam1)//Position - 0x12069
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
		if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436, 1))
		{
			MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_436), 1);
			bVar9 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_32(&(uParam0->f_1)))
	{
		func_30(&(uParam0->f_1), 0, 0);
	}
	bVar10 = true;
	if (*uParam0 == iParam1 && !bVar9)
	{
		if (func_32(&(uParam0->f_1)) && !func_29(&(uParam0->f_1), 1000, 0))
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

void func_540(struct<9> Param0, var uParam9, var uParam10, var uParam11)//Position - 0x1218F
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0.f_0);
	func_549(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_196, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_99, 97, 0);
	if (!func_548())
	{
		func_507(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_496())
		{
			Local_197.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_354()) && !ENTITY::IS_ENTITY_DEAD(func_354(), false))
					{
						Local_197.f_144 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_354(), true), ENTITY::GET_ENTITY_HEADING(func_354()), 0f, 1.6f, 2.9f) };
						Local_197.f_138 = { Local_197.f_144 };
					}
					func_470(1);
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 1;
					break;
				
				case 2:
					func_547(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 2;
					break;
				
				case 3:
					func_546(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 3;
					break;
				
				case 4:
					func_464(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 4;
					break;
				
				case 5:
					func_545(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 5;
					break;
				
				case 6:
					func_544(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 6;
					break;
				
				case 8:
					func_543(1);
					Local_197.f_144 = { Param0.f_5 };
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 8;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 8;
					break;
				
				case 9:
					func_510(1);
					Local_99[PLAYER::PLAYER_ID() /*3*/].f_1 = 9;
					Global_1906517[PLAYER::PLAYER_ID() /*299*/].f_97 = 9;
					break;
				
				default:
					func_542(1);
					Local_197.f_144 = { Param0.f_5 };
					break;
			}
			Local_197.f_141 = { Param0.f_8 };
			if (func_266(func_414()))
			{
				func_382(Local_197.f_144, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_507(0);
	}
	if (!func_496())
	{
		func_456(1, 1);
	}
	else
	{
		func_541();
	}
}

void func_541()//Position - 0x12412
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_197.f_46[iVar0] = -1;
		iVar0++;
	}
	func_393(6);
}

void func_542(bool bParam0)//Position - 0x1243B
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 0))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 0);
		}
	}
	else if (BitTest(Global_1956030.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 0);
	}
}

void func_543(bool bParam0)//Position - 0x1247F
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 8))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 8);
		}
	}
	else if (BitTest(Global_1956030.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 8);
	}
}

void func_544(bool bParam0)//Position - 0x124C7
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 6))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 6);
		}
	}
	else if (BitTest(Global_1956030.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 6);
	}
}

void func_545(bool bParam0)//Position - 0x1250B
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 5))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 5);
		}
	}
	else if (BitTest(Global_1956030.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 5);
	}
}

void func_546(bool bParam0)//Position - 0x1254F
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 3))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 3);
		}
	}
	else if (BitTest(Global_1956030.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 3);
	}
}

void func_547(bool bParam0)//Position - 0x12593
{
	if (bParam0)
	{
		if (!BitTest(Global_1956030.f_2, 2))
		{
			Global_1956030.f_2 = 0;
			MISC::SET_BIT(&(Global_1956030.f_2), 2);
		}
	}
	else if (BitTest(Global_1956030.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1956030.f_2), 2);
	}
}

int func_548()//Position - 0x125D7
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
		if (func_505())
		{
			return 0;
		}
		if (func_503(157))
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

int func_549(int iParam0, int iParam1, bool bParam2)//Position - 0x12630
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_509();
			}
			else
			{
				return 0;
			}
		}
		if (!func_550(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_509();
					}
					else
					{
						return 0;
					}
				}
				if (func_505())
				{
					if (!bParam2)
					{
						func_509();
					}
					else
					{
						return 0;
					}
				}
				if (func_503(157))
				{
					if (!bParam2)
					{
						func_509();
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
					func_509();
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
				func_509();
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
			func_509();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_550(bool bParam0)//Position - 0x12746
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

