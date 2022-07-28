#region Local Var
	bool bLocal_0 = 0;
	bool bLocal_1 = 0;
	float fLocal_2 = 0f;
	float fLocal_3 = 0f;
	float fLocal_4 = 0f;
	float fLocal_5 = 0f;
	float fLocal_6 = 0f;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bLocal_0 = true;
	bLocal_1 = true;
	fLocal_2 = 1f;
	fLocal_3 = 1f;
	fLocal_4 = 1f;
	fLocal_5 = 1f;
	fLocal_6 = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_0)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_2);
			}
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_3);
			VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_4);
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(fLocal_5);
			if (bLocal_1)
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_6);
			}
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_7, fLocal_8);
		}
	}
}

void func_1()//Position - 0x7C
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

