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
	var uLocal_61 = 0;
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
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<4> Local_99 = { 2, 0, 0, 3 } ;
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
	var uLocal_120 = 2;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 2;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	struct<8> Local_126[32];
	struct<184> Local_383 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_567 = 0;
	bool bLocal_568 = 0;
	bool bLocal_569 = 0;
	bool bLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
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
	sLocal_18 = "NULL";
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
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	Local_96 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_575 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_181(ScriptParam_0);
	}
	else
	{
		func_178();
	}
	while (true)
	{
		func_177();
		func_169();
		if (func_161() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_178();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_157() && !Global_262145.f_22149 /* Tunable: 1137600288 */) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_148();
			}
			if (func_41())
			{
				func_178();
			}
			if (func_38(PLAYER::PLAYER_ID()))
			{
				if (!BitTest(Local_383.f_182, 3))
				{
					MISC::SET_BIT(&(Local_383.f_182), 3);
				}
			}
			if ((((((((((!Global_1836158 && !func_37(2)) && !func_34(PLAYER::PLAYER_ID(), 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_32(PLAYER::PLAYER_ID())) && !func_30(func_31(PLAYER::PLAYER_ID()))) && !func_28(PLAYER::PLAYER_ID(), 146)) && !func_23(PLAYER::PLAYER_ID())) && !func_22(PLAYER::PLAYER_ID())) && !func_21())
			{
				if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000))
				{
					if (!BitTest(Global_2794162.f_4661, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!func_157())
							{
								func_18();
								if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 0, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (!func_17(&(Local_383.f_3)))
									{
										func_14(&(Local_383.f_3));
									}
									else if (func_11(&(Local_383.f_3)) > 20f || Local_383.f_177)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
								}
								else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
								}
								else
								{
									PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
								}
							}
							else
							{
								if (Global_2794162.f_6858)
								{
									bLocal_568 = false;
									Global_2794162.f_6858 = 0;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !iLocal_572)
								{
									iLocal_572 = 1;
								}
								if (Global_262145.f_22133 /* Tunable: -2075966757 */ && !func_9(PLAYER::PLAYER_ID()))
								{
									if ((!bLocal_568 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0) && iLocal_572)
									{
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_MAX_WANTED_LEVEL(0);
										iLocal_571 = 1;
									}
									if (func_2() && !bLocal_568)
									{
										bLocal_568 = true;
										PLAYER::SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_568)
								{
									bLocal_568 = true;
								}
								if (bLocal_568)
								{
									if (bLocal_569)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(2) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (bLocal_570)
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
										{
											PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(3) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
										}
										else
										{
											PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
										}
									}
									else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Global_262145.f_22070 /* Tunable: 1302216568 */)
									{
										PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_22070 /* Tunable: 1302216568 */) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
									}
									else
									{
										PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_383.f_3)))
							{
								func_1(&(Local_383.f_3));
							}
							if (Local_383.f_177)
							{
								Local_383.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_383.f_177)
						{
							Local_383.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_383.f_177)
					{
						Local_383.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_178();
		}
	}
}

void func_1(var uParam0)//Position - 0x4E7
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()//Position - 0x4FD
{
	int iVar0;
	
	if ((((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) && !func_8()) && !func_22(PLAYER::PLAYER_ID())) && !Global_4456449.f_5 == 6)
	{
		if (Global_262145.f_22064 /* Tunable: 11080722 */)
		{
			return 0;
		}
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2346.9753f, 3259.7568f, 31.81074f, -2349.5073f, 3261.232f, 33.810738f, 9.5625f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2054.8645f, 3240.9766f, 30.51001f, -2056.5515f, 3237.8462f, 32.501564f, 4.0625f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1792.9076f, 3091.104f, 31.812569f, -1812.7072f, 3102.736f, 39.466824f, 18.187f, false, true, 0)) || func_7(PLAYER::PLAYER_ID()))
		{
			bLocal_569 = false;
			bLocal_570 = false;
			return 1;
		}
		if (Global_262145.f_22071 /* Tunable: ACCESS_ARMY_BASE_IN_STOLEN_VEHICLE */)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_569 = true;
							bLocal_570 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_STOLEN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				if ((!func_5(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1) && !func_4(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					bLocal_569 = true;
					bLocal_570 = false;
					return 1;
				}
			}
		}
		if (Global_2794162.f_6856 || Global_2794162.f_6857)
		{
			if (Global_2794162.f_6857)
			{
				bLocal_569 = false;
				bLocal_570 = true;
			}
			else
			{
				bLocal_569 = true;
				bLocal_570 = false;
			}
			Global_2794162.f_6856 = 0;
			Global_2794162.f_6857 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x725
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x765
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x799
{
	if (Global_78689)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x7D7
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x83B
{
	int iVar0;
	int iVar1;
	
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam0));
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.9753f, 3259.7568f, 31.81074f, "v_tower");
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()//Position - 0x8F4
{
	return Global_4718592 == 3;
}

int func_9(int iParam0)//Position - 0x902
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

var func_10(int iParam0, int iParam1)//Position - 0x920
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

float func_11(int* iParam0)//Position - 0x938
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0x974
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

bool func_13(var uParam0)//Position - 0x9CC
{
	return BitTest(*uParam0, 2);
}

void func_14(int* iParam0)//Position - 0x9D9
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int* iParam0)//Position - 0x9F1
{
	func_16(iParam0, 0f);
}

void func_16(int* iParam0, float fParam1)//Position - 0xA00
{
	iParam0->f_1 = (func_12(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)//Position - 0xA2B
{
	return BitTest(*uParam0, 1);
}

void func_18()//Position - 0xA38
{
	if (iLocal_571)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	Global_2794162.f_6856 = 0;
	Global_2794162.f_6857 = 0;
	iLocal_571 = 0;
	bLocal_568 = false;
	bLocal_569 = false;
	iLocal_572 = 0;
}

int func_19(struct<3> Param0, int iParam3)//Position - 0xA6B
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	
	bVar110 = false;
	Var0[0 /*3*/] = { -1877.4358f, 2783.1506f, 31.806177f };
	Var46[0 /*3*/] = { -1797.8734f, 2924.3696f, (307.11057f + IntToFloat(iParam3)) };
	fVar92[0] = 88f;
	Var0[1 /*3*/] = { -1761.1156f, 2834.6511f, 31.806217f };
	Var46[1 /*3*/] = { -1720.8875f, 2906.4192f, (281.80624f + IntToFloat(iParam3)) };
	fVar92[1] = 88f;
	Var0[2 /*3*/] = { -1761.4933f, 2817.68f, 32.37125f };
	Var46[2 /*3*/] = { -1769.7045f, 2913.7344f, (281.8066f + IntToFloat(iParam3)) };
	fVar92[2] = 88f;
	Var0[3 /*3*/] = { -1879.297f, 2772.6526f, 29.57795f };
	Var46[3 /*3*/] = { -1864.5205f, 2825.4724f, (281.80618f + IntToFloat(iParam3)) };
	fVar92[3] = 88f;
	Var0[4 /*3*/] = { -2676.74f, 3366.9875f, 29.923937f };
	Var46[4 /*3*/] = { -2744.7896f, 3340.3467f, (37.803787f + IntToFloat(iParam3)) };
	fVar92[4] = 9f;
	Var0[5 /*3*/] = { -2676.74f, 3366.9875f, 29.923937f };
	Var46[5 /*3*/] = { -2744.7896f, 3340.3467f, (37.803787f + IntToFloat(iParam3)) };
	fVar92[5] = 9.5f;
	Var0[6 /*3*/] = { -2807.3967f, 3264.2256f, 29.92764f };
	Var46[6 /*3*/] = { -2879.8052f, 3309.0095f, (37.578644f + IntToFloat(iParam3)) };
	fVar92[6] = 9.5f;
	Var0[7 /*3*/] = { -2808.236f, 3264.6343f, 29.92764f };
	Var46[7 /*3*/] = { -2747.5503f, 3187.8f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[7] = 9.5f;
	Var0[8 /*3*/] = { -2530.9958f, 3064.151f, 29.71081f };
	Var46[8 /*3*/] = { -2748.5571f, 3189.9392f, (37.45682f + IntToFloat(iParam3)) };
	fVar92[8] = 9.5f;
	Var0[9 /*3*/] = { -2533.9016f, 3062.4907f, 29.707146f };
	Var46[9 /*3*/] = { -2520.674f, 2996.8174f, (37.457146f + IntToFloat(iParam3)) };
	fVar92[9] = 9.5f;
	Var0[10 /*3*/] = { -2500.7163f, 2927.1028f, 29.45663f };
	Var46[10 /*3*/] = { -2445.696f, 2896.6575f, (37.680088f + IntToFloat(iParam3)) };
	fVar92[10] = 9.5f;
	Var0[11 /*3*/] = { -2020.5427f, 2810.7468f, 29.45658f };
	Var46[11 /*3*/] = { -1927.949f, 2785.7788f, (37.67057f + IntToFloat(iParam3)) };
	fVar92[11] = 9.5f;
	Var0[12 /*3*/] = { -2261.8992f, 3376.5488f, 29.77859f };
	Var46[12 /*3*/] = { -2141.0674f, 3376.773f, (37.90019f + IntToFloat(iParam3)) };
	fVar92[12] = 9.5f;
	iVar108 = 13;
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_20(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0xDC9
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var46[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var46[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var46[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var46[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var46[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var46[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var46[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var46[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var46[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var46[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var46[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var46[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var46[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var46[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var46[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var46[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var46[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var46[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var46[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var46[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var46[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var46[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var46[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var46[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var46[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var46[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var46[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var46[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var46[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var46[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var46[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var46[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var46[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var46[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var46[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var46[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var46[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var46[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var46[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_21()//Position - 0x1B1D
{
	return Global_2794162.f_6859;
}

int func_22(int iParam0)//Position - 0x1B2C
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2765083;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_23(int iParam0)//Position - 0x1B98
{
	return func_24(func_25(iParam0));
}

int func_24(int iParam0)//Position - 0x1BAA
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x1BD0
{
	if (func_27(iParam0))
	{
		if (func_26(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_26(int iParam0, int iParam1)//Position - 0x1BFC
{
	if (func_27(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(var uParam0)//Position - 0x1C40
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

int func_28(int iParam0, int iParam1)//Position - 0x1C62
{
	if (Global_1895156[iParam0 /*609*/] == iParam1)
	{
		return func_29(iParam0);
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x1C82
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1CA5
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_29(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1CE3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/];
	}
	return -1;
}

int func_32(int iParam0)//Position - 0x1D02
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_33())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_33()//Position - 0x1D41
{
	return BitTest(Global_2621446, 3);
}

bool func_34(int iParam0, int iParam1)//Position - 0x1D4F
{
	bool bVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
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

int func_35(int iParam0, bool bParam1)//Position - 0x1DA8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_1575043[iVar1] == 1)
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

int func_36()//Position - 0x1DE9
{
	return Global_1574918;
}

bool func_37(int iParam0)//Position - 0x1DF5
{
	return BitTest(Global_1836157, iParam0);
}

int func_38(int iParam0)//Position - 0x1E04
{
	if (iParam0 != func_40() && func_39(iParam0, 1, 1))
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_39(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E35
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
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_40()//Position - 0x1E95
{
	return -1;
}

int func_41()//Position - 0x1E9E
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_125())
		{
			iVar0 = 1;
		}
	}
	if (func_42())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_42()//Position - 0x1EC6
{
	int iVar0;
	
	switch (Local_383.f_6)
	{
		case 0:
			func_124();
			if ((((((((func_121(PLAYER::PLAYER_ID(), 1, 0) && func_120()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_119(PLAYER::PLAYER_ID())) || func_21()) || Global_1836600) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			func_117(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_383.f_176 = 1;
			Local_383.f_6 = 1;
			break;
		
		case 1:
			if (func_116())
			{
				func_117(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_383.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_115(Local_99.f_20, 1))
			{
				Local_383.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_121(PLAYER::PLAYER_ID(), 1, 0) && !func_120()) && !func_157())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_109(iVar0);
					iVar0++;
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_107() && !func_121(PLAYER::PLAYER_ID(), 1, 0)) && !func_120()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && func_105(PLAYER::PLAYER_ID()) != 6)
				{
					func_50();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_43(iVar0);
				iVar0++;
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_119(PLAYER::PLAYER_ID())) || Global_1836600) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.3735f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_383.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_121(PLAYER::PLAYER_ID(), 1, 0) && func_120()) || func_25(PLAYER::PLAYER_ID()) == 159) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_119(PLAYER::PLAYER_ID())) || Global_1836600) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_43(int iParam0)//Position - 0x2183
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_99.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]), false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_383.f_172[iParam0]))
			{
				HUD::REMOVE_BLIP(&(Local_383.f_172[iParam0]));
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_383.f_172[iParam0]) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2)
		{
			Local_383.f_172[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_99.f_3[iParam0 /*5*/]));
			HUD::SET_BLIP_COLOUR(Local_383.f_172[iParam0], 1);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_383.f_172[iParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_383.f_172[iParam0]));
	}
	switch (Local_99.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 4)
						{
							if (func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 500, 0))
							{
								func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_47(iParam0))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_99.f_3[iParam0 /*5*/].f_4);
					iVar0 = NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
							if ((!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
							{
								TASK::TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true), 6, 70f, -1f, 30f, 7E-43f, 7E-44f, true);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
								PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, false);
							}
						}
					}
				}
				if (func_46(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1);
					iVar2 = PLAYER::GET_PLAYER_PED(Local_99.f_3[iParam0 /*5*/].f_4);
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (PED::IS_PED_IN_ANY_PLANE(iVar2))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true));
						}
					}
				}
				if (func_45(iParam0, 6))
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_47(iParam0))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1);
					iVar1 = NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						TASK::TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.3735f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 7E-43f, 7E-44f, true);
					}
				}
				if (func_45(iParam0, 9))
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_99.f_3[iParam0 /*5*/]) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_99.f_3[iParam0 /*5*/].f_1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_99.f_3[iParam0 /*5*/]), false), 10f) && !NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_99.f_3[iParam0 /*5*/]), false), 10f))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/].f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_99.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = NETWORK::NET_TO_ENT(Local_99.f_3[iParam0 /*5*/].f_1);
						ENTITY::DELETE_ENTITY(&iVar4);
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]))
					{
						iVar5 = NETWORK::NET_TO_ENT(Local_99.f_3[iParam0 /*5*/]);
						ENTITY::DELETE_ENTITY(&iVar5);
					}
				}
			}
			else if (func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_44(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_44(var uParam0, int iParam1)//Position - 0x2610
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_45(int iParam0, int iParam1)//Position - 0x2625
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)//Position - 0x266D
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_47(int iParam0)//Position - 0x26B8
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_48(var uParam0, int iParam1)//Position - 0x26FF
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_49(var uParam0, int iParam1)//Position - 0x2710
{
	return (uParam0 && iParam1) != 0;
}

void func_50()//Position - 0x271F
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var5;
	
	func_104();
	func_99();
	Var2 = { Local_96 };
	if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_97(PLAYER::PLAYER_PED_ID())) && func_96(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = true;
	}
	else
	{
		Local_383.f_178 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.9766f, 2793.9412f, 14.982886f, -1575.6636f, 2779.5579f, 26.115358f, 29.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.9163f, 3390.5454f, 29.178257f, -2322.2449f, 3401.7185f, 35.631306f, 36f, false, true, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_383.f_179 = 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.9766f, 2793.9412f, 14.982886f, -1575.6636f, 2779.5579f, 26.115358f, 29.75f, false, true, 0))
	{
		Var2 = { -1592.1f, 2797.2f, 17.1f };
		Local_383.f_181 = 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.9163f, 3390.5454f, 29.178257f, -2322.2449f, 3401.7185f, 35.631306f, 36f, false, true, 0))
	{
		Var2 = { -2303.9f, 3388f, 31.3f };
		Local_383.f_181 = 2;
	}
	if (func_94(bVar0, bVar1))
	{
		func_92();
		if (!func_91())
		{
			Global_1835499 = 1;
			func_90(&(Local_383.f_7), 2);
			func_89(&(Local_383.f_7), 2);
			func_88(&(Local_383.f_7), 2, 0, "AIRMECH", 0, 1);
			func_87(&(Local_383.f_7), 2, Var2);
			Global_21134.f_162 = { Var2 };
			Var5 = { func_86() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
			{
				if (func_65(&(Local_383.f_7), "SMGFZAU", &Var5, 7, 0, 0, 0))
				{
					func_51(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_91())
	{
		if (!BitTest(Local_383.f_182, 2))
		{
			Global_1835499 = 0;
			func_90(&(Local_383.f_7), 2);
			func_89(&(Local_383.f_7), 2);
			MISC::SET_BIT(&(Local_383.f_182), 2);
		}
	}
}

void func_51(bool bParam0, bool bParam1)//Position - 0x2952
{
	if (bParam0)
	{
		if (!func_64(16000, -1))
		{
			func_63(16000, 1, -1);
			if (Global_2794162.f_6864)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */);
					Local_383.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
			}
		}
		else if (!func_64(16001, -1))
		{
			func_63(16001, 1, -1);
			if (Global_2794162.f_6864)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */);
					Local_383.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
			}
		}
		Local_383.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_64(15999, -1))
		{
			func_63(15999, 1, -1);
			if (Global_2794162.f_6864)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */);
					Local_383.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
			}
		}
		else if (Local_383.f_181 == 1)
		{
			if (!func_64(16002, -1))
			{
				func_63(16002, 1, -1);
				if (Global_2794162.f_6864)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */);
						Local_383.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
				}
			}
		}
		else if (Local_383.f_181 == 2)
		{
			if (func_53(18097, -1) == 0)
			{
				func_52(18097, 1, -1);
				if (Global_2794162.f_6864)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */);
						Local_383.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
				}
			}
		}
		Local_383.f_179 = 1;
		Local_383.f_181 = 0;
	}
	if (BitTest(Local_383.f_182, 2))
	{
		MISC::CLEAR_BIT(&(Local_383.f_182), 2);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x2B01
{
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_53(int iParam0, int iParam1)//Position - 0x2B29
{
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_54(char* sParam0, int iParam1)//Position - 0x2B45
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_55(char* sParam0)//Position - 0x2B5C
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_56(sParam0))
	{
		func_54(sParam0, -1);
	}
}

bool func_56(char* sParam0)//Position - 0x2B81
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_57()//Position - 0x2B94
{
	if (func_60(PLAYER::PLAYER_ID()) && !func_58(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)//Position - 0x2BBB
{
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_40();
}

int func_59(int iParam0)//Position - 0x2BF4
{
	if (func_27(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_40())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x2C29
{
	int iVar0;
	
	if (func_62(iParam0))
	{
		iVar0 = func_61(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x2C62
{
	if (iParam0 != func_40())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x2C86
{
	if (iParam0 != func_40())
	{
		return Global_1853988[iParam0 /*867*/].f_267.f_293 != 0;
	}
	return 0;
}

void func_63(int iParam0, bool bParam1, int iParam2)//Position - 0x2CAC
{
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

bool func_64(int iParam0, int iParam1)//Position - 0x2CCA
{
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

bool func_65(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2CE6
{
	func_85(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_66(sParam2, iParam3, 0);
}

int func_66(char* sParam0, int iParam1, bool bParam2)//Position - 0x2D34
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_84();
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
		if (func_83(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_82();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_74();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_73())
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
				if (!Global_78689)
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
			if (func_72())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
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
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_71();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_70();
		func_67();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_84();
	}
	return 0;
}

void func_67()//Position - 0x3002
{
	if (!func_68())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_68()//Position - 0x3039
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_40())
	{
		return 0;
	}
	if (func_69(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_69(int iParam0)//Position - 0x309C
{
	return func_10(iParam0, 20);
}

void func_70()//Position - 0x30AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_71()//Position - 0x30DD
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_72()//Position - 0x3172
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x3199
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
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

void func_74()//Position - 0x3232
{
	if (func_81(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_75();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

var func_75()//Position - 0x32D4
{
	func_76();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_76()//Position - 0x32ED
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_79(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_78(PLAYER::PLAYER_PED_ID());
			if (func_77(iVar0) && (!func_81(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_77(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

bool func_77(int iParam0)//Position - 0x33EA
{
	return iParam0 < 3;
}

int func_78(int iParam0)//Position - 0x33F6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_79(int iParam0)//Position - 0x3433
{
	if (func_77(iParam0))
	{
		return func_80(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_80(int iParam0)//Position - 0x3458
{
	return Global_2058[iParam0 /*29*/];
}

bool func_81(int iParam0)//Position - 0x3467
{
	return Global_43377 == iParam0;
}

void func_82()//Position - 0x3475
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_83(int iParam0, int iParam1)//Position - 0x34CC
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_84()//Position - 0x3504
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_85(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x355B
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = uParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

struct<6> func_86()//Position - 0x35B1
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.9766f, 2793.9412f, 14.982886f, -1575.6636f, 2779.5579f, 26.115358f, 29.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.9163f, 3390.5454f, 29.178257f, -2322.2449f, 3401.7185f, 35.631306f, 36f, false, true, 0))
	{
		if (!func_64(15999, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_64(16002, -1) || func_53(18097, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_97(PLAYER::PLAYER_PED_ID())) && func_96(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_64(16000, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_64(16001, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_87(var uParam0, int iParam1, struct<3> Param2)//Position - 0x36D4
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_88(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x36EC
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
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

void func_89(var uParam0, int iParam1)//Position - 0x3787
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_90(var uParam0, int iParam1)//Position - 0x37A5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_91()//Position - 0x37C2
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_92()//Position - 0x37E4
{
	Global_20711 = 0;
	func_93();
}

void func_93()//Position - 0x37F4
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

int func_94(bool bParam0, bool bParam1)//Position - 0x3818
{
	if (func_22(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_383.f_178)
		{
			if (BitTest(Local_383.f_182, 1))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!func_64(16000, -1) || !func_64(16001, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_383.f_179)
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_95())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.9766f, 2793.9412f, 14.982886f, -1575.6636f, 2779.5579f, 26.115358f, 29.75f, false, true, 0))
					{
						if (!func_64(15999, -1) || !func_64(16002, -1))
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= -25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.9163f, 3390.5454f, 29.178257f, -2322.2449f, 3401.7185f, 35.631306f, 36f, false, true, 0))
					{
						if (!func_64(15999, -1) || func_53(18097, -1) == 0)
						{
							if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= 160f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_95()//Position - 0x39A0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_96(int iParam0)//Position - 0x39ED
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)//Position - 0x3A0F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_98(iParam0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x3AC3
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

void func_99()//Position - 0x3AE4
{
	if (Local_383.f_180)
	{
		if (!func_103(&(Local_383.f_183)))
		{
			func_102(&(Local_383.f_183), 0, 0);
		}
		else if (!func_101(&(Local_383.f_183), 17000, 0))
		{
			if (!func_56("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */))
			{
				func_54("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */, -1);
			}
		}
		else if (func_101(&(Local_383.f_183), 17000, 0))
		{
			if (func_56("AB_ENTRY_HT" /* GXT: Your Hangar includes low-level clearance to Fort Zancudo. This allows access to the base, however actions deemed beyond this clearance level will result in a Wanted Level. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_100(&(Local_383.f_183));
			Local_383.f_180 = 0;
		}
	}
}

void func_100(var uParam0)//Position - 0x3B64
{
	uParam0->f_1 = 0;
}

int func_101(var uParam0, int iParam1, bool bParam2)//Position - 0x3B71
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_102(uParam0, bParam2, 0);
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

void func_102(var uParam0, bool bParam1, bool bParam2)//Position - 0x3BCF
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

bool func_103(var uParam0)//Position - 0x3C14
{
	return uParam0->f_1;
}

void func_104()//Position - 0x3C20
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if ((func_20(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0) || func_19(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1000)) || func_97(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Local_383.f_182, 0))
			{
				if ((((func_96(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && func_95()) && !Global_1963712)
				{
					if (!BitTest(Local_383.f_182, 1) && !BitTest(Local_383.f_182, 3))
					{
						MISC::SET_BIT(&(Local_383.f_182), 1);
					}
				}
				MISC::SET_BIT(&(Local_383.f_182), 0);
			}
		}
		else
		{
			if (BitTest(Local_383.f_182, 0))
			{
				MISC::CLEAR_BIT(&(Local_383.f_182), 0);
			}
			if (BitTest(Local_383.f_182, 1))
			{
				MISC::CLEAR_BIT(&(Local_383.f_182), 1);
			}
			if (BitTest(Local_383.f_182, 3))
			{
				MISC::CLEAR_BIT(&(Local_383.f_182), 3);
			}
			if (Global_1963712)
			{
				Global_1963712 = 0;
			}
		}
	}
}

int func_105(int iParam0)//Position - 0x3D2D
{
	if (func_25(iParam0) == 233)
	{
		return func_106(iParam0);
	}
	return -1;
}

int func_106(int iParam0)//Position - 0x3D4A
{
	if (func_26(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_107()//Position - 0x3D6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_39(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (func_108(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar1)))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::GET_PLAYER_PED(iVar1))
					{
						if (func_60(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_108(int iParam0, int iParam1)//Position - 0x3DF4
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, false) == PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
}

void func_109(int iParam0)//Position - 0x3E33
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_99[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	switch (Local_99.f_21[iParam0])
	{
		case 0:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
					{
						func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && !func_22(PLAYER::PLAYER_ID()))
			{
				func_88(&(Local_383.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_114(&(Local_383.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_113(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_112(iParam0), -1, false);
				}
				if (func_111(iParam0, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")))
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!func_17(&Local_383))
				{
					func_14(&Local_383);
				}
				if (func_11(&Local_383) >= 7f && !func_22(PLAYER::PLAYER_ID()))
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_114(&(Local_383.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_383))
			{
				func_1(&Local_383);
			}
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_110(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_157())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_22070 /* Tunable: 1302216568 */));
					}
				}
			}
			if (func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_44(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_110(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_48(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_157())
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(4) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 36, (PLAYER::GET_WANTED_LEVEL_THRESHOLD(Global_262145.f_22070 /* Tunable: 1302216568 */) - PLAYER::GET_WANTED_LEVEL_THRESHOLD(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()))));
					}
				}
			}
			if (func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_44(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_111(iParam0, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")))
			{
				if (func_113(iParam0))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, func_112(iParam0), -1, false);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_49(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_113(iParam0))
				{
					TASK::CLEAR_PED_TASKS(iVar0);
				}
				if (!func_111(iParam0, joaat("SCRIPT_TASK_ANY")))
				{
					func_44(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_44(&(Local_126[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_110(int iParam0)//Position - 0x430C
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_99[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		return 1;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0x43A3
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[iParam0]))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_99[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)//Position - 0x43F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar2, true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_99[iParam0]), true));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_113(int iParam0)//Position - 0x4472
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[iParam0]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_99[iParam0]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_114(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x44B5
{
	func_85(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 1;
	return func_66(sParam2, iParam3, 0);
}

bool func_115(var uParam0, int iParam1)//Position - 0x4503
{
	return (uParam0 && iParam1) != 0;
}

int func_116()//Position - 0x4512
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_117(var uParam0, int iParam1)//Position - 0x454E
{
	func_118(uParam0, iParam1);
}

void func_118(var uParam0, var uParam1)//Position - 0x455E
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_119(int iParam0)//Position - 0x456F
{
	if (func_31(iParam0) == 236 || func_31(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_120()//Position - 0x4597
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 0);
}

int func_121(int iParam0, bool bParam1, bool bParam2)//Position - 0x45B0
{
	if (bParam1)
	{
		if (func_122(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_122(int iParam0)//Position - 0x45E2
{
	return func_123(iParam0);
}

var func_123(int iParam0)//Position - 0x45F0
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

void func_124()//Position - 0x4607
{
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_01"));
	STREAMING::REQUEST_MODEL(joaat("lazer"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Pilot_01"));
}

int func_125()//Position - 0x462A
{
	int iVar0;
	
	switch (Local_99.f_19)
	{
		case 0:
			if (func_147())
			{
				Local_99.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_146())
			{
				Local_99.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_121(PLAYER::PLAYER_ID(), 1, 0) || func_120()) || func_25(PLAYER::PLAYER_ID()) == 225) || func_25(PLAYER::PLAYER_ID()) == 233) || func_119(PLAYER::PLAYER_ID())) || func_21()) || Global_1836600) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_117(&(Local_99.f_20), 1);
				Local_99.f_19 = 3;
			}
			else if (func_144())
			{
				func_117(&(Local_99.f_20), 1);
				Local_99.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_121(PLAYER::PLAYER_ID(), 1, 0) && !func_120())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_141(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_128(iVar0);
					iVar0++;
				}
			}
			if (((((func_25(PLAYER::PLAYER_ID()) == 225 || func_25(PLAYER::PLAYER_ID()) == 233) || func_119(PLAYER::PLAYER_ID())) || Global_1836600) || func_21()) || (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_8()))
			{
				func_127();
			}
			if (func_126())
			{
				Local_99.f_19 = 4;
			}
			break;
		
		case 4:
			func_127();
			return 1;
			break;
	}
	return 0;
}

int func_126()//Position - 0x47C9
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -2076.3735f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_127()//Position - 0x480A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_99[iVar0]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_99.f_3[iVar0 /*5*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iVar0 /*5*/]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_99.f_3[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_128(int iParam0)//Position - 0x48C0
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (Local_99.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/].f_1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1), false))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_99.f_3[iParam0 /*5*/].f_1);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (Var1.f_2 <= -150f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam0 /*5*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]), false))
						{
							iVar4 = NETWORK::NET_TO_VEH(Local_99.f_3[iParam0 /*5*/]);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
	switch (Local_99.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_140(iParam0, 16))
			{
				Local_99.f_3[iParam0 /*5*/].f_4 = -1;
				Local_99.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_138(iParam0))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var5 = { func_137(iParam0) };
			if (!func_136(Var5))
			{
				if (!NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Var5, 20f) && !CAM::IS_SPHERE_VISIBLE(Var5, 20f))
				{
					if (func_131(Var5, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(Local_99.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_99.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_140(iParam0, 2))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar8 = PLAYER::GET_PLAYER_PED(Local_99.f_3[iParam0 /*5*/].f_4);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (ENTITY::IS_ENTITY_DEAD(iVar8, false))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (PED::IS_PED_IN_ANY_PLANE(iVar8) || PED::IS_PED_IN_ANY_HELI(iVar8))
			{
				if (func_130(PED::GET_VEHICLE_PED_IS_IN(iVar8, false)))
				{
					Local_99.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_140(iParam0, 8))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 6;
				Local_99.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_129(iParam0, 16))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_138(iParam0))
			{
				Local_99.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_129(int iParam0, int iParam1)//Position - 0x4B1A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_49(Local_126[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x4B5E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
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

int func_131(struct<3> Param0, float fParam3, int iParam4)//Position - 0x4BA1
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam4 /*5*/]))
	{
		if (!func_133(&(Local_99.f_3[iParam4 /*5*/]), joaat("lazer"), Param0, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_99.f_3[iParam4 /*5*/]), 3);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam4 /*5*/]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99.f_3[iParam4 /*5*/].f_1))
		{
			if (!func_132(&(Local_99.f_3[iParam4 /*5*/].f_1), Local_99.f_3[iParam4 /*5*/], 29, joaat("S_M_Y_Pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(NETWORK::NET_TO_PED(Local_99.f_3[iParam4 /*5*/].f_1), joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
				PED::SET_PED_CAN_SWITCH_WEAPON(NETWORK::NET_TO_PED(Local_99.f_3[iParam4 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_132(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x4C89
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

int func_133(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x4D11
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
		Global_2794162.f_6737 = iVar1;
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
			func_134(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_134(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x4E1A
{
	int iVar0;
	
	if (func_135(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635560.f_3026[1 /*6*/].f_5 == iParam5 && Global_2635560.f_3026[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635560.f_3026[iVar0 /*6*/] = { Global_2635560.f_3026[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635560.f_3026[1 /*6*/] = { Param0 };
		Global_2635560.f_3026[1 /*6*/].f_3 = fParam3;
		Global_2635560.f_3026[1 /*6*/].f_4 = iParam4;
		Global_2635560.f_3026[1 /*6*/].f_5 = iParam5;
	}
}

int func_135(int iParam0, struct<3> Param1, int iParam4)//Position - 0x4EED
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
			if (Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_136(struct<3> Param0)//Position - 0x4F8B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_137(int iParam0)//Position - 0x4FB5
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = PLAYER::GET_PLAYER_PED(Local_99.f_3[iParam0 /*5*/].f_4);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_138(int iParam0)//Position - 0x501E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
			if (!func_139(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
			{
				if (PED::IS_PED_IN_ANY_PLANE(iVar1) || PED::IS_PED_IN_ANY_HELI(iVar1))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))) >= 4)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
						if (func_20(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_99.f_3[iParam0 /*5*/].f_4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0x50D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = PLAYER::GET_PLAYER_PED(Local_99.f_3[iVar1 /*5*/].f_4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_99.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x513F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_49(Local_126[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_141(int iParam0)//Position - 0x5184
{
	switch (Local_99.f_21[iParam0])
	{
		case 0:
			if (func_143(iParam0, 64))
			{
				Local_99.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_142(iParam0, 1))
			{
				Local_99.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_142(iParam0, 2))
			{
				Local_99.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_143(iParam0, 4))
			{
				Local_99.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_142(iParam0, 8))
			{
				Local_99.f_21[iParam0] = 5;
			}
			if (!func_142(iParam0, 1))
			{
				Local_99.f_21[iParam0] = 7;
			}
			if (func_142(iParam0, 16))
			{
				Local_99.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_142(iParam0, 16))
			{
				Local_99.f_21[iParam0] = 6;
			}
			if (!func_142(iParam0, 1))
			{
				Local_99.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_142(iParam0, 4))
			{
				Local_99.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_142(int iParam0, int iParam1)//Position - 0x52A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_49(Local_126[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)//Position - 0x52EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_49(Local_126[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_144()//Position - 0x532F
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_145(&(Local_99[0]), 29, joaat("S_M_Y_Marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[0]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_99[0]), joaat("WEAPON_ASSAULTRIFLE"), 200, true, true);
	}
	if (!func_145(&(Local_99[1]), 29, joaat("S_M_Y_Marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_99[1]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_99[1]), joaat("WEAPON_ASSAULTRIFLE"), 200, true, true);
	}
	return iVar0;
}

int func_145(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x53EE
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_146()//Position - 0x544D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_115(Local_126[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_147()//Position - 0x548E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (!func_115(Local_126[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_148()//Position - 0x54CF
{
	if (!func_153())
	{
		return;
	}
	if (func_103(&uLocal_578) && func_101(&uLocal_578, Global_262145.f_22150 /* Tunable: -2077916586 */, 0))
	{
		func_100(&uLocal_578);
	}
	if (func_103(&uLocal_576) && func_101(&uLocal_576, Global_262145.f_22151 /* Tunable: -372789145 */, 0))
	{
		func_100(&uLocal_576);
		iLocal_573 = 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
	{
		if (func_149())
		{
			if (!Global_2794162.f_6865)
			{
				Global_2794162.f_6865 = 1;
				func_54("BASE_EXP_WARN" /* GXT: WARNING: Your clearance level does not permit you to fire explosives inside Fort Zancudo. Continuing to fire explosives will result in a Wanted Level. */, -1);
			}
			if (!iLocal_573)
			{
				iLocal_573 = 1;
				func_102(&uLocal_578, 0, 0);
				func_102(&uLocal_576, 0, 0);
			}
			else if (!func_103(&uLocal_578))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				bLocal_568 = true;
				bLocal_569 = true;
				iLocal_573 = 0;
				func_100(&uLocal_578);
				func_100(&uLocal_576);
			}
		}
	}
}

int func_149()//Position - 0x55A8
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_152(&iLocal_574, iVar1);
		iLocal_575 = func_151();
		if (iLocal_575 >= 0)
		{
			iVar0 = func_150(iLocal_575);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x5609
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1773.944f, 3287.3342f, 30f, -2029.7765f, 2845.0833f, 1250f, 255f);
			break;
		
		case 1:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2725.8894f, 3291.0986f, 30f, -2009.1815f, 2879.8352f, 1250f, 180f);
			break;
		
		case 2:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2442.0261f, 3326.6987f, 30f, -2033.9279f, 3089.0488f, 1250f, 205f);
			break;
		
		case 3:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1917.1654f, 3374.209f, 30f, -2016.7909f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2192.753f, 3373.2778f, 30f, -2191.5444f, 3150.4165f, 1250f, 150f);
			break;
		
		case 5:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2077.6633f, 3344.5142f, 30f, -2191.5444f, 3150.4165f, 1250f, 140.5f);
			break;
		
		case 6:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2861.7554f, 3352.6606f, 30f, -2715.8708f, 3269.9155f, 1250f, 90f);
			break;
		
		case 7:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2005.5745f, 3364.5327f, 30f, -1977.5688f, 3330.8882f, 1250f, 100f);
			break;
		
		case 8:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1682.235f, 3004.2852f, 30f, -1942.747f, 2947.4412f, 1250f, 248.75f);
			break;
		
		case 9:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2393.2954f, 2936.406f, 31.680103f, -2453.0366f, 3006.863f, 52.310028f, 128f);
			break;
		
		case 10:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2347.1848f, 3023.8298f, 31.56573f, -2517.3298f, 2989.0635f, 49.956444f, 127.25f);
			break;
		
		case 11:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2259.9219f, 3358.0398f, 29.999718f, -2299.772f, 3385.79f, 38.060143f, 16f);
			break;
		
		case 12:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2476.3093f, 3363.914f, 31.679329f, -2431.9807f, 3287.6694f, 39.978264f, 214.25f);
			break;
		
		case 13:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2103.0813f, 2797.7834f, 29.37864f, -2096.8213f, 2874.4233f, 57.80989f, 65.75f);
			break;
		
		case 14:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1877.4358f, 2783.1506f, 31.806177f, -1797.8734f, 2924.3696f, 1307.1106f, 88f);
			break;
		
		case 15:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1761.1156f, 2834.6511f, 31.806217f, -1720.8875f, 2906.4192f, 1281.8063f, 88f);
			break;
		
		case 16:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1761.4933f, 2817.68f, 32.37125f, -1769.7045f, 2913.7344f, 1281.8066f, 88f);
			break;
		
		case 17:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1879.297f, 2772.6526f, 29.57795f, -1864.5205f, 2825.4724f, 1281.8062f, 88f);
			break;
		
		case 18:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2676.74f, 3366.9875f, 29.923937f, -2744.7896f, 3340.3467f, 1037.8038f, 9f);
			break;
		
		case 19:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2676.74f, 3366.9875f, 29.923937f, -2744.7896f, 3340.3467f, 1037.8038f, 9.5f);
			break;
		
		case 20:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2807.3967f, 3264.2256f, 29.92764f, -2744.7896f, 3340.3467f, 1037.8038f, 9.5f);
			break;
		
		case 21:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2808.236f, 3264.6343f, 29.92764f, -2747.5503f, 3187.8f, 1037.4568f, 9.5f);
			break;
		
		case 22:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2530.9958f, 3064.151f, 29.71081f, -2748.5571f, 3189.9392f, 1037.4568f, 9.5f);
			break;
		
		case 23:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2533.9016f, 3062.4907f, 29.707146f, -2520.674f, 2996.8174f, 1037.4572f, 9.5f);
			break;
		
		case 24:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2500.7163f, 2927.1028f, 29.45663f, -2445.696f, 2896.6575f, 1037.68f, 9.5f);
			break;
		
		case 25:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2020.5427f, 2810.7468f, 29.45658f, -1927.949f, 2785.7788f, 1037.6705f, 9.5f);
			break;
		
		case 26:
			iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2261.8992f, 3376.5488f, 29.77859f, -2141.0674f, 3376.773f, 1037.9001f, 9.5f);
			break;
	}
	return iVar0;
}

int func_151()//Position - 0x5BB1
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1773.944f, 3287.3342f, 30f, -2029.7765f, 2845.0833f, 1250f, 255f))
	{
		return 0;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2725.8894f, 3291.0986f, 30f, -2009.1815f, 2879.8352f, 1250f, 180f))
	{
		return 1;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2442.0261f, 3326.6987f, 30f, -2033.9279f, 3089.0488f, 1250f, 205f))
	{
		return 2;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1917.1654f, 3374.209f, 30f, -2016.7909f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2192.753f, 3373.2778f, 30f, -2191.5444f, 3150.4165f, 1250f, 150f))
	{
		return 4;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2077.6633f, 3344.5142f, 30f, -2191.5444f, 3150.4165f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2861.7554f, 3352.6606f, 30f, -2715.8708f, 3269.9155f, 1250f, 90f))
	{
		return 6;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2005.5745f, 3364.5327f, 30f, -1977.5688f, 3330.8882f, 1250f, 100f))
	{
		return 7;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1682.235f, 3004.2852f, 30f, -1942.747f, 2947.4412f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2393.2954f, 2936.406f, 31.680103f, -2453.0366f, 3006.863f, 52.310028f, 128f))
	{
		return 9;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2347.1848f, 3023.8298f, 31.56573f, -2517.3298f, 2989.0635f, 49.956444f, 127.25f))
	{
		return 10;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2259.9219f, 3358.0398f, 29.999718f, -2299.772f, 3385.79f, 38.060143f, 16f))
	{
		return 11;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2476.3093f, 3363.914f, 31.679329f, -2431.9807f, 3287.6694f, 39.978264f, 214.25f))
	{
		return 12;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2103.0813f, 2797.7834f, 29.37864f, -2096.8213f, 2874.4233f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1877.4358f, 2783.1506f, 31.806177f, -1797.8734f, 2924.3696f, 1307.1106f, 88f))
	{
		return 14;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1761.1156f, 2834.6511f, 31.806217f, -1720.8875f, 2906.4192f, 1281.8063f, 88f))
	{
		return 15;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1761.4933f, 2817.68f, 32.37125f, -1769.7045f, 2913.7344f, 1281.8066f, 88f))
	{
		return 16;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -1879.297f, 2772.6526f, 29.57795f, -1864.5205f, 2825.4724f, 1281.8062f, 88f))
	{
		return 17;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2676.74f, 3366.9875f, 29.923937f, -2744.7896f, 3340.3467f, 1037.8038f, 9f))
	{
		return 18;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2676.74f, 3366.9875f, 29.923937f, -2744.7896f, 3340.3467f, 1037.8038f, 9.5f))
	{
		return 19;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2807.3967f, 3264.2256f, 29.92764f, -2744.7896f, 3340.3467f, 1037.8038f, 9.5f))
	{
		return 20;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2808.236f, 3264.6343f, 29.92764f, -2747.5503f, 3187.8f, 1037.4568f, 9.5f))
	{
		return 21;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2530.9958f, 3064.151f, 29.71081f, -2748.5571f, 3189.9392f, 1037.4568f, 9.5f))
	{
		return 22;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2533.9016f, 3062.4907f, 29.707146f, -2520.674f, 2996.8174f, 1037.4572f, 9.5f))
	{
		return 23;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2500.7163f, 2927.1028f, 29.45663f, -2445.696f, 2896.6575f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2020.5427f, 2810.7468f, 29.45658f, -1927.949f, 2785.7788f, 1037.6705f, 9.5f))
	{
		return 25;
	}
	else if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(iLocal_574, -2261.8992f, 3376.5488f, 29.77859f, -2141.0674f, 3376.773f, 1037.9001f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_152(var uParam0, int iParam1)//Position - 0x6146
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_153()//Position - 0x62BB
{
	int iVar0;
	
	if (func_156(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 0;
	}
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_155(1))
	{
		iVar0 = func_154();
		if (iVar0 != func_40())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_154()//Position - 0x6309
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_155(bool bParam0)//Position - 0x631E
{
	return func_58(PLAYER::PLAYER_ID(), bParam0);
}

int func_156(int iParam0, int iParam1)//Position - 0x6330
{
	if (func_31(iParam0) == iParam1)
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_475;
	}
	return -1;
}

int func_157()//Position - 0x6355
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_156(PLAYER::PLAYER_ID(), 150) == 2)
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_155(1))
	{
		iVar0 = func_154();
		if (iVar0 != func_40())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_39(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (func_155(1))
				{
					if (func_159(PLAYER::PLAYER_ID(), iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_158(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_PED(iVar2)))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false);
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::GET_PLAYER_PED(iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_158(int iParam0, int iParam1)//Position - 0x6434
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_159(int iParam0, int iParam1)//Position - 0x64B0
{
	int iVar0;
	
	iVar0 = func_160(iParam0);
	if (func_27(iVar0))
	{
		if (iVar0 == func_160(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x64D9
{
	if (func_27(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_40();
}

int func_161()//Position - 0x64FC
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_167())
	{
		return 1;
	}
	if (func_166(159))
	{
		if (!func_165())
		{
			return 1;
		}
	}
	if (func_166(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_162() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_162()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_162()//Position - 0x6580
{
	switch (func_164())
	{
		case 0:
			return func_163();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_163()//Position - 0x65B3
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_164()//Position - 0x65D7
{
	return Global_32283;
}

bool func_165()//Position - 0x65E2
{
	return Global_2683883.f_698;
}

int func_166(int iParam0)//Position - 0x65F1
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_167()//Position - 0x6608
{
	return Global_2694576;
}

bool func_168()//Position - 0x6614
{
	return Global_2683883.f_693;
}

void func_169()//Position - 0x6623
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 5)
	{
		if (func_176(5, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 5)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != 3)
	{
		if (func_170(3, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= 3)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
			}
		}
	}
}

bool func_170(int iParam0, bool bParam1, bool bParam2)//Position - 0x666F
{
	return func_171(1, iParam0, 1, bParam1, bParam2);
}

int func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6683
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666708, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_175(iParam0) - func_174(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_174(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_175(iParam0) - func_173(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_174(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_175(iParam0) - func_174(iParam0, 1));
		}
		if (!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 3)
		{
			iVar1 = (iVar1 - func_172(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x6749
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

int func_173(int iParam0)//Position - 0x6783
{
	switch (iParam0)
	{
		case 0:
			return Global_1666708.f_1;
			break;
		
		case 1:
			return Global_1666708.f_2;
			break;
		
		case 2:
			return Global_1666708.f_3;
			break;
	}
	return 0;
}

int func_174(int iParam0, bool bParam1)//Position - 0x67C9
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x6866
{
	switch (iParam0)
	{
		case 0:
			return Global_1666716;
			break;
		
		case 1:
			return Global_1666717;
			break;
		
		case 2:
			return Global_1666718;
			break;
	}
	return 0;
}

bool func_176(int iParam0, bool bParam1, bool bParam2)//Position - 0x68A6
{
	return func_171(0, iParam0, 1, bParam1, bParam2);
}

void func_177()//Position - 0x68BA
{
	SYSTEM::WAIT(0);
}

void func_178()//Position - 0x68C7
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_126())
			{
				func_127();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_383.f_172[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_383.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_571)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		iLocal_571 = 0;
	}
	Global_1963712 = 0;
	func_180();
	func_179();
}

void func_179()//Position - 0x6933
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_180()//Position - 0x693F
{
	if (!Local_383.f_176)
	{
		return;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Marine_01"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("lazer")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Pilot_01")))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Pilot_01"));
	}
}

void func_181(struct<21> Param0)//Position - 0x6992
{
	func_185(func_186(Param0.f_0), Param0);
	func_183(0, -1, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(5);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(3);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_99, 27, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_126, 257, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_182())
	{
		func_178();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_178();
	}
	Global_2794162.f_6858 = 0;
}

int func_182()//Position - 0x69F3
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
		if (func_168())
		{
			return 0;
		}
		if (func_166(157))
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

int func_183(int iParam0, int iParam1, bool bParam2)//Position - 0x6A4C
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_179();
			}
			else
			{
				return 0;
			}
		}
		if (!func_184(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_179();
					}
					else
					{
						return 0;
					}
				}
				if (func_168())
				{
					if (!bParam2)
					{
						func_179();
					}
					else
					{
						return 0;
					}
				}
				if (func_166(157))
				{
					if (!bParam2)
					{
						func_179();
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
					func_179();
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
				func_179();
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
			func_179();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_184(bool bParam0)//Position - 0x6B62
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_185(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x6B73
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_179();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_186(int iParam0)//Position - 0x6B92
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
		
		case 180:
			return 32;
		
		case 181:
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
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_187(func_188(iParam0, 1)))
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

int func_187(int iParam0)//Position - 0x731D
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
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_188(int iParam0, bool bParam1)//Position - 0x752B
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
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
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

