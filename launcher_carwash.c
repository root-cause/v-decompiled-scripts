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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_41 = 0;
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
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59[2];
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
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
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Var2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_carwash")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_74();
	}
	if (Global_2883694)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-949873222) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-949873222, &ScriptParam_62, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_73(PLAYER::PLAYER_PED_ID()))
	{
	}
	func_65();
	while (true)
	{
		func_73(PLAYER::PLAYER_PED_ID());
		if (func_64(PLAYER::PLAYER_PED_ID(), Var2, 0) > (100f + 20f))
		{
			func_74();
		}
		bVar0 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			bVar0 = (func_60(iVar1) || func_59(iVar1));
			bLocal_58 = VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1);
			func_58(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40.f_0)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_74();
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x196
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(0, 101, true);
			func_8();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_75485)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(PLAYER::PLAYER_PED_ID(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (MISC::GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 0;
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if ((PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.05f)
				{
					return 0;
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			HUD::CLEAR_HELP(true);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_73(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
						{
							func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
							VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						}
					}
					PAD::SET_INPUT_EXCLUSIVE(2, 51);
					SCRIPT::REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					PAD::DISABLE_CONTROL_ACTION(0, 101, true);
					PAD::DISABLE_CONTROL_ACTION(0, 75, true);
					PAD::DISABLE_CONTROL_ACTION(0, 23, true);
					SYSTEM::WAIT(0);
				}
				if (bParam3)
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (func_73(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_78319)
								{
									func_2(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0);
									VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
								}
							}
							PAD::SET_INPUT_EXCLUSIVE(2, 51);
							PAD::DISABLE_CONTROL_ACTION(0, 101, true);
							PAD::DISABLE_CONTROL_ACTION(0, 75, true);
							PAD::DISABLE_CONTROL_ACTION(0, 23, true);
							func_8();
							SYSTEM::WAIT(0);
						}
					}
					SYSTEM::START_NEW_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8D8
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_3(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)//Position - 0xA70
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

int func_4(int iParam0, bool bParam1)//Position - 0xA9C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)//Position - 0xB21
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)//Position - 0xB47
{
	return Global_43052 == iParam0;
}

int func_7()//Position - 0xB55
{
	if (Global_112331)
	{
		return 1;
	}
	if (!func_6(14) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()//Position - 0xB87
{
	Global_23011.f_6 = 1;
}

int func_9(var uParam0)//Position - 0xB95
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_73(iVar1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iVar1, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar2) };
	if (func_10(uParam0->f_12, Var0) > SYSTEM::COS(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0xC3E
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_11(struct<3> Param0)//Position - 0xC55
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()//Position - 0xC7F
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		return ENTITY::IS_ENTITY_UPRIGHT(iVar0, 90f);
	}
	return ENTITY::IS_ENTITY_UPRIGHT(PLAYER::PLAYER_PED_ID(), 90f);
}

int func_13(var uParam0, char* sParam1, int iParam2)//Position - 0xCB9
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		func_14(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(char* sParam0, int iParam1)//Position - 0xD05
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_15(var uParam0)//Position - 0xD21
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		return 0;
	}
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || MISC::ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

bool func_16(char* sParam0)//Position - 0xD7B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_17(char* sParam0, int iParam1)//Position - 0xD8E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_18(var uParam0)//Position - 0xDA7
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
		if (func_4(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, false, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam1)//Position - 0xE4B
{
	struct<8> Var0;
	struct<3> Var1;
	
	Var0 = 2;
	Var1 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(struct<3> Param0)//Position - 0xEAD
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_21(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xEEC
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), Param1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, char* sParam1)//Position - 0xF0A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
		func_23(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(char* sParam0)//Position - 0xF53
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_24(var uParam0)//Position - 0xF69
{
	if (func_15(uParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()//Position - 0xF96
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false);
}

int func_26(int iParam0, int iParam1)//Position - 0xFEA
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1086
{
	if (func_28(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x10B0
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

int func_29(int iParam0)//Position - 0x10D1
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

int func_30()//Position - 0x1114
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_38(PLAYER::PLAYER_ID());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)//Position - 0x1162
{
	return Global_60328[iParam0];
}

int func_32()//Position - 0x1171
{
	func_33();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_33()//Position - 0x118A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_6(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_34(Global_113386.f_2363.f_539.f_4321))
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

bool func_34(int iParam0)//Position - 0x1287
{
	return iParam0 < 3;
}

int func_35(int iParam0)//Position - 0x1293
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)//Position - 0x12D0
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)//Position - 0x12F5
{
	return Global_1998[iParam0 /*29*/];
}

var func_38(int iParam0)//Position - 0x1304
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)//Position - 0x1316
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x1359
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

void func_41(var uParam0, int iParam1)//Position - 0x137B
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)//Position - 0x138F
{
	func_73(PLAYER::PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (func_4(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, false, true, 0);
	}
	return func_21(PLAYER::PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_43()//Position - 0x1448
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

bool func_44(bool bParam0)//Position - 0x145D
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_45(int iParam0)//Position - 0x1486
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_63148)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)//Position - 0x14F2
{
	if (func_49(iParam0))
	{
		return 1;
	}
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x1515
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

var func_48(int iParam0, int iParam1)//Position - 0x1533
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_49(var uParam0)//Position - 0x154B
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x156E
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

int func_51()//Position - 0x15C5
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)//Position - 0x15DA
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x160F
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar1 = (360f / SYSTEM::TO_FLOAT(iParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	fVar4 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (SYSTEM::SIN((fVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (SYSTEM::COS((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		Var3 = { Param0 };
		Var3.f_0 = (Var3.f_0 + (SYSTEM::SIN(fVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (SYSTEM::COS(fVar4) * fParam1));
		GRAPHICS::DRAW_DEBUG_LINE(Var2, Var3, iParam2, iParam3, iParam4, iParam5);
		Var2 = { Var3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16C4
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16EA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	Var0 = { func_20(Param1 - Param0) };
	Var1 = { func_56(Var0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	Var3 = { Param0 };
	Var4 = { Param1 };
	Var4.f_2 = Param0.f_2;
	Var5[0 /*3*/] = { Var3 - Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[1 /*3*/] = { Var3 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[2 /*3*/] = { Var4 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[3 /*3*/] = { Var4 - Var1 * Vector(fVar2, fVar2, fVar2) };
	GRAPHICS::DRAW_DEBUG_LINE(Var5[0 /*3*/], Var5[1 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[1 /*3*/], Var5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[2 /*3*/], Var5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[3 /*3*/], Var5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		Var5[(4 + iVar6) /*3*/] = { Var5[iVar6 /*3*/] };
		Var5[(4 + iVar6) /*3*/].f_2 = Param1.f_2;
		iVar6++;
	}
	GRAPHICS::DRAW_DEBUG_LINE(Var5[4 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[5 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[6 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[7 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[0 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[1 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[2 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	GRAPHICS::DRAW_DEBUG_LINE(Var5[3 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_56(struct<3> Param0, struct<3> Param1)//Position - 0x18FA
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_57(int iParam0)//Position - 0x1933
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (MISC::GET_GAME_TIMER() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Local_59[iParam0 /*3*/], Local_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
		}
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = MISC::GET_GAME_TIMER() + 250;
	}
}

void func_58(bool bParam0)//Position - 0x1A24
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)//Position - 0x1A31
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true))
	{
		if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1A9C
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_63(iParam0, 1))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("zeno"))
	{
		if (MISC::ABSF((Var1.f_0 - Var0.f_0)) > 3.4f)
		{
			return 1;
		}
	}
	if (MISC::ABSF((Var1.f_2 - Var0.f_2)) > 2.9f)
	{
		return 1;
	}
	if (Global_78319)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, true) && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("btype3"))
	{
		if (((((func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 3, false)) || func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4, false))) || func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 5, false))) || func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 6, false))) || func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 7, false))) || func_28(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 8, false)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1C2D
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_62(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !VEHICLE::DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	if (iVar0 == joaat("rt3000") && VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
	{
		return 1;
	}
	if (iVar0 == joaat("BRIOSO3"))
	{
		switch (VEHICLE::GET_VEHICLE_MOD(iParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if (iVar0 == joaat("zr350") && VEHICLE::GET_VEHICLE_MOD(iParam0, 0) > 11)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1DEC
{
	if (!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case joaat("SM722"):
		case joaat("DRAUGUR"):
			return 1;
			break;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1)//Position - 0x2009
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_64(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x2057
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

void func_65()//Position - 0x2091
{
	func_71(&(Local_40[0 /*24*/]), 1, "Carwash1", func_72(156), 15, "", 0, 4f);
	func_71(&(Local_40[1 /*24*/]), 1, "Carwash2", func_72(157), 15, "", 0, 4f);
	func_69(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_69(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_66(&uLocal_41, 0);
	Local_59[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	Local_59[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_66(var uParam0, int iParam1)//Position - 0x2120
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_78319)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (MISC::IS_PS3_VERSION() || func_68())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (MISC::IS_XBOX360_VERSION() || func_67())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

bool func_67()//Position - 0x21B4
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

bool func_68()//Position - 0x21CA
{
	return (MISC::IS_ORBIS_VERSION() || MISC::_0x807ABE1AB65C24D2());
}

void func_69(var uParam0, struct<3> Param1, float fParam2)//Position - 0x21E0
{
	uParam0->f_12 = { func_20(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_70(fParam2, 0f, 360f);
}

float func_70(float fParam0, float fParam1, float fParam2)//Position - 0x2209
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_71(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0x2230
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_72(int iParam0)//Position - 0x22A5
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_73(int iParam0)//Position - 0x22BD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_74()//Position - 0x22DB
{
	func_75(&Local_40);
	func_24(&uLocal_41);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_75(var uParam0)//Position - 0x22F3
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_76(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_76(var uParam0)//Position - 0x231C
{
	*uParam0 = 0;
}

