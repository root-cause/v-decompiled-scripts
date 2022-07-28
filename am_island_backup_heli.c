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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
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
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71[2] = { 0f, 0f };
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<21> Local_77 = { 0, 0, 745926877, 0, 2, 0, 2064532783, 0, 2064532783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_78[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<21> Local_79 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_68 = -1f;
	iLocal_72 = 23;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96(ScriptParam_79);
	}
	while (true)
	{
		func_95();
		if (func_87())
		{
			func_84();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2815059.f_444)
			{
				Local_77.f_20 = 1;
				if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					func_84();
				}
			}
		}
		else if (Local_77.f_20)
		{
			func_84();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_83();
			switch (func_82(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_81() > 0)
					{
						iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
					break;
				
				case 2:
					func_61();
					if (func_81() == 3)
					{
						iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
					}
					break;
				
				case 3:
					func_84();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_81())
				{
					case 0:
						Local_77.f_0 = 2;
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
	if (Local_77.f_1.f_2 == 5)
	{
		Local_77.f_0 = 3;
	}
	if (func_6(&(Local_77.f_1.f_17)))
	{
		if (func_4(&(Local_77.f_1.f_17), 20000, 0))
		{
			Local_77.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_77.f_0 = 3;
	}
	if (bLocal_62)
	{
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			Local_77.f_0 = 3;
		}
	}
	else if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		Local_77.f_0 = 3;
	}
	if (func_2())
	{
		Local_77.f_0 = 3;
	}
}

bool func_2()//Position - 0x1C8
{
	return Global_1922955.f_3;
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
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_60(1);
			break;
		
		case 1:
			if (func_40())
			{
				if (func_27())
				{
					func_5(&(Local_77.f_1.f_15), 0, 0);
					func_60(2);
				}
			}
			break;
		
		case 2:
			func_18();
			func_16();
			if (func_15())
			{
				func_60(3);
				func_14(0);
			}
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[1 /*2*/]))
			{
				func_60(3);
			}
			else
			{
				if (func_6(&(Local_77.f_1.f_15)))
				{
					if (func_4(&(Local_77.f_1.f_15), Global_262145.f_11082, 0))
					{
						func_60(3);
					}
				}
				if (func_10(PLAYER::PLAYER_ID(), 0))
				{
					func_60(3);
				}
				if (bLocal_63)
				{
					func_60(3);
				}
				if (func_8(PLAYER::PLAYER_ID(), 136))
				{
					func_60(3);
				}
			}
			break;
		
		case 3:
			func_18();
			if (!func_12(Local_77.f_1))
			{
				if (func_11(Local_77.f_1.f_3[0 /*2*/]) && func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			else if (func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					func_60(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)//Position - 0x43D
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
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
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x480
{
	return BitTest(Global_2689235[iParam0 /*453*/].f_216, iParam1);
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
	Global_2815059.f_443 = iParam0;
}

bool func_15()//Position - 0x51F
{
	return Global_2815059.f_443;
}

void func_16()//Position - 0x52E
{
	if (Global_2703735.f_3689)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
	if (Global_2703735.f_3688 >= 250f)
	{
		func_17(1, 600000);
		bLocal_63 = true;
	}
}

void func_17(int iParam0, int iParam1)//Position - 0x568
{
	if (Global_2703735.f_3572[iParam0] < iParam1)
	{
		Global_2703735.f_3572[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2703735.f_3571), iParam0);
}

void func_18()//Position - 0x59A
{
	iLocal_66 = 0;
	iLocal_67 = 0;
	if (func_12(Local_77.f_1))
	{
		iLocal_66++;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_77.f_1)))
	{
		func_26(&(Local_77.f_1));
		iLocal_66++;
	}
	if (func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[0 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
		{
			func_26(&(Local_77.f_1.f_3[1 /*2*/]));
			iLocal_67++;
		}
	}
	else
	{
		iLocal_67++;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != iLocal_66)
	{
		if (func_25(iLocal_66, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_66);
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != iLocal_67)
	{
		if (func_19(iLocal_67, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_67);
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
	
	if (!BitTest(Global_1661006, 0))
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
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
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

int func_23(int iParam0, bool bParam1)//Position - 0x7E3
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

int func_24(int iParam0)//Position - 0x880
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
	
	iVar0 = joaat("a_m_m_farmer_01");
	if (func_39(Local_77.f_1.f_1))
	{
		if (func_39(Local_77.f_1.f_3[1 /*2*/].f_1) && func_39(iVar0))
		{
			if (!func_12(Local_77.f_1))
			{
				if (func_36(&(Local_77.f_1), Local_77.f_1.f_1, Local_77.f_1.f_8, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
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
					Global_2703735.f_3690 = iVar1;
					ENTITY::SET_ENTITY_HEALTH(iVar1, Global_262145.f_11083, 0);
					if (func_34(&(Local_77.f_1.f_3[0 /*2*/]), Local_77.f_1, 4, iVar0, -1, 1, 1, 1))
					{
						iVar2 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
						func_29(Local_77.f_1.f_3[0 /*2*/]);
						func_28(iVar2, 0, 0, 1);
						NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar2, PLAYER::PLAYER_ID());
						func_35(iVar2, 4);
						Global_2703735.f_3690.f_1[0] = iVar2;
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 0, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 2, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iVar2, 8, 0, 1, 0);
						PED::SET_PED_PROP_INDEX(iVar2, 1, 0, 0, false);
						PED::SET_PED_PROP_INDEX(iVar2, 0, 0, 0, false);
						if (func_34(&(Local_77.f_1.f_3[1 /*2*/]), Local_77.f_1, 4, Local_77.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_29(Local_77.f_1.f_3[1 /*2*/]);
							func_28(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), 1, 1, 1);
							NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), PLAYER::PLAYER_ID());
							func_35(NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]), 4);
							Global_2703735.f_3690.f_1[1] = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_77.f_1.f_3[1 /*2*/].f_1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_77.f_1.f_1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB17
{
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("weapon_assaultrifle"), 300, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
	PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_71[iParam1] + 100f));
	PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
	PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
			ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0);
			PED::SET_PED_ARMOUR(iParam0, 250);
		}
	}
	else
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	}
}

void func_29(int iParam0)//Position - 0xBC0
{
	int iVar0;
	
	if (!func_31(PLAYER::PLAYER_ID(), 0, 0) && !func_30())
	{
		iVar0 = Global_1837209[5];
	}
	else
	{
		iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(iParam0), iVar0);
}

bool func_30()//Position - 0xC02
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_31(int iParam0, bool bParam1, bool bParam2)//Position - 0xC1B
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
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_32(int iParam0)//Position - 0xC4D
{
	return func_33(iParam0);
}

var func_33(int iParam0)//Position - 0xC5B
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_11.f_1, 0);
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC72
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
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
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

void func_35(int iParam0, int iParam1)//Position - 0xCFA
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

int func_36(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xD2D
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
			func_37(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_37(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xE36
{
	int iVar0;
	
	if (func_38(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
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

int func_38(int iParam0, struct<3> Param1, int iParam2)//Position - 0xF09
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

bool func_39(int iParam0)//Position - 0xFA7
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_40()//Position - 0xFC5
{
	struct<3> Var0;
	
	if (func_59(Local_77.f_1.f_8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { func_57(func_58(PLAYER::PLAYER_ID()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_77.f_1.f_13) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_77.f_1.f_13) * 30f))), 0f) };
				Var0.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_41(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_77.f_1.f_8 = { Var0 };
					return 1;
				}
				else
				{
					Local_77.f_1.f_13++;
					if (Local_77.f_1.f_13 >= 12)
					{
						Local_77.f_1.f_13 = 0;
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

int func_41(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x10B8
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
		if (func_50(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_42(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

int func_42(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x11CA
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_49(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
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
		if (func_49(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_43(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), Param0, true) <= (fVar2 + fParam1))
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

int func_43(int iParam0)//Position - 0x1382
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689235[iParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

bool func_44(int iParam0, int iParam1)//Position - 0x13AD
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x13F8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x1439
{
	return Global_1574918;
}

Vector3 func_47(int iParam0)//Position - 0x1445
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_48() && Global_1853348[iVar0 /*834*/].f_804) && !func_59(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return func_58(iParam0);
}

var func_48()//Position - 0x1498
{
	return Global_2714762.f_19;
}

int func_49(int iParam0, bool bParam1, bool bParam2)//Position - 0x14A6
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

int func_50(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x1506
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_49(iVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_43(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_51(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), Param0, true) < fParam1)
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

int func_51(int iParam0)//Position - 0x160A
{
	if (func_56(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { func_55(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (func_52(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x1651
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
	if (!iVar0 == func_53())
	{
		if (iVar0 == func_54(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_53()//Position - 0x167C
{
	return -1;
}

int func_54(int iParam0)//Position - 0x1685
{
	if (iParam0 != func_53())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_53();
}

struct<13> func_55(int iParam0)//Position - 0x16A8
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_56(int iParam0, int iParam1)//Position - 0x16BF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_55(iParam0) };
		Global_2787518 = { func_55(iParam1) };
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

Vector3 func_57(struct<3> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x172C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

Vector3 func_58(int iParam0)//Position - 0x1779
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_59(struct<3> Param0)//Position - 0x178C
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)//Position - 0x17B6
{
	Local_77.f_1.f_2 = iParam0;
}

void func_61()//Position - 0x17C6
{
	func_67();
	func_62();
}

void func_62()//Position - 0x17D6
{
	if (Local_77.f_1.f_2 == 2)
	{
		func_64();
	}
	else
	{
		func_63();
	}
}

void func_63()//Position - 0x17F3
{
	if (HUD::DOES_BLIP_EXIST(iLocal_61))
	{
		HUD::REMOVE_BLIP(&iLocal_61);
	}
}

void func_64()//Position - 0x180A
{
	int iVar0;
	
	iVar0 = NETWORK::NET_TO_VEH(Local_77.f_1);
	if (!HUD::DOES_BLIP_EXIST(iLocal_61) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iLocal_61 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
		HUD::SET_BLIP_SPRITE(iLocal_61, 422);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_61, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_61, "MPCT_MERRY3");
		func_65(&iLocal_61, 1);
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x1859
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_66(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_66(int iParam0)//Position - 0x187F
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

void func_67()//Position - 0x1AE7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_77.f_1.f_2)
	{
		case 0:
			func_63();
			break;
		
		case 1:
			func_63();
			break;
		
		case 2:
			if (func_12(Local_77.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
				func_64();
				if (func_80(Local_77.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1))
					{
						if (VEHICLE::_DOES_VEHICLE_HAVE_SEARCHLIGHT(iVar1))
						{
							if (func_79())
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
				func_69();
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						iVar2 = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar1);
						if (iVar2 != iLocal_72 || fLocal_71[0] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
								{
									fLocal_71[0] = fLocal_68;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									func_28(iVar0, 0, 0, 0);
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar1, true, true, false);
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_71[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
					}
				}
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_77.f_1.f_3[1 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_IN_COMBAT(iVar0, 0) || fLocal_71[1] != fLocal_68)
						{
							if (func_80(Local_77.f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
								{
									fLocal_71[1] = fLocal_68;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									func_28(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 3:
			func_63();
			if (!func_6(&(Local_77.f_1.f_17)))
			{
				func_5(&(Local_77.f_1.f_17), 0, 0);
			}
			if (func_12(Local_77.f_1))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_77.f_1);
				if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
				{
					iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
					if (iLocal_64 == 0)
					{
						if (func_80(Local_77.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837194);
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_HELI_MISSION(iVar0, iVar1, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										PED::SET_PED_KEEP_TASK(iVar0, true);
										iLocal_64 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_65 == 0)
					{
						iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
						if (func_80(Local_77.f_1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
							{
								TASK::CLEAR_PED_TASKS(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
								PED::SET_PED_KEEP_TASK(iVar0, true);
								iLocal_65 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_77.f_1) || func_11(Local_77.f_1.f_3[0 /*2*/]))
			{
				func_68();
			}
			break;
		
		case 5:
			func_63();
			break;
	}
}

void func_68()//Position - 0x1E5B
{
	int iVar0;
	
	if (!func_11(Local_77.f_1.f_3[0 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[0 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[0 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_77.f_1.f_3[1 /*2*/]))
	{
		if (func_80(Local_77.f_1.f_3[1 /*2*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1.f_3[1 /*2*/]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[1 /*2*/]);
				ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
			}
		}
	}
}

void func_69()//Position - 0x1EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!Global_1958700)
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_77.f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(Local_77.f_1);
	if (func_78(iVar0))
	{
		return;
	}
	if (!func_77(iVar0))
	{
		return;
	}
	if (iLocal_75 == func_53())
	{
		func_71();
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iLocal_75);
	if (!func_6(&uLocal_73))
	{
		if (iLocal_75 != func_53() && func_77(iVar1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true), ENTITY::GET_ENTITY_COORDS(iVar0, true), false) > 50f)
			{
				return;
			}
		}
	}
	if (!func_4(&uLocal_73, Global_1958699, 0))
	{
		return;
	}
	func_70(&uLocal_73);
	iVar3 = Local_77.f_1.f_3;
	bVar4 = false;
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar5 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[iVar2 /*2*/]);
		if (func_77(iVar5) && PED::IS_PED_IN_COMBAT(iVar5, 0))
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
		iLocal_75 = func_53();
	}
}

void func_70(var uParam0)//Position - 0x1FFB
{
	uParam0->f_1 = 0;
}

void func_71()//Position - 0x2008
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = PLAYER::PLAYER_ID();
	iVar3 = NETWORK::NET_TO_PED(Local_77.f_1.f_3[0 /*2*/]);
	iVar4 = NETWORK::NET_TO_VEH(Local_77.f_1);
	iVar5 = func_74(PLAYER::PLAYER_ID());
	iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
	iLocal_75 = func_53();
	iLocal_76++;
	iLocal_76 = func_73(iLocal_76, 32);
	iVar0 = iLocal_76;
	if (iVar0 == func_53())
	{
		return;
	}
	if (iVar0 == iLocal_75)
	{
		return;
	}
	if (!func_49(iVar0, 1, 1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!func_77(iVar2))
	{
		return;
	}
	if (func_77(iVar6))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar6, true), ENTITY::GET_ENTITY_COORDS(iVar2, true), false) > Global_1958701)
		{
			return;
		}
	}
	if (func_52(iVar1, iVar0) || func_72(iVar1, iVar0, -2, 0))
	{
		TASK::TASK_HELI_MISSION(iVar3, iVar4, 0, iVar2, 0f, 0f, 0f, iLocal_72, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_71[0]), 10, -1f, 0);
		iLocal_75 = iVar0;
	}
}

bool func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2109
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

int func_73(int iParam0, int iParam1)//Position - 0x2181
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

int func_74(int iParam0)//Position - 0x2194
{
	if (func_75(iParam0, 1))
	{
		return Global_1892703[func_54(iParam0) /*599*/].f_10.f_462;
	}
	return func_53();
}

bool func_75(int iParam0, bool bParam1)//Position - 0x21BF
{
	if (!bParam1)
	{
		if (func_76(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_53();
}

int func_76(int iParam0)//Position - 0x21EA
{
	if (iParam0 != func_53())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_53())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x221F
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

int func_78(int iParam0)//Position - 0x2240
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

int func_79()//Position - 0x2283
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

int func_80(int iParam0)//Position - 0x22B1
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

int func_81()//Position - 0x22D5
{
	return Local_77.f_0;
}

int func_82(int iParam0)//Position - 0x22DF
{
	return iLocal_78[iParam0];
}

void func_83()//Position - 0x22ED
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_68 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_69))
	{
		func_5(&uLocal_69, 0, 0);
	}
	else if (func_4(&uLocal_69, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_58(PLAYER::PLAYER_ID()) };
		fLocal_68 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var1.f_0, Var1.f_1);
		if (fLocal_68 < Global_262145.f_11084)
		{
			fLocal_68 = Global_262145.f_11084;
		}
		func_70(&uLocal_69);
	}
}

void func_84()//Position - 0x2360
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690.f_1[0]))
	{
		PED::DELETE_PED(&(Global_2703735.f_3690.f_1[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690.f_1[1]))
	{
		PED::DELETE_PED(&(Global_2703735.f_3690.f_1[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_3690))
	{
		VEHICLE::DELETE_VEHICLE(&(Global_2703735.f_3690));
	}
	Global_2703735.f_3690.f_5 = 0f;
	Global_2703735.f_3690.f_6 = 0;
	Global_2703735.f_3690.f_7 = 0;
	func_86(0);
	func_85();
}

void func_85()//Position - 0x23EE
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_86(int iParam0)//Position - 0x23FA
{
	Global_2815059.f_444 = iParam0;
}

int func_87()//Position - 0x240B
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(159))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()//Position - 0x248F
{
	switch (func_90())
	{
		case 0:
			return func_89();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()//Position - 0x24C2
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_90()//Position - 0x24E6
{
	return Global_31959;
}

bool func_91()//Position - 0x24F1
{
	return Global_2714762.f_698;
}

int func_92(int iParam0)//Position - 0x2500
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()//Position - 0x2517
{
	return Global_2725403;
}

bool func_94()//Position - 0x2523
{
	return Global_2714762.f_693;
}

void func_95()//Position - 0x2532
{
	SYSTEM::WAIT(0);
}

void func_96(struct<21> Param0)//Position - 0x253F
{
	func_86(0);
	func_100(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_98(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_77, 21, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_78, 33, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_97())
	{
		func_84();
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		bLocal_62 = true;
	}
	iLocal_75 = PLAYER::PLAYER_ID();
	iLocal_78[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
}

int func_97()//Position - 0x25A4
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
		if (func_94())
		{
			return 0;
		}
		if (func_92(157))
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

int func_98(int iParam0, int iParam1, bool bParam2)//Position - 0x25FD
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_85();
			}
			else
			{
				return 0;
			}
		}
		if (!func_99(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_85();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(157))
				{
					if (!bParam2)
					{
						func_85();
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
					func_85();
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
				func_85();
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
			func_85();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_99(bool bParam0)//Position - 0x2713
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

void func_100(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x2724
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_85();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

