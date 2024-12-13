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
	struct<7> Local_92 = { 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_99 = 0;
	struct<4> Local_100[8];
	int iLocal_133[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_142[1] = { 0 };
	var uLocal_144 = 0;
	struct<4> Local_145 = { 0, 0, 0, 0 } ;
	int iLocal_149 = 0;
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
		if (func_351(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_347(ScriptParam_0))
			{
				func_340();
			}
		}
		else
		{
			func_340();
		}
	}
	else
	{
		func_340();
	}
	while (true)
	{
		func_339();
		if (func_332())
		{
			func_340();
		}
		if (func_331(1))
		{
			func_340();
		}
		func_328();
		switch (func_327(NETWORK::PARTICIPANT_ID()))
		{
			case 0:
				if (func_326() == 1 && func_324())
				{
					func_323(1);
				}
				break;
			
			case 1:
				switch (func_326())
				{
					case 1:
						func_280();
						break;
					
					case 2:
						func_323(2);
						break;
				}
				break;
			
			case 2:
				func_340();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_326())
			{
				case 0:
					if (func_22())
					{
						func_21(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 2:
					func_340();
					break;
				}
		}
	}
}

void func_1()//Position - 0x186
{
	if (func_20() > 0)
	{
		func_13();
		func_4();
	}
	switch (func_20())
	{
		case 0:
			func_3(1);
			break;
		
		case 1:
			if (func_2() == 0)
			{
			}
			else
			{
				func_3(3);
			}
			break;
		
		case 3:
			func_21(2);
			break;
	}
}

int func_2()//Position - 0x1DC
{
	return Local_92.f_4;
}

void func_3(int iParam0)//Position - 0x1E8
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_92.f_1 = iParam0;
}

void func_4()//Position - 0x201
{
	if (func_2() != 0)
	{
		return;
	}
	if (func_12(1))
	{
		func_11(2);
		return;
	}
	if (func_12(5))
	{
		func_11(3);
		return;
	}
	if (!func_7())
	{
		if (func_5(PLAYER::PLAYER_ID()))
		{
			func_11(3);
		}
		else
		{
			func_11(1);
		}
		return;
	}
}

bool func_5(int iParam0)//Position - 0x257
{
	return func_6(iParam0, 12);
}

var func_6(int iParam0, int iParam1)//Position - 0x267
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_6, iParam1);
}

bool func_7()//Position - 0x27F
{
	return func_8(func_10());
}

int func_8(int iParam0)//Position - 0x28F
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_9(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x2AF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_10()//Position - 0x2E8
{
	return Local_92.f_6;
}

void func_11(int iParam0)//Position - 0x2F4
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_92.f_4 = iParam0;
}

bool func_12(int iParam0)//Position - 0x30D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Local_92.f_2[iVar0], iVar1);
}

void func_13()//Position - 0x32E
{
	if (func_19() > 0)
	{
		if (func_19() != 5)
		{
			if (!func_7())
			{
				func_18(5);
			}
		}
	}
	switch (func_19())
	{
		case 0:
			func_18(1);
			break;
		
		case 1:
			if (func_5(func_17()))
			{
				func_14(func_15(func_16(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_18(2);
			}
			break;
		
		case 2:
			if (func_12(3))
			{
				func_18(3);
			}
			break;
		
		case 3:
			if (func_12(4))
			{
				func_18(4);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3D6
{
	struct<10> Var0;
	
	Var0.f_0 = -503325966;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_8 = iParam6;
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam4;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_7 = iParam5;
	Var0.f_9 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 10, iParam0, Var0.f_0);
	}
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x431
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_351(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), bParam3))
			{
				if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_16()//Position - 0x4C4
{
	return NETWORK::NET_TO_VEH(func_10());
}

int func_17()//Position - 0x4D4
{
	return Local_92.f_5;
}

void func_18(int iParam0)//Position - 0x4E0
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_92.f_6.f_1 = iParam0;
}

int func_19()//Position - 0x4FB
{
	return Local_92.f_6.f_1;
}

int func_20()//Position - 0x509
{
	return Local_92.f_1;
}

void func_21(int iParam0)//Position - 0x515
{
	Local_92.f_0 = iParam0;
}

int func_22()//Position - 0x521
{
	if (!func_12(0))
	{
		func_279(PLAYER::PLAYER_ID());
		func_278(0);
	}
	if (!func_23())
	{
		return 0;
	}
	return 1;
}

int func_23()//Position - 0x54C
{
	int iVar0;
	struct<104> Var1;
	int iVar105;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (!func_331(0))
	{
		if (func_125(func_277(PLAYER::PLAYER_ID()), &Local_145, &(Local_145.f_3)))
		{
			func_124(0);
		}
	}
	if (func_122(func_123()) && func_331(0))
	{
		MISC::CLEAR_AREA(Local_145, 5f, true, false, false, false);
		if (func_119(&(Local_92.f_6), func_123(), Local_145, Local_145.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_16();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			func_118(iVar0);
			ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar0, true);
			Var1 = { func_117() };
			func_24(iVar0, &Var1, 0, 1, 0);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar105 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				MISC::SET_BIT(&iVar105, 11);
				DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar105);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_123());
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x65A
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != func_116())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_89(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (func_88(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (func_87(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (BitTest(uParam1->f_103, 0) || func_86(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
					func_85(iParam0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
					func_84(iParam0);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (func_83(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			if (uParam1->f_97 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			}
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (func_82(iParam0))
			{
				func_76(iParam0, func_79(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_46(iParam0, &(uParam1->f_81));
			}
			if ((!func_36(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_29(iParam0);
			}
			if (func_28(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_26(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21454 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21454 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_25(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xB7E
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_26(int iParam0)//Position - 0xB8E
{
	return (func_88(iParam0) && !func_27(iParam0));
}

int func_27(int iParam0)//Position - 0xBA8
{
	switch (iParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case joaat("envisage"):
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xBDD
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_29(int iParam0)//Position - 0xCE4
{
	struct<3> Var0;
	
	if (Global_262145.f_19899 /* Tunable: ENABLED_LOCK_ANY_AMBIENT_DOZER_OF_THIS_ZOLA */)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.f_0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_30(Var0);
			}
		}
	}
}

void func_30(struct<3> Param0)//Position - 0xD6F
{
	struct<4> Var0;
	
	Var0.f_0 = -1251853784;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = Param0.f_0;
	Var0.f_3.f_1 = Param0.f_1;
	Var0.f_3.f_2 = Param0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, func_31(1, 1), Var0.f_0);
}

var func_31(int iParam0, bool bParam1)//Position - 0xDB0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_351(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_32(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_32(int iParam0, int iParam1)//Position - 0xE15
{
	bool bVar0;
	
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)//Position - 0xE6E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()//Position - 0xEAF
{
	return Global_1574926;
}

int func_35(var uParam0)//Position - 0xEBB
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

int func_36(int iParam0)//Position - 0xEDD
{
	int iVar0;
	
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (func_44(iVar0) == iParam0)
			{
				if (func_37(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_37(int iParam0)//Position - 0xF18
{
	return func_38(iParam0, 6, 1);
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0xF28
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101740.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_43() == 0)
		{
			return BitTest(func_39(func_42(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114135.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_39(int iParam0, int iParam1)//Position - 0xF88
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_40(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_40(int iParam0, var uParam1)//Position - 0xFB7
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_41(uParam1));
}

int func_41(var uParam0)//Position - 0xFCC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
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

int func_42(int iParam0)//Position - 0x1000
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 13519;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		case 61:
			return 12447;
			break;
		
		default:
			break;
	}
	return 15468;
}

int func_43()//Position - 0x13B7
{
	return Global_33087;
}

int func_44(int iParam0)//Position - 0x13C2
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
		
		case 61:
			return 3;
			break;
	}
	return 6;
}

bool func_45()//Position - 0x1705
{
	return Global_101740.f_400 > 0;
}

int func_46(int iParam0, var* uParam1)//Position - 0x1716
{
	int iVar0;
	int iVar1;
	
	if (!func_56(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_54(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_49(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_47(iParam0))
	{
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x1793
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577965));
			iVar3 = 20000;
			if (Global_1836691)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
				func_48(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_48(int iParam0)//Position - 0x1820
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_49(int iParam0, int iParam1)//Position - 0x1878
{
	func_53();
	if (Global_1574633.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0))
	{
		Global_1943806.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
		if (Global_1943806.f_11 < 0f)
		{
			Global_1943806.f_11 = 0f;
		}
	}
	func_51(*iParam0, &Global_1943806, &(Global_1943806.f_1), &(Global_1943806.f_4), &(Global_1943806.f_7), &(Global_1943806.f_10));
	Global_1943806.f_1.f_2 = (Global_1943806.f_1.f_2 - Global_1943806.f_11);
	if (Global_1943806.f_4.f_2 < 0f)
	{
		Global_1943806.f_12 = 1;
	}
	Global_1943806.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1943806.f_13 = 255;
	}
	if (Global_1943806.f_12)
	{
		if (func_50(iParam0, iParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577965 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1943806.f_14 = { Global_1943806.f_1 };
		Global_1943806.f_14 = (Global_1943806.f_14 * -1f);
		Global_1943806.f_17 = { Global_1943806.f_4 };
		Global_1943806.f_17 = (Global_1943806.f_17 * -1f);
		Global_1943806.f_20 = { Global_1943806.f_7 };
		Global_1943806.f_20.f_1 = (Global_1943806.f_20.f_1 * -1f);
		Global_1943806.f_20.f_2 = (Global_1943806.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1943806.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1943806.f_23 = 3;
		}
		Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1943806.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1943806.f_24 = 3;
		}
		if (((Global_1943806.f_23 == 0 && func_50(iParam0, iParam1, Global_1943806, Global_1943806.f_1, Global_1943806.f_4, Global_1943806.f_7, Global_1943806.f_10, 0, Global_1943806.f_13)) || Global_1943806.f_23 != 0) && ((Global_1943806.f_24 == 0 && func_50(iParam0, iParam1, Global_1943806, Global_1943806.f_14, Global_1943806.f_17, Global_1943806.f_20, Global_1943806.f_10, 1, Global_1943806.f_13)) || Global_1943806.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577965 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577965 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_50(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, int iParam13, int iParam14)//Position - 0x1B23
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param6, Param9, fParam12, iParam13, iParam14);
}

int func_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1B4C
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_52(Global_1943832, 0f, 0f, 0f, 0) && !func_52(Global_1943835, 0f, 0f, 0f, 0)) && !func_52(Global_1943838, 0f, 0f, 0f, 0)) && !Global_1943841 == 0f)
	{
		*uParam2 = { Global_1943832 };
		*uParam3 = { Global_1943835 };
		*uParam4 = { Global_1943838 };
		*uParam5 = Global_1943841;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("driftfuto2"):
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("driftjester3"):
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("driftcheburek"):
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
		case joaat("driftnebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("cypher"):
		case joaat("driftcypher"):
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("sentinel4"):
		case joaat("driftsentinel"):
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("powersurge"):
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("entity3"):
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("manchez3"):
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("surfer3"):
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("boor"):
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("eudora"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7f;
			break;
		
		case joaat("tulip2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("r300"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("virtue"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi8"):
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("broadway"):
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("panthere"):
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("tahoma"):
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("everon2"):
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.6f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("l35"):
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("brigham"):
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("gauntlet6"):
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("stingertt"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("buffalo5"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("ratel"):
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.42f;
			break;
		
		case joaat("clique2"):
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("driftfr36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("driftyosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("driftremus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("aleutian"):
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("dominator9"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fr36"):
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("cavalcade3"):
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("impaler5"):
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("asterope2"):
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.46f;
			break;
		
		case joaat("dorado"):
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("impaler6"):
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
		
		case joaat("vivanite"):
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vorschlaghammer"):
		case joaat("driftvorschlag"):
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("polimpaler5"):
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("castigator"):
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("polimpaler6"):
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.41f;
			break;
		
		case joaat("pipistrello"):
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2375f;
			break;
		
		case joaat("envisage"):
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("dominator10"):
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite1500"):
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("eurosx32"):
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("niobe"):
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette5"):
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paragon3"):
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pizzaboy"):
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("chavosv6"):
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*uParam5 = 0.365f;
			break;
		
		case joaat("banshee3"):
		case joaat("jester5"):
		case joaat("coquette6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
		
		case joaat("uranus"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.335f;
			break;
		
		case joaat("firebolt"):
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.445f;
			break;
	}
	return 1;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x785F
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_53()//Position - 0x78A6
{
	Global_1943806 = 0;
	Global_1943806.f_1 = { 0f, 0f, 0f };
	Global_1943806.f_4 = { 0f, 0f, 0f };
	Global_1943806.f_7 = { 0f, 0f, 0f };
	Global_1943806.f_10 = 0f;
	Global_1943806.f_11 = 0f;
	Global_1943806.f_12 = 0;
	Global_1943806.f_13 = 0;
	Global_1943806.f_14 = { 0f, 0f, 0f };
	Global_1943806.f_17 = { 0f, 0f, 0f };
	Global_1943806.f_20 = { 0f, 0f, 0f };
	Global_1943806.f_23 = 0;
	Global_1943806.f_24 = 0;
}

int func_54(int iParam0)//Position - 0x791F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_55(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x7957
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_56(int iParam0, var* uParam1)//Position - 0x799C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_116();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_68(15, 0))
		{
			bVar1 = true;
		}
		else if (func_64(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((!bVar1 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) && ((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1)))
	{
		iVar2 = Global_2359296[func_63() /*5571*/].f_681.f_2;
		if (iVar2 > -1 && iVar2 < 547)
		{
			if (BitTest(Global_1586535[iVar2 /*143*/].f_104, 8))
			{
				bVar1 = true;
			}
		}
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_116()) || !func_351(iVar0, 0, 0)) || !bVar1) || func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)//Position - 0x7AF9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_59(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_58(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1943831)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case joaat("brickade2"):
		case joaat("journey2"):
		case joaat("stingertt"):
		case joaat("drifttampa"):
		case joaat("turismo3"):
		case joaat("polgauntlet"):
		case joaat("police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case joaat("vigero3"):
		case joaat("terminus"):
		case joaat("polimpaler5"):
		case joaat("polimpaler6"):
		case joaat("polgreenwood"):
		case joaat("poldorado"):
		case joaat("poldominator10"):
		case joaat("polterminus"):
		case joaat("polcoquette4"):
		case joaat("polcaracara"):
		case joaat("polfaction2"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("club"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x7E38
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_59(int iParam0)//Position - 0x7E64
{
	if (func_62(iParam0) == 233)
	{
		return func_60(iParam0);
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x7E81
{
	if (func_61(iParam0, 0))
	{
		return Global_1887549[iParam0 /*611*/].f_10.f_182;
	}
	return -1;
}

int func_61(int iParam0, int iParam1)//Position - 0x7EA4
{
	if (func_35(iParam0))
	{
		if (Global_1887549[iParam0 /*611*/].f_10.f_33 != -1 || (iParam1 && Global_1887549[iParam0 /*611*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x7EE8
{
	if (func_35(iParam0))
	{
		if (func_61(iParam0, 0))
		{
			return Global_1887549[iParam0 /*611*/].f_10.f_33;
		}
	}
	return -1;
}

int func_63()//Position - 0x7F14
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_64(bool bParam0)//Position - 0x7F21
{
	return func_65(PLAYER::PLAYER_ID(), bParam0);
}

int func_65(int iParam0, bool bParam1)//Position - 0x7F33
{
	return func_66(iParam0, bParam1, 1);
}

int func_66(int iParam0, bool bParam1, int iParam2)//Position - 0x7F44
{
	int iVar0;
	
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_67(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887549[iParam0 /*611*/].f_10;
	if (func_35(iVar0) && Global_1887549[iVar0 /*611*/].f_10.f_431 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x7FA0
{
	if (func_35(iParam0))
	{
		if (func_35(Global_1887549[iParam0 /*611*/].f_10))
		{
			if (Global_1887549[iParam0 /*611*/].f_10 == iParam0 && Global_1887549[iParam0 /*611*/].f_10.f_431 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)//Position - 0x7FEF
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_73(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_70(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_69(iVar1));
}

int func_69(int iParam0)//Position - 0x8050
{
	return (iParam0 % 32);
}

var func_70(int iParam0)//Position - 0x805D
{
	var uVar0;
	
	uVar0 = func_39(func_71(iParam0), -1);
	return uVar0;
}

int func_71(var uParam0)//Position - 0x8074
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_72(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_72(int iParam0)//Position - 0x80A1
{
	return (iParam0 / 32);
}

int func_73(int iParam0)//Position - 0x80AE
{
	if (iParam0 != func_116())
	{
		if (func_74(iParam0) && Global_2657991[iParam0 /*467*/].f_324.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x80E3
{
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 22;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x812A
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

void func_76(int iParam0, int iParam1)//Position - 0x8646
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_78(iParam1);
	func_77(iVar1, &iVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, iVar0);
}

bool func_77(int iParam0, var uParam1)//Position - 0x8667
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_78(int iParam0)//Position - 0x8929
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x89C7
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_80()) && Global_1576240)
	{
		if ((iParam0 == Global_1576241 && iParam1 == Global_1576242) && iParam2 == Global_1576243)
		{
			return 13;
		}
	}
	return 0;
}

int func_80()//Position - 0x8BA9
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_81() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_81()//Position - 0x8BF1
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_82(int iParam0)//Position - 0x8C06
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_83(int iParam0, var uParam1)//Position - 0x8C27
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_84(int iParam0)//Position - 0x8F28
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MLJ"))
			{
				if (DECORATOR::DECOR_REMOVE(iParam0, "MLJ"))
				{
				}
			}
		}
	}
}

void func_85(int iParam0)//Position - 0x8F5A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", 2))
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "MLJ"))
			{
				if (DECORATOR::DECOR_SET_BOOL(iParam0, "MLJ", true))
				{
				}
			}
		}
	}
}

int func_86(int iParam0)//Position - 0x8F8E
{
	switch (iParam0)
	{
		case joaat("jester5"):
			return 1;
			break;
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x8FAB
{
	if (!Global_79539 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("feltzer3"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 0);
		
		case joaat("comet5"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 1);
		
		case joaat("bati2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 2);
		
		case joaat("stingergt"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 3);
		
		case joaat("sanchez"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 4);
		
		case joaat("sanchez2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 5);
		
		case joaat("infernus"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 6);
		
		case joaat("cog55"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 7);
		
		case joaat("ninef"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 8);
		
		case joaat("ninef2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 9);
		
		case joaat("cheburek"):
		case joaat("driftcheburek"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 10);
		
		case joaat("savestra"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 11);
		
		case joaat("xa21"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 12);
		
		case joaat("s80"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 13);
		
		case joaat("double"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 14);
		
		case joaat("buffalo2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 15);
		
		case joaat("ztype"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 16);
		
		case joaat("cog552"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 17);
		
		case joaat("baller5"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 18);
		
		case joaat("bati"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 19);
		
		case joaat("polgauntlet"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 20);
		
		case joaat("polgreenwood"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 21);
		
		case joaat("weevil2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 22);
		
		case joaat("zentorno"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 23);
		
		case joaat("jester4"):
		case joaat("driftjester"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 24);
		
		case joaat("le7b"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 25);
		
		case joaat("dukes2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 26);
		
		case joaat("eudora"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 27);
		
		case joaat("broadway"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 28);
		
		case joaat("caracara2"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 29);
		
		case joaat("comet7"):
			return BitTest(Global_262145.f_36136 /* Tunable: -654758752 */, 30);
		
		case joaat("futo2"):
		case joaat("driftfuto"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 0);
		
		case joaat("manchez2"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 1);
		
		case joaat("zombieb"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 2);
		
		case joaat("shotaro"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 3);
		
		case joaat("pipistrello"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 4);
		
		case joaat("police5"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 5);
		
		case joaat("polimpaler5"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 6);
		
		case joaat("polimpaler6"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 7);
		
		case joaat("rumpo3"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 8);
		
		case joaat("gauntlet4"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 9);
		
		case joaat("comet6"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 10);
		
		case joaat("krieger"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 11);
		
		case joaat("vigero2"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 12);
		
		case joaat("polcaracara"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 13);
		
		case joaat("polterminus"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 14);
		
		case joaat("polcoquette4"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 15);
		
		case joaat("polfaction2"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 16);
		
		case joaat("zorrusso"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 17);
		
		case joaat("tigon"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 18);
		
		case joaat("cyclone"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 19);
		
		case joaat("neo"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 20);
		
		case joaat("locust"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 21);
		
		case joaat("jester5"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 22);
		
		case joaat("chavosv6"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 23);
		
		case joaat("jb7002"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 24);
		
		case joaat("coquette6"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 25);
		
		case joaat("uranus"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 26);
		
		case joaat("firebolt"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 27);
		
		case joaat("banshee3"):
			return BitTest(Global_262145.f_36137 /* Tunable: -1019215570 */, 28);
		
		default:
	}
	return 0;
}

int func_88(int iParam0)//Position - 0x94FC
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("aleutian"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case joaat("terminus"):
		case joaat("envisage"):
		case joaat("paragon3"):
			return 1;
			break;
	}
	return 0;
}

void func_89(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x958B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_114(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_113(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_113(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_113(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_113(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_113(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_113(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_113(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_113(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_113(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_113(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_113(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_113(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_113(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_113(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_113(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_113(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_113(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_111(uParam1->f_5) || func_111(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_110(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_109())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_108(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_107(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_107(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_98(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_113(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_92() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_91(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_90(iParam0, 5f))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_90(int iParam0, float fParam1)//Position - 0x9C8E
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_91(bool bParam0)//Position - 0x9CFF
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_92()//Position - 0x9D19
{
	if ((((Global_4718592.f_118493 == 6 || Global_4718592.f_118493 == 7) || Global_4718592.f_118493 == 18) || Global_4718592.f_118493 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_96(7))
	{
		if (func_94(Global_2672939.f_4.f_16) || func_93(Global_2672939.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_93(var uParam0)//Position - 0x9DA8
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882780[iVar0 /*149*/].f_82.f_66 != 0;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x9DCC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_95(iParam0, 9);
	}
	return 0;
}

var func_95(int iParam0, int iParam1)//Position - 0x9DEA
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

bool func_96(int iParam0)//Position - 0x9E02
{
	return func_97(&(Global_2672939.f_194), iParam0);
}

var func_97(var uParam0, var uParam1)//Position - 0x9E16
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_98(int iParam0, var uParam1, var uParam2)//Position - 0x9E39
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_105(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_103(ENTITY::GET_ENTITY_MODEL(*iParam0)) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_101(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_101(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_100(iParam0);
	if (func_99(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_99(int iParam0)//Position - 0xA012
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_100(var uParam0)//Position - 0xA0EC
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_101(int iParam0, int iParam1)//Position - 0xA143
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
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
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_102(iParam0, 38) + 1;
		iVar1 = func_102(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0xA22C
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153027) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153027)) && Global_153028 == iParam1)
	{
		return Global_153029;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_105(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_103(int iParam0)//Position - 0xA28E
{
	if (func_104(iParam0, 1))
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

int func_104(int iParam0, int iParam1)//Position - 0xA2B9
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

int func_105(int iParam0, int iParam1, int iParam2)//Position - 0xA698
{
	if (!func_106() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0xA6BC
{
	return 0;
}

void func_107(int iParam0, int iParam1)//Position - 0xA6C5
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_108(int iParam0)//Position - 0xA73D
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_109()//Position - 0xA75D
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_110(int iParam0)//Position - 0xA76E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_111(int iParam0)//Position - 0xA7B0
{
	if (!func_106() && func_112(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)//Position - 0xA7D0
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0xA823
{
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
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_114(int iParam0)//Position - 0xA8D3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_115(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_59(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_58(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)//Position - 0xA95A
{
	int iVar0;
	
	if (func_351(iParam0, 1, 1))
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

int func_116()//Position - 0xA9A7
{
	return -1;
}

struct<104> func_117()//Position - 0xA9B0
{
	struct<104> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_123();
	switch (Var0.f_66)
	{
		case joaat("cogcabrio"):
			Var0.f_5 = 141;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 82;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 3;
			break;
		
		case joaat("windsor"):
			Var0.f_5 = 9;
			Var0.f_6 = 5;
			Var0.f_7 = 7;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 2;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 32;
			break;
		
		case joaat("fugitive"):
			Var0.f_5 = 147;
			Var0.f_7 = 4;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 26);
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 41;
			break;
		
		case joaat("superd"):
			Var0.f_5 = 62;
			Var0.f_6 = 1;
			Var0.f_7 = 70;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[23] = 24;
			break;
		
		case joaat("dubsta2"):
			Var0.f_5 = 13;
			Var0.f_6 = 12;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 1;
			Var0.f_69 = 3;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[10] = 2;
			Var0.f_9[15] = 4;
			Var0.f_9[22] = 1;
			break;
		
		case joaat("feltzer2"):
			Var0.f_5 = 50;
			Var0.f_6 = 28;
			Var0.f_7 = 92;
			Var0.f_8 = 156;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_98 = 0;
			Var0.f_65 = 3;
			Var0.f_69 = 7;
			Var0.f_62 = 255;
			Var0.f_63 = 255;
			Var0.f_64 = 255;
			Var0.f_74 = 255;
			Var0.f_76 = 255;
			Var0.f_67 = 0;
			MISC::SET_BIT(&(Var0.f_77), 9);
			Var0.f_9[0] = 1;
			Var0.f_9[15] = 4;
			Var0.f_9[23] = 20;
			break;
	}
	return Var0;
}

void func_118(int iParam0)//Position - 0xACC6
{
	if (!Global_262145.f_4373 /* Tunable: DISABLE_RAMMING_SOOP_AND_RAMP */)
	{
		VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
	}
}

int func_119(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xACE0
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
	if (iParam1 == joaat("bombushka") || iParam1 == joaat("titan2"))
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
		Global_2739811.f_6838 = iVar1;
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
			func_120(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_120(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xADF8
{
	int iVar0;
	
	if (func_121(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635516.f_3231[1 /*6*/].f_5 == iParam5 && Global_2635516.f_3231[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635516.f_3231[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635516.f_3231[iVar0 /*6*/] = { Global_2635516.f_3231[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635516.f_3231[1 /*6*/] = { Param0 };
		Global_2635516.f_3231[1 /*6*/].f_3 = fParam3;
		Global_2635516.f_3231[1 /*6*/].f_4 = iParam4;
		Global_2635516.f_3231[1 /*6*/].f_5 = iParam5;
	}
}

int func_121(int iParam0, struct<3> Param1, int iParam4)//Position - 0xAECB
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
			if (Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_122(int iParam0)//Position - 0xAF69
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_123()//Position - 0xAF87
{
	return Global_1887549[func_17() /*611*/].f_10.f_307;
}

void func_124(int iParam0)//Position - 0xAF9F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_142[iVar0]), iVar1);
}

int func_125(struct<3> Param0, var uParam3, var uParam4)//Position - 0xAFC1
{
	struct<31> Var0;
	
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_0 = func_276();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_126(Param0, 0f, 0f, 0f, func_123(), 1, uParam3, uParam4, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_126(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)//Position - 0xB05C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<61> Var6;
	struct<61> Var67;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_274())
	{
		return 0;
	}
	if (func_273() && !func_272())
	{
		if (!Global_2635516.f_677 == 0)
		{
			Global_2635516.f_677 = 0;
			func_271();
			func_270();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_676)
	{
		if (!Global_2635516.f_677 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_680) < func_269(0))
			{
				return 0;
			}
			else
			{
				Global_2635516.f_677 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_678) > 30000)
		{
			Global_2635516.f_677 = 0;
		}
		if (!Global_2635516.f_677 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_680) > func_269(1))
			{
				Global_2635516.f_677 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_263(Param0))
		{
			if (func_262(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2635516.f_677 == 0)
	{
		if (SYSTEM::VDIST(Global_2635516.f_696, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2635516.f_699 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2635516.f_677 == 0)
	{
		Global_2635516.f_683 = 0;
		Global_2635516.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635516.f_676 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635516.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635516.f_696 = { Param0 };
		Global_2635516.f_699 = iParam6;
		Global_2635516.f_682 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_261();
		func_271();
		if (!uParam10->f_27 || (((((((((((func_260(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2739811.f_968) && !Global_2739811.f_956) && !Global_2739811.f_964) && !Global_2739811.f_969) && !Global_2739811.f_991) && !Global_2739811.f_1003) && !Global_2739811.f_970) && !Global_2739811.f_1025) && !BitTest(Global_2739811.f_972, 0)) && !BitTest(Global_2739811.f_972, 1)))
		{
			func_240(Param0, iParam6);
		}
		if (func_225(Param0))
		{
			func_240(Param0, iParam6);
		}
		if (BitTest(Global_2739811.f_971, 2))
		{
			func_270();
			iVar2 = func_224(iParam6);
			if (!BitTest(Global_2739811.f_971, 3))
			{
				switch (iVar2)
				{
					case 0:
						func_223(2137.4094f, 4816.817f, 40.196f, 130.7968f);
						func_223(2034.4725f, 4776.724f, 40.1741f, 130.1973f);
						func_223(2006.285f, 4763.084f, 40.1767f, 124.197f);
						func_223(2046.186f, 4752.8853f, 40.0805f, 106.3966f);
						func_223(2017.498f, 4739.7866f, 40.215f, 102.9966f);
						break;
					
					case 1:
						func_223(2103.224f, 4793.5376f, 40.0395f, 112.5981f);
						func_223(2122.2744f, 4802.774f, 40.1507f, 114.3981f);
						func_223(2147.7366f, 4807.85f, 40.1818f, 101.9978f);
						break;
					
					case 2:
						func_223(2069.784f, 4776.1724f, 40.038f, 114.1993f);
						break;
					}
			}
			if (BitTest(Global_2739811.f_971, 1))
			{
				func_219(iParam6);
			}
		}
		Global_2635516.f_677 = 2;
	}
	switch (Global_2635516.f_677)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2635516.f_684 = { Param0 };
				Global_2635516.f_687 = 0f;
				if ((Global_2739811.f_968 || BitTest(Global_2739811.f_972, 0)) || BitTest(Global_2739811.f_972, 1))
				{
					fVar3 = 10f;
					fVar4 = 5f;
					fVar5 = 5f;
				}
				else
				{
					fVar3 = 4f;
					fVar4 = 1f;
					fVar5 = 1f;
				}
				if (((uParam10->f_3 && func_211(Param0, fVar3, fVar4, fVar5, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_209(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2635516.f_684 = { Param0 };
					Global_2635516.f_687 = *uParam9;
				}
				else
				{
					Var6.f_6 = 1082130432;
					Var6.f_7 = 1176255488;
					Var6.f_8 = 1;
					Var6.f_10 = 1;
					Var6.f_13 = 1;
					Var6.f_15 = 1;
					Var6.f_16 = 1;
					Var6.f_31 = 1;
					Var6.f_34 = joaat("tailgater");
					Var6.f_38 = 2;
					Var6.f_45 = 2;
					Var6.f_49 = 1123024896;
					Var6.f_53 = 999;
					Var6.f_54 = 1176256410;
					Var6.f_55 = 1;
					Var6.f_56 = 1;
					Var6.f_57 = 1;
					Var6.f_9 = iParam7;
					Var6.f_3 = 7f;
					Var6.f_10 = uParam10->f_5;
					Var6.f_4 = *uParam10;
					Var6.f_13 = uParam10->f_1;
					Var6.f_14 = uParam10->f_2;
					Var6.f_5 = uParam10->f_4;
					Var6.f_15 = uParam10->f_6;
					Var6.f_11 = uParam10->f_7;
					Var6.f_6 = uParam10->f_8;
					Var6.f_7 = uParam10->f_9;
					Var6.f_16 = uParam10->f_10;
					Var6.f_17 = uParam10->f_11;
					Var6 = { Param3 };
					Var6.f_12 = 1;
					Var6.f_34 = iParam6;
					Var6.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2635516.f_683 > 0)
					{
						Var6.f_30 = 0;
						Var6.f_29 = 1;
					}
					else
					{
						Var6.f_30 = uParam10->f_30;
						Var6.f_29 = uParam10->f_31;
					}
					Var6.f_48 = uParam10->f_14;
					Var6.f_56 = uParam10->f_25;
					Var6.f_57 = uParam10->f_26;
					Var6.f_49 = uParam10->f_29;
					Var6.f_59 = uParam10->f_33;
					Var6.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var6.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var6.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					if (!BitTest(Global_2750352, 0))
					{
						if (func_208(Global_2635516.f_684))
						{
							Global_2635516.f_684 = { 270.6082f, -2781.5972f, 5.0207f };
						}
					}
					func_152(&(Global_2635516.f_684), &(Global_2635516.f_687), &Var6);
				}
				func_150(Global_2635516.f_684, Global_2635516.f_687, iParam6, &(Global_2635516.f_674));
				Global_2635516.f_672 = 0;
				Global_2635516.f_673 = 0;
				Global_2635516.f_683++;
				Global_2635516.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635516.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635516.f_677 = 3;
			}
			break;
		
		case 3:
			if (Global_2635516.f_672)
			{
				if (Global_2635516.f_674 == Global_2635516.f_675)
				{
					if (Global_2635516.f_673)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_149(Global_2635516.f_684, Global_2635516.f_687, iParam6, 1, 1036831949))
							{
								Global_2635516.f_677 = 4;
								Global_2635516.f_701 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_147(Global_2635516.f_684, 0);
						func_146(-1);
					}
				}
				else
				{
					Global_2635516.f_672 = 0;
					Global_2635516.f_673 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_679) > 3000)
			{
				func_146(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_701) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635516.f_700))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635516.f_700))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635516.f_700))
							{
								if (func_145(Global_2635516.f_684, Global_2635516.f_687, iParam6, PLAYER::PLAYER_ID(), 0) || func_128(Global_2635516.f_684, Global_2635516.f_687, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_147(Global_2635516.f_684, 0);
									func_146(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_147(Global_2635516.f_684, 0);
								func_146(-1);
							}
						}
					}
					else
					{
						func_146(-1);
					}
				}
				else
				{
					func_146(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2635516.f_684 = { Param0 };
			Global_2635516.f_687 = 0f;
			Var67.f_6 = 1082130432;
			Var67.f_7 = 1176255488;
			Var67.f_8 = 1;
			Var67.f_10 = 1;
			Var67.f_13 = 1;
			Var67.f_15 = 1;
			Var67.f_16 = 1;
			Var67.f_31 = 1;
			Var67.f_34 = joaat("tailgater");
			Var67.f_38 = 2;
			Var67.f_45 = 2;
			Var67.f_49 = 1123024896;
			Var67.f_53 = 999;
			Var67.f_54 = 1176256410;
			Var67.f_55 = 1;
			Var67.f_56 = 1;
			Var67.f_57 = 1;
			Var67.f_9 = iParam7;
			Var67.f_3 = 3.5f;
			Var67.f_10 = uParam10->f_5;
			Var67.f_4 = *uParam10;
			Var67.f_12 = 1;
			Var67.f_13 = 0;
			Var67.f_15 = uParam10->f_6;
			Var67.f_11 = uParam10->f_7;
			Var67.f_6 = uParam10->f_8;
			Var67.f_7 = uParam10->f_9;
			Var67 = { Param3 };
			Var67.f_34 = iParam6;
			Var67.f_31 = uParam10->f_13;
			Var67.f_30 = 1;
			Var67.f_48 = uParam10->f_14;
			Var67.f_56 = uParam10->f_25;
			Var67.f_57 = uParam10->f_26;
			Var67.f_30 = uParam10->f_30;
			Var67.f_29 = uParam10->f_31;
			Var67.f_59 = uParam10->f_33;
			Var67.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var67.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var67.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var67.f_49 = uParam10->f_29;
			func_152(&(Global_2635516.f_684), &(Global_2635516.f_687), &Var67);
			Global_2635516.f_677 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2635516.f_696 = { Param0 };
	Global_2635516.f_699 = iParam6;
	Global_2635516.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2635516.f_517 = 0;
		*uParam8 = { Global_2635516.f_684 };
		*uParam9 = Global_2635516.f_687;
		func_127(1);
		return 1;
	}
	return 0;
}

void func_127(bool bParam0)//Position - 0xBAEB
{
	Global_2635516.f_677 = 0;
	func_261();
	func_271();
	if (bParam0)
	{
		func_270();
	}
}

int func_128(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0xBB0C
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_351(iVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_144(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_139(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_138(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_129(func_277(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)//Position - 0xBC7F
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_137(iParam7, 1008981770))
	{
		func_130(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_130(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0xBCD2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_136(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_131(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_131(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xBD9E
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_134(iParam0);
		if (iVar0 != 0)
		{
			func_132(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_132(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xBE9D
{
	int iVar0;
	
	func_133(iParam0, &Global_1578046);
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

void func_133(int iParam0, var uParam1)//Position - 0xC0AD
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

int func_134(int iParam0)//Position - 0xC12E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_135(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)//Position - 0xC15D
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_136(var uParam0, struct<3> Param1)//Position - 0xC16F
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_137(int iParam0, float fParam1)//Position - 0xC246
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_131(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_138(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)//Position - 0xC2C6
{
	if (func_129(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_130(Param0, fParam3, iParam4, &Global_1976100, &(Global_1976100.f_3), &(Global_1976100.f_6), 1036831949);
	func_130(Param5, fParam8, iParam9, &(Global_1976100.f_7), &(Global_1976100.f_10), &(Global_1976100.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1976100, Global_1976100.f_3, Global_1976100.f_6, Global_1976100.f_7, Global_1976100.f_10, Global_1976100.f_13))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0xC364
{
	if (func_143(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2707651 = { func_142(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707651))
	{
		return 1;
	}
	if (func_140(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0xC3AB
{
	int iVar0;
	
	iVar0 = func_141(iParam0);
	if (func_35(iVar0))
	{
		if (iVar0 == func_141(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0)//Position - 0xC3D4
{
	if (func_35(iParam0))
	{
		return Global_1887549[iParam0 /*611*/].f_10;
	}
	return func_116();
}

struct<13> func_142(int iParam0)//Position - 0xC3F7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_143(int iParam0, int iParam1)//Position - 0xC40E
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707651 = { func_142(iParam0) };
		Global_2707664 = { func_142(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707651))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707664))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707581, 35, &Global_2707651);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707616, 35, &Global_2707664);
				if (Global_2707581 == Global_2707616)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_144(int iParam0)//Position - 0xC47B
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657991[iParam0 /*467*/].f_258)
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC4A7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_351(iVar1, 0, 1) && func_351(iParam5, 0, 1))
			{
				if (Global_2648914.f_261[iVar0])
				{
					if (func_129(Global_2648914.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_129(func_277(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648914.f_261[iVar0])
			{
				if (func_129(Global_2648914.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_351(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_129(func_277(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_146(int iParam0)//Position - 0xC5B6
{
	if (Global_2635516.f_683 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_682) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2635516.f_683 < iParam0))
		{
			Global_2635516.f_677 = 2;
		}
		else
		{
			Global_2635516.f_677 = 5;
		}
	}
	else
	{
		Global_2635516.f_677 = 5;
	}
}

void func_147(struct<3> Param0, int iParam3)//Position - 0xC621
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_148(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2635516.f_3038[iParam3 /*3*/] };
		Global_2635516.f_3038[iParam3 /*3*/] = { Param0 };
		func_147(Var0, iParam3 + 1);
	}
}

int func_148(struct<3> Param0, float fParam3)//Position - 0xC68A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2635516.f_3038[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_149(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)//Position - 0xC6C5
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_271();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2635516.f_688[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_130(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2635516.f_688[iVar7] = NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var3, fParam6);
				Global_2635516.f_692[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2635516.f_700 = Global_2635516.f_688[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_150(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0xC796
{
	struct<9> Var0;
	
	*uParam5 = func_151(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 323285304;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = uParam3;
	Var0.f_7 = iParam4;
	Var0.f_8 = *uParam5;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_31(1, 1), Var0.f_0);
}

int func_151(var uParam0, var uParam1, var uParam2)//Position - 0xC7E8
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_152(var uParam0, var uParam1, var uParam2)//Position - 0xC836
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635516.f_2055 > 0)
	{
		iVar0 = 0;
		while (func_203(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_153(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_153(var uParam0, var uParam1, var uParam2)//Position - 0xC8A5
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_199(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_194(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643430.f_162 = 0;
	Global_2643430.f_163 = 0;
	Global_2643430.f_164 = -99;
	Global_2643430.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643430[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643430.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_134(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643430.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643430.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_187(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_184(Var1))
									{
										Var1 = { func_179(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_178(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_174(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_194(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_173(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_199(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_172(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_211(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_211(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_128(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_162(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643430.f_162)
																										{
																											Global_2643430[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643430.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643430.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643430.f_162 == 0)
																									{
																										Global_2643430[0 /*3*/] = { Var1 };
																										Global_2643430.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643430.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643430[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_161(Var1, fVar4, iVar16);
																													iVar16 = Global_2643430.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643430.f_162++;
																									if (Global_2643430.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643430.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643430[Global_2643430.f_162 /*3*/] = { Var1 };
																									Global_2643430.f_121[Global_2643430.f_162] = fVar4;
																									Global_2643430.f_162++;
																									if (func_174(Var1, uParam2))
																									{
																										Global_2643430.f_163++;
																									}
																									if (Global_2643430.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643430.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643430.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643430[0 /*3*/] };
						*uParam1 = Global_2643430.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643430.f_163 > 0 && !Global_2643430.f_163 == Global_2643430.f_162)
						{
							func_159(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643430.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643430[0 /*3*/] };
						uVar30 = Global_2643430.f_121[0];
						Global_2643430[0 /*3*/] = { Global_2643430[iVar26 /*3*/] };
						Global_2643430.f_121[0] = Global_2643430.f_121[iVar26];
						Global_2643430[iVar26 /*3*/] = { Var27 };
						Global_2643430.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643430[0 /*3*/] };
						*uParam1 = Global_2643430.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_158(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_199(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_194(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_154(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643430.f_164 = iVar8;
	}
	return 0;
}

void func_154(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0xD2D3
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_155(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_155(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD357
{
	if (func_157(Param0, fParam3, iParam4, iParam5, 0) || func_156(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_156(struct<3> Param0, int iParam3, int iParam4)//Position - 0xD388
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_129(Param0, Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_351(iVar2, 0, 1) && func_351(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0xD44A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_351(iVar1, 0, 1) && func_351(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_351(iVar1, 0, 1) && func_351(iParam4, 0, 1))
				{
					if (Global_2648914.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2648914.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_277(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648914.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2648914.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_351(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_277(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_158(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0xD567
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_179(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_184(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_159(int iParam0, var uParam1)//Position - 0xD604
{
	if (!func_174(Global_2643430[iParam0 /*3*/], uParam1))
	{
		Global_2643430.f_162 = (Global_2643430.f_162 - 1);
		func_160(iParam0);
		if (Global_2643430.f_162 > Global_2643430.f_163)
		{
			func_159(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_159(iParam0 + 1, uParam1);
	}
}

void func_160(int iParam0)//Position - 0xD65F
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643430[iParam0 /*3*/] = { Global_2643430[iParam0 + 1 /*3*/] };
			Global_2643430.f_121[iParam0] = Global_2643430.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_161(struct<3> Param0, float fParam3, int iParam4)//Position - 0xD6AA
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643430[iParam4 /*3*/] };
	uVar3 = Global_2643430.f_121[iParam4];
	Global_2643430[iParam4 /*3*/] = { Param0 };
	Global_2643430.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643430.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_161(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_162(struct<3> Param0, float fParam3, float fParam4)//Position - 0xD717
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_163(iVar5))
		{
			Var1 = { func_277(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_163(int iParam0)//Position - 0xD77F
{
	if (func_351(iParam0, 0, 1))
	{
		if (!func_170(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_167(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_164(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_167(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_139(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_164(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD82D
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25921, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_165(iParam0, bVar0, iParam1, bVar1) || !func_165(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_165(iParam0, bVar0, iParam1, bVar1) || !func_165(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_165(iParam0, bVar0, iParam1, bVar1) || !func_165(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_165(iParam0, bVar0, iParam1, bVar1) || !func_165(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25923[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xDB78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*26190*/].f_25922, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*26190*/].f_25922, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_351(iVar1, 1, 1) || func_32(iVar1, 0)) || BitTest(Global_2657991[iVar1 /*467*/].f_202, 2)) || func_166(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_166(int iParam0)//Position - 0xDCA4
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_36.f_18, 14);
}

int func_167(int iParam0, bool bParam1, bool bParam2)//Position - 0xDCBC
{
	if (bParam1)
	{
		if (func_168(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845221[iParam0 /*889*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_168(int iParam0)//Position - 0xDCEE
{
	return func_169(iParam0);
}

var func_169(int iParam0)//Position - 0xDCFC
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

int func_170(int iParam0)//Position - 0xDD13
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_171())
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

bool func_171()//Position - 0xDD52
{
	return BitTest(Global_2621446, 3);
}

int func_172(struct<3> Param0, float fParam3, int iParam4)//Position - 0xDD60
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_138(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_138(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_173(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xDE6C
{
	if (func_145(Param0, fParam3, iParam4, iParam5, iParam6) || func_209(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_174(struct<3> Param0, var uParam3)//Position - 0xDEA2
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_177(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_175(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_175(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0xDF33
{
	func_176(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0, var uParam1)//Position - 0xDFDE
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_177(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0xE040
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

int func_178(struct<3> Param0, float fParam3)//Position - 0xE0F3
{
	int iVar0;
	
	if (func_167(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_48340 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_48340)
			{
				if (Global_4980736.f_48341[iVar0 /*162*/].f_7 != 0)
				{
					if (func_129(Param0, Global_4980736.f_48341[iVar0 /*162*/], Global_4980736.f_48341[iVar0 /*162*/].f_6, Global_4980736.f_48341[iVar0 /*162*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_7020 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_7020)
			{
				if (Global_4980736.f_7023[iVar0 /*636*/].f_15 != 0)
				{
					if (func_129(Param0, Global_4980736.f_7023[iVar0 /*636*/], Global_4980736.f_7023[iVar0 /*636*/].f_3, Global_4980736.f_7023[iVar0 /*636*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_99612 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_99612)
			{
				if (Global_4980736.f_99616[iVar0 /*615*/].f_12 != 0)
				{
					if (func_129(Param0, Global_4980736.f_99616[iVar0 /*615*/], Global_4980736.f_99616[iVar0 /*615*/].f_3, Global_4980736.f_99616[iVar0 /*615*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_233[iVar0], false))
				{
					if (func_129(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_119[iVar0], false))
				{
					if (func_129(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_179(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)//Position - 0xE387
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_182(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_181(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_180(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_180(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_182(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_180(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_180(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_180(int iParam0, float fParam1)//Position - 0xE7D6
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_131(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_181(struct<3> Param0)//Position - 0xE80D
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0xE845
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_136(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_183(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_183(struct<3> Param0, struct<3> Param3)//Position - 0xE881
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_184(struct<3> Param0)//Position - 0xE8A2
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_186(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643137[iVar1])
	{
		if (func_185(Param0, &(Global_2642434[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643137[8])
	{
		if (func_185(Param0, &(Global_2642434[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_185(struct<3> Param0, var uParam3)//Position - 0xE91D
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_186(struct<2> Param0, var uParam2)//Position - 0xE93D
{
	if (Param0.f_1 > Global_2642425[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642425[1])
	{
		if (Param0.f_0 < Global_2642429[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642425[2])
	{
		if (Param0.f_0 < Global_2642429[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642429[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642429[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_187(var uParam0, bool bParam1)//Position - 0xE9D8
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_193(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_192(&Var1, Global_2635516.f_594, Global_2635516.f_597, 1036831949, 0, fVar4);
			if (func_188(Var1, &uVar0) || func_193(Var1))
			{
				Var1 = { *uParam0 };
				func_192(&Var1, Global_2635516.f_594, Global_2635516.f_597, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_188(struct<3> Param0, var uParam3)//Position - 0xEA70
{
	int iVar0;
	int iVar1;
	
	if (func_191())
	{
		return 0;
	}
	iVar1 = func_190();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635516.f_369[iVar0 /*12*/].f_9 == 1)
		{
			if (func_189(Param0, &(Global_2635516.f_369[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_189(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0xEAD4
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_177(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635516.f_3036) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_175(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_190()//Position - 0xEC35
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635516.f_369[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_191()//Position - 0xEC68
{
	return Global_1943917.f_740;
}

void func_192(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0xEC77
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_136(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_136(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_193(struct<3> Param0)//Position - 0xED1F
{
	float fVar0;
	
	if (Global_2635516.f_597 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2635516.f_594);
		if (fVar0 < Global_2635516.f_597)
		{
			return 1;
		}
	}
	return 0;
}

bool func_194(var uParam0, bool bParam1)//Position - 0xED58
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635516.f_26.f_18)
	{
		switch (Global_2635516.f_26.f_17)
		{
			case 0:
				if (func_177(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_175(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, Global_2635516.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_195(*uParam0, Global_2635516.f_26.f_10, Global_2635516.f_26.f_13, Global_2635516.f_26.f_16, Global_2635516.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_195(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0xEE4A
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_192(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_198(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_196(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_177(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_175(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_196(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0xEF4D
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_197(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_183(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_183(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_197(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_197(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_183(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_183(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_197(struct<3> Param0, struct<3> Param3)//Position - 0xF21C
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_198(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0xF255
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_199(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0xF354
{
	int iVar0;
	bool bVar1;
	
	if (func_263(Param0))
	{
		if (func_202(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_200(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_148(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_192(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_200(var uParam0, bool bParam1, bool bParam2)//Position - 0xF410
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_188(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_201(&Var2, &(Global_2635516.f_369[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_188(Var2, &uVar1) || func_193(Var2))
			{
				Var2 = { *uParam0 };
				func_201(&Var2, &(Global_2635516.f_369[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_201(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xF494
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_195(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635516.f_3036) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_195(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_195(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_192(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635516.f_3036) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_198(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_196(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_202(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xF59E
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_2640779[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640779[iVar0 /*17*/].f_16))
			{
				if (func_189(*uParam0, &(Global_2640779[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640779[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640779[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_201(&Var1, &(Global_2640779[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_202(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_201(&Var1, &(Global_2640779[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(var uParam0, var uParam1, var uParam2)//Position - 0xF679
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635516.f_2055 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_199(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_194(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643430.f_162 = 0;
		Global_2643430.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643430[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643430.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_206(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_205();
		}
		else
		{
			func_204();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635516.f_2055)
		{
			iVar2 = Global_2635516.f_2461[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635516.f_2056[iVar2 /*4*/] };
				fVar6 = Global_2635516.f_2056[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_173(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_199(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_172(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_211(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_211(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_128(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_162(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643430.f_162)
															{
																Global_2643430[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643430.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643430.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643430.f_162 == 0)
														{
															Global_2643430[0 /*3*/] = { Var3 };
															Global_2643430.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643430.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643430[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_161(Var3, fVar6, iVar7);
																		iVar7 = Global_2643430.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643430.f_162++;
														if (Global_2643430.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635516.f_2055;
															}
															else if (Global_2643430.f_162 == 40)
															{
																iVar1 = Global_2635516.f_2055;
															}
														}
													}
													else
													{
														Global_2643430[Global_2643430.f_162 /*3*/] = { Var3 };
														Global_2643430.f_121[Global_2643430.f_162] = fVar6;
														Global_2643430.f_162++;
														if (Global_2643430.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635516.f_2055;
															}
															else if (Global_2643430.f_162 == 40)
															{
																iVar1 = Global_2635516.f_2055;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643430.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643430[0 /*3*/] };
				*uParam1 = Global_2643430.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643430.f_163 > 0 && !Global_2643430.f_163 == Global_2643430.f_162)
				{
					func_159(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643430.f_162);
				Var15 = { Global_2643430[0 /*3*/] };
				uVar18 = Global_2643430.f_121[0];
				Global_2643430[0 /*3*/] = { Global_2643430[iVar0 /*3*/] };
				Global_2643430.f_121[0] = Global_2643430.f_121[iVar0];
				Global_2643430[iVar0 /*3*/] = { Var15 };
				Global_2643430.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643430[0 /*3*/] };
				*uParam1 = Global_2643430.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635516.f_2055 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
				*uParam0 = { Global_2635516.f_2056[iVar0 /*4*/] };
				*uParam1 = Global_2635516.f_2056[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_204()//Position - 0xFD18
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635516.f_2055)
	{
		Global_2635516.f_2461[iVar0] = iVar0;
		iVar0++;
	}
}

void func_205()//Position - 0xFD45
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635516.f_2055)
	{
		Global_2635516.f_2461[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635516.f_2055)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635516.f_2055);
		uVar3 = Global_2635516.f_2461[iVar1];
		Global_2635516.f_2461[iVar1] = Global_2635516.f_2461[iVar2];
		Global_2635516.f_2461[iVar2] = uVar3;
		iVar0++;
	}
}

void func_206(struct<3> Param0)//Position - 0xFDD6
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635516.f_2055)
	{
		uVar1 = func_207(Param0, fVar0, &fVar0);
		Global_2635516.f_2461[iVar2] = uVar1;
		iVar2++;
	}
}

int func_207(struct<3> Param0, float fParam3, float fParam4)//Position - 0xFE11
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 100000000f;
	iVar3 = 0;
	while (iVar3 < Global_2635516.f_2055)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2635516.f_2056[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_208(struct<3> Param0)//Position - 0xFE73
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 220.68407f, -3344.314f, -17.856186f, 213.95924f, -2802.1062f, 25.025482f, 240f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_209(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFEB0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_210(Param0, iParam4, Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_138(Param0, fParam3, iParam4, Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648914.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_351(iVar2, 0, 1) && func_351(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_210(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)//Position - 0xFF8A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_137(iParam3, 1008981770);
	fVar1 = func_137(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0xFFCA
{
	Global_2635516.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635516.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635516.f_2++;
	if (fParam14 > 0f)
	{
		if (func_218(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635516.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_212(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635516.f_2++;
	return 1;
}

int func_212(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x100DE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_351(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_213(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_351(iVar1, 1, 1))
		{
			if (!func_32(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_144(iVar1) || !bParam10) && !Global_2657991[iVar1 /*467*/].f_273)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_213(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_213(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_213(int iParam0)//Position - 0x10296
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_217() && Global_1845221[iVar0 /*889*/].f_866) && !func_216(Global_1845221[iVar0 /*889*/].f_867))
	{
		return Global_1845221[iVar0 /*889*/].f_867;
	}
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_215(0)) && func_214())
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	return func_277(iParam0);
}

var func_214()//Position - 0x1030B
{
	return BitTest(Global_1957675, 5);
}

bool func_215(bool bParam0)//Position - 0x10319
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

int func_216(struct<3> Param0)//Position - 0x1032A
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_217()//Position - 0x10354
{
	return Global_2684718.f_19;
}

int func_218(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x10362
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_351(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_144(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_139(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_277(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_219(int iParam0)//Position - 0x10466
{
	int iVar0;
	
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		func_223(2144.469f, 4819.2407f, 60f, 360f);
		func_223(2170.9194f, 4810.6465f, 80f, 324f);
		func_223(2187.2666f, 4788.1465f, 60f, 288f);
		func_223(2187.2666f, 4760.335f, 80f, 252f);
		func_223(2170.9194f, 4737.835f, 60f, 216f);
		func_223(2144.469f, 4729.2407f, 80f, 180f);
		func_223(2118.0186f, 4737.835f, 60f, 144f);
		func_223(2101.6714f, 4760.335f, 80f, 108f);
		func_223(2101.6714f, 4788.1465f, 60f, 72f);
		func_223(2118.0186f, 4810.6465f, 80f, 36f);
		func_223(2144.469f, 4844.2407f, 90f, 360f);
		func_223(2185.614f, 4830.872f, 70f, 324f);
		func_223(2211.043f, 4795.872f, 90f, 288f);
		func_223(2211.043f, 4752.6094f, 70f, 252f);
		func_223(2185.614f, 4717.6094f, 90f, 216f);
		func_223(2144.469f, 4704.2407f, 70f, 180f);
		func_223(2103.324f, 4717.6094f, 90f, 144f);
		func_223(2077.895f, 4752.6094f, 70f, 108f);
		func_223(2077.895f, 4795.872f, 90f, 72f);
		func_223(2103.324f, 4830.872f, 70f, 36f);
		func_223(2144.469f, 4799.2407f, 105f, 360f);
		func_223(2168.2454f, 4781.9663f, 105f, 288f);
		func_223(2159.1636f, 4754.015f, 105f, 216f);
		func_223(2129.7744f, 4754.015f, 105f, 144f);
		func_223(2120.6926f, 4781.9663f, 45.6935f, 72f);
		func_223(2183.109f, 4861.0273f, 85f, 336f);
		func_223(2238.9485f, 4764.3105f, 85f, 264f);
		func_223(2164.2207f, 4681.317f, 85f, 195.48f);
		func_223(2062.1965f, 4726.7407f, 85f, 120f);
		func_223(2073.87f, 4837.808f, 85f, 48f);
		func_223(2144.544f, 4884.1523f, 100f, 360f);
		func_223(2249.1602f, 4808.144f, 100f, 288f);
		func_223(2209.2002f, 4685.1606f, 100f, 216f);
		func_223(2079.8877f, 4685.1606f, 100f, 144f);
		func_223(2039.9277f, 4808.144f, 100f, 72f);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
		if (iVar0 & 1 == 1)
		{
			func_222();
			func_221();
			func_220();
		}
		else
		{
			func_221();
			func_222();
			func_220();
		}
	}
}

void func_220()//Position - 0x107F0
{
	func_223(1814.0328f, 4361.09f, 67.535f, 172.2609f);
	func_223(1814.0328f, 4361.09f, 108.5939f, 172.2609f);
	func_223(2185.803f, 4488.2993f, 67.535f, -149.5774f);
	func_223(2185.803f, 4488.2993f, 108.5939f, -149.5774f);
	func_223(2061.437f, 4270.964f, 77.535f, -179.8978f);
	func_223(2061.437f, 4270.964f, 113.1827f, -179.8978f);
	func_223(2309.389f, 4630.398f, 77.535f, -149.001f);
	func_223(2309.389f, 4630.398f, 113.1827f, -149.001f);
}

void func_221()//Position - 0x108B8
{
	func_223(1836.7782f, 4668.552f, 67.535f, 115.58f);
	func_223(1810.872f, 4722.671f, 67.535f, 102.24f);
	func_223(1856.2079f, 4627.9624f, 67.535f, 126f);
	func_223(1875.6376f, 4587.373f, 67.535f, 136.08f);
	func_223(1784.9657f, 4776.79f, 67.535f, 90.32f);
	func_223(1836.7782f, 4668.552f, 100.54f, 115.58f);
	func_223(1810.872f, 4722.671f, 100.54f, 102.24f);
	func_223(1856.2079f, 4627.9624f, 100.54f, 126f);
	func_223(1875.6376f, 4587.373f, 100.54f, 136.08f);
	func_223(1784.9657f, 4776.79f, 100.54f, 90.32f);
}

void func_222()//Position - 0x109B0
{
	func_223(2250.4216f, 4865.2295f, 72.8377f, -64.42f);
	func_223(2230.992f, 4905.819f, 73.6707f, -77.4f);
	func_223(2269.8513f, 4824.64f, 73.6577f, -51.48f);
	func_223(2211.5623f, 4946.408f, 72.2069f, -90.72f);
	func_223(2289.281f, 4784.051f, 73.0896f, -39.96f);
	func_223(2250.4216f, 4865.2295f, 107.8377f, -64.42f);
	func_223(2230.992f, 4905.819f, 108.6707f, -77.4f);
	func_223(2269.8513f, 4824.64f, 107.6577f, -51.48f);
	func_223(2211.5623f, 4946.408f, 108.2069f, -90.72f);
	func_223(2289.281f, 4784.051f, 107.0896f, -39.96f);
}

void func_223(struct<3> Param0, float fParam3)//Position - 0x10AA8
{
	if (Global_2635516.f_2055 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2635516.f_2056[Global_2635516.f_2055 /*4*/] = { Param0 };
		Global_2635516.f_2056[Global_2635516.f_2055 /*4*/].f_3 = fParam3;
		Global_2635516.f_2055++;
	}
}

int func_224(int iParam0)//Position - 0x10B0D
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("seasparrow"):
		case joaat("conada"):
		case joaat("conada2"):
			return 0;
		
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("akula"):
		case joaat("streamer216"):
		case joaat("raiju"):
		case joaat("duster2"):
			return 1;
		
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("cargobob5"):
		case joaat("titan2"):
			return 2;
		
		case joaat("alkonost"):
			return 3;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_225(struct<3> Param0)//Position - 0x10C97
{
	var uVar0;
	
	if (((Global_2739811.f_968 || BitTest(Global_2739811.f_972, 0)) || BitTest(Global_2739811.f_972, 1)) && func_226(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_226(struct<3> Param0, var uParam3)//Position - 0x10CDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_239(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_227(iVar1))
			{
				if (func_239(Global_1943917.f_754[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_227(int iParam0)//Position - 0x10D3F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_238(iParam0);
	if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_299 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
	if (iVar1 != func_116())
	{
		if (Global_1845221[iVar1 /*889*/].f_268.f_299 == iVar0)
		{
			return 1;
		}
	}
	if (func_237() == iParam0)
	{
		return 1;
	}
	if (func_236(PLAYER::PLAYER_ID(), 0) || (func_233(PLAYER::PLAYER_ID()) && func_75(func_232(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_231(PLAYER::PLAYER_ID()) || (func_233(PLAYER::PLAYER_ID()) && func_75(func_232(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_230(PLAYER::PLAYER_ID()) || (func_233(PLAYER::PLAYER_ID()) && func_75(func_232(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_229(PLAYER::PLAYER_ID()) || (func_233(PLAYER::PLAYER_ID()) && func_75(func_232(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_228(PLAYER::PLAYER_ID()) || (func_233(PLAYER::PLAYER_ID()) && func_75(func_232(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x10E9B
{
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x10EE1
{
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1)
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x10F28
{
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_116())
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x10F87
{
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_116())
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_232(int iParam0)//Position - 0x10FE7
{
	if (iParam0 != func_116() && func_351(iParam0, 1, 1))
	{
		return Global_2657991[iParam0 /*467*/].f_324.f_18;
	}
	return -1;
}

int func_233(int iParam0)//Position - 0x11018
{
	if (iParam0 != func_116() && func_351(iParam0, 1, 1))
	{
		if (func_235(iParam0) && !func_234(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x11051
{
	if (iParam0 != func_116() && func_351(iParam0, 1, 1))
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 4);
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x11082
{
	if (iParam0 != func_116() && func_351(iParam0, 1, 1))
	{
		return BitTest(Global_2657991[iParam0 /*467*/].f_324, 3);
	}
	return 0;
}

int func_236(int iParam0, bool bParam1)//Position - 0x110B3
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
	if (iParam0 != func_116())
	{
		if (func_351(iParam0, 1, 1))
		{
			if (Global_2657991[iParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[iParam0 /*467*/].f_324.f_11 != func_116())
			{
				return func_75(Global_2657991[iParam0 /*467*/].f_324.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_237()//Position - 0x11141
{
	return Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

int func_238(int iParam0)//Position - 0x11159
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_239(struct<3> Param0, int iParam3)//Position - 0x111AA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_2640779[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_189(Param0, &(Global_2640779[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_240(struct<3> Param0, int iParam3)//Position - 0x111FE
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2635516.f_45.f_320)
	{
		return;
	}
	if (!func_259())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_258(Param0);
		if (iVar1 > -1)
		{
			func_270();
			switch (iVar1)
			{
				case 0:
					func_223(-1139.6785f, -2694.1648f, 12.949f, 283.4298f);
					func_223(-1137.4546f, -2690.167f, 12.9448f, 283.0835f);
					func_223(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_223(-1099.8976f, -2688.6108f, 12.9473f, 295.3925f);
					func_223(-1110.5096f, -2693.2358f, 12.9595f, 298.84f);
					func_223(-1081.8075f, -2690.0146f, 12.7567f, 219.1729f);
					func_223(-1075.5862f, -2697.0898f, 12.7567f, 224.8977f);
					func_223(-1095.1333f, -2659.9954f, 12.7567f, 190.9326f);
					func_223(-1096.5112f, -2649.4827f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_223(-1411.7308f, -533.6462f, 30.2703f, 215.116f);
					func_223(-1416.4075f, -527.0309f, 30.6453f, 215.2683f);
					func_223(-1432.1458f, -580.9922f, 29.5263f, 118.3858f);
					func_223(-1438.8004f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_223(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_223(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_223(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_223(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_223(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_223(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_223(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_223(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_223(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_223(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_223(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_223(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_223(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_223(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_223(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_223(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_223(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_223(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_223(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_223(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_223(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_223(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_223(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_223(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_223(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_223(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_223(145.8017f, -1287.1896f, 28.312f, 120.6275f);
					func_223(142.8935f, -1282.2864f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_223(-2333.5747f, 272.6518f, 168.4671f, 23.0287f);
					func_223(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_223(-2316.2224f, 279.9105f, 168.4671f, 23.0175f);
					func_223(-2314.3955f, 290.9f, 168.4671f, 114.3983f);
					func_223(-2316.8096f, 296.424f, 168.4671f, 113.6228f);
					func_223(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_223(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_223(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_223(-2345.0815f, 277.3852f, 168.4671f, 113.4219f);
					func_223(-2347.7766f, 282.6038f, 168.4671f, 292.7772f);
					func_223(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_223(-2352.6807f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_256(78);
					break;
				
				case 11:
					func_256(79);
					break;
				
				case 12:
					func_256(82);
					break;
				
				case 13:
					func_256(81);
					break;
				
				case 14:
					func_256(73);
					break;
				
				case 15:
					func_223(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_223(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_223(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_223(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_256(75);
					break;
				
				case 17:
					func_256(76);
					break;
				
				case 18:
					func_256(77);
					break;
				
				case 19:
					func_223(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_223(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_223(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_223(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_256(80);
					break;
				
				case 21:
				case 25:
					func_256(87);
					break;
				
				case 22:
				case 26:
					func_256(88);
					break;
				
				case 23:
				case 27:
					func_256(89);
					break;
				
				case 24:
				case 28:
					func_256(90);
					break;
				
				case 29:
				case 30:
					if (func_255(iParam3))
					{
						func_256(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_36);
					}
					break;
				
				case 31:
					func_223(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_223(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_223(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_223(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_223(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_223(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_223(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_223(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_223(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_223(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_223(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_223(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_223(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_223(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_223(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_223(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_223(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_223(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_223(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_223(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_223(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_223(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_223(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_223(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_223(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_223(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_223(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_223(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_223(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_223(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_223(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_223(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_223(-194.254f, -2018.756f, 26.62f, 75f);
					func_223(-186.956f, -2031.369f, 26.62f, 338f);
					func_223(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_223(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_223(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_223(-233.372f, -2089.601f, 26.62f, 304f);
					func_223(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_223(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_223(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_223(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_223(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_223(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_223(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_223(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_223(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_223(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_223(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_223(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_223(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_223(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_223(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_223(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_251(Param0, &iVar2, &iVar6) || (func_226(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_270();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2635516.f_517 = 1;
				}
				if (!iVar6[iVar0] && func_250(iVar2[iVar0], -1))
				{
					if (func_255(iParam3))
					{
						func_256(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_249(PLAYER::PLAYER_PED_ID()) || func_247(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_246(iParam3))
						{
							func_245(iVar2[iVar0]);
						}
						else if (func_244(iParam3))
						{
							func_243(iVar2[iVar0]);
							func_245(iVar2[iVar0]);
						}
						else
						{
							func_243(iVar2[iVar0]);
							func_245(iVar2[iVar0]);
						}
					}
					else
					{
						func_241(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_256(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_241(int iParam0, int iParam1)//Position - 0x11FF6
{
	switch (iParam0)
	{
		case 23:
			func_223(434.1898f, 6535.8237f, 27.0084f, 66.9998f);
			func_223(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_223(435.1928f, 6543.2983f, 26.889f, 66.9998f);
			func_223(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_223(429.8463f, 6511.1104f, 27.0717f, 60.9997f);
			func_223(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_223(443.1016f, 6580.7173f, 26.0739f, 85.1993f);
			func_223(451.9748f, 6579.9365f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_223(-148.9694f, 6325.5522f, 30.4564f, 224.1983f);
			func_223(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_223(-136.8806f, 6347.6216f, 30.4906f, 43.9982f);
			func_223(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_223(-136.6504f, 6357.0615f, 30.4907f, 43.9982f);
			func_223(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_223(-141.4154f, 6365.8306f, 30.4907f, 43.3979f);
			func_223(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_223(60.7522f, 6465.8066f, 30.3941f, 213.3973f);
			func_223(57.4131f, 6462.5503f, 30.3663f, 213.3973f);
			func_223(48.0438f, 6452.6685f, 30.3245f, 213.3973f);
			func_223(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_223(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_223(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_223(32.1837f, 6437.2104f, 30.2991f, 213.3973f);
			func_223(29.4732f, 6434.5264f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_223(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_223(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_223(-395.8286f, 6123.6353f, 30.2987f, 46.3965f);
			func_223(-389.1636f, 6117.2407f, 30.3641f, 46.3965f);
			func_223(-370.6174f, 6129.7793f, 30.4414f, 45.7965f);
			func_223(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_223(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_223(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_223(45.2181f, 6341.1074f, 30.2296f, 14.3964f);
			func_223(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_223(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_223(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_223(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_223(65.6465f, 6380.6265f, 30.2398f, 212.9964f);
			func_223(24.8587f, 6366.3604f, 30.2286f, 32.7965f);
			func_223(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_223(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_223(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_223(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_223(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_223(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_223(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_223(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_223(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_223(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_223(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_223(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_223(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_223(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_223(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_223(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_223(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_223(-1448.5511f, -355.0512f, 43.3715f, 313.3925f);
			func_223(-1454.8193f, -359.998f, 42.7885f, 311.3925f);
			func_223(-1462.6747f, -360.1352f, 42.9255f, 223.392f);
			func_223(-1447.9648f, -368.3028f, 42.5412f, 5.9918f);
			func_223(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_223(-1473.2195f, -346.7773f, 43.5318f, 213.9913f);
			func_223(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_223(-1496.0033f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_223(-1174.4911f, -1381.0103f, 3.9253f, 116.5903f);
			func_223(-1183.1477f, -1392.5593f, 3.6319f, 304.9901f);
			func_223(-1160.9639f, -1417.7592f, 3.7043f, 65.7899f);
			func_223(-1151.6115f, -1411.3774f, 3.9411f, 63.5895f);
			func_223(-1167.1865f, -1424.0696f, 3.4884f, 123.5897f);
			func_223(-1148.2198f, -1409.1637f, 4.0217f, 63.5895f);
			func_223(-1137.1096f, -1372.8176f, 3.8993f, 27.5895f);
			func_223(-1140.6079f, -1365.7474f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_223(1414.237f, -1656.3444f, 60.2449f, 332.7893f);
			func_223(1416.6677f, -1659.9332f, 60.6982f, 332.7893f);
			func_223(1419.3271f, -1663.9718f, 61.2382f, 332.7893f);
			func_223(1421.5574f, -1667.3671f, 61.7479f, 332.7893f);
			func_223(1423.7439f, -1670.8531f, 62.3125f, 332.7893f);
			func_223(1412.1573f, -1652.7456f, 59.9105f, 332.7893f);
			func_223(1426.2009f, -1673.5977f, 62.7133f, 330.1893f);
			func_223(1435.8038f, -1694.7296f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_223(2810.7869f, 4435.9204f, 47.5295f, 20.7996f);
			func_223(2808.4128f, 4443.922f, 47.3732f, 14.7995f);
			func_223(2806.298f, 4451.7856f, 47.1865f, 15.3995f);
			func_223(2803.9253f, 4459.858f, 46.9823f, 15.3995f);
			func_223(2801.7563f, 4467.7554f, 46.8147f, 15.3995f);
			func_223(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_223(2903.7246f, 4425.8535f, 47.3523f, 23.1992f);
			func_223(2907.0764f, 4418.0586f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_223(1680.4476f, 4821.131f, 41.0599f, 186.399f);
			func_223(1679.7604f, 4829.447f, 40.9167f, 186.399f);
			func_223(1678.6683f, 4838.03f, 41.0221f, 187.7989f);
			func_223(1677.6119f, 4846.028f, 41.0452f, 187.7989f);
			func_223(1675.8512f, 4860.4336f, 41.0901f, 187.7989f);
			func_223(1674.8434f, 4868.3433f, 41.0684f, 187.7989f);
			func_223(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_223(1672.5254f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_223(422.863f, 3583.9014f, 32.2386f, 313.5986f);
			func_223(426.6211f, 3583.2083f, 32.2386f, 313.5986f);
			func_223(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_223(434.2751f, 3580.8806f, 32.2386f, 313.5986f);
			func_223(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_223(442.0173f, 3578.9482f, 32.2386f, 313.5986f);
			func_223(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_223(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_223(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_223(620.9771f, 2725.7585f, 40.7897f, 4.3984f);
			func_223(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_223(611.1158f, 2737.3875f, 40.9734f, 185.3984f);
			func_223(598.9713f, 2736.2607f, 41.0602f, 186.5986f);
			func_223(592.6151f, 2735.8865f, 41.0602f, 186.5986f);
			func_223(586.0421f, 2735.9004f, 41.0535f, 186.5986f);
			func_223(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_223(214.3318f, 2492.2598f, 53.9736f, 312.7978f);
			func_223(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_223(213.7524f, 2501.2512f, 53.5958f, 312.7978f);
			func_223(213.6645f, 2505.9084f, 53.3477f, 312.7978f);
			func_223(213.4478f, 2510.7341f, 53.1055f, 312.7978f);
			func_223(212.9148f, 2515.2676f, 52.9376f, 312.7978f);
			func_223(211.5983f, 2519.2163f, 52.6753f, 312.7978f);
			func_223(210.1288f, 2523.1873f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_223(153.6785f, -2476.1921f, 4.9877f, 178.4004f);
			func_223(150.9209f, -2516.9785f, 4.9909f, 179.9999f);
			func_223(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_223(153.866f, -2467.2422f, 4.9877f, 178.4004f);
			func_223(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_223(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_223(142.7427f, -2536.147f, 5f, 205.0002f);
			func_223(138.8267f, -2535.8647f, 5f, 205.0002f);
			break;
		
		case 41:
			func_223(-341.4255f, -2734.4514f, 5.0413f, 314.8f);
			func_223(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_223(-329.7832f, -2745.6042f, 5.0196f, 314.8f);
			func_223(-336.4781f, -2716.1392f, 5.0028f, 134.1994f);
			func_223(-334.2752f, -2718.8884f, 5.0048f, 135.1992f);
			func_223(-327.6603f, -2725.6445f, 5.0103f, 135.1992f);
			func_223(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_223(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_223(-260.5913f, -2615.2546f, 5.0502f, 274.5953f);
			func_223(-253.2161f, -2614.8955f, 5.0502f, 271.5953f);
			func_223(-245.6569f, -2614.8618f, 5.0502f, 271.5953f);
			func_223(-238.214f, -2614.8472f, 5.0502f, 271.5953f);
			func_223(-238.013f, -2630.9614f, 5.0331f, 271.3949f);
			func_223(-260.9724f, -2631.4185f, 5.0355f, 276.9951f);
			func_223(-253.401f, -2631.1082f, 5.0319f, 272.195f);
			func_223(-245.5563f, -2631.0598f, 5.0323f, 272.195f);
			break;
		
		case 40:
			func_223(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_223(656.1305f, -2707.2454f, 5.214f, 24.7971f);
			func_223(659.3307f, -2714.3784f, 5.2188f, 22.7968f);
			func_223(662.2627f, -2722.2275f, 5.2188f, 19.1968f);
			func_223(649.2115f, -2728.3586f, 5.1124f, 20.5967f);
			func_223(646.2606f, -2720.8333f, 5.1103f, 21.3967f);
			func_223(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_223(640.3513f, -2706.5708f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_223(1143.7303f, -3105.0913f, 4.8989f, 146.1979f);
			func_223(1140.0088f, -3104.954f, 4.8985f, 146.1979f);
			func_223(1136.2671f, -3104.69f, 4.8969f, 146.1979f);
			func_223(1132.7316f, -3104.2769f, 4.8944f, 146.1979f);
			func_223(1128.7235f, -3104.5398f, 4.896f, 146.1979f);
			func_223(1125.1063f, -3104.0566f, 4.8942f, 146.1979f);
			func_223(1117.7996f, -3103.6743f, 4.8922f, 146.1979f);
			func_223(1114.0154f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 83:
			func_223(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_223(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_223(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_223(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_223(-1098.6207f, -3460.7915f, 12.9453f, 329.799f);
			func_223(-1093.3098f, -3463.4644f, 12.9453f, 329.799f);
			func_223(-1089.4333f, -3443.2336f, 12.945f, 329.799f);
			func_223(-1084.2706f, -3446.3103f, 12.945f, 329.799f);
			func_223(-1093.8082f, -3452.4072f, 12.9451f, 329.799f);
			func_223(-1088.3829f, -3455.466f, 12.9451f, 329.799f);
			func_223(-1118.4736f, -3411.3848f, 12.9451f, 313.199f);
			func_223(-1181.003f, -3375.6584f, 12.945f, 346.799f);
			func_223(-1212.0713f, -3382.2832f, 12.9451f, 328.999f);
			func_223(-1217.7085f, -3378.6228f, 12.9451f, 328.999f);
			func_223(-1216.9865f, -3390.3958f, 12.9452f, 328.999f);
			func_223(-1222.5657f, -3386.7068f, 12.9452f, 328.999f);
			func_223(-1222.06f, -3398.8823f, 12.9452f, 328.999f);
			func_223(-1227.6981f, -3394.9456f, 12.9451f, 328.999f);
			func_223(-1097.5173f, -3472.0862f, 12.9453f, 328.999f);
			func_223(-1102.951f, -3468.6187f, 12.9452f, 328.999f);
			func_223(-1227.2528f, -3407.38f, 12.9452f, 328.999f);
			func_223(-1232.8358f, -3403.5723f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_223(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_223(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_223(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_223(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_223(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_223(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_223(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_223(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_223(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_223(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_223(-1359.905f, -3276.1177f, 12.9448f, 330.4f);
			func_223(-1354.2279f, -3279.6296f, 12.9448f, 330.4f);
			func_223(-1406.4932f, -3246.2234f, 12.9449f, 344.5997f);
			func_223(-1411.0581f, -3243.6204f, 12.9449f, 344.5997f);
			func_223(-1415.326f, -3241.0137f, 12.9449f, 344.5997f);
			func_223(-1419.899f, -3238.1157f, 12.9449f, 344.5997f);
			func_223(-1370.9857f, -3268.9453f, 12.9449f, 322.3996f);
			func_223(-1365.7346f, -3272.3633f, 12.9449f, 322.3996f);
			func_223(-1373.3412f, -3313.2056f, 12.9448f, 329.5996f);
			func_223(-1379.0914f, -3310.0037f, 12.9448f, 330.7996f);
			func_223(-1436.9889f, -3228.515f, 12.9449f, 343.9996f);
			func_223(-1444.064f, -3273.7512f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_223(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_223(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_223(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_223(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_223(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_223(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_223(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_223(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_223(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_223(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_223(-2060.4863f, 3165.9277f, 31.8103f, 133.9988f);
			func_223(-2055.7065f, 3163.0535f, 31.8103f, 133.9988f);
			func_223(-2050.911f, 3160.0918f, 31.8103f, 133.9988f);
			func_223(-1974.6353f, 3137.8467f, 31.8103f, 149.5986f);
			func_223(-1970.3544f, 3145.22f, 31.8103f, 149.5986f);
			func_223(-1965.7089f, 3153.2214f, 31.8103f, 149.5986f);
			func_223(-1960.9915f, 3161.346f, 31.8103f, 149.5986f);
			func_223(-1983.1697f, 3131.3298f, 31.8103f, 149.5986f);
			func_223(-1976.614f, 3127.6274f, 31.8103f, 149.5986f);
			func_223(-1991.5824f, 3127.264f, 31.8103f, 167.7985f);
			func_223(-1995.584f, 3129.3687f, 31.8103f, 167.7985f);
			func_223(-1999.335f, 3131.1824f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_223(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_223(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_223(-1823.414f, 3092.762f, 31.843f, 330f);
			func_223(-1819.045f, 3100.435f, 31.845f, 330f);
			func_223(-1833.313f, 3075.722f, 31.838f, 330f);
			func_223(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_223(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_223(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_223(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_223(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_223(-1819.2842f, 3110.6704f, 31.8615f, 150.2f);
			func_223(-1814.545f, 3108.2295f, 31.8476f, 330.6f);
			func_223(-1853.9388f, 3076.2705f, 31.8105f, 176.7996f);
			func_223(-1857.7258f, 3078.6685f, 31.8105f, 176.7996f);
			func_223(-1861.6259f, 3080.7766f, 31.8105f, 176.7996f);
			func_223(-1865.5841f, 3083.1365f, 31.8103f, 176.7996f);
			func_223(-1869.2551f, 3085.565f, 31.8103f, 176.7996f);
			func_223(-1913.263f, 3125.3416f, 31.8103f, 150.7988f);
			func_223(-1917.5464f, 3127.6785f, 31.8103f, 150.7988f);
			func_223(-1922.7402f, 3130.5552f, 31.8103f, 150.7988f);
			func_223(-1927.6763f, 3133.413f, 31.8103f, 150.7988f);
			func_223(-1932.4185f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_223(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_223(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_223(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_223(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_223(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_223(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_223(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_223(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_223(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_223(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_223(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_223(-2551.2612f, 3306.3042f, 31.8123f, 296.999f);
			func_223(-2497.446f, 3333.2957f, 31.821f, 296.999f);
			func_223(-2494.089f, 3326.0647f, 31.8218f, 296.999f);
			func_223(-2453.4045f, 3255.3882f, 31.8276f, 167.1986f);
			func_223(-2449.37f, 3253.4165f, 31.8276f, 167.1986f);
			func_223(-2445.4902f, 3251.1384f, 31.8276f, 167.1986f);
			func_223(-2441.5747f, 3248.888f, 31.8276f, 167.1986f);
			func_223(-2437.3193f, 3246.5542f, 31.8277f, 167.1986f);
			func_223(-2432.7227f, 3244.232f, 31.8277f, 167.1986f);
			func_223(-2485.2732f, 3330.8906f, 31.8239f, 298.1979f);
			func_223(-2488.82f, 3338.3647f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(1284.4156f, 2890.2993f, 45.0276f, 336.3999f);
				func_223(1273.2477f, 2901.4277f, 45.0426f, 338.3999f);
				func_223(1262.9448f, 2911.5352f, 43.2959f, 341.9999f);
				func_223(1272.0938f, 2873.3875f, 45.3443f, 328.5991f);
				func_223(1259.7849f, 2892.2168f, 45.1126f, 339.9999f);
				func_223(1231.2787f, 2910.881f, 43.3085f, 12f);
				func_223(1306.5148f, 2839.4749f, 46.8947f, 132.3996f);
				func_223(1307.4529f, 2825.2756f, 45.1566f, 127.1998f);
				func_223(1257.0292f, 2872.1567f, 45.9766f, 338.5992f);
				func_223(1225.7644f, 2930.0952f, 41.6173f, 14.7999f);
			}
			else
			{
				func_223(1265.1229f, 2836.949f, 47.1021f, 119.9996f);
				func_223(1258.1451f, 2831.6428f, 46.4503f, 135.7993f);
				func_223(1240.8466f, 2828.7207f, 46.4388f, 39.5992f);
				func_223(1236.8774f, 2835.4902f, 46.3491f, 22.9991f);
				func_223(1235.6973f, 2843.4026f, 46.0231f, 2.7991f);
				func_223(1237.6862f, 2850.6072f, 45.5261f, 335.5991f);
				func_223(1241.1256f, 2858.816f, 45.0176f, 339.7991f);
				func_223(1249.7152f, 2810.5876f, 47.2648f, 255.1992f);
				func_223(1257.6963f, 2808.6086f, 47.014f, 266.1992f);
				func_223(1265.5765f, 2808.3528f, 46.7598f, 277.199f);
				func_223(1273.8081f, 2808.484f, 46.3872f, 263.999f);
				func_223(1282.5354f, 2807.1335f, 45.9705f, 250.7989f);
				func_223(1290.1676f, 2803.7449f, 45.8005f, 238.7988f);
				func_223(1296.4451f, 2798.7769f, 46.0903f, 228.9988f);
				func_223(1302.041f, 2792.3296f, 45.957f, 221.7987f);
				func_223(1251.3888f, 2825.818f, 45.9856f, 119.1982f);
				func_223(1285.4801f, 2819.238f, 45.044f, 228.3993f);
				func_223(1293.0233f, 2814.1636f, 44.8859f, 233.399f);
				func_223(1242.1803f, 2814.153f, 47.7108f, 227.3991f);
				func_223(1236.3619f, 2819.6228f, 47.6845f, 224.399f);
				func_223(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_223(1228.1774f, 2833.4233f, 47.3171f, 197.5993f);
				func_223(1243.0946f, 2866.7493f, 44.6219f, 353.7992f);
				func_223(1307.3458f, 2785.7866f, 46.1136f, 219.9997f);
				func_223(1300.7516f, 2808.2244f, 44.5688f, 228.9997f);
				func_223(1306.571f, 2802.4675f, 44.6275f, 224.1992f);
				func_223(1244.4646f, 2875.6968f, 44.5839f, 353.7992f);
				func_223(1312.4409f, 2795.4268f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(14.4916f, 2660.7263f, 79.0178f, 310.1999f);
				func_223(3.855f, 2672.388f, 78.437f, 319.2f);
				func_223(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_223(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_223(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_223(60.2273f, 2609.7449f, 79.5672f, 305.9998f);
				func_223(34.0188f, 2659.7227f, 78.9894f, 314.2f);
				func_223(29.4879f, 2675.3398f, 76.0202f, 314.2f);
				func_223(19.0088f, 2686.1597f, 75.6897f, 314.2f);
				func_223(7.6101f, 2697.1125f, 76.2923f, 314.2f);
			}
			else
			{
				func_223(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_223(46.2894f, 2639.9512f, 79.9122f, 305.1998f);
				func_223(55.3668f, 2627.7727f, 79.6363f, 305.1998f);
				func_223(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_223(42.1486f, 2646.0728f, 80.108f, 305.1998f);
				func_223(68.1481f, 2630.0696f, 77.0725f, 305.1998f);
				func_223(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_223(57.3543f, 2643.5598f, 75.5301f, 305.1998f);
				func_223(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_223(74.5845f, 2640.4746f, 72.602f, 305.1998f);
				func_223(68.5462f, 2646.7837f, 71.6298f, 305.1998f);
				func_223(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_223(79.5597f, 2650.8347f, 68.668f, 305.1998f);
				func_223(72.6035f, 2656.8574f, 67.3294f, 305.1998f);
				func_223(83.4156f, 2660.2366f, 64.3198f, 305.1998f);
				func_223(102.851f, 2688.009f, 51.732f, 224f);
				func_223(109.815f, 2681.012f, 51.112f, 224f);
				func_223(116.355f, 2674.26f, 50.529f, 224f);
				func_223(125.138f, 2665.98f, 49.8f, 224f);
				func_223(132.228f, 2659.865f, 49.26f, 228.4f);
				func_223(139.354f, 2653.536f, 48.737f, 228.4f);
				func_223(88.512f, 2702.995f, 53.042f, 224.199f);
				func_223(81.565f, 2710.357f, 53.67f, 224.199f);
				func_223(75.156f, 2716.981f, 54.223f, 224.199f);
				func_223(68.442f, 2723.806f, 54.775f, 226.199f);
				func_223(61.449f, 2730.606f, 55.308f, 226.199f);
				func_223(53.702f, 2738.167f, 55.855f, 226.199f);
				func_223(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_223(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_223(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_223(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_223(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_223(2824.791f, 3894.7869f, 47.4293f, 105.3989f);
				func_223(2761.7385f, 3945.948f, 44.59f, 135.398f);
				func_223(2814.5886f, 3930.404f, 44.816f, 134.9978f);
				func_223(2747.6267f, 3930.92f, 43.8497f, 138.3978f);
				func_223(2796.3115f, 3928.3164f, 42.6106f, 134.5979f);
			}
			else
			{
				func_223(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_223(2714.633f, 3918.283f, 42.938f, 16f);
				func_223(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_223(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_223(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_223(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_223(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_223(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_223(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_223(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_223(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_223(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_223(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_223(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_223(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_223(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_223(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_223(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_223(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_223(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_223(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_223(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_223(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_223(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_223(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_223(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_223(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_223(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(3374.661f, 5559.7095f, 12.3726f, 138.7999f);
				func_223(3366.3652f, 5569.4487f, 13.9704f, 112.8f);
				func_223(3358.4927f, 5581.4634f, 16.1783f, 112.8f);
				func_223(3356.7053f, 5595.3633f, 15.4029f, 112.8f);
				func_223(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_223(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_223(3335.2588f, 5599.0464f, 22.4606f, 249.6f);
				func_223(3336.8108f, 5613.029f, 22.2159f, 249.6f);
				func_223(3354.6956f, 5609.6987f, 15.9453f, 111.3999f);
				func_223(3354.0056f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_223(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_223(3374.923f, 5520.1772f, 20.3207f, 86f);
				func_223(3350.6433f, 5490.432f, 18.8423f, 139.9997f);
				func_223(3364.1887f, 5502.9805f, 19.648f, 125.7999f);
				func_223(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_223(3365.919f, 5519.9487f, 18.8008f, 102.9988f);
				func_223(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_223(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_223(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_223(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_223(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_223(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_223(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_223(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_223(3335.4514f, 5455.7227f, 18.2323f, 162.1979f);
				func_223(3338.7878f, 5464.8027f, 18.8631f, 163.7977f);
				func_223(3362.4763f, 5488.2114f, 20.4432f, 108.5979f);
				func_223(3371.2593f, 5491.2744f, 21.5286f, 104.9989f);
				func_223(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_223(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_223(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_223(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_223(3342.3464f, 5473.345f, 19.1235f, 159.3987f);
				func_223(3347.2363f, 5480.447f, 19.4672f, 131.199f);
				func_223(3357.623f, 5516.9004f, 16.9016f, 118.7991f);
				func_223(3361.366f, 5545.8857f, 15.5532f, 118.7991f);
				func_223(3352.6123f, 5541.0127f, 16.3238f, 131.999f);
				func_223(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(43.848f, 6845.657f, 13.379f, 247.2f);
				func_223(50.379f, 6861.146f, 15.105f, 247.2f);
				func_223(32.501f, 6871.7773f, 13.3283f, 247.2f);
				func_223(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_223(55.806f, 6875.081f, 14.824f, 247.2f);
				func_223(11.616f, 6877.079f, 11.466f, 247.2f);
				func_223(18.954f, 6891.633f, 11.37f, 247.2f);
				func_223(26.68f, 6907.587f, 11.869f, 247.2f);
				func_223(7.479f, 6907.895f, 12.024f, 247.2f);
				func_223(44.9981f, 6901.3516f, 11.9426f, 247.2f);
			}
			else
			{
				func_223(35.591f, 6836.608f, 13.288f, 274.4f);
				func_223(36.028f, 6830.135f, 13.801f, 270.8f);
				func_223(35.114f, 6823.884f, 14.527f, 260.8f);
				func_223(48.779f, 6838.693f, 14.337f, 273.6f);
				func_223(56.738f, 6821.8f, 15.244f, 244.8f);
				func_223(48.377f, 6825.895f, 14.656f, 249.8f);
				func_223(49.11f, 6831.439f, 13.991f, 274.8f);
				func_223(53.544f, 6818.275f, 16.342f, 243f);
				func_223(46.162f, 6821.945f, 15.483f, 249.8f);
				func_223(60.129f, 6836.8f, 15.605f, 269.6f);
				func_223(40.88f, 6802.952f, 20.113f, 242.6f);
				func_223(48.203f, 6799.134f, 20.897f, 244.4f);
				func_223(70.449f, 6809.271f, 16.846f, 243f);
				func_223(61.436f, 6814.266f, 16.71f, 244.2f);
				func_223(56.142f, 6793.458f, 19.806f, 242.6f);
				func_223(65.759f, 6791.12f, 18.433f, 276.4f);
				func_223(77.305f, 6805.391f, 18.558f, 245.6f);
				func_223(85.893f, 6800.243f, 18.535f, 249.8f);
				func_223(56.85f, 6780.582f, 18.822f, 297.999f);
				func_223(65.636f, 6784.669f, 18.789f, 293.799f);
				func_223(74.121f, 6788.498f, 18.739f, 293.799f);
				func_223(97.779f, 6796.32f, 19.02f, 276.799f);
				func_223(106.76f, 6796.983f, 18.914f, 272.599f);
				func_223(112.387f, 6802.858f, 18.994f, 210.599f);
				func_223(117.58f, 6802.644f, 18.663f, 209.399f);
				func_223(122.481f, 6802.693f, 18.468f, 209.399f);
				func_223(127.182f, 6802.686f, 18.218f, 209.399f);
				func_223(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(-2213.5515f, 2283.7258f, 31.7464f, 293.7993f);
				func_223(-2196.7097f, 2290.824f, 32.0819f, 293.7993f);
				func_223(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_223(-2180.471f, 2296.2056f, 32.9612f, 287.5992f);
				func_223(-2180.8704f, 2419.6492f, 0.2324f, 147.7987f);
				func_223(-2180.1663f, 2436.9097f, 0.2325f, 144.5987f);
				func_223(-2185.2708f, 2457.022f, 0.2062f, 160.1985f);
				func_223(-2329.4646f, 2393.6028f, 2.5699f, 289.7982f);
				func_223(-2328.9775f, 2380.4062f, 2.7911f, 289.7982f);
				func_223(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_223(-2239.671f, 2390.2925f, 10.756f, 189.2002f);
				func_223(-2217.4128f, 2392.4712f, 12.2202f, 189.2002f);
				func_223(-2238.863f, 2381.5598f, 13.1388f, 185.2003f);
				func_223(-2215.6948f, 2383.0352f, 14.9809f, 189.4004f);
				func_223(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_223(-2215.9604f, 2374.2507f, 17.0939f, 187.4004f);
				func_223(-2237.494f, 2364.4673f, 15.3155f, 186.2004f);
				func_223(-2216.8572f, 2365.651f, 18.9029f, 173.0005f);
				func_223(-2218.5264f, 2357.0654f, 20.7893f, 179.0004f);
				func_223(-2237.6248f, 2348.108f, 20.9097f, 179.0004f);
				func_223(-2218.4473f, 2348.7327f, 22.9621f, 179.0004f);
				func_223(-2238.1797f, 2339.141f, 22.5602f, 174.8003f);
				func_223(-2218.7705f, 2340.1313f, 25.5237f, 177.2002f);
				func_223(-2238.9978f, 2330.9585f, 25.7263f, 175.8005f);
				func_223(-2219.2214f, 2331.9338f, 28.5604f, 177.8006f);
				func_223(-2219.0774f, 2324.0657f, 30.9043f, 198.8006f);
				func_223(-2239.4126f, 2322.913f, 28.0647f, 177.8008f);
				func_223(-2240.014f, 2313.9507f, 29.5314f, 170.6008f);
				func_223(-2241.5435f, 2305.8186f, 30.7136f, 163.4006f);
				func_223(-2244.9043f, 2298.3877f, 31.4166f, 148.2005f);
				func_223(-2249.3103f, 2290.8918f, 31.5742f, 139.2004f);
				func_223(-2211.8962f, 2319.5813f, 31.7538f, 259.4002f);
				func_223(-2203.961f, 2320.0159f, 31.9895f, 271.4001f);
				func_223(-2255.1057f, 2285.4148f, 31.617f, 130.3999f);
				func_223(-2196.1704f, 2320.341f, 32.2704f, 270.6003f);
				func_223(-2261.3352f, 2280.2034f, 31.6562f, 130.0002f);
				func_223(-2268.4468f, 2275.5276f, 31.7095f, 124.4001f);
				func_223(-2188.258f, 2319.9846f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_223(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_223(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_223(15.6727f, 3297.8457f, 39.0535f, 191.9991f);
				func_223(-24.2865f, 3367.5269f, 41.4783f, 264.399f);
				func_223(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_223(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_223(97.4844f, 3335.3853f, 34.6164f, 7.9981f);
				func_223(20.409f, 3370.8386f, 38.8393f, 235.799f);
				func_223(48.457f, 3336.5862f, 35.8912f, 270.3979f);
			}
			else
			{
				func_223(25.9869f, 3349.7063f, 36.0366f, 273.9994f);
				func_223(25.0176f, 3356.9146f, 36.4258f, 276.9998f);
				func_223(36.2443f, 3351.3584f, 36.2386f, 272.5997f);
				func_223(35.9352f, 3358.8157f, 37.0033f, 276.7998f);
				func_223(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_223(30.027f, 3292.351f, 38.604f, 140.199f);
				func_223(49.1614f, 3358.5894f, 35.9759f, 263.5988f);
				func_223(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_223(23.897f, 3283.152f, 39.381f, 145.399f);
				func_223(60.9182f, 3356.2102f, 35.8814f, 255.3988f);
				func_223(18.723f, 3274.025f, 40.054f, 155.799f);
				func_223(59.0177f, 3350.0044f, 35.3204f, 255.7989f);
				func_223(36.958f, 3298.847f, 38.001f, 127.799f);
				func_223(54.165f, 3311.582f, 36.517f, 303.799f);
				func_223(61.607f, 3317.105f, 35.916f, 306.999f);
				func_223(68.994f, 3323.129f, 35.364f, 308.199f);
				func_223(76.266f, 3329.467f, 34.805f, 311.399f);
				func_223(82.757f, 3335.915f, 34.344f, 316.598f);
				func_223(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_223(14.664f, 3263.688f, 40.931f, 160.398f);
				func_223(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_223(11.7852f, 3256.1008f, 41.7031f, 159.198f);
				func_223(89.575f, 3343.311f, 33.932f, 318.398f);
				func_223(58.4154f, 3329.4229f, 35.6197f, 305.5979f);
				func_223(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_223(72.1063f, 3339.7927f, 34.8449f, 308.5977f);
				func_223(95.6614f, 3349.9172f, 33.696f, 316.1977f);
				func_223(85.4387f, 3353.1833f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_223(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_223(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_223(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_223(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_223(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_223(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_223(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_223(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_223(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_223(2073.0442f, 1725.9348f, 102.5096f, 225.2f);
				func_223(2077.2405f, 1730.2992f, 102.5247f, 225.2f);
				func_223(2081.68f, 1734.7421f, 102.5588f, 225.2f);
				func_223(2086.0515f, 1739.0446f, 102.6618f, 225.2f);
				func_223(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_223(2095.2947f, 1748.2742f, 102.3022f, 225.2f);
				func_223(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_223(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_223(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_223(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_223(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_223(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_223(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_223(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_223(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_223(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_223(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_223(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_223(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_223(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_223(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_223(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_223(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_223(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_223(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_223(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_223(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_223(2098.9944f, 1747.9292f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_59 == 0)
			{
				func_223(1871.6914f, 358.5369f, 162.1067f, 153.1979f);
				func_223(1858.9664f, 351.2935f, 161.7614f, 166.598f);
				func_223(1873.6115f, 342.6637f, 161.6936f, 142.998f);
				func_223(1887.6447f, 343.1557f, 162.1659f, 138.5979f);
				func_223(1888.6436f, 328.0839f, 161.7489f, 139.398f);
				func_223(1898.5963f, 315.2232f, 161.4418f, 173.7979f);
				func_223(1896.7292f, 266.5388f, 161.1619f, 113.5978f);
				func_223(1900.1672f, 281.3884f, 161.7807f, 115.197f);
				func_223(1856.2855f, 294.624f, 161.442f, 167.9966f);
				func_223(1868.6218f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_223(1856.3777f, 255.9146f, 162.7158f, 147.6202f);
				func_223(1837.2792f, 227.3696f, 165.2592f, 164.3995f);
				func_223(1835.1923f, 219.3931f, 167.5468f, 169.9994f);
				func_223(1833.5565f, 211.859f, 169.864f, 169.9994f);
				func_223(1839.5338f, 194.4053f, 171.3841f, 172.9989f);
				func_223(1838.2894f, 185.8157f, 171.2585f, 174.1989f);
				func_223(1837.4781f, 177.0607f, 170.7063f, 174.1989f);
				func_223(1840.4631f, 202.6959f, 170.8702f, 174.1989f);
				func_223(1836.2964f, 168.7307f, 170.5786f, 174.1989f);
				func_223(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_223(1826.9104f, 214.9648f, 172.2502f, 18.7986f);
				func_223(1823.8047f, 223.0288f, 172.0794f, 21.7986f);
				func_223(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_223(1817.2448f, 239.1232f, 172.0878f, 21.7986f);
				func_223(1814.0886f, 247.0423f, 171.7386f, 24.9986f);
				func_223(1810.8789f, 255.6553f, 171.7517f, 19.3986f);
				func_223(1807.7288f, 265.4899f, 172.2307f, 15.1986f);
				func_223(1823.1471f, 197.3122f, 172.235f, 192.3984f);
				func_223(1824.6414f, 184.4241f, 171.5948f, 183.3985f);
				func_223(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_223(1824.7476f, 162.8998f, 170.4961f, 173.1985f);
				func_223(1817.3447f, 214.6964f, 172.5223f, 203.9982f);
				func_223(1813.4656f, 222.3717f, 172.3316f, 200.9982f);
				func_223(1809.1141f, 230.8225f, 172.346f, 205.1983f);
				func_223(1805.5945f, 239.3896f, 172.0033f, 197.9984f);
				func_223(1802.5154f, 247.4269f, 171.8964f, 197.9984f);
				func_223(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_223(1823.0791f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_242(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_242(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_242(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_242(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_242(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_242(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_242(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_242(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_242(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_242(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_242(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_242(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_242(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_242(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_242(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_242(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_242(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_242(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_242(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_242(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_242(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_242(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_242(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_242(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_242(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_242(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_242(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		case 165:
			func_242(-14.562f, -1298.2373f, 28.323f, 181.7987f, iParam1, 0);
			func_242(-18.7554f, -1298.3212f, 28.3238f, 181.7987f, iParam1, 0);
			func_242(-8.76f, -1306.7644f, 28.4274f, 270.5988f, iParam1, 0);
			func_242(-0.9861f, -1306.9889f, 29.0661f, 268.5986f, iParam1, 0);
			func_242(7.095f, -1306.7876f, 29.081f, 269.7986f, iParam1, 0);
			func_242(15.0002f, -1306.9833f, 28.1188f, 269.7986f, iParam1, 0);
			func_242(22.4783f, -1307.6133f, 28.2369f, 270.5979f, iParam1, 0);
			func_242(30.1251f, -1307.5502f, 28.2089f, 270.5979f, iParam1, 0);
			func_242(-58.9301f, -1319.5089f, 28.1072f, 89.1976f, iParam1, 0);
			func_242(-66.4231f, -1319.25f, 28.0882f, 89.1976f, iParam1, 0);
			break;
		
		case 162:
			func_242(-215.8533f, 6310.631f, 30.2933f, 315.3986f, iParam1, 0);
			func_242(-221.6996f, 6304.683f, 30.2887f, 315.3986f, iParam1, 0);
			func_242(-227.5227f, 6298.8867f, 30.2886f, 315.3986f, iParam1, 0);
			func_242(-233.4945f, 6293.001f, 30.2907f, 315.3986f, iParam1, 0);
			func_242(-199.5962f, 6321.835f, 30.4171f, 315.3986f, iParam1, 0);
			func_242(-219.9854f, 6323.075f, 30.3012f, 135.3982f, iParam1, 0);
			func_242(-214.4723f, 6328.4194f, 30.3033f, 135.3982f, iParam1, 0);
			func_242(-228.3779f, 6314.325f, 30.2951f, 135.3982f, iParam1, 0);
			func_242(-233.6126f, 6309.157f, 30.2805f, 135.3982f, iParam1, 0);
			func_242(-239.0836f, 6303.774f, 30.3162f, 135.3982f, iParam1, 0);
			break;
		
		case 166:
			func_242(1199.3922f, -1274.6459f, 34.2218f, 264.5996f, iParam1, 0);
			func_242(1199.8231f, -1270.8417f, 34.2267f, 264.5996f, iParam1, 0);
			func_242(1211.7864f, -1273.5059f, 34.2265f, 84.7993f, iParam1, 0);
			func_242(1211.3959f, -1277.511f, 34.2265f, 84.7993f, iParam1, 0);
			func_242(1198.3217f, -1289.7107f, 34.2104f, 265.7991f, iParam1, 0);
			func_242(1190.971f, -1289.0333f, 33.9762f, 265.7991f, iParam1, 0);
			func_242(1183.6307f, -1288.7725f, 33.8503f, 265.7991f, iParam1, 0);
			func_242(1212.6528f, -1290.9677f, 34.2268f, 265.7991f, iParam1, 0);
			func_242(1219.9164f, -1291.5703f, 34.2231f, 265.7991f, iParam1, 0);
			func_242(1227.2478f, -1292.124f, 34.2049f, 214.5982f, iParam1, 0);
			break;
		
		case 164:
			func_242(-513.4792f, -1725.9542f, 18.2396f, 233.7993f, iParam1, 0);
			func_242(-502.8869f, -1724.6547f, 18.3531f, 191.7995f, iParam1, 0);
			func_242(-500.5194f, -1731.9363f, 17.9393f, 202.9996f, iParam1, 0);
			func_242(-519.8862f, -1723.5706f, 18.186f, 326.1996f, iParam1, 0);
			func_242(-522.9067f, -1721.4664f, 18.2f, 326.1996f, iParam1, 0);
			func_242(-525.8917f, -1719.2316f, 18.2055f, 326.1996f, iParam1, 0);
			func_242(-528.915f, -1717.2086f, 18.2224f, 326.1996f, iParam1, 0);
			func_242(-532.0991f, -1714.7692f, 18.2197f, 326.1996f, iParam1, 0);
			func_242(-541.5544f, -1713.4291f, 18.159f, 260.1992f, iParam1, 0);
			func_242(-547.5757f, -1708.4988f, 18.0875f, 214.5982f, iParam1, 0);
			break;
		
		case 163:
			func_242(2503.9746f, 4105.65f, 37.3197f, 333.9991f, iParam1, 0);
			func_242(2500.5635f, 4098.3643f, 37.2041f, 333.9991f, iParam1, 0);
			func_242(2496.8916f, 4090.8677f, 37.0864f, 333.9991f, iParam1, 0);
			func_242(2493.136f, 4083.078f, 36.9669f, 333.9991f, iParam1, 0);
			func_242(2489.5542f, 4075.2004f, 36.8805f, 333.9991f, iParam1, 0);
			func_242(2491.6594f, 4121.725f, 37.1767f, 155.199f, iParam1, 0);
			func_242(2488.2144f, 4123.2705f, 37.1377f, 155.199f, iParam1, 0);
			func_242(2484.7336f, 4124.911f, 37.0531f, 155.199f, iParam1, 0);
			func_242(2484.46f, 4113.972f, 37.0647f, 336.7987f, iParam1, 0);
			func_242(2480.8772f, 4115.4917f, 37.0647f, 336.7987f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_242(struct<3> Param0, float fParam3, int iParam4, bool bParam5)//Position - 0x16440
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_131(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var7) };
		func_223(Var10, fParam3);
	}
	else
	{
		func_223(Param0, fParam3);
	}
}

void func_243(int iParam0)//Position - 0x164BA
{
	switch (iParam0)
	{
		case 83:
			func_223(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_223(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_223(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_223(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_223(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_223(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_223(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_223(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_223(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_223(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_223(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_223(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_223(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_223(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_223(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_223(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_223(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_223(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_223(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_223(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
			func_223(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
			func_223(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
			func_223(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
			func_223(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_223(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
			func_223(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
			func_223(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_223(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
			func_223(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
			func_223(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
			func_223(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_223(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
			func_223(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_223(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
			func_223(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
			func_223(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
			func_223(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
			func_223(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
			func_223(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
			func_223(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
			func_223(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
			func_223(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
			func_223(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
			func_223(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
			func_223(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
			func_223(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_223(-1356.991f, -3242.228f, 12.945f, 330f);
			func_223(-1369.313f, -3234.758f, 12.945f, 330f);
			func_223(-1381.751f, -3227.408f, 12.945f, 330f);
			func_223(-1394.302f, -3220.021f, 12.945f, 330f);
			func_223(-1354.339f, -3223.129f, 12.945f, 330f);
			func_223(-1366.302f, -3215.809f, 12.945f, 330f);
			func_223(-1378.492f, -3208.645f, 12.945f, 330f);
			func_223(-1350.322f, -3203.405f, 12.945f, 330f);
			func_223(-1362.684f, -3196.451f, 12.945f, 330f);
			func_223(-1347.089f, -3182.69f, 12.945f, 330f);
			func_223(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_223(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_223(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_223(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_223(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_223(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_223(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_223(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_223(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_223(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
			func_223(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
			func_223(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
			func_223(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
			func_223(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
			func_223(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
			func_223(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
			func_223(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
			func_223(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
			func_223(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
			func_223(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
			func_223(-1326.5376f, -3318.499f, 12.945f, 331.2f);
			func_223(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
			func_223(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
			func_223(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
			func_223(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
			func_223(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
			func_223(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
			func_223(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
			func_223(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
			func_223(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
			func_223(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
			func_223(-1297.4025f, -3316.699f, 12.945f, 331.2f);
			func_223(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
			func_223(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
			func_223(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
			func_223(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_223(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_223(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_223(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_223(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_223(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_223(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_223(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_223(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_223(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_223(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_223(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_223(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_223(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_223(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_223(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_223(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_223(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_223(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_223(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_223(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
			func_223(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
			func_223(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
			func_223(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
			func_223(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
			func_223(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
			func_223(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
			func_223(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
			func_223(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
			func_223(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
			func_223(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
			func_223(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
			func_223(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
			func_223(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
			func_223(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
			func_223(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
			func_223(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
			func_223(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
			func_223(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
			func_223(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
			func_223(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
			func_223(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
			func_223(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
			func_223(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_223(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
			func_223(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
			func_223(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_223(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
			func_223(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_223(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_223(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_223(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_223(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_223(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_223(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_223(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_223(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_223(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_223(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_223(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_223(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_223(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_223(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_223(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_223(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_223(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_223(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_223(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
			func_223(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
			func_223(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
			func_223(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
			func_223(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
			func_223(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
			func_223(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
			func_223(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
			func_223(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
			func_223(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
			func_223(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
			func_223(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
			func_223(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
			func_223(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
			func_223(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
			func_223(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
			func_223(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
			func_223(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
			func_223(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
			func_223(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
			func_223(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
			func_223(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
			func_223(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
			func_223(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
			func_223(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
			func_223(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_223(-2484.323f, 3249.294f, 31.828f, 151f);
			func_223(-2495.313f, 3255.746f, 31.828f, 151f);
			func_223(-2472.644f, 3242.684f, 31.828f, 151f);
			func_223(-2506.313f, 3262.27f, 31.823f, 151f);
			func_223(-2461.494f, 3235.93f, 31.828f, 151f);
			func_223(-2505.602f, 3238.049f, 31.828f, 151f);
			func_223(-2481.937f, 3224.8f, 31.828f, 151f);
			func_223(-2516.813f, 3244.266f, 31.823f, 151f);
			func_223(-2470.03f, 3217.899f, 31.828f, 151f);
			func_223(-2493.933f, 3231.308f, 31.828f, 151f);
			func_223(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_223(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_223(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_223(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_223(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_223(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_223(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_223(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_223(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_223(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
			func_223(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
			func_223(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
			func_223(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
			func_223(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
			func_223(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
			func_223(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
			func_223(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
			func_223(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
			func_223(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_223(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
			func_223(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
			func_223(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
			func_223(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
			func_223(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
			func_223(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
			func_223(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
			func_223(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
			func_223(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
			func_223(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
			func_223(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
			func_223(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
			func_223(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
			func_223(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
			func_223(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
			func_223(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
			func_223(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_244(int iParam0)//Position - 0x17A89
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("duster2"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
		case joaat("conada2"):
			return 1;
		
		default:
	}
	return 0;
}

void func_245(int iParam0)//Position - 0x17B3F
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_223(-947.712f, -3367.704f, 12.944f, 60f);
			func_223(-904.692f, -3293.072f, 12.944f, 60f);
			func_223(-863.71f, -3221.978f, 12.944f, 60f);
			func_223(-966.418f, -3162.773f, 12.944f, 60f);
			func_223(-1007.435f, -3233.93f, 12.944f, 60f);
			func_223(-1050.455f, -3308.559f, 12.944f, 60f);
			func_223(-1145.673f, -3253.456f, 12.944f, 60f);
			func_223(-1098.386f, -3181.428f, 12.944f, 60f);
			func_223(-1060.474f, -3108.903f, 12.944f, 60f);
			func_223(-1155.391f, -3053.632f, 12.944f, 60f);
			func_223(-1196.114f, -3125.146f, 12.948f, 60f);
			func_223(-1235.552f, -3201.86f, 12.944f, 60f);
			func_223(-1344.446f, -3139.177f, 12.944f, 60f);
			func_223(-1301.308f, -3064.341f, 12.944f, 60f);
			func_223(-1260.135f, -2992.912f, 12.944f, 60f);
			func_223(-1364.244f, -2932.9f, 12.98f, 60f);
			func_223(-1405.284f, -3004.108f, 12.96f, 60f);
			func_223(-1448.29f, -3078.72f, 12.95f, 60f);
			func_223(-1535.732f, -3028.318f, 12.945f, 60f);
			func_223(-1492.639f, -2953.558f, 12.945f, 60f);
			func_223(-1451.506f, -2882.2f, 12.944f, 60f);
			func_223(-1553.927f, -2823.12f, 13.002f, 60f);
			func_223(-1595.097f, -2894.571f, 12.944f, 60f);
			func_223(-1637.836f, -2968.714f, 12.945f, 60f);
			func_223(-1740.971f, -2911.484f, 12.944f, 330f);
			func_223(-1696.293f, -2833.978f, 12.944f, 330f);
			func_223(-1651.502f, -2756.273f, 12.945f, 330f);
			func_223(-1588.258f, -2647.575f, 12.944f, 330f);
			func_223(-1536.862f, -2681.378f, 12.945f, 330f);
			func_223(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_223(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_223(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_223(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_223(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_223(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_223(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_223(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_223(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_223(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_223(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_223(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_223(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_223(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_223(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_223(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_223(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_223(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_223(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_223(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_223(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_223(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_223(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_223(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_223(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_223(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_223(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_223(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_223(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_223(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_223(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_246(int iParam0)//Position - 0x1811A
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob5"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("streamer216"):
		case joaat("raiju"):
		case joaat("titan2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x181D0
{
	if (func_248(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x181E6
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.2695f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x18224
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.2446f, 3127.9133f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0, int iParam1)//Position - 0x18262
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_251(struct<3> Param0, var uParam3, var uParam4)//Position - 0x1833F
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	fVar3 = 50f;
	fVar5 = 300f;
	iVar6 = -1;
	iVar0 = 1;
	while (iVar0 <= 131)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312333[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312333[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 174)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_227(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_253(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		iVar7 = 0;
		if (iVar0 >= 162 && iVar0 <= 166)
		{
			iVar7 = func_252(iVar0, Param0, fVar3, 1);
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1943917.f_754[iVar0 /*3*/], Global_1943917.f_754[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3 || iVar7)
			{
				if (iVar0 >= 83 && iVar0 <= 87)
				{
					if (fVar4 <= fVar5)
					{
						fVar5 = fVar4;
						if (iVar6 != -1)
						{
							(*uParam3)[iVar6] = iVar0;
						}
						else
						{
							iVar6 = iVar2;
							(*uParam3)[iVar2] = iVar0;
							(*uParam4)[iVar2] = 1;
							iVar2++;
						}
					}
				}
				else
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 1;
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_252(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x18526
{
	float fVar0;
	
	if (iParam0 == -1 || func_75(iParam0) != 28)
	{
		return 0;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 166:
		case 162:
		case 163:
		case 165:
			fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1943917.f_754[iParam0 /*3*/], Global_1943917.f_754[iParam0 /*3*/].f_1, 0f);
			if (fVar0 < fParam4 && (!bParam5 || (bParam5 && Param1.f_2 >= 0f)))
			{
				return 1;
			}
			break;
		
		case 164:
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -500f, -1664.2474f, 18.349556f, -544.0528f, -1720.7538f, 28.374449f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -474.9512f, -1681.6456f, 17.890976f, -496.40805f, -1762.7743f, 27.64551f, 45f, false, true))
			{
				return 1;
			}
			if (!bParam5 && Param1.f_2 <= 0f)
			{
				fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1943917.f_754[iParam0 /*3*/], Global_1943917.f_754[iParam0 /*3*/].f_1, 0f);
			}
			break;
	}
	return 0;
}

int func_253(int iParam0)//Position - 0x18662
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_254(iParam0);
	if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_306 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
	if (iVar1 != func_116())
	{
		if (Global_1845221[iVar1 /*889*/].f_268.f_306 == iVar0)
		{
			return 1;
		}
	}
	if (func_237() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)//Position - 0x186CA
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_255(int iParam0)//Position - 0x18751
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_256(int iParam0)//Position - 0x1877F
{
	switch (iParam0)
	{
		case 78:
			func_223(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_223(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_223(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_223(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_223(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_223(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_223(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_223(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_223(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_223(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_223(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_223(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_223(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
			func_223(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
			func_223(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
			func_223(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_223(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_223(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_223(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_223(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_223(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_223(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_223(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_223(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_223(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_223(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_223(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_223(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_223(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_223(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_223(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_223(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_223(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_223(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_223(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_223(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_257())
			{
				func_223(-1608.297f, -556.875f, 33.406f, 310f);
				func_223(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_223(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_223(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_223(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_223(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_223(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
				func_223(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
				func_223(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
				func_223(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
				func_223(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_223(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_257())
			{
				func_223(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_223(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_223(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_223(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_223(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
				func_223(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
				func_223(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
				func_223(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
				func_223(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
				func_223(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
				func_223(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
				func_223(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_257())
			{
				func_223(-102.737f, -597.379f, 35.053f, 160.999f);
				func_223(-97.793f, -589.568f, 35.082f, 134.799f);
				func_223(-110.357f, -619.402f, 35.055f, 160.599f);
				func_223(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_223(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_223(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_223(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_223(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_223(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_223(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_223(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_223(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_257())
			{
				func_223(-59.349f, -779.238f, 43.134f, 228.398f);
				func_223(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_223(-65.212f, -772.66f, 43.151f, 219.398f);
				func_223(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_223(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_223(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_223(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_223(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_223(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_223(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_223(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_223(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_223(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
			func_223(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
			func_223(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
			func_223(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
			func_223(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_223(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
			func_223(264.814f, -1785.8008f, 26.1131f, 164.5991f);
			func_223(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_223(-1464.5f, -927.9f, 9f, 296.7991f);
			func_223(-1466f, -926.1f, 9f, 296.7991f);
			func_223(-1467.9f, -924.7f, 9f, 296.7991f);
			func_223(-1469.7f, -923.7f, 9f, 296.7991f);
			func_223(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
			func_223(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
			func_223(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
			func_223(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_223(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
			func_223(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
			func_223(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
			func_223(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_223(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
			func_223(33.672f, -1014.3994f, 28.4552f, 234.5994f);
			func_223(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_223(39.4909f, -1015.0972f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_223(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
			func_223(43.316f, 2785.9026f, 56.8782f, 103.5999f);
			func_223(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
			func_223(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_223(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_223(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
			func_223(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
			func_223(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_223(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
			func_223(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
			func_223(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
			func_223(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_223(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
			func_223(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
			func_223(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
			func_223(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_223(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
			func_223(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
			func_223(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
			func_223(1750.4752f, 3715.007f, 33.1067f, 39.399f);
			func_223(1747.1798f, 3721.1023f, 33.007f, 95.199f);
			func_223(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
			func_223(1740.67f, 3717.6128f, 33.0616f, 8.199f);
			func_223(1733.937f, 3715.0796f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_223(947.9371f, -1452.7367f, 30.143f, 331.5991f);
			func_223(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
			func_223(952.4588f, -1452.8821f, 30.129f, 331.5991f);
			func_223(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
			func_223(935.1006f, -1452.7012f, 30.1907f, 316.999f);
			func_223(932.5459f, -1452.5793f, 30.2194f, 316.999f);
			func_223(929.9319f, -1452.5665f, 30.2647f, 316.999f);
			func_223(927.4857f, -1452.4463f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_223(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_223(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_223(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_223(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_223(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_223(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_223(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_223(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_223(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_223(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_223(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_223(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_223(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_223(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_223(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_223(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_223(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
			func_223(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
			func_223(2465.1226f, 4081.35f, 37.0655f, 167.4f);
			func_223(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_223(2467.7002f, 4080.332f, 37.0649f, 167.4f);
			func_223(2469.5867f, 4079.5378f, 37.061f, 167.4f);
			func_223(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
			func_223(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_223(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_223(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
			func_223(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_223(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_223(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_223(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
			func_223(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
			func_223(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_223(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
			func_223(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
			func_223(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
			func_223(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
			func_223(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
			func_223(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
			func_223(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
			func_223(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_257()//Position - 0x1997A
{
	return Global_2684718.f_17;
}

int func_258(struct<3> Param0)//Position - 0x19988
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2635516.f_3214, Param0) < Global_2635516.f_3222)
	{
		return Global_2635516.f_3217;
	}
	Global_2635516.f_3214 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2643191[iVar0 /*7*/].f_2 + Global_2643191[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_185(Param0, &(Global_2643191[iVar0 /*7*/])))
		{
			Global_2635516.f_3217 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635516.f_3217 = -1;
	return -1;
}

int func_259()//Position - 0x19A2A
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2685658.f_6498)
	{
		return 0;
	}
	return 0;
}

int func_260(struct<2> Param0, var uParam2, bool bParam3, float fParam4)//Position - 0x19A52
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_227(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1943917.f_754[iVar0 /*3*/], Global_1943917.f_754[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_261()//Position - 0x19AD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635516.f_3038[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_262(var uParam0, bool bParam1)//Position - 0x19AFF
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2643147[iVar0 /*7*/].f_2 + Global_2643147[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_185(Var1, &(Global_2643147[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_196(&Var1, Global_2643147[iVar0 /*7*/], Global_2643147[iVar0 /*7*/].f_3, Global_2643147[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_263(struct<3> Param0)//Position - 0x19B9C
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635516.f_516 && !Global_2635516.f_517)
	{
		if (!Global_2635516.f_45.f_318)
		{
			if (!func_267(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_266(Param0, 1008981770))
			{
				if (!func_202(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_202(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_265(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_264(&(Global_2635516.f_45[iVar0 /*12*/])) };
					if (!func_202(&Var1, 0, 0, 0, 1))
					{
						if (!func_202(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_264(var uParam0)//Position - 0x19C5C
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_265(struct<3> Param0, float fParam3)//Position - 0x19CA5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635516.f_45[iVar0 /*12*/].f_9)
		{
			if (func_189(Param0, &(Global_2635516.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_266(struct<3> Param0, float fParam3)//Position - 0x19CED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635516.f_45[iVar0 /*12*/].f_9)
		{
			if (func_189(Param0, &(Global_2635516.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_267(int iParam0, bool bParam1)//Position - 0x19D34
{
	if (func_43() != 0)
	{
		return func_268(iParam0) != 0;
	}
	return func_167(iParam0, bParam1, 0);
}

int func_268(int iParam0)//Position - 0x19D5B
{
	if (func_351(iParam0, 0, 1))
	{
		return Global_2657991[iParam0 /*467*/].f_1;
	}
	return 0;
}

int func_269(bool bParam0)//Position - 0x19D7D
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_270()//Position - 0x19DA0
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2635516.f_2056[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635516.f_2055 = 0;
}

void func_271()//Position - 0x19DD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635516.f_692[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635516.f_692[iVar0])
			{
				if (!Global_2635516.f_688[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635516.f_688[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635516.f_688[iVar0]);
						Global_2635516.f_688[iVar0] = -1;
					}
					else
					{
						Global_2635516.f_688[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2635516.f_688[iVar0] == -1)
		{
			Global_2635516.f_688[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_272()//Position - 0x19E80
{
	if (Global_2635516.f_681 == MISC::GET_FRAME_COUNT())
	{
		return 1;
	}
	if (!BitTest(Global_2638770, 0) && Global_2635516.f_681 == (MISC::GET_FRAME_COUNT() - 1))
	{
		return 1;
	}
	return 0;
}

int func_273()//Position - 0x19EBC
{
	if (!Global_2635516.f_607 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635516.f_612) < func_269(0))
	{
		return 1;
	}
	return 0;
}

int func_274()//Position - 0x19EF0
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2635516.f_518 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_275(PLAYER::PLAYER_ID()) && !func_215(0))
	{
		return 0;
	}
	return 1;
}

int func_275(int iParam0)//Position - 0x19F47
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672939.f_1, iParam0);
}

float func_276()//Position - 0x19F66
{
	return 10f;
}

Vector3 func_277(int iParam0)//Position - 0x19F73
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_278(int iParam0)//Position - 0x19F86
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_92.f_2[iVar0]), iVar1);
}

void func_279(int iParam0)//Position - 0x19FB5
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_92.f_5 = iParam0;
}

void func_280()//Position - 0x19FCE
{
	if (func_20() > 0)
	{
		func_311();
		func_304();
		func_296();
		func_283();
	}
	if (func_282(NETWORK::PARTICIPANT_ID()) != 3 && func_20() == 3)
	{
		func_281(3);
	}
	switch (func_282(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (func_20() > 0)
			{
				func_281(2);
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_281(int iParam0)//Position - 0x1A040
{
	Local_100[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = iParam0;
}

int func_282(int iParam0)//Position - 0x1A054
{
	return Local_100[iParam0 /*4*/].f_1;
}

void func_283()//Position - 0x1A064
{
	if (!func_293())
	{
		return;
	}
	if (func_289())
	{
		if (!func_288(PLAYER::PLAYER_ID()))
		{
			func_286();
		}
	}
	else if (func_288(PLAYER::PLAYER_ID()))
	{
		func_284();
	}
}

void func_284()//Position - 0x1A0A0
{
	func_285(11);
}

void func_285(int iParam0)//Position - 0x1A0AE
{
	MISC::CLEAR_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_6), iParam0);
}

void func_286()//Position - 0x1A0CB
{
	func_287(11);
}

void func_287(int iParam0)//Position - 0x1A0D9
{
	MISC::SET_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_6), iParam0);
}

bool func_288(int iParam0)//Position - 0x1A0F6
{
	return func_6(iParam0, 11);
}

int func_289()//Position - 0x1A106
{
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	if (func_292() != 0)
	{
		func_291(0);
	}
	if (func_290(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_292() == 0)
		{
			func_291(1);
		}
		return 0;
	}
	if (func_12(2))
	{
		return 0;
	}
	return 1;
}

bool func_290(int iParam0, int iParam1)//Position - 0x1A160
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_100[iParam0 /*4*/].f_2[iVar0], iVar1);
}

void func_291(int iParam0)//Position - 0x1A185
{
	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_306 = iParam0;
}

int func_292()//Position - 0x1A19F
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_306;
}

int func_293()//Position - 0x1A1B7
{
	if (!func_294())
	{
		return 0;
	}
	return 1;
}

bool func_294()//Position - 0x1A1CC
{
	return func_295(PLAYER::PLAYER_ID());
}

var func_295(int iParam0)//Position - 0x1A1DC
{
	return func_6(iParam0, 9);
}

void func_296()//Position - 0x1A1EC
{
	if (!func_303())
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_302(PLAYER::PLAYER_PED_ID(), func_16(), 120f, 1))
	{
		if (!func_290(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_301(1);
		}
	}
	else if (func_290(NETWORK::PARTICIPANT_ID(), 1))
	{
		func_300(1);
	}
	if (!func_290(NETWORK::PARTICIPANT_ID(), 0) && func_297())
	{
		func_301(0);
	}
}

int func_297()//Position - 0x1A263
{
	if (func_294())
	{
		if (!func_302(PLAYER::PLAYER_PED_ID(), func_16(), 1000f, 1))
		{
			return 1;
		}
		if (func_299(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_298(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_235(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_17()))
	{
		return 1;
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x1A2CF
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

int func_299(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A308
{
	if (iParam0 == func_116())
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

void func_300(int iParam0)//Position - 0x1A36C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_100[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

void func_301(int iParam0)//Position - 0x1A396
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_100[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

bool func_302(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x1A3C0
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_303()//Position - 0x1A3E2
{
	if (func_7())
	{
		return 1;
	}
	return 0;
}

void func_304()//Position - 0x1A3F6
{
	int iVar0;
	
	if (func_309(0))
	{
		if (func_307())
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_306())
	{
		switch (func_306())
		{
			case 2:
				if (!func_331(1) && iVar0 == 0)
				{
					func_124(1);
				}
				break;
			
			case 0:
				if ((func_294() && !func_290(NETWORK::PARTICIPANT_ID(), 0)) && iVar0 == 2)
				{
					func_301(0);
				}
				break;
		}
		func_305(iVar0);
	}
}

void func_305(int iParam0)//Position - 0x1A481
{
	uLocal_144 = iParam0;
}

int func_306()//Position - 0x1A48D
{
	return uLocal_144;
}

bool func_307()//Position - 0x1A497
{
	return func_308(PLAYER::PLAYER_ID());
}

int func_308(int iParam0)//Position - 0x1A4A7
{
	if (func_35(iParam0))
	{
		if (func_35(Global_1887549[iParam0 /*611*/].f_10))
		{
			return Global_1887549[iParam0 /*611*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_309(bool bParam0)//Position - 0x1A4DC
{
	return func_310(PLAYER::PLAYER_ID(), bParam0);
}

int func_310(int iParam0, bool bParam1)//Position - 0x1A4EE
{
	if (!func_35(iParam0))
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
	return func_35(Global_1887549[iParam0 /*611*/].f_10);
}

void func_311()//Position - 0x1A526
{
	int iVar0;
	
	if (func_19() > 0)
	{
		func_316();
	}
	switch (func_19())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (((((!func_12(3) && !func_290(NETWORK::PARTICIPANT_ID(), 2)) && func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_16())) && func_314(func_10())) && func_313(func_16()) == 0)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_16(), true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_16(), false, true);
				func_301(2);
			}
			break;
		
		case 3:
			if (((!func_12(4) && !func_290(NETWORK::PARTICIPANT_ID(), 3)) && func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_16()))
			{
				func_301(3);
			}
			break;
		
		case 4:
			if (((!func_12(5) && !func_290(NETWORK::PARTICIPANT_ID(), 4)) && func_7()) && func_314(func_10()))
			{
				iVar0 = func_10();
				func_312(&iVar0);
				func_301(4);
			}
			break;
		
		case 5:
			break;
	}
}

void func_312(int iParam0)//Position - 0x1A64F
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_313(int iParam0)//Position - 0x1A688
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2++;
			}
			iVar0++;
		}
	}
	return iVar2;
}

int func_314(int iParam0)//Position - 0x1A6CF
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)//Position - 0x1A704
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_316()//Position - 0x1A726
{
	if (func_322())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_149))
		{
			iLocal_149 = HUD::ADD_BLIP_FOR_ENTITY(func_16());
			HUD::SET_BLIP_SPRITE(iLocal_149, func_321());
			func_318(&iLocal_149, func_320());
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_149, func_317());
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_149))
	{
		HUD::REMOVE_BLIP(&iLocal_149);
	}
}

char* func_317()//Position - 0x1A779
{
	return "CASINO_VD" /* GXT: Luxury Car */;
}

void func_318(int iParam0, int iParam1)//Position - 0x1A784
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_319(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_319(int iParam0)//Position - 0x1A7AA
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

int func_320()//Position - 0x1AA12
{
	return 12;
}

int func_321()//Position - 0x1AA1C
{
	return 225;
}

int func_322()//Position - 0x1AA26
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 0;
	}
	if (func_19() != 1)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), func_16(), false))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	return 1;
}

void func_323(int iParam0)//Position - 0x1AA6B
{
	Local_100[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_324()//Position - 0x1AA7D
{
	func_325();
	return 1;
}

void func_325()//Position - 0x1AA8A
{
	func_287(10);
}

int func_326()//Position - 0x1AA98
{
	return Local_92.f_0;
}

int func_327(int iParam0)//Position - 0x1AAA2
{
	return Local_100[iParam0 /*4*/];
}

void func_328()//Position - 0x1AAB0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_133[iVar0] = func_330();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iLocal_133[iVar0] = iVar0;
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_133[iVar0]);
			if (func_351(iVar1, 0, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!bVar2)
					{
						if (func_290(iLocal_133[iVar0], 1))
						{
							bVar2 = true;
						}
					}
					if (!func_12(1))
					{
						if (func_290(iLocal_133[iVar0], 0))
						{
							func_278(1);
						}
					}
					if (!func_12(3))
					{
						if (func_290(iLocal_133[iVar0], 2))
						{
							func_278(3);
						}
					}
					if (!func_12(4))
					{
						if (func_290(iLocal_133[iVar0], 3))
						{
							func_278(4);
						}
					}
					if (!func_12(5))
					{
						if (func_290(iLocal_133[iVar0], 4))
						{
							func_278(5);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar2)
		{
			if (!func_12(2))
			{
				func_278(2);
			}
		}
		else if (func_12(2))
		{
			func_329(2);
		}
	}
}

void func_329(int iParam0)//Position - 0x1ABCC
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_92.f_2[iVar0]), iVar1);
}

int func_330()//Position - 0x1ABFB
{
	return -1;
}

bool func_331(int iParam0)//Position - 0x1AC04
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_142[iVar0], iVar1);
}

int func_332()//Position - 0x1AC23
{
	if (Global_1575056 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_338())
	{
		return 1;
	}
	if (Global_2699004)
	{
		return 1;
	}
	if (func_337())
	{
		return 1;
	}
	if (func_336(159))
	{
		if (!func_335())
		{
			return 1;
		}
	}
	if (func_336(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_333() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_333()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_333()//Position - 0x1ACA7
{
	switch (func_43())
	{
		case 0:
			return func_334();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_334()//Position - 0x1ACDA
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_335()//Position - 0x1ACFE
{
	return Global_2684718.f_700;
}

int func_336(int iParam0)//Position - 0x1AD0D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_337()//Position - 0x1AD24
{
	return Global_2696416;
}

bool func_338()//Position - 0x1AD30
{
	return Global_2684718.f_695;
}

void func_339()//Position - 0x1AD3F
{
	SYSTEM::WAIT(0);
}

void func_340()//Position - 0x1AD4C
{
	if (func_294() && func_2() != 3)
	{
		func_346();
	}
	if (func_345(PLAYER::PLAYER_ID()))
	{
		func_344();
	}
	if (func_288(PLAYER::PLAYER_ID()))
	{
		func_284();
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		func_343();
	}
	if (func_292() != 0)
	{
		func_291(0);
	}
	if (func_2() != 0)
	{
		func_341();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_341()//Position - 0x1ADB4
{
	int iVar0;
	
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		func_342(&iVar0);
	}
}

void func_342(int iParam0)//Position - 0x1ADD1
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_343()//Position - 0x1ADF5
{
	func_285(12);
}

void func_344()//Position - 0x1AE03
{
	func_285(10);
}

bool func_345(int iParam0)//Position - 0x1AE11
{
	return func_6(iParam0, 10);
}

void func_346()//Position - 0x1AE21
{
	func_285(9);
	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_307 = 0;
}

int func_347(struct<21> Param0)//Position - 0x1AE40
{
	func_350(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_348(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_92, 8, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_100, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

int func_348(int iParam0, int iParam1, bool bParam2)//Position - 0x1AE77
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_349();
			}
			else
			{
				return 0;
			}
		}
		if (!func_215(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_349();
					}
					else
					{
						return 0;
					}
				}
				if (func_338())
				{
					if (!bParam2)
					{
						func_349();
					}
					else
					{
						return 0;
					}
				}
				if (func_336(157))
				{
					if (!bParam2)
					{
						func_349();
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
					func_349();
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
				func_349();
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
			func_349();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_349()//Position - 0x1AF8D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_350(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1AF99
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_349();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_351(int iParam0, bool bParam1, bool bParam2)//Position - 0x1AFB8
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

