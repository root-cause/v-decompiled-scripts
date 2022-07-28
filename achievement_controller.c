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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int* iLocal_59 = NULL;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int* iLocal_68 = NULL;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_62 = 1000;
	iLocal_63 = 3333;
	fLocal_64 = 0f;
	bLocal_71 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_57 = MISC::GET_GAME_TIMER();
	iLocal_66 = 0;
	func_171(iLocal_67);
	func_170();
	func_168(&Global_4541529);
	func_167(&Global_4541529, 1);
	func_165(&iLocal_68);
	while (true)
	{
		if (Global_32209 != iLocal_66)
		{
			if (iLocal_66 == 0 && Global_32209 != 0)
			{
				if (MISC::IS_PS3_VERSION() || func_164())
				{
					func_163("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_163("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_66 != 0 && Global_32209 == 0)
			{
			}
		}
		iLocal_66 = Global_32209;
		if (!func_162(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				func_153();
			}
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
			{
				func_151();
			}
			if (Global_31969)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					iVar0 = func_136(1);
					if (iVar0 > 0)
					{
						func_135(12, iVar0);
						STATS::STAT_SET_INT(joaat("num_gold_medals_obtained"), iVar0, true);
					}
					if (iVar0 >= 70)
					{
						func_129(12, 1);
					}
				}
				Global_31969 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_67++;
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						func_118(0);
						iLocal_57 = (MISC::GET_GAME_TIMER() + iLocal_62);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_58)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_65 == 1)
						{
							if (func_117(53))
							{
								func_116();
							}
						}
						iLocal_58 = (MISC::GET_GAME_TIMER() + iLocal_63);
					}
				}
			}
			func_108(&Global_4541529);
			func_1();
		}
		else
		{
			func_108(&Global_4541529);
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x20A
{
	bool bVar0;
	int iVar1;
	
	if (!func_107(&Global_4541529))
	{
		return;
	}
	if (!Global_78319)
	{
		if (iLocal_73)
		{
			iLocal_73 = 0;
		}
		return;
	}
	if (!func_104())
	{
		return;
	}
	if (bLocal_71)
	{
		if (!func_102(3, -1))
		{
			return;
		}
		if (!func_102(5, -1))
		{
			return;
		}
	}
	if (iLocal_73)
	{
		return;
	}
	bVar0 = SOCIALCLUB::_0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_72 == 0)
	{
	}
	if (bVar0 && iVar1 == 0)
	{
		func_101();
		iLocal_73 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x29A
{
	int iVar0;
	
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
	{
		if (func_98())
		{
			func_129(33, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_94(&iLocal_68) > 5f)
		{
			func_17(PLAYER::PLAYER_PED_ID());
			func_165(&iLocal_68);
		}
	}
	iVar0 = func_15(func_16(-1), 0);
	if (iVar0 >= 100)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
		{
			func_129(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
		{
			func_129(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
		{
			func_129(34, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		func_13(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
	{
		if (func_12(joaat("mpply_total_custom_races_won")) >= 5)
		{
			func_129(38, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
	{
		if (func_11(48, -1) >= 10)
		{
			func_129(39, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
	{
		if (func_11(52, -1) > 0)
		{
			func_129(40, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
	{
		if (BitTest(Global_2815059.f_2290.f_18, 1))
		{
			func_129(41, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
	{
		if (func_10(756, -1, 0) >= 30)
		{
			func_129(43, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
	{
		if (func_11(14, -1) >= 20)
		{
			func_129(44, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		func_8(0);
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
	{
		if (func_7(11, -1))
		{
			func_129(48, 1);
		}
	}
	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)//Position - 0x439
{
	if (!func_104())
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_129(49, 1);
	return 1;
}

int func_4(int iParam0, int iParam1)//Position - 0x4B4
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_5(var uParam0)//Position - 0x4E0
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

int func_6()//Position - 0x514
{
	return Global_1574918;
}

bool func_7(int iParam0, int iParam1)//Position - 0x520
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_8(bool bParam0)//Position - 0x53C
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!func_104())
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	uVar2 = func_10(757, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_9(uVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_129(45, 1);
		return 1;
	}
	return 0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x5AE
{
	var uVar0;
	
	uVar0 = BitTest(uParam0, iParam1);
	if (!bParam2)
	{
		return uVar0;
	}
	switch (iParam1)
	{
		case 0:
			return uVar0;
		
		case 1:
			return uVar0;
		
		case 2:
			return uVar0;
		
		case 3:
			return uVar0;
		
		case 4:
			return uVar0;
		
		case 5:
			return uVar0;
		
		case 6:
			return uVar0;
		
		case 7:
			return uVar0;
		
		case 8:
			return uVar0;
		
		default:
	}
	return 0;
}

int func_10(int iParam0, int iParam1, int iParam2)//Position - 0x633
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

int func_11(int iParam0, int iParam1)//Position - 0x670
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2868734[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x69C
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

int func_13(bool bParam0)//Position - 0x6BA
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
	{
		return 0;
	}
	if (!func_104())
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_11(21, -1);
		iVar0 = (iVar0 - func_11(58, -1));
		iVar0 = (iVar0 - func_11(57, -1));
	}
	if (func_14(8, -1))
	{
		func_129(37, 1);
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1)//Position - 0x724
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_5(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)//Position - 0x750
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
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
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

int func_16(int iParam0)//Position - 0x80F
{
	return Global_1659759[func_5(iParam0)];
}

void func_17(int iParam0)//Position - 0x823
{
	int iVar0;
	struct<222> Var1;
	
	Var1 = 44;
	Var1.f_221 = 51;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		return;
	}
	func_90(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_0)
	{
		if (func_18(iParam0, Var1[iVar0 /*5*/]))
		{
			func_129(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_221)
	{
		if (func_18(iParam0, Var1.f_221[iVar0 /*5*/]))
		{
			func_129(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_18(int iParam0, int iParam1)//Position - 0x8B2
{
	var* uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		return 0;
	}
	iVar1 = func_89(iParam1, &uVar0);
	if (((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1) < 3))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	while (func_21(&Var7, iParam1, iVar6, 0))
	{
		if (Var7.f_4 == joaat("WAPClip"))
		{
			iVar3++;
		}
		if (Var7.f_4 == joaat("WAPScop"))
		{
			iVar2++;
		}
		if (func_19(iParam0, iParam1, Var7.f_0))
		{
			if (Var7.f_4 == joaat("WAPClip"))
			{
				iVar5 = Var7.f_6;
			}
			else if (Var7.f_4 == joaat("WAPScop"))
			{
				iVar4 = Var7.f_6;
			}
		}
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == -31573710)
		{
		}
		else
		{
			return 0;
		}
		iVar6++;
	}
	if (iVar2 > iVar4)
	{
		return 0;
	}
	if (iVar3 > iVar5)
	{
		return 0;
	}
	if (WEAPON::GET_WEAPON_TINT_COUNT(iParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

int func_19(int iParam0, int iParam1, int iParam2)//Position - 0xB32
{
	if (func_20(iParam0))
	{
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iParam2);
	}
	return 0;
}

int func_20(int iParam0)//Position - 0xB51
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

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB72
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
	int iVar12;
	int iVar13;
	int iVar14;
	var* uVar15;
	struct<4> Var16;
	
	func_88(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_appistol_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_microsmg_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_88(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_88(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_88(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_raypistol_varmod_xmas18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("component_ceramicpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("component_ceramicpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("component_ceramicpistol_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_CAMO1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_TACTICALRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH_REH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_89(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar12))
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar12, iVar13, &Var16))
					{
						if (!func_76(Var16.f_3))
						{
							if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16.f_0 == 1731751835)
							{
								iVar7++;
							}
							else if (Var16.f_0 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16.f_0 == -31573710)
							{
								iVar9++;
							}
							else if (Var16.f_0 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16.f_0 == joaat("WAPClip") || Var16.f_0 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16.f_0 == joaat("WAPFlshLasr") || Var16.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16.f_0 == joaat("WAPScop") || Var16.f_0 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16.f_0 == joaat("WAPRail") || Var16.f_0 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16.f_0 == joaat("WAPGrip") || Var16.f_0 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16.f_0 == joaat("WAPSupp") || Var16.f_0 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16.f_0 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var16.f_0 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16.f_0 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var16.f_0 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_88(uParam0, Var16.f_3, Var16.f_0, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)//Position - 0x5C63
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var* uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_89(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar2))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar2, iVar3, &Var5))
						{
							if (!func_76(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_71(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_75() && (func_74() || func_73()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2894));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_11039;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21237;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_262145.f_21124;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_21125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12428;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_11038;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413));
						break;
					
					case joaat("component_appistol_varmod_security"):
						iVar0 = Global_262145.f_31993;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2898));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_11042;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423));
						break;
					
					case joaat("component_microsmg_varmod_security"):
						iVar0 = Global_262145.f_31992;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_16642;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_11041;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21238;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2901));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_16637;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11035;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21240;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2902));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_16636;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4372));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4373));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_11037;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21241;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2904));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11036;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4412));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2905));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_12429;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4422));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2906));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4402));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12430;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21239;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_12425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22961;
						break;
					
					case joaat("component_pumpshotgun_varmod_security"):
						iVar0 = Global_262145.f_31990;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2908));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4388));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4389));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4390));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11044;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21242;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4400));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4401));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2900));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12426;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4362));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_7060;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_7639;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12427;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22966;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_7644;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_16639;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7647;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_7643;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7641;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7646;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_12431;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22962;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_7645;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_7649;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7642;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_7669;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_7652;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7655;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7650;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_7651;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7653;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_12432;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22965;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_8127;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8128;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_8856;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_16643;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8857;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_8858;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8859;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_8862;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8863;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_8865;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8866;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8867;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22963;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15134));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4387));
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_11040;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425));
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_11043;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_11365;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4432));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_11366;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_11367;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_11368;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4435));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_11369;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4436));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_11370;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4437));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_11371;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4438));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_11372;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4439));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_11373;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4440));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_11390;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4442));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_16641;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_11391;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4443));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_13273;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_13274;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_13331;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_13272;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22964;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_15064;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_16638;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_minismg"):
				switch (iParam1)
				{
					case joaat("component_minismg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_minismg_clip_02"):
						iVar0 = Global_262145.f_19087;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_21120;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_16640;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21121;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_21123;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_21122;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21243;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21244;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21245;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21246;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21247;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21248;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21249;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21250;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21251;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21252;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_21253;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21254;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21255;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21256;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21257;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21258;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21259;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21260;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21261;
						break;
					
					case joaat("component_at_ar_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_barrel_02"):
						iVar0 = Global_262145.f_21262;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21263;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21264;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21265;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21266;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21267;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21268;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21269;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21270;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21271;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21272;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21273;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21274;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21275;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21276;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21277;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21278;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21279;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21280;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21281;
						break;
					
					case joaat("component_at_cr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_cr_barrel_02"):
						iVar0 = Global_262145.f_21282;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				switch (iParam1)
				{
					case joaat("component_combatmg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatmg_mk2_clip_02"):
						iVar0 = Global_262145.f_21283;
						break;
					
					case joaat("component_combatmg_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21284;
						break;
					
					case joaat("component_combatmg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21285;
						break;
					
					case joaat("component_combatmg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21286;
						break;
					
					case joaat("component_combatmg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21287;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21288;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21289;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21290;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21291;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21292;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21293;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21294;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21295;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21296;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21297;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21298;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21299;
						break;
					
					case joaat("component_at_mg_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mg_barrel_02"):
						iVar0 = Global_262145.f_21300;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavysniper_mk2_clip_02"):
						iVar0 = Global_262145.f_21301;
						break;
					
					case joaat("component_heavysniper_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21302;
						break;
					
					case joaat("component_heavysniper_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21304;
						break;
					
					case joaat("component_heavysniper_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21305;
						break;
					
					case joaat("component_heavysniper_mk2_clip_explosive"):
						iVar0 = Global_262145.f_21303;
						break;
					
					case joaat("component_at_scope_large_mk2"):
						iVar0 = Global_262145.f_21306;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_scope_nv"):
						iVar0 = Global_262145.f_21307;
						break;
					
					case joaat("component_at_scope_thermal"):
						iVar0 = Global_262145.f_21308;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_21309;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_21310;
						break;
					
					case joaat("component_at_muzzle_09"):
						iVar0 = Global_262145.f_21311;
						break;
					
					case joaat("component_at_sr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sr_barrel_02"):
						iVar0 = Global_262145.f_21312;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_pistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol_mk2_clip_02"):
						iVar0 = Global_262145.f_21313;
						break;
					
					case joaat("component_pistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21315;
						break;
					
					case joaat("component_pistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21314;
						break;
					
					case joaat("component_pistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21316;
						break;
					
					case joaat("component_pistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21317;
						break;
					
					case joaat("component_at_pi_flsh_02"):
						iVar0 = Global_262145.f_21318;
						break;
					
					case joaat("component_at_pi_rail"):
						iVar0 = Global_262145.f_21319;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_21320;
						break;
					
					case joaat("component_at_pi_comp"):
						iVar0 = Global_262145.f_21321;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				switch (iParam1)
				{
					case joaat("component_smg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_smg_mk2_clip_02"):
						iVar0 = Global_262145.f_21322;
						break;
					
					case joaat("component_smg_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21324;
						break;
					
					case joaat("component_smg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21323;
						break;
					
					case joaat("component_smg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21325;
						break;
					
					case joaat("component_smg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21326;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21327;
						break;
					
					case joaat("component_at_sights_smg"):
						iVar0 = Global_262145.f_21328;
						break;
					
					case joaat("component_at_scope_macro_02_smg_mk2"):
						iVar0 = Global_262145.f_21329;
						break;
					
					case joaat("component_at_scope_small_smg_mk2"):
						iVar0 = Global_262145.f_21330;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_21331;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21332;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21333;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21334;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21335;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21336;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21337;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21338;
						break;
					
					case joaat("component_at_sb_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sb_barrel_02"):
						iVar0 = Global_262145.f_21339;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				switch (iParam1)
				{
					case joaat("component_pumpshotgun_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22993;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_explosive"):
						iVar0 = Global_262145.f_22994;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22992;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22991;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23020;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23021;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_23022;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_23023;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_23024;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_23025;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_02"):
						iVar0 = Global_262145.f_22995;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22999;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22997;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22998;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22996;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23026;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23027;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_23028;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_23029;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_23030;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23031;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23032;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23033;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23034;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23035;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23036;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23037;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23038;
						break;
					
					case joaat("component_at_sc_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sc_barrel_02"):
						iVar0 = Global_262145.f_23039;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_snspistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_mk2_clip_02"):
						iVar0 = Global_262145.f_23910;
						break;
					
					case joaat("component_snspistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_23015;
						break;
					
					case joaat("component_snspistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_23017;
						break;
					
					case joaat("component_snspistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_23016;
						break;
					
					case joaat("component_snspistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_23014;
						break;
					
					case joaat("component_at_pi_flsh_03"):
						iVar0 = Global_262145.f_23071;
						break;
					
					case joaat("component_at_pi_rail_02"):
						iVar0 = Global_262145.f_23072;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_23073;
						break;
					
					case joaat("component_at_pi_comp_02"):
						iVar0 = Global_262145.f_23074;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_23000;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_23004;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_23002;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_23003;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_23001;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23040;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23041;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_23042;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom_mk2"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_23043;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23044;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23045;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23046;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23047;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23048;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23049;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23050;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23051;
						break;
					
					case joaat("component_at_mrfl_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mrfl_barrel_02"):
						iVar0 = Global_262145.f_23052;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				switch (iParam1)
				{
					case joaat("component_revolver_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_mk2_clip_tracer"):
						iVar0 = Global_262145.f_23005;
						break;
					
					case joaat("component_revolver_mk2_clip_fmj"):
						iVar0 = Global_262145.f_23006;
						break;
					
					case joaat("component_revolver_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_23008;
						break;
					
					case joaat("component_revolver_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_23007;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23053;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_23054;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_23055;
						break;
					
					case joaat("component_at_pi_comp_03"):
						iVar0 = Global_262145.f_23056;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_02"):
						iVar0 = Global_262145.f_23009;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_23013;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_23011;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_23012;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_23010;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_23057;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_23058;
						break;
					
					case joaat("component_at_scope_macro_02_mk2"):
						iVar0 = Global_262145.f_23059;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_23060;
						break;
					
					case joaat("component_at_bp_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_bp_barrel_02"):
						iVar0 = Global_262145.f_23070;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_23061;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_23062;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_23063;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_23064;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_23065;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_23066;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_23067;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_23068;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_23069;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381;
						break;
				}
				break;
			
			case joaat("weapon_raypistol"):
				switch (iParam1)
				{
					case joaat("component_raypistol_varmod_xmas18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_ceramicpistol"):
				switch (iParam1)
				{
					case joaat("component_ceramicpistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_ceramicpistol_clip_02"):
						iVar0 = Global_262145.f_28685;
						break;
					
					case joaat("component_ceramicpistol_supp"):
						iVar0 = Global_262145.f_28686;
						break;
				}
				break;
			
			case joaat("weapon_combatshotgun"):
				switch (iParam1)
				{
					case joaat("component_combatshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30824;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30825;
						break;
				}
				break;
			
			case joaat("weapon_gadgetpistol"):
				switch (iParam1)
				{
					case joaat("component_gadgetpistol_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_militaryrifle"):
				switch (iParam1)
				{
					case joaat("component_militaryrifle_clip_01"):
						iVar0 = Global_262145.f_30810;
						break;
					
					case joaat("component_militaryrifle_clip_02"):
						iVar0 = Global_262145.f_30811;
						break;
					
					case joaat("component_militaryrifle_sight_01"):
						iVar0 = Global_262145.f_30812;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_30813;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30814;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30815;
						break;
				}
				break;
			
			case joaat("weapon_heavyrifle"):
				switch (iParam1)
				{
					case joaat("component_heavyrifle_clip_01"):
						iVar0 = Global_262145.f_31958;
						break;
					
					case joaat("component_heavyrifle_clip_02"):
						iVar0 = Global_262145.f_31959;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_31991;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_31964;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_31962;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_31961;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_31963;
						break;
					
					case joaat("component_heavyrifle_sight_01"):
						iVar0 = Global_262145.f_31960;
						break;
				}
				break;
			
			case joaat("WEAPON_TACTICALRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_33124;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = Global_262145.f_33126;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_33127;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_33125;
						break;
				}
				break;
			
			default:
				iVar6 = func_89(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar6))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar6, iVar7, &Var9))
						{
							if (!func_76(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_69())
	{
		StringCopy(&Var11, func_67(iParam1, iParam0), 16);
		func_62(&sVar10, Var11, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_65(iParam0), func_64(iParam0), -1, 0, 0);
		if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), 1671640801, true);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_23(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)//Position - 0x95C3
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_69())
	{
		fVar1 = (fVar1 + func_61());
		fVar0 = (1f - fVar1);
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
		return fVar0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_78319)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_54 == 1)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132) / 100f));
		}
		if (iLocal_54 == 0)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132) / 100f));
				iLocal_54 = 1;
			}
			else
			{
				iLocal_54 = -1;
			}
		}
		fVar1 = (fVar1 + func_61());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_24()//Position - 0x96FC
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_104())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_131) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25()//Position - 0x975A
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1659620);
	iVar0 = (iVar0 + Global_1659623);
	return iVar0;
}

int func_26()//Position - 0x9776
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1659621);
	iVar0 = (iVar0 + Global_1659622);
	iVar0 = (iVar0 + Global_1659620);
	iVar0 = (iVar0 + Global_1659623);
	iVar0 = (iVar0 + Global_1659625);
	iVar0 = (iVar0 + Global_1659624);
	iVar0 = (iVar0 + func_12(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_12(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_12(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_12(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_12(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_12(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_12(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_12(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_12(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_27()//Position - 0x9834
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_51(joaat("mpply_started_mp")) };
	if (func_28(Var1, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_28(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x9878
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param1);
	iVar1 = func_39(Param0, iParam2);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_29(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x98B3
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return 1;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x99BF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0)//Position - 0x99D2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0)//Position - 0x99E5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0)//Position - 0x99F8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0)//Position - 0x9A0A
{
	return iParam0 & 15;
}

var func_35(int iParam0)//Position - 0x9A17
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_36(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)//Position - 0x9A39
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_37(int iParam0)//Position - 0x9A50
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
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1)//Position - 0x9B2C
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

var func_39(struct<7> Param0, int iParam1)//Position - 0x9BCE
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam1, 0, 0);
		if (iParam1 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
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
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9D90
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)//Position - 0x9DC8
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

void func_43(var uParam0, int iParam1)//Position - 0x9E4E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_44(var uParam0, int iParam1)//Position - 0x9E9F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)//Position - 0x9ED2
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(var uParam0, int iParam1)//Position - 0x9F0C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(var uParam0, int iParam1)//Position - 0x9F47
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(struct<7> Param0)//Position - 0x9F83
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_49(struct<6> Param0, var uParam1)//Position - 0x9FD9
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_42(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)//Position - 0xA04F
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_51(int iParam0)//Position - 0xA114
{
	int iVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_DATE(iVar0, &Var2, 7, -1))
	{
		return Var2;
	}
	return Var1;
}

int func_52(int iParam0)//Position - 0xA138
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)//Position - 0xA394
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)//Position - 0xA498
{
	return Global_113386.f_19147[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)//Position - 0xA4B4
{
	return iParam0 < 3;
}

int func_56()//Position - 0xA4C0
{
	func_57();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_57()//Position - 0xA4D9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_58(PLAYER::PLAYER_PED_ID());
			if (func_55(iVar0) && (!func_162(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_55(Global_113386.f_2363.f_539.f_4321))
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

int func_58(int iParam0)//Position - 0xA5D6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)//Position - 0xA613
{
	if (func_55(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_60(int iParam0)//Position - 0xA638
{
	return Global_1998[iParam0 /*29*/];
}

float func_61()//Position - 0xA647
{
	return Global_100493.f_2072;
}

void func_62(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA656
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_75446)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_75447)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_75448)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_75449)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_75450)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == func_63())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_63()//Position - 0xAC19
{
	return joaat("kosatka");
}

int func_64(int iParam0)//Position - 0xAC26
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 2;
			break;
	}
	return -1;
}

int func_65(int iParam0)//Position - 0xAC85
{
	return func_66(iParam0);
}

int func_66(int iParam0)//Position - 0xAC93
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_emplauncher"):
			return 89;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 90;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 91;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
	}
	return 0;
}

char* func_67(int iParam0, int iParam1)//Position - 0xB273
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("component_raypistol_varmod_xmas18"):
			return "WCT_VAR_RAY18";
			break;
		
		case joaat("component_ceramicpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_ceramicpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_ceramicpistol_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM";
			break;
		
		case joaat("component_microsmg_varmod_security"):
			return "WCT_VAR_WEED";
			break;
		
		case joaat("component_appistol_varmod_security"):
			return "WCT_VAR_STUD";
			break;
		
		case joaat("component_pumpshotgun_varmod_security"):
			return "WCT_VAR_BONE";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_89(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_68(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_68(var uParam0)//Position - 0xBA78
{
	return uParam0;
}

int func_69()//Position - 0xBA82
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_70())
	{
		return 1;
	}
	return 0;
}

int func_70()//Position - 0xBA9F
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_71(int iParam0)//Position - 0xBAB6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_72(iParam0))
	{
		return Global_262145.f_21232;
	}
	return 1;
}

int func_72(int iParam0)//Position - 0xBB18
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_73()//Position - 0xBB77
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (BitTest(Global_25, 6))
	{
		if (BitTest(Global_25, 2) || BitTest(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_74()//Position - 0xBC2D
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_75()//Position - 0xBD66
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

int func_76(int iParam0)//Position - 0xBE1E
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
			return 1;
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0xBEB9
{
	var uVar0;
	int iVar1;
	
	if (func_86())
	{
		return 0;
	}
	uVar0 = func_81(iParam0, iParam1, iParam2);
	iVar1 = func_79(iParam0, iParam1);
	return BitTest(uVar0, func_78(iVar1));
}

int func_78(int iParam0)//Position - 0xBEEB
{
	return (iParam0 % 32);
}

int func_79(int iParam0, int iParam1)//Position - 0xBEF8
{
	return func_80(iParam0, iParam1);
}

int func_80(int iParam0, int iParam1)//Position - 0xBF08
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
				
				case joaat("component_appistol_varmod_security"):
					return 569;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
				
				case joaat("component_microsmg_varmod_security"):
					return 570;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
				
				case joaat("component_pumpshotgun_varmod_security"):
					return 571;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam0)
			{
				case joaat("component_raypistol_varmod_xmas18"):
					return 554;
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam0)
			{
				case joaat("component_ceramicpistol_clip_01"):
					return 555;
					break;
				
				case joaat("component_ceramicpistol_clip_02"):
					return 556;
					break;
				
				case joaat("component_ceramicpistol_supp"):
					return 557;
					break;
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			switch (iParam0)
			{
				case joaat("component_combatshotgun_clip_01"):
					return 559;
				
				case joaat("component_at_ar_flsh"):
					return 560;
					break;
				
				case joaat("component_at_ar_supp"):
					return 561;
					break;
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			switch (iParam0)
			{
				case joaat("component_militaryrifle_clip_01"):
					return 562;
					break;
				
				case joaat("component_militaryrifle_clip_02"):
					return 563;
					break;
				
				case joaat("component_militaryrifle_sight_01"):
					return 564;
					break;
				
				case joaat("component_at_scope_small"):
					return 565;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 566;
					break;
				
				case joaat("component_at_ar_supp"):
					return 567;
					break;
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			switch (iParam0)
			{
				case joaat("component_gadgetpistol_clip_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
				
				case joaat("component_heavyrifle_sight_01"):
					return 572;
					break;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
					return 573;
					break;
				
				case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
					return 574;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH_REH"):
					return 575;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 576;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 577;
					break;
			}
			break;
	}
	return 0;
}

var func_81(int iParam0, int iParam1, int iParam2)//Position - 0xE303
{
	var uVar0;
	
	uVar0 = func_10(func_82(iParam0, iParam1), iParam2, 0);
	return uVar0;
}

int func_82(int iParam0, int iParam1)//Position - 0xE31E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_79(iParam0, iParam1);
	iVar1 = func_85(iVar0);
	if ((func_84() == 0 || func_83() == 0) || (func_84() == 999 && func_83() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10274;
				break;
		}
	}
	return 1755;
}

int func_83()//Position - 0xE492
{
	return Global_31960;
}

int func_84()//Position - 0xE49D
{
	return Global_31959;
}

int func_85(int iParam0)//Position - 0xE4A8
{
	return (iParam0 / 32);
}

bool func_86()//Position - 0xE4B5
{
	return Global_1575037;
}

int func_87(int iParam0)//Position - 0xE4C1
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
			return 1;
		
		default:
	}
	return 0;
}

void func_88(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE4FF
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_89(int iParam0, var* uParam1)//Position - 0xE51E
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

void func_90(int iParam0, var uParam1)//Position - 0xE559
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_93(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_93(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_92(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_92(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::_GET_NUM_DLC_WEAPONS_SP();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::_GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_91(Var7.f_1)) && iVar9 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::_0xA2C9AC24B4061285(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::_GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5))
					{
						if (FILES::_GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8))
						{
							if (!func_76(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_91(int iParam0)//Position - 0xE7E1
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_92(int iParam0, int iParam1)//Position - 0xE9A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_89(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_76(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
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

int func_93(int iParam0)//Position - 0xF54A
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

float func_94(int* iParam0)//Position - 0xF7BE
{
	if (func_97(iParam0))
	{
		if (func_96(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_95(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_95(bool bParam0)//Position - 0xF7FA
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

bool func_96(int* iParam0)//Position - 0xF852
{
	return BitTest(*iParam0, 2);
}

bool func_97(int* iParam0)//Position - 0xF85F
{
	return BitTest(*iParam0, 1);
}

int func_98()//Position - 0xF86C
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	return func_4(124, -1);
}

bool func_99()//Position - 0xF89C
{
	return Global_1575046;
}

bool func_100()//Position - 0xF8A8
{
	return Global_1575048;
}

void func_101()//Position - 0xF8B4
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_129(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_129(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 70;
	while (iVar0 <= 77)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			if (SOCIALCLUB::_SC_GET_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
			{
				func_129(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_102(int iParam0, int iParam1)//Position - 0xF948
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_103(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_103(int iParam0)//Position - 0xF971
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_104()//Position - 0xF9D4
{
	if (func_106() && func_105(0))
	{
		return 1;
	}
	return 0;
}

var func_105(int iParam0)//Position - 0xF9F2
{
	return Global_1574538[iParam0];
}

var func_106()//Position - 0xFA02
{
	return func_105(func_6() + 1);
}

bool func_107(var uParam0)//Position - 0xFA14
{
	return uParam0->f_79 == 1;
}

void func_108(var uParam0)//Position - 0xFA22
{
	float fVar0;
	
	fVar0 = Global_4541528;
	uParam0->f_80 = (uParam0->f_80 + MISC::GET_FRAME_TIME());
	if (!func_107(uParam0))
	{
		return;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
		return;
	}
	if (func_162(14))
	{
		fVar0 = 10f;
	}
	if (func_115(uParam0) < fVar0)
	{
		return;
	}
	if (func_113(uParam0, 0))
	{
		return;
	}
	if (func_111((*uParam0)[0]))
	{
		func_110(uParam0);
		func_109(uParam0);
		func_114(uParam0, 0);
	}
}

void func_109(var uParam0)//Position - 0xFAAA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_113(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_110(var uParam0)//Position - 0xFADB
{
	int iVar0;
	
	iVar0 = 1;
	if (func_113(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_111(int iParam0)//Position - 0xFB12
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
	{
		return 0;
	}
	if (func_162(14) && !func_112(iParam0))
	{
		return 0;
	}
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

int func_112(int iParam0)//Position - 0xFB5C
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

bool func_113(var uParam0, int iParam1)//Position - 0xFBAC
{
	return (*uParam0)[iParam1] == 78;
}

void func_114(var uParam0, float fParam1)//Position - 0xFBBD
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

float func_115(var uParam0)//Position - 0xFBDA
{
	return uParam0->f_80;
}

int func_116()//Position - 0xFBE6
{
	float fVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_78319)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			fVar0 = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
			if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
			{
				func_135(14, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_129(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)//Position - 0xFC5E
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

void func_118(bool bParam0)//Position - 0xFC8A
{
	if (Global_78319)
	{
		if (bParam0)
		{
			func_8(bParam0);
		}
		func_3(bParam0);
		func_13(bParam0);
		if (bParam0)
		{
		}
	}
	func_128(bParam0);
	func_121(bParam0);
	func_120();
	func_119();
	if (bParam0)
	{
		if (func_97(&iLocal_59))
		{
		}
	}
}

int func_119()//Position - 0xFCDE
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_129(50, 1);
		return 1;
	}
	return 0;
}

int func_120()//Position - 0xFD4C
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
	{
		return 0;
	}
	iVar0 = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();
	if (iVar0 > 0)
	{
		if (Global_32224 < iVar0)
		{
			if (Global_32224 >= 0)
			{
				func_135(22, iVar0);
			}
			Global_32224 = iVar0;
		}
	}
	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_129(22, 1);
		return 1;
	}
	return 0;
}

int func_121(bool bParam0)//Position - 0xFDA3
{
	var uVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
	{
		return 0;
	}
	uVar0[0] = func_127();
	uVar0[1] = func_126();
	uVar0[2] = func_125();
	uVar0[3] = func_124();
	uVar0[4] = func_123();
	uVar0[5] = func_122();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (uVar0[iVar2])
		{
			iVar1++;
		}
		iVar2++;
	}
	STATS::STAT_GET_INT(joaat("num_discipline_gold_earned"), &iVar3, -1);
	if (iVar1 > iVar3 && iVar1 > 0)
	{
		STATS::STAT_SET_INT(joaat("num_discipline_gold_earned"), iVar1, true);
		func_135(17, iVar1);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_129(17, 1);
	return 1;
}

int func_122()//Position - 0xFEC5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_113386.f_1988[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_113386.f_1988[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_113386.f_1988[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_123()//Position - 0xFF32
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_113386.f_19147[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_113386.f_19147[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_113386.f_19147[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124()//Position - 0xFFA8
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Global_113386.f_24976.f_1, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_125()//Position - 0xFFD9
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (BitTest(Global_113386.f_24979.f_2, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_126()//Position - 0x1000B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_113386.f_19016.f_19[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_127()//Position - 0x1003E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_113386.f_20011[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_128(bool bParam0)//Position - 0x1006F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_135(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_129(27, 1);
	return 1;
}

int func_129(int iParam0, int iParam1)//Position - 0x10126
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_130(iParam0, iParam1);
}

int func_130(int iParam0, int iParam1)//Position - 0x10141
{
	if (func_162(14) && !func_112(iParam0))
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
	if (func_107(&Global_4541529))
	{
		if (func_133(&Global_4541529, iParam0))
		{
			return 0;
		}
		if (func_131(&Global_4541529, iParam0))
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

int func_131(var uParam0, int iParam1)//Position - 0x101DE
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_162(14) && !func_112(iParam1))
	{
		return 0;
	}
	if (func_133(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	func_168(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_132(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_132(var uParam0, int iParam1)//Position - 0x1028F
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_162(14) && !func_112(iParam1))
	{
		return 0;
	}
	if (func_133(uParam0, iParam1))
	{
		return 0;
	}
	if (func_115(uParam0) < 0f)
	{
		func_114(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_113(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)//Position - 0x1030A
{
	return func_134(uParam0, iParam1) != -1;
}

int func_134(var uParam0, int iParam1)//Position - 0x1031C
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

int func_135(int iParam0, int iParam1)//Position - 0x10349
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

int func_136(bool bParam0)//Position - 0x1039A
{
	int iVar0;
	
	iVar0 = (func_149(bParam0) + func_137(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_137(bool bParam0)//Position - 0x103B8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_18574)
	{
		if (Global_113386.f_18574[iVar0 /*6*/].f_3 != -1 && func_147(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_145(iVar0, 7))
			{
				iVar7 = func_143(iVar0, 7, iVar5);
				if (!Global_63379[iVar7 /*13*/].f_7)
				{
					if (func_140(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_139(iVar4, iVar3, 0);
			iVar2 = func_138(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_113386.f_2352[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_138(float fParam0)//Position - 0x104AC
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_139(int iParam0, int iParam1, bool bParam2)//Position - 0x104E1
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_140(int iParam0)//Position - 0x10540
{
	if (func_141(iParam0, func_142(Global_63379[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)//Position - 0x10563
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_63379[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_113386.f_24904[4 /*4*/] == func_56())
	{
		Global_63379[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_63379[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_63379[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_63379[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x1062D
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STATS::STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

int func_143(int iParam0, int iParam1, int iParam2)//Position - 0x10656
{
	switch (iParam1)
	{
		case 1:
			return Global_91229[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_144(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_144(int iParam0, int iParam1)//Position - 0x10699
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_145(int iParam0, int iParam1)//Position - 0x10D7D
{
	switch (iParam1)
	{
		case 1:
			return Global_91229[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_146(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x10DB8
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_147(int iParam0, int iParam1)//Position - 0x10F69
{
	switch (iParam1)
	{
		case 1:
			return !BitTest(Global_91229[iParam0 /*34*/].f_15, 5);
			break;
		
		case 7:
			return func_148(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x10FA7
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

int func_149(bool bParam0)//Position - 0x112ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_9085.f_330)
	{
		if (Global_113386.f_9085.f_330[iVar0 /*6*/].f_3 != -1 && func_147(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_145(iVar0, 1))
			{
				iVar7 = func_143(iVar0, 1, iVar5);
				if (!Global_63379[iVar7 /*13*/].f_7)
				{
					if (func_140(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_150(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_139(iVar4, iVar3, 0);
			iVar2 = func_138(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_150(int iParam0)//Position - 0x11407
{
	int iVar0;
	
	iVar0 = func_142(Global_63379[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_151()//Position - 0x1142C
{
	int iVar0;
	int iVar1;
	
	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_129(25, 1);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_152(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("a_c_sharktiger"))
				{
					func_129(25, 1);
					return;
				}
			}
		}
	}
}

bool func_152(int iParam0)//Position - 0x114B5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_153()//Position - 0x114D3
{
	switch (iLocal_56)
	{
		case 0:
			fLocal_64 = 0f;
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == 0)
			{
				if (func_158() == 2)
				{
					func_165(&iLocal_59);
					iLocal_56++;
				}
			}
			break;
		
		case 1:
			if (func_157() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_156(&iLocal_59);
				iLocal_56 = 0;
				return;
			}
			if (MISC::GET_MISSION_FLAG() == 1)
			{
				func_156(&iLocal_59);
				iLocal_56 = 0;
				return;
			}
			if (func_158() < 2)
			{
				func_156(&iLocal_59);
				iLocal_56 = 0;
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_156(&iLocal_59);
				iLocal_56 = 0;
				return;
			}
			fLocal_64 = func_155(&iLocal_59);
			if (fLocal_64 >= 180f)
			{
				func_129(24, 1);
				func_154(&iLocal_59);
				iLocal_56++;
			}
			break;
		
		case 2:
			iLocal_56++;
			break;
	}
}

void func_154(int* iParam0)//Position - 0x115E3
{
	if (func_97(iParam0))
	{
		if (!func_96(iParam0))
		{
			iParam0->f_2 = (func_95(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

float func_155(int* iParam0)//Position - 0x1161A
{
	if (func_97(iParam0))
	{
		if (func_96(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_95(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_156(int* iParam0)//Position - 0x11653
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_157()//Position - 0x11669
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_158()//Position - 0x11685
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_160(2);
	if (func_159(iVar1, 0) || BitTest(Global_96292, 2))
	{
		iVar0++;
	}
	iVar1 = func_160(1);
	if (func_159(iVar1, 0) || BitTest(Global_96292, 1))
	{
		iVar0++;
	}
	iVar1 = func_160(0);
	if (func_159(iVar1, 0) || BitTest(Global_96292, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_159(int iParam0, int iParam1)//Position - 0x116FB
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_58(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_160(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x11754
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_56())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_97919[func_161(iParam0)];
}

int func_161(int iParam0)//Position - 0x11785
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_162(int iParam0)//Position - 0x117C0
{
	return Global_43052 == iParam0;
}

void func_163(char* sParam0, int iParam1)//Position - 0x117CE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_164()//Position - 0x117E5
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

void func_165(int* iParam0)//Position - 0x117FB
{
	func_166(iParam0, 0f);
}

void func_166(int* iParam0, float fParam1)//Position - 0x1180A
{
	iParam0->f_1 = (func_95(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_167(var uParam0, int iParam1)//Position - 0x11835
{
	uParam0->f_79 = iParam1;
	if (uParam0->f_79)
	{
		func_114(uParam0, 0);
	}
}

void func_168(var uParam0)//Position - 0x11851
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_169(uParam0, iVar0);
		iVar0++;
	}
	func_114(uParam0, (Global_4541528 - 0.5f));
}

void func_169(var uParam0, int iParam1)//Position - 0x11885
{
	(*uParam0)[iParam1] = 78;
}

void func_170()//Position - 0x11895
{
	int iVar0;
	int iVar1;
	
	iVar1 = 78;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
		}
		iVar0++;
	}
}

void func_171(int iParam0)//Position - 0x118BF
{
	if (iParam0 > 0)
	{
	}
}

