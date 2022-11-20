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
					func_163("CHEAT_TROPHIE" /* GXT: Cheats have been activated. Trophies will not be awarded for the duration of this session. */, -1);
				}
				else
				{
					func_163("CHEAT_ACHIEVE" /* GXT: Cheats have been activated. Achievements will not be awarded for the duration of this session. */, -1);
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
						STATS::STAT_SET_INT(joaat("NUM_GOLD_MEDALS_OBTAINED"), iVar0, true);
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
	bVar0 = SOCIALCLUB::SC_ACHIEVEMENT_INFO_STATUS(&iVar1);
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
		if (func_12(joaat("MPPLY_TOTAL_CUSTOM_RACES_WON")) >= 5)
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
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
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
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
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
	if (((((((((((((((((((((iParam1 != joaat("WEAPON_PISTOL") && iParam1 != joaat("WEAPON_APPISTOL")) && iParam1 != joaat("WEAPON_COMBATPISTOL")) && iParam1 != joaat("WEAPON_MICROSMG")) && iParam1 != joaat("WEAPON_SMG")) && iParam1 != joaat("WEAPON_PUMPSHOTGUN")) && iParam1 != joaat("WEAPON_ASSAULTSHOTGUN")) && iParam1 != joaat("WEAPON_SAWNOFFSHOTGUN")) && iParam1 != joaat("WEAPON_ASSAULTRIFLE")) && iParam1 != joaat("WEAPON_CARBINERIFLE")) && iParam1 != joaat("WEAPON_ADVANCEDRIFLE")) && iParam1 != joaat("WEAPON_SNIPERRIFLE")) && iParam1 != joaat("WEAPON_HEAVYSNIPER")) && iParam1 != joaat("WEAPON_MG")) && iParam1 != joaat("WEAPON_COMBATMG")) && iParam1 != joaat("WEAPON_GRENADELAUNCHER")) && iParam1 != joaat("WEAPON_ASSAULTMG")) && iParam1 != joaat("WEAPON_ASSAULTSMG")) && iParam1 != joaat("WEAPON_ASSAULTSNIPER")) && iParam1 != joaat("WEAPON_BULLPUPSHOTGUN")) && iParam1 != joaat("WEAPON_PISTOL50")) && (iVar1 == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1) < 3))
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
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == joaat("Gun_GripR"))
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
	
	func_88(uParam0, 0, joaat("WAPInvalid"), 0, 0);
	switch (iParam1)
	{
		case joaat("WEAPON_PISTOL"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_PISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_PISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_COMBATPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_APPISTOL_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_MICROSMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_SMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_SMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_SMG_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_SMG_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_ASSAULTRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_CARBINERIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_MG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_MG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_MG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_COMBATMG"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_COMBATMG_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_SNIPERRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_HEAVYSNIPER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_MINIGUN_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_ASSAULTSMG_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_PISTOL50_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_PISTOL50_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_PISTOL50_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_AT_AR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_AT_AR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_AT_CR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_AT_CR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MG_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_MG_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_MK2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MAX"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_NV"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_THERMAL"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_AT_SR_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_SR_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_PI_RAIL"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_PI_COMP"), joaat("WAPSupp"), 3, 0);
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
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_SMG_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS_SMG"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_SB_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_SB_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_PUMPSHOTGUN"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SPECIALCARBINE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_CLIP_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_SNSPISTOL"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_SNSPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_MARKSMANRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_REVOLVER"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_REVOLVER_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_BOSS"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_REVOLVER_VARMOD_GOON"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (func_87(iLocal_55))
			{
				if (!func_77(joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("WEAPON_BULLPUPRIFLE"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
							break;
						
						case 3:
							func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_88(uParam0, joaat("COMPONENT_GUNRUN_MK2_UPGRADE"), joaat("Gun_GripR"), 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlsh"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_SR_SUPP_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_08"), joaat("WAPSupp"), 3, 0);
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
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_AT_SC_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_AT_SC_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_PI_RAIL_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_PI_SUPP_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_PI_COMP_02"), joaat("WAPSupp_2"), 3, 0);
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
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_88(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_88(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 23:
					func_88(uParam0, joaat("COMPONENT_AT_MRFL_BARREL_02"), joaat("WAPBarrel"), 2, 0);
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
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_MK2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_PI_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_PI_COMP_03"), joaat("WAPSupp"), 2, 0);
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
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_88(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_88(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_88(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_88(uParam0, joaat("COMPONENT_AT_SIGHTS"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_88(uParam0, joaat("COMPONENT_AT_SCOPE_SMALL_MK2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_88(uParam0, joaat("COMPONENT_AT_BP_BARREL_01"), joaat("WAPBarrel"), 1, 1);
					break;
				
				case 13:
					func_88(uParam0, joaat("COMPONENT_AT_BP_BARREL_02"), joaat("WAPBarrel"), 2, 0);
					break;
				
				case 14:
					func_88(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_88(uParam0, joaat("COMPONENT_AT_MUZZLE_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_88(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP_02"), joaat("WAPGrip"), 2, 0);
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
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam2)
			{
				case 0:
					func_88(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_88(uParam0, joaat("COMPONENT_CERAMICPISTOL_CLIP_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_88(uParam0, joaat("COMPONENT_CERAMICPISTOL_SUPP"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
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
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_CLIP_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_88(uParam0, joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_88(uParam0, joaat("COMPONENT_AT_SCOPE_MEDIUM"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_88(uParam0, joaat("COMPONENT_AT_AR_FLSH"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
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
					func_88(uParam0, joaat("COMPONENT_AT_AR_SUPP_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_88(uParam0, joaat("COMPONENT_AT_AR_AFGRIP"), joaat("WAPGrip"), 1, 0);
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
							else if (Var16.f_0 == joaat("Gun_GripR"))
							{
								iVar9++;
							}
							else if (Var16.f_0 == joaat("WAPBarrel"))
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
								else if (Var16.f_0 == joaat("Gun_GripR"))
								{
									iVar0 = iVar9;
								}
								else if (Var16.f_0 == joaat("WAPBarrel"))
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
	return uParam0->f_4 != joaat("WAPInvalid");
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
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 155;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 729;
						break;
					
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 735;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 165;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 185;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 730;
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 137;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 190;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 549;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 775;
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 134;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 210;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 549;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 815;
						break;
					
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 565;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 810;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 105;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 132;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 150;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 815;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 124;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 159;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 812;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 450;
						break;
					
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 126;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 559;
						break;
					
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 189;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 975;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 139;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 150;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 225;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 559;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 975;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 920;
						break;
					
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 575;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 128;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 185;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = 17600;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						break;
					
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = 20000;
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = 3612;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1020;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 5000;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 1760;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 710;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 4800;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = 4900;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = 5600;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = 5500;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = 5200;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = 4600;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = 4700;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = 4800;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = 4300;
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 108;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = 9950;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2575;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 11350;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 29;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = 9150;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 108;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = 9975;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2525;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 11550;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12500;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = 3680;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
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
									if (iParam0 == joaat("WEAPON_HAMMER"))
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
			case joaat("WEAPON_PISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_PISTOL_CLIP_02"):
						iVar0 = 9175;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2894 /* Tunable: WEAPONADDON_PISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1675;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4346 /* Tunable: WEAPONADDON_PISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4347 /* Tunable: WEAPONADDON_PISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11039 /* Tunable: LUXE1_ADDONSPISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21237 /* Tunable: 1045219855 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
						iVar0 = 136;
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_21124 /* Tunable: -1714511790 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2895 /* Tunable: WEAPONADDON_COMBATPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4348 /* Tunable: WEAPONADDON_COMBATPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21125 /* Tunable: -83416429 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4349 /* Tunable: WEAPONADDON_COMBATPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12428 /* Tunable: WEAPONADDONCOMBAT_PISTOL_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4419 /* Tunable: WEAPONADDON_COMBATPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_APPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_APPISTOL_CLIP_01"):
						iVar0 = 145;
						break;
					
					case joaat("COMPONENT_APPISTOL_CLIP_02"):
						iVar0 = 9400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2897 /* Tunable: WEAPONADDON_APPISTOL_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4350 /* Tunable: WEAPONADDON_APPISTOL_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4351 /* Tunable: WEAPONADDON_APPISTOL_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11038 /* Tunable: LUXE1_ADDONSAP_PISTOL_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4413 /* Tunable: WEAPONADDON_APPPISTOL_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31993 /* Tunable: FIXER_THE_STUDIO_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_MICROSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MICROSMG_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_MICROSMG_CLIP_02"):
						iVar0 = 9325;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2898 /* Tunable: WEAPONADDON_MICROSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 1900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4354 /* Tunable: WEAPONADDON_MICROSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10800;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4356 /* Tunable: WEAPONADDON_MICROSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12150;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4355 /* Tunable: WEAPONADDON_MICROSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11042 /* Tunable: LUXE1_ADDONSMICRO_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4423 /* Tunable: WEAPONADDON_MICROSMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31992 /* Tunable: FIXER_THE_WEED_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_SMG_CLIP_02"):
						iVar0 = 9475;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2899 /* Tunable: WEAPONADDON_SMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SMG_CLIP_03"):
						iVar0 = Global_262145.f_16642 /* Tunable: ADDONS_SMG_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4357 /* Tunable: WEAPONADDON_SMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
						iVar0 = 10825;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4359 /* Tunable: WEAPONADDON_SMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4358 /* Tunable: WEAPONADDON_SMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SMG_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11041 /* Tunable: LUXE1_ADDONSSMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4428 /* Tunable: WEAPONADDON_SMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21238 /* Tunable: -1113441963 */;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
						iVar0 = 120;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
						iVar0 = 9550;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2901 /* Tunable: WEAPONADDON_ASSAULTRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16637 /* Tunable: ADDONS_ASSAULT_RIFLE_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4367 /* Tunable: WEAPONADDON_ASSRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2125;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4364 /* Tunable: WEAPONADDON_ASSRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4366 /* Tunable: WEAPONADDON_ASSRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4365 /* Tunable: WEAPONADDON_ASSRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11035 /* Tunable: LUXE1_KIT_ASSAULT_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4414 /* Tunable: WEAPONADDON_ASSAULTRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21240 /* Tunable: 2090566072 */;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
						iVar0 = 99;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
						iVar0 = 9775;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2902 /* Tunable: WEAPONADDON_CARBINERIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16636 /* Tunable: ADDONS_CARBINE_RIFLE_BOX_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4375 /* Tunable: WEAPONADDON_CARBINERRIFLE_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4372 /* Tunable: WEAPONADDON_CARBINERRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10900;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4374 /* Tunable: WEAPONADDON_CARBINERRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4373 /* Tunable: WEAPONADDON_CARBINERRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11037 /* Tunable: LUXE1_ADDONSCARBINE_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4417 /* Tunable: WEAPONADDON_CARBINERILE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21241 /* Tunable: 199705908 */;
						break;
				}
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
						iVar0 = 9925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2904 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4377 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 10950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4379 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4378 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11036 /* Tunable: LUXE1_ADDONSADVANCED_RIFLE_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4412 /* Tunable: WEAPONADDON_ADVANCEDRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MG_CLIP_01"):
						iVar0 = 135;
						break;
					
					case joaat("COMPONENT_MG_CLIP_02"):
						iVar0 = 9850;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2905 /* Tunable: WEAPONADDON_MG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
						iVar0 = 10925;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4380 /* Tunable: WEAPONADDON_MACHINEGUN_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12429 /* Tunable: WEAPONADDONMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4422 /* Tunable: WEAPONADDON_MG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_CLIP_01"):
						iVar0 = 119;
						break;
					
					case joaat("COMPONENT_COMBATMG_CLIP_02"):
						iVar0 = 10000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2906 /* Tunable: WEAPONADDON_COMBATMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4425;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4402 /* Tunable: WEAPONADDON_COMBATMG_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = 10975;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4403 /* Tunable: WEAPONADDON_COMBATMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12430 /* Tunable: WEAPONADDONCOMBAT_MG_ETCHED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4418 /* Tunable: WEAPONADDON_COMBATMG_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21239 /* Tunable: -31847919 */;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 1750;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4384 /* Tunable: WEAPONADDON_PUMPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4385 /* Tunable: WEAPONADDON_PUMPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12425 /* Tunable: WEAPONADDONPUMP_SHOTGUN_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4426 /* Tunable: WEAPONADDON_PUMPSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22961 /* Tunable: -1541473904 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
						iVar0 = Global_262145.f_31990 /* Tunable: FIXER_THE_BONE_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
						iVar0 = 129;
						break;
					
					case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
						iVar0 = 9625;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2908 /* Tunable: WEAPONADDON_ASSAULTSHOTGUN_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4388 /* Tunable: WEAPONADDON_ASSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2200;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4389 /* Tunable: WEAPONADDON_ASSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = 12350;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4390 /* Tunable: WEAPONADDON_ASSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4391 /* Tunable: WEAPONADDON_SNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4392 /* Tunable: WEAPONADDON_SNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12050;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4393 /* Tunable: WEAPONADDON_SNIPER_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11044 /* Tunable: LUXE1_ADDONSSNIPER_RIFLE_ETCHED_WOOD_GRIP_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4429 /* Tunable: WEAPONADDON_SNIPERRIFLE_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
						iVar0 = -1;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE"):
						iVar0 = 99;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4394 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE1_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 12500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4395 /* Tunable: WEAPONADDON_HEAVYSNIPER_SCOPE2_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_21242 /* Tunable: 1329981068 */;
						break;
				}
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4404 /* Tunable: WEAPONADDON_GRENADELAUNCHER_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4400 /* Tunable: WEAPONADDON_GRENADELAUNCHER_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = 11000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4401 /* Tunable: WEAPONADDON_GRENADELAUNCHER_SCOPE_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MINIGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINIGUN_CLIP_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTSMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
						iVar0 = 110;
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
						iVar0 = 9700;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2900 /* Tunable: WEAPONADDON_ASSAULTSMG_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2275;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4360 /* Tunable: WEAPONADDON_ASSSMG_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO"):
						iVar0 = 10875;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4363 /* Tunable: WEAPONADDON_ASSSMG_SCOPE_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12400;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4361 /* Tunable: WEAPONADDON_ASSSMG_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12426 /* Tunable: WEAPONADDONASSAULT_SMG_YUSUF_AMIR_LUXURY_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4362));
						break;
				}
				break;
			
			case joaat("WEAPON_GUSENBERG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GUSENBERG_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_GUSENBERG_CLIP_02"):
						iVar0 = Global_262145.f_7060 /* Tunable: VALENTINE_GUSENBERG_WEAPONMOD_EXTENDED_CLIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7639 /* Tunable: DLC_WEAPON_ADDON_SNS_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12427 /* Tunable: WEAPONADDONSNS_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22966 /* Tunable: 770433911 */;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
						iVar0 = Global_262145.f_7644 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
						iVar0 = Global_262145.f_16639 /* Tunable: ADDONS_SPECIAL_CARBINE_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7647 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_7643 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_7641 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7646 /* Tunable: DLC_WEAPON_ADDON_SPECIAL_CARBINE_GRIP */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
						iVar0 = Global_262145.f_12431 /* Tunable: WEAPONADDONSPECIAL_CARBINE_ETCHED_GUN_METAL_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22962 /* Tunable: -2069986193 */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_7645 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_7649 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_7642 /* Tunable: DLC_WEAPON_ADDON_HEAVY_PISTOL_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
						iVar0 = Global_262145.f_7669 /* Tunable: LUXE1_ADDONSHEAVY_PISTOL_ETCHED_WOOD_GRIP_FINISH */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_7652 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_7655 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_7650 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_7651 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_7653 /* Tunable: DLC_WEAPON_ADDON_BULLPUP_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
						iVar0 = Global_262145.f_12432 /* Tunable: WEAPONADDONBULLPUP_RIFLE_GILDED_GUN_METAL_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22965 /* Tunable: -1864587586 */;
						break;
				}
				break;
			
			case joaat("WEAPON_VINTAGEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_8127 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_8128 /* Tunable: DLC_HIPSTER_WEAPON_MOD_VINTAGE_PISTOL_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
						iVar0 = Global_262145.f_8856 /* Tunable: LTS_HEAVY_SHOTGUN_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
						iVar0 = Global_262145.f_16643 /* Tunable: ADDONS_HEAVY_SHOTGUN_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8857 /* Tunable: LTS_HEAVY_SHOTGUN_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_8858 /* Tunable: LTS_HEAVY_SHOTGUN_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8859 /* Tunable: LTS_HEAVY_SHOTGUN_GRIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_8862 /* Tunable: LTS_MARKSMAN_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_8863 /* Tunable: LTS_MARKSMAN_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_8865 /* Tunable: LTS_MARKSMAN_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_8866 /* Tunable: LTS_MARKSMAN_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
						iVar0 = Global_262145.f_8867 /* Tunable: LUXE1_ADDONSMARKSMAN_RIFLE_YUSUF_AMIR_LUXURY_FINISH */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22963 /* Tunable: -2073299738 */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = 4100;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15134 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_GRIP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = 2300;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4386 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12450;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4387 /* Tunable: WEAPONADDON_BULLPUPSHOTGUN_SUPP_EXPENDITURE_TUNABLE */));
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_PISTOL50"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL50_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL50_CLIP_02"):
						iVar0 = 9500;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2896 /* Tunable: WEAPONADDON_PISTOL50_CLIP_02_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = 2000;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4352 /* Tunable: WEAPONADDON_DLCPISTOL50_FLSH_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = 12250;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4353 /* Tunable: WEAPONADDON_DLCPISTOL50_SUPP_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11040 /* Tunable: LUXE1_ADDONSPISTOL_50_PLATINUM_PEARL_DELUXE_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4425 /* Tunable: WEAPONADDON_PISTOL50_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				if (func_75() && (func_74() || func_73()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
						iVar0 = Global_262145.f_11043 /* Tunable: LUXE1_ADDONSSAWED_OFF_SHOTGUN_GILDED_GUN_METAL_FINISH */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4427 /* Tunable: WEAPONADDON_SAWNOFFSHOTGUN_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_KNUCKLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
						iVar0 = Global_262145.f_11365 /* Tunable: LUXE2_THE_PIMP_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4432 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PIMP_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
						iVar0 = Global_262145.f_11366 /* Tunable: LUXE2_THE_BALLAS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4433 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_BALLAS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
						iVar0 = Global_262145.f_11367 /* Tunable: LUXE2_THE_HUSTLER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4434 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HUSTLER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
						iVar0 = Global_262145.f_11368 /* Tunable: LUXE2_THE_ROCK_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4435 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_ROCK_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
						iVar0 = Global_262145.f_11369 /* Tunable: LUXE2_THE_HATER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4436 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_HATER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
						iVar0 = Global_262145.f_11370 /* Tunable: LUXE2_THE_LOVER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4437 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_LOVER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
						iVar0 = Global_262145.f_11371 /* Tunable: LUXE2_THE_PLAYER_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4438 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_PLAYER_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
						iVar0 = Global_262145.f_11372 /* Tunable: LUXE2_THE_KING_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4439 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_KING_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
					
					case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
						iVar0 = Global_262145.f_11373 /* Tunable: LUXE2_THE_VAGOS_KNUCKLE_DUSTER */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4440 /* Tunable: WEAPONADDON_KNUCKLEDUSTER_VAGOS_ENGRAVED_EXPENDITURE_TUNABLE */));
						break;
				}
				break;
			
			case joaat("WEAPON_MACHINEPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_11390 /* Tunable: LOWRIDER_MACHINEPISTOL_CLIP02 */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4442));
						break;
					
					case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
						iVar0 = Global_262145.f_16641 /* Tunable: ADDONS_MACHINE_PISTOL_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_11391 /* Tunable: LOWRIDER_MACHINEPISTOL_SUPP */;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4443));
						break;
				}
				break;
			
			case joaat("WEAPON_SWITCHBLADE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
						iVar0 = Global_262145.f_13273 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_BOSS_VARIANT */;
						break;
					
					case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
						iVar0 = Global_262145.f_13274 /* Tunable: APARTMENT_ADDONS_SWITCHBLADE_ENGRAVED_GOON_VARIANT */;
						break;
				}
				break;
			
			case joaat("WEAPON_REVOLVER"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
						iVar0 = Global_262145.f_13331 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_BOSS_VARIANT */;
						break;
					
					case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
						iVar0 = Global_262145.f_13272 /* Tunable: APARTMENT_ADDONS_HEAVY_REVOLVER_ENGRAVED_GOON_VARIANT */;
						break;
					
					case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
						iVar0 = Global_262145.f_22964 /* Tunable: 458535408 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMPACTRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_15064 /* Tunable: ADDONS_COMPACT_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
						iVar0 = Global_262145.f_16638 /* Tunable: ADDONS_COMPACT_RIFLE_DRUM_MAGAZINE */;
						break;
				}
				break;
			
			case joaat("WEAPON_DBSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_DBSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_MINISMG"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MINISMG_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MINISMG_CLIP_02"):
						iVar0 = Global_262145.f_19087 /* Tunable: 1482389140 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATPDW"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATPDW_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMBATPDW_CLIP_02"):
						iVar0 = Global_262145.f_21120 /* Tunable: LUXE1_COMBATPDW_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_COMBATPDW_CLIP_03"):
						iVar0 = Global_262145.f_16640 /* Tunable: ADDONS_PDW_DRUM_MAGAZINE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21121 /* Tunable: LUXE1_COMBATPDW_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_21123 /* Tunable: LUXE1_COMBATPDW_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_21122 /* Tunable: LUXE1_COMBATPDW_GRIP */;
						break;
				}
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21243 /* Tunable: -1550181012 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21244 /* Tunable: 599186436 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21245 /* Tunable: 1538620212 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21246 /* Tunable: -170097190 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21247 /* Tunable: -1387455740 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21248 /* Tunable: -325408568 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21249 /* Tunable: -82364995 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21250 /* Tunable: -229542830 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21251 /* Tunable: 1327976003 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21252 /* Tunable: -618034935 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_21253 /* Tunable: -1721486303 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21254 /* Tunable: -240242887 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21255 /* Tunable: 1111019601 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21256 /* Tunable: 1417573596 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21257 /* Tunable: 648354090 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21258 /* Tunable: -1500342013 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21259 /* Tunable: -80395705 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21260 /* Tunable: 225896138 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21261 /* Tunable: -946948419 */;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_BARREL_02"):
						iVar0 = Global_262145.f_21262 /* Tunable: 628289383 */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_CARBINERIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21263 /* Tunable: 1286553594 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21264 /* Tunable: -1398112727 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21265 /* Tunable: 1311192953 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21266 /* Tunable: -577265450 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21267 /* Tunable: 441926214 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21268 /* Tunable: -1137873158 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21269 /* Tunable: 757231685 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21270 /* Tunable: 1743852487 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21271 /* Tunable: 1889225718 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21272 /* Tunable: 1808408105 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_21273 /* Tunable: 998096574 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21274 /* Tunable: 42291623 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21275 /* Tunable: 918075921 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21276 /* Tunable: -253841830 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21277 /* Tunable: -554038639 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21278 /* Tunable: -851712235 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21279 /* Tunable: -1149353062 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21280 /* Tunable: -1211679700 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21281 /* Tunable: -1770903800 */;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_CR_BARREL_02"):
						iVar0 = Global_262145.f_21282 /* Tunable: 120043539 */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21283 /* Tunable: 1898572754 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21284 /* Tunable: -980014447 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21285 /* Tunable: 954938707 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21286 /* Tunable: 1734159338 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21287 /* Tunable: 994554097 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_21288 /* Tunable: 320273484 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_21289 /* Tunable: -300742141 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_21290 /* Tunable: -1429921876 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_21291 /* Tunable: 1509305655 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21292 /* Tunable: -49677055 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21293 /* Tunable: 2089647114 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21294 /* Tunable: 1816386423 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21295 /* Tunable: -1717619155 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21296 /* Tunable: -2014801216 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21297 /* Tunable: 902950516 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21298 /* Tunable: 562283992 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_21299 /* Tunable: 1292930355 */;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MG_BARREL_02"):
						iVar0 = Global_262145.f_21300 /* Tunable: 1947193436 */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYSNIPER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21301 /* Tunable: 330899918 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_21302 /* Tunable: 917018525 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21304 /* Tunable: 884234768 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21305 /* Tunable: 1088190767 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_21303 /* Tunable: -1206093715 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
						iVar0 = Global_262145.f_21306 /* Tunable: 579562015 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MAX"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_NV"):
						iVar0 = Global_262145.f_21307 /* Tunable: 544428193 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_THERMAL"):
						iVar0 = Global_262145.f_21308 /* Tunable: -707213005 */;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_21309 /* Tunable: 1674324405 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_21310 /* Tunable: 291821001 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_09"):
						iVar0 = Global_262145.f_21311 /* Tunable: 1067332155 */;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SR_BARREL_02"):
						iVar0 = Global_262145.f_21312 /* Tunable: 2037426926 */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_PISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21313 /* Tunable: 1430566154 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21315 /* Tunable: -1046185578 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21314 /* Tunable: -506102803 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21316 /* Tunable: 1296166421 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21317 /* Tunable: 1866512725 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_02"):
						iVar0 = Global_262145.f_21318 /* Tunable: -1999312528 */;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL"):
						iVar0 = Global_262145.f_21319 /* Tunable: 1055846757 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_21320 /* Tunable: 1378860015 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP"):
						iVar0 = Global_262145.f_21321 /* Tunable: 1792089868 */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_SMG_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SMG_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_02"):
						iVar0 = Global_262145.f_21322 /* Tunable: -220053906 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_21324 /* Tunable: -952131423 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_21323 /* Tunable: -1897517534 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_21325 /* Tunable: -977321503 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_21326 /* Tunable: -1188309354 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_21327 /* Tunable: -2017541960 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS_SMG"):
						iVar0 = Global_262145.f_21328 /* Tunable: 1261888316 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
						iVar0 = Global_262145.f_21329 /* Tunable: 735171511 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
						iVar0 = Global_262145.f_21330 /* Tunable: -1290434805 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP"):
						iVar0 = Global_262145.f_21331 /* Tunable: 662271695 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_21332 /* Tunable: 1781046189 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_21333 /* Tunable: -1288131124 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_21334 /* Tunable: -1129922392 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_21335 /* Tunable: 129226433 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_21336 /* Tunable: -1594095277 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_21337 /* Tunable: -444427681 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_21338 /* Tunable: -137611534 */;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SB_BARREL_02"):
						iVar0 = Global_262145.f_21339 /* Tunable: 946764522 */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22993 /* Tunable: 1652287555 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
						iVar0 = Global_262145.f_22994 /* Tunable: -535703975 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_22992 /* Tunable: 95511928 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22991 /* Tunable: -665155806 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23020 /* Tunable: 307884450 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23021 /* Tunable: 1712943577 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23022 /* Tunable: -1605498735 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23023 /* Tunable: -1766164400 */;
						break;
					
					case joaat("COMPONENT_AT_SR_SUPP_03"):
						iVar0 = Global_262145.f_23024 /* Tunable: 1535840470 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_08"):
						iVar0 = Global_262145.f_23025 /* Tunable: 179346571 */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_SPECIALCARBINE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_22995 /* Tunable: -1133159623 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_22999 /* Tunable: 884315323 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_22997 /* Tunable: 117177146 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_22998 /* Tunable: 1711440619 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_22996 /* Tunable: 1515067404 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23026 /* Tunable: -675401976 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23027 /* Tunable: 1348404810 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23028 /* Tunable: 1661135184 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23029 /* Tunable: -622756256 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_23030 /* Tunable: 1005673153 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23031 /* Tunable: -2043761976 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23032 /* Tunable: 1467944449 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23033 /* Tunable: 2104462570 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23034 /* Tunable: -686370155 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23035 /* Tunable: 1322082777 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23036 /* Tunable: -189707864 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23037 /* Tunable: 1794058860 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23038 /* Tunable: -77140556 */;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_SC_BARREL_02"):
						iVar0 = Global_262145.f_23039 /* Tunable: 1028863717 */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_SNSPISTOL_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23910 /* Tunable: -1086352658 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23015 /* Tunable: -1789606801 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23017 /* Tunable: -843751922 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23016 /* Tunable: 839487066 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23014 /* Tunable: -1383425686 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH_03"):
						iVar0 = Global_262145.f_23071 /* Tunable: -291501777 */;
						break;
					
					case joaat("COMPONENT_AT_PI_RAIL_02"):
						iVar0 = Global_262145.f_23072 /* Tunable: -1122806840 */;
						break;
					
					case joaat("COMPONENT_AT_PI_SUPP_02"):
						iVar0 = Global_262145.f_23073 /* Tunable: -353555220 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_02"):
						iVar0 = Global_262145.f_23074 /* Tunable: -537982964 */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_MARKSMANRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23000 /* Tunable: -1378447114 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23004 /* Tunable: -402362564 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23002 /* Tunable: -901067049 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23003 /* Tunable: 148273883 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23001 /* Tunable: -1383428803 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23040 /* Tunable: -852920589 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23041 /* Tunable: -235285662 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
						iVar0 = Global_262145.f_23042 /* Tunable: 947508682 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23043 /* Tunable: -829621681 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23044 /* Tunable: -1449227090 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23045 /* Tunable: -1300374254 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23046 /* Tunable: 989071156 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23047 /* Tunable: 1338637515 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23048 /* Tunable: -1766547494 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23049 /* Tunable: -1090214635 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23050 /* Tunable: 532703720 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23051 /* Tunable: -2106260249 */;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_MRFL_BARREL_02"):
						iVar0 = Global_262145.f_23052 /* Tunable: -249998032 */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_REVOLVER_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23005 /* Tunable: 1955558754 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23006 /* Tunable: 38016460 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
						iVar0 = Global_262145.f_23008 /* Tunable: 784593552 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23007 /* Tunable: 1408548101 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23053 /* Tunable: 1857338618 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
						iVar0 = Global_262145.f_23054 /* Tunable: 1760541515 */;
						break;
					
					case joaat("COMPONENT_AT_PI_FLSH"):
						iVar0 = Global_262145.f_23055 /* Tunable: 141245052 */;
						break;
					
					case joaat("COMPONENT_AT_PI_COMP_03"):
						iVar0 = Global_262145.f_23056 /* Tunable: -1827907706 */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE_MK2"):
				switch (iParam1)
				{
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
						iVar0 = Global_262145.f_23009 /* Tunable: -316590252 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
						iVar0 = Global_262145.f_23013 /* Tunable: -2001892987 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
						iVar0 = Global_262145.f_23011 /* Tunable: 545820391 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
						iVar0 = Global_262145.f_23012 /* Tunable: 794018680 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
						iVar0 = Global_262145.f_23010 /* Tunable: -493624257 */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_23057 /* Tunable: 1592341943 */;
						break;
					
					case joaat("COMPONENT_AT_SIGHTS"):
						iVar0 = Global_262145.f_23058 /* Tunable: 2078892836 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
						iVar0 = Global_262145.f_23059 /* Tunable: 1554127006 */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
						iVar0 = Global_262145.f_23060 /* Tunable: -1314225140 */;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_BP_BARREL_02"):
						iVar0 = Global_262145.f_23070 /* Tunable: -2119010024 */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_23061 /* Tunable: -1948594273 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_01"):
						iVar0 = Global_262145.f_23062 /* Tunable: 21146921 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_02"):
						iVar0 = Global_262145.f_23063 /* Tunable: 1358418183 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_03"):
						iVar0 = Global_262145.f_23064 /* Tunable: 1464361534 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_04"):
						iVar0 = Global_262145.f_23065 /* Tunable: -268389376 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_05"):
						iVar0 = Global_262145.f_23066 /* Tunable: -1823864223 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_06"):
						iVar0 = Global_262145.f_23067 /* Tunable: -574324148 */;
						break;
					
					case joaat("COMPONENT_AT_MUZZLE_07"):
						iVar0 = Global_262145.f_23068 /* Tunable: 999664111 */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP_02"):
						iVar0 = Global_262145.f_23069 /* Tunable: -1915566950 */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_21371 /* Tunable: GR_WEAPON_CAMO_1_DIGITAL_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_21372 /* Tunable: GR_WEAPON_CAMO_2_TIGER_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_21373 /* Tunable: GR_WEAPON_CAMO_3_WOODLAND_CAMO */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_21374 /* Tunable: GR_WEAPON_CAMO_4_SKULL */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_21375 /* Tunable: GR_WEAPON_CAMO_5_SESSANTA_NOVE */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_21376 /* Tunable: GR_WEAPON_CAMO_6_PERSEUS */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_21377 /* Tunable: GR_WEAPON_CAMO_7_LEOPARD */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_21378 /* Tunable: GR_WEAPON_CAMO_8_ZEBRA */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_21379 /* Tunable: GR_WEAPON_CAMO_9_GEOMETRIC */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_21380 /* Tunable: GR_WEAPON_CAMO_10_BOOM */;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_21381 /* Tunable: GR_WEAPON_CAMO_11_PATRIOTIC */;
						break;
				}
				break;
			
			case joaat("WEAPON_RAYPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_CERAMICPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
						iVar0 = Global_262145.f_28685 /* Tunable: 453457679 */;
						break;
					
					case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
						iVar0 = Global_262145.f_28686 /* Tunable: 143602352 */;
						break;
				}
				break;
			
			case joaat("WEAPON_COMBATSHOTGUN"):
				switch (iParam1)
				{
					case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
						iVar0 = 0;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30824 /* Tunable: IH_COMBAT_SHOTGUN_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30825 /* Tunable: IH_COMBAT_SHOTGUN_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_GADGETPISTOL"):
				switch (iParam1)
				{
					case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("WEAPON_MILITARYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_30810 /* Tunable: IH_MILITARY_RIFLE_DEFAULT_CLIP */;
						break;
					
					case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_30811 /* Tunable: IH_MILITARY_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_30812 /* Tunable: IH_MILITARY_RIFLE_IRON_SIGHTS */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_SMALL"):
						iVar0 = Global_262145.f_30813 /* Tunable: IH_MILITARY_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_30814 /* Tunable: IH_MILITARY_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_30815 /* Tunable: IH_MILITARY_RIFLE_SUPPRESSOR */;
						break;
				}
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
				switch (iParam1)
				{
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
						iVar0 = Global_262145.f_31958 /* Tunable: FIXER_HEAVY_RIFLE_DEFAULT_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
						iVar0 = Global_262145.f_31959 /* Tunable: FIXER_HEAVY_RIFLE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
						iVar0 = Global_262145.f_31991 /* Tunable: FIXER_THE_FAMILIES_FINISH */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_31964 /* Tunable: FIXER_HEAVY_RIFLE_GRIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH"):
						iVar0 = Global_262145.f_31962 /* Tunable: FIXER_HEAVY_RIFLE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
						iVar0 = Global_262145.f_31961 /* Tunable: FIXER_HEAVY_RIFLE_SCOPE */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP"):
						iVar0 = Global_262145.f_31963 /* Tunable: FIXER_HEAVY_RIFLE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
						iVar0 = Global_262145.f_31960 /* Tunable: FIXER_HEAVY_RIFLE_IRON_SIGHTS */;
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
						iVar0 = Global_262145.f_33124 /* Tunable: SU22_SERVICE_CARBINE_EXTENDED_CLIP */;
						break;
					
					case joaat("COMPONENT_AT_AR_FLSH_REH"):
						iVar0 = Global_262145.f_33126 /* Tunable: SU22_SERVICE_CARBINE_FLASHLIGHT */;
						break;
					
					case joaat("COMPONENT_AT_AR_SUPP_02"):
						iVar0 = Global_262145.f_33127 /* Tunable: SU22_SERVICE_CARBINE_SUPPRESSOR */;
						break;
					
					case joaat("COMPONENT_AT_AR_AFGRIP"):
						iVar0 = Global_262145.f_33125 /* Tunable: SU22_SERVICE_CARBINE_GRIP */;
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
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar10))
		{
			iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&sVar10), joaat("CATEGORY_WEAPON_MOD"), true);
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
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_54 == 0)
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
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
			if (fVar2 > IntToFloat(Global_262145.f_131 /* Tunable: SHOP_DISCOUNT_PERCENT */) && iVar0 >= 8)
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
	iVar0 = (iVar0 + func_12(joaat("MPPLY_EXPLOITS")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_VC_ANNOYINGME")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_VC_HATE")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_BAD_CREW_NAME")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_BAD_CREW_MOTTO")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_BAD_CREW_STATUS")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_BAD_CREW_EMBLEM")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_PLAYERMADE_TITLE")));
	iVar0 = (iVar0 + func_12(joaat("MPPLY_PLAYERMADE_DESC")));
	return iVar0;
}

int func_27()//Position - 0x9834
{
	struct<7> Var0;
	struct<7> Var1;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_51(joaat("MPPLY_STARTED_MP")) };
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
		case joaat("WEAPON_UNARMED"):
			break;
		
		case joaat("GADGET_PARACHUTE"):
			break;
		
		case joaat("WEAPON_MICROSMG"):
			iVar1 = 1;
			break;
		
		case joaat("WEAPON_SMG"):
			iVar1 = 1;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			iVar1 = 3;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			iVar1 = 2;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			break;
		
		case joaat("WEAPON_MG"):
			iVar1 = 4;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			iVar1 = 4;
			break;
		
		case joaat("WEAPON_RPG"):
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			break;
		
		case joaat("WEAPON_MINIGUN"):
			iVar1 = 5;
			break;
		
		case joaat("WEAPON_KNIFE"):
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			break;
		
		case joaat("WEAPON_STUNGUN"):
			break;
		
		case joaat("WEAPON_APPISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			iVar1 = 0;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			break;
		
		case joaat("WEAPON_GRENADE"):
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
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
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW" /* GXT: Fireworks */, 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("MP_F_Freemode_01"))
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
			if (iParam4 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("MP_F_Freemode_01"))
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
			if (iParam4 == joaat("MP_M_Freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("MP_F_Freemode_01"))
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
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == joaat("carnotfound"))
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
						StringCopy(&cParam1, "FCR2" /* GXT: FCR 1000 Custom */, 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2" /* GXT: Diabolus Custom */, 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3" /* GXT: Comet Retro Custom */, 16);
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
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_SMG_MK2"):
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
		case joaat("WEAPON_CARBINERIFLE_MK2"):
		case joaat("WEAPON_COMBATMG_MK2"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
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
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		
		case joaat("WEAPON_MG"):
			return 12;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
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
	
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02" /* GXT: The Pimp */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG" /* GXT: The Ballas */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR" /* GXT: The Hustler */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD" /* GXT: The Rock */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT" /* GXT: The Hater */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV" /* GXT: The Lover */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC" /* GXT: The Player */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG" /* GXT: The King */;
				break;
			
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG" /* GXT: The Vagos */;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
			break;
		
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
			break;
		
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL" /* GXT: Platinum Pearl Deluxe Finish */;
			break;
		
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE" /* GXT: Default Handle */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB" /* GXT: VIP Variant */;
			break;
		
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG" /* GXT: Bodyguard Variant */;
			break;
		
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX" /* GXT: Box magazine */;
			break;
		
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN" /* GXT: Mk II */;
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2" /* GXT: Small Scope */;
			break;
		
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2" /* GXT: Medium Scope */;
			break;
		
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18" /* GXT: Festive tint */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM" /* GXT: Families Finish */;
			break;
		
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED" /* GXT: Organics Finish */;
			break;
		
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD" /* GXT: Record A Finish */;
			break;
		
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE" /* GXT: Bone Finish */;
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
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_71(int iParam0)//Position - 0xBAB6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			case joaat("COMPONENT_COMBATPDW_CLIP_03"):
			case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
			case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
			case joaat("COMPONENT_SMG_CLIP_03"):
			case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
				return 0;
			
			default:
		}
	}
	else if (func_72(iParam0))
	{
		return Global_262145.f_21232 /* Tunable: ENABLE_INDEPENDENCE_LIVERY_WEAPONS */;
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
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
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
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
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
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
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
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
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
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
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
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
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
		case joaat("WEAPON_PISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_CLIP_01"):
					return 1;
					break;
				
				case joaat("COMPONENT_PISTOL_CLIP_02"):
					return 2;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 3;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 4;
					break;
				
				case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
					return 175;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 211;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
					return 5;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
					return 6;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 7;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 8;
					break;
				
				case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
					return 186;
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_APPISTOL_CLIP_01"):
					return 11;
					break;
				
				case joaat("COMPONENT_APPISTOL_CLIP_02"):
					return 12;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 13;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 14;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
					return 164;
					break;
				
				case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
					return 569;
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MICROSMG_CLIP_01"):
					return 15;
					break;
				
				case joaat("COMPONENT_MICROSMG_CLIP_02"):
					return 16;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 17;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 18;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 19;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
					return 174;
					break;
				
				case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
					return 570;
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_CLIP_01"):
					return 22;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_02"):
					return 23;
					break;
				
				case joaat("COMPONENT_SMG_CLIP_03"):
					return 207;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 24;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
					return 25;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 26;
					break;
				
				case joaat("COMPONENT_SMG_VARMOD_LUXE"):
					return 179;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 212;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
					return 27;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
					return 28;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
					return 201;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 29;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 30;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 31;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 32;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
					return 165;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 213;
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
					return 33;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
					return 34;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
					return 202;
					break;
				
				case joaat("COMPONENT_AT_RAILCOVER_01"):
					return 35;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 36;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 37;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 38;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 39;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
					return 168;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 214;
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
					return 44;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
					return 45;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 47;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 48;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 49;
					break;
				
				case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
					return 163;
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MG_CLIP_01"):
					return 50;
					break;
				
				case joaat("COMPONENT_MG_CLIP_02"):
					return 51;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
					return 52;
					break;
				
				case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
					return 187;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_CLIP_01"):
					return 53;
					break;
				
				case joaat("COMPONENT_COMBATMG_CLIP_02"):
					return 54;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 55;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 56;
					break;
				
				case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
					return 188;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 215;
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_SR_SUPP"):
					return 59;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 60;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
					return 193;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 389;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
					return 571;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
					return 64;
					break;
				
				case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
					return 65;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 66;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 67;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 68;
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
					return 69;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 70;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 71;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 72;
					break;
				
				case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
					return 180;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
					return 76;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 77;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 82;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 216;
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 78;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 79;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 80;
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINIGUN_CLIP_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
					return 83;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
					return 84;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 85;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO"):
					return 86;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 87;
					break;
				
				case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
					return 189;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 88;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 89;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL50_CLIP_01"):
					return 91;
					break;
				
				case joaat("COMPONENT_PISTOL50_CLIP_02"):
					return 92;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 93;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 94;
					break;
				
				case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
					return 176;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
					return 95;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE"):
					return 96;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 97;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 98;
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
					return 105;
					break;
				
				case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
					return 106;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 107;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 108;
					break;
			}
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
					return 109;
					break;
				
				case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
					return 110;
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
					return 111;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
					return 112;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
					return 208;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 113;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 114;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 115;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 116;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
					return 190;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 390;
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
					return 117;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
					return 118;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 119;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 120;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
					return 191;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 391;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
					return 121;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
					return 122;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 123;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 124;
					break;
				
				case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
					return 171;
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
					return 131;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
					return 132;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 127;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 128;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 129;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 130;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
					return 192;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 394;
					break;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GUSENBERG_CLIP_01"):
					return 125;
					break;
				
				case joaat("COMPONENT_GUSENBERG_CLIP_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
					return 133;
					break;
				
				case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
					return 134;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 136;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
					return 137;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
					return 140;
					break;
				
				case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
					return 205;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 145;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 146;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 147;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
					return 138;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
					return 139;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
					return 141;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 142;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 143;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 144;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
					return 172;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 392;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATPDW_CLIP_01"):
					return 149;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_02"):
					return 150;
					break;
				
				case joaat("COMPONENT_COMBATPDW_CLIP_03"):
					return 203;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 151;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 152;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 153;
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
					return 178;
					break;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
					return 154;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
					return 155;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
					return 156;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
					return 157;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
					return 158;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
					return 159;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
					return 160;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
					return 161;
					break;
				
				case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
					return 162;
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
					return 184;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
					return 185;
					break;
				
				case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
					return 206;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 183;
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
					return 194;
					break;
				
				case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
					return 195;
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_CLIP_01"):
					return 196;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
					return 197;
					break;
				
				case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
					return 198;
					break;
				
				case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
					return 393;
					break;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
					return 199;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
					return 200;
					break;
				
				case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MINISMG_CLIP_01"):
					return 209;
					break;
				
				case joaat("COMPONENT_MINISMG_CLIP_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
					return 217;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
					return 218;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
					return 219;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 220;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
					return 221;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
					return 222;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_02"):
					return 223;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL"):
					return 224;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 225;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP"):
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
		
		case joaat("WEAPON_SMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SMG_MK2_CLIP_01"):
					return 227;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_02"):
					return 228;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
					return 229;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
					return 230;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
					return 231;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
					return 232;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 233;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS_SMG"):
					return 234;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
					return 235;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
					return 236;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP"):
					return 237;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 238;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 239;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 240;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 241;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 242;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 243;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 244;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_01"):
					return 245;
					break;
				
				case joaat("COMPONENT_AT_SB_BARREL_02"):
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
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
					return 247;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
					return 248;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
					return 249;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
					return 250;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
					return 251;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
					return 252;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
					return 253;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MAX"):
					return 254;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_NV"):
					return 255;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_THERMAL"):
					return 256;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 257;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
					return 258;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_09"):
					return 259;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_01"):
					return 260;
					break;
				
				case joaat("COMPONENT_AT_SR_BARREL_02"):
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
		
		case joaat("WEAPON_COMBATMG_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
					return 262;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
					return 263;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
					return 264;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
					return 265;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
					return 266;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
					return 267;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 268;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 269;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 270;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 271;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 272;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 273;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 274;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 275;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 276;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 277;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 278;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_01"):
					return 279;
					break;
				
				case joaat("COMPONENT_AT_MG_BARREL_02"):
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
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
					return 281;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
					return 282;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 283;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
					return 284;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
					return 285;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
					return 286;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 287;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 288;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 289;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 290;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 291;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 292;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 293;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 294;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 295;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 296;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 297;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 298;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 299;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_01"):
					return 300;
					break;
				
				case joaat("COMPONENT_AT_AR_BARREL_02"):
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
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
					return 302;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
					return 303;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
					return 304;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
					return 305;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
					return 306;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
					return 307;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 308;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 309;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 310;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 311;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 312;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 313;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 314;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 315;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 316;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 317;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 318;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 319;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 320;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_01"):
					return 321;
					break;
				
				case joaat("COMPONENT_AT_CR_BARREL_02"):
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
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
					return 395;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
					return 396;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
					return 397;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
					return 398;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
					return 399;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 400;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 401;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 402;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 403;
					break;
				
				case joaat("COMPONENT_AT_SR_SUPP_03"):
					return 404;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_08"):
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
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
					return 406;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
					return 407;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
					return 408;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
					return 409;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
					return 410;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
					return 411;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 412;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 413;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 414;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 415;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 416;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 417;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 418;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 419;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 420;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 421;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 422;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 423;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 424;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_01"):
					return 425;
					break;
				
				case joaat("COMPONENT_AT_SC_BARREL_02"):
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
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
					return 427;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
					return 428;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
					return 429;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
					return 430;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
					return 431;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
					return 432;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH_03"):
					return 433;
					break;
				
				case joaat("COMPONENT_AT_PI_RAIL_02"):
					return 434;
					break;
				
				case joaat("COMPONENT_AT_PI_SUPP_02"):
					return 435;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_02"):
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
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
					return 437;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
					return 438;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 439;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
					return 440;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
					return 441;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
					return 442;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 443;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 444;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
					return 445;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
					return 446;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 447;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 448;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 449;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 450;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 451;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 452;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 453;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 454;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
					return 455;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_01"):
					return 456;
					break;
				
				case joaat("COMPONENT_AT_MRFL_BARREL_02"):
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
		
		case joaat("WEAPON_REVOLVER_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
					return 458;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
					return 459;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
					return 460;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
					return 461;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
					return 462;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 463;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
					return 464;
					break;
				
				case joaat("COMPONENT_AT_PI_FLSH"):
					return 465;
					break;
				
				case joaat("COMPONENT_AT_PI_COMP_03"):
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
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			switch (iParam0)
			{
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
					return 467;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
					return 468;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
					return 469;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
					return 470;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
					return 471;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
					return 472;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 473;
					break;
				
				case joaat("COMPONENT_AT_SIGHTS"):
					return 474;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
					return 475;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
					return 476;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_01"):
					return 477;
					break;
				
				case joaat("COMPONENT_AT_BP_BARREL_02"):
					return 478;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 479;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_01"):
					return 480;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_02"):
					return 481;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_03"):
					return 482;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_04"):
					return 483;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_05"):
					return 484;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_06"):
					return 485;
					break;
				
				case joaat("COMPONENT_AT_MUZZLE_07"):
					return 486;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP_02"):
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
		
		case joaat("WEAPON_RAYPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
					return 554;
					break;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
					return 555;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
					return 556;
					break;
				
				case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
					return 557;
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			switch (iParam0)
			{
				case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
					return 559;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 560;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 561;
					break;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
					return 562;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
					return 563;
					break;
				
				case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
					return 564;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_SMALL"):
					return 565;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 566;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 567;
					break;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			switch (iParam0)
			{
				case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			switch (iParam0)
			{
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
					return 99;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
					return 100;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
					return 568;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
					return 101;
					break;
				
				case joaat("COMPONENT_AT_AR_FLSH"):
					return 102;
					break;
				
				case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
					return 103;
					break;
				
				case joaat("COMPONENT_AT_AR_SUPP"):
					return 104;
					break;
				
				case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
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
				
				case joaat("COMPONENT_AT_AR_SUPP_02"):
					return 576;
					break;
				
				case joaat("COMPONENT_AT_AR_AFGRIP"):
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
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
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
		iVar6 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar5, &Var7) && !func_91(Var7.f_1)) && iVar9 < 51)
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
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
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
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar5, iVar1, &Var8))
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
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
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
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
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
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
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
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
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
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("FIRST_PERSON_CAM_TIME")) * 24);
	iVar0 = (iVar0 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("FIRST_PERSON_CAM_TIME")));
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_DAYS(joaat("MP_FIRST_PERSON_CAM_TIME")) * 24);
	iVar1 = (iVar1 + STATS::STAT_GET_NUMBER_OF_HOURS(joaat("MP_FIRST_PERSON_CAM_TIME")));
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
	STATS::STAT_GET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), &iVar3, -1);
	if (iVar1 > iVar3 && iVar1 > 0)
	{
		STATS::STAT_SET_INT(joaat("NUM_DISCIPLINE_GOLD_EARNED"), iVar1, true);
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
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
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
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("A_C_SharkTiger"))
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
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
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

