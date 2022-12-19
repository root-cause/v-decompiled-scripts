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
	float fLocal_62 = 0f;
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
	struct<27> Local_85 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_86 = 0;
	struct<3> Local_87[32];
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<21> Local_91 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_227(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_212(ScriptParam_91);
	}
	else
	{
		func_208();
	}
	while (true)
	{
		func_207();
		if (func_199() || func_195(15))
		{
			func_208();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_208();
		}
		switch (func_194(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_193() == 1)
				{
					if (func_192(60000))
					{
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_85.f_2), false))
							{
								if (!func_191())
								{
									if (!BitTest(Local_85.f_1, 0))
									{
										func_190("PTD_HELP1" /* GXT: A Smuggler Plane ~HUD_COLOUR_RED~~BLIP_PLANE_DROP~ ~s~is flying around Los Santos. Bring the plane down before it leaves. */, -1);
									}
									else
									{
										func_190("PTD_HELP1H" /* GXT: A Smuggler Helicopter ~HUD_COLOUR_RED~~BLIP_HELICOPTER~ ~s~is flying around Los Santos. Bring the helicopter down before it leaves. */, -1);
									}
								}
							}
						}
					}
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_193() == 4)
				{
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_193() == 1)
				{
					func_22();
				}
				else if (func_193() == 4)
				{
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_21(&(Local_85.f_24));
				if (func_20(&(Local_85.f_24)))
				{
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_208();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_193())
			{
				case 0:
					if (func_11())
					{
						Local_85.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_85.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x20D
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x221
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (func_7(Local_85.f_2))
	{
		if (Local_85.f_22 > 0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_85.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, false, true, 0))
				{
					if (!BitTest(Local_85.f_1, 0))
					{
						Var0.f_2 = -1791264630;
					}
					else
					{
						Var0.f_2 = -616828629;
					}
					func_5(Var0, func_6(1));
					MISC::SET_BIT(&(Local_85.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_85.f_23 == 0)
	{
		if (Local_85.f_0 != 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_2), false))
				{
					if (func_3(&(Local_85.f_26), 3000, 0))
					{
						if (!BitTest(Local_85.f_1, 0))
						{
							Var1.f_2 = -1265189073;
						}
						else
						{
							Var1.f_2 = -1379183386;
						}
						func_5(Var1, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)//Position - 0x321
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x37F
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

void func_5(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x3C4
{
	Param0.f_0 = 548471420;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_6(int iParam0)//Position - 0x3F1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_227(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(int iParam0)//Position - 0x44E
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_8(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x46E
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

void func_9()//Position - 0x4A7
{
	switch (Local_85.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()//Position - 0x4CA
{
	struct<14> Var0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_2), false))
	{
		if (Local_85.f_0 != 4)
		{
			iLocal_89 = 0;
			while (iLocal_89 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_89)))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_89));
					if (BitTest(Local_87[iLocal_89 /*3*/].f_1, 0))
					{
						if (!BitTest(Local_85.f_1, 0))
						{
							Var0.f_2 = 1940316911;
						}
						else
						{
							Var0.f_2 = -1875928609;
						}
						Var0.f_10 = iVar1;
						func_5(Var0, func_6(1));
						Local_85.f_0 = 4;
						return;
					}
					if (BitTest(Local_87[iLocal_89 /*3*/].f_1, 1))
					{
						if (!BitTest(Local_85.f_1, 2))
						{
							MISC::SET_BIT(&(Local_85.f_1), 2);
						}
					}
				}
				iLocal_89++;
			}
		}
	}
}

int func_11()//Position - 0x57C
{
	if (func_19(Local_85.f_4) && func_19(Local_85.f_5))
	{
		if (func_14() && func_12())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_85.f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_85.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()//Position - 0x5C1
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3) && func_19(Local_85.f_5)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (func_7(Local_85.f_2))
		{
			if (func_13(&(Local_85.f_3), Local_85.f_2, 22, Local_85.f_5, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_85.f_3), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_85.f_3), Global_1837210);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_85.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_85.f_3), true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x65B
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

int func_14()//Position - 0x6E3
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (func_19(Local_85.f_4))
		{
			if (func_15(&(Local_85.f_2), Local_85.f_4, Local_85.f_6, func_18(Local_85.f_6, Local_85.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_85.f_2), 2);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_85.f_2), false);
				ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_85.f_2), true);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_85.f_2));
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_85.f_2), 30f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_85.f_2));
				VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_85.f_2), true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(NETWORK::NET_TO_VEH(Local_85.f_2), false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_85.f_2), false);
				if (Local_85.f_4 == joaat("cuban800"))
				{
					VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_85.f_2), 3);
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_85.f_2), "MPBitset"))
					{
						iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_85.f_2), "MPBitset");
					}
					MISC::SET_BIT(&iVar0, 10);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_85.f_2), "MPBitset", iVar0);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x81F
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
		Global_2793044.f_6736 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam8);
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
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_16(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_16(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x928
{
	int iVar0;
	
	if (func_17(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2635559.f_2921[1 /*6*/].f_5 == iParam3 && Global_2635559.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2635559.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635559.f_2921[iVar0 /*6*/] = { Global_2635559.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635559.f_2921[1 /*6*/] = { Param0 };
		Global_2635559.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2635559.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2635559.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_17(int iParam0, struct<3> Param1, int iParam2)//Position - 0x9FB
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
			if (Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648605.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

float func_18(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0xA99
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

bool func_19(int iParam0)//Position - 0xAB3
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_20(var uParam0)//Position - 0xAD1
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

void func_21(var uParam0)//Position - 0xAFA
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_22()//Position - 0xB19
{
	switch (Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_188();
			func_23();
			if (Local_85.f_23 > 0)
			{
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_208();
			break;
	}
}

void func_23()//Position - 0xB61
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (!BitTest(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_85.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_2), false))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_85.f_2, &uVar0))
				{
					func_187(2063, -1);
					iVar1 = func_186(2063, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_8564 /* Tunable: PLANE_TAKEDOWN_RP_MAX_TIMES */)
					{
						iVar2 = Global_262145.f_8564 /* Tunable: PLANE_TAKEDOWN_RP_MAX_TIMES */;
					}
					iVar3 = (Global_262145.f_8562 /* Tunable: PLANE_TAKEDOWN_REWARDS_XP */ * iVar2);
					func_131(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COMPLETE_PLANE_TAKEDOWN"), iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_8563 /* Tunable: PLANE_TAKEDOWN_CASH_MAX_TIMES */)
					{
						iVar1 = Global_262145.f_8563 /* Tunable: PLANE_TAKEDOWN_CASH_MAX_TIMES */;
					}
					iVar4 = (Global_262145.f_8561 /* Tunable: PLANE_TAKEDOWN_REWARDS_CASH */ * iVar1);
					func_127(iVar4, 1, 1, 1092616192);
					Global_2696873 = iVar4;
					func_61(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_60())
						{
							func_48(joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"), iVar4, &uVar6, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_43(65, 1, -1);
					if (func_42())
					{
						func_29(2, "PTD_PASS0" /* GXT: Well dun, frend. I hope u told 'em 2 run guns with TP Inc next time, b4 u blasted em out the skie */, 0, 0, -99);
					}
					else
					{
						func_29(2, "PTD_PASS1" /* GXT: Nice work, buddy. Those engine noises, I hadn't been sleepin 4 weeks. But that coulda been the tina. Haha. Next time I'll get a trailer out the flight path. */, 0, 0, -99);
					}
					MISC::SET_BIT(&(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (Local_85.f_22 < 4)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_85.f_2), Local_85.f_9[Local_85.f_22 /*3*/], 50f, 50f, 500f, false, true, 0))
						{
							Local_85.f_22++;
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_85.f_2))
				{
					func_27();
					if (func_26())
					{
						if (func_25(Local_85.f_2) && func_25(Local_85.f_3))
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_85.f_2), true, true, -1);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_2))
							{
								func_24(&(Local_85.f_2));
							}
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85.f_3))
							{
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_85.f_3), true);
								func_24(&(Local_85.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_24(var uParam0)//Position - 0xD77
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_25(int iParam0)//Position - 0xD9B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_26()//Position - 0xDBD
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 0, 7000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 1, 40000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 3, 30000))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_85.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0xE2E
{
	struct<3> Var0;
	
	if (func_7(Local_85.f_2) && !func_28(Local_85.f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), false))
		{
			if (Local_85.f_22 < 4)
			{
				if (!BitTest(Local_85.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), 0, 0, Local_85.f_9[Local_85.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 1.26E-43f, 8.4E-44f, true);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), 0, 0, Local_85.f_9[Local_85.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1f, 0);
				}
			}
			else if (!BitTest(Local_85.f_1, 2) && !BitTest(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_85.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!BitTest(Local_85.f_1, 0))
				{
					TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 1.4E-43f, 1.4E-43f, true);
				}
				else
				{
					TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_85.f_3), NETWORK::NET_TO_VEH(Local_85.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1f, 0);
				}
				MISC::SET_BIT(&(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
			}
		}
	}
}

int func_28(int iParam0)//Position - 0xFF7
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_29(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x1016
{
	func_30(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_30(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x102D
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_31(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_31(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x104E
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_40();
	if (iVar0 == -1)
	{
		return;
	}
	func_39(iVar0);
	func_38(iVar0, uParam0);
	func_37(iVar0, uParam2, bParam3);
	func_36(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_35(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_33(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_32(iVar0, iParam6);
	}
}

void func_32(int iParam0, int iParam1)//Position - 0x10FA
{
	Global_1649046.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_33(int iParam0, char* sParam1, bool bParam2)//Position - 0x1110
{
	StringCopy(&(Global_1649046.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_34(iParam0);
}

void func_34(int iParam0)//Position - 0x1137
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 5);
}

void func_35(int iParam0)//Position - 0x114E
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 4);
}

void func_36(int iParam0, char* sParam1)//Position - 0x1165
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1649046.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_37(int iParam0, var uParam1, bool bParam2)//Position - 0x1185
{
	Global_1649046.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
	}
}

void func_38(int iParam0, var uParam1)//Position - 0x11DF
{
	Global_1649046.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_39(int iParam0)//Position - 0x11F5
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 0);
}

int func_40()//Position - 0x120C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_41(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)//Position - 0x123A
{
	return BitTest(Global_1649046.f_59[iParam0 /*16*/], 0);
}

int func_42()//Position - 0x124E
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)//Position - 0x126C
{
	int iVar0;
	
	iVar0 = func_45(iParam0, func_46(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_44(iParam0, iVar0, iParam2);
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x1293
{
	int iVar0;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_46(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_45(int iParam0, int iParam1)//Position - 0x12B7
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_46(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x12E3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_47()//Position - 0x1317
{
	return Global_1574918;
}

void func_48(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1323
{
	int iVar0;
	
	if (!func_60())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_49(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_49(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_49(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			func_49(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1BC4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_47()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_56(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_55(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_50(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1D71
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_51(iParam0);
	}
}

void func_51(int iParam0)//Position - 0x1DA9
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_60())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_54(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_52(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_52(var uParam0)//Position - 0x1DFD
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_53(&(uParam0->f_14));
	func_53(&(uParam0->f_14.f_13));
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

void func_53(var uParam0)//Position - 0x1F09
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

int func_54(int iParam0)//Position - 0x1F51
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1)//Position - 0x1F7C
{
	Global_2697013 = iParam1;
	Global_2697012 = iParam0;
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1F90
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_60())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_57(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_57(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x20CD
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_59(Var0.f_1);
	if ((Global_262145.f_24076 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24077 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24078 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_58();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_58()//Position - 0x215F
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_59(int iParam0)//Position - 0x216E
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_60()//Position - 0x2186
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_61(int iParam0, int iParam1)//Position - 0x219D
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_126())
		{
			if (func_125(0))
			{
				if (!func_121(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_120()))
					{
						if (func_119() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_119());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_117(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_66("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_120(), iVar0, 0, 0, 1);
						}
						func_65(20);
						func_62(func_120(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_62(int iParam0, int iParam1, int iParam2)//Position - 0x223C
{
	struct<8> Var0;
	
	if (func_227(iParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_64(iParam0);
		func_63(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_59(iParam0));
	}
}

void func_63(var uParam0, var uParam1)//Position - 0x2292
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_64(int iParam0)//Position - 0x22AC
{
	return Global_1894573[iParam0 /*608*/].f_510;
}

void func_65(int iParam0)//Position - 0x22C0
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2793044.f_5225.f_7[iVar0]), iVar1);
}

int func_66(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x22E9
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_75(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_73(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_67(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_67(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2381
{
	int iVar0;
	
	if ((!func_72() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_70(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_68(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_68(int iParam0)//Position - 0x2489
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_69(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_69(int iParam0)//Position - 0x24EB
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_70(int iParam0, int iParam1)//Position - 0x2524
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_71(-1, 0) == 8;
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

int func_71(int iParam0, bool bParam1)//Position - 0x256F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

bool func_72()//Position - 0x25B0
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_73(char* sParam0)//Position - 0x25C1
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_74(&cVar0);
}

var func_74(char[4] cParam0)//Position - 0x25E3
{
	return cParam0;
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x25ED
{
	int iVar0;
	int iVar1;
	
	if (func_115(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_115(PLAYER::PLAYER_ID()) || (func_114() && func_113())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_112();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_227(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_110(iParam1, iParam0, 0);
							}
							else
							{
								return func_90(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_90(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_110(iParam1, iParam0, 0);
				}
				else
				{
					return func_76(0, -1, 0);
				}
			}
			else
			{
				return func_76(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_110(iParam1, iParam0, 0);
		}
		else
		{
			return func_90(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_90(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_76(bool bParam0, int iParam1, bool bParam2)//Position - 0x27CA
{
	return func_77(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_77(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x27E0
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_89() || (func_88() && func_86())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_85(iParam2, iVar0);
		}
		else
		{
			return func_85(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_82(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_81(1);
				}
				else
				{
					return func_81(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_78(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_78(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_81(1);
	}
	return func_81(0);
}

int func_78(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x28E2
{
	int iVar0;
	
	iVar0 = func_80(iParam0, iParam1, iParam3);
	if (func_79(Global_4718592.f_113724, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_79(int iParam0, bool bParam1)//Position - 0x29FA
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x2A4B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_82(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_81(bool bParam0)//Position - 0x2A93
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AAA
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
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_83(iParam0, bVar0, iParam1, bVar1) || !func_83(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2DF5
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
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
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
		if (((!func_227(iVar1, 1, 1) || func_70(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_84(iVar1))
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

var func_84(int iParam0)//Position - 0x2F21
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

int func_85(int iParam0, int iParam1)//Position - 0x2F39
{
	if (iParam0 == -1)
	{
		iParam0 = func_80(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_86()//Position - 0x2F87
{
	if (func_87())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_87()//Position - 0x2FA6
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_88()//Position - 0x2FBB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_89()//Position - 0x3002
{
	if (func_87() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x301F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_100())
			{
				iVar3 = func_95(iParam0);
				if (!iVar3 == -1)
				{
					return func_93(iVar3);
				}
			}
			if ((func_92(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_82(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_81(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_91(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_81(1);
			}
			else
			{
				return func_77(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_95(iParam0);
	if (!iVar4 == -1)
	{
		return func_93(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_91(bool bParam0)//Position - 0x31B7
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x31CE
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

int func_93(int iParam0)//Position - 0x3246
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_94(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_94(int iParam0)//Position - 0x3309
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_95(int iParam0)//Position - 0x3320
{
	if (!iParam0 == func_99())
	{
		if (func_97(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_96(iParam0)];
		}
	}
	return -1;
}

int func_96(int iParam0)//Position - 0x3352
{
	if (iParam0 != func_99())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_99();
}

bool func_97(int iParam0, bool bParam1)//Position - 0x3375
{
	if (!bParam1)
	{
		if (func_98(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_99();
}

int func_98(int iParam0)//Position - 0x33A0
{
	if (iParam0 != func_99())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_99())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_99()//Position - 0x33D5
{
	return -1;
}

int func_100()//Position - 0x33DE
{
	if ((((((func_109() || func_108()) || func_107()) || func_106()) || func_105()) || func_103()) || func_101())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_101()//Position - 0x3446
{
	return func_102(Global_4718592.f_113724);
}

int func_102(int iParam0)//Position - 0x345C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_103()//Position - 0x348B
{
	return func_104(Global_4718592.f_113724);
}

int func_104(int iParam0)//Position - 0x34A1
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_105()//Position - 0x34DB
{
	return Global_2683862.f_24;
}

var func_106()//Position - 0x34E9
{
	return Global_2683862.f_21;
}

var func_107()//Position - 0x34F7
{
	return Global_2683862.f_19;
}

var func_108()//Position - 0x3505
{
	return Global_2683862.f_18;
}

var func_109()//Position - 0x3513
{
	return Global_2683862.f_17;
}

int func_110(int iParam0, int iParam1, bool bParam2)//Position - 0x3521
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_100())
	{
		iVar2 = func_95(iParam1);
		if (!iVar2 == -1)
		{
			return func_93(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_99())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_77(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_111(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_82(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_91(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_111(int iParam0)//Position - 0x36A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_112()//Position - 0x3776
{
	return Global_2621446.f_2;
}

var func_113()//Position - 0x3784
{
	return BitTest(Global_2621446, 4);
}

var func_114()//Position - 0x3792
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_115(int iParam0)//Position - 0x37AC
{
	if (func_70(iParam0, 0))
	{
		return 1;
	}
	if (func_116())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_116()//Position - 0x37EB
{
	return BitTest(Global_2621446, 3);
}

void func_117(int iParam0, bool bParam1)//Position - 0x37F9
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_118(1);
	}
	else
	{
		iVar1 = func_118(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_118(bool bParam0)//Position - 0x382B
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12865 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_119()//Position - 0x3851
{
	return Global_262145.f_12864 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_120()//Position - 0x3860
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_121(bool bParam0)//Position - 0x3875
{
	return func_122(PLAYER::PLAYER_ID(), bParam0);
}

int func_122(int iParam0, bool bParam1)//Position - 0x3887
{
	return func_123(iParam0, bParam1, 1);
}

int func_123(int iParam0, bool bParam1, int iParam2)//Position - 0x3898
{
	int iVar0;
	
	if (iParam0 == func_99())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_124(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_99() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)//Position - 0x38F4
{
	if (iParam0 != func_99())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_99())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(bool bParam0)//Position - 0x3943
{
	return func_97(PLAYER::PLAYER_ID(), bParam0);
}

bool func_126()//Position - 0x3955
{
	return func_98(PLAYER::PLAYER_ID());
}

void func_127(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3965
{
	func_128(iParam0, iParam1, iParam2, fParam3);
}

void func_128(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3979
{
	func_129(iParam0, iParam1, iParam2, fParam3);
}

void func_129(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x398D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_4 = iVar1;
	Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 = (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_130(iVar1, 0);
	}
}

void func_130(int iParam0, bool bParam1)//Position - 0x3A10
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_131(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3A21
{
	return func_132(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_132(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3A43
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_142(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_138(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_133(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_133(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3AD6
{
	struct<3> Var0;
	
	Var0 = { func_136(iParam0, 1) };
	if (iParam0 == func_135(PLAYER::PLAYER_PED_ID()))
	{
		func_134(1);
	}
	func_138(Var0, iParam1, 0, sParam2, iParam3);
}

void func_134(int iParam0)//Position - 0x3B0A
{
	Global_2672505.f_1681 = iParam0;
}

int func_135(int iParam0)//Position - 0x3B1B
{
	return iParam0;
}

Vector3 func_136(int iParam0, bool bParam1)//Position - 0x3B25
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_137(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_137(int iParam0)//Position - 0x3BE9
{
	return iParam0;
}

void func_138(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x3BF3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1080[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1080[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1080[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1080[iVar1 /*30*/].f_4 = func_141(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1080[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672505.f_1080[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1080[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1080[iVar1 /*30*/].f_9 = func_140();
			Global_2672505.f_1080[iVar1 /*30*/].f_10 = func_139();
			StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1080[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_139()//Position - 0x3D0A
{
	if (Global_2672505.f_1681)
	{
		Global_2672505.f_1681 = 0;
		return 1;
	}
	Global_2672505.f_1681 = 0;
	return 0;
}

var func_140()//Position - 0x3D34
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1683;
	Global_2672505.f_1683 = 1;
	return uVar0;
}

float func_141(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3D4F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_142(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3DE8
{
	var uVar0;
	
	uVar0 = func_143(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_143(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3E0B
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_177();
	if (func_176(sParam2))
	{
	}
	if (func_175())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_173(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_172(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_169(0, &iVar1);
					break;
				
				case 3:
					func_169(1, &iVar1);
					break;
				
				case 1:
					func_166(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_164(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_154((func_163(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 != -1)
				{
					func_164(1166, iVar1, -1);
				}
				func_148(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_144((func_146(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_144((func_146(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_144(int iParam0)//Position - 0x3F76
{
	if (func_175())
	{
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5 = iParam0;
		func_145(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x3FA1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_146(int iParam0)//Position - 0x3FBD
{
	if (iParam0 > -1)
	{
		if (func_227(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_147(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_147(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_147(int iParam0)//Position - 0x4010
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

void func_148(int iParam0)//Position - 0x402E
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_153(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_151(func_152(&Var0));
			if (iVar1 == 0)
			{
				func_150(&Global_1665493, iParam0);
				func_149(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_150(&Global_1665494, iParam0);
				func_149(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_150(&Global_1665495, iParam0);
				func_149(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_150(&Global_1665496, iParam0);
				func_149(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_150(&Global_1665497, iParam0);
				func_149(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1665497);
			}
		}
	}
}

void func_149(int iParam0, int iParam1)//Position - 0x4102
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1665488 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_150(var uParam0, int iParam1)//Position - 0x4227
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_151(int iParam0)//Position - 0x4238
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_152(var* uParam0)//Position - 0x4295
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

struct<13> func_153(int iParam0)//Position - 0x42B8
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_154(int iParam0, int iParam1, int iParam2)//Position - 0x42CF
{
	if (func_175())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_46(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_46(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_162(PLAYER::PLAYER_ID()))
		{
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6 = func_160(iParam0, 1);
		}
		func_159(640, iParam0, -1, 1);
		func_158(641, func_160(iParam0, 1), -1, 1, 0);
		Global_1665638[func_46(-1)] = iParam0;
		func_155(-1109644434, 7, 0);
	}
}

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x43F5
{
	int iVar0;
	
	if (func_157(iParam1, iParam2))
	{
		iVar0 = func_156();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_156()//Position - 0x4422
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_157(int iParam0, var uParam1)//Position - 0x4457
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x44DD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x450D
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_46(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_46(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_46(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_46(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_46(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_46(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_46(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_46(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_46(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_46(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_46(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_46(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_46(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_46(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_46(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_46(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_46(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_46(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_46(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_46(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_46(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_46(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_46(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_46(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_46(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_46(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_46(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_46(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_46(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_46(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_46(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_46(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_46(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_46(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_46(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_46(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_46(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_46(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_46(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_46(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_46(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_46(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_46(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_46(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_46(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_46(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_46(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_46(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_46(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_46(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_46(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_46(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_46(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_46(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_46(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_160(int iParam0, bool bParam1)//Position - 0x503F
{
	if (bParam1)
	{
	}
	return func_161(iParam0, 0);
}

int func_161(int iParam0, int iParam1)//Position - 0x5053
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
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
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

int func_162(int iParam0)//Position - 0x5112
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_163(int iParam0)//Position - 0x5134
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1665638[func_46(-1)];
			}
			else if (func_162(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_46(-1)];
	}
	return 0;
}

void func_164(int iParam0, int iParam1, int iParam2)//Position - 0x5191
{
	int iVar0;
	
	iVar0 = func_186(iParam0, func_46(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_165(iParam0))
	{
		func_158(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_159(iParam0, iVar0, iParam2, 1);
	}
}

int func_165(int iParam0)//Position - 0x51D3
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_166(int iParam0)//Position - 0x54A3
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_168(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_167(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_167(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_167(int iParam0, int iParam1)//Position - 0x558F
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_168(int iParam0, int iParam1)//Position - 0x55B0
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764201 = { func_153(iParam0) };
		Global_2764214 = { func_153(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_169(bool bParam0, int iParam1)//Position - 0x561D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_227(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_168(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_227(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_170(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_168(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_167(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_167(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_170(int iParam0, int iParam1)//Position - 0x5735
{
	return SYSTEM::VDIST(func_171(iParam0), func_171(iParam1));
	return 0f;
}

Vector3 func_171(int iParam0)//Position - 0x5751
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_172(int iParam0)//Position - 0x5764
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_167(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_173(int iParam0)//Position - 0x579B
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_163(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_163(PLAYER::PLAYER_ID());
		}
	}
	if (func_174(8000, 0, 0) > 0)
	{
		if (func_174(8000, 0, 0) < (iParam0 + func_163(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_174(8000, 0, 0) - func_163(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_174(int iParam0, bool bParam1, int iParam2)//Position - 0x57FF
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_175()//Position - 0x5827
{
	return 1;
}

int func_176(char* sParam0)//Position - 0x5830
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_177()//Position - 0x5868
{
	int iVar0;
	
	if (func_185(PLAYER::PLAYER_ID()) || func_184(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_182() || func_178(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7095 /* Tunable: JOB_RP_CAP */ > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_178(int iParam0)//Position - 0x5900
{
	return func_179(func_180(iParam0));
}

int func_179(int iParam0)//Position - 0x5912
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x592C
{
	if (func_181(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_181(int iParam0, int iParam1)//Position - 0x594F
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0x598A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_107();
	}
	return func_183(Global_4718592.f_113724);
}

int func_183(int iParam0)//Position - 0x59AE
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_184(int iParam0)//Position - 0x59E8
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_185(int iParam0)//Position - 0x59FD
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0x5A12
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_46(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_187(int iParam0, int iParam1)//Position - 0x5A4F
{
	int iVar0;
	
	iVar0 = func_186(iParam0, func_46(iParam1), 0);
	iVar0++;
	if (!func_165(iParam0))
	{
		func_158(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_159(iParam0, iVar0, iParam1, 1);
	}
}

void func_188()//Position - 0x5A90
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_85.f_2) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_85.f_2), false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_90))
		{
			iLocal_90 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_85.f_2));
			if (!BitTest(Local_85.f_1, 0))
			{
				HUD::SET_BLIP_SPRITE(iLocal_90, 307);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_90, "PTD_BLIPN" /* GXT: Smuggler Plane */);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_90, 64);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_90, "PTD_BLIPH" /* GXT: Smuggler Helicopter */);
			}
			HUD::SET_BLIP_COLOUR(iLocal_90, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_90, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_90, 6);
			if (func_191())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_90, 0);
			}
		}
		else
		{
			if (!BitTest(Local_85.f_1, 0))
			{
				HUD::SET_BLIP_ROTATION(iLocal_90, SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_85.f_2))));
			}
			if (func_191() || func_189())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_90, 0);
			}
			else
			{
				HUD::SET_BLIP_DISPLAY(iLocal_90, 4);
			}
		}
	}
}

var func_189()//Position - 0x5B68
{
	return Global_2646729.f_1869;
}

void func_190(char* sParam0, int iParam1)//Position - 0x5B77
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_191()//Position - 0x5B8E
{
	return 1;
}

bool func_192(int iParam0)//Position - 0x5B97
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644545, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_193()//Position - 0x5BB2
{
	return Local_85.f_0;
}

int func_194(int iParam0)//Position - 0x5BBC
{
	return Local_87[iParam0 /*3*/];
}

bool func_195(int iParam0)//Position - 0x5BCA
{
	return !func_196(iParam0);
}

int func_196(int iParam0)//Position - 0x5BD9
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
			if (Global_262145.f_7120 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7121 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7122 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7123 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_197(4))
			{
				return 0;
			}
			if (func_198(PLAYER::PLAYER_ID(), 7))
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

int func_197(bool bParam0)//Position - 0x5F0D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_227(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657589[iVar0 /*466*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_198(int iParam0, int iParam1)//Position - 0x5F50
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_199()//Position - 0x5F66
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_206())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_205())
	{
		return 1;
	}
	if (func_204(159))
	{
		if (!func_203())
		{
			return 1;
		}
	}
	if (func_204(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_200() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_200()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_200()//Position - 0x5FEA
{
	switch (func_202())
	{
		case 0:
			return func_201();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_201()//Position - 0x601D
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_202()//Position - 0x6041
{
	return Global_32163;
}

bool func_203()//Position - 0x604C
{
	return Global_2683862.f_698;
}

int func_204(int iParam0)//Position - 0x605B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_205()//Position - 0x6072
{
	return Global_2694524;
}

bool func_206()//Position - 0x607E
{
	return Global_2683862.f_693;
}

void func_207()//Position - 0x608D
{
	SYSTEM::WAIT(0);
}

void func_208()//Position - 0x609A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_90))
	{
		HUD::REMOVE_BLIP(&iLocal_90);
	}
	if (BitTest(Local_85.f_1, 1))
	{
		func_29(2, "PTD_FAIL" /* GXT: Sum1 just tried 2 sell me sum guns!  That means that the byrd landed, and u r no kind of friend at all! Remind me 2 eat u when I next c u */, 0, 0, -99);
	}
	func_211();
	if (func_193() == 4 && Local_85.f_4 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_85.f_4, false);
	}
	func_210(15, 0);
	func_209();
}

void func_209()//Position - 0x60F3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_210(bool bParam0, bool bParam1)//Position - 0x60FF
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
	}
}

void func_211()//Position - 0x615C
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_88);
}

void func_212(struct<21> Param0)//Position - 0x616A
{
	int iVar0;
	
	func_223(func_224(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_221(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_85, 28, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_87, 97, 0);
	if (!func_220())
	{
		func_208();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_85.f_4 = joaat("cuban800");
					Local_85.f_5 = joaat("A_M_M_Skidrow_01");
					break;
				
				case 1:
					Local_85.f_4 = joaat("stunt");
					Local_85.f_5 = joaat("A_M_Y_EastSA_02");
					break;
				
				case 2:
					Local_85.f_4 = joaat("duster");
					Local_85.f_5 = joaat("A_M_M_ProlHost_01");
					break;
				
				case 3:
					Local_85.f_4 = joaat("mammatus");
					Local_85.f_5 = joaat("A_M_Y_Vinewood_02");
					break;
				
				case 4:
					Local_85.f_4 = joaat("maverick");
					Local_85.f_5 = joaat("A_M_M_EastSA_02");
					MISC::SET_BIT(&(Local_85.f_1), 0);
					break;
				
				case 5:
					Local_85.f_4 = joaat("swift");
					Local_85.f_5 = joaat("A_M_Y_BusiCas_01");
					MISC::SET_BIT(&(Local_85.f_1), 0);
					break;
			}
			if (Local_85.f_4 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_85.f_4, true);
			}
			func_219();
			func_213();
		}
		func_210(15, 1);
		Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_208();
	}
}

void func_213()//Position - 0x62B7
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		Local_85.f_9[iVar0 /*3*/] = { func_215(iVar1) };
		if (iVar0 > 0)
		{
			if (func_214(Local_85.f_9[iVar0 /*3*/], Local_85.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_85.f_9[iVar0 /*3*/] = { func_215(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_214(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x6324
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_215(int iParam0)//Position - 0x639F
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_218();
		
		case 1:
			return func_217();
		
		case 2:
			return func_216();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_216()//Position - 0x63F5
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1915.9016f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.8578f, -2148.4177f, 57.9675f;
		
		case 2:
			return 1104.8152f, -3142.3347f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.3271f, 5.0591f;
		
		case 4:
			return 1376.0369f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.0846f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.4799f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.6388f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.0131f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.2463f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.2463f, -544.2941f, 56.4061f;
}

Vector3 func_217()//Position - 0x6550
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 2312.7073f, 1531.2584f, 59.8792f;
		
		case 1:
			return 1069.5798f, 2366.3628f, 43.0396f;
		
		case 2:
			return -1979.7805f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.3934f, 1113.0664f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.5696f, 362.0491f;
		
		case 5:
			return 1671.2318f, 3041.1763f, 53.0351f;
		
		case 6:
			return -3163.3643f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.6768f, 324.9297f;
		
		case 9:
			return 2909.1543f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.9092f, 2853.2659f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.7783f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.9062f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.9062f, 27.4341f;
}

Vector3 func_218()//Position - 0x66AB
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
	{
		case 0:
			return 1015.5989f, 4350.6685f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.2498f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.6511f, 40.328f;
		
		case 4:
			return 1888.6101f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_219()//Position - 0x6802
{
	Local_85.f_6 = { func_215(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)) };
	Local_85.f_6 = { Local_85.f_6 + Vector(120f, 0f, 0f) };
}

int func_220()//Position - 0x682E
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
		if (func_206())
		{
			return 0;
		}
		if (func_204(157))
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

int func_221(int iParam0, int iParam1, bool bParam2)//Position - 0x6887
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_209();
			}
			else
			{
				return 0;
			}
		}
		if (!func_222(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_209();
					}
					else
					{
						return 0;
					}
				}
				if (func_206())
				{
					if (!bParam2)
					{
						func_209();
					}
					else
					{
						return 0;
					}
				}
				if (func_204(157))
				{
					if (!bParam2)
					{
						func_209();
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
					func_209();
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
				func_209();
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
			func_209();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_222(bool bParam0)//Position - 0x699D
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_223(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x69AE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_209();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_224(int iParam0)//Position - 0x69CD
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
	switch (func_225(func_226(iParam0, 1)))
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

int func_225(int iParam0)//Position - 0x714E
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

int func_226(int iParam0, bool bParam1)//Position - 0x7316
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

int func_227(int iParam0, bool bParam1, bool bParam2)//Position - 0x78D9
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

