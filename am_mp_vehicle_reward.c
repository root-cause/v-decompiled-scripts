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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	struct<2> Local_65[32];
	struct<47> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<376> Local_67 = { 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_63 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_621();
	}
	else
	{
		func_619();
	}
	while (true)
	{
		func_618();
		if (func_611())
		{
			func_619();
		}
		if (func_608())
		{
			func_619();
		}
		func_1();
	}
}

void func_1()//Position - 0xAB
{
	switch (Local_66.f_46)
	{
		case 0:
			if (func_601(&(Local_66.f_10)) && !func_600())
			{
				func_598(&Local_66, 1);
			}
			break;
		
		case 1:
			func_388();
			break;
		
		case 2:
			func_372();
			break;
		
		case 3:
			func_367();
			break;
		
		case 4:
			func_43();
			break;
		
		case 5:
			func_16();
			break;
	}
	func_6();
	func_2();
}

void func_2()//Position - 0x12A
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
	{
		iVar1 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (!func_5(iVar1, 1))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						VEHICLE::DETACH_VEHICLE_FROM_TRAILER(iVar1);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
				else if (func_3(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(iVar1);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
				else if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
					{
						ENTITY::DETACH_ENTITY(iVar1, true, true);
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

int func_3(int iParam0)//Position - 0x1EE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (func_4(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(int iParam0)//Position - 0x233
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return (((iVar0 == joaat("cargobob") || iVar0 == joaat("cargobob2")) || iVar0 == joaat("cargobob3")) || iVar0 == joaat("cargobob4"));
}

int func_5(int iParam0, bool bParam1)//Position - 0x275
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_6()//Position - 0x2C5
{
	func_15();
	func_7();
	if (Local_66.f_8 >= 32)
	{
		Local_66.f_8 = 0;
	}
}

void func_7()//Position - 0x2E3
{
	int iVar0;
	
	if (Local_66.f_8 != -1)
	{
		if (func_13())
		{
			if (((ENTITY::DOES_ENTITY_EXIST(Local_66.f_12[Local_66.f_8]) && (!ENTITY::IS_ENTITY_DEAD(Local_66.f_12[Local_66.f_8], false) || ENTITY::IS_ENTITY_IN_WATER(Local_66.f_12[Local_66.f_8]))) && func_9(Local_66.f_12[Local_66.f_8], 1, 0, 0, 0, 0, 1, 0, 1)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_66.f_12[Local_66.f_8], false))
			{
				iVar0 = Local_66.f_12[Local_66.f_8];
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (func_8(iVar0, &(Local_66.f_9)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
							VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(iVar0);
						}
						NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
		}
	}
}

int func_8(int iParam0, var uParam1)//Position - 0x3AF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x40E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_12(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_11()) && func_10(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x4F2
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

int func_11()//Position - 0x552
{
	return -1;
}

int func_12(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x55B
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_13()//Position - 0x5F6
{
	if (!func_10(Local_66.f_8, 0, 1))
	{
		return 1;
	}
	if (func_14(Local_66.f_12[Local_66.f_8]) && ENTITY::IS_ENTITY_IN_WATER(Local_66.f_12[Local_66.f_8]))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x639
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

void func_15()//Position - 0x65A
{
	int iVar0;
	
	if (Local_66.f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[Local_66.f_8 /*2*/].f_1))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_65[Local_66.f_8 /*2*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				Local_66.f_12[Local_66.f_8] = iVar0;
			}
		}
	}
}

void func_16()//Position - 0x6A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (BitTest(Local_66.f_0, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_42(iVar0))
			{
				if (func_41(iVar0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_66.f_45))
					{
						HUD::REMOVE_BLIP(&(Local_66.f_45));
					}
					Local_66.f_0 = 0;
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
					func_24();
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	else
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 != -1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar1 /*2*/].f_1))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_65[iVar1 /*2*/].f_1);
			if (ENTITY::IS_ENTITY_DEAD(iVar2, false) || ENTITY::IS_ENTITY_IN_WATER(iVar2))
			{
				if (HUD::DOES_BLIP_EXIST(Local_66.f_45))
				{
					HUD::REMOVE_BLIP(&(Local_66.f_45));
				}
			}
		}
		Local_66.f_0 = 0;
		func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
		func_24();
	}
	if (func_23())
	{
		if (Local_66.f_4 != 0)
		{
			if (Local_66.f_4 == 1)
			{
				func_17(func_21());
			}
			Local_66.f_4 = 0;
		}
	}
	func_598(&Local_66, 0);
	Local_66.f_5 = 0;
	Local_66.f_6 = 0;
	Local_66.f_7 = 0;
}

void func_17(int iParam0)//Position - 0x7C5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_23())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_20(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_18(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_18(var uParam0)//Position - 0x819
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_19(&(uParam0->f_14));
	func_19(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_19(var uParam0)//Position - 0x925
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_20(int iParam0)//Position - 0x96D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_21()//Position - 0x998
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_22(iVar0) != 2147483647)
		{
			if (func_20(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_22(int iParam0)//Position - 0x9D3
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_23()//Position - 0x9FA
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_24()//Position - 0xA11
{
	int iVar0;
	
	Local_66.f_3 = 0;
	Local_66.f_2 = 0;
	Local_67.f_370 = 0;
	Local_67.f_373 = 0;
	Local_67.f_367 = 0;
	Local_67.f_368 = 0;
	Local_67.f_365 = 0;
	Local_67.f_375 = 0;
	Local_67.f_366 = 0;
	Local_67.f_369 = 0;
	iVar0 = 0;
	while (iVar0 <= 362)
	{
		Local_67.f_1[iVar0] = 0;
		iVar0++;
	}
	Local_67.f_0 = 0;
	func_25(&(Local_67.f_371));
}

void func_25(var uParam0)//Position - 0xA7C
{
	uParam0->f_1 = 0;
}

void func_26(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA89
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
	if (func_40())
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
		if (!func_38())
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
				else if (bVar14 || (!func_35(PLAYER::PLAYER_ID(), 0) && !func_34()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_31(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_30(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_29();
					func_28();
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
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_30(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_27(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
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

bool func_27(int iParam0)//Position - 0xF17
{
	return iParam0 == 17;
}

void func_28()//Position - 0xF24
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_29()//Position - 0xF71
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_30(int iParam0)//Position - 0xFAF
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(bool bParam0, int iParam1, int iParam2)//Position - 0xFE0
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
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
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
				func_33();
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
		if (func_35(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_32(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_32(int iParam0, bool bParam1)//Position - 0x10B0
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_33()//Position - 0x10CC
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

bool func_34()//Position - 0x1124
{
	return BitTest(Global_2621446, 3);
}

bool func_35(int iParam0, int iParam1)//Position - 0x1132
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_36(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_36(int iParam0, bool bParam1)//Position - 0x117D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1575038[iVar1] == 1)
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

int func_37()//Position - 0x11BE
{
	return Global_1574918;
}

int func_38()//Position - 0x11CA
{
	if (func_39() == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x11DF
{
	return Global_1574632.f_18;
}

int func_40()//Position - 0x11ED
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x121E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x124F
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_43()//Position - 0x128B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_598(&Local_66, 5);
		return;
	}
	if (iVar0 != NETWORK::NET_TO_VEH(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		return;
	}
	if (func_14(iVar0) && ENTITY::IS_ENTITY_IN_WATER(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_598(&Local_66, 5);
		return;
	}
	if (func_55(iVar0, &Local_67, &(Local_66.f_4), &(Local_66.f_5), &(Local_66.f_6), &(Local_66.f_7), 0, 1, 0, 0, 0))
	{
		if (Local_66.f_7 == 3)
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			func_598(&Local_66, 5);
		}
		else
		{
			func_52(1);
			MISC::SET_BIT(&Local_66, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
			func_47(Local_66.f_10, 1);
			func_44(1849420593, 10, 0);
			func_598(&Local_66, 5);
		}
	}
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1380
{
	int iVar0;
	
	if (func_46(iParam1, iParam2))
	{
		iVar0 = func_45();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_45()//Position - 0x13AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_46(int iParam0, var uParam1)//Position - 0x13E2
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_47(int iParam0, bool bParam1)//Position - 0x1468
{
	switch (iParam0)
	{
		case 0:
			func_49(229, bParam1, -1, 1);
			break;
		
		case 1:
			func_48(158, bParam1, -1);
			break;
	}
}

void func_48(int iParam0, bool bParam1, int iParam2)//Position - 0x149C
{
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_49(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x14BA
{
	int iVar0;
	
	if (func_51())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_50(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_50(var uParam0)//Position - 0x14EC
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
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

int func_51()//Position - 0x1520
{
	return 1;
	return 0;
}

void func_52(int iParam0)//Position - 0x152D
{
	Global_2703735.f_61.f_16 = iParam0;
	if (func_54(&(Global_2703735.f_61.f_46)))
	{
		Global_2703735.f_61.f_48 = 0;
		func_25(&(Global_2703735.f_61.f_46));
		func_53(0);
	}
}

void func_53(int iParam0)//Position - 0x1568
{
	Global_2703735.f_61.f_17 = iParam0;
}

bool func_54(var uParam0)//Position - 0x157A
{
	return uParam0->f_1;
}

int func_55(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x1586
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_358(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_357(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_349(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!BitTest(uParam1->f_370, 7))
					{
						if (func_215(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !func_214())
						{
							if (PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2, 202) || func_213())
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_370), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_212(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (func_211())
				{
					iVar5 = 0;
					while (iVar5 < 363)
					{
						if (func_207(iVar5))
						{
							bVar2 = true;
							iVar5 = 364;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_213())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_213())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_14(iParam0))
			{
				if (func_23())
				{
					if (func_145(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_141(*uParam4, *iParam3, -1);
							}
							if (!func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								func_136(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_97(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							func_56(iParam0, *iParam3);
							func_44(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_141(*uParam4, *iParam3, -1);
					}
					if (!func_366(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						func_136(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_97(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					func_56(iParam0, *iParam3);
					func_44(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)//Position - 0x192E
{
	func_96(iParam0);
	func_57(iParam1);
}

void func_57(int iParam0)//Position - 0x1942
{
	if (iParam0 >= 0 && iParam0 <= 363)
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 2);
		func_49(101, 1, -1, 1);
		func_73(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
		if (!Global_1577982)
		{
			func_58(91, 3, 1);
			Global_1577982 = 1;
		}
		else
		{
			func_58(91, 3, 0);
		}
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x19A7
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_65();
		if (iParam1 == 4)
		{
			func_64(iParam0, 0, 1);
			func_64(iParam0, 1, 1);
			func_64(iParam0, 2, 1);
			func_63(iParam0, 0, 1);
			func_63(iParam0, 1, 1);
			func_63(iParam0, 2, 1);
		}
		else
		{
			if (func_62(iParam0, iParam1) == 1 && func_61(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_64(iParam0, iVar0, 1);
			func_63(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_60(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_60(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_59();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_60(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_59();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_60(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_59();
			}
		}
	}
}

void func_59()//Position - 0x1B1F
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8136, 0);
}

struct<4> func_60(int iParam0)//Position - 0x1B98
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_61(int iParam0, int iParam1)//Position - 0x1BAB
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_62(int iParam0, int iParam1)//Position - 0x1BD5
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_63(int iParam0, int iParam1, int iParam2)//Position - 0x1BFF
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_64(int iParam0, int iParam1, int iParam2)//Position - 0x1C44
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_65()//Position - 0x1C89
{
	if (func_72(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_66();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_66()//Position - 0x1D2B
{
	func_67();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_67()//Position - 0x1D44
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_69(PLAYER::PLAYER_PED_ID());
			if (func_68(iVar0) && (!func_72(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_68(Global_113386.f_2363.f_539.f_4321))
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

bool func_68(int iParam0)//Position - 0x1E41
{
	return iParam0 < 3;
}

int func_69(int iParam0)//Position - 0x1E4D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_70(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_70(int iParam0)//Position - 0x1E8A
{
	if (func_68(iParam0))
	{
		return func_71(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_71(int iParam0)//Position - 0x1EAF
{
	return Global_1998[iParam0 /*29*/];
}

bool func_72(int iParam0)//Position - 0x1EBE
{
	return Global_43052 == iParam0;
}

int func_73(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1ECC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_95() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_94(1411, iParam0);
	func_93(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_94(1412, iParam0);
	func_93(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_92(iParam0))
	{
	}
	else
	{
		iVar1 = func_94(1413, iParam0);
		func_93(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_94(1414, iParam0) + iVar0);
				func_93(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_91(iParam0) + (iVar0 - 25));
				func_93(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_94(1439, iParam0) + iVar0);
			func_93(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_94(1441, iParam0);
	func_93(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_94(1442, iParam0);
	func_93(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_94(1443, iParam0);
	func_93(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_92(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_94(1444, iParam0);
		func_93(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_94(1445, iParam0);
	func_93(iVar1, uParam1->f_67, iParam3);
	if (func_92(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_94(1446, iParam0);
		func_93(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_94(1447, iParam0);
	func_93(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_94(1448, iParam0);
	func_93(iVar1, uParam1->f_70, -1);
	iVar1 = func_94(1449, iParam0);
	func_93(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_94(1450, iParam0);
	func_93(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_94(1451, iParam0);
	func_93(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_94(1452, iParam0);
	func_93(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_94(1453, iParam0);
	func_93(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_94(1454, iParam0);
	func_93(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_94(1455, iParam0);
	func_93(iVar1, uParam1->f_8, iParam3);
	if (func_92(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_94(3880, iParam0);
		func_93(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_94(3881, iParam0);
		func_93(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_94(3882, iParam0);
		func_93(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_90(iParam0);
		func_93(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_89(iParam0);
		func_93(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_88(iParam0);
		func_93(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_77(iParam0, 0);
		func_93(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[func_95() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_76(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_76(func_75(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_76(func_75(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_76(func_75(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_76(func_75(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_76(func_75(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_76(func_75(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!func_92(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_74(func_75(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_74(int iParam0, char* sParam1, int iParam2)//Position - 0x2322
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_75(int iParam0, int iParam1)//Position - 0x234B
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				case 317:
					return 9921;
				
				case 318:
					return 9928;
				
				case 319:
					return 9935;
				
				case 320:
					return 9942;
				
				case 321:
					return 9949;
				
				case 322:
					return 9956;
				
				case 323:
					return 9963;
				
				case 324:
					return 9970;
				
				case 325:
					return 9977;
				
				case 326:
					return 9984;
				
				case 327:
					return 9991;
				
				case 328:
					return 9998;
				
				case 329:
					return 10005;
				
				case 330:
					return 10012;
				
				case 331:
					return 10019;
				
				case 332:
					return 10026;
				
				case 333:
					return 10033;
				
				case 334:
					return 10040;
				
				case 335:
					return 10047;
				
				case 336:
					return 10054;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10447;
				
				case 338:
					return 10454;
				
				case 339:
					return 10461;
				
				case 340:
					return 10468;
				
				case 341:
					return 10475;
				
				case 342:
					return 10482;
				
				case 343:
					return 10489;
				
				case 344:
					return 10496;
				
				case 345:
					return 10503;
				
				case 346:
					return 10510;
				
				case 347:
					return 10517;
				
				case 348:
					return 10523;
				
				case 349:
					return 10529;
				
				case 350:
					return 10535;
				
				case 351:
					return 10542;
				
				case 352:
					return 10549;
				
				case 353:
					return 10556;
				
				case 354:
					return 10563;
				
				case 355:
					return 10570;
				
				case 356:
					return 10577;
				
				case 357:
					return 10584;
				
				case 358:
					return 10591;
				
				case 359:
					return 10598;
				
				case 360:
					return 10605;
				
				case 361:
					return 10611;
				
				case 362:
					return 10617;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				case 317:
					return 9922;
				
				case 318:
					return 9929;
				
				case 319:
					return 9936;
				
				case 320:
					return 9943;
				
				case 321:
					return 9950;
				
				case 322:
					return 9957;
				
				case 323:
					return 9964;
				
				case 324:
					return 9971;
				
				case 325:
					return 9978;
				
				case 326:
					return 9985;
				
				case 327:
					return 9992;
				
				case 328:
					return 9999;
				
				case 329:
					return 10006;
				
				case 330:
					return 10013;
				
				case 331:
					return 10020;
				
				case 332:
					return 10027;
				
				case 333:
					return 10034;
				
				case 334:
					return 10041;
				
				case 335:
					return 10048;
				
				case 336:
					return 10055;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10448;
				
				case 338:
					return 10455;
				
				case 339:
					return 10462;
				
				case 340:
					return 10469;
				
				case 341:
					return 10476;
				
				case 342:
					return 10483;
				
				case 343:
					return 10490;
				
				case 344:
					return 10497;
				
				case 345:
					return 10504;
				
				case 346:
					return 10511;
				
				case 347:
					return 10518;
				
				case 348:
					return 10524;
				
				case 349:
					return 10530;
				
				case 350:
					return 10536;
				
				case 351:
					return 10543;
				
				case 352:
					return 10550;
				
				case 353:
					return 10557;
				
				case 354:
					return 10564;
				
				case 355:
					return 10571;
				
				case 356:
					return 10578;
				
				case 357:
					return 10585;
				
				case 358:
					return 10592;
				
				case 359:
					return 10599;
				
				case 360:
					return 10606;
				
				case 361:
					return 10612;
				
				case 362:
					return 10618;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				case 317:
					return 9923;
				
				case 318:
					return 9930;
				
				case 319:
					return 9937;
				
				case 320:
					return 9944;
				
				case 321:
					return 9951;
				
				case 322:
					return 9958;
				
				case 323:
					return 9965;
				
				case 324:
					return 9972;
				
				case 325:
					return 9979;
				
				case 326:
					return 9986;
				
				case 327:
					return 9993;
				
				case 328:
					return 10000;
				
				case 329:
					return 10007;
				
				case 330:
					return 10014;
				
				case 331:
					return 10021;
				
				case 332:
					return 10028;
				
				case 333:
					return 10035;
				
				case 334:
					return 10042;
				
				case 335:
					return 10049;
				
				case 336:
					return 10056;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10449;
				
				case 338:
					return 10456;
				
				case 339:
					return 10463;
				
				case 340:
					return 10470;
				
				case 341:
					return 10477;
				
				case 342:
					return 10484;
				
				case 343:
					return 10491;
				
				case 344:
					return 10498;
				
				case 345:
					return 10505;
				
				case 346:
					return 10512;
				
				case 347:
					return 10519;
				
				case 348:
					return 10525;
				
				case 349:
					return 10531;
				
				case 350:
					return 10537;
				
				case 351:
					return 10544;
				
				case 352:
					return 10551;
				
				case 353:
					return 10558;
				
				case 354:
					return 10565;
				
				case 355:
					return 10572;
				
				case 356:
					return 10579;
				
				case 357:
					return 10586;
				
				case 358:
					return 10593;
				
				case 359:
					return 10600;
				
				case 360:
					return 10607;
				
				case 361:
					return 10613;
				
				case 362:
					return 10619;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				case 317:
					return 9924;
				
				case 318:
					return 9931;
				
				case 319:
					return 9938;
				
				case 320:
					return 9945;
				
				case 321:
					return 9952;
				
				case 322:
					return 9959;
				
				case 323:
					return 9966;
				
				case 324:
					return 9973;
				
				case 325:
					return 9980;
				
				case 326:
					return 9987;
				
				case 327:
					return 9994;
				
				case 328:
					return 10001;
				
				case 329:
					return 10008;
				
				case 330:
					return 10015;
				
				case 331:
					return 10022;
				
				case 332:
					return 10029;
				
				case 333:
					return 10036;
				
				case 334:
					return 10043;
				
				case 335:
					return 10050;
				
				case 336:
					return 10057;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10450;
				
				case 338:
					return 10457;
				
				case 339:
					return 10464;
				
				case 340:
					return 10471;
				
				case 341:
					return 10478;
				
				case 342:
					return 10485;
				
				case 343:
					return 10492;
				
				case 344:
					return 10499;
				
				case 345:
					return 10506;
				
				case 346:
					return 10513;
				
				case 347:
					return 10520;
				
				case 348:
					return 10526;
				
				case 349:
					return 10532;
				
				case 350:
					return 10538;
				
				case 351:
					return 10545;
				
				case 352:
					return 10552;
				
				case 353:
					return 10559;
				
				case 354:
					return 10566;
				
				case 355:
					return 10573;
				
				case 356:
					return 10580;
				
				case 357:
					return 10587;
				
				case 358:
					return 10594;
				
				case 359:
					return 10601;
				
				case 360:
					return 10608;
				
				case 361:
					return 10614;
				
				case 362:
					return 10620;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				case 317:
					return 9925;
				
				case 318:
					return 9932;
				
				case 319:
					return 9939;
				
				case 320:
					return 9946;
				
				case 321:
					return 9953;
				
				case 322:
					return 9960;
				
				case 323:
					return 9967;
				
				case 324:
					return 9974;
				
				case 325:
					return 9981;
				
				case 326:
					return 9988;
				
				case 327:
					return 9995;
				
				case 328:
					return 10002;
				
				case 329:
					return 10009;
				
				case 330:
					return 10016;
				
				case 331:
					return 10023;
				
				case 332:
					return 10030;
				
				case 333:
					return 10037;
				
				case 334:
					return 10044;
				
				case 335:
					return 10051;
				
				case 336:
					return 10058;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10451;
				
				case 338:
					return 10458;
				
				case 339:
					return 10465;
				
				case 340:
					return 10472;
				
				case 341:
					return 10479;
				
				case 342:
					return 10486;
				
				case 343:
					return 10493;
				
				case 344:
					return 10500;
				
				case 345:
					return 10507;
				
				case 346:
					return 10514;
				
				case 347:
					return 10521;
				
				case 348:
					return 10527;
				
				case 349:
					return 10533;
				
				case 350:
					return 10539;
				
				case 351:
					return 10546;
				
				case 352:
					return 10553;
				
				case 353:
					return 10560;
				
				case 354:
					return 10567;
				
				case 355:
					return 10574;
				
				case 356:
					return 10581;
				
				case 357:
					return 10588;
				
				case 358:
					return 10595;
				
				case 359:
					return 10602;
				
				case 360:
					return 10609;
				
				case 361:
					return 10615;
				
				case 362:
					return 10621;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2837;
				
				case 40:
					return 2844;
				
				case 41:
					return 2851;
				
				case 42:
					return 2858;
				
				case 43:
					return 2865;
				
				case 44:
					return 2872;
				
				case 45:
					return 2879;
				
				case 46:
					return 2886;
				
				case 47:
					return 2893;
				
				case 48:
					return 2900;
				
				case 52:
					return 2961;
				
				case 53:
					return 2968;
				
				case 54:
					return 2975;
				
				case 55:
					return 2982;
				
				case 56:
					return 2989;
				
				case 57:
					return 2996;
				
				case 58:
					return 3003;
				
				case 59:
					return 3010;
				
				case 60:
					return 3017;
				
				case 61:
					return 3024;
				
				case 65:
					return 3245;
				
				case 66:
					return 3253;
				
				case 67:
					return 3261;
				
				case 68:
					return 3269;
				
				case 69:
					return 3277;
				
				case 70:
					return 3285;
				
				case 71:
					return 3293;
				
				case 72:
					return 3301;
				
				case 73:
					return 3309;
				
				case 74:
					return 3317;
				
				case 75:
					return 3325;
				
				case 76:
					return 3333;
				
				case 77:
					return 3341;
				
				case 78:
					return 3349;
				
				case 79:
					return 3357;
				
				case 80:
					return 3365;
				
				case 81:
					return 3373;
				
				case 82:
					return 3381;
				
				case 83:
					return 3389;
				
				case 84:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4041;
				
				case 89:
					return 4049;
				
				case 90:
					return 4057;
				
				case 91:
					return 4065;
				
				case 92:
					return 4073;
				
				case 93:
					return 4081;
				
				case 94:
					return 4089;
				
				case 95:
					return 4097;
				
				case 96:
					return 4105;
				
				case 97:
					return 4113;
				
				case 98:
					return 4121;
				
				case 99:
					return 4129;
				
				case 100:
					return 4137;
				
				case 101:
					return 4145;
				
				case 102:
					return 4153;
				
				case 103:
					return 4161;
				
				case 104:
					return 4169;
				
				case 105:
					return 4177;
				
				case 106:
					return 4185;
				
				case 107:
					return 4193;
				
				case 108:
					return 4201;
				
				case 109:
					return 4209;
				
				case 110:
					return 4217;
				
				case 111:
					return 4225;
				
				case 112:
					return 4233;
				
				case 113:
					return 4241;
				
				case 114:
					return 4249;
				
				case 115:
					return 4257;
				
				case 116:
					return 4265;
				
				case 117:
					return 4273;
				
				case 118:
					return 4281;
				
				case 119:
					return 4289;
				
				case 120:
					return 4297;
				
				case 121:
					return 4305;
				
				case 122:
					return 4313;
				
				case 123:
					return 4321;
				
				case 124:
					return 4329;
				
				case 125:
					return 4337;
				
				case 126:
					return 4345;
				
				case 127:
					return 4353;
				
				case 128:
					return 4361;
				
				case 129:
					return 4369;
				
				case 130:
					return 4377;
				
				case 131:
					return 4385;
				
				case 132:
					return 4393;
				
				case 133:
					return 4401;
				
				case 134:
					return 4409;
				
				case 135:
					return 4417;
				
				case 136:
					return 4425;
				
				case 137:
					return 4433;
				
				case 138:
					return 4441;
				
				case 139:
					return 4449;
				
				case 140:
					return 4457;
				
				case 141:
					return 4465;
				
				case 142:
					return 4473;
				
				case 143:
					return 4481;
				
				case 144:
					return 4489;
				
				case 145:
					return 4497;
				
				case 146:
					return 4505;
				
				case 147:
					return 4513;
				
				case 148:
					return 4521;
				
				case 149:
					return 4529;
				
				case 150:
					return 4537;
				
				case 151:
					return 4545;
				
				case 152:
					return 4553;
				
				case 153:
					return 4561;
				
				case 154:
					return 4569;
				
				case 155:
					return 4577;
				
				case 156:
					return 4585;
				
				case 157:
					return 4593;
				
				case 158:
					return 5486;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5934;
				
				case 160:
					return 5941;
				
				case 161:
					return 5948;
				
				case 162:
					return 5955;
				
				case 163:
					return 5962;
				
				case 164:
					return 5969;
				
				case 165:
					return 5976;
				
				case 166:
					return 5983;
				
				case 167:
					return 5990;
				
				case 168:
					return 5997;
				
				case 169:
					return 6004;
				
				case 170:
					return 6011;
				
				case 171:
					return 6018;
				
				case 172:
					return 6025;
				
				case 173:
					return 6032;
				
				case 174:
					return 6039;
				
				case 175:
					return 6046;
				
				case 176:
					return 6053;
				
				case 177:
					return 6060;
				
				case 178:
					return 6067;
				
				case 179:
					return 6074;
				
				case 180:
					return 6081;
				
				case 181:
					return 6088;
				
				case 182:
					return 6095;
				
				case 183:
					return 6102;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6179;
				
				case 185:
					return 6186;
				
				case 186:
					return 6193;
				
				case 187:
					return 6200;
				
				case 188:
					return 6207;
				
				case 189:
					return 6214;
				
				case 190:
					return 6221;
				
				case 191:
					return 6228;
				
				case 192:
					return 6235;
				
				case 193:
					return 6242;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6576;
				
				case 195:
					return 6583;
				
				case 196:
					return 6590;
				
				case 197:
					return 6597;
				
				case 198:
					return 6604;
				
				case 199:
					return 6611;
				
				case 200:
					return 6618;
				
				case 201:
					return 6625;
				
				case 202:
					return 6632;
				
				case 203:
					return 6639;
				
				case 204:
					return 6646;
				
				case 205:
					return 6653;
				
				case 206:
					return 6660;
				
				case 207:
					return 6667;
				
				case 208:
					return 6674;
				
				case 209:
					return 6681;
				
				case 210:
					return 6688;
				
				case 211:
					return 6695;
				
				case 212:
					return 6702;
				
				case 213:
					return 6709;
				
				case 214:
					return 6716;
				
				case 215:
					return 6723;
				
				case 216:
					return 6730;
				
				case 217:
					return 6737;
				
				case 218:
					return 6744;
				
				case 219:
					return 6751;
				
				case 220:
					return 6758;
				
				case 221:
					return 6765;
				
				case 222:
					return 6772;
				
				case 223:
					return 6779;
				
				case 224:
					return 6786;
				
				case 225:
					return 6793;
				
				case 226:
					return 6800;
				
				case 227:
					return 6807;
				
				case 228:
					return 6814;
				
				case 229:
					return 6821;
				
				case 230:
					return 6828;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7298;
				
				case 232:
					return 7305;
				
				case 233:
					return 7312;
				
				case 234:
					return 7319;
				
				case 235:
					return 7326;
				
				case 236:
					return 7333;
				
				case 237:
					return 7340;
				
				case 238:
					return 7347;
				
				case 239:
					return 7354;
				
				case 240:
					return 7361;
				
				case 241:
					return 7368;
				
				case 242:
					return 7375;
				
				case 243:
					return 7382;
				
				case 244:
					return 7389;
				
				case 245:
					return 7396;
				
				case 246:
					return 7403;
				
				case 247:
					return 7410;
				
				case 248:
					return 7417;
				
				case 249:
					return 7424;
				
				case 250:
					return 7431;
				
				case 251:
					return 7438;
				
				case 252:
					return 7445;
				
				case 253:
					return 7452;
				
				case 254:
					return 7459;
				
				case 255:
					return 7466;
				
				case 256:
					return 7473;
				
				case 257:
					return 7480;
				
				case 258:
					return 7487;
				
				case 259:
					return 7494;
				
				case 260:
					return 7501;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8021;
				
				case 262:
					return 8028;
				
				case 263:
					return 8035;
				
				case 264:
					return 8042;
				
				case 265:
					return 8049;
				
				case 266:
					return 8056;
				
				case 267:
					return 8063;
				
				case 268:
					return 8070;
				
				case 269:
					return 8077;
				
				case 270:
					return 8084;
				
				case 271:
					return 8545;
				
				case 272:
					return 8552;
				
				case 273:
					return 8559;
				
				case 274:
					return 8566;
				
				case 275:
					return 8573;
				
				case 276:
					return 8580;
				
				case 277:
					return 8587;
				
				case 278:
					return 8594;
				
				case 279:
					return 8601;
				
				case 280:
					return 8608;
				
				case 281:
					return 8992;
				
				case 282:
					return 8999;
				
				case 283:
					return 9006;
				
				case 284:
					return 9013;
				
				case 285:
					return 9020;
				
				case 286:
					return 9027;
				
				case 287:
					return 9034;
				
				case 288:
					return 9041;
				
				case 289:
					return 9048;
				
				case 290:
					return 9055;
				
				case 294:
					return 9080;
				
				case 295:
					return 9087;
				
				case 296:
					return 9094;
				
				case 297:
					return 9101;
				
				case 298:
					return 9108;
				
				case 299:
					return 9115;
				
				case 300:
					return 9122;
				
				case 301:
					return 9129;
				
				case 302:
					return 9136;
				
				case 303:
					return 9143;
				
				case 307:
					return 9643;
				
				case 308:
					return 9650;
				
				case 309:
					return 9657;
				
				case 310:
					return 9664;
				
				case 311:
					return 9671;
				
				case 312:
					return 9678;
				
				case 313:
					return 9685;
				
				case 314:
					return 9692;
				
				case 315:
					return 9699;
				
				case 316:
					return 9706;
				
				case 317:
					return 9927;
				
				case 318:
					return 9934;
				
				case 319:
					return 9941;
				
				case 320:
					return 9948;
				
				case 321:
					return 9955;
				
				case 322:
					return 9962;
				
				case 323:
					return 9969;
				
				case 324:
					return 9976;
				
				case 325:
					return 9983;
				
				case 326:
					return 9990;
				
				case 327:
					return 9997;
				
				case 328:
					return 10004;
				
				case 329:
					return 10011;
				
				case 330:
					return 10018;
				
				case 331:
					return 10025;
				
				case 332:
					return 10032;
				
				case 333:
					return 10039;
				
				case 334:
					return 10046;
				
				case 335:
					return 10053;
				
				case 336:
					return 10060;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10453;
				
				case 338:
					return 10460;
				
				case 339:
					return 10467;
				
				case 340:
					return 10474;
				
				case 341:
					return 10481;
				
				case 342:
					return 10488;
				
				case 343:
					return 10495;
				
				case 344:
					return 10502;
				
				case 345:
					return 10509;
				
				case 346:
					return 10516;
				
				case 350:
					return 10541;
				
				case 351:
					return 10548;
				
				case 352:
					return 10555;
				
				case 353:
					return 10562;
				
				case 354:
					return 10569;
				
				case 355:
					return 10576;
				
				case 356:
					return 10583;
				
				case 357:
					return 10590;
				
				case 358:
					return 10597;
				
				case 359:
					return 10604;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 49:
					return 2906;
				
				case 50:
					return 2912;
				
				case 51:
					return 2918;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 62:
					return 3030;
				
				case 63:
					return 3036;
				
				case 64:
					return 3042;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case 79:
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				case 85:
					return 3403;
				
				case 86:
					return 3410;
				
				case 87:
					return 3417;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 291:
					return 9061;
				
				case 292:
					return 9067;
				
				case 293:
					return 9073;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 304:
					return 9149;
				
				case 305:
					return 9155;
				
				case 306:
					return 9161;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				case 317:
					return 9926;
				
				case 318:
					return 9933;
				
				case 319:
					return 9940;
				
				case 320:
					return 9947;
				
				case 321:
					return 9954;
				
				case 322:
					return 9961;
				
				case 323:
					return 9968;
				
				case 324:
					return 9975;
				
				case 325:
					return 9982;
				
				case 326:
					return 9989;
				
				case 327:
					return 9996;
				
				case 328:
					return 10003;
				
				case 329:
					return 10010;
				
				case 330:
					return 10017;
				
				case 331:
					return 10024;
				
				case 332:
					return 10031;
				
				case 333:
					return 10038;
				
				case 334:
					return 10045;
				
				case 335:
					return 10052;
				
				case 336:
					return 10059;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10452;
				
				case 338:
					return 10459;
				
				case 339:
					return 10466;
				
				case 340:
					return 10473;
				
				case 341:
					return 10480;
				
				case 342:
					return 10487;
				
				case 343:
					return 10494;
				
				case 344:
					return 10501;
				
				case 345:
					return 10508;
				
				case 346:
					return 10515;
				
				case 347:
					return 10522;
				
				case 348:
					return 10528;
				
				case 349:
					return 10534;
				
				case 350:
					return 10540;
				
				case 351:
					return 10547;
				
				case 352:
					return 10554;
				
				case 353:
					return 10561;
				
				case 354:
					return 10568;
				
				case 355:
					return 10575;
				
				case 356:
					return 10582;
				
				case 357:
					return 10589;
				
				case 358:
					return 10596;
				
				case 359:
					return 10603;
				
				case 360:
					return 10610;
				
				case 361:
					return 10616;
				
				case 362:
					return 10622;
				
				default:
			}
			break;
	}
	return 1630;
}

void func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9B20
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_77(int iParam0, bool bParam1)//Position - 0x9B50
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x9DF4
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_87(iParam0);
		return func_86(iVar0);
	}
	return (func_79(iParam0, -1, 1) * iParam0 + 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x9F81
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_82(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_81(iParam1))
			{
				return 0;
			}
			else if (func_80(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 <= 128 && iParam1 > 0)
			{
				if (Global_1312193[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)//Position - 0xA22B
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

int func_81(int iParam0)//Position - 0xA308
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_82(int iParam0, bool bParam1, bool bParam2)//Position - 0xA337
{
	if (bParam2)
	{
		return func_83(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_83(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1)//Position - 0xA412
{
	if (Global_1853184 != func_11())
	{
		if (!func_85(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || func_84(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_84(int iParam0)//Position - 0xA478
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

int func_85(int iParam0)//Position - 0xA49B
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

int func_86(int iParam0)//Position - 0xA4C4
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_87(int iParam0)//Position - 0xA501
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_88(int iParam0)//Position - 0xA527
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_89(int iParam0)//Position - 0xA78B
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_90(int iParam0)//Position - 0xA9EF
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_78(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_91(int iParam0)//Position - 0xAC53
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_78(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	return 0;
}

int func_92(int iParam0)//Position - 0xAEFA
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2)//Position - 0xAFC5
{
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_94(int iParam0, int iParam1)//Position - 0xAFED
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_78(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_78(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_78(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_78(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	return iVar0;
}

int func_95()//Position - 0xC665
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_96(int iParam0)//Position - 0xC672
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
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0xC6C2
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_134();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			func_132();
			func_131(iParam1, 1);
			Global_1952156 = 1;
		}
		func_101(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			func_100(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_99(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (func_98(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[func_95() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[func_95() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_73(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

bool func_98(int iParam0, var uParam1)//Position - 0xC919
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_99(int iParam0, var uParam1, var uParam2)//Position - 0xCB8C
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
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_100(int iParam0)//Position - 0xCD7F
{
	Global_2359296[func_95() /*5567*/].f_681.f_2 = iParam0;
}

void func_101(int iParam0, var uParam1, bool bParam2)//Position - 0xCD99
{
	int iVar0;
	
	func_130(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_11088)
		{
			MISC::SET_BIT(&(uParam1->f_103), 22);
		}
	}
	if (func_129(iParam0, 0))
	{
		func_128();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}
	func_104(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_103), 2);
			}
		}
	}
	if (BitTest(uParam1->f_103, 8))
	{
		if (!func_102(iParam0))
		{
		}
	}
	else if (func_102(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_103), 8);
		MISC::SET_BIT(&(uParam1->f_103), 9);
	}
}

int func_102(int iParam0)//Position - 0xCE78
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_103(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)//Position - 0xCEB0
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

void func_104(int iParam0, var uParam1)//Position - 0xCEF8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_124(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (BitTest(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_102(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_122(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_112(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_11())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_111(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_105(func_108(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_105(int iParam0)//Position - 0xD089
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_107(iParam0);
	func_106(iVar1, &iVar0);
	return iVar0;
}

bool func_106(int iParam0, int iParam1)//Position - 0xD0A4
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_107(int iParam0)//Position - 0xD366
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

int func_108(int iParam0, int iParam1, int iParam2)//Position - 0xD404
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
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_109()) && Global_1576214)
	{
		if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
		{
			return 13;
		}
	}
	return 0;
}

int func_109()//Position - 0xD5E6
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_110() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_110()//Position - 0xD62E
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_111(int iParam0)//Position - 0xD643
{
	if (Global_2815059.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0, var uParam1, var uParam2)//Position - 0xD65C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_121(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_120(iParam0);
		}
		else if (func_119(iParam0, 1))
		{
			return func_118(iParam0, 1, 0);
		}
		else if (func_117(iParam0, 1))
		{
			return func_116(iParam0, 1, 0);
		}
		else if (func_115(iParam0, 1))
		{
			*uParam1 = 2;
			return func_113(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_113(int iParam0)//Position - 0xD73D
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_114(iVar0, 0, 1, 0);
}

int func_114(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xD759
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_10(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_10(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_11();
}

int func_115(int iParam0, bool bParam1)//Position - 0xD7E4
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1, int iParam2)//Position - 0xD822
{
	int iVar0;
	
	if (!func_117(iParam0, 1))
	{
		return func_11();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_114(iVar0, 0, bParam1, iParam2);
	}
	return func_11();
}

int func_117(int iParam0, bool bParam1)//Position - 0xD862
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_118(int iParam0, bool bParam1, int iParam2)//Position - 0xD8A0
{
	int iVar0;
	
	if (!func_119(iParam0, 1))
	{
		return func_11();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_114(iVar0, 0, bParam1, iParam2);
	}
	return func_11();
}

int func_119(int iParam0, bool bParam1)//Position - 0xD8E0
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0xD91E
{
	int iVar0;
	
	if (!func_121(iParam0, 1))
	{
		return func_11();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_114(iVar0, 0, 1, 0);
}

int func_121(int iParam0, bool bParam1)//Position - 0xD94B
{
	if (Global_78319)
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

int func_122(int iParam0)//Position - 0xD988
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
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577911));
			iVar3 = 20000;
			if (Global_1836584)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_123(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_123(int iParam0)//Position - 0xDA15
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

void func_124(int iParam0, var uParam1)//Position - 0xDA71
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_127(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_126(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_99(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_125(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_125(int iParam0)//Position - 0xDD1A
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

int func_126(int iParam0)//Position - 0xDDCA
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

void func_127(var uParam0)//Position - 0xDDEA
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_128()//Position - 0xDE9A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 3))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_129(int iParam0, int iParam1)//Position - 0xDED4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_130(var uParam0)//Position - 0xDF33
{
	func_127(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_131(int iParam0, bool bParam1)//Position - 0xDFC3
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_131(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		func_25(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

void func_132()//Position - 0xE07D
{
	func_133(10);
}

void func_133(int iParam0)//Position - 0xE08B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836751.f_4[iVar0]), iVar1);
}

void func_134()//Position - 0xE0B1
{
	Global_2703735.f_61.f_65 = 0;
	func_135(25);
	func_135(24);
}

void func_135(bool bParam0)//Position - 0xE0CE
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

void func_136(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE11E
{
	if (func_140() < 0 && Global_1958535)
	{
		return;
	}
	if (func_139(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_138(2);
	}
	else
	{
		func_138(1);
	}
	if (bParam1)
	{
		func_138(11);
	}
	if (bParam2)
	{
		func_138(32);
		if (bParam3)
		{
			if (func_140() >= 0 && BitTest(Global_1585857[func_140() /*142*/].f_103, 0))
			{
				func_138(33);
			}
		}
		else
		{
			func_135(33);
		}
		if (func_140() >= 0)
		{
			if (func_137(Global_1585857[func_140() /*142*/].f_66))
			{
				func_138(40);
			}
		}
	}
	else if (bParam5)
	{
		func_138(37);
	}
	if (bParam4)
	{
		func_138(36);
	}
	if (func_139(36))
	{
		if (func_139(2))
		{
			func_135(36);
		}
	}
	if (bParam6)
	{
		func_138(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_137(int iParam0)//Position - 0xE246
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_138(bool bParam0)//Position - 0xE25D
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

bool func_139(int iParam0)//Position - 0xE2AF
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

int func_140()//Position - 0xE2DD
{
	if (Global_2359296[func_95() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[func_95() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_95() /*5567*/].f_681.f_2;
}

void func_141(int iParam0, int iParam1, int iParam2)//Position - 0xE320
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_142(iParam0, iParam1, iParam2);
	if (iParam0 >= 363)
	{
		return;
	}
	if (iParam2 == func_37() || iParam2 == -1)
	{
		Global_1940666[iParam0] = iParam1;
	}
}

void func_142(int iParam0, int iParam1, int iParam2)//Position - 0xE36A
{
	if (iParam1 <= 255)
	{
		func_93(func_144(iParam0), iParam1, iParam2);
		func_93(func_143(iParam0), 0, iParam2);
	}
	else
	{
		func_93(func_144(iParam0), 255, iParam2);
		func_93(func_143(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_143(int iParam0)//Position - 0xE3B6
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	return (24625 + iParam0);
}

int func_144(int iParam0)//Position - 0xE467
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	return (4036 + iParam0);
}

bool func_145(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xE5EE
{
	int iVar0;
	int iVar1;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_206() && Global_1964691)
			{
				return 0;
			}
			iVar0 = func_205(iParam1);
			iVar1 = func_202(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (func_198(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_198(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_153(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_148())
			{
			}
			else
			{
				*uParam2 = 3;
				func_17(func_21());
			}
			break;
		
		case 1:
			if (func_21() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_147(func_21()))
			{
				if (func_146(func_21()) == 2)
				{
					*uParam2 = 2;
					func_17(func_21());
				}
				else
				{
					*uParam2 = 3;
					func_17(func_21());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_146(int iParam0)//Position - 0xE73E
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_147(int iParam0)//Position - 0xE767
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_148()//Position - 0xE792
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_23())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_21();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_37()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_152(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_22(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_149(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_149(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xE8F2
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_151(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_150();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_150()//Position - 0xE984
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_151(int iParam0)//Position - 0xE993
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0xE9AB
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_153(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0xEF93
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_197(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_196(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_192(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_189(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_190(iVar0)))
			{
				return 0;
			}
			if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_189(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_190(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = func_187(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_185(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_181(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_180(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_179(iParam1);
		if (bVar11)
		{
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_177(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_177(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_176(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_174(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_175(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_173(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_173(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_171(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_178(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_178(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_178(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_178(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_178(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_192(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_170(iVar9);
		if (!func_178(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_169(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_189(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_190(iVar0)))
		{
			return 0;
		}
		if (!func_191(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_189(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_190(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_166(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_165(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_164(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_163(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_162(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_108(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_162(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_178(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_161(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_178(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar14, func_161(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_160(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_159(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_158(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_157(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_106(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_156(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_157(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_155(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_154(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_154(int iParam0, char* sParam1)//Position - 0xFE94
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_155(int iParam0, char* sParam1, int iParam2)//Position - 0xFEF1
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_156(int iParam0)//Position - 0xFFE7
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_157(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1031B
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_158(int iParam0)//Position - 0x103BC
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_159(int iParam0, var uParam1)//Position - 0x1080E
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_160(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x10BD7
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_161(int iParam0)//Position - 0x10C4E
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_162(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x10C6B
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x10D0A
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10DCF
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_165(int iParam0)//Position - 0x10E65
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("CONADA"):
			return 1;
		
		default:
	}
	return 0;
}

int func_166(int iParam0, int iParam1, int iParam2)//Position - 0x10FAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_168())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_167())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_167()//Position - 0x111D9
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_168()//Position - 0x111EA
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_169(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x111FB
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_170(int iParam0)//Position - 0x126ED
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_171(int iParam0, char* sParam1, int iParam2)//Position - 0x1290E
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_172(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_172(int iParam0)//Position - 0x12967
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
		
		case 12:
			StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x12A88
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_174(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x12B50
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_175(var uParam0)//Position - 0x12BCF
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_176(int iParam0)//Position - 0x12E9B
{
	switch (iParam0)
	{
		case joaat("indep_horn_1"):
			return 1;
			break;
		
		case joaat("indep_horn_2"):
			return 2;
			break;
		
		case joaat("indep_horn_3"):
			return 3;
			break;
		
		case joaat("indep_horn_4"):
			return 4;
			break;
		
		case joaat("hipster_horn_1"):
			return 5;
			break;
		
		case joaat("hipster_horn_2"):
			return 6;
			break;
		
		case joaat("hipster_horn_3"):
			return 7;
			break;
		
		case joaat("hipster_horn_4"):
			return 8;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c0"):
			return 9;
			break;
		
		case joaat("dlc_busi2_c_major_notes_d0"):
			return 10;
			break;
		
		case joaat("dlc_busi2_c_major_notes_e0"):
			return 11;
			break;
		
		case joaat("dlc_busi2_c_major_notes_f0"):
			return 12;
			break;
		
		case joaat("dlc_busi2_c_major_notes_g0"):
			return 13;
			break;
		
		case joaat("dlc_busi2_c_major_notes_a0"):
			return 14;
			break;
		
		case joaat("dlc_busi2_c_major_notes_b0"):
			return 15;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c1"):
			return 16;
			break;
		
		case joaat("musical_horn_business_1"):
			return 17;
			break;
		
		case joaat("musical_horn_business_2"):
			return 18;
			break;
		
		case joaat("musical_horn_business_3"):
			return 19;
			break;
		
		case joaat("musical_horn_business_4"):
			return 20;
			break;
		
		case joaat("musical_horn_business_5"):
			return 21;
			break;
		
		case joaat("musical_horn_business_6"):
			return 22;
			break;
		
		case joaat("musical_horn_business_7"):
			return 23;
			break;
		
		case joaat("luxe_horn_2"):
			return 24;
			break;
		
		case joaat("luxe_horn_1"):
			return 25;
			break;
		
		case joaat("luxe_horn_3"):
			return 26;
			break;
		
		case joaat("luxury_horn_2"):
			return 27;
			break;
		
		case joaat("luxory_horn_1"):
			return 28;
			break;
		
		case joaat("luxury_horn_3"):
			return 29;
			break;
		
		case joaat("LOWRIDER_HORN_1"):
			return 30;
			break;
		
		case joaat("LOWRIDER_HORN_2"):
			return 31;
			break;
		
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return 32;
			break;
		
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return 33;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01"):
			return 34;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02"):
			return 35;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return 36;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return 37;
			break;
		
		case joaat("XM15_HORN_01"):
			return 38;
			break;
		
		case joaat("XM15_HORN_02"):
			return 39;
			break;
		
		case joaat("XM15_HORN_03"):
			return 40;
			break;
		
		case joaat("XM15_HORN_01_PREVIEW"):
			return 41;
			break;
		
		case joaat("XM15_HORN_02_PREVIEW"):
			return 42;
			break;
		
		case joaat("XM15_HORN_03_PREVIEW"):
			return 43;
			break;
		
		case joaat("HORN_CLOWN"):
			return 46;
			break;
		
		case joaat("HORN_COP"):
			return 45;
			break;
		
		case joaat("HORN_TRUCK"):
			return 44;
			break;
		
		case joaat("HORN_MUSICAL_1"):
			return 47;
			break;
		
		case joaat("HORN_MUSICAL_2"):
			return 48;
			break;
		
		case joaat("HORN_MUSICAL_3"):
			return 49;
			break;
		
		case joaat("HORN_MUSICAL_4"):
			return 50;
			break;
		
		case joaat("HORN_MUSICAL_5"):
			return 51;
			break;
		
		case joaat("HORN_SAD_TROMBONE"):
			return 52;
			break;
		
		case joaat("dlc_aw_airhorn_01"):
			return 53;
			break;
		
		case joaat("dlc_aw_airhorn_02"):
			return 54;
			break;
		
		case joaat("dlc_aw_airhorn_03"):
			return 55;
			break;
		
		case joaat("dlc_aw_airhorn_01_preview"):
			return 56;
			break;
		
		case joaat("dlc_aw_airhorn_02_preview"):
			return 57;
			break;
		
		case joaat("dlc_aw_airhorn_03_preview"):
			return 58;
			break;
	}
	return 0;
}

int func_177(bool bParam0)//Position - 0x131D0
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x131E2
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !BitTest(Global_4539663[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_179(int iParam0)//Position - 0x132D5
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_180(int iParam0)//Position - 0x13317
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_197(iParam0);
}

int func_181(int iParam0)//Position - 0x13354
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_184(iParam0))
	{
		return 33;
	}
	else if (func_183(iParam0))
	{
		return 34;
	}
	if (func_182(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_182(int iParam0)//Position - 0x13526
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x13612
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
			break;
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x13659
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
			return 1;
			break;
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x136E8
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_182(iParam0))
	{
		return 38;
	}
	if (func_186(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_186(int iParam0)//Position - 0x1385D
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("GREENWOOD"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x138A4
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_184(iParam0))
	{
		return 33;
	}
	else if (func_183(iParam0))
	{
		return 34;
	}
	else if (func_182(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_186(iParam0))
	{
		return 38;
	}
	if (func_188(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return 3;
			break;
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x14B8A
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("BRIOSO3"):
		case joaat("CORSITA"):
		case joaat("DRAUGUR"):
		case joaat("GREENWOOD"):
		case joaat("KANJOSJ"):
		case joaat("LM87"):
		case joaat("POSTLUDE"):
		case joaat("RHINEHART"):
		case joaat("SM722"):
		case joaat("TENF"):
		case joaat("TENF2"):
		case joaat("TORERO2"):
		case joaat("VIGERO2"):
		case joaat("WEEVIL2"):
		case joaat("RUINER4"):
		case joaat("SENTINEL4"):
		case joaat("CONADA"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0, char* sParam1, int iParam2)//Position - 0x154F5
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_190(int iParam0)//Position - 0x15542
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_191(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x155F0
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 7)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 7)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_198(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_192(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)//Position - 0x15727
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_193(iVar3))
			{
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
					if (iVar6 == *iParam3)
					{
						*iParam1 = iVar3;
						StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 7;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 7;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_193(iVar3))
			{
				iVar4 = 0;
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
					if (iVar7 == *iParam6)
					{
						*iParam4 = iVar3;
						StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 7;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_193(int iParam0)//Position - 0x15927
{
	if (!func_195() && func_194(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x15947
{
	switch (iParam0)
	{
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_195()//Position - 0x15964
{
	return 0;
}

int func_196(int iParam0)//Position - 0x1596D
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x159D9
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("seasparrow2"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("sultan3"):
		case joaat("buffalo4"):
		case joaat("deity"):
		case joaat("jubilee"):
		case joaat("granger2"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("WEEVIL2"):
		case joaat("TENF2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			return 3;
			break;
	}
	if (func_182(iParam0))
	{
		return 3;
	}
	if (func_186(iParam0))
	{
		return 3;
	}
	return func_187(iParam0);
}

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x15CC7
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_23())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_37()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_21();
	if (iVar1 == -1)
	{
		if (!func_200(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_199(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0)//Position - 0x15DE9
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_200(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x15E78
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_23())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_37()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_201(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_201(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x15F75
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_23())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = uParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_149(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x160B2
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_187(iParam0);
	StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
	if (bParam1)
	{
		func_203(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_203(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return MISC::GET_HASH_KEY(&sVar2);
}

void func_203(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x16106
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
			else if (iParam4 == func_204())
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

int func_204()//Position - 0x166F2
{
	return joaat("kosatka");
}

int func_205(int iParam0)//Position - 0x166FF
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_206()//Position - 0x167E9
{
	if (((func_21() == -1 && Global_2787732 == -1) && Global_2787713 == -1) && Global_2787714 != 2)
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x16820
{
	if (func_208(iParam0))
	{
		return BitTest(Global_1585857[iParam0 /*142*/].f_103, 6);
	}
	return 0;
}

int func_208(int iParam0)//Position - 0x16844
{
	int iVar0;
	
	func_210(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 363) && !func_209(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)//Position - 0x16877
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

void func_210(int iParam0, var uParam1)//Position - 0x16942
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 363)
		{
			if (iParam0 == (Global_1940666[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_211()//Position - 0x1697F
{
	return Global_2703735.f_61.f_49;
}

int func_212(int iParam0)//Position - 0x1698F
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_213()//Position - 0x169D6
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_214()//Position - 0x169F5
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_215(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x16A0A
{
	bool bVar0;
	bool bVar1;
	
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_10(PLAYER::PLAYER_ID(), 1, 1)) || func_348()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		func_345(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_344();
	func_343();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, true);
		PAD::ENABLE_CONTROL_ACTION(2, 238, true);
		PAD::ENABLE_CONTROL_ACTION(2, 242, true);
		PAD::ENABLE_CONTROL_ACTION(2, 241, true);
		PAD::DISABLE_CONTROL_ACTION(2, 2, true);
		PAD::DISABLE_CONTROL_ACTION(2, 1, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_340(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (func_338(0, iParam5, 0))
	{
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_282(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				func_273(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_232(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_231(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (func_230())
					{
						if (uParam0->f_366 == 0)
						{
							if (Global_4539961 != uParam0->f_367)
							{
								uParam0->f_367 = Global_4539961;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4539961 != uParam0->f_368)
						{
							uParam0->f_368 = Global_4539961;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!BitTest(uParam0->f_373, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_229()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = func_349(1, 0, iParam3, func_224(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_223(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_357(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									func_345(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_367 < 0)
							{
							}
							if (uParam0->f_367 < 0)
							{
								uParam0->f_375 = 0;
							}
							else
							{
								uParam0->f_375 = uParam0->f_1[uParam0->f_367];
							}
							uParam0->f_366 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							bVar1 = true;
						}
						else if (!BitTest(uParam0->f_373, 2) && !BitTest(uParam0->f_365, uParam0->f_368))
						{
							func_221(-1);
							func_220(176, "BB_YES", -1);
							func_220(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							func_223(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_357(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								func_345(uParam0, iParam5, 0);
							}
							else
							{
								func_345(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_373), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 0);
				}
				if (!BitTest(uParam0->f_373, 1))
				{
					if ((((func_219() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (func_213() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							func_273(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_232(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_345(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_370), 7);
							return 1;
						}
						else if (!BitTest(uParam0->f_373, 2))
						{
							uParam0->f_366 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							func_221(-1);
							func_220(176, "BB_SELECT", -1);
							func_220(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !func_219())
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 1);
				}
				if (!BitTest(uParam0->f_373, 2))
				{
					if (!BitTest(uParam0->f_373, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367 = (uParam0->f_367 - 1);
							}
							else
							{
								uParam0->f_368 = (uParam0->f_368 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 4);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							func_25(&(uParam0->f_371));
						}
					}
					else if (func_216(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 4);
					}
					if (!BitTest(uParam0->f_373, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367++;
							}
							else
							{
								uParam0->f_368++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 5);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							func_25(&(uParam0->f_371));
						}
					}
					else if (func_216(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 5);
					}
				}
				if (uParam0->f_366 == 0)
				{
					if (uParam0->f_367 >= uParam0->f_369)
					{
						uParam0->f_367 = 0;
					}
					if (uParam0->f_367 < 0)
					{
						uParam0->f_367 = (uParam0->f_369 - 1);
					}
				}
				else
				{
					if (uParam0->f_368 >= uParam0->f_369)
					{
						uParam0->f_368 = 0;
					}
					if (uParam0->f_368 < 0)
					{
						uParam0->f_368 = (uParam0->f_369 - 1);
					}
				}
				func_273(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_232(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_216(var uParam0, int iParam1)//Position - 0x1712F
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_217(&(uParam0->f_371), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_217(var uParam0, int iParam1, bool bParam2)//Position - 0x17166
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_218(uParam0, bParam2, 0);
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

void func_218(var uParam0, bool bParam1, bool bParam2)//Position - 0x171C4
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

int func_219()//Position - 0x17209
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_220(int iParam0, char* sParam1, int iParam2)//Position - 0x1725D
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_221(int iParam0)//Position - 0x1730C
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_222(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23150.f_6051[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_222(var uParam0, bool bParam1, int iParam2)//Position - 0x173C5
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_223(int iParam0, int iParam1, bool bParam2)//Position - 0x17462
{
	if (Global_262145.f_10629)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1940666[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_224(int iParam0, int iParam1)//Position - 0x174A2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_37();
	}
	if (iParam0 == 7 && !Global_262145.f_17499)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_87(iParam0);
		if (iVar1 == 0 && func_228(5396, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_227(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_226(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_225(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1659765[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2869950[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 29)
		{
			return 0;
		}
		return Global_2869777[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_225(int iParam0)//Position - 0x17594
{
	return func_228(9517, iParam0, 0) != 0;
}

int func_226(int iParam0)//Position - 0x175A8
{
	if (iParam0 != func_11())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

bool func_227(int iParam0)//Position - 0x175CE
{
	if (!Global_262145.f_24199)
	{
		return 0;
	}
	return func_228(7210, iParam0, 0) != 0;
}

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0x175F1
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_50(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_229()//Position - 0x1762E
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_230()//Position - 0x17682
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_231(int iParam0, int iParam1)//Position - 0x176A9
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_232(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x176E1
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_222(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_271(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_269(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_267(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_263(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_262(29), 64);
					StringCopy(&cVar62, func_259(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_258(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_258(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) != 0)
				{
					func_257();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_257();
					func_255((((Global_23147 + fParam5) - 0.00390625f) - func_256("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_257();
						func_255((((Global_23147 + fParam5) - 0.00390625f) - func_256("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_258(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_269(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_254(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_258(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_254(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_269(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_253(Global_23150.f_5159, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_5159), func_259(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_269(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_254(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_258(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_254(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_269(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_253(Global_4539885.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_262(Global_4539885.f_67), func_259(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_248(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23150.f_8800)
					{
						HUD::GET_HUD_COLOUR(Global_23150.f_8799, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_269(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_269(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_269(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(26), func_259(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_269(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_269(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(27), func_259(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_245(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_269(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_269(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_253(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[(iVar22 + iVar28)]), func_259(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[(iVar22 + iVar28)]), func_259(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_244() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_246(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar75), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23150.f_6129 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_269(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_269(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_253(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[(iVar22 + iVar14)]), func_259(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[(iVar22 + iVar14)]), func_259(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[(iVar22 + iVar14)]), func_259(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_245(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_269(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_269(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(26), func_259(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_269(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_269(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(27), func_259(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_243((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_245(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_269(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_269(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(26), func_259(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_269(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_269(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_262(27), func_259(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									func_246(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_242((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_269(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_269(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_269(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_253(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_262(26), func_259(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
											if (func_269(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_269(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_253(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_262(27), func_259(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_269(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_253(Global_23150.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_262(Global_23150.f_4824[iVar22]), func_259(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_241(Global_23150.f_4824[iVar22])), (fVar37 * func_241(Global_23150.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_269(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_234(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_233(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_233(int iParam0)//Position - 0x1A454
{
	Global_1649593.f_1163 = iParam0;
}

void func_234(int iParam0)//Position - 0x1A465
{
	if (func_240())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_239(0))
		{
			func_235(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_235(int iParam0)//Position - 0x1A498
{
	if (func_240())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_238())
		{
			func_237(1, 1);
		}
		else
		{
			func_237(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_236())
	{
		Global_20266.f_1 = 3;
	}
}

int func_236()//Position - 0x1A522
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_237(bool bParam0, bool bParam1)//Position - 0x1A549
{
	if (bParam0)
	{
		if (func_239(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

bool func_238()//Position - 0x1A5BD
{
	return BitTest(Global_1958711, 5);
}

int func_239(int iParam0)//Position - 0x1A5CB
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

bool func_240()//Position - 0x1A622
{
	return BitTest(Global_1958711, 19);
}

float func_241(int iParam0)//Position - 0x1A631
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_242(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1A6A0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_243(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1A6BF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_244()//Position - 0x1A6DD
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_245(bool bParam0)//Position - 0x1A6EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_246(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1A734
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_247(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_247(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1A8E2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_248(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1AB6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_222(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_271(bParam4, bParam8))
	{
		return;
	}
	if (func_251())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_35(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23150.f_5472 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_250(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_250(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_249(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5417[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5160);
				func_250(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_249(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
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
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
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
			if (!Global_23150.f_8808)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23150.f_8808 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23150.f_5446)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_249(char* sParam0)//Position - 0x1B070
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_250(char* sParam0)//Position - 0x1B082
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_251()//Position - 0x1B090
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_252())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20211 == 0)
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

int func_252()//Position - 0x1B0FE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_253(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x1B118
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_254(float fParam0)//Position - 0x1B22D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_255(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1B28C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_256(char* sParam0, int iParam1, int iParam2)//Position - 0x1B2AF
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_257();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_257()//Position - 0x1B2F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_258(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1B37B
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_259(int iParam0, bool bParam1)//Position - 0x1B3AA
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_261(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_260(&uVar1);
			}
		}
		else
		{
			return func_260(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_260(var uParam0)//Position - 0x1B8D2
{
	return uParam0;
}

struct<13> func_261(int iParam0)//Position - 0x1B8DC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_262(int iParam0)//Position - 0x1B8F3
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_261(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_260(&uVar0);
		}
		else
		{
			return func_260(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_263(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x1B968
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_266(Global_23150.f_5609, 1);
	}
	else
	{
		func_266(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_265(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_269(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_264(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_264(char* sParam0)//Position - 0x1BB84
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_265(char* sParam0)//Position - 0x1BBA0
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_246(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_266(int iParam0, bool bParam1)//Position - 0x1BBDD
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_267(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x1BC29
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (func_268(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_268(int iParam0, int iParam1)//Position - 0x1BCB1
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_269(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x1BCCC
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_262(iParam0), 64);
	StringCopy(&cVar1, func_259(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_267(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		fVar6 = (func_270(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_270(int iParam0)//Position - 0x1BDF8
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_271(bool bParam0, bool bParam1)//Position - 0x1BECC
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_231(8, -1) && func_272() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78579) || Global_23150.f_8807) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_272()//Position - 0x1BF69
{
	return Global_1574991;
}

void func_273(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1BF75
{
	if (!bParam2)
	{
		if (uParam0->f_366 == 0)
		{
			if (uParam0->f_1[uParam0->f_367] == 12)
			{
				if (!bParam4)
				{
					func_281("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_281("CAS_VEH_SELLV", 0, 0);
					func_280(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_281("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_281("CAS_VEH_SELLV", 0, 0);
				func_280(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (BitTest(uParam0->f_373, 2))
		{
			if (func_274(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (BitTest(uParam0->f_365, uParam0->f_368))
		{
			if (func_274(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				func_281("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_281("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_274(uParam0->f_1[uParam0->f_367], 0, -1, 0))
			{
				func_281("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_281("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_274(uParam0->f_1[uParam0->f_367], 0, -1, 1))
		{
			func_281("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_281("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_274(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1C0E6
{
	int iVar0;
	
	if (bParam1)
	{
		func_277(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_210(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_275(12) && iVar0 < func_78(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_275(int iParam0)//Position - 0x1C132
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
		
		case 27:
			return 337;
			break;
		
		case 28:
			return 350;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_87(iParam0);
		return func_276(iVar0);
	}
	return (func_79(iParam0, -1, 1) * iParam0);
}

int func_276(int iParam0)//Position - 0x1C2BC
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

void func_277(int iParam0, var uParam1, int iParam2)//Position - 0x1C2F9
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (iParam0 == (func_278(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_278(int iParam0, int iParam1)//Position - 0x1C330
{
	int iVar0;
	
	iVar0 = func_279(func_144(iParam0), iParam1);
	iVar0 = (iVar0 + func_279(func_143(iParam0), iParam1));
	return iVar0;
}

int func_279(int iParam0, int iParam1)//Position - 0x1C359
{
	if (iParam1 == -1)
	{
		iParam1 = func_37();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

void func_280(char* sParam0)//Position - 0x1C375
{
	if (Global_23150.f_5156 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 1;
	Global_23150.f_5153++;
	StringCopy(&(Global_23150.f_5104[Global_23150.f_5156 /*16*/]), sParam0, 64);
	Global_23150.f_5156++;
}

void func_281(char* sParam0, int iParam1, int iParam2)//Position - 0x1C3D6
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = MISC::GET_GAME_TIMER();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_282(var uParam0, int iParam1, bool bParam2)//Position - 0x1C43B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	
	iVar0 = 0;
	func_337(0, 0);
	if (bParam2)
	{
		func_332(func_336(), 0);
	}
	func_331(1, 1, 0, 0, 0);
	func_330(1, 2, 1, 1, 1);
	func_329(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = func_196(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			func_328("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = func_224(iVar1, -1);
				if ((iVar3 > 0 && func_327(iVar3)) && func_319(iVar1))
				{
					if (!func_317(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, func_315(func_316(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, func_313(func_314(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, func_312(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, func_312(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, func_312(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, func_311(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, func_311(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, func_311(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME", 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR", 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME", 16);
						}
						if (!func_310())
						{
							if (!func_309() && !func_308(iVar3))
							{
								func_263(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								func_263(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							func_263(iVar0, "PIM_DNAME", 1, 1, 0, 0, 0);
							func_307(HUD::_GET_LABEL_TEXT(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_228(5396, -1, 0) != 0 && func_279(15270, -1) == 7) && !Global_262145.f_21126) && func_297(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_263(iVar0, func_296(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_295(0);
				iVar0++;
			}
			if (func_227(-1) && func_297(iParam1, 223))
			{
				func_263(iVar0, func_296(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_295(2);
				iVar0++;
			}
			if (func_225(-1) && func_297(iParam1, 278))
			{
				func_263(iVar0, func_296(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_295(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			func_294(uParam0->f_367, 1, 1);
			break;
		
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_328("DEL_VEH_SEL3ac");
			}
			else
			{
				func_328("DEL_VEH_SEL3");
			}
			uParam0->f_365 = 0;
			iVar4 = func_275(uParam0->f_375);
			iVar5 = (10 + func_275(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = func_87(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < func_293(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (func_209(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!func_209(iVar8))
					{
						bVar2 = true;
					}
					if (!func_297(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_223(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_292(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_288(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_263(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_196(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_284(&Var13, 0, 0, 1);
										}
										if (func_292(&(Global_1585857[iVar9 /*142*/])))
										{
											func_287("VEH_LIVERY", 0);
										}
										if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_287("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_284(&Var13, 0, 0, 1);
										}
										if (func_292(&(Global_1585857[iVar9 /*142*/])))
										{
											func_287("VEH_LIVERY", 0);
										}
										if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_287("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_196(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_263(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_224(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < func_79(uParam0->f_375, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && func_209(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_283(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!func_297(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_223(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_292(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_288(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_263(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_196(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_284(&Var13, 0, 0, 1);
										}
										if (func_292(&(Global_1585857[iVar9 /*142*/])))
										{
											func_287("VEH_LIVERY", 0);
										}
										if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_287("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_284(&Var13, 0, 0, 1);
										}
										if (func_292(&(Global_1585857[iVar9 /*142*/])))
										{
											func_287("VEH_LIVERY", 0);
										}
										if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_287("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_196(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_263(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_287(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_284(&Var13, 0, 0, 1);
									}
									if (func_292(&(Global_1585857[iVar9 /*142*/])))
									{
										func_287("VEH_LIVERY", 0);
									}
									if (func_291(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_290(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_287("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_263(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_369 = iVar0;
			if (uParam0->f_368 >= uParam0->f_369)
			{
				uParam0->f_368 = 0;
			}
			func_294(uParam0->f_368, 1, 1);
			break;
	}
	func_221(-1);
	func_220(176, "BB_SELECT", -1);
	func_220(177, "BB_BACK", -1);
}

int func_283(int iParam0, int iParam1, int iParam2)//Position - 0x1D2BD
{
	if ((iParam1 > 0 && iParam1 <= 128) && func_327(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_275(iParam2)) >= 0 && (iParam0 - func_275(iParam2)) < Global_1312193[iParam1 /*1951*/].f_33) && iParam0 < 363)
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_275(iParam2)))
			{
				return 1;
			}
			if ((Global_1312193[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_275(iParam2))) && iParam0 <= (11 + func_275(iParam2)))
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_80(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_275(iParam2)) && iParam0 <= (12 + func_275(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_275(iParam2)) && iParam0 < func_78(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 25)
			{
				if (iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 26)
			{
				if (iParam0 >= func_275(iParam2) && iParam0 < func_78(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_284(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1D5F8
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5612 >= 40)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_2725950[Global_23150.f_5612 /*16*/]), sParam0, 64);
	Global_23150.f_5612++;
	if (bParam3)
	{
		Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 9;
	}
	else
	{
		Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 7;
	}
	Global_23150.f_6134++;
	fVar0 = func_286();
	if (bParam2)
	{
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_286();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_269(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_285();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

float func_285()//Position - 0x1D75D
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_269(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_286()//Position - 0x1D810
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_246(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_269(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_287(char* sParam0, bool bParam1)//Position - 0x1DC57
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam0, 24);
	Global_23150.f_5611++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 1;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_286();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_269(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_285();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

struct<16> func_288(int iParam0, int iParam1, bool bParam2)//Position - 0x1DD93
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_289(iParam1) != -1)
		{
			Var0 = { Global_2359296[func_95() /*5567*/].f_7.f_105[func_289(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2359296[func_95() /*5567*/].f_7.f_105[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_289(int iParam0)//Position - 0x1DE0B
{
	int iVar0;
	
	func_210(Global_4282954, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_348())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_290(int iParam0)//Position - 0x1DE7A
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_291(int iParam0, var uParam1, int iParam2)//Position - 0x1DE9D
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!BitTest(uParam1, 1) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!BitTest(uParam1, 1) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("coquette"):
			if (!BitTest(uParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("mamba"):
			if (!BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("pfister811"):
			if (!BitTest(uParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("contender"):
		case joaat("kamacho"):
			if (!BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("manana2"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_292(var uParam0)//Position - 0x1DFE1
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_293(int iParam0)//Position - 0x1E008
{
	return (func_86(iParam0) - func_276(iParam0));
}

void func_294(var uParam0, bool bParam1, int iParam2)//Position - 0x1E01D
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = uParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_295(int iParam0)//Position - 0x1E16D
{
	return (1000 + iParam0);
}

char* func_296(int iParam0)//Position - 0x1E17B
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		case 3:
			return "MP_BHUB_SUB";
		
		default:
	}
	return "";
}

int func_297(int iParam0, int iParam1)//Position - 0x1E1C1
{
	if (!func_306(iParam1) && !func_212(iParam0))
	{
		if (func_305(iParam0, 0))
		{
			if (iParam1 == func_304(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_303(iParam1))
		{
			return 0;
		}
	}
	if (func_196(iParam0))
	{
		if (!func_209(iParam1))
		{
			return 0;
		}
	}
	else if (func_209(iParam1))
	{
		return 0;
	}
	if (func_302(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_306(iParam1))
	{
		if (!func_212(iParam0))
		{
			return 0;
		}
		else if ((func_301(iParam0) + func_275(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_300(iParam1))
	{
		if (!func_165(iParam0))
		{
			return 0;
		}
	}
	else if (func_165(iParam0))
	{
		return 0;
	}
	if (!func_299(iParam1, 1))
	{
		if (func_298(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam1 == 278 && iParam0 != joaat("toreador")) && iParam0 != joaat("stromberg"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_298(int iParam0)//Position - 0x1E377
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_299(int iParam0, bool bParam1)//Position - 0x1E3C4
{
	if (iParam0 >= func_275(18) && iParam0 < func_78(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_300(int iParam0)//Position - 0x1E413
{
	if (iParam0 >= func_275(12) && iParam0 < func_78(12))
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0)//Position - 0x1E43A
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_302(int iParam0)//Position - 0x1E4C3
{
	if (iParam0 >= func_275(6) && iParam0 < func_78(6))
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0)//Position - 0x1E4E8
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_275(11) && iParam0 < func_78(11))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)//Position - 0x1E56B
{
	if (func_212(iParam0))
	{
		return (func_301(iParam0) + func_275(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
		if (iParam0 == joaat("minitank"))
		{
			return 279;
		}
	}
	return -1;
}

int func_305(int iParam0, bool bParam1)//Position - 0x1E664
{
	if (func_212(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x1E6E9
{
	if (iParam0 >= func_275(11) && iParam0 < func_78(11))
	{
		return 1;
	}
	return 0;
}

void func_307(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1E710
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23150.f_5612 >= 40)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_2725950[Global_23150.f_5612 /*16*/]), sParam0, 64);
	Global_23150.f_5612++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 5;
	Global_23150.f_6134++;
	fVar0 = 0f;
	if (bParam3)
	{
		fVar0 = func_286();
	}
	if (bParam2)
	{
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_286();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_269(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_285();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

int func_308(int iParam0)//Position - 0x1E85D
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_309()//Position - 0x1E888
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_310()//Position - 0x1E8AA
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_311(int iParam0)//Position - 0x1E8CC
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_312(int iParam0)//Position - 0x1E90E
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_313(int iParam0)//Position - 0x1E950
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_314(int iParam0)//Position - 0x1E9F2
{
	if (iParam0 != func_11())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285;
	}
	return 0;
}

char* func_315(int iParam0)//Position - 0x1EA16
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_316(int iParam0)//Position - 0x1EA78
{
	if (iParam0 != func_11())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278;
	}
	return 0;
}

int func_317(int iParam0, int iParam1)//Position - 0x1EA9C
{
	int iVar0;
	
	if (iParam0 == joaat("minitank"))
	{
		return 0;
	}
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_212(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_165(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_318())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 25) || iParam1 == 26)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_301(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_318()//Position - 0x1ED92
{
	return joaat("terbyte");
}

int func_319(int iParam0)//Position - 0x1ED9F
{
	if (iParam0 == 22)
	{
		if (!func_322())
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (!func_320(1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_320(bool bParam0)//Position - 0x1EDD2
{
	if (bParam0)
	{
		return BitTest(func_228(9618, -1, 0), 0);
	}
	return func_321(PLAYER::PLAYER_ID());
}

int func_321(int iParam0)//Position - 0x1EDF5
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_228(9618, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 0);
	}
	return 0;
}

bool func_322()//Position - 0x1EE2A
{
	return (func_325(0) && func_323(0));
}

int func_323(bool bParam0)//Position - 0x1EE41
{
	if (bParam0)
	{
		return BitTest(func_228(8726, -1, 0), 4);
	}
	return func_324(PLAYER::PLAYER_ID());
}

int func_324(int iParam0)//Position - 0x1EE64
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_228(8726, -1, 0), 4);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_325(bool bParam0)//Position - 0x1EE99
{
	if (bParam0)
	{
		return func_326(27227, -1);
	}
	if (PLAYER::PLAYER_ID() != func_11())
	{
		return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 2);
	}
	return 0;
}

bool func_326(int iParam0, int iParam1)//Position - 0x1EED5
{
	if (iParam1 == -1)
	{
		iParam1 = func_37();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_327(int iParam0)//Position - 0x1EEF1
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_328(char* sParam0)//Position - 0x1EF26
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EF71
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EFB0
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_331(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EFEF
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_332(int iParam0, int iParam1)//Position - 0x1F099
{
	char* sVar0;
	
	sVar0 = func_335(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_333(1, sVar0, sVar0);
	}
}

void func_333(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F0BE
{
	Global_23150 = iParam0;
	func_334(29, sParam1, sParam2);
}

void func_334(int iParam0, char* sParam1, char* sParam2)//Position - 0x1F0D5
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

char* func_335(int iParam0, int iParam1)//Position - 0x1F0F9
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
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
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
				
				case 18:
					return "ShopUI_Title_Los_Santos_Car_Meet";
					break;
				
				case 19:
					return "ShopUI_Title_Auto_Shop";
				
				case 20:
					return "SHOP_BANNER_CLINTON_PARTNER";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
		case 51:
			return "ShopUI_Title_Casino";
		
		case 54:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 55:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 56:
			return "SHOP_BANNER_CLINTON_PARTNER";
			break;
		
		case 57:
			return "SHOP_BANNER_RECORD_A_STUDIOS";
			break;
	}
	return "";
}

int func_336()//Position - 0x1F404
{
	return Global_100493.f_472;
}

void func_337(bool bParam0, bool bParam1)//Position - 0x1F413
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

bool func_338(char* sParam0, int iParam1, bool bParam2)//Position - 0x1F8FD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_222(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_339(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_339(var uParam0)//Position - 0x1F9F3
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

void func_340(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1FA95
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4539961 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_342();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_341(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_341(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_258(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4539961 = Global_23150.f_8429[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_341(bool bParam0)//Position - 0x1FD41
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_258(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_258(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_342()//Position - 0x1FDCA
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4539956 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_343()//Position - 0x1FE12
{
	Global_23011.f_6 = 1;
}

void func_344()//Position - 0x1FE20
{
	Global_2815059.f_4599 = 0;
}

void func_345(var uParam0, int iParam1, bool bParam2)//Position - 0x1FE30
{
	if (BitTest(uParam0->f_370, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_367 = 0;
	uParam0->f_369 = 0;
	uParam0->f_370 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_370), 7);
	}
	uParam0->f_373 = 0;
	func_346(1, iParam1);
}

void func_346(bool bParam0, int iParam1)//Position - 0x1FE77
{
	int iVar0;
	
	if (!func_222(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_347(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_347(int* iParam0)//Position - 0x1FF35
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

bool func_348()//Position - 0x1FF61
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

int func_349(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1FF78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_10629)
	{
		if (bParam5)
		{
			return func_354(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_357(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_82(iParam3, 0, 0))
	{
		iParam3 = func_353(iParam3);
	}
	if (!func_212(iParam2) && func_305(iParam2, 0))
	{
		iVar6 = func_304(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_352(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_223(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (BitTest(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((func_228(5396, iParam4, 0) != 0 && func_279(15270, iParam4) == 7) && !Global_262145.f_21126) && func_297(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_351(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_227(iParam4) && func_297(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_351(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_225(iParam4) && func_297(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = func_351(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_350(iVar1))
		{
		}
		else if (func_224(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (func_224(iVar1, iParam4) > 0 && func_224(iVar1, iParam4) <= 128)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_224(iVar1, iParam4))
			{
				iVar4 = Global_1312193[func_224(iVar1, iParam4) /*1951*/].f_33;
				if (func_224(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_224(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_224(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_224(iVar1, iParam4) == 119 || func_224(iVar1, iParam4) == 120) || func_224(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_224(iVar1, iParam4) == 122 || func_224(iVar1, iParam4) == 123) || func_224(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_224(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_224(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				else if (func_224(iVar1, iParam4) == 127)
				{
					iVar4 = 10;
				}
				else if (func_224(iVar1, iParam4) == 128)
				{
					iVar4 = 20;
				}
				if (func_196(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_275(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_283(iVar6, func_224(iVar1, iParam4), iVar1) && func_297(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_352(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_223(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_283(iVar6, func_224(iVar1, iParam4), iVar1) && func_297(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_352(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_223(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_283(iVar6, func_224(iVar1, iParam4), iVar1) && func_297(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_352(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_223(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
											if (BitTest(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_283(iVar6, func_224(iVar1, iParam4), iVar1) && func_297(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_352(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_223(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
										if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar7 /*142*/].f_103, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_283(iVar6, func_224(iVar1, iParam4), iVar1) && func_297(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_352(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_223(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar6;
												}
												else if (BitTest(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (BitTest(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_350(int iParam0)//Position - 0x20786
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_322())
			{
				return 1;
			}
			break;
		
		case 25:
			if (!func_320(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x207D4
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_297(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_352(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_223(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_228(func_75(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_228(func_75(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_297(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_352(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_223(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_228(func_75(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_297(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_352(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_223(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_228(func_75(1, iVar1), iParam4, 0);
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_297(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_352(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_223(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_228(func_75(1, iVar1), iParam4, 0);
						if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar1 /*142*/].f_103, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_297(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_352(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_223(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_228(func_75(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_228(func_75(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iParam0;
								}
								else if (BitTest(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

void func_352(int iParam0, int iParam1, int iParam2)//Position - 0x20B0E
{
	*iParam1 = (func_278(iParam0, iParam2) - 1);
}

int func_353(int iParam0)//Position - 0x20B23
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_354(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x20BB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar6 = func_23();
	bVar6 = true;
	if (func_82(iParam3, 0, 0))
	{
		iParam3 = func_353(iParam3);
	}
	if (!func_212(iParam2) && func_305(iParam2, 0))
	{
		iVar7 = func_304(iParam2);
		return func_356(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((bVar6 || func_224(iVar1, iParam4) > 0) && !func_350(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_224(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_79(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[func_224(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_196(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_275(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_355(iParam2, iVar7))
							{
								if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_355(iParam2, iVar7))
							{
								if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_355(iParam2, iVar7))
								{
									iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
									if (BitTest(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_355(iParam2, iVar7))
							{
								iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
								if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_355(iParam2, iVar7))
							{
								if (func_228(func_75(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_228(func_75(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
										else if (BitTest(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (BitTest(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_228(5396, iParam4, 0) != 0 && !Global_262145.f_21126) && func_297(iParam2, 156))
	{
		iVar7 = func_356(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_227(iParam4) && func_297(iParam2, 223))
	{
		iVar7 = func_356(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_225(iParam4) && func_297(iParam2, 278))
	{
		iVar7 = func_356(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_355(int iParam0, int iParam1)//Position - 0x20F46
{
	if (!func_212(iParam0))
	{
		if (func_305(iParam0, 0))
		{
			if (iParam1 == func_304(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_306(iParam1) && func_303(iParam1))
		{
			return 0;
		}
	}
	if (func_196(iParam0))
	{
		if (!func_92(iParam1))
		{
			return 0;
		}
	}
	else if (func_92(iParam1))
	{
		return 0;
	}
	if (func_300(iParam1))
	{
		if (!func_165(iParam0))
		{
			return 0;
		}
	}
	else if (func_165(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_356(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x21051
{
	int iVar0;
	
	if (iParam0 == 158 && iParam6)
	{
		if (func_355(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_228(func_75(4, iParam0), iParam5, 0) == joaat("hauler2") || func_228(func_75(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (func_228(func_75(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == joaat("hauler2") || Global_1585857[iParam0 /*142*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_355(iParam3, iParam0))
				{
					if (func_228(func_75(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_228(func_75(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_355(iParam3, iParam0))
				{
					if (func_228(func_75(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_355(iParam3, iParam0))
					{
						iVar0 = func_228(func_75(1, iParam0), iParam5, 0);
						if (BitTest(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_355(iParam3, iParam0))
				{
					iVar0 = func_228(func_75(1, iParam0), iParam5, 0);
					if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_355(iParam3, iParam0))
				{
					if (func_228(func_75(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_228(func_75(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (BitTest(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_355(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_355(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_355(iParam3, iParam0))
					{
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				if (!func_355(iParam3, iParam0))
				{
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1) && !BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
				{
					return iParam0;
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
				}
				break;
			
			case 2:
				if (!func_355(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_357(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x213D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = func_23();
	bVar5 = true;
	if (func_82(iParam3, 0, 0))
	{
		iParam3 = func_353(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_224(22, -1) > 0)
		{
			if (!func_322())
			{
				return -1;
			}
		}
	}
	if (iParam3 == 127)
	{
		if (func_224(25, -1) > 0)
		{
			if (!func_320(1))
			{
				return -1;
			}
		}
	}
	if (!func_212(iParam2) && func_305(iParam2, 0))
	{
		iVar6 = func_304(iParam2);
		return func_356(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_350(iVar1))
		{
		}
		else if (!bVar5 && func_224(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (bVar5 || (func_224(iVar1, iParam4) > 0 && func_224(iVar1, iParam4) <= 128))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_224(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_79(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[func_224(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_196(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_275(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_355(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_355(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_355(iParam2, iVar6))
								{
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_355(iParam2, iVar6))
							{
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar6 /*142*/].f_103, 2))
							{
								return iVar6;
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_355(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
								{
									return iVar6;
								}
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_228(5396, iParam4, 0) != 0 && !Global_262145.f_21126) && func_297(iParam2, 156))
	{
		iVar6 = func_356(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_227(iParam4))
	{
		if (func_355(iParam2, 223))
		{
			iVar6 = func_356(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_225(iParam4))
	{
		if (func_355(iParam2, 278))
		{
			iVar6 = func_356(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_358(int iParam0, int iParam1)//Position - 0x217F2
{
	*iParam1 = -1;
	if (func_224(0, -1) >= 1 && func_317(iParam0, 0))
	{
		if (((((((((((((func_224(1, -1) >= 1 || (func_224(6, -1) >= 1 && func_317(iParam0, 6))) || func_224(8, -1) >= 1) || func_365()) || (func_363() && func_297(iParam0, 159))) || (func_361() && func_317(iParam0, 13))) || (func_359() && func_317(iParam0, 14))) || (func_227(-1) && iParam0 == joaat("oppressor2"))) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(0, -1);
		return;
	}
	else if (func_224(6, -1) >= 1 && func_317(iParam0, 6))
	{
		if (((((((((((func_224(8, -1) >= 1 || func_365()) || (func_363() && func_297(iParam0, 159))) || (func_361() && func_317(iParam0, 13))) || (func_359() && func_317(iParam0, 14))) || (func_227(-1) && iParam0 == joaat("oppressor2"))) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(6, -1);
		return;
	}
	else if (func_224(8, -1) >= 1 && func_317(iParam0, 8))
	{
		if ((((((((((func_365() || (func_363() && func_297(iParam0, 159))) || (func_361() && func_317(iParam0, 13))) || (func_359() && func_317(iParam0, 14))) || (func_227(-1) && iParam0 == joaat("oppressor2"))) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(8, -1);
		return;
	}
	else if (func_365() && func_297(iParam0, 156))
	{
		if ((((((((((func_363() && func_297(iParam0, 159)) || (func_361() && func_317(iParam0, 13))) || (func_359() && func_317(iParam0, 14))) || (func_227(-1) && iParam0 == joaat("oppressor2"))) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_363() && func_297(iParam0, 159))
	{
		if (((((((((func_361() && func_317(iParam0, 13)) || (func_359() && func_317(iParam0, 14))) || (func_227(-1) && iParam0 == joaat("oppressor2"))) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(12, -1);
		return;
	}
	else if (func_361() && func_317(iParam0, 13))
	{
		if (((((((func_359() && func_317(iParam0, 14)) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		if (func_227(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_224(13, -1);
		return;
	}
	else if (func_359() && func_317(iParam0, 14))
	{
		if ((((((((func_359() && func_224(15, -1) >= 1) && func_317(iParam0, 15)) || (func_224(18, -1) >= 1 && func_317(iParam0, 18))) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		if (func_227(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_224(14, -1);
		return;
	}
	else if (func_227(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((((func_224(18, -1) >= 1 && func_317(iParam0, 18)) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_224(18, -1) >= 1 && func_317(iParam0, 18))
	{
		if ((((((func_224(19, -1) >= 1 && func_317(iParam0, 18)) || (func_224(21, -1) >= 1 && func_317(iParam0, 21))) || ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(18, -1);
		return;
	}
	else if (func_224(21, -1) >= 1 && func_317(iParam0, 21))
	{
		if (((((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322()) || (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(21, -1);
		return;
	}
	else if ((func_224(22, -1) >= 1 && func_317(iParam0, 22)) && func_322())
	{
		if (((func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(22, -1);
		return;
	}
	else if (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
	{
		if (((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0)) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1238;
		return;
	}
	else if ((func_224(25, -1) >= 1 && func_317(iParam0, 25)) && func_320(0))
	{
		if ((func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || (func_224(26, -1) >= 1 && func_317(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_224(25, -1);
		return;
	}
	else if (func_224(26, -1) >= 1 && func_317(iParam0, 26))
	{
		if (func_225(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
		{
			return;
		}
		*iParam1 = func_224(26, -1);
		return;
	}
}

bool func_359()//Position - 0x2251C
{
	return func_360() != 0;
}

int func_360()//Position - 0x2252A
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336;
}

bool func_361()//Position - 0x22543
{
	return func_362() != 0;
}

int func_362()//Position - 0x22551
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285;
}

bool func_363()//Position - 0x2256A
{
	return func_364() != 0;
}

int func_364()//Position - 0x22578
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278;
}

bool func_365()//Position - 0x22591
{
	return func_228(5396, -1, 0) != 0;
}

int func_366(int iParam0, int iParam1)//Position - 0x225A4
{
	if (func_224(0, iParam1) != 0 && func_317(iParam0, 0))
	{
		return 1;
	}
	else if (func_224(6, iParam1) != 0 && func_317(iParam0, 6))
	{
		return 1;
	}
	else if (func_224(8, iParam1) != 0 && func_317(iParam0, 8))
	{
		return 1;
	}
	else if (func_224(11, iParam1) != 0 && func_317(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((func_228(5396, iParam1, 0) != 0 && func_279(15270, iParam1) == 7) && !Global_262145.f_21126) && func_297(iParam0, 156))
	{
		return 1;
	}
	else if (func_224(12, iParam1) != 0 && func_317(iParam0, 12))
	{
		return 1;
	}
	else if (func_224(13, -1) != 0 && func_317(iParam0, 13))
	{
		return 1;
	}
	else if (func_224(15, iParam1) != 0 && func_317(iParam0, 15))
	{
		return 1;
	}
	else if (func_227(iParam1) && func_297(iParam0, 223))
	{
		return 1;
	}
	else if (func_224(14, -1) != 0 && func_317(iParam0, 14))
	{
		return 1;
	}
	else if (func_224(18, iParam1) != 0 && func_317(iParam0, 18))
	{
		return 1;
	}
	else if (func_224(21, iParam1) != 0 && func_317(iParam0, 21))
	{
		return 1;
	}
	else if ((func_224(22, iParam1) != 0 && func_317(iParam0, 22)) && func_322())
	{
		return 1;
	}
	else if (func_225(iParam1) && func_297(iParam0, 278))
	{
		return 1;
	}
	else if ((func_224(25, iParam1) != 0 && func_317(iParam0, 25)) && func_320(1))
	{
		return 1;
	}
	else if (func_224(26, iParam1) != 0 && func_317(iParam0, 26))
	{
		return 1;
	}
	return 0;
}

void func_367()//Position - 0x22801
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	if (iVar1 != -1)
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_65[iVar1 /*2*/].f_1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && func_14(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 10f, 10f, 10f, false, true, 0))
		{
			func_369(&(Local_66.f_45), func_371(Local_66.f_10, 1));
		}
		else
		{
			func_369(&(Local_66.f_45), func_371(Local_66.f_10, 0));
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_IN_WATER(iVar0))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !func_368(PLAYER::PLAYER_PED_ID(), 1)) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 0)
			{
				func_26(PLAYER::PLAYER_ID(), 0, 256, 0);
				func_598(&Local_66, 4);
			}
		}
		else
		{
			if (func_14(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(iVar0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
					}
				}
			}
			func_598(&Local_66, 5);
		}
	}
}

int func_368(int iParam0, int iParam1)//Position - 0x2293F
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

void func_369(var uParam0, int iParam1)//Position - 0x22995
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_370(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_370(int iParam0)//Position - 0x229BB
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

int func_371(int iParam0, bool bParam1)//Position - 0x22C23
{
	switch (iParam0)
	{
		case 0:
			return 12;
			break;
		
		case 1:
			if (bParam1)
			{
				return 12;
			}
			return 12;
			break;
	}
	return 1;
}

void func_372()//Position - 0x22C59
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_66.f_45))
		{
			if (func_381())
			{
				Local_66.f_45 = func_378(NETWORK::NET_TO_ENT(Local_65[PLAYER::PLAYER_ID() /*2*/].f_1), 0, 0);
				func_377(Local_66.f_10, &(Local_66.f_45));
				func_373(Local_66.f_10);
				func_598(&Local_66, 3);
			}
		}
		else
		{
			func_598(&Local_66, 3);
		}
	}
}

void func_373(int iParam0)//Position - 0x22CC5
{
	switch (iParam0)
	{
		case 0:
			func_375("CAS_VEH_REW", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(func_376(Local_66.f_10)), -1);
			break;
		
		case 1:
			func_374("KEINE_AWARD", "KEINE_BLIP", 12, -1);
			break;
	}
}

void func_374(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x22D0A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

void func_375(char* sParam0, char* sParam1, int iParam2)//Position - 0x22D35
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_376(int iParam0)//Position - 0x22D52
{
	switch (iParam0)
	{
		case 0:
			return joaat("paragon2");
		
		case 1:
			return joaat("weevil");
		
		default:
	}
	return joaat("faggio");
}

void func_377(int iParam0, var uParam1)//Position - 0x22D82
{
	switch (iParam0)
	{
		case 0:
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 5000);
			HUD::SET_BLIP_SPRITE(*uParam1, 306);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAS_VEH_PN");
			HUD::SET_BLIP_DISPLAY(*uParam1, 4);
			break;
		
		case 1:
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 5000);
			HUD::SET_BLIP_SPRITE(*uParam1, 225);
			func_369(uParam1, 12);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "CAS_VEH_PN");
			HUD::SET_BLIP_DISPLAY(*uParam1, 4);
			break;
	}
}

int func_378(int iParam0, bool bParam1, bool bParam2)//Position - 0x22DF8
{
	return func_379(iParam0, !bParam1, bParam2);
}

int func_379(int iParam0, bool bParam1, bool bParam2)//Position - 0x22E0B
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_380(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_380(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_380(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_380(bool bParam0, float fParam1, float fParam2)//Position - 0x22EAF
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_381()//Position - 0x22EC6
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || HUD::IS_HELP_MESSAGE_ON_SCREEN())
	{
		return 0;
	}
	if (func_384(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_383())
	{
		return 0;
	}
	if (func_382())
	{
		return 0;
	}
	return 1;
}

bool func_382()//Position - 0x22F09
{
	return Global_75485;
}

bool func_383()//Position - 0x22F15
{
	return Global_1963976;
}

int func_384(int iParam0)//Position - 0x22F21
{
	if (func_387(iParam0))
	{
		return 1;
	}
	if (func_385(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x22F44
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_386(iParam0, 9);
	}
	return 0;
}

var func_386(int iParam0, int iParam1)//Position - 0x22F62
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_387(var uParam0)//Position - 0x22F7A
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_388()//Position - 0x22F9D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<101> Var4;
	int iVar5;
	int iVar6;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
	{
		if (func_597(func_376(Local_66.f_10)))
		{
			if (!BitTest(Local_66.f_0, 0))
			{
				if (func_591(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1, 0, 1))
				{
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) + 1);
					MISC::SET_BIT(&Local_66, 0);
				}
			}
			else if (!BitTest(Local_66.f_0, 2))
			{
				Local_66.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_590(Local_66.f_10));
				MISC::SET_BIT(&Local_66, 2);
			}
			else if (func_454(Local_66.f_10, &Var1, &fVar2))
			{
				if (func_451(&(Local_65[iVar0 /*2*/].f_1), func_376(Local_66.f_10), Var1, fVar2, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0))
				{
					func_450(Local_66.f_10, &Var1, &fVar2, Local_66.f_1);
					iVar3 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
					ENTITY::SET_ENTITY_HEADING(iVar3, fVar2);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar3, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar3, PLAYER::PLAYER_ID(), false);
					VEHICLE::_0xDBC631F109350B8C(iVar3, true);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iVar3, true);
					if (VEHICLE::GET_NUM_MOD_KITS(iVar3) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar3, 0);
					}
					Var4.f_9 = 49;
					Var4.f_59 = 2;
					Var4.f_78 = -1;
					Var4.f_79 = -1;
					Var4.f_96 = -1;
					Var4.f_97 = 1;
					Var4.f_99 = 132;
					Var4.f_100 = -1;
					func_449(func_376(Local_66.f_10), &Var4);
					func_389(iVar3, &Var4, 1, 1, 0);
					func_598(&Local_66, 2);
					MISC::CLEAR_BIT(&Local_66, 2);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_376(Local_66.f_10));
				}
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
		if (ENTITY::IS_ENTITY_DEAD(iVar5, false) || ENTITY::IS_ENTITY_IN_WATER(iVar5))
		{
			iVar6 = iVar5;
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
			{
				if (func_8(iVar6, &(Local_66.f_9)))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(iVar6, false, true);
					VEHICLE::DELETE_VEHICLE(&iVar6);
				}
			}
		}
		else
		{
			func_598(&Local_66, 2);
		}
	}
}

void func_389(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x23186
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != func_11())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_431(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, true);
				}
			}
			if (func_186(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, false, true);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::_SET_VEHICLE_HORN_VARIATION(iParam0, uParam1->f_79);
			}
			if (func_430(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::_SET_VEHICLE_INTERIOR_COLOR(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, uParam1->f_99);
			}
			if (func_429(iParam0))
			{
				func_428(iParam0, func_108(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::_SET_VEHICLE_ROOF_LIVERY(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_403(iParam0, &(uParam1->f_81));
			}
			if ((!func_396(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_393(iParam0);
			}
			if (func_392(iVar0))
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
			if (func_391(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, (Global_262145.f_21791 + 0.05f));
						}
						else
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, Global_262145.f_21791);
						}
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
						break;
					
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, 1f);
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
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
						if (func_390(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
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

bool func_390(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x2365B
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_391(int iParam0)//Position - 0x2366B
{
	return func_186(iParam0);
}

int func_392(int iParam0)//Position - 0x23679
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
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

void func_393(int iParam0)//Position - 0x2377A
{
	struct<3> Var0;
	
	if (Global_262145.f_20201)
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
				func_394(Var0);
			}
		}
	}
}

void func_394(struct<3> Param0)//Position - 0x23809
{
	struct<3> Var0;
	
	Var0.f_0 = -1553386096;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Param0.f_0;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, func_395(1, 1));
}

var func_395(int iParam0, bool bParam1)//Position - 0x23848
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_35(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_396(int iParam0)//Position - 0x238AD
{
	int iVar0;
	
	if (func_402())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_401(iVar0) == iParam0)
			{
				if (func_397(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_397(int iParam0)//Position - 0x238E8
{
	return func_398(iParam0, 6, 1);
}

int func_398(int iParam0, int iParam1, bool bParam2)//Position - 0x238F8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_400() == 0)
		{
			return BitTest(func_228(func_399(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_399(int iParam0)//Position - 0x23959
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
			return 11352;
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
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

int func_400()//Position - 0x23CD4
{
	return Global_31959;
}

int func_401(int iParam0)//Position - 0x23CDF
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
	}
	return 6;
}

bool func_402()//Position - 0x23FEE
{
	return Global_100493.f_376 > 0;
}

int func_403(int iParam0, var* uParam1)//Position - 0x23FFF
{
	int iVar0;
	int iVar1;
	
	if (!func_409(iParam0, uParam1))
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
		if (!func_102(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_404(&iParam0, iVar1))
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
	else if (func_122(iParam0))
	{
	}
	return 0;
}

int func_404(int iParam0, int iParam1)//Position - 0x2407D
{
	func_408();
	if (Global_1574632.f_18 != 0 || VEHICLE::_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1946141.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*iParam0);
		if (Global_1946141.f_11 < 0f)
		{
			Global_1946141.f_11 = 0f;
		}
	}
	func_406(*iParam0, &Global_1946141, &(Global_1946141.f_1), &(Global_1946141.f_4), &(Global_1946141.f_7), &(Global_1946141.f_10));
	Global_1946141.f_1.f_2 = (Global_1946141.f_1.f_2 - Global_1946141.f_11);
	if (Global_1946141.f_4.f_2 < 0f)
	{
		Global_1946141.f_12 = 1;
	}
	Global_1946141.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1946141.f_13 = 255;
	}
	if (Global_1946141.f_12)
	{
		if (func_405(iParam0, iParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1946141.f_14 = { Global_1946141.f_1 };
		Global_1946141.f_14 = (Global_1946141.f_14 * -1f);
		Global_1946141.f_17 = { Global_1946141.f_4 };
		Global_1946141.f_17 = (Global_1946141.f_17 * -1f);
		Global_1946141.f_20 = { Global_1946141.f_7 };
		Global_1946141.f_20.f_1 = (Global_1946141.f_20.f_1 * -1f);
		Global_1946141.f_20.f_2 = (Global_1946141.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1946141.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1946141.f_23 = 3;
		}
		Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1946141.f_24 = 3;
		}
		if (((Global_1946141.f_23 == 0 && func_405(iParam0, iParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13)) || Global_1946141.f_23 != 0) && ((Global_1946141.f_24 == 0 && func_405(iParam0, iParam1, Global_1946141, Global_1946141.f_14, Global_1946141.f_17, Global_1946141.f_20, Global_1946141.f_10, 1, Global_1946141.f_13)) || Global_1946141.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_405(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, float fParam6, int iParam7, int iParam8)//Position - 0x24328
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param4, Param5, fParam6, iParam7, iParam8);
}

int func_406(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x24351
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_407(Global_1946167, 0f, 0f, 0f, 0) && !func_407(Global_1946170, 0f, 0f, 0f, 0)) && !func_407(Global_1946173, 0f, 0f, 0f, 0)) && !Global_1946176 == 0f)
	{
		*uParam2 = { Global_1946167 };
		*uParam3 = { Global_1946170 };
		*uParam4 = { Global_1946173 };
		*uParam5 = Global_1946176;
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
		
		case joaat("BRIOSO3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("CORSITA"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("GREENWOOD"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("KANJOSJ"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("POSTLUDE"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("RHINEHART"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("TENF"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("TENF2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("TORERO2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("VIGERO2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("WEEVIL2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("DRAUGUR"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("RUINER4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("SENTINEL4"):
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("SM722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("OMNISEGT"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	}
	return 1;
}

bool func_407(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x2964B
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_408()//Position - 0x29692
{
	Global_1946141 = 0;
	Global_1946141.f_1 = { 0f, 0f, 0f };
	Global_1946141.f_4 = { 0f, 0f, 0f };
	Global_1946141.f_7 = { 0f, 0f, 0f };
	Global_1946141.f_10 = 0f;
	Global_1946141.f_11 = 0f;
	Global_1946141.f_12 = 0;
	Global_1946141.f_13 = 0;
	Global_1946141.f_14 = { 0f, 0f, 0f };
	Global_1946141.f_17 = { 0f, 0f, 0f };
	Global_1946141.f_20 = { 0f, 0f, 0f };
	Global_1946141.f_23 = 0;
	Global_1946141.f_24 = 0;
}

int func_409(int iParam0, var* uParam1)//Position - 0x2970B
{
	int iVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_11();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_420(15, 0))
		{
			bVar1 = true;
		}
		else if (func_416(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_11()) || !func_10(iVar0, 0, 0)) || !bVar1) || func_410(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_410(int iParam0)//Position - 0x297F2
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_412(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_411(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1946166)
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
		case joaat("LM87"):
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
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("DRAUGUR"):
			return 1;
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

int func_411(int iParam0)//Position - 0x29ADC
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

int func_412(int iParam0)//Position - 0x29B0B
{
	if (func_415(iParam0) == 233)
	{
		return func_413(iParam0);
	}
	return -1;
}

int func_413(int iParam0)//Position - 0x29B28
{
	if (func_414(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

int func_414(int iParam0, int iParam1)//Position - 0x29B4B
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x29B86
{
	if (func_414(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

bool func_416(bool bParam0)//Position - 0x29BA9
{
	return func_417(PLAYER::PLAYER_ID(), bParam0);
}

int func_417(int iParam0, bool bParam1)//Position - 0x29BBB
{
	return func_418(iParam0, bParam1, 1);
}

int func_418(int iParam0, bool bParam1, int iParam2)//Position - 0x29BCC
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_419(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != func_11() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0, int iParam1)//Position - 0x29C28
{
	if (iParam0 != func_11())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_11())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 == iParam0 && Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_420(int iParam0, bool bParam1)//Position - 0x29C77
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
	if (func_425(PLAYER::PLAYER_ID()))
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
	uVar0 = func_422(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_421(iVar1));
}

int func_421(int iParam0)//Position - 0x29CD5
{
	return (iParam0 % 32);
}

var func_422(int iParam0)//Position - 0x29CE2
{
	var uVar0;
	
	uVar0 = func_228(func_423(iParam0), -1, 0);
	return uVar0;
}

int func_423(var uParam0)//Position - 0x29CFA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_424(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_424(int iParam0)//Position - 0x29D27
{
	return (iParam0 / 32);
}

int func_425(int iParam0)//Position - 0x29D34
{
	if (iParam0 != func_11())
	{
		if (func_426(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x29D69
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x29DB0
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
	}
	return -1;
}

void func_428(int iParam0, int iParam1)//Position - 0x2A237
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_107(iParam1);
	func_106(iVar1, &iVar0);
	VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, iVar0);
}

int func_429(int iParam0)//Position - 0x2A258
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_430(int iParam0, var uParam1)//Position - 0x2A279
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

void func_431(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x2A57A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_447(iParam0))
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
			if (BitTest(uParam1->f_77, func_125(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_125(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_125(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_125(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_125(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_125(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_125(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_125(iVar3));
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
					if (BitTest(uParam1->f_77, func_125(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_125(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_125(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_125(4));
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
			MISC::SET_BIT(&(uParam1->f_77), func_125(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_125(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_125(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
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
			if (func_445(uParam1->f_5) || func_445(uParam1->f_6))
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
		if (((BitTest(uParam1->f_77, 15) || func_444(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_443())
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
		if (uParam1->f_65 == -1 && !func_126(uParam1->f_66))
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
			VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
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
						func_442(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_442(iParam0, uParam1->f_69);
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
			func_436(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, func_125(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((func_432() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
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

int func_432()//Position - 0x2AC1F
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_434(7))
	{
		if (func_385(Global_2703735.f_4.f_16) || func_433(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_433(var uParam0)//Position - 0x2ACAE
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

bool func_434(int iParam0)//Position - 0x2ACD2
{
	return func_435(&(Global_2703735.f_169), iParam0);
}

var func_435(var uParam0, var uParam1)//Position - 0x2ACE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_436(int iParam0, var uParam1, var uParam2)//Position - 0x2AD09
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
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
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
				else if (func_441(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
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
	if (func_440(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_439(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_439(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_438(iParam0);
	if (func_437(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_437(int iParam0)//Position - 0x2AEE3
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
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
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

void func_438(var uParam0)//Position - 0x2AFBF
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

int func_439(int iParam0, int iParam1)//Position - 0x2B016
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
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
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

int func_440(int iParam0, int iParam1)//Position - 0x2B0FB
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
		
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14731)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14732)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14730)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14733)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14735)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14734)
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
			if (Global_262145.f_19186)
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
			if (Global_262145.f_19188)
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
			if (Global_262145.f_19192)
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
			if (Global_262145.f_19189)
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
			if (Global_262145.f_19196)
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
			if (Global_262145.f_19194)
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
			if (Global_262145.f_19199)
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
			if (Global_262145.f_21144)
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
			if (Global_262145.f_21145)
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

int func_441(int iParam0, int iParam1, int iParam2)//Position - 0x2B4DA
{
	if (!func_195() && VEHICLE::_0x00834EAC4A96E010(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

void func_442(int iParam0, int iParam1)//Position - 0x2B4FE
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
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
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

bool func_443()//Position - 0x2B576
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_444(int iParam0)//Position - 0x2B587
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

int func_445(int iParam0)//Position - 0x2B5CC
{
	if (!func_195() && func_446(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x2B5EC
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

int func_447(int iParam0)//Position - 0x2B63F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_448(PLAYER::PLAYER_ID(), -1))
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
	if (func_412(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_411(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1)//Position - 0x2B6C6
{
	int iVar0;
	
	if (func_10(iParam0, 1, 1))
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

void func_449(int iParam0, var uParam1)//Position - 0x2B713
{
	switch (iParam0)
	{
		case joaat("paragon2"):
			uParam1->f_9[16] = 4;
			break;
		
		case joaat("weevil"):
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			MISC::SET_BIT(&(uParam1->f_77), 1);
			MISC::SET_BIT(&(uParam1->f_77), 2);
			MISC::SET_BIT(&(uParam1->f_77), 3);
			uParam1->f_9[48] = 15;
			break;
	}
}

void func_450(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x2B7B3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { 866.0536f, -2988.445f, 4.9008f };
					*fParam2 = 270.7996f;
					break;
				
				case 1:
					*uParam1 = { 811.0694f, -3021.563f, 4.8178f };
					*fParam2 = 160.1995f;
					break;
				
				case 2:
					*uParam1 = { 1216.372f, -2947.297f, 4.8661f };
					*fParam2 = 178.1987f;
					break;
				
				case 3:
					*uParam1 = { 1216.627f, -3040.242f, 4.8684f };
					*fParam2 = 178.1987f;
					break;
				
				case 4:
					*uParam1 = { 1169.268f, -2969.481f, 4.9021f };
					*fParam2 = 269.7983f;
					break;
				
				case 5:
					*uParam1 = { 1090.679f, -2969.823f, 4.9012f };
					*fParam2 = 359.1981f;
					break;
				
				case 6:
					*uParam1 = { 1055.605f, -3039.275f, 4.9011f };
					*fParam2 = 284.1977f;
					break;
				
				case 7:
					*uParam1 = { 951.2667f, -3240.293f, 4.8951f };
					*fParam2 = 0.9969f;
					break;
				
				case 8:
					*uParam1 = { 1013.844f, -3241.337f, 4.8949f };
					*fParam2 = 9.1969f;
					break;
				
				case 9:
					*uParam1 = { 1067.405f, -3243.458f, 4.8946f };
					*fParam2 = 84.1968f;
					break;
				
				case 10:
					*uParam1 = { 1096.48f, -3193.932f, 4.9008f };
					*fParam2 = 88.7966f;
					break;
				
				case 11:
					*uParam1 = { 1111.106f, -3097.289f, 4.8677f };
					*fParam2 = 182.3965f;
					break;
				
				case 12:
					*uParam1 = { 1089.528f, -3022.824f, 4.901f };
					*fParam2 = 359.5967f;
					break;
				
				case 13:
					*uParam1 = { 1182.72f, -3034.218f, 4.9021f };
					*fParam2 = 271.3965f;
					break;
				
				case 14:
					*uParam1 = { 988.5466f, -3029.077f, 4.9008f };
					*fParam2 = 359.7962f;
					break;
				
				case 15:
					*uParam1 = { 988.7137f, -3082.373f, 4.901f };
					*fParam2 = 359.7962f;
					break;
				
				case 16:
					*uParam1 = { 892.3446f, -3076.711f, 4.9008f };
					*fParam2 = 359.7962f;
					break;
				
				case 17:
					*uParam1 = { 861.8322f, -3129.824f, 4.9008f };
					*fParam2 = 270.796f;
					break;
				
				case 18:
					*uParam1 = { 852.6052f, -2943.117f, 4.9008f };
					*fParam2 = 270.796f;
					break;
				
				case 19:
					*uParam1 = { 988.0678f, -2971.613f, 4.9008f };
					*fParam2 = 0.1957f;
					break;
				
				case 20:
					*uParam1 = { 892.4056f, -3019.585f, 4.902f };
					*fParam2 = 0.1957f;
					break;
				
				case 21:
					*uParam1 = { 1191.755f, -3073.683f, 4.8238f };
					*fParam2 = 90.1956f;
					break;
				
				case 22:
					*uParam1 = { 809.9f, -3134.49f, 4.9009f };
					*fParam2 = 4.3955f;
					break;
				
				case 23:
					*uParam1 = { 891.2492f, -3241.015f, 4.8959f };
					*fParam2 = 0.1955f;
					break;
				
				case 24:
					*uParam1 = { 1094.769f, -3100.678f, 4.8943f };
					*fParam2 = 90.1954f;
					break;
				
				case 25:
					*uParam1 = { 1194.57f, -2942.816f, 4.9021f };
					*fParam2 = 90.1954f;
					break;
				
				case 26:
					*uParam1 = { 852.6579f, -2927.324f, 4.9008f };
					*fParam2 = 270.7951f;
					break;
				
				case 27:
					*uParam1 = { 1066.745f, -3073.23f, 4.901f };
					*fParam2 = -0.005f;
					break;
				
				case 28:
					*uParam1 = { 844.2502f, -3050.154f, 4.7422f };
					*fParam2 = 91.7947f;
					break;
				
				case 29:
					*uParam1 = { 1115.411f, -3184.967f, 4.9008f };
					*fParam2 = 360.7945f;
					break;
				
				case 30:
					*uParam1 = { 1139.718f, -3185.602f, 4.9008f };
					*fParam2 = 360.7945f;
					break;
				
				case 31:
					*uParam1 = { 1117.839f, -3201.79f, 4.9008f };
					*fParam2 = 179.7964f;
					break;
			}
			break;
		
		case 1:
			switch (iParam3)
			{
				case 0:
					*uParam1 = { -902.7407f, -2607.978f, 35.605f };
					*fParam2 = 149.9998f;
					break;
				
				case 1:
					*uParam1 = { -920.7925f, -2597.616f, 35.605f };
					*fParam2 = 149.9998f;
					break;
				
				case 2:
					*uParam1 = { -938.3965f, -2613.466f, 35.1893f };
					*fParam2 = 238.7997f;
					break;
				
				case 3:
					*uParam1 = { -943.8753f, -2623.383f, 33.7924f };
					*fParam2 = 238.7997f;
					break;
				
				case 4:
					*uParam1 = { -962.2972f, -2654.883f, 34.7399f };
					*fParam2 = 238.7997f;
					break;
				
				case 5:
					*uParam1 = { -971.8165f, -2671.691f, 35.605f };
					*fParam2 = 238.9997f;
					break;
				
				case 6:
					*uParam1 = { -961.0366f, -2685.977f, 35.6049f };
					*fParam2 = 329.1993f;
					break;
				
				case 7:
					*uParam1 = { -951.3126f, -2691.622f, 35.6049f };
					*fParam2 = 329.1993f;
					break;
				
				case 8:
					*uParam1 = { -936.5653f, -2692.354f, 35.605f };
					*fParam2 = 59.5993f;
					break;
				
				case 9:
					*uParam1 = { -925.1686f, -2672.311f, 34.289f };
					*fParam2 = 59.5993f;
					break;
				
				case 10:
					*uParam1 = { -903.4186f, -2633.856f, 35.1724f };
					*fParam2 = 59.5993f;
					break;
				
				case 11:
					*uParam1 = { -924.6265f, -2643.698f, 38.0411f };
					*fParam2 = 59.5993f;
					break;
				
				case 12:
					*uParam1 = { -939.4594f, -2668.125f, 36.4641f };
					*fParam2 = 59.5993f;
					break;
				
				case 13:
					*uParam1 = { -928.2064f, -2623.847f, 36.4646f };
					*fParam2 = 239.1989f;
					break;
				
				case 14:
					*uParam1 = { -942.5833f, -2648.603f, 38.0394f };
					*fParam2 = 239.7989f;
					break;
				
				case 15:
					*uParam1 = { -1011.223f, -2580.222f, 36.9491f };
					*fParam2 = 239.7989f;
					break;
				
				case 16:
					*uParam1 = { -1027.83f, -2608.464f, 37.4228f };
					*fParam2 = 239.7989f;
					break;
				
				case 17:
					*uParam1 = { -1051.542f, -2621.01f, 35.6051f };
					*fParam2 = 239.7989f;
					break;
				
				case 18:
					*uParam1 = { -1021.886f, -2569.737f, 34.7484f };
					*fParam2 = 239.7989f;
					break;
				
				case 19:
					*uParam1 = { -1012.021f, -2553.025f, 35.6049f };
					*fParam2 = 239.7989f;
					break;
				
				case 20:
					*uParam1 = { -1051.001f, -2634.052f, 35.605f };
					*fParam2 = 330.7986f;
					break;
				
				case 21:
					*uParam1 = { -1032.935f, -2644.74f, 35.605f };
					*fParam2 = 330.7986f;
					break;
				
				case 22:
					*uParam1 = { -994.2746f, -2555.425f, 35.6049f };
					*fParam2 = 149.7981f;
					break;
				
				case 23:
					*uParam1 = { -979.4405f, -2564.203f, 35.6049f };
					*fParam2 = 149.7981f;
					break;
				
				case 24:
					*uParam1 = { -983.0535f, -2583.577f, 35.4786f };
					*fParam2 = 59.9978f;
					break;
				
				case 25:
					*uParam1 = { -1008.726f, -2628.338f, 34.7685f };
					*fParam2 = 58.7977f;
					break;
				
				case 26:
					*uParam1 = { -1018.427f, -2644.901f, 35.605f };
					*fParam2 = 58.7977f;
					break;
				
				case 27:
					*uParam1 = { -997.2888f, -2579.694f, 36.0407f };
					*fParam2 = 58.7977f;
					break;
				
				case 28:
					*uParam1 = { -1008.954f, -2600.448f, 38.105f };
					*fParam2 = 58.7977f;
					break;
				
				case 29:
					*uParam1 = { -1024.775f, -2627.78f, 35.7154f };
					*fParam2 = 58.7977f;
					break;
			}
			break;
	}
}

int func_451(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2C09C
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
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_452(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_452(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x2C1A5
{
	int iVar0;
	
	if (func_453(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_453(int iParam0, struct<3> Param1, int iParam2)//Position - 0x2C278
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
			if (Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_454(int iParam0, var uParam1, var uParam2)//Position - 0x2C316
{
	struct<31> Var0;
	struct<3> Var1;
	var uVar2;
	
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
	Var0.f_4 = 10f;
	Var0.f_1 = 1;
	Var0.f_12 = 1;
	Var0.f_13 = 0;
	Var0.f_14 = 1;
	Var0.f_27 = 1;
	Var0.f_3 = 1;
	func_450(iParam0, &Var1, &uVar2, Local_66.f_1);
	if (func_455(Var1, 0f, 0f, uVar2, func_376(iParam0), 0, uParam1, uParam2, &Var0))
	{
		return 1;
	}
	return 0;
}

int func_455(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2C3D8
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_587())
	{
		return 0;
	}
	if (func_586() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			func_585();
			func_584();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < func_583(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > func_583(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_577(Param0))
		{
			if (func_576(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_575();
		func_585();
		if (!uParam6->f_27 || (((((((func_574(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			func_556(Param0, iParam2);
		}
		if (func_542(Param0))
		{
			func_556(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
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
				if (((uParam6->f_3 && func_536(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_534(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
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
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_481(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				func_479(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_478(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
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
						func_476(Global_2667225.f_683, 0);
						func_475(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				func_475(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (func_474(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || func_457(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_476(Global_2667225.f_683, 0);
									func_475(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_476(Global_2667225.f_683, 0);
								func_475(-1);
							}
						}
					}
					else
					{
						func_475(-1);
					}
				}
				else
				{
					func_475(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
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
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_481(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		func_456(1);
		return 1;
	}
	return 0;
}

void func_456(bool bParam0)//Position - 0x2CCB6
{
	Global_2667225.f_676 = 0;
	func_575();
	func_585();
	if (bParam0)
	{
		func_584();
	}
}

int func_457(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x2CCD7
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_10(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_473(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && func_469(iVar1))
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
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_468(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_458(func_467(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_458(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)//Position - 0x2CE4A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (SYSTEM::VDIST(Param0, Param1) < func_466(iParam3, 1008981770))
	{
		func_459(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var1, fVar2, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_459(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x2CE9D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_465(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_460(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = MISC::ABSF((Var2.f_0 - Var1.f_0));
}

void func_460(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2CF69
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_463(iParam0);
		if (iVar0 != 0)
		{
			func_461(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_461(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2D068
{
	int iVar0;
	
	func_462(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1577992[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1577996[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

void func_462(int iParam0, var uParam1)//Position - 0x2D274
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

int func_463(int iParam0)//Position - 0x2D2F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_464(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_464(int iParam0)//Position - 0x2D324
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_465(var uParam0, struct<3> Param1)//Position - 0x2D336
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

float func_466(int iParam0, float fParam1)//Position - 0x2D40D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_460(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (SYSTEM::SQRT(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

Vector3 func_467(int iParam0)//Position - 0x2D48D
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_468(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)//Position - 0x2D4A0
{
	if (func_458(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_459(Param0, fParam1, iParam2, &Global_1976933, &(Global_1976933.f_3), &(Global_1976933.f_6), 1036831949);
	func_459(Param3, fParam4, iParam5, &(Global_1976933.f_7), &(Global_1976933.f_10), &(Global_1976933.f_13), 1036831949);
	if (MISC::_0xA0AD167E4B39D9A2(Global_1976933, Global_1976933.f_3, Global_1976933.f_6, Global_1976933.f_7, Global_1976933.f_10, Global_1976933.f_13))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x2D53E
{
	if (func_472(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_261(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_470(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, int iParam1)//Position - 0x2D585
{
	int iVar0;
	
	iVar0 = func_471(iParam0);
	if (!iVar0 == func_11())
	{
		if (iVar0 == func_471(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_471(int iParam0)//Position - 0x2D5B0
{
	if (iParam0 != func_11())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_11();
}

int func_472(int iParam0, int iParam1)//Position - 0x2D5D3
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_261(iParam0) };
		Global_2787518 = { func_261(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x2D640
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

int func_474(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D66B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_10(iVar1, 0, 1) && func_10(iParam3, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (func_458(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_458(func_467(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (func_458(Global_2680265.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_10(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_458(func_467(iVar1), Param0, fParam1, iParam2, 1036831949))
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

void func_475(int iParam0)//Position - 0x2D77A
{
	if (Global_2667225.f_682 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667225.f_682 < iParam0))
		{
			Global_2667225.f_676 = 2;
		}
		else
		{
			Global_2667225.f_676 = 5;
		}
	}
	else
	{
		Global_2667225.f_676 = 5;
	}
}

void func_476(struct<3> Param0, int iParam1)//Position - 0x2D7E5
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_477(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_476(Var0, iParam1 + 1);
	}
}

int func_477(struct<3> Param0, float fParam1)//Position - 0x2D84E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2667225.f_2737[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_478(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)//Position - 0x2D889
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_585();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2667225.f_687[iVar3] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_459(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = MISC::ABSF((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0.5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0.5f));
				}
				Global_2667225.f_687[iVar3] = NETWORK::_0x2B1C623823DB0D9D(Var0, Var1, fParam4);
				Global_2667225.f_691[iVar3] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2667225.f_699 = Global_2667225.f_687[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_479(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0x2D95A
{
	struct<8> Var0;
	
	*uParam3 = func_480(&Param0, &uParam1, &iParam2);
	Var0.f_0 = 495813132;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_395(1, 1));
}

int func_480(var uParam0, var uParam1, var uParam2)//Position - 0x2D9AA
{
	char cVar0[64];
	int iVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	return iVar1;
}

void func_481(var uParam0, var uParam1, var uParam2)//Position - 0x2D9F8
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_529(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_482(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_482(var uParam0, var uParam1, var uParam2)//Position - 0x2DA67
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_525(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_520(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_463(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_513(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_510(Var1))
									{
										Var1 = { func_505(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_504(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_500(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_520(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_499(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_525(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_498(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_536(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_536(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_457(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_491(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_490(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (func_500(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
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
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
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
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_488(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
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
						func_487(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_525(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_520(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
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
				func_483(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_483(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x2E495
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
			if (!func_484(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

int func_484(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2E519
{
	if (func_486(Param0, fParam1, iParam2, iParam3, 0) || func_485(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_485(struct<3> Param0, int iParam1, int iParam2)//Position - 0x2E54A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_458(Param0, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_10(iVar2, 0, 1) && func_10(iParam1, 0, 1))
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

int func_486(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2E60C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_10(iVar1, 0, 1) && func_10(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_10(iVar1, 0, 1) && func_10(iParam2, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_467(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_10(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_467(iVar1), Param0) < 1f)
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

void func_487(int iParam0, struct<3> Param1, int iParam2, var* uParam3, float* fParam4, var uParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x2E729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (SYSTEM::VMAG(*uParam3) > 0f)
			{
				*uParam3 = { func_505(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, bParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_510(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_488(int iParam0, var uParam1)//Position - 0x2E7C6
{
	if (!func_500(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		func_489(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_488(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_488(iParam0 + 1, uParam1);
	}
}

void func_489(int iParam0)//Position - 0x2E821
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674786[iParam0 /*3*/] = { Global_2674786[iParam0 + 1 /*3*/] };
			Global_2674786.f_121[iParam0] = Global_2674786.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_490(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2E86C
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_490(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_491(struct<3> Param0, float fParam1, float fParam2)//Position - 0x2E8D9
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_492(iVar3))
		{
			Var1 = { func_467(iVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_492(int iParam0)//Position - 0x2E941
{
	if (func_10(iParam0, 0, 1))
	{
		if (!func_497(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_494(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_493(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
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
					if (!func_494(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_469(iParam0))
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

int func_493(int iParam0, int iParam1, int iParam2)//Position - 0x2E9EE
{
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
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_494(int iParam0, bool bParam1, bool bParam2)//Position - 0x2EB99
{
	if (bParam1)
	{
		if (func_495(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_495(int iParam0)//Position - 0x2EBCB
{
	return func_496(iParam0);
}

var func_496(int iParam0)//Position - 0x2EBD9
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_497(int iParam0)//Position - 0x2EBF0
{
	if (func_35(iParam0, 0))
	{
		return 1;
	}
	if (func_34())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

int func_498(struct<3> Param0, float fParam1, int iParam2)//Position - 0x2EC2F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
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
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_468(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
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
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_468(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_499(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2ED3B
{
	if (func_474(Param0, fParam1, iParam2, iParam3, iParam4) || func_534(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_500(struct<3> Param0, var uParam1)//Position - 0x2ED71
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_503(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_501(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_501(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x2EE02
{
	func_502(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_502(var uParam0, var uParam1)//Position - 0x2EEAD
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

bool func_503(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2EF0F
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param1) < (fParam2 + 0.01f);
}

int func_504(struct<3> Param0, float fParam1)//Position - 0x2EFC2
{
	int iVar0;
	
	if (func_494(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_36355 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_36355)
			{
				if (Global_4980736.f_36356[iVar0 /*134*/].f_7 != 0)
				{
					if (func_458(Param0, Global_4980736.f_36356[iVar0 /*134*/], Global_4980736.f_36356[iVar0 /*134*/].f_6, Global_4980736.f_36356[iVar0 /*134*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*442*/].f_15 != 0)
				{
					if (func_458(Param0, Global_4980736.f_5742[iVar0 /*442*/], Global_4980736.f_5742[iVar0 /*442*/].f_3, Global_4980736.f_5742[iVar0 /*442*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_78574 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_78574)
			{
				if (Global_4980736.f_78578[iVar0 /*450*/].f_12 != 0)
				{
					if (func_458(Param0, Global_4980736.f_78578[iVar0 /*450*/], Global_4980736.f_78578[iVar0 /*450*/].f_3, Global_4980736.f_78578[iVar0 /*450*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_233[iVar0], false))
				{
					if (func_458(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058069.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058069.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058069.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058069.f_119[iVar0], false))
				{
					if (func_458(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058069.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058069.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058069.f_119[iVar0]), 0.5f))
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

Vector3 func_505(struct<3> Param0, float* fParam1, int iParam2, bool bParam3, struct<3> Param4, bool bParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)//Position - 0x2F256
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(Param4) > 0f)
		{
			if (!func_508(Param0, *fParam1, Param4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, bParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_507(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_506(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_506(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param4) > 0f)
	{
		if (!func_508(Param0, *fParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *fParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(SYSTEM::VMAG(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_506(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_506(iParam7, 1.5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0.5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_506(int iParam0, float fParam1)//Position - 0x2F6A5
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_460(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_507(struct<3> Param0)//Position - 0x2F6DC
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

int func_508(struct<3> Param0, float fParam1, struct<3> Param2)//Position - 0x2F714
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_465(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_509(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_509(struct<3> Param0, struct<3> Param1)//Position - 0x2F750
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_510(struct<3> Param0)//Position - 0x2F771
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_512(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (func_511(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (func_511(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_511(struct<3> Param0, var uParam1)//Position - 0x2F7EC
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
}

int func_512(struct<2> Param0, var uParam1)//Position - 0x2F80C
{
	if (Param0.f_1 > Global_2673781[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673781[1])
	{
		if (Param0.f_0 < Global_2673785[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673781[2])
	{
		if (Param0.f_0 < Global_2673785[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673785[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673785[3])
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

int func_513(var uParam0, bool bParam1)//Position - 0x2F8A7
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_519(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_518(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 0, fVar2);
			if (func_514(Var1, &uVar0) || func_519(Var1))
			{
				Var1 = { *uParam0 };
				func_518(&Var1, Global_2667225.f_593, Global_2667225.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_514(struct<3> Param0, var uParam1)//Position - 0x2F93F
{
	int iVar0;
	int iVar1;
	
	if (func_517())
	{
		return 0;
	}
	iVar1 = func_516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_515(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_515(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2F9A3
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_503(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_501(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_516()//Position - 0x2FB04
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_517()//Position - 0x2FB37
{
	return Global_1946250.f_519;
}

void func_518(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2FB46
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_465(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_465(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

int func_519(struct<3> Param0)//Position - 0x2FBEE
{
	float fVar0;
	
	if (Global_2667225.f_596 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2667225.f_593);
		if (fVar0 < Global_2667225.f_596)
		{
			return 1;
		}
	}
	return 0;
}

bool func_520(var uParam0, bool bParam1)//Position - 0x2FC27
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (func_503(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_501(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_521(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_521(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x2FD19
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_518(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_524(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_522(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_503(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_501(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_522(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)//Position - 0x2FE1C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_523(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_509(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_509(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_523(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_523(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_509(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_509(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_523(struct<3> Param0, struct<3> Param1)//Position - 0x300ED
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_524(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x30126
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_525(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x30225
{
	int iVar0;
	bool bVar1;
	
	if (func_577(Param0))
	{
		if (func_528(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_526(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_477(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_518(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_526(var uParam0, bool bParam1, bool bParam2)//Position - 0x302E1
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_514(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_527(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_514(Var2, &uVar1) || func_519(Var2))
			{
				Var2 = { *uParam0 };
				func_527(&Var2, &(Global_2667225.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_527(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x30365
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_521(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_521(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_521(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_518(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_524(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_522(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_528(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3046F
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (func_515(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_527(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_528(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_527(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_529(var uParam0, var uParam1, var uParam2)//Position - 0x3054A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_525(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_520(uParam0, 1))
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
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_532(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_531();
		}
		else
		{
			func_530();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_499(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_525(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!func_498(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_536(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_536(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_457(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_491(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_490(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
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
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_488(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
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
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
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

void func_530()//Position - 0x30BE9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
}

void func_531()//Position - 0x30C16
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		Global_2667225.f_2160[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667225.f_1754)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
		uVar3 = Global_2667225.f_2160[iVar1];
		Global_2667225.f_2160[iVar1] = Global_2667225.f_2160[iVar2];
		Global_2667225.f_2160[iVar2] = uVar3;
		iVar0++;
	}
}

void func_532(struct<3> Param0)//Position - 0x30CA7
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = func_533(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

int func_533(struct<3> Param0, float fParam1, float fParam2)//Position - 0x30CE2
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667225.f_1754)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2667225.f_1755[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_534(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x30D44
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
				if (func_535(Param0, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_468(Param0, fParam1, iParam2, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680265.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_10(iVar2, 0, 1) && func_10(iParam3, 0, 1))
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

int func_535(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x30E1E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_466(iParam1, 1008981770);
	fVar1 = func_466(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_536(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x30E5E
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (func_541(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_537(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_537(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x30F70
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_10(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_538(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
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
		if (func_10(iVar1, 1, 1))
		{
			if (!func_35(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_473(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_538(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_538(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
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

Vector3 func_538(int iParam0)//Position - 0x31128
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_540() && Global_1853348[iVar0 /*834*/].f_804) && !func_539(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_467(iParam0);
}

int func_539(struct<3> Param0)//Position - 0x3117B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_540()//Position - 0x311A5
{
	return Global_2714762.f_19;
}

int func_541(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x311B3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_10(iVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_473(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_469(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_467(iVar1), Param0, true) < fParam1)
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

int func_542(struct<3> Param0)//Position - 0x312B7
{
	var uVar0;
	
	if (Global_2815059.f_924 && func_543(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_543(struct<3> Param0, var uParam1)//Position - 0x312DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_555(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_544(iVar1))
			{
				if (func_555(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x31341
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_554(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_11())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_278 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	if (func_553(PLAYER::PLAYER_ID(), 0) || (func_550(PLAYER::PLAYER_ID()) && func_427(func_549(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_548(PLAYER::PLAYER_ID()) || (func_550(PLAYER::PLAYER_ID()) && func_427(func_549(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_547(PLAYER::PLAYER_ID()) || (func_550(PLAYER::PLAYER_ID()) && func_427(func_549(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_546(PLAYER::PLAYER_ID()) || (func_550(PLAYER::PLAYER_ID()) && func_427(func_549(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_545(PLAYER::PLAYER_ID()) || (func_550(PLAYER::PLAYER_ID()) && func_427(func_549(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_545(int iParam0)//Position - 0x314A9
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_546(int iParam0)//Position - 0x314EF
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_547(int iParam0)//Position - 0x31536
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_11())
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x31595
{
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_11())
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x315F5
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_550(int iParam0)//Position - 0x31626
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		if (func_552(iParam0) && !func_551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_551(int iParam0)//Position - 0x3165F
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x31690
{
	if (iParam0 != func_11() && func_10(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_553(int iParam0, bool bParam1)//Position - 0x316C1
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
	if (iParam0 != func_11())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != func_11())
			{
				return func_427(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x3174F
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

int func_555(struct<3> Param0, int iParam1)//Position - 0x317A0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_515(Param0, &(Global_2672169[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_556(struct<3> Param0, int iParam1)//Position - 0x317F4
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2667225.f_45.f_319)
	{
		return;
	}
	if (!func_573())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_572(Param0);
		if (iVar1 > -1)
		{
			func_584();
			switch (iVar1)
			{
				case 0:
					func_571(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_571(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_571(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_571(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_571(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_571(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_571(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_571(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_571(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_571(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_571(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_571(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_571(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_571(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_571(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_571(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_571(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_571(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_571(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_571(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_571(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_571(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_571(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_571(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_571(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_571(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_571(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_571(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_571(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_571(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_571(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_571(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_571(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_571(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_571(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_571(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_571(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_571(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_571(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_571(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_571(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_571(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_571(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_571(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_571(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_571(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_571(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_571(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_571(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_571(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_571(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_571(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_571(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_569(78);
					break;
				
				case 11:
					func_569(79);
					break;
				
				case 12:
					func_569(82);
					break;
				
				case 13:
					func_569(81);
					break;
				
				case 14:
					func_569(73);
					break;
				
				case 15:
					func_571(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_571(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_571(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_571(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_569(75);
					break;
				
				case 17:
					func_569(76);
					break;
				
				case 18:
					func_569(77);
					break;
				
				case 19:
					func_571(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_571(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_571(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_571(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_569(80);
					break;
				
				case 21:
				case 25:
					func_569(87);
					break;
				
				case 22:
				case 26:
					func_569(88);
					break;
				
				case 23:
				case 27:
					func_569(89);
					break;
				
				case 24:
				case 28:
					func_569(90);
					break;
				
				case 29:
				case 30:
					if (func_568(iParam1))
					{
						func_569(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32);
					}
					break;
				
				case 31:
					func_571(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_571(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_571(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_571(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_571(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_571(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_571(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_571(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_571(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_571(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_571(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_571(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_571(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_571(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_571(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_571(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_571(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_571(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_571(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_571(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_571(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_571(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_571(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_571(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_571(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_571(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_571(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_571(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_571(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_571(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_571(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_571(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_571(-194.254f, -2018.756f, 26.62f, 75f);
					func_571(-186.956f, -2031.369f, 26.62f, 338f);
					func_571(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_571(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_571(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_571(-233.372f, -2089.601f, 26.62f, 304f);
					func_571(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_571(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_571(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_571(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_571(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_571(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_571(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_571(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_571(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_571(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_571(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_571(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_571(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_571(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_571(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_571(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_565(Param0, &iVar2, &iVar3) || (func_543(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))))
		{
			func_584();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2667225.f_516 = 1;
				}
				if (!iVar3[iVar0] && func_80(iVar2[iVar0], -1))
				{
					if (func_568(iParam1))
					{
						func_569(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_564(PLAYER::PLAYER_PED_ID()) || func_563(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam1))
					{
						if (func_562(iParam1))
						{
							func_561(iVar2[iVar0]);
						}
						else if (func_560(iParam1))
						{
							func_559(iVar2[iVar0]);
							func_561(iVar2[iVar0]);
						}
						else
						{
							func_559(iVar2[iVar0]);
							func_561(iVar2[iVar0]);
						}
					}
					else
					{
						func_557(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_569(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_557(int iParam0, int iParam1)//Position - 0x325EC
{
	switch (iParam0)
	{
		case 23:
			func_571(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_571(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_571(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_571(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_571(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_571(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_571(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_571(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_571(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_571(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_571(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_571(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_571(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_571(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_571(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_571(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_571(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_571(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_571(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_571(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_571(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_571(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_571(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_571(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_571(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_571(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_571(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_571(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_571(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_571(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_571(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_571(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_571(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_571(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_571(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_571(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_571(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_571(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_571(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_571(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_571(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_571(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_571(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_571(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_571(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_571(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_571(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_571(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_571(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_571(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_571(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_571(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_571(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_571(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_571(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_571(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_571(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_571(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_571(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_571(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_571(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_571(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_571(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_571(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_571(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_571(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_571(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_571(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_571(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_571(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_571(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_571(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_571(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_571(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_571(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_571(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_571(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_571(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_571(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_571(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_571(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_571(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_571(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_571(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_571(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_571(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_571(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_571(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_571(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_571(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_571(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_571(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_571(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_571(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_571(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_571(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_571(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_571(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_571(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_571(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_571(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_571(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_571(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_571(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_571(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_571(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_571(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_571(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_571(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_571(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_571(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_571(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_571(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_571(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_571(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_571(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_571(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_571(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_571(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_571(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_571(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_571(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_571(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_571(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_571(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_571(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_571(142.7427f, -2536.147f, 5f, 205.0002f);
			func_571(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_571(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_571(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_571(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_571(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_571(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_571(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_571(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_571(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_571(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_571(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_571(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_571(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_571(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_571(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_571(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_571(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_571(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_571(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_571(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_571(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_571(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_571(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_571(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_571(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_571(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_571(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_571(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_571(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_571(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_571(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_571(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_571(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_571(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_571(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_571(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_571(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_571(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_571(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_571(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_571(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_571(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_571(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_571(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_571(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_571(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_571(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_571(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_571(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_571(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_571(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_571(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_571(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_571(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_571(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_571(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_571(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_571(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_571(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_571(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_571(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_571(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_571(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_571(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_571(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_571(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_571(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_571(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_571(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_571(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_571(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_571(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_571(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_571(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_571(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_571(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_571(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_571(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_571(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_571(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_571(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_571(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_571(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_571(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_571(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_571(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_571(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_571(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_571(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_571(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_571(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_571(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_571(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_571(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_571(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_571(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_571(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_571(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_571(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_571(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_571(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_571(-1823.414f, 3092.762f, 31.843f, 330f);
			func_571(-1819.045f, 3100.435f, 31.845f, 330f);
			func_571(-1833.313f, 3075.722f, 31.838f, 330f);
			func_571(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_571(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_571(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_571(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_571(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_571(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_571(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_571(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_571(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_571(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_571(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_571(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_571(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_571(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_571(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_571(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_571(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_571(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_571(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_571(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_571(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_571(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_571(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_571(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_571(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_571(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_571(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_571(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_571(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_571(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_571(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_571(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_571(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_571(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_571(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_571(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_571(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_571(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_571(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_571(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_571(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_571(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_571(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_571(1231.279f, 2910.881f, 43.3085f, 12f);
				func_571(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_571(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_571(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_571(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_571(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_571(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_571(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_571(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_571(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_571(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_571(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_571(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_571(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_571(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_571(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_571(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_571(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_571(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_571(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_571(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_571(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_571(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_571(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_571(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_571(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_571(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_571(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_571(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_571(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_571(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_571(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_571(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_571(3.855f, 2672.388f, 78.437f, 319.2f);
				func_571(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_571(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_571(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_571(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_571(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_571(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_571(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_571(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_571(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_571(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_571(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_571(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_571(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_571(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_571(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_571(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_571(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_571(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_571(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_571(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_571(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_571(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_571(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_571(102.851f, 2688.009f, 51.732f, 224f);
				func_571(109.815f, 2681.012f, 51.112f, 224f);
				func_571(116.355f, 2674.26f, 50.529f, 224f);
				func_571(125.138f, 2665.98f, 49.8f, 224f);
				func_571(132.228f, 2659.865f, 49.26f, 228.4f);
				func_571(139.354f, 2653.536f, 48.737f, 228.4f);
				func_571(88.512f, 2702.995f, 53.042f, 224.199f);
				func_571(81.565f, 2710.357f, 53.67f, 224.199f);
				func_571(75.156f, 2716.981f, 54.223f, 224.199f);
				func_571(68.442f, 2723.806f, 54.775f, 226.199f);
				func_571(61.449f, 2730.606f, 55.308f, 226.199f);
				func_571(53.702f, 2738.167f, 55.855f, 226.199f);
				func_571(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_571(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_571(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_571(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_571(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_571(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_571(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_571(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_571(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_571(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_571(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_571(2714.633f, 3918.283f, 42.938f, 16f);
				func_571(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_571(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_571(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_571(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_571(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_571(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_571(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_571(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_571(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_571(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_571(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_571(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_571(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_571(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_571(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_571(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_571(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_571(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_571(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_571(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_571(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_571(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_571(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_571(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_571(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_571(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_571(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_571(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_571(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_571(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_571(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_571(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_571(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_571(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_571(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_571(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_571(3374.923f, 5520.177f, 20.3207f, 86f);
				func_571(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_571(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_571(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_571(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_571(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_571(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_571(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_571(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_571(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_571(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_571(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_571(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_571(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_571(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_571(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_571(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_571(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_571(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_571(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_571(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_571(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_571(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_571(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_571(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_571(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_571(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(43.848f, 6845.657f, 13.379f, 247.2f);
				func_571(50.379f, 6861.146f, 15.105f, 247.2f);
				func_571(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_571(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_571(55.806f, 6875.081f, 14.824f, 247.2f);
				func_571(11.616f, 6877.079f, 11.466f, 247.2f);
				func_571(18.954f, 6891.633f, 11.37f, 247.2f);
				func_571(26.68f, 6907.587f, 11.869f, 247.2f);
				func_571(7.479f, 6907.895f, 12.024f, 247.2f);
				func_571(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_571(35.591f, 6836.608f, 13.288f, 274.4f);
				func_571(36.028f, 6830.135f, 13.801f, 270.8f);
				func_571(35.114f, 6823.884f, 14.527f, 260.8f);
				func_571(48.779f, 6838.693f, 14.337f, 273.6f);
				func_571(56.738f, 6821.8f, 15.244f, 244.8f);
				func_571(48.377f, 6825.895f, 14.656f, 249.8f);
				func_571(49.11f, 6831.439f, 13.991f, 274.8f);
				func_571(53.544f, 6818.275f, 16.342f, 243f);
				func_571(46.162f, 6821.945f, 15.483f, 249.8f);
				func_571(60.129f, 6836.8f, 15.605f, 269.6f);
				func_571(40.88f, 6802.952f, 20.113f, 242.6f);
				func_571(48.203f, 6799.134f, 20.897f, 244.4f);
				func_571(70.449f, 6809.271f, 16.846f, 243f);
				func_571(61.436f, 6814.266f, 16.71f, 244.2f);
				func_571(56.142f, 6793.458f, 19.806f, 242.6f);
				func_571(65.759f, 6791.12f, 18.433f, 276.4f);
				func_571(77.305f, 6805.391f, 18.558f, 245.6f);
				func_571(85.893f, 6800.243f, 18.535f, 249.8f);
				func_571(56.85f, 6780.582f, 18.822f, 297.999f);
				func_571(65.636f, 6784.669f, 18.789f, 293.799f);
				func_571(74.121f, 6788.498f, 18.739f, 293.799f);
				func_571(97.779f, 6796.32f, 19.02f, 276.799f);
				func_571(106.76f, 6796.983f, 18.914f, 272.599f);
				func_571(112.387f, 6802.858f, 18.994f, 210.599f);
				func_571(117.58f, 6802.644f, 18.663f, 209.399f);
				func_571(122.481f, 6802.693f, 18.468f, 209.399f);
				func_571(127.182f, 6802.686f, 18.218f, 209.399f);
				func_571(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_571(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_571(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_571(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_571(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_571(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_571(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_571(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_571(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_571(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_571(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_571(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_571(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_571(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_571(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_571(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_571(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_571(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_571(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_571(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_571(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_571(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_571(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_571(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_571(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_571(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_571(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_571(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_571(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_571(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_571(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_571(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_571(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_571(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_571(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_571(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_571(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_571(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_571(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_571(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_571(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_571(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_571(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_571(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_571(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_571(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_571(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_571(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_571(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_571(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_571(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_571(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_571(30.027f, 3292.351f, 38.604f, 140.199f);
				func_571(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_571(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_571(23.897f, 3283.152f, 39.381f, 145.399f);
				func_571(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_571(18.723f, 3274.025f, 40.054f, 155.799f);
				func_571(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_571(36.958f, 3298.847f, 38.001f, 127.799f);
				func_571(54.165f, 3311.582f, 36.517f, 303.799f);
				func_571(61.607f, 3317.105f, 35.916f, 306.999f);
				func_571(68.994f, 3323.129f, 35.364f, 308.199f);
				func_571(76.266f, 3329.467f, 34.805f, 311.399f);
				func_571(82.757f, 3335.915f, 34.344f, 316.598f);
				func_571(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_571(14.664f, 3263.688f, 40.931f, 160.398f);
				func_571(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_571(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_571(89.575f, 3343.311f, 33.932f, 318.398f);
				func_571(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_571(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_571(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_571(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_571(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_571(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_571(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_571(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_571(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_571(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_571(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_571(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_571(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_571(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_571(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_571(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_571(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_571(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_571(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_571(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_571(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_571(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_571(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_571(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_571(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_571(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_571(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_571(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_571(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_571(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_571(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_571(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_571(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_571(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_571(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_571(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_571(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_571(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_571(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_571(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_571(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_571(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_59 == 0)
			{
				func_571(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_571(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_571(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_571(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_571(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_571(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_571(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_571(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_571(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_571(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_571(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_571(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_571(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_571(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_571(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_571(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_571(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_571(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_571(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_571(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_571(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_571(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_571(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_571(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_571(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_571(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_571(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_571(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_571(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_571(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_571(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_571(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_571(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_571(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_571(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_571(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_571(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_571(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_558(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_558(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_558(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_558(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_558(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_558(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_558(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_558(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_558(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_558(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_558(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_558(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_558(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_558(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_558(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_558(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_558(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_558(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_558(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_558(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_558(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_558(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_558(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_558(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_558(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_558(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_558(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_558(struct<3> Param0, float fParam1, int iParam2, bool bParam3)//Position - 0x364C6
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_460(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam1, Var3) };
		func_571(Var4, fParam1);
	}
	else
	{
		func_571(Param0, fParam1);
	}
}

void func_559(int iParam0)//Position - 0x36540
{
	switch (iParam0)
	{
		case 83:
			func_571(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_571(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_571(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_571(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_571(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_571(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_571(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_571(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_571(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_571(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_571(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_571(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_571(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_571(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_571(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_571(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_571(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_571(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_571(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_571(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_571(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_571(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_571(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_571(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_571(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_571(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_571(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_571(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_571(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_571(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_571(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_571(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_571(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_571(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_571(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_571(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_571(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_571(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_571(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_571(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_571(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_571(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_571(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_571(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_571(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_571(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_571(-1356.991f, -3242.228f, 12.945f, 330f);
			func_571(-1369.313f, -3234.758f, 12.945f, 330f);
			func_571(-1381.751f, -3227.408f, 12.945f, 330f);
			func_571(-1394.302f, -3220.021f, 12.945f, 330f);
			func_571(-1354.339f, -3223.129f, 12.945f, 330f);
			func_571(-1366.302f, -3215.809f, 12.945f, 330f);
			func_571(-1378.492f, -3208.645f, 12.945f, 330f);
			func_571(-1350.322f, -3203.405f, 12.945f, 330f);
			func_571(-1362.684f, -3196.451f, 12.945f, 330f);
			func_571(-1347.089f, -3182.69f, 12.945f, 330f);
			func_571(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_571(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_571(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_571(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_571(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_571(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_571(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_571(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_571(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_571(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_571(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_571(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_571(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_571(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_571(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_571(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_571(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_571(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_571(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_571(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_571(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_571(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_571(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_571(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_571(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_571(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_571(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_571(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_571(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_571(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_571(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_571(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_571(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_571(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_571(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_571(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_571(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_571(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_571(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_571(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_571(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_571(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_571(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_571(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_571(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_571(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_571(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_571(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_571(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_571(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_571(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_571(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_571(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_571(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_571(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_571(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_571(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_571(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_571(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_571(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_571(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_571(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_571(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_571(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_571(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_571(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_571(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_571(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_571(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_571(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_571(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_571(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_571(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_571(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_571(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_571(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_571(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_571(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_571(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_571(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_571(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_571(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_571(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_571(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_571(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_571(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_571(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_571(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_571(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_571(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_571(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_571(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_571(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_571(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_571(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_571(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_571(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_571(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_571(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_571(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_571(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_571(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_571(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_571(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_571(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_571(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_571(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_571(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_571(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_571(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_571(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_571(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_571(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_571(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_571(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_571(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_571(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_571(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_571(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_571(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_571(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_571(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_571(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_571(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_571(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_571(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_571(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_571(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_571(-2484.323f, 3249.294f, 31.828f, 151f);
			func_571(-2495.313f, 3255.746f, 31.828f, 151f);
			func_571(-2472.644f, 3242.684f, 31.828f, 151f);
			func_571(-2506.313f, 3262.27f, 31.823f, 151f);
			func_571(-2461.494f, 3235.93f, 31.828f, 151f);
			func_571(-2505.602f, 3238.049f, 31.828f, 151f);
			func_571(-2481.937f, 3224.8f, 31.828f, 151f);
			func_571(-2516.813f, 3244.266f, 31.823f, 151f);
			func_571(-2470.03f, 3217.899f, 31.828f, 151f);
			func_571(-2493.933f, 3231.308f, 31.828f, 151f);
			func_571(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_571(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_571(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_571(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_571(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_571(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_571(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_571(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_571(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_571(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_571(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_571(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_571(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_571(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_571(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_571(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_571(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_571(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_571(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_571(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_571(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_571(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_571(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_571(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_571(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_571(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_571(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_571(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_571(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_571(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_571(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_571(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_571(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_571(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_571(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_571(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_560(int iParam0)//Position - 0x37B0F
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
		case joaat("CONADA"):
			return 1;
		
		default:
	}
	return 0;
}

void func_561(int iParam0)//Position - 0x37BB9
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_571(-947.712f, -3367.704f, 12.944f, 60f);
			func_571(-904.692f, -3293.072f, 12.944f, 60f);
			func_571(-863.71f, -3221.978f, 12.944f, 60f);
			func_571(-966.418f, -3162.773f, 12.944f, 60f);
			func_571(-1007.435f, -3233.93f, 12.944f, 60f);
			func_571(-1050.455f, -3308.559f, 12.944f, 60f);
			func_571(-1145.673f, -3253.456f, 12.944f, 60f);
			func_571(-1098.386f, -3181.428f, 12.944f, 60f);
			func_571(-1060.474f, -3108.903f, 12.944f, 60f);
			func_571(-1155.391f, -3053.632f, 12.944f, 60f);
			func_571(-1196.114f, -3125.146f, 12.948f, 60f);
			func_571(-1235.552f, -3201.86f, 12.944f, 60f);
			func_571(-1344.446f, -3139.177f, 12.944f, 60f);
			func_571(-1301.308f, -3064.341f, 12.944f, 60f);
			func_571(-1260.135f, -2992.912f, 12.944f, 60f);
			func_571(-1364.244f, -2932.9f, 12.98f, 60f);
			func_571(-1405.284f, -3004.108f, 12.96f, 60f);
			func_571(-1448.29f, -3078.72f, 12.95f, 60f);
			func_571(-1535.732f, -3028.318f, 12.945f, 60f);
			func_571(-1492.639f, -2953.558f, 12.945f, 60f);
			func_571(-1451.506f, -2882.2f, 12.944f, 60f);
			func_571(-1553.927f, -2823.12f, 13.002f, 60f);
			func_571(-1595.097f, -2894.571f, 12.944f, 60f);
			func_571(-1637.836f, -2968.714f, 12.945f, 60f);
			func_571(-1740.971f, -2911.484f, 12.944f, 330f);
			func_571(-1696.293f, -2833.978f, 12.944f, 330f);
			func_571(-1651.502f, -2756.273f, 12.945f, 330f);
			func_571(-1588.258f, -2647.575f, 12.944f, 330f);
			func_571(-1536.862f, -2681.378f, 12.945f, 330f);
			func_571(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_571(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_571(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_571(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_571(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_571(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_571(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_571(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_571(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_571(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_571(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_571(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_571(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_571(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_571(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_571(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_571(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_571(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_571(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_571(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_571(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_571(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_571(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_571(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_571(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_571(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_571(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_571(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_571(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_571(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_571(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_562(int iParam0)//Position - 0x38192
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
			return 1;
		
		default:
	}
	return 0;
}

int func_563(int iParam0)//Position - 0x38230
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_564(int iParam0)//Position - 0x3826E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_565(struct<2> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x382AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_544(iVar0))
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
			if (func_566(iVar0))
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
		if (iVar2 < *uParam2)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
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

int func_566(int iParam0)//Position - 0x38412
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_567(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != func_11())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_285 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_567(int iParam0)//Position - 0x38486
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

int func_568(int iParam0)//Position - 0x3850D
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_569(int iParam0)//Position - 0x3853B
{
	switch (iParam0)
	{
		case 78:
			func_571(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_571(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_571(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_571(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case 79:
			func_571(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_571(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_571(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_571(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_571(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_571(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_571(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_571(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_571(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_571(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_571(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_571(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_571(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_571(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_571(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_571(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_571(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_571(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_571(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_571(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_571(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_571(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_571(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_571(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_571(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_571(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_571(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_571(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_571(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_571(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_571(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_571(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_570())
			{
				func_571(-1608.297f, -556.875f, 33.406f, 310f);
				func_571(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_571(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_571(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_571(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_571(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_571(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_571(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_571(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_571(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_571(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_571(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_570())
			{
				func_571(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_571(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_571(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_571(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_571(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_571(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_571(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_571(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_571(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_571(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_571(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_571(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_570())
			{
				func_571(-102.737f, -597.379f, 35.053f, 160.999f);
				func_571(-97.793f, -589.568f, 35.082f, 134.799f);
				func_571(-110.357f, -619.402f, 35.055f, 160.599f);
				func_571(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_571(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_571(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_571(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_571(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_571(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_571(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_571(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_571(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_570())
			{
				func_571(-59.349f, -779.238f, 43.134f, 228.398f);
				func_571(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_571(-65.212f, -772.66f, 43.151f, 219.398f);
				func_571(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_571(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_571(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_571(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_571(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_571(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_571(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_571(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_571(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_571(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_571(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_571(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_571(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_571(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_571(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_571(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_571(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_571(-1464.5f, -927.9f, 9f, 296.7991f);
			func_571(-1466f, -926.1f, 9f, 296.7991f);
			func_571(-1467.9f, -924.7f, 9f, 296.7991f);
			func_571(-1469.7f, -923.7f, 9f, 296.7991f);
			func_571(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_571(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_571(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_571(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_571(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_571(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_571(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_571(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_571(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_571(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_571(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_571(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_571(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_571(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_571(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_571(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_571(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_571(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_571(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_571(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_571(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_571(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_571(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_571(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_571(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_571(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_571(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_571(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_571(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_571(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_571(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_571(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_571(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_571(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_571(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_571(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_571(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_571(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_571(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_571(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_571(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_571(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_571(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_571(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_571(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_571(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_571(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_571(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_571(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_571(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_571(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_571(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_571(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_571(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_571(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_571(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_571(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_571(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_571(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_571(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_571(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_571(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_571(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_571(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_571(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_571(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_571(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_571(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_571(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_571(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_571(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_571(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_571(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_571(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_571(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_571(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_571(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_571(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_571(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_571(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_571(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_571(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_571(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_571(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_570()//Position - 0x39736
{
	return Global_2714762.f_17;
}

void func_571(struct<3> Param0, float fParam1)//Position - 0x39744
{
	if (Global_2667225.f_1754 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/] = { Param0 };
		Global_2667225.f_1755[Global_2667225.f_1754 /*4*/].f_3 = fParam1;
		Global_2667225.f_1754++;
	}
}

int func_572(struct<3> Param0)//Position - 0x397A9
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2667225.f_2904, Param0) < Global_2667225.f_2912)
	{
		return Global_2667225.f_2907;
	}
	Global_2667225.f_2904 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674547[iVar0 /*7*/].f_2 + Global_2674547[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_511(Param0, &(Global_2674547[iVar0 /*7*/])))
		{
			Global_2667225.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667225.f_2907 = -1;
	return -1;
}

int func_573()//Position - 0x3984B
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2715699.f_6415)
	{
		return 0;
	}
	return 0;
}

int func_574(struct<2> Param0, var uParam1, bool bParam2, float fParam3)//Position - 0x39873
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_544(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
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

void func_575()//Position - 0x398F5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667225.f_2737[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_576(var uParam0, bool bParam1)//Position - 0x39920
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674503[iVar0 /*7*/].f_2 + Global_2674503[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_511(Var1, &(Global_2674503[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_522(&Var1, Global_2674503[iVar0 /*7*/], Global_2674503[iVar0 /*7*/].f_3, Global_2674503[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_577(struct<3> Param0)//Position - 0x399BD
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!func_581(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_580(Param0, 1008981770))
			{
				if (!func_528(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_528(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_579(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_578(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_528(&Var1, 0, 0, 0, 1))
					{
						if (!func_528(&Param0, 0, 0, 0, 1))
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

Vector3 func_578(var uParam0)//Position - 0x39A7D
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

int func_579(struct<3> Param0, float fParam1)//Position - 0x39AC6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_515(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_580(struct<3> Param0, float fParam1)//Position - 0x39B0E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (func_515(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_581(int iParam0, bool bParam1)//Position - 0x39B55
{
	if (func_400() != 0)
	{
		return func_582(iParam0) != 0;
	}
	return func_494(iParam0, bParam1, 0);
}

int func_582(int iParam0)//Position - 0x39B7C
{
	if (func_10(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_583(bool bParam0)//Position - 0x39B9E
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

void func_584()//Position - 0x39BC1
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667225.f_1755[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667225.f_1754 = 0;
}

void func_585()//Position - 0x39BF5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_691[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_691[iVar0])
			{
				if (!Global_2667225.f_687[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_687[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2667225.f_687[iVar0]);
						Global_2667225.f_687[iVar0] = -1;
					}
					else
					{
						Global_2667225.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667225.f_687[iVar0] == -1)
		{
			Global_2667225.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_586()//Position - 0x39CA1
{
	if (!Global_2667225.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < func_583(0))
	{
		return 1;
	}
	return 0;
}

int func_587()//Position - 0x39CD5
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2667225.f_517 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_589(PLAYER::PLAYER_ID()) && !func_588(0))
	{
		return 0;
	}
	return 1;
}

bool func_588(bool bParam0)//Position - 0x39D2C
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

int func_589(int iParam0)//Position - 0x39D3D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

int func_590(int iParam0)//Position - 0x39D5F
{
	switch (iParam0)
	{
		case 0:
			return 32;
		
		case 1:
			return 29;
		
		default:
	}
	return 0;
}

bool func_591(int iParam0, bool bParam1, bool bParam2)//Position - 0x39D85
{
	return func_592(1, iParam0, 1, bParam1, bParam2);
}

int func_592(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x39D99
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_596(iParam0) - func_595(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_595(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_596(iParam0) - func_594(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_595(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_596(iParam0) - func_595(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - func_593(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_593(int iParam0)//Position - 0x39E5F
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

int func_594(int iParam0)//Position - 0x39E99
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		
		case 1:
			return Global_1661006.f_2;
			break;
		
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_595(int iParam0, bool bParam1)//Position - 0x39EDF
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_596(int iParam0)//Position - 0x39F7C
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		
		case 1:
			return Global_1661015;
			break;
		
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

bool func_597(int iParam0)//Position - 0x39FBC
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_598(var uParam0, int iParam1)//Position - 0x39FDA
{
	if (func_599(uParam0) != iParam1)
	{
		uParam0->f_46 = iParam1;
	}
}

int func_599(var uParam0)//Position - 0x39FF3
{
	return uParam0->f_46;
}

int func_600()//Position - 0x39FFF
{
	if (Global_2703735.f_61.f_16)
	{
		return 1;
	}
	if (Global_1966134)
	{
		return 1;
	}
	if (!func_38())
	{
		return 1;
	}
	if (!func_10(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (func_384(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_601(var uParam0)//Position - 0x3A075
{
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return 0;
	}
	if (func_400() != 0)
	{
		return 0;
	}
	if (func_607(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_384(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_383())
	{
		return 0;
	}
	if (!func_602(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_602(var uParam0)//Position - 0x3A0D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = iVar0;
		if (func_603(iVar2))
		{
			*uParam0 = iVar2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_603(int iParam0)//Position - 0x3A107
{
	var uVar0;
	
	uVar0 = func_228(8267, -1, 0);
	switch (iParam0)
	{
		case 0:
			if (!func_605(0))
			{
				if (BitTest(uVar0, 4) && func_604(61, -1))
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (func_605(1))
			{
				return 0;
			}
			if (func_326(157, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_604(int iParam0, int iParam1)//Position - 0x3A16E
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2869167[iParam0 /*3*/][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_605(int iParam0)//Position - 0x3A19A
{
	switch (iParam0)
	{
		case 0:
			return func_606(229, -1);
		
		case 1:
			return func_326(158, -1);
		
		default:
	}
	return 0;
}

int func_606(int iParam0, int iParam1)//Position - 0x3A1CA
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_50(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_607(int iParam0, bool bParam1, bool bParam2)//Position - 0x3A1F6
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_608()//Position - 0x3A25A
{
	if (!func_38())
	{
		return 1;
	}
	if (Global_1966133)
	{
		return 1;
	}
	if (!Global_1966135)
	{
		if (func_609(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_609(int iParam0)//Position - 0x3A291
{
	return func_610(&(Global_2689235[iParam0 /*453*/].f_434), 0);
}

var func_610(var uParam0, int iParam1)//Position - 0x3A2AA
{
	return BitTest(*uParam0, iParam1);
}

int func_611()//Position - 0x3A2B8
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_617())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_616())
	{
		return 1;
	}
	if (func_615(159))
	{
		if (!func_614())
		{
			return 1;
		}
	}
	if (func_615(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_612() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_612()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_612()//Position - 0x3A33C
{
	switch (func_400())
	{
		case 0:
			return func_613();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_613()//Position - 0x3A36F
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_614()//Position - 0x3A393
{
	return Global_2714762.f_698;
}

int func_615(int iParam0)//Position - 0x3A3A2
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_616()//Position - 0x3A3B9
{
	return Global_2725403;
}

bool func_617()//Position - 0x3A3C5
{
	return Global_2714762.f_693;
}

void func_618()//Position - 0x3A3D4
{
	SYSTEM::WAIT(0);
}

void func_619()//Position - 0x3A3E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_65[iVar0 /*2*/].f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_65[iVar0 /*2*/].f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
	Global_1966133 = 0;
	func_620();
}

void func_620()//Position - 0x3A449
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_621()//Position - 0x3A455
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_623(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_65, 65, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_64, 1, 0);
	if (!func_622())
	{
		func_619();
	}
}

int func_622()//Position - 0x3A48A
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
		if (func_617())
		{
			return 0;
		}
		if (func_615(157))
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

int func_623(int iParam0, int iParam1, bool bParam2)//Position - 0x3A4E3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_620();
			}
			else
			{
				return 0;
			}
		}
		if (!func_588(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_620();
					}
					else
					{
						return 0;
					}
				}
				if (func_617())
				{
					if (!bParam2)
					{
						func_620();
					}
					else
					{
						return 0;
					}
				}
				if (func_615(157))
				{
					if (!bParam2)
					{
						func_620();
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
					func_620();
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
				func_620();
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
			func_620();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

