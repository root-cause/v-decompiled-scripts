#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
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
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	float fLocal_70[2] = { 0f, 0f };
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<21> Local_78 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_99[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_67 = -1f;
	iLocal_73 = 23;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_97(ScriptParam_0);
	}
	while (true)
	{
		func_96();
		if (func_88())
		{
			func_85();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2738587.f_461)
			{
				Local_78.f_20 = 1;
				if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					func_85();
				}
			}
		}
		else if (Local_78.f_20)
		{
			func_85();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_84();
			switch (func_83(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_82() > 0)
					{
						iLocal_99[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					func_62();
					if (func_82() == 3)
					{
						iLocal_99[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_85();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_82())
				{
					case 0:
						Local_78.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x15D
{
	func_7();
	if (Local_78.f_1.f_2 == 5)
	{
		Local_78.f_0 = 3;
	}
	if (func_6(&(Local_78.f_1.f_17)))
	{
		if (func_4(&(Local_78.f_1.f_17), 20000, 0))
		{
			Local_78.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_78.f_0 = 3;
	}
	if (bLocal_61)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_78.f_0 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_78.f_0 = 3;
	}
	if (func_2())
	{
		Local_78.f_0 = 3;
	}
}

bool func_2()//Position - 0x1C8
{
	return Global_1919244.f_3;
}

bool func_3()//Position - 0x1D6
{
	return Global_1574582;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x1E2
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x240
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

bool func_6(var uParam0)//Position - 0x285
{
	return uParam0->f_1;
}

void func_7()//Position - 0x291
{
	switch (Local_78.f_1.f_2)
	{
		case 0:
			func_61(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_78.f_1.f_15), 0, 0);
					func_61(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_61(3);
				func_14(0);
			}
			if (!func_12(Local_78.f_1))
			{
				if (func_11(Local_78.f_1.f_3[0 /*2*/]) && func_11(Local_78.f_1.f_3[1 /*2*/]))
				{
					func_61(5);
				}
			}
			else if (func_11(Local_78.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_78.f_1.f_3[1 /*2*/]))
				{
					func_61(5);
				}
			}
			else if (func_11(Local_78.f_1.f_3[1 /*2*/]))
			{
				func_61(3);
			}
			else
			{
				if (func_6(&(Local_78.f_1.f_15)))
				{
					if (func_4(&(Local_78.f_1.f_15), Global_262145.f_11283 /* Tunable: ISLANDBACKUPHELILIFESPANMS */, 0))
					{
						func_61(3);
					}
				}
				if (func_10(PLAYER::PLAYER_ID(), 0))
				{
					func_61(3);
				}
				if (bLocal_62)
				{
					func_61(3);
				}
				if (func_8(PLAYER::PLAYER_ID(), 136))
				{
					func_61(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_78.f_1))
			{
				if (func_11(Local_78.f_1.f_3[0 /*2*/]) && func_11(Local_78.f_1.f_3[1 /*2*/]))
				{
					func_61(5);
				}
			}
			else if (func_11(Local_78.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_78.f_1.f_3[1 /*2*/]))
				{
					func_61(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x43D
{
	if (Global_1886967[iParam0 /*609*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x45D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1886967[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x480
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

int func_11(int iParam0)//Position - 0x496
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_12(int iParam0)//Position - 0x4B5
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x4D5
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

void func_14(int iParam0)//Position - 0x50E
{
	Global_2738587.f_460 = iParam0;
}

bool func_15()//Position - 0x51F
{
	return Global_2738587.f_460;
}

void func_16()//Position - 0x52E
{
	if (Global_2672741.f_3807)
	{
		func_17(1, 600000);
		bLocal_62 = true;
	}
	if (Global_2672741.f_3806 >= 250f)
	{
		func_17(1, 600000);
		bLocal_62 = true;
	}
}

void func_17(int iParam0, int iParam1)//Position - 0x568
{
	if (Global_2672741.f_3690[iParam0] < iParam1)
	{
		Global_2672741.f_3690[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2672741.f_3689), iParam0);
}

void func_18()//Position - 0x59A
{
	iLocal_65 = 0;
	iLocal_66 = 0;
	if (func_12(Local_78.f_1))
	{
		iLocal_65++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_78.f_1)))
	{
		func_26(&(Local_78.f_1));
		iLocal_65++;
	}
	if (func_11(Local_78.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_78.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_78.f_1.f_3[0 /*2*/]));
			iLocal_66++;
		}
	}
	else
	{
		iLocal_66++;
	}
	if (func_11(Local_78.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_78.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_78.f_1.f_3[1 /*2*/]));
			iLocal_66++;
		}
	}
	else
	{
		iLocal_66++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != iLocal_65)
	{
		if (func_25(iLocal_65, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_65);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != iLocal_66)
	{
		if (func_19(iLocal_66, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_66);
		}
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)//Position - 0x689
{
	return func_20(0, iParam0, 1, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x69D
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681028, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1845263[PLAYER::PLAYER_ID() /*877*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x763
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

int func_22(int iParam0)//Position - 0x79D
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

int func_23(int iParam0, bool bParam1)//Position - 0x7E3
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

int func_24(int iParam0)//Position - 0x880
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

bool func_25(int iParam0, bool bParam1, bool bParam2)//Position - 0x8C0
{
	return func_20(1, iParam0, 1, bParam1, bParam2);
}

void func_26(var uParam0)//Position - 0x8D4
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_27()//Position - 0x8F8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = joaat("A_M_M_Farmer_01");
	if (func_39(Local_78.f_1.f_1))
	{
		if (func_39(Local_78.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_78.f_1))
			{
				if (func_36(&(Local_78.f_1), Local_78.f_1.f_1, Local_78.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					iVar1 = NETWORK::NET_TO_VEH(Local_78.f_1);
					if (VEHICLE::GET_NUM_MOD_KITS(iVar1) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar1, 0);
					}
					VEHICLE::SET_VEHICLE_COLOURS(iVar1, 127, 0);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar1, 1);
					PHYSICS::ACTIVATE_PHYSICS(iVar1);
					ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
					func_35(iVar1, 4);
					Global_2672741.f_3808 = iVar1;
					ENTITY::SET_ENTITY_HEALTH(iVar1, Global_262145.f_11284 /* Tunable: ISLANDBACKUPHELIHEALTH */, 0, 0);
					if (func_34(&(Local_78.f_1.f_3[0 /*2*/]), Local_78.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						iVar2 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[0 /*2*/]);
						func_29(Local_78.f_1.f_3[0 /*2*/]);
						func_28(iVar2, 0, 0, 1);
						NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar2, PLAYER::PLAYER_ID());
						func_35(iVar2, 4);
						Global_2672741.f_3808.f_1[0] = iVar2;
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 0, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 2, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 8, 0, 1, 0);
						PED::SET_PED_PROP_INDEX(iVar2, 1, 0, 0, false, 1);
						PED::SET_PED_PROP_INDEX(iVar2, 0, 0, 0, false, 1);
						if (func_34(&(Local_78.f_1.f_3[1 /*2*/]), Local_78.f_1, 4, Local_78.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_78.f_1.f_3[1 /*2*/]);
							func_28(NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							func_35(NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]), 4);
							Global_2672741.f_3808.f_1[1] = NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_78.f_1.f_3[1 /*2*/].f_1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_78.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB1A
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("WEAPON_ASSAULTRIFLE"), 300, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
	PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_70[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
	PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0, 0);
			PED::SET_PED_ARMOUR(iParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	}
}

void func_29(int iParam0)//Position - 0xBC4
{
	int iVar0;
	
	if (!func_31(PLAYER::PLAYER_ID(), 0, 0) && !func_30())
	{
		iVar0 = Global_1837306[5];
	}
	else
	{
		iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(iParam0), iVar0);
}

bool func_30()//Position - 0xC06
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)//Position - 0xC1F
{
	if (bParam1)
	{
		if (func_32(iParam0))
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

bool func_32(int iParam0)//Position - 0xC51
{
	return func_33(iParam0);
}

var func_33(int iParam0)//Position - 0xC5F
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_11.f_1, 0);
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC76
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

void func_35(int iParam0, int iParam1)//Position - 0xCFE
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xD31
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
			func_37(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0xE3A
{
	int iVar0;
	
	if (func_38(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_38(int iParam0, struct<3> Param1, int iParam4)//Position - 0xF0D
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

bool func_39(int iParam0)//Position - 0xFAB
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_40()//Position - 0xFC9
{
	struct<3> Var0;
	
	if (func_60(Local_78.f_1.f_8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { func_58(func_59(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_78.f_1.f_13) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_78.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_78.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_78.f_1.f_13++;
					if (Local_78.f_1.f_13 >= 12)
					{
						Local_78.f_1.f_13 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_41(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x10BC
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
		if (func_51(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_42(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x11CE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_50(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_48(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_50(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_43(iVar1) || !bParam10) && !Global_2657921[iVar1 /*463*/].f_270)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_48(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_48(iVar1), Param0, true) <= (fVar2 + fParam3))
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

int func_43(int iParam0)//Position - 0x1386
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657921[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)//Position - 0x13B1
{
	bool bVar0;
	
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x140A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x144B
{
	return Global_1574925;
}

int func_47(int iParam0)//Position - 0x1457
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

Vector3 func_48(int iParam0)//Position - 0x1479
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_49() && Global_1845263[iVar0 /*877*/].f_844) && !func_60(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_59(iParam0);
}

var func_49()//Position - 0x14CC
{
	return Global_2684312.f_19;
}

int func_50(int iParam0, bool bParam1, bool bParam2)//Position - 0x14DA
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

int func_51(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x153A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_50(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_52(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), Param0, true) < fParam3)
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

int func_52(int iParam0)//Position - 0x163E
{
	if (func_57(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2706987 = { func_56(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_53(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0, int iParam1)//Position - 0x1685
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (func_47(iVar0))
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)//Position - 0x16AE
{
	if (func_47(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_55();
}

int func_55()//Position - 0x16D1
{
	return -1;
}

struct<13> func_56(int iParam0)//Position - 0x16DA
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_57(int iParam0, int iParam1)//Position - 0x16F1
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_56(iParam0) };
		Global_2707000 = { func_56(iParam1) };
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

Vector3 func_58(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)//Position - 0x175E
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_59(int iParam0)//Position - 0x17AB
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60(struct<3> Param0)//Position - 0x17BE
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0)//Position - 0x17E8
{
	Local_78.f_1.f_2 = iParam0;
}

void func_62()//Position - 0x17F8
{
	func_68();
	func_63();
}

void func_63()//Position - 0x1808
{
	if (Local_78.f_1.f_2 == 2)
	{
		func_65();
	}
	else
	{
		func_64();
	}
}

void func_64()//Position - 0x1825
{
	if (HUD::DOES_BLIP_EXIST(iLocal_60))
	{
		HUD::REMOVE_BLIP(&iLocal_60);
	}
}

void func_65()//Position - 0x183C
{
	int iVar0;
	
	iVar0 = NETWORK::NET_TO_VEH(Local_78.f_1);
	if (!HUD::DOES_BLIP_EXIST(iLocal_60) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iLocal_60 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
		HUD::SET_BLIP_SPRITE(iLocal_60, 422 /*RADAR_PLAYER_HELI*/);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_60, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_60, "MPCT_MERRY3" /* GXT: Backup Helicopter */);
		func_66(&iLocal_60, 1);
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x188B
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_67(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_67(int iParam0)//Position - 0x18B1
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

void func_68()//Position - 0x1B19
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_78.f_1.f_2)
	{
		case 0:
			func_64();
			break;
		
		case 1:
			func_64();
			break;
		
		case 2:
			if (func_12(Local_78.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_78.f_1);
				func_65();
				if (func_81(Local_78.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1))
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_SEARCHLIGHT(iVar1))
						{
							if (func_80())
							{
								if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
								{
									VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, true, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(iVar1))
							{
								VEHICLE::SET_VEHICLE_SEARCHLIGHT(iVar1, false, false);
							}
						}
					}
				}
				func_70();
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_78.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar1);
						if (iVar2 != iLocal_73 || fLocal_70[0] != fLocal_67)
						{
							if (func_81(Local_78.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[0 /*2*/]))
								{
									fLocal_70[0] = fLocal_67;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									func_28(iVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, iLocal_73, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_70[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_78.f_1.f_3[1 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_70[1] != fLocal_67)
						{
							if (func_81(Local_78.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[1 /*2*/]))
								{
									fLocal_70[1] = fLocal_67;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_28(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_78.f_1) || func_11(Local_78.f_1.f_3[0 /*2*/]))
			{
				func_69();
			}
			break;
		
		case 3:
			func_64();
			if (!func_6(&(Local_78.f_1.f_17)))
			{
				func_5(&(Local_78.f_1.f_17), 0, 0);
			}
			if (func_12(Local_78.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_78.f_1);
				if (!func_11(Local_78.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[0 /*2*/]);
					if (iLocal_63 == 0)
					{
						if (func_81(Local_78.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837291);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										PED::SET_PED_KEEP_TASK(iVar0, true);
										iLocal_63 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_78.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_64 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]);
						if (func_81(Local_78.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_64 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_78.f_1) || func_11(Local_78.f_1.f_3[0 /*2*/]))
			{
				func_69();
			}
			break;
		
		case 5:
			func_64();
			break;
	}
}

void func_69()//Position - 0x1E8D
{
	int iVar0;
	
	if (!func_11(Local_78.f_1.f_3[0 /*2*/]))
	{
		if (func_81(Local_78.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[0 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0, 0);
			}
		}
	}
	if (!func_11(Local_78.f_1.f_3[1 /*2*/]))
	{
		if (func_81(Local_78.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1.f_3[1 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0, 0);
			}
		}
	}
}

void func_70()//Position - 0x1F27
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!Global_1956019)
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_78.f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_78.f_1);
	if (func_79(iVar0))
	{
		return;
	}
	if (!func_78(iVar0))
	{
		return;
	}
	if (iLocal_76 == func_55())
	{
		func_72();
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iLocal_76);
	if (!func_6(&uLocal_74))
	{
		if (iLocal_76 != func_55() && func_78(iVar1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true), ENTITY::GET_ENTITY_COORDS(iVar0, true), false) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_74, Global_1956018, 0))
	{
		return;
	}
	func_71(&uLocal_74);
	iVar3 = 2;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar5 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[iVar2 /*2*/]);
		if (func_78(iVar5) && PED::IS_PED_IN_COMBAT(iVar5, 0))
		{
			bVar4 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar4)
	{
		iLocal_76 = func_55();
	}
}

void func_71(var uParam0)//Position - 0x202A
{
	uParam0->f_1 = 0;
}

void func_72()//Position - 0x2037
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::NET_TO_PED(Local_78.f_1.f_3[0 /*2*/]);
	iVar4 = NETWORK::NET_TO_VEH(Local_78.f_1);
	iVar5 = func_75(PLAYER::PLAYER_ID());
	iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
	iLocal_76 = func_55();
	iLocal_77++;
	iLocal_77 = func_74(iLocal_77, 32);
	iVar0 = iLocal_77;
	if (iVar0 == func_55())
	{
		return;
	}
	if (iVar0 == iLocal_76)
	{
		return;
	}
	if (!func_50(iVar0, 1, 1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!func_78(iVar2))
	{
		return;
	}
	if (func_78(iVar6))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar6, true), ENTITY::GET_ENTITY_COORDS(iVar2, true), false) > Global_1956020)
		{
			return;
		}
	}
	if (func_53(iVar1, iVar0) || func_73(iVar1, iVar0, -2, 0))
	{
		TASK::TASK_HELI_MISSION(iVar3, iVar4, 0, iVar2, 0f, 0f, 0f, iLocal_73, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_70[0]), 10, -1f, 0);
		iLocal_76 = iVar0;
	}
}

bool func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2138
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_74(int iParam0, int iParam1)//Position - 0x21B0
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_75(int iParam0)//Position - 0x21C3
{
	if (func_76(iParam0, 1))
	{
		return Global_1886967[func_54(iParam0) /*609*/].f_10.f_463;
	}
	return func_55();
}

bool func_76(int iParam0, bool bParam1)//Position - 0x21EE
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_77(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_55();
}

int func_77(int iParam0)//Position - 0x2227
{
	if (func_47(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_55())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x225C
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

int func_79(int iParam0)//Position - 0x227D
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

int func_80()//Position - 0x22C0
{
	if (CLOCK::GET_CLOCK_HOURS() >= 22)
	{
		return 1;
	}
	if (CLOCK::GET_CLOCK_HOURS() <= 6 && CLOCK::GET_CLOCK_HOURS() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x22EE
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_82()//Position - 0x2312
{
	return Local_78.f_0;
}

int func_83(int iParam0)//Position - 0x231C
{
	return iLocal_99[iParam0];
}

void func_84()//Position - 0x232A
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_67 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_68))
	{
		func_5(&uLocal_68, 0, 0);
	}
	else if (func_4(&uLocal_68, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_59(PLAYER::PLAYER_ID()) };
		fLocal_67 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
		if (fLocal_67 < Global_262145.f_11285 /* Tunable: ISLANDBACKUPHELIMINHEIGHT */)
		{
			fLocal_67 = Global_262145.f_11285 /* Tunable: ISLANDBACKUPHELIMINHEIGHT */;
		}
		func_71(&uLocal_68);
	}
}

void func_85()//Position - 0x239D
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_3808.f_1[0]))
	{
		PED::DELETE_PED(&(Global_2672741.f_3808.f_1[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_3808.f_1[1]))
	{
		PED::DELETE_PED(&(Global_2672741.f_3808.f_1[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672741.f_3808))
	{
		VEHICLE::DELETE_VEHICLE(&(Global_2672741.f_3808));
	}
	Global_2672741.f_3808.f_5 = 0f;
	Global_2672741.f_3808.f_6 = 0;
	Global_2672741.f_3808.f_7 = 0;
	func_87(0);
	func_86();
}

void func_86()//Position - 0x242B
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_87(int iParam0)//Position - 0x2437
{
	Global_2738587.f_461 = iParam0;
}

int func_88()//Position - 0x2448
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_95())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_94())
	{
		return 1;
	}
	if (func_93(159))
	{
		if (!func_92())
		{
			return 1;
		}
	}
	if (func_93(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_89() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_89()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_89()//Position - 0x24CC
{
	switch (func_91())
	{
		case 0:
			return func_90();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_90()//Position - 0x24FF
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_91()//Position - 0x2523
{
	return Global_32828;
}

bool func_92()//Position - 0x252E
{
	return Global_2684312.f_698;
}

int func_93(int iParam0)//Position - 0x253D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_94()//Position - 0x2554
{
	return Global_2695951;
}

bool func_95()//Position - 0x2560
{
	return Global_2684312.f_693;
}

void func_96()//Position - 0x256F
{
	SYSTEM::WAIT(0);
}

void func_97(struct<21> Param0)//Position - 0x257C
{
	func_87(0);
	func_101(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_99(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_78, 21, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_99, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_98())
	{
		func_85();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_61 = true;
	}
	iLocal_76 = PLAYER::PLAYER_ID();
	iLocal_99[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

int func_98()//Position - 0x25E1
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
		if (func_95())
		{
			return 0;
		}
		if (func_93(157))
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

int func_99(int iParam0, int iParam1, bool bParam2)//Position - 0x263A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_86();
			}
			else
			{
				return 0;
			}
		}
		if (!func_100(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_95())
				{
					if (!bParam2)
					{
						func_86();
					}
					else
					{
						return 0;
					}
				}
				if (func_93(157))
				{
					if (!bParam2)
					{
						func_86();
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
					func_86();
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
				func_86();
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
			func_86();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_100(bool bParam0)//Position - 0x2750
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_101(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x2761
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_86();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

