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
	struct<7> Local_88 = { 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	struct<4> Local_96[8];
	int iLocal_129[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_138[1] = { 0 };
	var uLocal_140 = 0;
	struct<4> Local_141 = { 0, 0, 0, 0 } ;
	int iLocal_145 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_336(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_332(ScriptParam_0))
			{
				func_325();
			}
		}
		else
		{
			func_325();
		}
	}
	else
	{
		func_325();
	}
	while (true)
	{
		func_324();
		if (func_317())
		{
			func_325();
		}
		if (func_316(1))
		{
			func_325();
		}
		func_313();
		switch (func_312(NETWORK::PARTICIPANT_ID()))
		{
			case 0:
				if (func_311() == 1 && func_309())
				{
					func_308(1);
				}
				break;
			
			case 1:
				switch (func_311())
				{
					case 1:
						func_265();
						break;
					
					case 2:
						func_308(2);
						break;
				}
				break;
			
			case 2:
				func_325();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_311())
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
					func_325();
					break;
				}
		}
	}
}

void func_1()//Position - 0x183
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

int func_2()//Position - 0x1D9
{
	return Local_88.f_4;
}

void func_3(int iParam0)//Position - 0x1E5
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_88.f_1 = iParam0;
}

void func_4()//Position - 0x1FE
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

bool func_5(int iParam0)//Position - 0x254
{
	return func_6(iParam0, 12);
}

var func_6(int iParam0, int iParam1)//Position - 0x264
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_6, iParam1);
}

bool func_7()//Position - 0x27C
{
	return func_8(func_10());
}

int func_8(int iParam0)//Position - 0x28C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_9(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x2AC
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

int func_10()//Position - 0x2E5
{
	return Local_88.f_6;
}

void func_11(int iParam0)//Position - 0x2F1
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_88.f_4 = iParam0;
}

bool func_12(int iParam0)//Position - 0x30A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Local_88.f_2[iVar0], iVar1);
}

void func_13()//Position - 0x32B
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

void func_14(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3D3
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

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x42E
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_336(iVar3, 1, 0))
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

int func_16()//Position - 0x4C1
{
	return NETWORK::NET_TO_VEH(func_10());
}

int func_17()//Position - 0x4D1
{
	return Local_88.f_5;
}

void func_18(int iParam0)//Position - 0x4DD
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_88.f_6.f_1 = iParam0;
}

int func_19()//Position - 0x4F8
{
	return Local_88.f_6.f_1;
}

int func_20()//Position - 0x506
{
	return Local_88.f_1;
}

void func_21(int iParam0)//Position - 0x512
{
	Local_88.f_0 = iParam0;
}

int func_22()//Position - 0x51E
{
	if (!func_12(0))
	{
		func_264(PLAYER::PLAYER_ID());
		func_263(0);
	}
	if (!func_23())
	{
		return 0;
	}
	return 1;
}

int func_23()//Position - 0x549
{
	int iVar0;
	struct<103> Var1;
	int iVar104;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_10()))
	{
		return 1;
	}
	if (!func_316(0))
	{
		if (func_119(func_262(PLAYER::PLAYER_ID()), &Local_141, &(Local_141.f_3)))
		{
			func_118(0);
		}
	}
	if (func_116(func_117()) && func_316(0))
	{
		MISC::CLEAR_AREA(Local_141, 5f, true, false, false, false);
		if (func_113(&(Local_88.f_6), func_117(), Local_141, Local_141.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_16();
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
			func_112(iVar0);
			ENTITY::SET_PICK_UP_BY_CARGOBOB_DISABLED(iVar0, true);
			Var1 = { func_111() };
			func_24(iVar0, &Var1, 0, 1, 0);
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar104 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				MISC::SET_BIT(&iVar104, 11);
				DECORATOR::DECOR_SET_INT(iVar0, "MPBitset", iVar104);
			}
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
			{
				DECORATOR::DECOR_SET_INT(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
			VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar0, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_117());
			return 1;
		}
	}
	return 0;
}

void func_24(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x657
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != func_110())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_85(iParam0, uParam1, bParam2, bParam3);
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
			if (func_84(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21957 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21957 /* Tunable: IMANI_ARMOR_PLATING_DAMAGE_SCALE */);
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

bool func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xB36
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_26(int iParam0)//Position - 0xB46
{
	return (func_84(iParam0) && !func_27(iParam0));
}

int func_27(int iParam0)//Position - 0xB60
{
	switch (iParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xB8F
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

void func_29(int iParam0)//Position - 0xC96
{
	struct<3> Var0;
	
	if (Global_262145.f_20366 /* Tunable: ENABLED_LOCK_ANY_AMBIENT_DOZER_OF_THIS_ZOLA */)
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

void func_30(struct<3> Param0)//Position - 0xD21
{
	struct<4> Var0;
	
	Var0.f_0 = -1251853784;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = Param0.f_0;
	Var0.f_3.f_1 = Param0.f_1;
	Var0.f_3.f_2 = Param0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 6, func_31(1, 1), Var0.f_0);
}

var func_31(int iParam0, bool bParam1)//Position - 0xD62
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_336(iVar2, 0, 0))
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

bool func_32(int iParam0, int iParam1)//Position - 0xDC7
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

int func_33(int iParam0, bool bParam1)//Position - 0xE20
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()//Position - 0xE61
{
	return Global_1574925;
}

int func_35(var uParam0)//Position - 0xE6D
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

int func_36(int iParam0)//Position - 0xE8F
{
	int iVar0;
	
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 61)
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

bool func_37(int iParam0)//Position - 0xECA
{
	return func_38(iParam0, 6, 1);
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0xEDA
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101444.f_1414[iParam0], iParam1);
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
		return BitTest(Global_114372.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_39(int iParam0, int iParam1)//Position - 0xF3A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_40(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_40(int iParam0, var uParam1)//Position - 0xF69
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_41(uParam1));
}

int func_41(var uParam0)//Position - 0xF7E
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_34();
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

int func_42(int iParam0)//Position - 0xFB2
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
			return 12725;
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
		
		default:
			break;
	}
	return 14626;
}

int func_43()//Position - 0x135A
{
	return Global_32828;
}

int func_44(int iParam0)//Position - 0x1365
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
	}
	return 6;
}

bool func_45()//Position - 0x169B
{
	return Global_101444.f_394 > 0;
}

int func_46(int iParam0, var* uParam1)//Position - 0x16AC
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

int func_47(int iParam0)//Position - 0x1729
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
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577948));
			iVar3 = 20000;
			if (Global_1836669)
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

void func_48(int iParam0)//Position - 0x17B6
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

int func_49(int iParam0, int iParam1)//Position - 0x180E
{
	func_53();
	if (Global_1574632.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0))
	{
		Global_1942670.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
		if (Global_1942670.f_11 < 0f)
		{
			Global_1942670.f_11 = 0f;
		}
	}
	func_51(*iParam0, &Global_1942670, &(Global_1942670.f_1), &(Global_1942670.f_4), &(Global_1942670.f_7), &(Global_1942670.f_10));
	Global_1942670.f_1.f_2 = (Global_1942670.f_1.f_2 - Global_1942670.f_11);
	if (Global_1942670.f_4.f_2 < 0f)
	{
		Global_1942670.f_12 = 1;
	}
	Global_1942670.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1942670.f_13 = 255;
	}
	if (Global_1942670.f_12)
	{
		if (func_50(iParam0, iParam1, Global_1942670, Global_1942670.f_1, Global_1942670.f_4, Global_1942670.f_7, Global_1942670.f_10, 0, Global_1942670.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577948 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577948 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1942670.f_14 = { Global_1942670.f_1 };
		Global_1942670.f_14 = (Global_1942670.f_14 * -1f);
		Global_1942670.f_17 = { Global_1942670.f_4 };
		Global_1942670.f_17 = (Global_1942670.f_17 * -1f);
		Global_1942670.f_20 = { Global_1942670.f_7 };
		Global_1942670.f_20.f_1 = (Global_1942670.f_20.f_1 * -1f);
		Global_1942670.f_20.f_2 = (Global_1942670.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1942670.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1942670.f_23 = 3;
		}
		Global_1942670.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1942670.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1942670.f_24 = 3;
		}
		if (((Global_1942670.f_23 == 0 && func_50(iParam0, iParam1, Global_1942670, Global_1942670.f_1, Global_1942670.f_4, Global_1942670.f_7, Global_1942670.f_10, 0, Global_1942670.f_13)) || Global_1942670.f_23 != 0) && ((Global_1942670.f_24 == 0 && func_50(iParam0, iParam1, Global_1942670, Global_1942670.f_14, Global_1942670.f_17, Global_1942670.f_20, Global_1942670.f_10, 1, Global_1942670.f_13)) || Global_1942670.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577948 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577948 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_50(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, int iParam13, int iParam14)//Position - 0x1AB9
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param6, Param9, fParam12, iParam13, iParam14);
}

int func_51(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1AE2
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_52(Global_1942696, 0f, 0f, 0f, 0) && !func_52(Global_1942699, 0f, 0f, 0f, 0)) && !func_52(Global_1942702, 0f, 0f, 0f, 0)) && !Global_1942705 == 0f)
	{
		*uParam2 = { Global_1942696 };
		*uParam3 = { Global_1942699 };
		*uParam4 = { Global_1942702 };
		*uParam5 = Global_1942705;
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
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
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
	}
	return 1;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x74C6
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_53()//Position - 0x750D
{
	Global_1942670 = 0;
	Global_1942670.f_1 = { 0f, 0f, 0f };
	Global_1942670.f_4 = { 0f, 0f, 0f };
	Global_1942670.f_7 = { 0f, 0f, 0f };
	Global_1942670.f_10 = 0f;
	Global_1942670.f_11 = 0f;
	Global_1942670.f_12 = 0;
	Global_1942670.f_13 = 0;
	Global_1942670.f_14 = { 0f, 0f, 0f };
	Global_1942670.f_17 = { 0f, 0f, 0f };
	Global_1942670.f_20 = { 0f, 0f, 0f };
	Global_1942670.f_23 = 0;
	Global_1942670.f_24 = 0;
}

int func_54(int iParam0)//Position - 0x7586
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

int func_55(int iParam0)//Position - 0x75BE
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

int func_56(int iParam0, var* uParam1)//Position - 0x7603
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
		iVar0 = func_110();
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
		iVar2 = Global_2359296[func_63() /*5569*/].f_681.f_2;
		if (iVar2 > -1 && iVar2 < 515)
		{
			if (BitTest(Global_1586504[iVar2 /*142*/].f_103, 8))
			{
				bVar1 = true;
			}
		}
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_110()) || !func_336(iVar0, 0, 0)) || !bVar1) || func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)//Position - 0x7760
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
	if (Global_1942695)
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

int func_58(int iParam0)//Position - 0x7A69
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

int func_59(int iParam0)//Position - 0x7A95
{
	if (func_62(iParam0) == 233)
	{
		return func_60(iParam0);
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x7AB2
{
	if (func_61(iParam0, 0))
	{
		return Global_1886967[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_61(int iParam0, int iParam1)//Position - 0x7AD5
{
	if (func_35(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x7B19
{
	if (func_35(iParam0))
	{
		if (func_61(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_63()//Position - 0x7B45
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_64(bool bParam0)//Position - 0x7B52
{
	return func_65(PLAYER::PLAYER_ID(), bParam0);
}

int func_65(int iParam0, bool bParam1)//Position - 0x7B64
{
	return func_66(iParam0, bParam1, 1);
}

int func_66(int iParam0, bool bParam1, int iParam2)//Position - 0x7B75
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
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_110() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x7BD2
{
	if (func_35(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_110())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_68(int iParam0, bool bParam1)//Position - 0x7C21
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

int func_69(int iParam0)//Position - 0x7C7F
{
	return (iParam0 % 32);
}

var func_70(int iParam0)//Position - 0x7C8C
{
	var uVar0;
	
	uVar0 = func_39(func_71(iParam0), -1);
	return uVar0;
}

int func_71(var uParam0)//Position - 0x7CA3
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

int func_72(int iParam0)//Position - 0x7CD0
{
	return (iParam0 / 32);
}

int func_73(int iParam0)//Position - 0x7CDD
{
	if (iParam0 != func_110())
	{
		if (func_74(iParam0) && Global_2657921[iParam0 /*463*/].f_321.f_10 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x7D12
{
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 22;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x7D59
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

void func_76(int iParam0, int iParam1)//Position - 0x84D3
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_78(iParam1);
	func_77(iVar1, &iVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, iVar0);
}

bool func_77(int iParam0, var uParam1)//Position - 0x84F4
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

int func_78(int iParam0)//Position - 0x87B6
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

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x8854
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
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_80()) && Global_1576235)
	{
		if ((iParam0 == Global_1576236 && iParam1 == Global_1576237) && iParam2 == Global_1576238)
		{
			return 13;
		}
	}
	return 0;
}

int func_80()//Position - 0x8A36
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

struct<13> func_81()//Position - 0x8A7E
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_82(int iParam0)//Position - 0x8A93
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_83(int iParam0, var uParam1)//Position - 0x8AB4
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

int func_84(int iParam0)//Position - 0x8DB5
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
			return 1;
			break;
	}
	return 0;
}

void func_85(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x8E38
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
		if (!func_108(iParam0))
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
			if (BitTest(uParam1->f_77, func_107(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_107(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_107(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_107(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_107(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_107(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_107(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_107(iVar3));
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
					if (BitTest(uParam1->f_77, func_107(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_107(iVar4));
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
				if (BitTest(uParam1->f_77, func_107(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_107(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_107(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_107(4));
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
			MISC::SET_BIT(&(uParam1->f_77), func_107(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_107(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_107(iVar6));
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
			if (func_105(uParam1->f_5) || func_105(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_104(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_103())
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
		if (uParam1->f_65 == -1 && !func_102(uParam1->f_66))
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
						func_101(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_101(iParam0, uParam1->f_69);
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
			func_93(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_107(iVar7 + 1)))
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
		if ((((func_87() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_86(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
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

int func_86(bool bParam0)//Position - 0x952E
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_87()//Position - 0x9548
{
	if ((((Global_4718592.f_116241 == 6 || Global_4718592.f_116241 == 7) || Global_4718592.f_116241 == 18) || Global_4718592.f_116241 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_91(7))
	{
		if (func_89(Global_2672741.f_4.f_16) || func_88(Global_2672741.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_88(var uParam0)//Position - 0x95D7
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882422[iVar0 /*142*/].f_78.f_63 != 0;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x95FB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_90(iParam0, 9);
	}
	return 0;
}

var func_90(int iParam0, int iParam1)//Position - 0x9619
{
	return BitTest(Global_1886967[iParam0 /*609*/].f_10.f_4, iParam1);
}

bool func_91(int iParam0)//Position - 0x9631
{
	return func_92(&(Global_2672741.f_188), iParam0);
}

var func_92(var uParam0, var uParam1)//Position - 0x9645
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_93(int iParam0, var uParam1, var uParam2)//Position - 0x9668
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
				else if (func_99(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_98(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_96(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_96(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_95(iParam0);
	if (func_94(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_94(int iParam0)//Position - 0x9842
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

void func_95(var uParam0)//Position - 0x991C
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

int func_96(int iParam0, int iParam1)//Position - 0x9973
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
		iVar0 = func_97(iParam0, 38) + 1;
		iVar1 = func_97(iParam0, 24) + 1;
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

int func_97(int iParam0, int iParam1)//Position - 0x9A5C
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153261) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153261)) && Global_153262 == iParam1)
	{
		return Global_153263;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_99(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_98(int iParam0, int iParam1)//Position - 0x9ABE
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

int func_99(int iParam0, int iParam1, int iParam2)//Position - 0x9E9D
{
	if (!func_100() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_100()//Position - 0x9EC1
{
	return 0;
}

void func_101(int iParam0, int iParam1)//Position - 0x9ECA
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

int func_102(int iParam0)//Position - 0x9F42
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

bool func_103()//Position - 0x9F62
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_104(int iParam0)//Position - 0x9F73
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

int func_105(int iParam0)//Position - 0x9FB5
{
	if (!func_100() && func_106(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x9FD5
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

int func_107(int iParam0)//Position - 0xA028
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

int func_108(int iParam0)//Position - 0xA0D8
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_109(PLAYER::PLAYER_ID(), -1))
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

int func_109(int iParam0, int iParam1)//Position - 0xA15F
{
	int iVar0;
	
	if (func_336(iParam0, 1, 1))
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

int func_110()//Position - 0xA1AC
{
	return -1;
}

struct<103> func_111()//Position - 0xA1B5
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_117();
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

void func_112(int iParam0)//Position - 0xA4CB
{
	if (!Global_262145.f_4535 /* Tunable: DISABLE_RAMMING_SOOP_AND_RAMP */)
	{
		VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
	}
}

int func_113(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xA4E5
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
		Global_2738587.f_6762 = iVar1;
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
			func_114(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_114(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xA5EE
{
	int iVar0;
	
	if (func_115(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635562.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635562.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635562.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635562.f_3230[iVar0 /*6*/] = { Global_2635562.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635562.f_3230[1 /*6*/] = { Param0 };
		Global_2635562.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635562.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635562.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_115(int iParam0, struct<3> Param1, int iParam4)//Position - 0xA6C1
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
			if (Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_116(int iParam0)//Position - 0xA75F
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_117()//Position - 0xA77D
{
	return Global_1886967[func_17() /*609*/].f_10.f_305;
}

void func_118(int iParam0)//Position - 0xA795
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_138[iVar0]), iVar1);
}

int func_119(struct<3> Param0, var uParam3, var uParam4)//Position - 0xA7B7
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
	Var0.f_0 = func_261();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_120(Param0, 0f, 0f, 0f, func_117(), 1, uParam3, uParam4, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_120(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)//Position - 0xA852
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var66;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_258())
	{
		return 0;
	}
	if (func_257() && !Global_2635562.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2635562.f_676 == 0)
		{
			Global_2635562.f_676 = 0;
			func_256();
			func_255();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_675)
	{
		if (!Global_2635562.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_679) < func_254(0))
			{
				return 0;
			}
			else
			{
				Global_2635562.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_677) > 30000)
		{
			Global_2635562.f_676 = 0;
		}
		if (!Global_2635562.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_679) > func_254(1))
			{
				Global_2635562.f_676 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_248(Param0))
		{
			if (func_247(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2635562.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2635562.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2635562.f_698 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2635562.f_676 == 0)
	{
		Global_2635562.f_682 = 0;
		Global_2635562.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635562.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635562.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2635562.f_695 = { Param0 };
		Global_2635562.f_698 = iParam6;
		Global_2635562.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_246();
		func_256();
		if (!uParam10->f_27 || (((((((((func_245(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2738587.f_942) && !Global_2738587.f_930) && !Global_2738587.f_938) && !Global_2738587.f_943) && !Global_2738587.f_960) && !Global_2738587.f_972) && !Global_2738587.f_944) && !Global_2738587.f_994))
		{
			func_224(Param0, iParam6);
		}
		if (func_210(Param0))
		{
			func_224(Param0, iParam6);
		}
		Global_2635562.f_676 = 2;
	}
	switch (Global_2635562.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2635562.f_683 = { Param0 };
				Global_2635562.f_686 = 0f;
				if (Global_2738587.f_942)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_204(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_202(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2635562.f_683 = { Param0 };
					Global_2635562.f_686 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2635562.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam10->f_30;
						Var5.f_29 = uParam10->f_31;
					}
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					Var5.f_59 = uParam10->f_33;
					Var5.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_146(&(Global_2635562.f_683), &(Global_2635562.f_686), &Var5);
				}
				func_144(Global_2635562.f_683, Global_2635562.f_686, iParam6, &(Global_2635562.f_673));
				Global_2635562.f_671 = 0;
				Global_2635562.f_672 = 0;
				Global_2635562.f_682++;
				Global_2635562.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635562.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2635562.f_676 = 3;
			}
			break;
		
		case 3:
			if (Global_2635562.f_671)
			{
				if (Global_2635562.f_673 == Global_2635562.f_674)
				{
					if (Global_2635562.f_672)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_143(Global_2635562.f_683, Global_2635562.f_686, iParam6, 1, 1036831949))
							{
								Global_2635562.f_676 = 4;
								Global_2635562.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
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
						func_141(Global_2635562.f_683, 0);
						func_140(-1);
					}
				}
				else
				{
					Global_2635562.f_671 = 0;
					Global_2635562.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_678) > 3000)
			{
				func_140(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635562.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2635562.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2635562.f_699))
							{
								if (func_139(Global_2635562.f_683, Global_2635562.f_686, iParam6, PLAYER::PLAYER_ID(), 0) || func_122(Global_2635562.f_683, Global_2635562.f_686, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_141(Global_2635562.f_683, 0);
									func_140(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_141(Global_2635562.f_683, 0);
								func_140(-1);
							}
						}
					}
					else
					{
						func_140(-1);
					}
				}
				else
				{
					func_140(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2635562.f_683 = { Param0 };
			Global_2635562.f_686 = 0f;
			Var66.f_6 = 1082130432;
			Var66.f_7 = 1176255488;
			Var66.f_8 = 1;
			Var66.f_10 = 1;
			Var66.f_13 = 1;
			Var66.f_15 = 1;
			Var66.f_16 = 1;
			Var66.f_31 = 1;
			Var66.f_34 = joaat("tailgater");
			Var66.f_38 = 2;
			Var66.f_45 = 2;
			Var66.f_49 = 1123024896;
			Var66.f_53 = 999;
			Var66.f_54 = 1176256410;
			Var66.f_55 = 1;
			Var66.f_56 = 1;
			Var66.f_57 = 1;
			Var66.f_9 = iParam7;
			Var66.f_3 = 3.5f;
			Var66.f_10 = uParam10->f_5;
			Var66.f_4 = *uParam10;
			Var66.f_12 = 1;
			Var66.f_13 = 0;
			Var66.f_15 = uParam10->f_6;
			Var66.f_11 = uParam10->f_7;
			Var66.f_6 = uParam10->f_8;
			Var66.f_7 = uParam10->f_9;
			Var66 = { Param3 };
			Var66.f_34 = iParam6;
			Var66.f_31 = uParam10->f_13;
			Var66.f_30 = 1;
			Var66.f_48 = uParam10->f_14;
			Var66.f_56 = uParam10->f_25;
			Var66.f_57 = uParam10->f_26;
			Var66.f_30 = uParam10->f_30;
			Var66.f_29 = uParam10->f_31;
			Var66.f_59 = uParam10->f_33;
			Var66.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var66.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var66.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var66.f_49 = uParam10->f_29;
			func_146(&(Global_2635562.f_683), &(Global_2635562.f_686), &Var66);
			Global_2635562.f_676 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2635562.f_695 = { Param0 };
	Global_2635562.f_698 = iParam6;
	Global_2635562.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2635562.f_516 = 0;
		*uParam8 = { Global_2635562.f_683 };
		*uParam9 = Global_2635562.f_686;
		func_121(1);
		return 1;
	}
	return 0;
}

void func_121(bool bParam0)//Position - 0xB14A
{
	Global_2635562.f_676 = 0;
	func_246();
	func_256();
	if (bParam0)
	{
		func_255();
	}
}

int func_122(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0xB16B
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
			if (func_336(iVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_138(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_133(iVar1))
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
										if (func_132(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_123(func_262(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_123(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)//Position - 0xB2DE
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_131(iParam7, 1008981770))
	{
		func_124(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_124(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0xB331
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_130(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_125(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_125(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xB3FD
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_128(iParam0);
		if (iVar0 != 0)
		{
			func_126(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_126(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xB4FC
{
	int iVar0;
	
	func_127(iParam0, &Global_1578029);
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

void func_127(int iParam0, var uParam1)//Position - 0xB708
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

int func_128(int iParam0)//Position - 0xB789
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_129(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xB7B8
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_130(var uParam0, struct<3> Param1)//Position - 0xB7CA
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

float func_131(int iParam0, float fParam1)//Position - 0xB8A1
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_125(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_132(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)//Position - 0xB921
{
	if (func_123(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_124(Param0, fParam3, iParam4, &Global_1974430, &(Global_1974430.f_3), &(Global_1974430.f_6), 1036831949);
	func_124(Param5, fParam8, iParam9, &(Global_1974430.f_7), &(Global_1974430.f_10), &(Global_1974430.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1974430, Global_1974430.f_3, Global_1974430.f_6, Global_1974430.f_7, Global_1974430.f_10, Global_1974430.f_13))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0xB9BF
{
	if (func_137(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2706987 = { func_136(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_134(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0, int iParam1)//Position - 0xBA06
{
	int iVar0;
	
	iVar0 = func_135(iParam0);
	if (func_35(iVar0))
	{
		if (iVar0 == func_135(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0xBA2F
{
	if (func_35(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_110();
}

struct<13> func_136(int iParam0)//Position - 0xBA52
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_137(int iParam0, int iParam1)//Position - 0xBA69
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_136(iParam0) };
		Global_2707000 = { func_136(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2706987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706917, 35, &Global_2706987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2706952, 35, &Global_2707000);
				if (Global_2706917 == Global_2706952)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0xBAD6
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657921[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xBB01
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_336(iVar1, 0, 1) && func_336(iParam5, 0, 1))
			{
				if (Global_2648918.f_261[iVar0])
				{
					if (func_123(Global_2648918.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_123(func_262(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648918.f_261[iVar0])
			{
				if (func_123(Global_2648918.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_336(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_123(func_262(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_140(int iParam0)//Position - 0xBC10
{
	if (Global_2635562.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2635562.f_682 < iParam0))
		{
			Global_2635562.f_676 = 2;
		}
		else
		{
			Global_2635562.f_676 = 5;
		}
	}
	else
	{
		Global_2635562.f_676 = 5;
	}
}

void func_141(struct<3> Param0, int iParam3)//Position - 0xBC7B
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_142(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2635562.f_3037[iParam3 /*3*/] };
		Global_2635562.f_3037[iParam3 /*3*/] = { Param0 };
		func_141(Var0, iParam3 + 1);
	}
}

int func_142(struct<3> Param0, float fParam3)//Position - 0xBCE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2635562.f_3037[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_143(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)//Position - 0xBD1F
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
		func_256();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2635562.f_687[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_124(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2635562.f_687[iVar7] = NETWORK::NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(Var0, Var3, fParam6);
				Global_2635562.f_691[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2635562.f_699 = Global_2635562.f_687[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_144(struct<3> Param0, var uParam3, int iParam4, var uParam5)//Position - 0xBDF0
{
	struct<9> Var0;
	
	*uParam5 = func_145(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 323285304;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0 };
	Var0.f_6 = uParam3;
	Var0.f_7 = iParam4;
	Var0.f_8 = *uParam5;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_31(1, 1), Var0.f_0);
}

int func_145(var uParam0, var uParam1, var uParam2)//Position - 0xBE42
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

void func_146(var uParam0, var uParam1, var uParam2)//Position - 0xBE90
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635562.f_2054 > 0)
	{
		iVar0 = 0;
		while (func_197(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_147(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_147(var uParam0, var uParam1, var uParam2)//Position - 0xBEFF
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
		if (func_193(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_188(uParam0, 1))
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
	Global_2643435.f_162 = 0;
	Global_2643435.f_163 = 0;
	Global_2643435.f_164 = -99;
	Global_2643435.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643435[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643435.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_128(uParam2->f_34) != 0)
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
			if (Global_2643435.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643435.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_181(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_178(Var1))
									{
										Var1 = { func_173(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_172(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_168(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_188(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_167(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_193(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_166(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_204(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_204(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_122(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_156(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643435.f_162)
																										{
																											Global_2643435[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643435.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643435.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643435.f_162 == 0)
																									{
																										Global_2643435[0 /*3*/] = { Var1 };
																										Global_2643435.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643435.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643435[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_155(Var1, fVar4, iVar16);
																													iVar16 = Global_2643435.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643435.f_162++;
																									if (Global_2643435.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643435.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643435[Global_2643435.f_162 /*3*/] = { Var1 };
																									Global_2643435.f_121[Global_2643435.f_162] = fVar4;
																									Global_2643435.f_162++;
																									if (func_168(Var1, uParam2))
																									{
																										Global_2643435.f_163++;
																									}
																									if (Global_2643435.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643435.f_162 == 40)
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
				if (Global_2643435.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643435[0 /*3*/] };
						*uParam1 = Global_2643435.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643435.f_163 > 0 && !Global_2643435.f_163 == Global_2643435.f_162)
						{
							func_153(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643435.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643435[0 /*3*/] };
						uVar30 = Global_2643435.f_121[0];
						Global_2643435[0 /*3*/] = { Global_2643435[iVar26 /*3*/] };
						Global_2643435.f_121[0] = Global_2643435.f_121[iVar26];
						Global_2643435[iVar26 /*3*/] = { Var27 };
						Global_2643435.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643435[0 /*3*/] };
						*uParam1 = Global_2643435.f_121[0];
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
						func_152(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_193(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_188(&Var31, bVar35))
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
				func_148(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643435.f_164 = iVar8;
	}
	return 0;
}

void func_148(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0xC92F
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
			if (!func_149(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

int func_149(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC9B3
{
	if (func_151(Param0, fParam3, iParam4, iParam5, 0) || func_150(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_150(struct<3> Param0, int iParam3, int iParam4)//Position - 0xC9E4
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
				if (!Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_123(Param0, Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_336(iVar2, 0, 1) && func_336(iParam3, 0, 1))
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

int func_151(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0xCAA6
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
				if (func_336(iVar1, 0, 1) && func_336(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_336(iVar1, 0, 1) && func_336(iParam4, 0, 1))
				{
					if (Global_2648918.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2648918.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_262(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648918.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2648918.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_336(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_262(iVar1), Param0) < 1f)
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

void func_152(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0xCBC3
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
				*uParam5 = { func_173(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_178(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_153(int iParam0, var uParam1)//Position - 0xCC60
{
	if (!func_168(Global_2643435[iParam0 /*3*/], uParam1))
	{
		Global_2643435.f_162 = (Global_2643435.f_162 - 1);
		func_154(iParam0);
		if (Global_2643435.f_162 > Global_2643435.f_163)
		{
			func_153(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_153(iParam0 + 1, uParam1);
	}
}

void func_154(int iParam0)//Position - 0xCCBB
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643435[iParam0 /*3*/] = { Global_2643435[iParam0 + 1 /*3*/] };
			Global_2643435.f_121[iParam0] = Global_2643435.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_155(struct<3> Param0, float fParam3, int iParam4)//Position - 0xCD06
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643435[iParam4 /*3*/] };
	uVar3 = Global_2643435.f_121[iParam4];
	Global_2643435[iParam4 /*3*/] = { Param0 };
	Global_2643435.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643435.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_155(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_156(struct<3> Param0, float fParam3, float fParam4)//Position - 0xCD73
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
		if (func_157(iVar5))
		{
			Var1 = { func_262(iVar5) };
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

int func_157(int iParam0)//Position - 0xCDDB
{
	if (func_336(iParam0, 0, 1))
	{
		if (!func_164(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_161(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_158(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
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
					if (!func_161(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_133(iParam0))
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

int func_158(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCE89
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
		bVar0 = Global_1058104.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25548, bVar0))
			{
				bVar1 = Global_1058104.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_159(iParam0, bVar0, iParam1, bVar1) || !func_159(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_159(iParam0, bVar0, iParam1, bVar1) || !func_159(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_159(iParam0, bVar0, iParam1, bVar1) || !func_159(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_159(iParam0, bVar0, iParam1, bVar1) || !func_159(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_3267, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3267, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3267, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3267, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3267, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xD1D4
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
	if (!BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25549, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3318[iParam2 /*25763*/].f_25549, bParam3))
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
		if (((!func_336(iVar1, 1, 1) || func_32(iVar1, 0)) || BitTest(Global_2657921[iVar1 /*463*/].f_199, 2)) || func_160(iVar1))
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

var func_160(int iParam0)//Position - 0xD300
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_36.f_18, 14);
}

int func_161(int iParam0, bool bParam1, bool bParam2)//Position - 0xD318
{
	if (bParam1)
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845263[iParam0 /*877*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_162(int iParam0)//Position - 0xD34A
{
	return func_163(iParam0);
}

var func_163(int iParam0)//Position - 0xD358
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

int func_164(int iParam0)//Position - 0xD36F
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_165())
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

bool func_165()//Position - 0xD3AE
{
	return BitTest(Global_2621446, 3);
}

int func_166(struct<3> Param0, float fParam3, int iParam4)//Position - 0xD3BC
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
		if (func_132(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
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
		if (func_132(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_167(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD4C8
{
	if (func_139(Param0, fParam3, iParam4, iParam5, iParam6) || func_202(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_168(struct<3> Param0, var uParam3)//Position - 0xD4FE
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_171(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_169(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_169(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0xD58F
{
	func_170(&Param3, &Param6);
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

void func_170(var uParam0, var uParam1)//Position - 0xD63A
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

bool func_171(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0xD69C
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

int func_172(struct<3> Param0, float fParam3)//Position - 0xD74F
{
	int iVar0;
	
	if (func_161(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_46529 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_46529)
			{
				if (Global_4980736.f_46530[iVar0 /*162*/].f_7 != 0)
				{
					if (func_123(Param0, Global_4980736.f_46530[iVar0 /*162*/], Global_4980736.f_46530[iVar0 /*162*/].f_6, Global_4980736.f_46530[iVar0 /*162*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_6999 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_6999)
			{
				if (Global_4980736.f_7002[iVar0 /*591*/].f_15 != 0)
				{
					if (func_123(Param0, Global_4980736.f_7002[iVar0 /*591*/], Global_4980736.f_7002[iVar0 /*591*/].f_3, Global_4980736.f_7002[iVar0 /*591*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_97405 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_97405)
			{
				if (Global_4980736.f_97409[iVar0 /*586*/].f_12 != 0)
				{
					if (func_123(Param0, Global_4980736.f_97409[iVar0 /*586*/], Global_4980736.f_97409[iVar0 /*586*/].f_3, Global_4980736.f_97409[iVar0 /*586*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058104.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058104.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058104.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058104.f_233[iVar0], false))
				{
					if (func_123(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058104.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058104.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058104.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058104.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058104.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058104.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058104.f_119[iVar0], false))
				{
					if (func_123(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058104.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058104.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058104.f_119[iVar0]), 0.5f))
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

Vector3 func_173(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)//Position - 0xD9E3
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
			if (!func_176(Param0, *fParam3, Param6))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_175(Param0))
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
					fVar14 = func_174(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_174(iParam11, 1.5f);
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
		if (!func_176(Param0, *fParam3, Param6))
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
					fVar14 = func_174(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_174(iParam11, 1.5f);
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

float func_174(int iParam0, float fParam1)//Position - 0xDE32
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_125(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_175(struct<3> Param0)//Position - 0xDE69
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

int func_176(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0xDEA1
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_130(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_177(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_177(struct<3> Param0, struct<3> Param3)//Position - 0xDEDD
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_178(struct<3> Param0)//Position - 0xDEFE
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_180(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643142[iVar1])
	{
		if (func_179(Param0, &(Global_2642439[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643142[8])
	{
		if (func_179(Param0, &(Global_2642439[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_179(struct<3> Param0, var uParam3)//Position - 0xDF79
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_180(struct<2> Param0, var uParam2)//Position - 0xDF99
{
	if (Param0.f_1 > Global_2642430[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642430[1])
	{
		if (Param0.f_0 < Global_2642434[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642430[2])
	{
		if (Param0.f_0 < Global_2642434[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642434[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642434[3])
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

int func_181(var uParam0, bool bParam1)//Position - 0xE034
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_187(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_186(&Var1, Global_2635562.f_593, Global_2635562.f_596, 1036831949, 0, fVar4);
			if (func_182(Var1, &uVar0) || func_187(Var1))
			{
				Var1 = { *uParam0 };
				func_186(&Var1, Global_2635562.f_593, Global_2635562.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_182(struct<3> Param0, var uParam3)//Position - 0xE0CC
{
	int iVar0;
	int iVar1;
	
	if (func_185())
	{
		return 0;
	}
	iVar1 = func_184();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635562.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_183(Param0, &(Global_2635562.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0xE130
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_171(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635562.f_3035) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_169(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_184()//Position - 0xE291
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635562.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_185()//Position - 0xE2C4
{
	return Global_1942781.f_544;
}

void func_186(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0xE2D3
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
			func_130(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_130(&Var0, 0f, 0f, fParam7);
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

int func_187(struct<3> Param0)//Position - 0xE37B
{
	float fVar0;
	
	if (Global_2635562.f_596 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2635562.f_593);
		if (fVar0 < Global_2635562.f_596)
		{
			return 1;
		}
	}
	return 0;
}

bool func_188(var uParam0, bool bParam1)//Position - 0xE3B4
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635562.f_26.f_18)
	{
		switch (Global_2635562.f_26.f_17)
		{
			case 0:
				if (func_171(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_169(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_189(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, Global_2635562.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_189(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0xE4A6
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_186(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_192(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_190(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_171(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_169(Var1, Param3, Param6, 0, 0))
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

void func_190(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0xE5A9
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
	Var6 = { func_191(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_177(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_177(Var6, Var3) >= 0f)
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
		Var6 = { func_191(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_191(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_177(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_177(Var6, Var29) >= 0f)
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

Vector3 func_191(struct<3> Param0, struct<3> Param3)//Position - 0xE878
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_192(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0xE8B1
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

int func_193(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0xE9B0
{
	int iVar0;
	bool bVar1;
	
	if (func_248(Param0))
	{
		if (func_196(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_194(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_142(*uParam3, 1056964608))
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
				func_186(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_194(var uParam0, bool bParam1, bool bParam2)//Position - 0xEA6C
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_182(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_195(&Var2, &(Global_2635562.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_182(Var2, &uVar1) || func_187(Var2))
			{
				Var2 = { *uParam0 };
				func_195(&Var2, &(Global_2635562.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_195(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xEAF0
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_189(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3035) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_189(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_189(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_186(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3035) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_192(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_190(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_196(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xEBFA
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640818[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640818[iVar0 /*17*/].f_16))
			{
				if (func_183(*uParam0, &(Global_2640818[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640818[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640818[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_195(&Var1, &(Global_2640818[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_196(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_195(&Var1, &(Global_2640818[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_197(var uParam0, var uParam1, var uParam2)//Position - 0xECD5
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
	
	if (Global_2635562.f_2054 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_193(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_188(uParam0, 1))
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
		Global_2643435.f_162 = 0;
		Global_2643435.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643435[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643435.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_200(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_199();
		}
		else
		{
			func_198();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635562.f_2054)
		{
			iVar2 = Global_2635562.f_2460[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635562.f_2055[iVar2 /*4*/] };
				fVar6 = Global_2635562.f_2055[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_167(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_193(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_166(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_204(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_204(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_122(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_156(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643435.f_162)
															{
																Global_2643435[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643435.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643435.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643435.f_162 == 0)
														{
															Global_2643435[0 /*3*/] = { Var3 };
															Global_2643435.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643435.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643435[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_155(Var3, fVar6, iVar7);
																		iVar7 = Global_2643435.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643435.f_162++;
														if (Global_2643435.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2054;
															}
															else if (Global_2643435.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2054;
															}
														}
													}
													else
													{
														Global_2643435[Global_2643435.f_162 /*3*/] = { Var3 };
														Global_2643435.f_121[Global_2643435.f_162] = fVar6;
														Global_2643435.f_162++;
														if (Global_2643435.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2054;
															}
															else if (Global_2643435.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2054;
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
		if (Global_2643435.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643435[0 /*3*/] };
				*uParam1 = Global_2643435.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643435.f_163 > 0 && !Global_2643435.f_163 == Global_2643435.f_162)
				{
					func_153(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643435.f_162);
				Var15 = { Global_2643435[0 /*3*/] };
				uVar18 = Global_2643435.f_121[0];
				Global_2643435[0 /*3*/] = { Global_2643435[iVar0 /*3*/] };
				Global_2643435.f_121[0] = Global_2643435.f_121[iVar0];
				Global_2643435[iVar0 /*3*/] = { Var15 };
				Global_2643435.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643435[0 /*3*/] };
				*uParam1 = Global_2643435.f_121[0];
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
			else if (uParam2->f_59 && Global_2635562.f_2054 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2054);
				*uParam0 = { Global_2635562.f_2055[iVar0 /*4*/] };
				*uParam1 = Global_2635562.f_2055[iVar0 /*4*/].f_3;
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

void func_198()//Position - 0xF374
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2054)
	{
		Global_2635562.f_2460[iVar0] = iVar0;
		iVar0++;
	}
}

void func_199()//Position - 0xF3A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2054)
	{
		Global_2635562.f_2460[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2054)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2054);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2054);
		uVar3 = Global_2635562.f_2460[iVar1];
		Global_2635562.f_2460[iVar1] = Global_2635562.f_2460[iVar2];
		Global_2635562.f_2460[iVar2] = uVar3;
		iVar0++;
	}
}

void func_200(struct<3> Param0)//Position - 0xF432
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635562.f_2054)
	{
		uVar1 = func_201(Param0, fVar0, &fVar0);
		Global_2635562.f_2460[iVar2] = uVar1;
		iVar2++;
	}
}

int func_201(struct<3> Param0, float fParam3, float fParam4)//Position - 0xF46D
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 100000000f;
	iVar3 = 0;
	while (iVar3 < Global_2635562.f_2054)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2635562.f_2055[iVar3 /*4*/]);
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

int func_202(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF4CF
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
				if (func_203(Param0, iParam4, Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_132(Param0, fParam3, iParam4, Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648918.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_336(iVar2, 0, 1) && func_336(iParam5, 0, 1))
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

int func_203(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)//Position - 0xF5A9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_131(iParam3, 1008981770);
	fVar1 = func_131(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_204(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0xF5E9
{
	Global_2635562.f_2 = 0;
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
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_209(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_205(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_205(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xF6FB
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_336(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_206(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_336(iVar1, 1, 1))
		{
			if (!func_32(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_138(iVar1) || !bParam10) && !Global_2657921[iVar1 /*463*/].f_270)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_206(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_206(iVar1), Param0, true) <= (fVar2 + fParam3))
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

Vector3 func_206(int iParam0)//Position - 0xF8B3
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_208() && Global_1845263[iVar0 /*877*/].f_844) && !func_207(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_262(iParam0);
}

int func_207(struct<3> Param0)//Position - 0xF906
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_208()//Position - 0xF930
{
	return Global_2684312.f_19;
}

int func_209(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0xF93E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_336(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_138(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_133(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_262(iVar1), Param0, true) < fParam3)
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

int func_210(struct<3> Param0)//Position - 0xFA42
{
	var uVar0;
	
	if (Global_2738587.f_942 && func_211(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_211(struct<3> Param0, var uParam3)//Position - 0xFA68
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_223(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_212(iVar1))
			{
				if (func_223(Global_1942781.f_558[iVar0 /*3*/], 0) == iVar2)
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

int func_212(int iParam0)//Position - 0xFACC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_222(iParam0);
	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_295 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
	if (iVar1 != func_110())
	{
		if (Global_1845263[iVar1 /*877*/].f_267.f_295 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_7 == iParam0)
	{
		return 1;
	}
	if (func_221(PLAYER::PLAYER_ID(), 0) || (func_218(PLAYER::PLAYER_ID()) && func_75(func_217(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_216(PLAYER::PLAYER_ID()) || (func_218(PLAYER::PLAYER_ID()) && func_75(func_217(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_215(PLAYER::PLAYER_ID()) || (func_218(PLAYER::PLAYER_ID()) && func_75(func_217(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_214(PLAYER::PLAYER_ID()) || (func_218(PLAYER::PLAYER_ID()) && func_75(func_217(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_213(PLAYER::PLAYER_ID()) || (func_218(PLAYER::PLAYER_ID()) && func_75(func_217(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)//Position - 0xFC34
{
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 6;
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0xFC7A
{
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 10;
			}
		}
	}
	return 0;
}

int func_215(int iParam0)//Position - 0xFCC1
{
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_110())
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 5;
			}
		}
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xFD20
{
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_110())
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 8;
			}
		}
	}
	return 0;
}

int func_217(int iParam0)//Position - 0xFD80
{
	if (iParam0 != func_110() && func_336(iParam0, 1, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_321.f_17;
	}
	return -1;
}

int func_218(int iParam0)//Position - 0xFDB1
{
	if (iParam0 != func_110() && func_336(iParam0, 1, 1))
	{
		if (func_220(iParam0) && !func_219(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xFDEA
{
	if (iParam0 != func_110() && func_336(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 4);
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xFE1B
{
	if (iParam0 != func_110() && func_336(iParam0, 1, 1))
	{
		return BitTest(Global_2657921[iParam0 /*463*/].f_321, 3);
	}
	return 0;
}

int func_221(int iParam0, bool bParam1)//Position - 0xFE4C
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
	if (iParam0 != func_110())
	{
		if (func_336(iParam0, 1, 1))
		{
			if (Global_2657921[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657921[iParam0 /*463*/].f_321.f_10 != func_110())
			{
				return func_75(Global_2657921[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xFEDA
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

int func_223(struct<3> Param0, int iParam3)//Position - 0xFF2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640818[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_183(Param0, &(Global_2640818[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_224(struct<3> Param0, int iParam3)//Position - 0xFF7F
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2635562.f_45.f_319)
	{
		return;
	}
	if (!func_244())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_243(Param0);
		if (iVar1 > -1)
		{
			func_255();
			switch (iVar1)
			{
				case 0:
					func_242(-1139.6785f, -2694.1648f, 12.949f, 283.4298f);
					func_242(-1137.4546f, -2690.167f, 12.9448f, 283.0835f);
					func_242(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_242(-1099.8976f, -2688.6108f, 12.9473f, 295.3925f);
					func_242(-1110.5096f, -2693.2358f, 12.9595f, 298.84f);
					func_242(-1081.8075f, -2690.0146f, 12.7567f, 219.1729f);
					func_242(-1075.5862f, -2697.0898f, 12.7567f, 224.8977f);
					func_242(-1095.1333f, -2659.9954f, 12.7567f, 190.9326f);
					func_242(-1096.5112f, -2649.4827f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_242(-1411.7308f, -533.6462f, 30.2703f, 215.116f);
					func_242(-1416.4075f, -527.0309f, 30.6453f, 215.2683f);
					func_242(-1432.1458f, -580.9922f, 29.5263f, 118.3858f);
					func_242(-1438.8004f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_242(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_242(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_242(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_242(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_242(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_242(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_242(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_242(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_242(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_242(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_242(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_242(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_242(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_242(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_242(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_242(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_242(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_242(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_242(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_242(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_242(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_242(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_242(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_242(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_242(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_242(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_242(145.8017f, -1287.1896f, 28.312f, 120.6275f);
					func_242(142.8935f, -1282.2864f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_242(-2333.5747f, 272.6518f, 168.4671f, 23.0287f);
					func_242(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_242(-2316.2224f, 279.9105f, 168.4671f, 23.0175f);
					func_242(-2314.3955f, 290.9f, 168.4671f, 114.3983f);
					func_242(-2316.8096f, 296.424f, 168.4671f, 113.6228f);
					func_242(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_242(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_242(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_242(-2345.0815f, 277.3852f, 168.4671f, 113.4219f);
					func_242(-2347.7766f, 282.6038f, 168.4671f, 292.7772f);
					func_242(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_242(-2352.6807f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_240(78);
					break;
				
				case 11:
					func_240(79);
					break;
				
				case 12:
					func_240(82);
					break;
				
				case 13:
					func_240(81);
					break;
				
				case 14:
					func_240(73);
					break;
				
				case 15:
					func_242(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_242(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_242(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_242(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_240(75);
					break;
				
				case 17:
					func_240(76);
					break;
				
				case 18:
					func_240(77);
					break;
				
				case 19:
					func_242(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_242(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_242(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_242(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_240(80);
					break;
				
				case 21:
				case 25:
					func_240(87);
					break;
				
				case 22:
				case 26:
					func_240(88);
					break;
				
				case 23:
				case 27:
					func_240(89);
					break;
				
				case 24:
				case 28:
					func_240(90);
					break;
				
				case 29:
				case 30:
					if (func_239(iParam3))
					{
						func_240(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_34);
					}
					break;
				
				case 31:
					func_242(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_242(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_242(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_242(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_242(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_242(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_242(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_242(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_242(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_242(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_242(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_242(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_242(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_242(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_242(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_242(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_242(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_242(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_242(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_242(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_242(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_242(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_242(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_242(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_242(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_242(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_242(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_242(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_242(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_242(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_242(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_242(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_242(-194.254f, -2018.756f, 26.62f, 75f);
					func_242(-186.956f, -2031.369f, 26.62f, 338f);
					func_242(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_242(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_242(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_242(-233.372f, -2089.601f, 26.62f, 304f);
					func_242(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_242(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_242(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_242(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_242(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_242(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_242(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_242(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_242(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_242(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_242(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_242(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_242(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_242(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_242(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_242(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_235(Param0, &iVar2, &iVar6) || (func_211(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_255();
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
					Global_2635562.f_516 = 1;
				}
				if (!iVar6[iVar0] && func_234(iVar2[iVar0], -1))
				{
					if (func_239(iParam3))
					{
						func_240(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_233(PLAYER::PLAYER_PED_ID()) || func_231(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_230(iParam3))
						{
							func_229(iVar2[iVar0]);
						}
						else if (func_228(iParam3))
						{
							func_227(iVar2[iVar0]);
							func_229(iVar2[iVar0]);
						}
						else
						{
							func_227(iVar2[iVar0]);
							func_229(iVar2[iVar0]);
						}
					}
					else
					{
						func_225(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_240(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_225(int iParam0, int iParam1)//Position - 0x10DC0
{
	switch (iParam0)
	{
		case 23:
			func_242(434.1898f, 6535.8237f, 27.0084f, 66.9998f);
			func_242(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_242(435.1928f, 6543.2983f, 26.889f, 66.9998f);
			func_242(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_242(429.8463f, 6511.1104f, 27.0717f, 60.9997f);
			func_242(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_242(443.1016f, 6580.7173f, 26.0739f, 85.1993f);
			func_242(451.9748f, 6579.9365f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_242(-148.9694f, 6325.5522f, 30.4564f, 224.1983f);
			func_242(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_242(-136.8806f, 6347.6216f, 30.4906f, 43.9982f);
			func_242(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_242(-136.6504f, 6357.0615f, 30.4907f, 43.9982f);
			func_242(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_242(-141.4154f, 6365.8306f, 30.4907f, 43.3979f);
			func_242(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_242(60.7522f, 6465.8066f, 30.3941f, 213.3973f);
			func_242(57.4131f, 6462.5503f, 30.3663f, 213.3973f);
			func_242(48.0438f, 6452.6685f, 30.3245f, 213.3973f);
			func_242(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_242(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_242(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_242(32.1837f, 6437.2104f, 30.2991f, 213.3973f);
			func_242(29.4732f, 6434.5264f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_242(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_242(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_242(-395.8286f, 6123.6353f, 30.2987f, 46.3965f);
			func_242(-389.1636f, 6117.2407f, 30.3641f, 46.3965f);
			func_242(-370.6174f, 6129.7793f, 30.4414f, 45.7965f);
			func_242(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_242(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_242(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_242(45.2181f, 6341.1074f, 30.2296f, 14.3964f);
			func_242(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_242(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_242(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_242(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_242(65.6465f, 6380.6265f, 30.2398f, 212.9964f);
			func_242(24.8587f, 6366.3604f, 30.2286f, 32.7965f);
			func_242(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_242(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_242(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_242(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_242(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_242(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_242(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_242(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_242(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_242(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_242(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_242(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_242(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_242(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_242(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_242(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_242(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_242(-1448.5511f, -355.0512f, 43.3715f, 313.3925f);
			func_242(-1454.8193f, -359.998f, 42.7885f, 311.3925f);
			func_242(-1462.6747f, -360.1352f, 42.9255f, 223.392f);
			func_242(-1447.9648f, -368.3028f, 42.5412f, 5.9918f);
			func_242(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_242(-1473.2195f, -346.7773f, 43.5318f, 213.9913f);
			func_242(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_242(-1496.0033f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_242(-1174.4911f, -1381.0103f, 3.9253f, 116.5903f);
			func_242(-1183.1477f, -1392.5593f, 3.6319f, 304.9901f);
			func_242(-1160.9639f, -1417.7592f, 3.7043f, 65.7899f);
			func_242(-1151.6115f, -1411.3774f, 3.9411f, 63.5895f);
			func_242(-1167.1865f, -1424.0696f, 3.4884f, 123.5897f);
			func_242(-1148.2198f, -1409.1637f, 4.0217f, 63.5895f);
			func_242(-1137.1096f, -1372.8176f, 3.8993f, 27.5895f);
			func_242(-1140.6079f, -1365.7474f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_242(1414.237f, -1656.3444f, 60.2449f, 332.7893f);
			func_242(1416.6677f, -1659.9332f, 60.6982f, 332.7893f);
			func_242(1419.3271f, -1663.9718f, 61.2382f, 332.7893f);
			func_242(1421.5574f, -1667.3671f, 61.7479f, 332.7893f);
			func_242(1423.7439f, -1670.8531f, 62.3125f, 332.7893f);
			func_242(1412.1573f, -1652.7456f, 59.9105f, 332.7893f);
			func_242(1426.2009f, -1673.5977f, 62.7133f, 330.1893f);
			func_242(1435.8038f, -1694.7296f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_242(2810.7869f, 4435.9204f, 47.5295f, 20.7996f);
			func_242(2808.4128f, 4443.922f, 47.3732f, 14.7995f);
			func_242(2806.298f, 4451.7856f, 47.1865f, 15.3995f);
			func_242(2803.9253f, 4459.858f, 46.9823f, 15.3995f);
			func_242(2801.7563f, 4467.7554f, 46.8147f, 15.3995f);
			func_242(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_242(2903.7246f, 4425.8535f, 47.3523f, 23.1992f);
			func_242(2907.0764f, 4418.0586f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_242(1680.4476f, 4821.131f, 41.0599f, 186.399f);
			func_242(1679.7604f, 4829.447f, 40.9167f, 186.399f);
			func_242(1678.6683f, 4838.03f, 41.0221f, 187.7989f);
			func_242(1677.6119f, 4846.028f, 41.0452f, 187.7989f);
			func_242(1675.8512f, 4860.4336f, 41.0901f, 187.7989f);
			func_242(1674.8434f, 4868.3433f, 41.0684f, 187.7989f);
			func_242(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_242(1672.5254f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_242(422.863f, 3583.9014f, 32.2386f, 313.5986f);
			func_242(426.6211f, 3583.2083f, 32.2386f, 313.5986f);
			func_242(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_242(434.2751f, 3580.8806f, 32.2386f, 313.5986f);
			func_242(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_242(442.0173f, 3578.9482f, 32.2386f, 313.5986f);
			func_242(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_242(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_242(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_242(620.9771f, 2725.7585f, 40.7897f, 4.3984f);
			func_242(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_242(611.1158f, 2737.3875f, 40.9734f, 185.3984f);
			func_242(598.9713f, 2736.2607f, 41.0602f, 186.5986f);
			func_242(592.6151f, 2735.8865f, 41.0602f, 186.5986f);
			func_242(586.0421f, 2735.9004f, 41.0535f, 186.5986f);
			func_242(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_242(214.3318f, 2492.2598f, 53.9736f, 312.7978f);
			func_242(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_242(213.7524f, 2501.2512f, 53.5958f, 312.7978f);
			func_242(213.6645f, 2505.9084f, 53.3477f, 312.7978f);
			func_242(213.4478f, 2510.7341f, 53.1055f, 312.7978f);
			func_242(212.9148f, 2515.2676f, 52.9376f, 312.7978f);
			func_242(211.5983f, 2519.2163f, 52.6753f, 312.7978f);
			func_242(210.1288f, 2523.1873f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_242(153.6785f, -2476.1921f, 4.9877f, 178.4004f);
			func_242(150.9209f, -2516.9785f, 4.9909f, 179.9999f);
			func_242(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_242(153.866f, -2467.2422f, 4.9877f, 178.4004f);
			func_242(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_242(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_242(142.7427f, -2536.147f, 5f, 205.0002f);
			func_242(138.8267f, -2535.8647f, 5f, 205.0002f);
			break;
		
		case 41:
			func_242(-341.4255f, -2734.4514f, 5.0413f, 314.8f);
			func_242(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_242(-329.7832f, -2745.6042f, 5.0196f, 314.8f);
			func_242(-336.4781f, -2716.1392f, 5.0028f, 134.1994f);
			func_242(-334.2752f, -2718.8884f, 5.0048f, 135.1992f);
			func_242(-327.6603f, -2725.6445f, 5.0103f, 135.1992f);
			func_242(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_242(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_242(-260.5913f, -2615.2546f, 5.0502f, 274.5953f);
			func_242(-253.2161f, -2614.8955f, 5.0502f, 271.5953f);
			func_242(-245.6569f, -2614.8618f, 5.0502f, 271.5953f);
			func_242(-238.214f, -2614.8472f, 5.0502f, 271.5953f);
			func_242(-238.013f, -2630.9614f, 5.0331f, 271.3949f);
			func_242(-260.9724f, -2631.4185f, 5.0355f, 276.9951f);
			func_242(-253.401f, -2631.1082f, 5.0319f, 272.195f);
			func_242(-245.5563f, -2631.0598f, 5.0323f, 272.195f);
			break;
		
		case 40:
			func_242(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_242(656.1305f, -2707.2454f, 5.214f, 24.7971f);
			func_242(659.3307f, -2714.3784f, 5.2188f, 22.7968f);
			func_242(662.2627f, -2722.2275f, 5.2188f, 19.1968f);
			func_242(649.2115f, -2728.3586f, 5.1124f, 20.5967f);
			func_242(646.2606f, -2720.8333f, 5.1103f, 21.3967f);
			func_242(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_242(640.3513f, -2706.5708f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_242(1143.7303f, -3105.0913f, 4.8989f, 146.1979f);
			func_242(1140.0088f, -3104.954f, 4.8985f, 146.1979f);
			func_242(1136.2671f, -3104.69f, 4.8969f, 146.1979f);
			func_242(1132.7316f, -3104.2769f, 4.8944f, 146.1979f);
			func_242(1128.7235f, -3104.5398f, 4.896f, 146.1979f);
			func_242(1125.1063f, -3104.0566f, 4.8942f, 146.1979f);
			func_242(1117.7996f, -3103.6743f, 4.8922f, 146.1979f);
			func_242(1114.0154f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 83:
			func_242(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_242(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_242(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_242(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_242(-1098.6207f, -3460.7915f, 12.9453f, 329.799f);
			func_242(-1093.3098f, -3463.4644f, 12.9453f, 329.799f);
			func_242(-1089.4333f, -3443.2336f, 12.945f, 329.799f);
			func_242(-1084.2706f, -3446.3103f, 12.945f, 329.799f);
			func_242(-1093.8082f, -3452.4072f, 12.9451f, 329.799f);
			func_242(-1088.3829f, -3455.466f, 12.9451f, 329.799f);
			func_242(-1118.4736f, -3411.3848f, 12.9451f, 313.199f);
			func_242(-1181.003f, -3375.6584f, 12.945f, 346.799f);
			func_242(-1212.0713f, -3382.2832f, 12.9451f, 328.999f);
			func_242(-1217.7085f, -3378.6228f, 12.9451f, 328.999f);
			func_242(-1216.9865f, -3390.3958f, 12.9452f, 328.999f);
			func_242(-1222.5657f, -3386.7068f, 12.9452f, 328.999f);
			func_242(-1222.06f, -3398.8823f, 12.9452f, 328.999f);
			func_242(-1227.6981f, -3394.9456f, 12.9451f, 328.999f);
			func_242(-1097.5173f, -3472.0862f, 12.9453f, 328.999f);
			func_242(-1102.951f, -3468.6187f, 12.9452f, 328.999f);
			func_242(-1227.2528f, -3407.38f, 12.9452f, 328.999f);
			func_242(-1232.8358f, -3403.5723f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_242(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_242(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_242(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_242(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_242(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_242(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_242(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_242(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_242(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_242(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_242(-1359.905f, -3276.1177f, 12.9448f, 330.4f);
			func_242(-1354.2279f, -3279.6296f, 12.9448f, 330.4f);
			func_242(-1406.4932f, -3246.2234f, 12.9449f, 344.5997f);
			func_242(-1411.0581f, -3243.6204f, 12.9449f, 344.5997f);
			func_242(-1415.326f, -3241.0137f, 12.9449f, 344.5997f);
			func_242(-1419.899f, -3238.1157f, 12.9449f, 344.5997f);
			func_242(-1370.9857f, -3268.9453f, 12.9449f, 322.3996f);
			func_242(-1365.7346f, -3272.3633f, 12.9449f, 322.3996f);
			func_242(-1373.3412f, -3313.2056f, 12.9448f, 329.5996f);
			func_242(-1379.0914f, -3310.0037f, 12.9448f, 330.7996f);
			func_242(-1436.9889f, -3228.515f, 12.9449f, 343.9996f);
			func_242(-1444.064f, -3273.7512f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_242(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_242(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_242(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_242(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_242(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_242(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_242(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_242(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_242(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_242(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_242(-2060.4863f, 3165.9277f, 31.8103f, 133.9988f);
			func_242(-2055.7065f, 3163.0535f, 31.8103f, 133.9988f);
			func_242(-2050.911f, 3160.0918f, 31.8103f, 133.9988f);
			func_242(-1974.6353f, 3137.8467f, 31.8103f, 149.5986f);
			func_242(-1970.3544f, 3145.22f, 31.8103f, 149.5986f);
			func_242(-1965.7089f, 3153.2214f, 31.8103f, 149.5986f);
			func_242(-1960.9915f, 3161.346f, 31.8103f, 149.5986f);
			func_242(-1983.1697f, 3131.3298f, 31.8103f, 149.5986f);
			func_242(-1976.614f, 3127.6274f, 31.8103f, 149.5986f);
			func_242(-1991.5824f, 3127.264f, 31.8103f, 167.7985f);
			func_242(-1995.584f, 3129.3687f, 31.8103f, 167.7985f);
			func_242(-1999.335f, 3131.1824f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_242(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_242(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_242(-1823.414f, 3092.762f, 31.843f, 330f);
			func_242(-1819.045f, 3100.435f, 31.845f, 330f);
			func_242(-1833.313f, 3075.722f, 31.838f, 330f);
			func_242(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_242(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_242(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_242(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_242(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_242(-1819.2842f, 3110.6704f, 31.8615f, 150.2f);
			func_242(-1814.545f, 3108.2295f, 31.8476f, 330.6f);
			func_242(-1853.9388f, 3076.2705f, 31.8105f, 176.7996f);
			func_242(-1857.7258f, 3078.6685f, 31.8105f, 176.7996f);
			func_242(-1861.6259f, 3080.7766f, 31.8105f, 176.7996f);
			func_242(-1865.5841f, 3083.1365f, 31.8103f, 176.7996f);
			func_242(-1869.2551f, 3085.565f, 31.8103f, 176.7996f);
			func_242(-1913.263f, 3125.3416f, 31.8103f, 150.7988f);
			func_242(-1917.5464f, 3127.6785f, 31.8103f, 150.7988f);
			func_242(-1922.7402f, 3130.5552f, 31.8103f, 150.7988f);
			func_242(-1927.6763f, 3133.413f, 31.8103f, 150.7988f);
			func_242(-1932.4185f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_242(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_242(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_242(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_242(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_242(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_242(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_242(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_242(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_242(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_242(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_242(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_242(-2551.2612f, 3306.3042f, 31.8123f, 296.999f);
			func_242(-2497.446f, 3333.2957f, 31.821f, 296.999f);
			func_242(-2494.089f, 3326.0647f, 31.8218f, 296.999f);
			func_242(-2453.4045f, 3255.3882f, 31.8276f, 167.1986f);
			func_242(-2449.37f, 3253.4165f, 31.8276f, 167.1986f);
			func_242(-2445.4902f, 3251.1384f, 31.8276f, 167.1986f);
			func_242(-2441.5747f, 3248.888f, 31.8276f, 167.1986f);
			func_242(-2437.3193f, 3246.5542f, 31.8277f, 167.1986f);
			func_242(-2432.7227f, 3244.232f, 31.8277f, 167.1986f);
			func_242(-2485.2732f, 3330.8906f, 31.8239f, 298.1979f);
			func_242(-2488.82f, 3338.3647f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(1284.4156f, 2890.2993f, 45.0276f, 336.3999f);
				func_242(1273.2477f, 2901.4277f, 45.0426f, 338.3999f);
				func_242(1262.9448f, 2911.5352f, 43.2959f, 341.9999f);
				func_242(1272.0938f, 2873.3875f, 45.3443f, 328.5991f);
				func_242(1259.7849f, 2892.2168f, 45.1126f, 339.9999f);
				func_242(1231.2787f, 2910.881f, 43.3085f, 12f);
				func_242(1306.5148f, 2839.4749f, 46.8947f, 132.3996f);
				func_242(1307.4529f, 2825.2756f, 45.1566f, 127.1998f);
				func_242(1257.0292f, 2872.1567f, 45.9766f, 338.5992f);
				func_242(1225.7644f, 2930.0952f, 41.6173f, 14.7999f);
			}
			else
			{
				func_242(1265.1229f, 2836.949f, 47.1021f, 119.9996f);
				func_242(1258.1451f, 2831.6428f, 46.4503f, 135.7993f);
				func_242(1240.8466f, 2828.7207f, 46.4388f, 39.5992f);
				func_242(1236.8774f, 2835.4902f, 46.3491f, 22.9991f);
				func_242(1235.6973f, 2843.4026f, 46.0231f, 2.7991f);
				func_242(1237.6862f, 2850.6072f, 45.5261f, 335.5991f);
				func_242(1241.1256f, 2858.816f, 45.0176f, 339.7991f);
				func_242(1249.7152f, 2810.5876f, 47.2648f, 255.1992f);
				func_242(1257.6963f, 2808.6086f, 47.014f, 266.1992f);
				func_242(1265.5765f, 2808.3528f, 46.7598f, 277.199f);
				func_242(1273.8081f, 2808.484f, 46.3872f, 263.999f);
				func_242(1282.5354f, 2807.1335f, 45.9705f, 250.7989f);
				func_242(1290.1676f, 2803.7449f, 45.8005f, 238.7988f);
				func_242(1296.4451f, 2798.7769f, 46.0903f, 228.9988f);
				func_242(1302.041f, 2792.3296f, 45.957f, 221.7987f);
				func_242(1251.3888f, 2825.818f, 45.9856f, 119.1982f);
				func_242(1285.4801f, 2819.238f, 45.044f, 228.3993f);
				func_242(1293.0233f, 2814.1636f, 44.8859f, 233.399f);
				func_242(1242.1803f, 2814.153f, 47.7108f, 227.3991f);
				func_242(1236.3619f, 2819.6228f, 47.6845f, 224.399f);
				func_242(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_242(1228.1774f, 2833.4233f, 47.3171f, 197.5993f);
				func_242(1243.0946f, 2866.7493f, 44.6219f, 353.7992f);
				func_242(1307.3458f, 2785.7866f, 46.1136f, 219.9997f);
				func_242(1300.7516f, 2808.2244f, 44.5688f, 228.9997f);
				func_242(1306.571f, 2802.4675f, 44.6275f, 224.1992f);
				func_242(1244.4646f, 2875.6968f, 44.5839f, 353.7992f);
				func_242(1312.4409f, 2795.4268f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(14.4916f, 2660.7263f, 79.0178f, 310.1999f);
				func_242(3.855f, 2672.388f, 78.437f, 319.2f);
				func_242(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_242(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_242(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_242(60.2273f, 2609.7449f, 79.5672f, 305.9998f);
				func_242(34.0188f, 2659.7227f, 78.9894f, 314.2f);
				func_242(29.4879f, 2675.3398f, 76.0202f, 314.2f);
				func_242(19.0088f, 2686.1597f, 75.6897f, 314.2f);
				func_242(7.6101f, 2697.1125f, 76.2923f, 314.2f);
			}
			else
			{
				func_242(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_242(46.2894f, 2639.9512f, 79.9122f, 305.1998f);
				func_242(55.3668f, 2627.7727f, 79.6363f, 305.1998f);
				func_242(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_242(42.1486f, 2646.0728f, 80.108f, 305.1998f);
				func_242(68.1481f, 2630.0696f, 77.0725f, 305.1998f);
				func_242(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_242(57.3543f, 2643.5598f, 75.5301f, 305.1998f);
				func_242(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_242(74.5845f, 2640.4746f, 72.602f, 305.1998f);
				func_242(68.5462f, 2646.7837f, 71.6298f, 305.1998f);
				func_242(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_242(79.5597f, 2650.8347f, 68.668f, 305.1998f);
				func_242(72.6035f, 2656.8574f, 67.3294f, 305.1998f);
				func_242(83.4156f, 2660.2366f, 64.3198f, 305.1998f);
				func_242(102.851f, 2688.009f, 51.732f, 224f);
				func_242(109.815f, 2681.012f, 51.112f, 224f);
				func_242(116.355f, 2674.26f, 50.529f, 224f);
				func_242(125.138f, 2665.98f, 49.8f, 224f);
				func_242(132.228f, 2659.865f, 49.26f, 228.4f);
				func_242(139.354f, 2653.536f, 48.737f, 228.4f);
				func_242(88.512f, 2702.995f, 53.042f, 224.199f);
				func_242(81.565f, 2710.357f, 53.67f, 224.199f);
				func_242(75.156f, 2716.981f, 54.223f, 224.199f);
				func_242(68.442f, 2723.806f, 54.775f, 226.199f);
				func_242(61.449f, 2730.606f, 55.308f, 226.199f);
				func_242(53.702f, 2738.167f, 55.855f, 226.199f);
				func_242(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_242(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_242(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_242(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_242(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_242(2824.791f, 3894.7869f, 47.4293f, 105.3989f);
				func_242(2761.7385f, 3945.948f, 44.59f, 135.398f);
				func_242(2814.5886f, 3930.404f, 44.816f, 134.9978f);
				func_242(2747.6267f, 3930.92f, 43.8497f, 138.3978f);
				func_242(2796.3115f, 3928.3164f, 42.6106f, 134.5979f);
			}
			else
			{
				func_242(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_242(2714.633f, 3918.283f, 42.938f, 16f);
				func_242(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_242(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_242(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_242(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_242(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_242(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_242(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_242(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_242(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_242(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_242(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_242(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_242(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_242(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_242(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_242(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_242(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_242(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_242(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_242(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_242(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_242(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_242(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_242(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_242(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_242(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(3374.661f, 5559.7095f, 12.3726f, 138.7999f);
				func_242(3366.3652f, 5569.4487f, 13.9704f, 112.8f);
				func_242(3358.4927f, 5581.4634f, 16.1783f, 112.8f);
				func_242(3356.7053f, 5595.3633f, 15.4029f, 112.8f);
				func_242(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_242(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_242(3335.2588f, 5599.0464f, 22.4606f, 249.6f);
				func_242(3336.8108f, 5613.029f, 22.2159f, 249.6f);
				func_242(3354.6956f, 5609.6987f, 15.9453f, 111.3999f);
				func_242(3354.0056f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_242(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_242(3374.923f, 5520.1772f, 20.3207f, 86f);
				func_242(3350.6433f, 5490.432f, 18.8423f, 139.9997f);
				func_242(3364.1887f, 5502.9805f, 19.648f, 125.7999f);
				func_242(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_242(3365.919f, 5519.9487f, 18.8008f, 102.9988f);
				func_242(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_242(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_242(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_242(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_242(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_242(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_242(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_242(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_242(3335.4514f, 5455.7227f, 18.2323f, 162.1979f);
				func_242(3338.7878f, 5464.8027f, 18.8631f, 163.7977f);
				func_242(3362.4763f, 5488.2114f, 20.4432f, 108.5979f);
				func_242(3371.2593f, 5491.2744f, 21.5286f, 104.9989f);
				func_242(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_242(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_242(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_242(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_242(3342.3464f, 5473.345f, 19.1235f, 159.3987f);
				func_242(3347.2363f, 5480.447f, 19.4672f, 131.199f);
				func_242(3357.623f, 5516.9004f, 16.9016f, 118.7991f);
				func_242(3361.366f, 5545.8857f, 15.5532f, 118.7991f);
				func_242(3352.6123f, 5541.0127f, 16.3238f, 131.999f);
				func_242(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(43.848f, 6845.657f, 13.379f, 247.2f);
				func_242(50.379f, 6861.146f, 15.105f, 247.2f);
				func_242(32.501f, 6871.7773f, 13.3283f, 247.2f);
				func_242(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_242(55.806f, 6875.081f, 14.824f, 247.2f);
				func_242(11.616f, 6877.079f, 11.466f, 247.2f);
				func_242(18.954f, 6891.633f, 11.37f, 247.2f);
				func_242(26.68f, 6907.587f, 11.869f, 247.2f);
				func_242(7.479f, 6907.895f, 12.024f, 247.2f);
				func_242(44.9981f, 6901.3516f, 11.9426f, 247.2f);
			}
			else
			{
				func_242(35.591f, 6836.608f, 13.288f, 274.4f);
				func_242(36.028f, 6830.135f, 13.801f, 270.8f);
				func_242(35.114f, 6823.884f, 14.527f, 260.8f);
				func_242(48.779f, 6838.693f, 14.337f, 273.6f);
				func_242(56.738f, 6821.8f, 15.244f, 244.8f);
				func_242(48.377f, 6825.895f, 14.656f, 249.8f);
				func_242(49.11f, 6831.439f, 13.991f, 274.8f);
				func_242(53.544f, 6818.275f, 16.342f, 243f);
				func_242(46.162f, 6821.945f, 15.483f, 249.8f);
				func_242(60.129f, 6836.8f, 15.605f, 269.6f);
				func_242(40.88f, 6802.952f, 20.113f, 242.6f);
				func_242(48.203f, 6799.134f, 20.897f, 244.4f);
				func_242(70.449f, 6809.271f, 16.846f, 243f);
				func_242(61.436f, 6814.266f, 16.71f, 244.2f);
				func_242(56.142f, 6793.458f, 19.806f, 242.6f);
				func_242(65.759f, 6791.12f, 18.433f, 276.4f);
				func_242(77.305f, 6805.391f, 18.558f, 245.6f);
				func_242(85.893f, 6800.243f, 18.535f, 249.8f);
				func_242(56.85f, 6780.582f, 18.822f, 297.999f);
				func_242(65.636f, 6784.669f, 18.789f, 293.799f);
				func_242(74.121f, 6788.498f, 18.739f, 293.799f);
				func_242(97.779f, 6796.32f, 19.02f, 276.799f);
				func_242(106.76f, 6796.983f, 18.914f, 272.599f);
				func_242(112.387f, 6802.858f, 18.994f, 210.599f);
				func_242(117.58f, 6802.644f, 18.663f, 209.399f);
				func_242(122.481f, 6802.693f, 18.468f, 209.399f);
				func_242(127.182f, 6802.686f, 18.218f, 209.399f);
				func_242(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(-2213.5515f, 2283.7258f, 31.7464f, 293.7993f);
				func_242(-2196.7097f, 2290.824f, 32.0819f, 293.7993f);
				func_242(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_242(-2180.471f, 2296.2056f, 32.9612f, 287.5992f);
				func_242(-2180.8704f, 2419.6492f, 0.2324f, 147.7987f);
				func_242(-2180.1663f, 2436.9097f, 0.2325f, 144.5987f);
				func_242(-2185.2708f, 2457.022f, 0.2062f, 160.1985f);
				func_242(-2329.4646f, 2393.6028f, 2.5699f, 289.7982f);
				func_242(-2328.9775f, 2380.4062f, 2.7911f, 289.7982f);
				func_242(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_242(-2239.671f, 2390.2925f, 10.756f, 189.2002f);
				func_242(-2217.4128f, 2392.4712f, 12.2202f, 189.2002f);
				func_242(-2238.863f, 2381.5598f, 13.1388f, 185.2003f);
				func_242(-2215.6948f, 2383.0352f, 14.9809f, 189.4004f);
				func_242(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_242(-2215.9604f, 2374.2507f, 17.0939f, 187.4004f);
				func_242(-2237.494f, 2364.4673f, 15.3155f, 186.2004f);
				func_242(-2216.8572f, 2365.651f, 18.9029f, 173.0005f);
				func_242(-2218.5264f, 2357.0654f, 20.7893f, 179.0004f);
				func_242(-2237.6248f, 2348.108f, 20.9097f, 179.0004f);
				func_242(-2218.4473f, 2348.7327f, 22.9621f, 179.0004f);
				func_242(-2238.1797f, 2339.141f, 22.5602f, 174.8003f);
				func_242(-2218.7705f, 2340.1313f, 25.5237f, 177.2002f);
				func_242(-2238.9978f, 2330.9585f, 25.7263f, 175.8005f);
				func_242(-2219.2214f, 2331.9338f, 28.5604f, 177.8006f);
				func_242(-2219.0774f, 2324.0657f, 30.9043f, 198.8006f);
				func_242(-2239.4126f, 2322.913f, 28.0647f, 177.8008f);
				func_242(-2240.014f, 2313.9507f, 29.5314f, 170.6008f);
				func_242(-2241.5435f, 2305.8186f, 30.7136f, 163.4006f);
				func_242(-2244.9043f, 2298.3877f, 31.4166f, 148.2005f);
				func_242(-2249.3103f, 2290.8918f, 31.5742f, 139.2004f);
				func_242(-2211.8962f, 2319.5813f, 31.7538f, 259.4002f);
				func_242(-2203.961f, 2320.0159f, 31.9895f, 271.4001f);
				func_242(-2255.1057f, 2285.4148f, 31.617f, 130.3999f);
				func_242(-2196.1704f, 2320.341f, 32.2704f, 270.6003f);
				func_242(-2261.3352f, 2280.2034f, 31.6562f, 130.0002f);
				func_242(-2268.4468f, 2275.5276f, 31.7095f, 124.4001f);
				func_242(-2188.258f, 2319.9846f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_242(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_242(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_242(15.6727f, 3297.8457f, 39.0535f, 191.9991f);
				func_242(-24.2865f, 3367.5269f, 41.4783f, 264.399f);
				func_242(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_242(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_242(97.4844f, 3335.3853f, 34.6164f, 7.9981f);
				func_242(20.409f, 3370.8386f, 38.8393f, 235.799f);
				func_242(48.457f, 3336.5862f, 35.8912f, 270.3979f);
			}
			else
			{
				func_242(25.9869f, 3349.7063f, 36.0366f, 273.9994f);
				func_242(25.0176f, 3356.9146f, 36.4258f, 276.9998f);
				func_242(36.2443f, 3351.3584f, 36.2386f, 272.5997f);
				func_242(35.9352f, 3358.8157f, 37.0033f, 276.7998f);
				func_242(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_242(30.027f, 3292.351f, 38.604f, 140.199f);
				func_242(49.1614f, 3358.5894f, 35.9759f, 263.5988f);
				func_242(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_242(23.897f, 3283.152f, 39.381f, 145.399f);
				func_242(60.9182f, 3356.2102f, 35.8814f, 255.3988f);
				func_242(18.723f, 3274.025f, 40.054f, 155.799f);
				func_242(59.0177f, 3350.0044f, 35.3204f, 255.7989f);
				func_242(36.958f, 3298.847f, 38.001f, 127.799f);
				func_242(54.165f, 3311.582f, 36.517f, 303.799f);
				func_242(61.607f, 3317.105f, 35.916f, 306.999f);
				func_242(68.994f, 3323.129f, 35.364f, 308.199f);
				func_242(76.266f, 3329.467f, 34.805f, 311.399f);
				func_242(82.757f, 3335.915f, 34.344f, 316.598f);
				func_242(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_242(14.664f, 3263.688f, 40.931f, 160.398f);
				func_242(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_242(11.7852f, 3256.1008f, 41.7031f, 159.198f);
				func_242(89.575f, 3343.311f, 33.932f, 318.398f);
				func_242(58.4154f, 3329.4229f, 35.6197f, 305.5979f);
				func_242(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_242(72.1063f, 3339.7927f, 34.8449f, 308.5977f);
				func_242(95.6614f, 3349.9172f, 33.696f, 316.1977f);
				func_242(85.4387f, 3353.1833f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_242(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_242(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_242(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_242(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_242(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_242(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_242(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_242(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_242(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_242(2073.0442f, 1725.9348f, 102.5096f, 225.2f);
				func_242(2077.2405f, 1730.2992f, 102.5247f, 225.2f);
				func_242(2081.68f, 1734.7421f, 102.5588f, 225.2f);
				func_242(2086.0515f, 1739.0446f, 102.6618f, 225.2f);
				func_242(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_242(2095.2947f, 1748.2742f, 102.3022f, 225.2f);
				func_242(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_242(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_242(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_242(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_242(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_242(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_242(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_242(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_242(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_242(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_242(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_242(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_242(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_242(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_242(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_242(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_242(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_242(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_242(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_242(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_242(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_242(2098.9944f, 1747.9292f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_59 == 0)
			{
				func_242(1871.6914f, 358.5369f, 162.1067f, 153.1979f);
				func_242(1858.9664f, 351.2935f, 161.7614f, 166.598f);
				func_242(1873.6115f, 342.6637f, 161.6936f, 142.998f);
				func_242(1887.6447f, 343.1557f, 162.1659f, 138.5979f);
				func_242(1888.6436f, 328.0839f, 161.7489f, 139.398f);
				func_242(1898.5963f, 315.2232f, 161.4418f, 173.7979f);
				func_242(1896.7292f, 266.5388f, 161.1619f, 113.5978f);
				func_242(1900.1672f, 281.3884f, 161.7807f, 115.197f);
				func_242(1856.2855f, 294.624f, 161.442f, 167.9966f);
				func_242(1868.6218f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_242(1856.3777f, 255.9146f, 162.7158f, 147.6202f);
				func_242(1837.2792f, 227.3696f, 165.2592f, 164.3995f);
				func_242(1835.1923f, 219.3931f, 167.5468f, 169.9994f);
				func_242(1833.5565f, 211.859f, 169.864f, 169.9994f);
				func_242(1839.5338f, 194.4053f, 171.3841f, 172.9989f);
				func_242(1838.2894f, 185.8157f, 171.2585f, 174.1989f);
				func_242(1837.4781f, 177.0607f, 170.7063f, 174.1989f);
				func_242(1840.4631f, 202.6959f, 170.8702f, 174.1989f);
				func_242(1836.2964f, 168.7307f, 170.5786f, 174.1989f);
				func_242(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_242(1826.9104f, 214.9648f, 172.2502f, 18.7986f);
				func_242(1823.8047f, 223.0288f, 172.0794f, 21.7986f);
				func_242(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_242(1817.2448f, 239.1232f, 172.0878f, 21.7986f);
				func_242(1814.0886f, 247.0423f, 171.7386f, 24.9986f);
				func_242(1810.8789f, 255.6553f, 171.7517f, 19.3986f);
				func_242(1807.7288f, 265.4899f, 172.2307f, 15.1986f);
				func_242(1823.1471f, 197.3122f, 172.235f, 192.3984f);
				func_242(1824.6414f, 184.4241f, 171.5948f, 183.3985f);
				func_242(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_242(1824.7476f, 162.8998f, 170.4961f, 173.1985f);
				func_242(1817.3447f, 214.6964f, 172.5223f, 203.9982f);
				func_242(1813.4656f, 222.3717f, 172.3316f, 200.9982f);
				func_242(1809.1141f, 230.8225f, 172.346f, 205.1983f);
				func_242(1805.5945f, 239.3896f, 172.0033f, 197.9984f);
				func_242(1802.5154f, 247.4269f, 171.8964f, 197.9984f);
				func_242(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_242(1823.0791f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_226(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_226(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_226(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_226(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_226(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_226(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_226(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_226(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_226(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_226(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_226(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_226(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_226(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_226(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_226(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_226(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_226(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_226(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_226(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_226(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_226(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_226(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_226(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_226(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_226(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_226(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_226(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		case 165:
			func_226(-14.562f, -1298.2373f, 28.323f, 181.7987f, iParam1, 0);
			func_226(-18.7554f, -1298.3212f, 28.3238f, 181.7987f, iParam1, 0);
			func_226(-8.76f, -1306.7644f, 28.4274f, 270.5988f, iParam1, 0);
			func_226(-0.9861f, -1306.9889f, 29.0661f, 268.5986f, iParam1, 0);
			func_226(7.095f, -1306.7876f, 29.081f, 269.7986f, iParam1, 0);
			func_226(15.0002f, -1306.9833f, 28.1188f, 269.7986f, iParam1, 0);
			func_226(22.4783f, -1307.6133f, 28.2369f, 270.5979f, iParam1, 0);
			func_226(30.1251f, -1307.5502f, 28.2089f, 270.5979f, iParam1, 0);
			func_226(-58.9301f, -1319.5089f, 28.1072f, 89.1976f, iParam1, 0);
			func_226(-66.4231f, -1319.25f, 28.0882f, 89.1976f, iParam1, 0);
			break;
		
		case 162:
			func_226(-215.8533f, 6310.631f, 30.2933f, 315.3986f, iParam1, 0);
			func_226(-221.6996f, 6304.683f, 30.2887f, 315.3986f, iParam1, 0);
			func_226(-227.5227f, 6298.8867f, 30.2886f, 315.3986f, iParam1, 0);
			func_226(-233.4945f, 6293.001f, 30.2907f, 315.3986f, iParam1, 0);
			func_226(-199.5962f, 6321.835f, 30.4171f, 315.3986f, iParam1, 0);
			func_226(-219.9854f, 6323.075f, 30.3012f, 135.3982f, iParam1, 0);
			func_226(-214.4723f, 6328.4194f, 30.3033f, 135.3982f, iParam1, 0);
			func_226(-228.3779f, 6314.325f, 30.2951f, 135.3982f, iParam1, 0);
			func_226(-233.6126f, 6309.157f, 30.2805f, 135.3982f, iParam1, 0);
			func_226(-239.0836f, 6303.774f, 30.3162f, 135.3982f, iParam1, 0);
			break;
		
		case 166:
			func_226(1199.3922f, -1274.6459f, 34.2218f, 264.5996f, iParam1, 0);
			func_226(1199.8231f, -1270.8417f, 34.2267f, 264.5996f, iParam1, 0);
			func_226(1211.7864f, -1273.5059f, 34.2265f, 84.7993f, iParam1, 0);
			func_226(1211.3959f, -1277.511f, 34.2265f, 84.7993f, iParam1, 0);
			func_226(1198.3217f, -1289.7107f, 34.2104f, 265.7991f, iParam1, 0);
			func_226(1190.971f, -1289.0333f, 33.9762f, 265.7991f, iParam1, 0);
			func_226(1183.6307f, -1288.7725f, 33.8503f, 265.7991f, iParam1, 0);
			func_226(1212.6528f, -1290.9677f, 34.2268f, 265.7991f, iParam1, 0);
			func_226(1219.9164f, -1291.5703f, 34.2231f, 265.7991f, iParam1, 0);
			func_226(1227.2478f, -1292.124f, 34.2049f, 214.5982f, iParam1, 0);
			break;
		
		case 164:
			func_226(-513.4792f, -1725.9542f, 18.2396f, 233.7993f, iParam1, 0);
			func_226(-502.8869f, -1724.6547f, 18.3531f, 191.7995f, iParam1, 0);
			func_226(-500.5194f, -1731.9363f, 17.9393f, 202.9996f, iParam1, 0);
			func_226(-519.8862f, -1723.5706f, 18.186f, 326.1996f, iParam1, 0);
			func_226(-522.9067f, -1721.4664f, 18.2f, 326.1996f, iParam1, 0);
			func_226(-525.8917f, -1719.2316f, 18.2055f, 326.1996f, iParam1, 0);
			func_226(-528.915f, -1717.2086f, 18.2224f, 326.1996f, iParam1, 0);
			func_226(-532.0991f, -1714.7692f, 18.2197f, 326.1996f, iParam1, 0);
			func_226(-541.5544f, -1713.4291f, 18.159f, 260.1992f, iParam1, 0);
			func_226(-547.5757f, -1708.4988f, 18.0875f, 214.5982f, iParam1, 0);
			break;
		
		case 163:
			func_226(2503.9746f, 4105.65f, 37.3197f, 333.9991f, iParam1, 0);
			func_226(2500.5635f, 4098.3643f, 37.2041f, 333.9991f, iParam1, 0);
			func_226(2496.8916f, 4090.8677f, 37.0864f, 333.9991f, iParam1, 0);
			func_226(2493.136f, 4083.078f, 36.9669f, 333.9991f, iParam1, 0);
			func_226(2489.5542f, 4075.2004f, 36.8805f, 333.9991f, iParam1, 0);
			func_226(2491.6594f, 4121.725f, 37.1767f, 155.199f, iParam1, 0);
			func_226(2488.2144f, 4123.2705f, 37.1377f, 155.199f, iParam1, 0);
			func_226(2484.7336f, 4124.911f, 37.0531f, 155.199f, iParam1, 0);
			func_226(2484.46f, 4113.972f, 37.0647f, 336.7987f, iParam1, 0);
			func_226(2480.8772f, 4115.4917f, 37.0647f, 336.7987f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_226(struct<3> Param0, float fParam3, int iParam4, bool bParam5)//Position - 0x1520B
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_125(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam3, Var7) };
		func_242(Var10, fParam3);
	}
	else
	{
		func_242(Param0, fParam3);
	}
}

void func_227(int iParam0)//Position - 0x15285
{
	switch (iParam0)
	{
		case 83:
			func_242(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_242(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_242(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_242(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_242(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_242(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_242(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_242(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_242(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_242(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_242(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_242(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_242(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_242(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_242(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_242(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_242(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_242(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_242(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_242(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
			func_242(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
			func_242(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
			func_242(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
			func_242(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_242(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
			func_242(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
			func_242(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_242(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
			func_242(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
			func_242(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
			func_242(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_242(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
			func_242(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_242(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
			func_242(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
			func_242(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
			func_242(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
			func_242(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
			func_242(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
			func_242(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
			func_242(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
			func_242(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
			func_242(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
			func_242(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
			func_242(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
			func_242(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_242(-1356.991f, -3242.228f, 12.945f, 330f);
			func_242(-1369.313f, -3234.758f, 12.945f, 330f);
			func_242(-1381.751f, -3227.408f, 12.945f, 330f);
			func_242(-1394.302f, -3220.021f, 12.945f, 330f);
			func_242(-1354.339f, -3223.129f, 12.945f, 330f);
			func_242(-1366.302f, -3215.809f, 12.945f, 330f);
			func_242(-1378.492f, -3208.645f, 12.945f, 330f);
			func_242(-1350.322f, -3203.405f, 12.945f, 330f);
			func_242(-1362.684f, -3196.451f, 12.945f, 330f);
			func_242(-1347.089f, -3182.69f, 12.945f, 330f);
			func_242(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_242(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_242(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_242(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_242(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_242(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_242(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_242(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_242(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_242(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
			func_242(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
			func_242(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
			func_242(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
			func_242(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
			func_242(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
			func_242(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
			func_242(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
			func_242(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
			func_242(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
			func_242(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
			func_242(-1326.5376f, -3318.499f, 12.945f, 331.2f);
			func_242(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
			func_242(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
			func_242(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
			func_242(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
			func_242(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
			func_242(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
			func_242(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
			func_242(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
			func_242(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
			func_242(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
			func_242(-1297.4025f, -3316.699f, 12.945f, 331.2f);
			func_242(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
			func_242(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
			func_242(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
			func_242(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_242(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_242(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_242(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_242(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_242(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_242(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_242(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_242(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_242(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_242(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_242(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_242(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_242(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_242(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_242(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_242(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_242(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_242(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_242(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_242(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
			func_242(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
			func_242(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
			func_242(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
			func_242(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
			func_242(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
			func_242(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
			func_242(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
			func_242(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
			func_242(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
			func_242(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
			func_242(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
			func_242(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
			func_242(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
			func_242(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
			func_242(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
			func_242(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
			func_242(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
			func_242(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
			func_242(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
			func_242(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
			func_242(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
			func_242(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
			func_242(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_242(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
			func_242(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
			func_242(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_242(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
			func_242(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_242(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_242(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_242(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_242(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_242(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_242(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_242(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_242(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_242(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_242(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_242(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_242(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_242(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_242(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_242(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_242(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_242(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_242(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_242(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
			func_242(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
			func_242(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
			func_242(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
			func_242(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
			func_242(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
			func_242(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
			func_242(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
			func_242(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
			func_242(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
			func_242(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
			func_242(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
			func_242(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
			func_242(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
			func_242(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
			func_242(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
			func_242(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
			func_242(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
			func_242(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
			func_242(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
			func_242(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
			func_242(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
			func_242(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
			func_242(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
			func_242(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
			func_242(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_242(-2484.323f, 3249.294f, 31.828f, 151f);
			func_242(-2495.313f, 3255.746f, 31.828f, 151f);
			func_242(-2472.644f, 3242.684f, 31.828f, 151f);
			func_242(-2506.313f, 3262.27f, 31.823f, 151f);
			func_242(-2461.494f, 3235.93f, 31.828f, 151f);
			func_242(-2505.602f, 3238.049f, 31.828f, 151f);
			func_242(-2481.937f, 3224.8f, 31.828f, 151f);
			func_242(-2516.813f, 3244.266f, 31.823f, 151f);
			func_242(-2470.03f, 3217.899f, 31.828f, 151f);
			func_242(-2493.933f, 3231.308f, 31.828f, 151f);
			func_242(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_242(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_242(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_242(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_242(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_242(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_242(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_242(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_242(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_242(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
			func_242(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
			func_242(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
			func_242(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
			func_242(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
			func_242(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
			func_242(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
			func_242(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
			func_242(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
			func_242(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_242(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
			func_242(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
			func_242(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
			func_242(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
			func_242(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
			func_242(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
			func_242(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
			func_242(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
			func_242(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
			func_242(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
			func_242(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
			func_242(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
			func_242(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
			func_242(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
			func_242(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
			func_242(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
			func_242(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_228(int iParam0)//Position - 0x16854
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
		case joaat("conada"):
		case joaat("conada2"):
			return 1;
		
		default:
	}
	return 0;
}

void func_229(int iParam0)//Position - 0x16904
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_242(-947.712f, -3367.704f, 12.944f, 60f);
			func_242(-904.692f, -3293.072f, 12.944f, 60f);
			func_242(-863.71f, -3221.978f, 12.944f, 60f);
			func_242(-966.418f, -3162.773f, 12.944f, 60f);
			func_242(-1007.435f, -3233.93f, 12.944f, 60f);
			func_242(-1050.455f, -3308.559f, 12.944f, 60f);
			func_242(-1145.673f, -3253.456f, 12.944f, 60f);
			func_242(-1098.386f, -3181.428f, 12.944f, 60f);
			func_242(-1060.474f, -3108.903f, 12.944f, 60f);
			func_242(-1155.391f, -3053.632f, 12.944f, 60f);
			func_242(-1196.114f, -3125.146f, 12.948f, 60f);
			func_242(-1235.552f, -3201.86f, 12.944f, 60f);
			func_242(-1344.446f, -3139.177f, 12.944f, 60f);
			func_242(-1301.308f, -3064.341f, 12.944f, 60f);
			func_242(-1260.135f, -2992.912f, 12.944f, 60f);
			func_242(-1364.244f, -2932.9f, 12.98f, 60f);
			func_242(-1405.284f, -3004.108f, 12.96f, 60f);
			func_242(-1448.29f, -3078.72f, 12.95f, 60f);
			func_242(-1535.732f, -3028.318f, 12.945f, 60f);
			func_242(-1492.639f, -2953.558f, 12.945f, 60f);
			func_242(-1451.506f, -2882.2f, 12.944f, 60f);
			func_242(-1553.927f, -2823.12f, 13.002f, 60f);
			func_242(-1595.097f, -2894.571f, 12.944f, 60f);
			func_242(-1637.836f, -2968.714f, 12.945f, 60f);
			func_242(-1740.971f, -2911.484f, 12.944f, 330f);
			func_242(-1696.293f, -2833.978f, 12.944f, 330f);
			func_242(-1651.502f, -2756.273f, 12.945f, 330f);
			func_242(-1588.258f, -2647.575f, 12.944f, 330f);
			func_242(-1536.862f, -2681.378f, 12.945f, 330f);
			func_242(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_242(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_242(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_242(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_242(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_242(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_242(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_242(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_242(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_242(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_242(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_242(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_242(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_242(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_242(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_242(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_242(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_242(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_242(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_242(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_242(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_242(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_242(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_242(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_242(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_242(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_242(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_242(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_242(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_242(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_242(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_230(int iParam0)//Position - 0x16EDA
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
			return 1;
		
		default:
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x16F84
{
	if (func_232(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_232(int iParam0)//Position - 0x16F9A
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

int func_233(int iParam0)//Position - 0x16FD8
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

int func_234(int iParam0, int iParam1)//Position - 0x17016
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

int func_235(struct<3> Param0, var uParam3, var uParam4)//Position - 0x170F3
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
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312263[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312263[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
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
	while (iVar0 < 167)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_212(iVar0))
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
			if (func_237(iVar0))
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
			iVar7 = func_236(iVar0, Param0, fVar3, 1);
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1942781.f_558[iVar0 /*3*/], Global_1942781.f_558[iVar0 /*3*/].f_1, 0f);
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

int func_236(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x172DA
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
			fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1942781.f_558[iParam0 /*3*/], Global_1942781.f_558[iParam0 /*3*/].f_1, 0f);
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
				fVar0 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Global_1942781.f_558[iParam0 /*3*/], Global_1942781.f_558[iParam0 /*3*/].f_1, 0f);
			}
			break;
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x17416
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_238(iParam0);
	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_302 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
	if (iVar1 != func_110())
	{
		if (Global_1845263[iVar1 /*877*/].f_267.f_302 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_321.f_7 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0x1748A
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

int func_239(int iParam0)//Position - 0x17511
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_240(int iParam0)//Position - 0x1753F
{
	switch (iParam0)
	{
		case 78:
			func_242(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_242(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_242(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_242(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_242(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_242(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_242(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_242(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_242(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_242(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_242(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_242(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_242(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
			func_242(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
			func_242(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
			func_242(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_242(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_242(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_242(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_242(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_242(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_242(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_242(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_242(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_242(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_242(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_242(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_242(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_242(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_242(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_242(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_242(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_242(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_242(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_242(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_242(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_241())
			{
				func_242(-1608.297f, -556.875f, 33.406f, 310f);
				func_242(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_242(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_242(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_242(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_242(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_242(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
				func_242(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
				func_242(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
				func_242(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
				func_242(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_242(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_241())
			{
				func_242(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_242(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_242(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_242(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_242(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
				func_242(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
				func_242(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
				func_242(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
				func_242(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
				func_242(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
				func_242(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
				func_242(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_241())
			{
				func_242(-102.737f, -597.379f, 35.053f, 160.999f);
				func_242(-97.793f, -589.568f, 35.082f, 134.799f);
				func_242(-110.357f, -619.402f, 35.055f, 160.599f);
				func_242(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_242(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_242(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_242(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_242(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_242(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_242(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_242(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_242(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_241())
			{
				func_242(-59.349f, -779.238f, 43.134f, 228.398f);
				func_242(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_242(-65.212f, -772.66f, 43.151f, 219.398f);
				func_242(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_242(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_242(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_242(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_242(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_242(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_242(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_242(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_242(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_242(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
			func_242(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
			func_242(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
			func_242(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
			func_242(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_242(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
			func_242(264.814f, -1785.8008f, 26.1131f, 164.5991f);
			func_242(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_242(-1464.5f, -927.9f, 9f, 296.7991f);
			func_242(-1466f, -926.1f, 9f, 296.7991f);
			func_242(-1467.9f, -924.7f, 9f, 296.7991f);
			func_242(-1469.7f, -923.7f, 9f, 296.7991f);
			func_242(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
			func_242(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
			func_242(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
			func_242(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_242(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
			func_242(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
			func_242(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
			func_242(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_242(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
			func_242(33.672f, -1014.3994f, 28.4552f, 234.5994f);
			func_242(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_242(39.4909f, -1015.0972f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_242(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
			func_242(43.316f, 2785.9026f, 56.8782f, 103.5999f);
			func_242(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
			func_242(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_242(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_242(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
			func_242(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
			func_242(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_242(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
			func_242(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
			func_242(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
			func_242(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_242(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
			func_242(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
			func_242(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
			func_242(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_242(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
			func_242(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
			func_242(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
			func_242(1750.4752f, 3715.007f, 33.1067f, 39.399f);
			func_242(1747.1798f, 3721.1023f, 33.007f, 95.199f);
			func_242(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
			func_242(1740.67f, 3717.6128f, 33.0616f, 8.199f);
			func_242(1733.937f, 3715.0796f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_242(947.9371f, -1452.7367f, 30.143f, 331.5991f);
			func_242(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
			func_242(952.4588f, -1452.8821f, 30.129f, 331.5991f);
			func_242(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
			func_242(935.1006f, -1452.7012f, 30.1907f, 316.999f);
			func_242(932.5459f, -1452.5793f, 30.2194f, 316.999f);
			func_242(929.9319f, -1452.5665f, 30.2647f, 316.999f);
			func_242(927.4857f, -1452.4463f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_242(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_242(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_242(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_242(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_242(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_242(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_242(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_242(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_242(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_242(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_242(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_242(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_242(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_242(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_242(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_242(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_242(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
			func_242(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
			func_242(2465.1226f, 4081.35f, 37.0655f, 167.4f);
			func_242(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_242(2467.7002f, 4080.332f, 37.0649f, 167.4f);
			func_242(2469.5867f, 4079.5378f, 37.061f, 167.4f);
			func_242(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
			func_242(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_242(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_242(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
			func_242(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_242(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_242(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_242(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
			func_242(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
			func_242(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_242(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
			func_242(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
			func_242(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
			func_242(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
			func_242(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
			func_242(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
			func_242(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
			func_242(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_241()//Position - 0x1873F
{
	return Global_2684312.f_17;
}

void func_242(struct<3> Param0, float fParam3)//Position - 0x1874D
{
	if (Global_2635562.f_2054 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2635562.f_2055[Global_2635562.f_2054 /*4*/] = { Param0 };
		Global_2635562.f_2055[Global_2635562.f_2054 /*4*/].f_3 = fParam3;
		Global_2635562.f_2054++;
	}
}

int func_243(struct<3> Param0)//Position - 0x187B2
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2635562.f_3213, Param0) < Global_2635562.f_3221)
	{
		return Global_2635562.f_3216;
	}
	Global_2635562.f_3213 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2643196[iVar0 /*7*/].f_2 + Global_2643196[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_179(Param0, &(Global_2643196[iVar0 /*7*/])))
		{
			Global_2635562.f_3216 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635562.f_3216 = -1;
	return -1;
}

int func_244()//Position - 0x18854
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2685249.f_6462)
	{
		return 0;
	}
	return 0;
}

int func_245(struct<2> Param0, var uParam2, bool bParam3, float fParam4)//Position - 0x1887C
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
			if (func_212(iVar0))
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
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1942781.f_558[iVar0 /*3*/], Global_1942781.f_558[iVar0 /*3*/].f_1, 0f);
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

void func_246()//Position - 0x188FE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635562.f_3037[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_247(var uParam0, bool bParam1)//Position - 0x18929
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2643152[iVar0 /*7*/].f_2 + Global_2643152[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_179(Var1, &(Global_2643152[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_190(&Var1, Global_2643152[iVar0 /*7*/], Global_2643152[iVar0 /*7*/].f_3, Global_2643152[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_248(struct<3> Param0)//Position - 0x189C6
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635562.f_515 && !Global_2635562.f_516)
	{
		if (!Global_2635562.f_45.f_317)
		{
			if (!func_252(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_251(Param0, 1008981770))
			{
				if (!func_196(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_196(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_250(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_249(&(Global_2635562.f_45[iVar0 /*12*/])) };
					if (!func_196(&Var1, 0, 0, 0, 1))
					{
						if (!func_196(&Param0, 0, 0, 0, 1))
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

Vector3 func_249(var uParam0)//Position - 0x18A86
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

int func_250(struct<3> Param0, float fParam3)//Position - 0x18ACF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_183(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_251(struct<3> Param0, float fParam3)//Position - 0x18B17
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_183(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_252(int iParam0, bool bParam1)//Position - 0x18B5E
{
	if (func_43() != 0)
	{
		return func_253(iParam0) != 0;
	}
	return func_161(iParam0, bParam1, 0);
}

int func_253(int iParam0)//Position - 0x18B85
{
	if (func_336(iParam0, 0, 1))
	{
		return Global_2657921[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_254(bool bParam0)//Position - 0x18BA7
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

void func_255()//Position - 0x18BCA
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2635562.f_2055[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635562.f_2054 = 0;
}

void func_256()//Position - 0x18BFE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_691[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_691[iVar0])
			{
				if (!Global_2635562.f_687[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2635562.f_687[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2635562.f_687[iVar0]);
						Global_2635562.f_687[iVar0] = -1;
					}
					else
					{
						Global_2635562.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2635562.f_687[iVar0] == -1)
		{
			Global_2635562.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_257()//Position - 0x18CAA
{
	if (!Global_2635562.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_611) < func_254(0))
	{
		return 1;
	}
	return 0;
}

int func_258()//Position - 0x18CDE
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2635562.f_517 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_260(PLAYER::PLAYER_ID()) && !func_259(0))
	{
		return 0;
	}
	return 1;
}

bool func_259(bool bParam0)//Position - 0x18D35
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

int func_260(int iParam0)//Position - 0x18D46
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

float func_261()//Position - 0x18D65
{
	return 10f;
}

Vector3 func_262(int iParam0)//Position - 0x18D72
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_263(int iParam0)//Position - 0x18D85
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_88.f_2[iVar0]), iVar1);
}

void func_264(int iParam0)//Position - 0x18DB4
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_88.f_5 = iParam0;
}

void func_265()//Position - 0x18DCD
{
	if (func_20() > 0)
	{
		func_296();
		func_289();
		func_281();
		func_268();
	}
	if (func_267(NETWORK::PARTICIPANT_ID()) != 3 && func_20() == 3)
	{
		func_266(3);
	}
	switch (func_267(NETWORK::PARTICIPANT_ID()))
	{
		case 0:
			if (func_20() > 0)
			{
				func_266(2);
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_266(int iParam0)//Position - 0x18E3F
{
	Local_96[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = iParam0;
}

int func_267(int iParam0)//Position - 0x18E53
{
	return Local_96[iParam0 /*4*/].f_1;
}

void func_268()//Position - 0x18E63
{
	if (!func_278())
	{
		return;
	}
	if (func_274())
	{
		if (!func_273(PLAYER::PLAYER_ID()))
		{
			func_271();
		}
	}
	else if (func_273(PLAYER::PLAYER_ID()))
	{
		func_269();
	}
}

void func_269()//Position - 0x18E9F
{
	func_270(11);
}

void func_270(int iParam0)//Position - 0x18EAD
{
	MISC::CLEAR_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}

void func_271()//Position - 0x18ECA
{
	func_272(11);
}

void func_272(int iParam0)//Position - 0x18ED8
{
	MISC::SET_BIT(&(Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_6), iParam0);
}

bool func_273(int iParam0)//Position - 0x18EF5
{
	return func_6(iParam0, 11);
}

int func_274()//Position - 0x18F05
{
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_7())
	{
		return 0;
	}
	if (func_277() != 0)
	{
		func_276(0);
	}
	if (func_275(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_277() == 0)
		{
			func_276(1);
		}
		return 0;
	}
	if (func_12(2))
	{
		return 0;
	}
	return 1;
}

bool func_275(int iParam0, int iParam1)//Position - 0x18F5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_96[iParam0 /*4*/].f_2[iVar0], iVar1);
}

void func_276(int iParam0)//Position - 0x18F84
{
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_304 = iParam0;
}

int func_277()//Position - 0x18F9E
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_304;
}

int func_278()//Position - 0x18FB6
{
	if (!func_279())
	{
		return 0;
	}
	return 1;
}

bool func_279()//Position - 0x18FCB
{
	return func_280(PLAYER::PLAYER_ID());
}

var func_280(int iParam0)//Position - 0x18FDB
{
	return func_6(iParam0, 9);
}

void func_281()//Position - 0x18FEB
{
	if (!func_288())
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_287(PLAYER::PLAYER_PED_ID(), func_16(), 120f, 1))
	{
		if (!func_275(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_286(1);
		}
	}
	else if (func_275(NETWORK::PARTICIPANT_ID(), 1))
	{
		func_285(1);
	}
	if (!func_275(NETWORK::PARTICIPANT_ID(), 0) && func_282())
	{
		func_286(0);
	}
}

int func_282()//Position - 0x19062
{
	if (func_279())
	{
		if (!func_287(PLAYER::PLAYER_PED_ID(), func_16(), 1000f, 1))
		{
			return 1;
		}
		if (func_284(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_283(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_220(PLAYER::PLAYER_ID()))
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

int func_283(int iParam0)//Position - 0x190CE
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

int func_284(int iParam0, bool bParam1, bool bParam2)//Position - 0x19107
{
	if (iParam0 == func_110())
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

void func_285(int iParam0)//Position - 0x1916B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_96[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

void func_286(int iParam0)//Position - 0x19195
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_96[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2[iVar0]), iVar1);
}

bool func_287(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x191BF
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_288()//Position - 0x191E1
{
	if (func_7())
	{
		return 1;
	}
	return 0;
}

void func_289()//Position - 0x191F5
{
	int iVar0;
	
	if (func_294(0))
	{
		if (func_292())
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
	if (iVar0 != func_291())
	{
		switch (func_291())
		{
			case 2:
				if (!func_316(1) && iVar0 == 0)
				{
					func_118(1);
				}
				break;
			
			case 0:
				if ((func_279() && !func_275(NETWORK::PARTICIPANT_ID(), 0)) && iVar0 == 2)
				{
					func_286(0);
				}
				break;
		}
		func_290(iVar0);
	}
}

void func_290(int iParam0)//Position - 0x19280
{
	uLocal_140 = iParam0;
}

int func_291()//Position - 0x1928C
{
	return uLocal_140;
}

bool func_292()//Position - 0x19296
{
	return func_293(PLAYER::PLAYER_ID());
}

int func_293(int iParam0)//Position - 0x192A6
{
	if (func_35(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_110())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_294(bool bParam0)//Position - 0x192DB
{
	return func_295(PLAYER::PLAYER_ID(), bParam0);
}

bool func_295(int iParam0, bool bParam1)//Position - 0x192ED
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_293(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_110();
}

void func_296()//Position - 0x19326
{
	int iVar0;
	
	if (func_19() > 0)
	{
		func_301();
	}
	switch (func_19())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (((((!func_12(3) && !func_275(NETWORK::PARTICIPANT_ID(), 2)) && func_7()) && !NETWORK::NETWORK_IS_ENTITY_FADING(func_16())) && func_299(func_10())) && func_298(func_16()) == 0)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(func_16(), true);
				NETWORK::NETWORK_FADE_OUT_ENTITY(func_16(), false, true);
				func_286(2);
			}
			break;
		
		case 3:
			if (((!func_12(4) && !func_275(NETWORK::PARTICIPANT_ID(), 3)) && func_7()) && !ENTITY::IS_ENTITY_VISIBLE(func_16()))
			{
				func_286(3);
			}
			break;
		
		case 4:
			if (((!func_12(5) && !func_275(NETWORK::PARTICIPANT_ID(), 4)) && func_7()) && func_299(func_10()))
			{
				iVar0 = func_10();
				func_297(&iVar0);
				func_286(4);
			}
			break;
		
		case 5:
			break;
	}
}

void func_297(int iParam0)//Position - 0x1944F
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

int func_298(int iParam0)//Position - 0x19488
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

int func_299(int iParam0)//Position - 0x194CF
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_300(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_300(int iParam0)//Position - 0x19504
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_301()//Position - 0x19526
{
	if (func_307())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_145))
		{
			iLocal_145 = HUD::ADD_BLIP_FOR_ENTITY(func_16());
			HUD::SET_BLIP_SPRITE(iLocal_145, func_306());
			func_303(&iLocal_145, func_305());
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_145, func_302());
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_145))
	{
		HUD::REMOVE_BLIP(&iLocal_145);
	}
}

char* func_302()//Position - 0x19579
{
	return "CASINO_VD" /* GXT: Luxury Car */;
}

void func_303(int iParam0, int iParam1)//Position - 0x19584
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_304(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_304(int iParam0)//Position - 0x195AA
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

int func_305()//Position - 0x19812
{
	return 12;
}

int func_306()//Position - 0x1981C
{
	return 225;
}

int func_307()//Position - 0x19826
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

void func_308(int iParam0)//Position - 0x1986B
{
	Local_96[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

int func_309()//Position - 0x1987D
{
	func_310();
	return 1;
}

void func_310()//Position - 0x1988A
{
	func_272(10);
}

int func_311()//Position - 0x19898
{
	return Local_88.f_0;
}

int func_312(int iParam0)//Position - 0x198A2
{
	return Local_96[iParam0 /*4*/];
}

void func_313()//Position - 0x198B0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_129[iVar0] = func_315();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iLocal_129[iVar0] = iVar0;
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iLocal_129[iVar0]);
			if (func_336(iVar1, 0, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!bVar2)
					{
						if (func_275(iLocal_129[iVar0], 1))
						{
							bVar2 = true;
						}
					}
					if (!func_12(1))
					{
						if (func_275(iLocal_129[iVar0], 0))
						{
							func_263(1);
						}
					}
					if (!func_12(3))
					{
						if (func_275(iLocal_129[iVar0], 2))
						{
							func_263(3);
						}
					}
					if (!func_12(4))
					{
						if (func_275(iLocal_129[iVar0], 3))
						{
							func_263(4);
						}
					}
					if (!func_12(5))
					{
						if (func_275(iLocal_129[iVar0], 4))
						{
							func_263(5);
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
				func_263(2);
			}
		}
		else if (func_12(2))
		{
			func_314(2);
		}
	}
}

void func_314(int iParam0)//Position - 0x199CC
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_88.f_2[iVar0]), iVar1);
}

int func_315()//Position - 0x199FB
{
	return -1;
}

bool func_316(int iParam0)//Position - 0x19A04
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_138[iVar0], iVar1);
}

int func_317()//Position - 0x19A23
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_323())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_322())
	{
		return 1;
	}
	if (func_321(159))
	{
		if (!func_320())
		{
			return 1;
		}
	}
	if (func_321(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_318() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_318()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_318()//Position - 0x19AA7
{
	switch (func_43())
	{
		case 0:
			return func_319();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_319()//Position - 0x19ADA
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_320()//Position - 0x19AFE
{
	return Global_2684312.f_698;
}

int func_321(int iParam0)//Position - 0x19B0D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_322()//Position - 0x19B24
{
	return Global_2695951;
}

bool func_323()//Position - 0x19B30
{
	return Global_2684312.f_693;
}

void func_324()//Position - 0x19B3F
{
	SYSTEM::WAIT(0);
}

void func_325()//Position - 0x19B4C
{
	if (func_279() && func_2() != 3)
	{
		func_331();
	}
	if (func_330(PLAYER::PLAYER_ID()))
	{
		func_329();
	}
	if (func_273(PLAYER::PLAYER_ID()))
	{
		func_269();
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		func_328();
	}
	if (func_277() != 0)
	{
		func_276(0);
	}
	if (func_2() != 0)
	{
		func_326();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_326()//Position - 0x19BB4
{
	int iVar0;
	
	iVar0 = func_10();
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		func_327(&iVar0);
	}
}

void func_327(int iParam0)//Position - 0x19BD1
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_328()//Position - 0x19BF5
{
	func_270(12);
}

void func_329()//Position - 0x19C03
{
	func_270(10);
}

bool func_330(int iParam0)//Position - 0x19C11
{
	return func_6(iParam0, 10);
}

void func_331()//Position - 0x19C21
{
	func_270(9);
	Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10.f_305 = 0;
}

int func_332(struct<21> Param0)//Position - 0x19C40
{
	func_335(8, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_333(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_88, 8, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_96, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

int func_333(int iParam0, int iParam1, bool bParam2)//Position - 0x19C77
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_334();
			}
			else
			{
				return 0;
			}
		}
		if (!func_259(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_334();
					}
					else
					{
						return 0;
					}
				}
				if (func_323())
				{
					if (!bParam2)
					{
						func_334();
					}
					else
					{
						return 0;
					}
				}
				if (func_321(157))
				{
					if (!bParam2)
					{
						func_334();
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
					func_334();
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
				func_334();
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
			func_334();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_334()//Position - 0x19D8D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_335(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x19D99
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_334();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_336(int iParam0, bool bParam1, bool bParam2)//Position - 0x19DB8
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

