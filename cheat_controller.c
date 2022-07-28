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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_113();
	}
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1(PLAYER::PLAYER_ID(), 1, 1)) && !Global_1836373) && Global_31959 == 0)
		{
			func_113();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)//Position - 0x127
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_2()//Position - 0x187
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)//Position - 0x1A1
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)//Position - 0x1F6
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_68, false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_68, true) };
						fVar1 = ENTITY::GET_ENTITY_HEADING(iLocal_68);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), true, false, false, true);
						bVar2 = true;
					}
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
				}
				fVar1 = (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f);
			}
			if (func_18(iParam0, Var0, fVar1))
			{
				iLocal_68 = VEHICLE::CREATE_VEHICLE(iParam0, Var0, fVar1, false, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68, 5f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)//Position - 0x339
{
	if (!func_15(14) && !func_14(""))
	{
		MISC::SET_BIT(&Global_32209, iParam0);
		Global_32212 = 1;
		func_6();
	}
}

void func_6()//Position - 0x36C
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)//Position - 0x3BA
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

int func_8()//Position - 0x3DD
{
	func_9();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_9()//Position - 0x3F6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_15(14) || Global_112337))
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

bool func_10(int iParam0)//Position - 0x4F3
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x4FF
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

int func_12(int iParam0)//Position - 0x53C
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

var func_13(int iParam0)//Position - 0x561
{
	return Global_1998[iParam0 /*29*/];
}

int func_14(char* sParam0)//Position - 0x570
{
	if (iLocal_84 != 0)
	{
		if (func_15(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP") && INTERIOR::IS_INTERIOR_SCENE())
			{
				return 0;
			}
			if ((MISC::ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON") && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)//Position - 0x5DA
{
	return Global_43052 == iParam0;
}

void func_16(char* sParam0)//Position - 0x5E8
{
	if (func_14(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_ACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}
}

void func_17(int iParam0)//Position - 0x61A
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_18(int iParam0, struct<3> Param1, float fParam2)//Position - 0x63A
{
	struct<3> Var0[9];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var1, &Var2);
	Var3.f_0 = (MISC::ABSF((Var2.f_0 - Var1.f_0)) / 2f);
	Var3.f_1 = (MISC::ABSF((Var2.f_1 - Var1.f_1)) / 2f);
	Var3.f_2 = (MISC::ABSF((Var2.f_2 - Var1.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, -Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[4 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, -Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[5 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, -Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[6 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[7 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, Var3.f_0, Var3.f_1, Var3.f_2) };
	Var0[8 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param1, fParam2, -Var3.f_0, Var3.f_1, Var3.f_2) };
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param1))
	{
		return 0;
	}
	iVar13 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(func_19(PLAYER::PLAYER_ID()) + Vector(1f, 0f, 0f), Param1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[5 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[6 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[1 /*3*/], Var0[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(Var0[2 /*3*/], Var0[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(int iParam0)//Position - 0x8F6
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_20(int iParam0)//Position - 0x909
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(char* sParam0)//Position - 0x92C
{
	if (!func_15(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DENIED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}
}

void func_22()//Position - 0x958
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()//Position - 0x984
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			MISC::SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)//Position - 0xA23
{
	if (func_14(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CHEAT_DEACTIVATED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}
}

void func_25()//Position - 0xA4E
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (PAD::IS_CONTROL_PRESSED(2, 25))
		{
			if (func_26(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed") && func_26(PLAYER::PLAYER_PED_ID()) != joaat("object"))
			{
				MISC::SET_TIME_SCALE(fLocal_78);
			}
			else
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		else
		{
			MISC::SET_TIME_SCALE(1f);
		}
	}
}

int func_26(int iParam0)//Position - 0xAA5
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_27(bool bParam0)//Position - 0xAB9
{
	if (BitTest(Global_32207, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()//Position - 0xACF
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0xB35
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_99.f_58[iParam0];
}

void func_30()//Position - 0xB62
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(int iParam0, bool bParam1)//Position - 0xBD2
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32208, iParam0);
		func_5(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32208, iParam0);
	}
}

void func_32()//Position - 0xBFA
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			PAD::DISABLE_CONTROL_ACTION(2, 37, true);
			PAD::DISABLE_CONTROL_ACTION(2, 19, true);
			if ((((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || func_34()) || func_33(1)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 37)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			PAD::DISABLE_CONTROL_ACTION(2, 37, true);
			PAD::DISABLE_CONTROL_ACTION(2, 19, true);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)//Position - 0xCE1
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_34()//Position - 0xD0A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

void func_35()//Position - 0xD26
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			MISC::SET_TIME_SCALE(0.6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			MISC::SET_TIME_SCALE(0.4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			MISC::SET_TIME_SCALE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()//Position - 0xD99
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, false, true);
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false);
			fVar2 = (fVar2 + 500f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
			iLocal_72 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 144, true);
				PAD::DISABLE_CONTROL_ACTION(0, 149, true);
				if (func_8() == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				}
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_72 = MISC::GET_GAME_TIMER();
				func_16("CHEAT_SKYFALL");
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			PAD::DISABLE_CONTROL_ACTION(0, 144, true);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()//Position - 0xF99
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
}

int func_38(int iParam0, int iParam1)//Position - 0xFDE
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()//Position - 0xFFF
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			break;
		
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_19(PLAYER::PLAYER_ID()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (MISC::GET_GAME_TIMER() - iLocal_74);
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x117A
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		func_41(7, iVar0);
		Global_1649593.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = iParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1)//Position - 0x12D7
{
	MISC::SET_BIT(&(Global_1649593.f_7009[iParam0]), iParam1);
}

int func_42(int iParam0, int iParam1)//Position - 0x12F0
{
	return BitTest(Global_1649593.f_7009[iParam0], iParam1);
}

void func_43()//Position - 0x1306
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()//Position - 0x13AD
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()//Position - 0x1450
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(PLAYER::PLAYER_PED_ID());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(PLAYER::PLAYER_PED_ID());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)//Position - 0x152A
{
	CAM::_0x487A82C650EB7799(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44216))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_44216))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_44216);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_44204))
	{
		if (CAM::IS_CAM_SHAKING(Global_44204))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44204, 0f);
			CAM::STOP_CAM_SHAKING(Global_44204, true);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
	StringCopy(&Global_44216, "", 64);
	StringCopy(&Global_44232, "", 16);
	func_47();
}

void func_47()//Position - 0x1606
{
	Global_44203 = 0;
	Global_44204 = 0;
	Global_44205 = 0;
	Global_44206 = 30000;
	Global_44207 = 0f;
	Global_44209 = 0f;
	Global_44208 = 0f;
	Global_44210 = 1f;
	Global_44211 = 0f;
	StringCopy(&Global_44212, "", 16);
}

void func_48(int iParam0)//Position - 0x163C
{
	int iVar0;
	
	if (!Global_44203)
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	Global_44205 = (iVar0 + iParam0);
	Global_44206 = iParam0;
}

void func_49(int iParam0)//Position - 0x1661
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44024[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)//Position - 0x16BA
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_43998[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_43998[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44236 = 0;
		}
	}
	Global_43998[iParam0 /*5*/] = 13;
	Global_43998[iParam0 /*5*/].f_1 = 0;
	Global_43998[iParam0 /*5*/].f_2 = 0;
	Global_43998[iParam0 /*5*/].f_3 = 0;
	Global_43998[iParam0 /*5*/].f_4 = 0;
	Global_43996 = (Global_43996 - 1);
	if (Global_43996 < 0)
	{
		Global_43996 = 0;
	}
}

int func_51(int iParam0)//Position - 0x173D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)//Position - 0x176E
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1783
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = iParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()//Position - 0x1805
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44105[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1836
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)//Position - 0x1851
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44105[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44105[iVar0 /*6*/])
			{
				if (iParam1 == Global_44105[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)//Position - 0x189D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x18E6
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x18FC
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_44203)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_44202));
	}
	if (CAM::DOES_CAM_EXIST(iParam4))
	{
		CAM::SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_44204 = iParam4;
	}
	else
	{
		Global_44204 = 0;
	}
	Global_44203 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_44205 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_44205 = -1;
		}
	}
	Global_44206 = uParam1;
	Global_44207 = fParam2;
	Global_44209 = fParam3;
	Global_44208 = fParam3;
}

int func_60(int iParam0)//Position - 0x19B7
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)//Position - 0x19C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_43998[iVar2 /*5*/] = 0;
	Global_43998[iVar2 /*5*/].f_1 = iParam0;
	Global_43998[iVar2 /*5*/].f_2 = iParam1;
	Global_43998[iVar2 /*5*/].f_3 = iParam1;
	Global_43998[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_44236 = 1;
	}
	Global_43996++;
	return 1;
}

int func_62()//Position - 0x1A83
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_43998[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)//Position - 0x1AB2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
		{
			return Global_44024[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_64()//Position - 0x1AF3
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()//Position - 0x1B9A
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(bool bParam0)//Position - 0x1C65
{
	if (BitTest(Global_32208, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()//Position - 0x1C7B
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			MISC::SET_GRAVITY_LEVEL(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()//Position - 0x1CB8
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()//Position - 0x1CEC
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_70()//Position - 0x1D64
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x1D85
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_72()//Position - 0x1DDC
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), (iVar0 - 1), false);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()//Position - 0x1E7F
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iVar0 < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar0 + 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()//Position - 0x1F2E
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_75())) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()//Position - 0x1FD5
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_76()//Position - 0x1FE5
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), (PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID())));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						VEHICLE::SET_VEHICLE_FIXED(iVar0);
					}
				}
			}
		}
	}
}

void func_77()//Position - 0x20BD
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()//Position - 0x224C
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_knife"), -1, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 300, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 300, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), 150, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), 30, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenade"), 5, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_79()//Position - 0x2321
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()//Position - 0x23C9
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())))
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				}
				else
				{
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
				}
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
		
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()//Position - 0x24B2
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
							{
								if (func_82(1))
								{
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, true);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
							{
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, false);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, false))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(iLocal_69, false);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)//Position - 0x25D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
					if (VEHICLE::IS_BIG_VEHICLE(iVar0))
					{
						return 0;
					}
					sVar4 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar3);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						if (MISC::GET_HASH_KEY(sVar4) == MISC::GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x27DA
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x2848
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_85(int iParam0, int iParam1)//Position - 0x2920
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)//Position - 0x2962
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113386.f_9085.f_99.f_58[128] && !Global_113386.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113386.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113386.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()//Position - 0x2BBE
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(22)) || func_27(0)) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_47 = 9;
				return;
			}
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()//Position - 0x2C67
{
	if ((func_111() || iLocal_84 != 0) || func_15(14))
	{
		PAD::DISABLE_CONTROL_ACTION(2, 243, true);
	}
	func_110();
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_34() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_107(988027572, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || MISC::_HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()//Position - 0x33CB
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()//Position - 0x3437
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()//Position - 0x34AE
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false)) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()//Position - 0x3587
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()//Position - 0x35F3
{
	struct<3> Var0;
	
	Var0 = { func_19(PLAYER::PLAYER_ID()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()//Position - 0x367D
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()//Position - 0x36F2
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()//Position - 0x3769
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()//Position - 0x37E0
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()//Position - 0x3857
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()//Position - 0x38CA
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()//Position - 0x393D
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()//Position - 0x3998
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()//Position - 0x39FD
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

void func_103(int iParam0, char* sParam1)//Position - 0x3AB5
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("barry1")) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)//Position - 0x3B4F
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_105(int iParam0, int iParam1)//Position - 0x3BA7
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113386.f_32749[iParam0], iParam1);
}

int func_106(bool bParam0, int iParam1)//Position - 0x3BC7
{
	if (BitTest(Global_32210, bParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32211)
			{
				MISC::CLEAR_BIT(&Global_32210, bParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_32210, bParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x3C11
{
	if (!func_15(14))
	{
		return MISC::_HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(iParam0, iParam1);
	}
	return 0;
}

void func_108()//Position - 0x3C2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()//Position - 0x3C65
{
	if (((Global_100441 == 13 || Global_100441 == 10) || Global_100441 == 11) || Global_100441 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()//Position - 0x3CA3
{
	if (func_15(14) || (!CAM::IS_SCREEN_FADED_IN() && iLocal_84 != 0))
	{
		iLocal_84 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_84 != 0)
	{
		if (!func_15(14))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_111()//Position - 0x3CEE
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

void func_112()//Position - 0x3D18
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_113()//Position - 0x3D40
{
	MISC::SET_RIOT_MODE_ENABLED(false);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_62 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		}
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}
	MISC::SET_GRAVITY_LEVEL(0);
	Global_32208 = 0;
	Global_32207 = 0;
	Global_32209 = 0;
	Global_32210 = 0;
	Global_32212 = 0;
	Global_32211 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

