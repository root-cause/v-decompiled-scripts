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
	struct<11> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_71 = 0;
	struct<3> Local_72[32];
	var uLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
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
	iLocal_174 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_71(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_62(ScriptParam_0);
	}
	else
	{
		func_58();
	}
	while (true)
	{
		func_57();
		if (func_49() || func_45(9))
		{
			func_58();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_58();
		}
		switch (func_44(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_43() == 1)
				{
					func_42();
					Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_43() == 4)
				{
					Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_43() == 1)
				{
					func_40();
				}
				else if (func_43() == 4)
				{
					Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_38(&(Local_60.f_10));
				if (func_37(&(Local_60.f_10)))
				{
					Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_58();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_43())
			{
				case 0:
					if (func_36())
					{
						if (func_8())
						{
							Local_60.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_7();
					func_6();
					if (func_1())
					{
						Local_60.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1BF
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D3
{
	if (Local_60.f_9 == 0)
	{
		if (!func_4(Local_60.f_2))
		{
			return 1;
		}
		else if (func_3(Local_60.f_3))
		{
			return 1;
		}
		else
		{
			if (iLocal_177 == 1)
			{
				if (BitTest(Local_60.f_1, 0))
				{
					return 1;
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), NETWORK::NET_TO_VEH(Local_60.f_2), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)//Position - 0x239
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x258
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_5(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x278
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

void func_6()//Position - 0x2B1
{
	switch (Local_60.f_9)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_7()//Position - 0x2D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_176 == 0)
	{
		iLocal_177 = 0;
		MISC::SET_BIT(&(Local_60.f_1), 0);
	}
	if (func_4(Local_60.f_2))
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_176)))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_176));
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (func_71(iVar1, 1, 1))
		{
			if (BitTest(Local_60.f_1, 0))
			{
				if (iVar0 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_60.f_2), 250f, 250f, 250f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Local_60.f_1), 0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_60.f_1), 0);
				}
			}
		}
	}
	iLocal_176++;
	if (iLocal_176 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_176 = 0;
		iLocal_177 = 1;
	}
}

int func_8()//Position - 0x384
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (func_35(Local_60.f_4) && func_35(Local_60.f_5))
		{
			if (func_12() && func_9())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9()//Position - 0x3C4
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3) && func_35(Local_60.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_4(Local_60.f_2))
		{
			if (func_11(&(Local_60.f_3), Local_60.f_2, 22, Local_60.f_5, -1, 1, 1, 1))
			{
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_60.f_3), 0);
				if (func_10())
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837218);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_60.f_3), Global_1837221);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_60.f_3), true);
				if (func_10())
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iVar0 < 5)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("WEAPON_PISTOL"), 25000, func_10());
					}
					else if (iVar0 > 6)
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("WEAPON_MICROSMG"), 25000, func_10());
					}
					else
					{
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_60.f_3), joaat("WEAPON_PUMPSHOTGUN"), 25000, func_10());
					}
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 0);
				}
				else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 2);
				}
				else
				{
					PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_60.f_3), 1);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 5, true);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 17, true);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 13, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 20, true);
				}
				if (func_10())
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_60.f_3), 2, true);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 2);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 1);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_60.f_3), 3);
				}
				PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(Local_60.f_3), true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_60.f_3), 29, true);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_60.f_3), 3);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_60.f_3), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0);
				AUDIO::SET_VEHICLE_RADIO_LOUD(NETWORK::NET_TO_VEH(Local_60.f_2), true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_60.f_2), true);
				func_42();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), iLocal_170);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_60.f_5);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_3))
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x67C
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x69A
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

int func_12()//Position - 0x722
{
	struct<3> Var0;
	float fVar3;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_35(Local_60.f_4))
		{
			if (func_16(&Var0, &fVar3))
			{
				if (func_13(&(Local_60.f_2), Local_60.f_4, Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_60.f_2), true, true, false);
					VEHICLE::SET_VEHICLE_IS_WANTED(NETWORK::NET_TO_VEH(Local_60.f_2), true);
					VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(Local_60.f_2), true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_60.f_2), "JOYRIDER_GROUP", 0f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_60.f_4);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x7BC
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
			func_14(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_14(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x8C5
{
	int iVar0;
	
	if (func_15(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_15(int iParam0, struct<3> Param1, int iParam4)//Position - 0x998
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

bool func_16(int iParam0, float* fParam1)//Position - 0xA36
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!bVar0)
	{
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&(Local_60.f_6), iParam0, &uVar2, 0f, 180f, 40f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1 || ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(*iParam0) == joaat("City"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.5571f, -3220.5977f, 12.9448f, Local_60.f_6, true) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Local_60.f_6, true) >= 700f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(PLAYER::PLAYER_ID()), *iParam0, true) <= (250f - 50f))
					{
						if (iLocal_175 <= 5)
						{
							if (func_17(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								bVar0 = true;
							}
						}
						else
						{
							Local_60.f_0 = 4;
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_174 += 4;
		if (iLocal_174 >= 80)
		{
			iLocal_174 = 20;
			iLocal_175++;
		}
	}
	return bVar0;
}

int func_17(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0xB5D
{
	Global_2635560.f_2 = 0;
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
	Global_2635560.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (fParam14 > 0f)
	{
		if (func_27(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_18(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635560.f_2++;
	return 1;
}

int func_18(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xC6F
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_71(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_71(iVar1, 1, 1))
		{
			if (!func_20(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_19(iVar1) || !bParam10) && !Global_2657704[iVar1 /*463*/].f_270)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_24(iVar1), Param0, true) <= (fVar2 + fParam3))
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

int func_19(int iParam0)//Position - 0xE27
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_20(int iParam0, int iParam1)//Position - 0xE52
{
	bool bVar0;
	
	if (!func_23(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_21(-1, 0) == 8;
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

int func_21(int iParam0, bool bParam1)//Position - 0xEAB
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_22();
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

int func_22()//Position - 0xEEC
{
	return Global_1574918;
}

int func_23(var uParam0)//Position - 0xEF8
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

Vector3 func_24(int iParam0)//Position - 0xF1A
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_26() && Global_1853988[iVar0 /*867*/].f_834) && !func_25(Global_1853988[iVar0 /*867*/].f_835))
	{
		return Global_1853988[iVar0 /*867*/].f_835;
	}
	return func_34(iParam0);
}

int func_25(struct<3> Param0)//Position - 0xF6D
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_26()//Position - 0xF97
{
	return Global_2683883.f_19;
}

int func_27(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0xFA5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_71(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_19(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_28(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(iVar1), Param0, true) < fParam3)
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

int func_28(int iParam0)//Position - 0x10A9
{
	if (func_33(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2764376 = { func_32(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764376))
	{
		return 1;
	}
	if (func_29(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x10F0
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (func_23(iVar0))
	{
		if (iVar0 == func_30(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1119
{
	if (func_23(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_31();
}

int func_31()//Position - 0x113C
{
	return -1;
}

struct<13> func_32(int iParam0)//Position - 0x1145
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_33(int iParam0, int iParam1)//Position - 0x115C
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_32(iParam0) };
		Global_2764389 = { func_32(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_34(int iParam0)//Position - 0x11C9
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_35(int iParam0)//Position - 0x11DC
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_36()//Position - 0x11FA
{
	if (!BitTest(uLocal_169, 1))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_34(PLAYER::PLAYER_ID()), iLocal_173, &(Local_60.f_6), 4, 3f, 0f))
		{
			MISC::SET_BIT(&uLocal_169, 1);
		}
		else
		{
			iLocal_173++;
		}
	}
	return BitTest(uLocal_169, 1);
}

int func_37(var uParam0)//Position - 0x123A
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

void func_38(var uParam0)//Position - 0x1263
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_39(uParam0, 0, 0);
		}
	}
}

void func_39(var uParam0, bool bParam1, bool bParam2)//Position - 0x1282
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

void func_40()//Position - 0x12C7
{
	switch (Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_42();
			func_41();
			if (Local_60.f_9 > 0)
			{
				Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_58();
			break;
	}
}

void func_41()//Position - 0x130F
{
	int iVar0;
	float fVar1;
	
	if (!BitTest(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
	{
		if (func_4(Local_60.f_2) && !func_3(Local_60.f_3))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_60.f_2));
			fVar1 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_60.f_2));
			if (iVar0 < 200)
			{
				func_42();
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), iLocal_172);
				MISC::SET_BIT(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
			}
			else if (fVar1 < 3f)
			{
				if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(NETWORK::NET_TO_VEH(Local_60.f_2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 1, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_60.f_2), 2, 10000))
				{
					func_42();
					TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_60.f_3), iLocal_171);
					MISC::SET_BIT(&(Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
		}
	}
}

void func_42()//Position - 0x1416
{
	if (!BitTest(uLocal_169, 0))
	{
		if (func_4(Local_60.f_2))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_170);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 14, 30f, 786468, 15f, 1f, false);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_60.f_2), 30f, 786468);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_170);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_171);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_171);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_60.f_2), Local_60.f_6, 5, 30f, 786468, 99999f, 1f, false);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
			MISC::SET_BIT(&uLocal_169, 0);
		}
	}
}

int func_43()//Position - 0x14CC
{
	return Local_60.f_0;
}

int func_44(int iParam0)//Position - 0x14D6
{
	return Local_72[iParam0 /*3*/];
}

bool func_45(int iParam0)//Position - 0x14E4
{
	return !func_46(iParam0);
}

int func_46(int iParam0)//Position - 0x14F3
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7203 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7204 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7205 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7206 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_47(4))
			{
				return 0;
			}
			if (func_48(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_47(bool bParam0)//Position - 0x1827
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_71(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657704[iVar0 /*463*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)//Position - 0x186A
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_49()//Position - 0x1880
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_56())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (func_54(159))
	{
		if (!func_53())
		{
			return 1;
		}
	}
	if (func_54(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_50() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_50()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_50()//Position - 0x1904
{
	switch (func_52())
	{
		case 0:
			return func_51();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_51()//Position - 0x1937
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_52()//Position - 0x195B
{
	return Global_32283;
}

bool func_53()//Position - 0x1966
{
	return Global_2683883.f_698;
}

int func_54(int iParam0)//Position - 0x1975
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_55()//Position - 0x198C
{
	return Global_2694576;
}

bool func_56()//Position - 0x1998
{
	return Global_2683883.f_693;
}

void func_57()//Position - 0x19A7
{
	SYSTEM::WAIT(0);
}

void func_58()//Position - 0x19B4
{
	func_61();
	if (func_43() == 4 && Local_60.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_60.f_4, false);
	}
	if (func_4(Local_60.f_2))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(NETWORK::NET_TO_VEH(Local_60.f_2), 0f);
	}
	AUDIO::STOP_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
	func_60(9, 0);
	func_59();
}

void func_59()//Position - 0x1A07
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_60(bool bParam0, bool bParam1)//Position - 0x1A13
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_61()//Position - 0x1A70
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_170);
}

void func_62(struct<21> Param0)//Position - 0x1A7E
{
	int iVar0;
	
	func_67(func_68(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_65(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 12, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_72, 97, 0);
	if (!func_64())
	{
		func_58();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Global_2794162.f_4488 == 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				switch (iVar0)
				{
					case 0:
						Local_60.f_4 = joaat("stingergt");
						break;
					
					case 1:
						Local_60.f_4 = joaat("entityxf");
						break;
					
					case 2:
						Local_60.f_4 = joaat("feltzer2");
						break;
					
					case 3:
						Local_60.f_4 = joaat("monroe");
						break;
					
					case 4:
						Local_60.f_4 = joaat("cogcabrio");
						break;
					
					case 5:
						Local_60.f_4 = joaat("superd");
						break;
					
					case 6:
						Local_60.f_4 = joaat("infernus");
						break;
				}
			}
			else
			{
				Local_60.f_4 = Global_2794162.f_4488;
				Global_2794162.f_4488 = 0;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_60.f_4, true);
			Local_60.f_5 = func_63(1);
		}
		func_60(9, 1);
		AUDIO::START_AUDIO_SCENE("JOYRIDER_RADIO_SCENE");
		Local_72[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_58();
	}
}

int func_63(bool bParam0)//Position - 0x1BB7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
	if (bParam0)
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_M_M_EastSA_01");
			
			case 1:
				return joaat("A_M_M_BevHills_01");
			
			case 2:
				return joaat("A_M_M_BevHills_02");
			
			case 3:
				return joaat("A_M_M_Business_01");
			
			case 4:
				return joaat("A_M_M_Malibu_01");
			
			case 5:
				return joaat("A_M_M_EastSA_02");
			
			case 6:
				return joaat("A_M_M_Hillbilly_01");
			
			case 7:
				return joaat("A_M_M_Hillbilly_02");
			
			case 8:
				return joaat("A_M_M_OG_Boss_01");
			
			case 9:
				return joaat("A_M_M_StLat_02");
			
			case 10:
				return joaat("A_M_Y_BeachVesp_01");
			
			case 11:
				return joaat("A_M_Y_Epsilon_01");
			
			case 12:
				return joaat("A_M_M_ProlHost_01");
			
			case 13:
				return joaat("A_M_M_Salton_01");
			
			case 14:
				return joaat("A_M_M_Skater_01");
			
			case 15:
				return joaat("A_M_Y_Skater_02");
			
			case 16:
				return joaat("A_M_Y_MethHead_01");
			
			case 17:
				return joaat("A_M_M_Skidrow_01");
			
			case 18:
				return joaat("A_M_M_SouCent_01");
			
			case 19:
				return joaat("A_M_M_SouCent_02");
			
			case 20:
				return joaat("A_M_M_SouCent_03");
			
			case 21:
				return joaat("A_M_Y_GenStreet_02");
			
			case 22:
				return joaat("A_M_Y_RoadCyc_01");
			
			case 23:
				return joaat("A_M_M_AfriAmer_01");
			
			case 24:
				return joaat("A_M_M_Beach_01");
			
			case 25:
				return joaat("A_M_M_Farmer_01");
			
			case 26:
				return joaat("A_M_M_FatLatin_01");
			
			case 27:
				return joaat("A_M_M_GenFat_01");
			
			case 28:
				return joaat("A_M_M_Indian_01");
			
			case 29:
				return joaat("A_M_M_KTown_01");
			
			case 30:
				return joaat("A_M_M_SoCenLat_01");
			
			case 31:
				return joaat("A_M_M_MexLabor_01");
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return joaat("A_F_M_BevHills_01");
			
			case 1:
				return joaat("A_F_M_BevHills_02");
			
			case 2:
				return joaat("A_F_M_Beach_01");
			
			case 3:
				return joaat("A_F_M_KTown_02");
			
			case 4:
				return joaat("A_F_M_ProlHost_01");
			
			case 5:
				return joaat("A_F_M_BodyBuild_01");
			
			case 6:
				return joaat("A_F_M_Business_02");
			
			case 7:
				return joaat("A_F_M_Downtown_01");
			
			case 8:
				return joaat("A_F_M_EastSA_01");
			
			case 9:
				return joaat("A_F_M_EastSA_02");
			
			case 10:
				return joaat("A_F_M_FatWhite_01");
			
			case 11:
				return joaat("A_F_M_KTown_01");
			
			case 12:
				return joaat("A_F_M_KTown_02");
			
			case 13:
				return joaat("A_F_M_Salton_01");
			
			case 14:
				return joaat("A_F_M_SkidRow_01");
			
			case 15:
				return joaat("A_F_M_SouCent_01");
			
			case 16:
				return joaat("A_F_M_SouCent_02");
			
			case 17:
				return joaat("A_F_M_SouCentMC_01");
			
			case 18:
				return joaat("A_F_M_Tramp_01");
			
			case 19:
				return joaat("A_F_M_TrampBeac_01");
			
			case 20:
				return joaat("A_F_Y_Yoga_01");
			
			case 21:
				return joaat("A_F_Y_Vinewood_02");
			
			case 22:
				return joaat("A_F_Y_Vinewood_03");
			
			case 23:
				return joaat("A_F_Y_Vinewood_04");
			
			case 24:
				return joaat("A_F_Y_Tennis_01");
			
			case 25:
				return joaat("A_F_Y_Tourist_01");
			
			case 26:
				return joaat("A_F_Y_Hipster_01");
			
			case 27:
				return joaat("A_F_Y_Golfer_01");
			
			case 28:
				return joaat("A_F_Y_Fitness_01");
			
			case 29:
				return joaat("A_F_Y_SCDressy_01");
			
			case 30:
				return joaat("A_F_Y_Epsilon_01");
			
			case 31:
				return joaat("A_F_Y_Hiker_01");
			
			default:
		}
	}
	return joaat("A_F_M_BevHills_01");
}

int func_64()//Position - 0x1F69
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
		if (func_56())
		{
			return 0;
		}
		if (func_54(157))
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

int func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x1FC2
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_59();
			}
			else
			{
				return 0;
			}
		}
		if (!func_66(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_59();
					}
					else
					{
						return 0;
					}
				}
				if (func_56())
				{
					if (!bParam2)
					{
						func_59();
					}
					else
					{
						return 0;
					}
				}
				if (func_54(157))
				{
					if (!bParam2)
					{
						func_59();
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
					func_59();
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
				func_59();
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
			func_59();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_66(bool bParam0)//Position - 0x20D8
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_67(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x20E9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_59();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_68(int iParam0)//Position - 0x2108
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
	switch (func_69(func_70(iParam0, 1)))
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

int func_69(int iParam0)//Position - 0x2893
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

int func_70(int iParam0, bool bParam1)//Position - 0x2AA1
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

int func_71(int iParam0, bool bParam1, bool bParam2)//Position - 0x30B8
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

