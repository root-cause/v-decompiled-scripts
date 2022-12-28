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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<143> Local_116 = { 0, 0, 5, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_259 = 0;
	struct<2> Local_260[32];
	struct<46> ScriptParam_0 = { 31, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_108 = -1;
	fLocal_110 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_43(ScriptParam_0))
		{
			func_41();
		}
	}
	while (true)
	{
		func_40();
		if (func_32())
		{
			func_41();
		}
		switch (func_31(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_30() == 1)
				{
					Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 1;
				}
				else if (func_30() == 4)
				{
					Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 3;
				}
				break;
			
			case 1:
				if (func_30() == 4)
				{
					Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 3;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_116.f_138, 200f, 200f, 200f, false, true, 0))
				{
					Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 4;
				}
				break;
			
			case 3:
				func_28(&(Local_116.f_142));
				if (func_27(&(Local_116.f_142)))
				{
					Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 4;
				}
				break;
			
			case 2:
				Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 4;
			
			case 4:
				func_41();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_30())
			{
				case 0:
					if (func_20())
					{
						Local_116.f_0 = 1;
					}
					break;
				
				case 1:
					func_3();
					if (func_1())
					{
						Local_116.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1D9
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1ED
{
	return 0;
}

void func_3()//Position - 0x1F6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!BitTest(Local_116.f_2[iVar0 /*27*/].f_6, 1))
		{
			func_4(iVar0);
			if (Local_116.f_2[iVar0 /*27*/].f_26 > 5)
			{
				MISC::SET_BIT(&(Local_116.f_2[iVar0 /*27*/].f_6), 1);
			}
			Local_116.f_2[iVar0 /*27*/].f_26++;
		}
		iVar0++;
	}
}

void func_4(int iParam0)//Position - 0x259
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
			{
				func_5(&(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/]), ENTITY::GET_ENTITY_COORDS(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4, true) + Vector((0.046f * 1.5f), 0f, 0f));
			}
		}
		iVar0++;
	}
}

void func_5(var uParam0, struct<3> Param1)//Position - 0x2D6
{
	if (func_19() && func_18(*uParam0))
	{
		func_6(uParam0, Param1);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_4, Param1, true, false, false, true);
	}
}

void func_6(var uParam0, struct<3> Param1)//Position - 0x30E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	iVar1 = func_17(uParam0, -1);
	if (iVar1 != -1)
	{
		iVar0 = Global_1914091[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*297*/].f_98.f_21[iVar1 /*14*/].f_4;
		Global_1914091[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*297*/].f_98.f_21[iVar1 /*14*/].f_5 = { Param1 };
	}
	else
	{
		iVar1 = func_12(uParam0);
		if (iVar1 != -1)
		{
			iVar0 = Global_1914030[iVar1 /*6*/].f_5;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COORDS(iVar0, Param1, true, false, false, true);
	}
	iVar2 = func_7(1, 1);
	if (iVar2 != 0)
	{
		Var3.f_2 = 123;
		Var3.f_0 = 1883636994;
		Var3.f_1 = PLAYER::PLAYER_ID();
		Var3.f_2 = { *uParam0 };
		Var3.f_7 = { Param1 };
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var3, 10, iVar2);
	}
}

var func_7(int iParam0, bool bParam1)//Position - 0x3D3
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_8(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_8(int iParam0, int iParam1)//Position - 0x438
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_9(int iParam0, bool bParam1)//Position - 0x483
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_10()//Position - 0x4C4
{
	return Global_1574918;
}

int func_11(int iParam0, bool bParam1, bool bParam2)//Position - 0x4D0
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0)//Position - 0x530
{
	int iVar0;
	
	if (!func_15(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_13(uParam0, &(Global_2652258.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_13(var uParam0, var uParam1)//Position - 0x573
{
	if ((*uParam0 == *uParam1 && func_14(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_14(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x5AE
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_15(var uParam0)//Position - 0x5F5
{
	if ((*uParam0 == 123 || func_16(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_16(struct<3> Param0)//Position - 0x627
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_17(var uParam0, int iParam1)//Position - 0x651
{
	int iVar0;
	
	if (!func_15(uParam0))
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_13(uParam0, &(Global_1914091[iParam1 /*297*/].f_98.f_21[iVar0 /*14*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_18(int iParam0)//Position - 0x6A6
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
			return 1;
		
		default:
	}
	return 0;
}

var func_19()//Position - 0x6F0
{
	return Global_262145.f_30937 /* Tunable: 2071833430 */;
}

int func_20()//Position - 0x6FF
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_21(iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_21(int iParam0)//Position - 0x72B
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (func_16(Local_116.f_2[iParam0 /*27*/].f_2) || BitTest(Local_116.f_2[iParam0 /*27*/].f_6, 0))
	{
		return 1;
	}
	iVar4 = 0;
	MISC::SET_BIT(&iVar4, 3);
	MISC::SET_BIT(&iVar4, 4);
	switch (Local_116.f_2[iParam0 /*27*/].f_7)
	{
		case 0:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_116.f_2[iParam0 /*27*/].f_2, Local_116.f_2[iParam0 /*27*/].f_5, (0.6f - (IntToFloat(iVar0) * 0.4f)), 0f, 0.1f) };
						Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_23(joaat("PICKUP_GANG_ATTACK_MONEY"), Var1, iVar4, Local_116.f_2[iParam0 /*27*/].f_9, 0, 1, 1) };
					}
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_116.f_2[iParam0 /*27*/].f_2, Local_116.f_2[iParam0 /*27*/].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.1f) };
						Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_23(Local_116.f_2[iParam0 /*27*/].f_8, Var1, iVar4, -1, 0, 1, 1) };
					}
					iVar0++;
				}
				if (func_22(iParam0, 2))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_116.f_2[iParam0 /*27*/].f_2, Local_116.f_2[iParam0 /*27*/].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.2f) };
						Local_116.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_23(joaat("PICKUP_AMMO_BULLET_MP"), Var1, iVar4, Local_116.f_2[iParam0 /*27*/].f_9, 0, 1, 1) };
					}
					iVar0++;
				}
				if (func_22(iParam0, 2))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_22(int iParam0, int iParam1)//Position - 0x970
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	MISC::SET_BIT(&iVar3, 3);
	MISC::SET_BIT(&iVar3, 4);
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_116.f_2[iParam0 /*27*/].f_10[iParam1 /*5*/].f_4))
		{
			Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_116.f_2[iParam0 /*27*/].f_2, Local_116.f_2[iParam0 /*27*/].f_5, 0f, (0.25f - (IntToFloat(iParam1) * 0.25f)), 0.1f) };
			Local_116.f_2[iParam0 /*27*/].f_10[iParam1 /*5*/] = { func_23(joaat("PICKUP_GANG_ATTACK_MONEY"), Var0, iVar3, Global_262145.f_4456 /* Tunable: CASH_MODIFIER_CRATE_DROP_GANG_ATTACK */, 0, 1, 1) };
		}
		return 1;
	}
	return 0;
}

struct<5> func_23(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0xA0D
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_19() && func_18(iParam0))
	{
		Var0 = { func_24(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_24(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xA64
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_26() == -1)
	{
		return Var0;
	}
	iVar5 = func_25(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_12(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/] = { Var6 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1914091[iVar11 /*297*/].f_98.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_25(int iParam0)//Position - 0xBE1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_15(&(Global_1914091[iParam0 /*297*/].f_98.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_26()//Position - 0xC2D
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_15(&(Global_2652258.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_27(var uParam0)//Position - 0xC67
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

void func_28(var uParam0)//Position - 0xC90
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_29(uParam0, 0, 0);
		}
	}
}

void func_29(var uParam0, bool bParam1, bool bParam2)//Position - 0xCAF
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

int func_30()//Position - 0xCF4
{
	return Local_116.f_0;
}

int func_31(int iParam0)//Position - 0xCFE
{
	return Local_260[iParam0 /*2*/];
}

int func_32()//Position - 0xD0D
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_39())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_38())
	{
		return 1;
	}
	if (func_37(159))
	{
		if (!func_36())
		{
			return 1;
		}
	}
	if (func_37(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_33() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_33()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_33()//Position - 0xD91
{
	switch (func_35())
	{
		case 0:
			return func_34();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_34()//Position - 0xDC4
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_35()//Position - 0xDE8
{
	return Global_32163;
}

bool func_36()//Position - 0xDF3
{
	return Global_2683862.f_698;
}

int func_37(int iParam0)//Position - 0xE02
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_38()//Position - 0xE19
{
	return Global_2694524;
}

bool func_39()//Position - 0xE25
{
	return Global_2683862.f_693;
}

void func_40()//Position - 0xE34
{
	SYSTEM::WAIT(0);
}

void func_41()//Position - 0xE41
{
	func_42();
}

void func_42()//Position - 0xE4D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_43(struct<41> Param0, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45)//Position - 0xE59
{
	struct<21> Var0;
	int iVar21;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_0 = Param0.f_0;
	Var0.f_16 = Param0.f_1;
	func_47(func_48(Param0.f_0), Var0);
	func_45(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_116, 144, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_260, 65, 0);
	if (!func_44())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_116.f_141 = Param0.f_1;
		Local_116.f_138 = { Param0.f_2 };
		iVar21 = 0;
		while (iVar21 < 5)
		{
			if (!BitTest(Param0.f_5, 0))
			{
				MISC::SET_BIT(&(Local_116.f_2[iVar21 /*27*/].f_6), 0);
			}
			Local_116.f_2[iVar21 /*27*/].f_2 = { Param0.f_6[iVar21 /*3*/] };
			Local_116.f_2[iVar21 /*27*/].f_5 = Param0.f_22[iVar21];
			Local_116.f_2[iVar21 /*27*/].f_7 = Param0.f_28[iVar21];
			Local_116.f_2[iVar21 /*27*/].f_8 = Param0.f_34[iVar21];
			Local_116.f_2[iVar21 /*27*/].f_9 = Param0.f_40[iVar21];
			iVar21++;
		}
	}
	Local_260[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/] = 0;
	return 1;
}

int func_44()//Position - 0xF80
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
		if (func_39())
		{
			return 0;
		}
		if (func_37(157))
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

int func_45(int iParam0, int iParam1, bool bParam2)//Position - 0xFD9
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_42();
			}
			else
			{
				return 0;
			}
		}
		if (!func_46(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_42();
					}
					else
					{
						return 0;
					}
				}
				if (func_39())
				{
					if (!bParam2)
					{
						func_42();
					}
					else
					{
						return 0;
					}
				}
				if (func_37(157))
				{
					if (!bParam2)
					{
						func_42();
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
					func_42();
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
				func_42();
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
			func_42();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_46(bool bParam0)//Position - 0x10EF
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_47(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1100
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_42();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_48(int iParam0)//Position - 0x111F
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
		
		case 173:
			return 32;
		
		case 174:
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
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_49(func_50(iParam0, 1)))
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

int func_49(int iParam0)//Position - 0x18A0
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
		
		default:
	}
	return -1;
}

int func_50(int iParam0, bool bParam1)//Position - 0x1A68
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
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
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

