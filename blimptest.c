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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int* iLocal_40 = NULL;
	int iLocal_41 = 0;
	int* iLocal_42 = NULL;
	int* iLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_18();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.75f, 0.9f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		HUD::SET_TEXT_SCALE(0.4f, 0.45f);
		HUD::SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x116
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_40, false) || ENTITY::GET_ENTITY_HEALTH(iLocal_40) <= 0) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_40) <= 0f)
		{
			func_9(&iLocal_42);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_40))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_40);
			}
			if (iLocal_47 == 1)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_40, false) };
				func_8(Var0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else
			{
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_40))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_40, 0.25f);
		}
	}
}

void func_2(int* iParam0)//Position - 0x1B6
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_3(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1EE
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_4(int* iParam0)//Position - 0x23E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_6(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_5(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_5(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_5(int iParam0)//Position - 0x2DA
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

int func_6(int iParam0)//Position - 0x2FB
{
	if (func_5(iParam0))
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

void func_7(int* iParam0)//Position - 0x325
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_8(struct<3> Param0)//Position - 0x366
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	FIRE::ADD_EXPLOSION(Param0, 8, 1f, true, false, 1f, false);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		FIRE::ADD_EXPLOSION(Param0 + Var2[iVar0 /*3*/], 8, 1f, true, false, 1f, false);
		iVar0++;
	}
}

void func_9(int* iParam0)//Position - 0x45C
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_11()//Position - 0x494
{
	func_2(&iLocal_45);
	STREAMING::REQUEST_MODEL(iLocal_46);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_46))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_45 = VEHICLE::CREATE_VEHICLE(iLocal_46, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_40, 50f, 0f, 15f), 0f, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_45, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, true, false, false, false);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
}

void func_12(int iParam0, int iParam1)//Position - 0x52F
{
	float fVar0;
	
	fVar0 = func_13(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true), 1);
	ENTITY::SET_ENTITY_HEADING(iParam0, fVar0);
}

float func_13(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3, int iParam4)//Position - 0x554
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()//Position - 0x5B9
{
	func_9(&iLocal_42);
	if (func_6(iLocal_40))
	{
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

int func_15(int iParam0, bool bParam1, int iParam2)//Position - 0x5DA
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(iParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_16()//Position - 0x60F
{
	STREAMING::REQUEST_MODEL(iLocal_44);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_44))
	{
		SYSTEM::WAIT(0);
	}
	if (func_6(iLocal_40))
	{
		iLocal_43 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_40, 26, iLocal_44, -1, true, true);
		if (func_5(iLocal_43))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_43, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_43, 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_43, 29, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_43, 116, false);
		}
	}
	if (func_6(iLocal_40))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_40, 1, "Blimp_City", true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
}

void func_17()//Position - 0x68C
{
	struct<3> Var0;
	
	if (func_6(iLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	STREAMING::REQUEST_MODEL(iLocal_41);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_41) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		SYSTEM::WAIT(0);
	}
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	iLocal_40 = VEHICLE::CREATE_VEHICLE(iLocal_41, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), Var0.f_2, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
}

void func_18()//Position - 0x722
{
	if (func_6(iLocal_40) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_40))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_40);
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	SCRIPT::TERMINATE_THIS_THREAD();
}

