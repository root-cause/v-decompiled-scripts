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
	struct<48> Local_88 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_136 = 0;
	struct<3> Local_137[32];
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int* iLocal_241 = NULL;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	struct<8> Local_249[3];
	var uLocal_274 = 0;
	var uLocal_275 = 0;
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
	iLocal_238 = 1076369579;
	iLocal_239 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_247(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_236(ScriptParam_0);
	}
	else
	{
		func_232();
	}
	while (true)
	{
		func_231();
		if (func_223() || func_219(17))
		{
			func_232();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_232();
		}
		switch (func_218(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_217() == 1)
				{
					func_216();
					func_214();
					if (func_213(60000))
					{
						if (!func_212())
						{
							if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_88.f_10))
							{
								func_211("DSV_HELP1" /* GXT: A target vehicle ~HUD_COLOUR_RED~~BLIP_GANG_VEHICLE~ ~s~has been located in Los Santos. Destroy it. */, -1);
							}
							else
							{
								func_211("DSV_HELP2" /* GXT: A target vehicle ~HUD_COLOUR_RED~~BLIP_GANG_BIKE~ ~s~has been located in Los Santos. Destroy it. */, -1);
							}
						}
					}
					Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_217() == 4)
				{
					Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_217() == 1)
				{
					func_46();
				}
				else if (func_217() == 4)
				{
					Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_45(&(Local_88.f_45));
				if (func_44(&(Local_88.f_45)))
				{
					Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_232();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_217())
			{
				case 0:
					if (func_10())
					{
						func_216();
						func_9(&(Local_88.f_43), 0, 0);
						Local_88.f_0 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_88.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x216
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x22A
{
	struct<15> Var0;
	struct<15> Var15;
	
	if (Local_88.f_42 == 0)
	{
		if (Local_88.f_0 != 4)
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_88.f_2), false))
			{
				if (func_6(&(Local_88.f_47), 3000, 0))
				{
					if (Local_88.f_8 == func_5())
					{
						Var0.f_3 = 1698144520;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_3 = 175357111;
						Var0.f_11 = Local_88.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_88.f_43), Global_262145.f_11805 /* Tunable: DESTROY_VEHICLE_EXPIRY_TIME */, 0))
			{
				Var15.f_3 = -1178382538;
				func_3(Var15, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0x2D6
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_4(int iParam0)//Position - 0x305
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
			if (func_247(iVar2, 0, 0))
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

int func_5()//Position - 0x362
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x36B
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_7()//Position - 0x3C9
{
	switch (Local_88.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()//Position - 0x3EC
{
	struct<15> Var0;
	int iVar15;
	
	if (Local_88.f_0 != 4)
	{
		iLocal_236 = 0;
		while (iLocal_236 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_236)))
			{
				iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_236));
				if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 0))
				{
					Var0.f_3 = 175357111;
					Var0.f_11 = iVar15;
					Local_88.f_8 = iVar15;
					func_3(Var0, func_4(1));
					Local_88.f_0 = 4;
					return;
				}
				if (!BitTest(Local_88.f_1, 0))
				{
					if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 1))
					{
						MISC::SET_BIT(&(Local_88.f_1), 0);
					}
					if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 2))
					{
						MISC::SET_BIT(&(Local_88.f_1), 0);
					}
				}
				else
				{
					if (!BitTest(Local_88.f_1, 1))
					{
						if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 3))
						{
							MISC::SET_BIT(&(Local_88.f_1), 1);
						}
					}
					if (!BitTest(Local_88.f_1, 2))
					{
						if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 4))
						{
							MISC::SET_BIT(&(Local_88.f_1), 2);
						}
					}
					if (!BitTest(Local_88.f_1, 3))
					{
						if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 5))
						{
							MISC::SET_BIT(&(Local_88.f_1), 3);
						}
					}
					if (!BitTest(Local_88.f_1, 4))
					{
						if (BitTest(Local_137[iLocal_236 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&(Local_88.f_1), 4);
						}
					}
				}
			}
			iLocal_236++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x517
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

int func_10()//Position - 0x55C
{
	if (func_43(Local_88.f_10) && func_43(Local_88.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_88.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x5AA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_88.f_14)
	{
		if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_4[iVar0]) && func_43(Local_88.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_2))
		{
			if (func_17(Local_88.f_2))
			{
				if (Local_88.f_12 == 0)
				{
					if (func_16(&(Local_88.f_4[iVar0]), Local_88.f_2, 22, Local_88.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_88.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_88.f_4[iVar0]), 22, Local_88.f_11, Local_88.f_28[iVar0 /*3*/], Local_88.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_88.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_88.f_14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x691
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x6F0
{
	int iVar0;
	
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(*uParam0), Global_1837293);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(*uParam0), 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(*uParam0), true);
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(*uParam0), func_15(), 25000, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 5, true);
	}
	else if (iVar0 == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 17, true);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 13, true);
	}
	if (func_14())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 20, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 2, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iVar0 == 0)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 3);
	}
	PED::SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(NETWORK::NET_TO_PED(*uParam0), true);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam0), true);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(*uParam0), 29, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 3);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(*uParam0), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0, 0);
}

int func_14()//Position - 0x8BA
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x8D8
{
	switch (Local_88.f_11)
	{
		case joaat("G_M_Y_BallaOrig_01"):
		case joaat("G_M_Y_BallaEast_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				
				case 2:
					return joaat("WEAPON_MICROSMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				
				default:
			}
			break;
		
		case joaat("G_M_Y_MexGoon_02"):
		case joaat("G_F_Y_Vagos_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				
				case 2:
					return joaat("WEAPON_MICROSMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				
				default:
			}
			break;
		
		case joaat("G_M_Y_Lost_01"):
		case joaat("G_F_Y_Lost_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				
				case 2:
					return joaat("WEAPON_SMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				
				default:
			}
			break;
		
		case joaat("G_M_M_ChiGoon_02"):
		case joaat("G_M_M_ChiGoon_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				
				case 2:
					return joaat("WEAPON_ADVANCEDRIFLE");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				
				default:
			}
			break;
		
		case joaat("G_M_M_ArmGoon_01"):
		case joaat("G_M_Y_ArmGoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				
				case 2:
					return joaat("WEAPON_SMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				
				default:
			}
			break;
		
		case joaat("A_M_M_Hillbilly_02"):
		case joaat("A_M_M_Hillbilly_01"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_COMBATPISTOL");
				
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				
				case 2:
					return joaat("WEAPON_MICROSMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_COMBATMG");
				
				default:
			}
			break;
		
		case joaat("G_M_Y_SalvaGoon_01"):
		case joaat("G_M_Y_SalvaGoon_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				
				case 2:
					return joaat("WEAPON_MICROSMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				
				default:
			}
			break;
		
		case joaat("G_M_Y_StrPunk_01"):
		case joaat("G_M_Y_StrPunk_02"):
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_SAWNOFFSHOTGUN");
				
				case 2:
					return joaat("WEAPON_MICROSMG");
				
				case 3:
					return joaat("WEAPON_MG");
				
				case 4:
					return joaat("WEAPON_ASSAULTRIFLE");
				
				default:
			}
			break;
		
		default:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return joaat("WEAPON_PISTOL");
				
				case 1:
					return joaat("WEAPON_PUMPSHOTGUN");
				
				case 2:
					return joaat("WEAPON_SMG");
				
				case 3:
					return joaat("WEAPON_COMBATMG");
				
				case 4:
					return joaat("WEAPON_CARBINERIFLE");
				
				default:
			}
			break;
	}
	return joaat("WEAPON_PISTOL");
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xC42
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

int func_17(int iParam0)//Position - 0xCCA
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_18(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xCEA
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

int func_19()//Position - 0xD23
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_3) && func_43(Local_88.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_2))
	{
		if (func_17(Local_88.f_2))
		{
			if (Local_88.f_12 == 1)
			{
				if (func_12(&(Local_88.f_3), 22, Local_88.f_11, Local_88.f_24, Local_88.f_27, 1, 1, 1))
				{
					func_13(&(Local_88.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_88.f_3), Local_88.f_2, 22, Local_88.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_88.f_3));
				func_20();
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()//Position - 0xDC7
{
	if (Local_88.f_12 == 0)
	{
		if (func_14())
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_88.f_3), NETWORK::NET_TO_VEH(Local_88.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786468);
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_88.f_3), NETWORK::NET_TO_VEH(Local_88.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786599);
		}
	}
	else if (Local_88.f_12 == 2)
	{
		func_216();
		TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_88.f_3), iLocal_235);
	}
}

int func_21()//Position - 0xE45
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_2))
	{
		if (func_43(Local_88.f_10))
		{
			if (func_25(&(Local_88.f_16), &(Local_88.f_19)))
			{
				if (func_22(&(Local_88.f_2), Local_88.f_10, Local_88.f_16, Local_88.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_88.f_2), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_88.f_2), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_88.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_88.f_2), true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_88.f_2), false);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_88.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_88.f_2), "MPBitset"))
						{
							iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_88.f_2), "MPBitset");
						}
						MISC::SET_BIT(&iVar0, 10);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_88.f_2), "MPBitset", iVar0);
					}
					if (Local_88.f_12 == 0)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_88.f_2)) < Local_88.f_14)
						{
							Local_88.f_14 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_88.f_2));
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0xF78
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
			func_23(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x1081
{
	int iVar0;
	
	if (func_24(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_24(int iParam0, struct<3> Param1, int iParam4)//Position - 0x1154
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

bool func_25(int iParam0, float* fParam1)//Position - 0x11F2
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	
	Var5 = { func_42(PLAYER::PLAYER_ID()) };
	if (Local_88.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var5, iParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*iParam0, 1, iParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.5571f, -3220.5977f, 12.9448f, Var5, true) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Var5, true) >= 700f)
				{
					if (iLocal_240 <= 5)
					{
						if (func_26(*iParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_88.f_0 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_239 += 4;
		if (iLocal_239 >= 80)
		{
			iLocal_239 = 20;
			iLocal_240++;
		}
	}
	return bVar0;
}

int func_26(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x12F3
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
		if (func_36(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_27(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

int func_27(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x1405
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_247(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
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
		if (func_247(iVar1, 1, 1))
		{
			if (!func_29(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_28(iVar1) || !bParam10) && !Global_2657921[iVar1 /*463*/].f_270)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(iVar1), Param0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_33(iVar1), Param0, true) <= (fVar2 + fParam3))
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

int func_28(int iParam0)//Position - 0x15BD
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657921[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)//Position - 0x15E8
{
	bool bVar0;
	
	if (!func_32(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)//Position - 0x1641
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()//Position - 0x1682
{
	return Global_1574925;
}

int func_32(int iParam0)//Position - 0x168E
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

Vector3 func_33(int iParam0)//Position - 0x16B0
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_35() && Global_1845263[iVar0 /*877*/].f_844) && !func_34(Global_1845263[iVar0 /*877*/].f_845))
	{
		return Global_1845263[iVar0 /*877*/].f_845;
	}
	return func_42(iParam0);
}

int func_34(struct<3> Param0)//Position - 0x1703
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_35()//Position - 0x172D
{
	return Global_2684312.f_19;
}

int func_36(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x173B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_247(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_28(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_37(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_42(iVar1), Param0, true) < fParam3)
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

int func_37(int iParam0)//Position - 0x183F
{
	if (func_41(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2706987 = { func_40(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2706987))
	{
		return 1;
	}
	if (func_38(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0, int iParam1)//Position - 0x1886
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (func_32(iVar0))
	{
		if (iVar0 == func_39(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x18AF
{
	if (func_32(iParam0))
	{
		return Global_1886967[iParam0 /*609*/].f_10;
	}
	return func_5();
}

struct<13> func_40(int iParam0)//Position - 0x18D2
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_41(int iParam0, int iParam1)//Position - 0x18E9
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2706987 = { func_40(iParam0) };
		Global_2707000 = { func_40(iParam1) };
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

Vector3 func_42(int iParam0)//Position - 0x1956
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_43(int iParam0)//Position - 0x1969
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_44(var uParam0)//Position - 0x1987
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

void func_45(var uParam0)//Position - 0x19B0
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_46()//Position - 0x19CF
{
	switch (Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_214();
			func_52();
			func_47();
			if (Local_88.f_42 > 0)
			{
				Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_232();
			break;
	}
}

void func_47()//Position - 0x1A1B
{
	int iVar0;
	
	func_48(Local_88.f_3, &iLocal_241, -1082130432, 0, 0, 0, 0, -1, -1, 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < Local_88.f_14)
	{
		func_48(Local_88.f_4[iVar0], &(Local_249[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0, 0);
		iVar0++;
	}
	if (BitTest(Local_88.f_1, 0))
	{
		if (!BitTest(Local_88.f_1, 1) && !BitTest(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 3))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_88.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_88.f_3), Global_1837294);
					MISC::SET_BIT(&(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!BitTest(Local_88.f_1, (2 + iVar0)) && !BitTest(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, (4 + iVar0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_4[iVar0]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_88.f_4[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_88.f_4[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_88.f_4[iVar0]), Global_1837294);
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_88.f_4[iVar0])))
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_88.f_4[iVar0]), 100f, 0);
						}
						MISC::SET_BIT(&(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_48(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0x1BA0
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_51(0))
		{
			Global_2672741 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_50(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2672741, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_50(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2672741, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_49(iParam1);
	}
}

void func_49(int* iParam0)//Position - 0x1C24
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)//Position - 0x1C96
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_51(bool bParam0)//Position - 0x1E88
{
	if (bParam0)
	{
	}
	return Global_1575052;
}

void func_52()//Position - 0x1E99
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_88.f_2))
	{
		if (!BitTest(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_88.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_88.f_2), false))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_88.f_2), false))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_88.f_2, &uVar0))
				{
					func_210(2106, 1, -1);
					func_206(68, 1, -1);
					func_155(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COMPLETE_DESTROY_VEH"), Global_262145.f_8746 /* Tunable: DESTROYVEHXP */, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_142(86, "DSV_PASS0" /* GXT: Oh shit! All of a sudden the price of molly's gone up.  That's tight work. */, 0, 0, -99);
					}
					else
					{
						func_142(86, "DSV_PASS1" /* GXT: Haha. Them idiots had a note on that stash. They goin be paying that for a long time. You real, you know that. */, 0, 0, -99);
					}
					iVar1 = Global_262145.f_8747 /* Tunable: DESTROYVEHCASH */;
					Global_2698492 = iVar1;
					func_78(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_74(iVar1, 1, 1, 1092616192);
						if (func_73())
						{
							func_61(joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"), iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					MISC::SET_BIT(&(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!BitTest(Local_88.f_1, 0))
				{
					if (!BitTest(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 1))
					{
						if (func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_88.f_2), 1))
						{
							MISC::SET_BIT(&(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 1);
						}
					}
					if (!BitTest(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 2))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_88.f_2), PLAYER::PLAYER_PED_ID(), true))
						{
							MISC::SET_BIT(&(Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 2);
						}
					}
				}
				if (func_247(PLAYER::PLAYER_ID(), 1, 1) && func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_88.f_2), 0))
				{
					if (!BitTest(Global_2738587.f_4699, 1))
					{
						MISC::SET_BIT(&(Global_2738587.f_4699), 1);
					}
				}
				else if (BitTest(Global_2738587.f_4699, 1))
				{
					MISC::CLEAR_BIT(&(Global_2738587.f_4699), 1);
				}
				func_53();
			}
		}
	}
}

void func_53()//Position - 0x2081
{
	if (!BitTest(uLocal_234, 0))
	{
		if (func_59(27, -1) == 0)
		{
			if (func_247(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_60(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_88.f_2), 0))
				{
					if (func_6(&uLocal_274, 300000, 0))
					{
						func_56(27, 1, -1);
						MISC::SET_BIT(&uLocal_234, 0);
					}
				}
				else if (func_55(&uLocal_274))
				{
					func_54(&uLocal_274);
				}
			}
			else if (func_55(&uLocal_274))
			{
				func_54(&uLocal_274);
			}
		}
		else
		{
			MISC::SET_BIT(&uLocal_234, 0);
		}
	}
}

void func_54(var uParam0)//Position - 0x210D
{
	uParam0->f_1 = 0;
}

bool func_55(var uParam0)//Position - 0x211A
{
	return uParam0->f_1;
}

void func_56(int iParam0, bool bParam1, int iParam2)//Position - 0x2126
{
	int iVar0;
	
	iVar0 = func_57(iParam0, iParam2);
	STATS::STAT_SET_BOOL(iVar0, bParam1, true);
}

int func_57(int iParam0, var uParam1)//Position - 0x2142
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_58(uParam1));
}

int func_58(var uParam0)//Position - 0x2158
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_59(int iParam0, int iParam1)//Position - 0x218C
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_57(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, bool bParam2)//Position - 0x21B0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2201
{
	int iVar0;
	
	if (!func_73())
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_62(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_62(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_28652 /* Tunable: 1103207774 */)
			{
				func_62(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
			func_62(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2B14
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_31()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537357 = 1;
			return 0;
		}
		if (Global_2697412)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537358 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535851[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_69(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535851[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535851[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537338 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537356 = 1;
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537359 = iParam4;
			Global_4537361 = iParam3;
			Global_4537362 = 1;
			Global_4537360 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_68(1, iParam4);
			Global_4537356 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_63(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CC1
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_64(iParam0);
	}
}

void func_64(int iParam0)//Position - 0x2CF9
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_67(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535851[iParam0 /*85*/].f_66);
		}
		func_65(&(Global_4535851[iParam0 /*85*/]));
	}
}

void func_65(var uParam0)//Position - 0x2D4D
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
	func_66(&(uParam0->f_14));
	func_66(&(uParam0->f_14.f_13));
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

void func_66(var uParam0)//Position - 0x2E59
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

int func_67(int iParam0)//Position - 0x2EA1
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535851[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_68(int iParam0, int iParam1)//Position - 0x2ECC
{
	Global_2698632 = iParam1;
	Global_2698631 = iParam0;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x2EE0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535851[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_73())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535851[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535851[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535851[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535851[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535851[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535851[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535851[iVar0 /*85*/].f_66 = iParam0;
			Global_4535851[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535851[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535851[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535851[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535851[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535851[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535851[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537338 = 0;
			if (bParam6)
			{
				Global_4535851[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_70(Global_4535851[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x301D
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_72(Var0.f_1);
	if ((Global_262145.f_24288 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24289 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24290 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_71();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_71()//Position - 0x30B1
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_72(int iParam0)//Position - 0x30C0
{
	var uVar0;
	
	if (func_32(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_73()//Position - 0x30DB
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x30F2
{
	func_75(iParam0, iParam1, iParam2, fParam3);
}

void func_75(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3106
{
	func_76(iParam0, iParam1, iParam2, fParam3);
}

void func_76(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x311A
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
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_4 = iVar1;
	Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 = (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_77(iVar1, 0);
	}
}

void func_77(int iParam0, bool bParam1)//Position - 0x319D
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_78(var uParam0, int iParam1)//Position - 0x31AE
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_141())
		{
			if (func_140(0))
			{
				if (!func_136(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_135()))
					{
						if (func_134() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_134());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_132(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_83("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_135(), iVar0, 0, 0, 1);
						}
						func_82(20);
						func_79(func_135(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_79(int iParam0, int iParam1, int iParam2)//Position - 0x324D
{
	struct<9> Var0;
	
	if (func_247(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_81(iParam0);
		func_80(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_72(iParam0), Var0.f_0);
	}
}

void func_80(var uParam0, var uParam1)//Position - 0x32A5
{
	*uParam0 = Global_1916087.f_9;
	*uParam1 = Global_1916087.f_10;
}

var func_81(int iParam0)//Position - 0x32BF
{
	return Global_1886967[iParam0 /*609*/].f_511;
}

void func_82(int iParam0)//Position - 0x32D3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738587.f_5234.f_7[iVar0]), iVar1);
}

int func_83(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x32FC
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_90(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_88(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_84(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_84(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3394
{
	int iVar0;
	
	if ((!func_87() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_29(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_85(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1936604.f_5[iVar0 /*53*/] = iParam0;
		Global_1936604.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1936604.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1936604.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1936604.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1936604.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1936604.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1936604.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_85(int iParam0)//Position - 0x349C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1936604 - 1))
	{
		if (iParam0 > Global_1936604.f_5[iVar0 /*53*/].f_1)
		{
			func_86(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1936604++;
	if (Global_1936604 > 5)
	{
		Global_1936604 = 5;
		return Global_1936604;
	}
	return (Global_1936604 - 1);
}

void func_86(int iParam0)//Position - 0x34FE
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1936604.f_5[iVar0 /*53*/] = { Global_1936604.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_87()//Position - 0x3537
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_88(char* sParam0)//Position - 0x3548
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_89(&cVar0);
}

var func_89(char[4] cParam0)//Position - 0x356A
{
	return cParam0;
}

int func_90(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3574
{
	int iVar0;
	int iVar1;
	
	if (!func_32(iParam0))
	{
		return 1;
	}
	if (func_130(iParam0) && !bParam4)
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
			if (Global_4718592.f_120437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_130(PLAYER::PLAYER_ID()) || (func_129() && func_128())) && !BitTest(Global_2738587.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_127();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_247(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_120437[iParam1] != -1)
							{
								return func_125(iParam1, iParam0, 0);
							}
							else
							{
								return func_105(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_105(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_120437[iParam1] != -1)
				{
					return func_125(iParam1, iParam0, 0);
				}
				else
				{
					return func_91(0, -1, 0);
				}
			}
			else
			{
				return func_91(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_120437[iParam1] != -1)
		{
			return func_125(iParam1, iParam0, 0);
		}
		else
		{
			return func_105(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_105(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_91(bool bParam0, int iParam1, bool bParam2)//Position - 0x375F
{
	return func_92(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_92(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3775
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_104() || (func_103() && func_101())) && Global_1679836.f_1)
	{
		if (bParam1)
		{
			return func_100(iParam2, iVar0);
		}
		else
		{
			return func_100(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_97(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_96(1);
				}
				else
				{
					return func_96(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_93(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_93(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_96(1);
	}
	return func_96(0);
}

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3877
{
	int iVar0;
	
	iVar0 = func_95(iParam0, iParam1, iParam3);
	if (func_94(Global_4718592.f_126144, 1))
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

int func_94(int iParam0, bool bParam1)//Position - 0x398F
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_183007 == 65)
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
		if (iParam0 == Global_262145.f_9672[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2)//Position - 0x39E0
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
			if (!func_97(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_96(bool bParam0)//Position - 0x3A28
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A3F
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
							if (!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_25550[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_98(iParam0, bVar0, iParam1, bVar1) || !func_98(iParam1, bVar1, iParam0, bVar0))
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

int func_98(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3D8A
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
		if (((!func_247(iVar1, 1, 1) || func_29(iVar1, 0)) || BitTest(Global_2657921[iVar1 /*463*/].f_199, 2)) || func_99(iVar1))
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

var func_99(int iParam0)//Position - 0x3EB6
{
	return BitTest(Global_1845263[iParam0 /*877*/].f_36.f_18, 14);
}

int func_100(int iParam0, int iParam1)//Position - 0x3ECE
{
	if (iParam0 == -1)
	{
		iParam0 = func_95(iParam1, iParam0, 4);
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

int func_101()//Position - 0x3F1C
{
	if (func_102())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_187226, 4);
}

bool func_102()//Position - 0x3F3B
{
	return BitTest(Global_4718592.f_176243, 12);
}

bool func_103()//Position - 0x3F50
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_187226, 0);
	}
	return ((BitTest(Global_4718592.f_187226, 0) || Global_1919183) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_104()//Position - 0x3F97
{
	if (func_102() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3FB4
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
	if (Global_1845263[PLAYER::PLAYER_ID() /*877*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845263[iVar2 /*877*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_113())
			{
				iVar3 = func_110(iParam0);
				if (!iVar3 == -1)
				{
					return func_108(iVar3);
				}
			}
			if ((func_107(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_97(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_96(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_106(1);
			}
			else
			{
				return func_92(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836669 || Global_1836659) || Global_1845263[iParam0 /*877*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836669 == 1 && Global_1836679 == 0))
			{
				return func_96(1);
			}
			else
			{
				return func_92(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836663 && Global_1836147.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_110(iParam0);
	if (!iVar4 == -1)
	{
		return func_108(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_106(bool bParam0)//Position - 0x414E
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_107(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4165
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

int func_108(int iParam0)//Position - 0x41DD
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_109(iParam0);
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

var func_109(int iParam0)//Position - 0x42A0
{
	return Global_2648918.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_110(int iParam0)//Position - 0x42B7
{
	if (func_32(iParam0))
	{
		if (func_111(iParam0, 1))
		{
			return Global_2648918.f_818.f_11[func_39(iParam0)];
		}
	}
	return -1;
}

bool func_111(int iParam0, bool bParam1)//Position - 0x42E7
{
	if (!func_32(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_112(iParam0))
		{
			return 0;
		}
	}
	return Global_1886967[iParam0 /*609*/].f_10 != func_5();
}

int func_112(int iParam0)//Position - 0x4320
{
	if (func_32(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
		{
			return Global_1886967[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_113()//Position - 0x4355
{
	if (((((((func_124() || func_123()) || func_35()) || func_122()) || func_121()) || func_119()) || func_117()) || func_114())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_114()//Position - 0x43C7
{
	return func_115(Global_4718592.f_126144);
}

int func_115(int iParam0)//Position - 0x43DD
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_116(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x4411
{
	if (iParam0 != -1)
	{
		return Global_262145.f_34045 /* Tunable: SUM23_AVENGER_OPERATION_ROOT_CONTENT_ID_5 */[iParam0];
	}
	return -1;
}

int func_117()//Position - 0x4430
{
	return func_118(Global_4718592.f_126144);
}

int func_118(int iParam0)//Position - 0x4446
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_32038[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_119()//Position - 0x447F
{
	return func_120(Global_4718592.f_126144);
}

int func_120(int iParam0)//Position - 0x4495
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31332[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_121()//Position - 0x44CF
{
	return Global_2684312.f_24;
}

var func_122()//Position - 0x44DD
{
	return Global_2684312.f_21;
}

var func_123()//Position - 0x44EB
{
	return Global_2684312.f_18;
}

var func_124()//Position - 0x44F9
{
	return Global_2684312.f_17;
}

int func_125(int iParam0, int iParam1, bool bParam2)//Position - 0x4507
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058104.f_14[iParam0];
	if (func_113())
	{
		iVar2 = func_110(iParam1);
		if (!iVar2 == -1)
		{
			return func_108(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3318[iParam0 /*25763*/].f_8496[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4718592.f_120437[iParam0] != -1 && Global_4718592.f_120437[iParam0] <= 4)
		{
			if (Global_4718592.f_120437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_120437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_120437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_120437[iParam0] == 4)
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
				iVar0 = Global_4718592.f_120437[iParam0];
			}
		}
		else
		{
			iVar0 = func_92(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_126(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_97(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_106(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_126(int iParam0)//Position - 0x4687
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_183183;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_183184;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_183185;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_183186;
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

var func_127()//Position - 0x475C
{
	return Global_2621446.f_2;
}

var func_128()//Position - 0x476A
{
	return BitTest(Global_2621446, 4);
}

var func_129()//Position - 0x4778
{
	return BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

int func_130(int iParam0)//Position - 0x4792
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_131())
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

bool func_131()//Position - 0x47D1
{
	return BitTest(Global_2621446, 3);
}

void func_132(int iParam0, bool bParam1)//Position - 0x47DF
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_133(1);
	}
	else
	{
		iVar1 = func_133(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_133(bool bParam0)//Position - 0x4811
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13065 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_134()//Position - 0x4837
{
	return Global_262145.f_13064 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_135()//Position - 0x4846
{
	return Global_1886967[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_136(bool bParam0)//Position - 0x485B
{
	return func_137(PLAYER::PLAYER_ID(), bParam0);
}

int func_137(int iParam0, bool bParam1)//Position - 0x486D
{
	return func_138(iParam0, bParam1, 1);
}

int func_138(int iParam0, bool bParam1, int iParam2)//Position - 0x487E
{
	int iVar0;
	
	if (!func_32(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_139(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1886967[iParam0 /*609*/].f_10;
	if (iVar0 != func_5() && Global_1886967[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0, int iParam1)//Position - 0x48DB
{
	if (func_32(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10 != func_5())
		{
			if (Global_1886967[iParam0 /*609*/].f_10 == iParam0 && Global_1886967[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_140(bool bParam0)//Position - 0x492A
{
	return func_111(PLAYER::PLAYER_ID(), bParam0);
}

bool func_141()//Position - 0x493C
{
	return func_112(PLAYER::PLAYER_ID());
}

void func_142(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x494C
{
	func_143(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_143(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x4963
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_144(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_144(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x4984
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
	iVar0 = func_153();
	if (iVar0 == -1)
	{
		return;
	}
	func_152(iVar0);
	func_151(iVar0, uParam0);
	func_150(iVar0, uParam2, bParam3);
	func_149(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_148(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_146(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_145(iVar0, iParam6);
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x4A30
{
	Global_1663284.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_146(int iParam0, char* sParam1, bool bParam2)//Position - 0x4A46
{
	StringCopy(&(Global_1663284.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_147(iParam0);
}

void func_147(int iParam0)//Position - 0x4A6D
{
	MISC::SET_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 5);
}

void func_148(int iParam0)//Position - 0x4A84
{
	MISC::SET_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 4);
}

void func_149(int iParam0, char* sParam1)//Position - 0x4A9B
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1663284.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_150(int iParam0, var uParam1, bool bParam2)//Position - 0x4ABB
{
	Global_1663284.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 2);
	}
}

void func_151(int iParam0, var uParam1)//Position - 0x4B15
{
	Global_1663284.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_152(int iParam0)//Position - 0x4B2B
{
	MISC::SET_BIT(&(Global_1663284.f_59[iParam0 /*16*/]), 0);
}

int func_153()//Position - 0x4B42
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_154(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_154(int iParam0)//Position - 0x4B70
{
	return BitTest(Global_1663284.f_59[iParam0 /*16*/], 0);
}

int func_155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4B84
{
	return func_156(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_156(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4BA6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_166(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_162(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_157(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_157(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x4C39
{
	struct<3> Var0;
	
	Var0 = { func_160(iParam0, 1) };
	if (iParam0 == func_159(PLAYER::PLAYER_PED_ID()))
	{
		func_158(1);
	}
	func_162(Var0, iParam1, 0, sParam2, iParam3);
}

void func_158(int iParam0)//Position - 0x4C6D
{
	Global_2672741.f_1686 = iParam0;
}

int func_159(int iParam0)//Position - 0x4C7E
{
	return iParam0;
}

Vector3 func_160(int iParam0, bool bParam1)//Position - 0x4C88
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_161(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_161(int iParam0)//Position - 0x4D4C
{
	return iParam0;
}

void func_162(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x4D56
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672741.f_1085[iVar0 /*30*/].f_6 == 0 || Global_2672741.f_1085[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672741.f_1085[iVar1 /*30*/] = { Param0 };
			Global_2672741.f_1085[iVar1 /*30*/].f_6 = 1;
			Global_2672741.f_1085[iVar1 /*30*/].f_4 = func_165(Global_2672741.f_1085[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672741.f_1085[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672741.f_1085[iVar1 /*30*/].f_3 = iParam3;
			Global_2672741.f_1085[iVar1 /*30*/].f_8 = iParam4;
			Global_2672741.f_1085[iVar1 /*30*/].f_9 = func_164();
			Global_2672741.f_1085[iVar1 /*30*/].f_10 = func_163();
			StringCopy(&(Global_2672741.f_1085[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672741.f_1085[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_163()//Position - 0x4E6D
{
	if (Global_2672741.f_1686)
	{
		Global_2672741.f_1686 = 0;
		return 1;
	}
	Global_2672741.f_1686 = 0;
	return 0;
}

var func_164()//Position - 0x4E97
{
	var uVar0;
	
	uVar0 = Global_2672741.f_1688;
	Global_2672741.f_1688 = 1;
	return uVar0;
}

float func_165(struct<3> Param0, var uParam3, var uParam4)//Position - 0x4EB2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_166(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4F4B
{
	var uVar0;
	
	uVar0 = func_167(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4F6E
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_196();
	if (func_195(sParam2))
	{
	}
	if (func_194())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_192(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_191(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_189(0, &iVar1);
					break;
				
				case 3:
					func_189(1, &iVar1);
					break;
				
				case 1:
					func_187(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13604 /* Tunable: -9502162 */)
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
			func_210(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_175((func_186(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 != -1)
				{
					func_210(1166, iVar1, -1);
				}
				func_172(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_168((func_170(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_168((func_170(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_168(int iParam0)//Position - 0x50DC
{
	if (func_194())
	{
		Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_5 = iParam0;
		func_169(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_169(int iParam0, int iParam1)//Position - 0x5107
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_170(int iParam0)//Position - 0x5123
{
	if (iParam0 > -1)
	{
		if (func_247(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_171(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_5;
			}
		}
		else
		{
			return func_171(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x5174
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

void func_172(int iParam0)//Position - 0x5192
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_40(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_173(func_174(&Var0));
			if (iVar13 == 0)
			{
				func_169(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_171(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_169(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_171(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_169(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_171(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_169(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_171(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_169(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_171(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_173(int iParam0)//Position - 0x525C
{
	if (iParam0 == func_171(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_171(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_171(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_171(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_171(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_174(var* uParam0)//Position - 0x52D2
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2695893;
		}
	}
	return Global_2695893;
}

void func_175(int iParam0, int iParam1, int iParam2)//Position - 0x52F5
{
	if (func_194())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10256 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_185(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_185(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
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
		if (Global_262145.f_10255 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_184(PLAYER::PLAYER_ID()))
		{
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_1 = iParam0;
			Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_205.f_6 = func_181(iParam0, 1);
		}
		func_179(640, iParam0, -1, 1);
		func_179(641, func_181(iParam0, 1), -1, 1);
		func_176(-1109644434, 7, 0);
	}
}

void func_176(int iParam0, int iParam1, int iParam2)//Position - 0x5407
{
	int iVar0;
	
	if (func_178(iParam1, iParam2))
	{
		iVar0 = func_177();
		Global_2695845[iVar0] = iParam1;
		Global_2695856[iVar0] = iParam0;
	}
}

int func_177()//Position - 0x5434
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2695845[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_178(int iParam0, var uParam1)//Position - 0x5469
{
	if (Global_1575067)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575079) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_179(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x54EF
{
	int iVar0;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_180(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_180(int iParam0, var uParam1)//Position - 0x551D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_58(uParam1));
}

int func_181(int iParam0, bool bParam1)//Position - 0x5532
{
	if (bParam1)
	{
	}
	return func_182(iParam0, 0);
}

int func_182(int iParam0, int iParam1)//Position - 0x5546
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
		if (func_183(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_183(iVar3) < iParam0)
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

int func_183(int iParam0)//Position - 0x5601
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_184(int iParam0)//Position - 0x5B3C
{
	if (!func_32(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672741.f_1, iParam0);
}

int func_185(int iParam0, int iParam1)//Position - 0x5B5B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14626)
	{
		iVar0 = func_180(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x5B8A
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_185(640, -1);
			}
			else if (func_184(iParam0))
			{
				return Global_1845263[iParam0 /*877*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_185(640, -1);
	}
	return 0;
}

void func_187(int iParam0)//Position - 0x5BE1
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_97(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_41(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_188(*iParam0, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_188(*iParam0, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_188(int iParam0, int iParam1)//Position - 0x5CCD
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_189(bool bParam0, int iParam1)//Position - 0x5CEE
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
				if (func_247(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_41(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_247(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_190(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_41(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_188(*iParam1, 100) * (10f * Global_262145.f_4051 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_188(*iParam1, 100) * (20f * Global_262145.f_4044 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_190(int iParam0, int iParam1)//Position - 0x5E06
{
	return SYSTEM::VDIST(func_42(iParam0), func_42(iParam1));
	return 0f;
}

int func_191(int iParam0)//Position - 0x5E22
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_188(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_192(int iParam0)//Position - 0x5E59
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_186(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_186(PLAYER::PLAYER_ID());
		}
	}
	if (func_193(8000, 0, 0) > 0)
	{
		if (func_193(8000, 0, 0) < (iParam0 + func_186(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_193(8000, 0, 0) - func_186(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_193(int iParam0, bool bParam1, int iParam2)//Position - 0x5EBD
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
	return func_183(iParam0);
}

int func_194()//Position - 0x5EE3
{
	return 1;
}

int func_195(char* sParam0)//Position - 0x5EEC
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

int func_196()//Position - 0x5F24
{
	int iVar0;
	
	if (func_205(PLAYER::PLAYER_ID()) || func_204(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10288 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_202() || func_198(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23493 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_197(Global_4718592.f_183007))
	{
		if (Global_262145.f_7168 /* Tunable: 1840127983 */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7168 /* Tunable: 1840127983 */;
		}
	}
	else if (Global_262145.f_7167 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7167 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_197(int iParam0)//Position - 0x5FF2
{
	return iParam0 == 89;
}

int func_198(int iParam0)//Position - 0x5FFF
{
	return func_199(func_200(iParam0));
}

int func_199(int iParam0)//Position - 0x6011
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x602B
{
	if (func_32(iParam0))
	{
		if (func_201(iParam0, 0))
		{
			return Global_1886967[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_201(int iParam0, int iParam1)//Position - 0x6057
{
	if (func_32(iParam0))
	{
		if (Global_1886967[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1886967[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_202()//Position - 0x609B
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_35();
	}
	return func_203(Global_4718592.f_126144);
}

int func_203(int iParam0)//Position - 0x60BF
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4868[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_204(int iParam0)//Position - 0x60F9
{
	return Global_2657921[iParam0 /*463*/].f_121 == 2;
}

bool func_205(int iParam0)//Position - 0x610E
{
	return Global_2657921[iParam0 /*463*/].f_121 == 7;
}

void func_206(int iParam0, int iParam1, int iParam2)//Position - 0x6123
{
	int iVar0;
	
	iVar0 = func_209(iParam0, func_58(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_207(iParam0, iVar0, iParam2);
}

void func_207(int iParam0, int iParam1, var uParam2)//Position - 0x614A
{
	int iVar0;
	
	iVar0 = func_208(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_208(int iParam0, var uParam1)//Position - 0x6166
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_58(uParam1));
}

int func_209(int iParam0, var uParam1)//Position - 0x617C
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_208(iParam0, uParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_210(int iParam0, int iParam1, int iParam2)//Position - 0x61A0
{
	int iVar0;
	
	iVar0 = func_185(iParam0, func_58(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_179(iParam0, iVar0, iParam2, 1);
}

void func_211(char* sParam0, int iParam1)//Position - 0x61C8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_212()//Position - 0x61DF
{
	return 1;
}

bool func_213(int iParam0)//Position - 0x61E8
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644858, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_214()//Position - 0x6203
{
	if (HUD::DOES_BLIP_EXIST(iLocal_237))
	{
		if (func_212() || func_215())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_237, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_237, 4);
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_88.f_2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_88.f_2), false))
		{
			iLocal_237 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_88.f_2));
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_88.f_10))
			{
				HUD::SET_BLIP_SPRITE(iLocal_237, 225 /*RADAR_GANG_VEHICLE*/);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(iLocal_237, 348 /*RADAR_GANG_BIKE*/);
			}
			HUD::SET_BLIP_COLOUR(iLocal_237, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_237, 7000);
			HUD::SET_BLIP_PRIORITY(iLocal_237, 6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_237, "DSV_BLIP" /* GXT: Target Vehicle */);
			if (func_212())
			{
				HUD::SET_BLIP_DISPLAY(iLocal_237, 0);
			}
		}
	}
}

var func_215()//Position - 0x62B1
{
	return Global_2647042.f_1869;
}

void func_216()//Position - 0x62C0
{
	if (Local_88.f_12 == 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_88.f_2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_88.f_2), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_235);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_88.f_2), Local_88.f_20, 7f, iLocal_238, 3f);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_88.f_24, 1f, -1, 0.25f, 0, Local_88.f_27);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_235);
			}
		}
	}
}

int func_217()//Position - 0x632C
{
	return Local_88.f_0;
}

int func_218(int iParam0)//Position - 0x6336
{
	return Local_137[iParam0 /*3*/];
}

bool func_219(int iParam0)//Position - 0x6344
{
	return !func_220(iParam0);
}

int func_220(int iParam0)//Position - 0x6353
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
			if (Global_262145.f_7193 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7194 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7195 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7196 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 0) || BitTest(Global_1845263[PLAYER::PLAYER_ID() /*877*/].f_267.f_32, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_221(4))
			{
				return 0;
			}
			if (func_222(PLAYER::PLAYER_ID(), 7))
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

int func_221(bool bParam0)//Position - 0x6687
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_247(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657921[iVar0 /*463*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_222(int iParam0, int iParam1)//Position - 0x66CA
{
	return BitTest(Global_2657921[iParam0 /*463*/].f_218, iParam1);
}

int func_223()//Position - 0x66E0
{
	if (Global_1575052 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_230())
	{
		return 1;
	}
	if (Global_2698534)
	{
		return 1;
	}
	if (func_229())
	{
		return 1;
	}
	if (func_228(159))
	{
		if (!func_227())
		{
			return 1;
		}
	}
	if (func_228(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_224() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_224()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_224()//Position - 0x6764
{
	switch (func_226())
	{
		case 0:
			return func_225();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_225()//Position - 0x6797
{
	switch (Global_2698640)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_226()//Position - 0x67BB
{
	return Global_32828;
}

bool func_227()//Position - 0x67C6
{
	return Global_2684312.f_698;
}

int func_228(int iParam0)//Position - 0x67D5
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_229()//Position - 0x67EC
{
	return Global_2695951;
}

bool func_230()//Position - 0x67F8
{
	return Global_2684312.f_693;
}

void func_231()//Position - 0x6807
{
	SYSTEM::WAIT(0);
}

void func_232()//Position - 0x6814
{
	if (HUD::DOES_BLIP_EXIST(iLocal_237))
	{
		HUD::REMOVE_BLIP(&iLocal_237);
	}
	func_235();
	if (func_217() == 4 && Local_88.f_10 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_88.f_10, false);
	}
	MISC::CLEAR_BIT(&(Global_2738587.f_4699), 1);
	func_234(17, 0);
	func_233();
}

void func_233()//Position - 0x6863
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_234(bool bParam0, bool bParam1)//Position - 0x686F
{
	if (bParam1)
	{
		if (!BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657921[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_235()//Position - 0x68CC
{
	if (Local_88.f_12 == 2)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_235);
	}
}

void func_236(struct<21> Param0)//Position - 0x68E2
{
	func_243(func_244(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_242(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_88, 49, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_137, 97, 0);
	if (!func_241())
	{
		func_232();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_237();
			Local_88.f_8 = func_5();
		}
		func_234(17, 1);
		Local_137[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	}
	else
	{
		func_232();
	}
}

void func_237()//Position - 0x695F
{
	func_240();
	Local_88.f_12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Local_88.f_12 == 1 || Local_88.f_12 == 2)
	{
		Local_88.f_15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (Local_88.f_12 == 1)
		{
			func_239(&(Local_88.f_16), &(Local_88.f_19));
		}
		else
		{
			func_239(&(Local_88.f_20), &(Local_88.f_23));
		}
		func_238();
	}
	Local_88.f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Global_262145.f_8750 /* Tunable: DESTROYVEHBONUS */ >= 0 && Global_262145.f_8750 /* Tunable: DESTROYVEHBONUS */ < 5)
	{
		Local_88.f_13 = Global_262145.f_8750 /* Tunable: DESTROYVEHBONUS */;
	}
	else
	{
		Local_88.f_13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
}

void func_238()//Position - 0x69F7
{
	switch (Local_88.f_15)
	{
		case 0:
			Local_88.f_24 = { -2195.7825f, -420.2502f, 12.0819f };
			Local_88.f_27 = 117.3927f;
			Local_88.f_28[0 /*3*/] = { -2189.9753f, -422.8502f, 12.0709f };
			Local_88.f_38[0] = 152.6699f;
			Local_88.f_28[1 /*3*/] = { -2184.0315f, -400.948f, 12.2027f };
			Local_88.f_38[1] = 337.9892f;
			Local_88.f_28[2 /*3*/] = { -2175.2817f, -426.3756f, 12.128f };
			Local_88.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_88.f_24 = { -981.5774f, -1487.3193f, 4.5867f };
			Local_88.f_27 = 300.0815f;
			Local_88.f_28[0 /*3*/] = { -977.8269f, -1494.5681f, 4.5867f };
			Local_88.f_38[0] = 0.731f;
			Local_88.f_28[1 /*3*/] = { -977.7324f, -1491.7174f, 4.5867f };
			Local_88.f_38[1] = 173.7717f;
			Local_88.f_28[2 /*3*/] = { -954.6693f, -1486.7126f, 4.16f };
			Local_88.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_88.f_24 = { 697.3923f, -1375.2698f, 25.196f };
			Local_88.f_27 = 111.1953f;
			Local_88.f_28[0 /*3*/] = { 717.8624f, -1360.4915f, 25.0461f };
			Local_88.f_38[0] = 55.1674f;
			Local_88.f_28[1 /*3*/] = { 703.9843f, -1361.0935f, 24.6728f };
			Local_88.f_38[1] = 306.7133f;
			Local_88.f_28[2 /*3*/] = { 707.1707f, -1388.7064f, 25.2759f };
			Local_88.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_88.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_88.f_27 = 180.4109f;
			Local_88.f_28[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_88.f_38[0] = 43.0354f;
			Local_88.f_28[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_88.f_38[1] = 191.8736f;
			Local_88.f_28[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_88.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_88.f_24 = { 862.7026f, 2875.1482f, 56.9868f };
			Local_88.f_27 = 206.7217f;
			Local_88.f_28[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_88.f_38[0] = 191.0122f;
			Local_88.f_28[1 /*3*/] = { 865.2399f, 2853.5356f, 56.2583f };
			Local_88.f_38[1] = 305.8056f;
			Local_88.f_28[2 /*3*/] = { 867.6559f, 2841.1548f, 56.944f };
			Local_88.f_38[2] = 235.4465f;
			break;
	}
}

void func_239(var uParam0, var uParam1)//Position - 0x6CE7
{
	switch (Local_88.f_15)
	{
		case 0:
			*uParam0 = { -2192.3901f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.8658f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.4773f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_240()//Position - 0x6DAC
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (Global_262145.f_8749 /* Tunable: DESTROYVEHGANG */ >= 0 && Global_262145.f_8749 /* Tunable: DESTROYVEHGANG */ < 8)
	{
		iVar0 = Global_262145.f_8749 /* Tunable: DESTROYVEHGANG */;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_88.f_10 = joaat("baller");
			}
			else
			{
				Local_88.f_10 = joaat("zion");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_Y_BallaOrig_01");
			}
			else
			{
				Local_88.f_11 = joaat("G_M_Y_BallaEast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_88.f_10 = joaat("emperor");
			}
			else
			{
				Local_88.f_10 = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_Y_MexGoon_02");
			}
			else
			{
				Local_88.f_11 = joaat("G_F_Y_Vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_88.f_10 = joaat("daemon");
			}
			else
			{
				Local_88.f_10 = joaat("gburrito");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_Y_Lost_01");
			}
			else
			{
				Local_88.f_11 = joaat("G_F_Y_Lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_88.f_10 = joaat("pcj");
			}
			else
			{
				Local_88.f_10 = joaat("bjxl");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_M_ChiGoon_02");
			}
			else
			{
				Local_88.f_11 = joaat("G_M_M_ChiGoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_88.f_10 = joaat("rocoto");
			}
			else
			{
				Local_88.f_10 = joaat("emperor");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_M_ArmGoon_01");
			}
			else
			{
				Local_88.f_11 = joaat("G_M_Y_ArmGoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_88.f_10 = joaat("journey");
			}
			else
			{
				Local_88.f_10 = joaat("sandking");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("A_M_M_Hillbilly_02");
			}
			else
			{
				Local_88.f_11 = joaat("A_M_M_Hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_88.f_10 = joaat("habanero");
			}
			else
			{
				Local_88.f_10 = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_Y_SalvaGoon_01");
			}
			else
			{
				Local_88.f_11 = joaat("G_M_Y_SalvaGoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_88.f_10 = joaat("buffalo2");
			}
			else
			{
				Local_88.f_10 = joaat("dubsta");
			}
			if (func_14())
			{
				Local_88.f_11 = joaat("G_M_Y_StrPunk_01");
			}
			else
			{
				Local_88.f_11 = joaat("G_M_Y_StrPunk_02");
			}
			break;
	}
}

int func_241()//Position - 0x6FF0
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
		if (func_230())
		{
			return 0;
		}
		if (func_228(157))
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

int func_242(int iParam0, int iParam1, bool bParam2)//Position - 0x7049
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_233();
			}
			else
			{
				return 0;
			}
		}
		if (!func_51(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_233();
					}
					else
					{
						return 0;
					}
				}
				if (func_230())
				{
					if (!bParam2)
					{
						func_233();
					}
					else
					{
						return 0;
					}
				}
				if (func_228(157))
				{
					if (!bParam2)
					{
						func_233();
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
					func_233();
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
				func_233();
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
			func_233();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_243(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x715F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_233();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_244(int iParam0)//Position - 0x717E
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
		
		case 192:
			return 32;
		
		case 193:
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
		
		case 204:
			return 32;
		
		case 205:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 199:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 200:
			return 32;
		
		case 201:
			return 32;
		
		case 206:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 2;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 212:
			return 4;
		
		case 213:
			return 2;
		
		case 214:
			return 2;
		
		case 196:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
			return 0;
		
		case 238:
			return 1;
		
		case 223:
			return 4;
		
		case 226:
			return 4;
		
		case 227:
			return 1;
		
		case 228:
			return 1;
		
		case 234:
			return 1;
		
		case 230:
			return 2;
		
		case 235:
			return 1;
		
		case 231:
			return 1;
		
		case 229:
			return 2;
		
		case 232:
			return 8;
		
		case 233:
			return 8;
		
		case 236:
			return 1;
		
		case 237:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 224:
			return 16;
		
		case 225:
			return 32;
		
		default:
	}
	switch (func_245(func_246(iParam0, 1)))
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

int func_245(int iParam0)//Position - 0x7909
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
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		default:
	}
	return -1;
}

int func_246(int iParam0, bool bParam1)//Position - 0x7B8F
{
	switch (iParam0)
	{
		case 210:
			return 15;
		
		case 217:
			return 8;
		
		case 211:
			return 14;
		
		case 215:
			return 122;
		
		case 218:
			return 1;
		
		case 216:
			return 5;
		
		case 219:
			return 6;
		
		case 212:
			return 11;
		
		case 220:
			return 0;
		
		case 221:
			return 2;
		
		case 213:
			return 13;
		
		case 222:
			return 3;
		
		case 214:
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
		
		case 180:
			return 322;
		
		case 181:
			return 323;
		
		case 182:
			return 324;
		
		case 183:
			return 325;
		
		case 184:
			return 326;
		
		case 185:
			return 327;
		
		case 186:
			return 328;
		
		case 187:
			return 329;
		
		case 188:
			return 330;
		
		case 189:
			return 331;
		
		case 190:
			return 332;
		
		case 191:
			return 333;
		
		default:
	}
	if (bParam1)
	{
	}
	return 337;
}

int func_247(int iParam0, bool bParam1, bool bParam2)//Position - 0x8237
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

