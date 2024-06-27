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
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
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
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	fLocal_61 = 277.7314f;
	Local_63 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(800);
	func_16();
	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		func_15();
		if (func_7() || uLocal_60)
		{
			func_3();
		}
		if (!iLocal_56)
		{
			if (!iLocal_55 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_63, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_61);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_63, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_55 = 1;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!bLocal_59)
				{
					bLocal_59 = func_2();
				}
				else if (!bLocal_57)
				{
					bLocal_57 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(800);
					iLocal_56 = 1;
				}
			}
		}
	}
}

int func_1()//Position - 0x121
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_62, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_62, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(iLocal_62);
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x14B
{
	iLocal_62 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_62))
	{
		if (!iLocal_58)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_62);
			iLocal_58 = 1;
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_62))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_62);
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x18C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()//Position - 0x1B1
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0)//Position - 0x1BD
{
	func_6(&(uLocal_33[iParam0]));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1));
}

void func_6(var uParam0)//Position - 0x1DB
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_7()//Position - 0x214
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()//Position - 0x298
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()//Position - 0x2CB
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()//Position - 0x2EF
{
	return Global_32948;
}

bool func_11()//Position - 0x2FA
{
	return Global_2684504.f_700;
}

int func_12(int iParam0)//Position - 0x309
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()//Position - 0x320
{
	return Global_2696172;
}

bool func_14()//Position - 0x32C
{
	return Global_2684504.f_695;
}

void func_15()//Position - 0x33B
{
	SYSTEM::WAIT(0);
}

void func_16()//Position - 0x348
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_18(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_33, 21, 0);
	if (!func_17())
	{
		func_3();
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
	{
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");
	}
}

int func_17()//Position - 0x38C
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
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
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

int func_18(int iParam0, int iParam1, bool bParam2)//Position - 0x3E5
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_19(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
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
					func_4();
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
				func_4();
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
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_19(bool bParam0)//Position - 0x4FB
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

