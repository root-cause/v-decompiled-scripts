#region Local Var
	int iLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	int iLocal_2 = 0;
	float fLocal_3 = 0f;
	bool bLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	bLocal_4 = true;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::DELETE_ALL_TRAINS();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -177f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	STREAMING::REQUEST_MODEL(joaat("freight"));
	STREAMING::REQUEST_MODEL(joaat("freightcar"));
	STREAMING::REQUEST_MODEL(joaat("freightgrain"));
	STREAMING::REQUEST_MODEL(joaat("freightcont1"));
	STREAMING::REQUEST_MODEL(joaat("freightcont2"));
	STREAMING::REQUEST_MODEL(joaat("tankercar"));
	STREAMING::REQUEST_MODEL(joaat("metrotrain"));
	while ((((((!STREAMING::HAS_MODEL_LOADED(joaat("freight")) || !STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) || !STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) || !STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) || !STREAMING::HAS_MODEL_LOADED(joaat("freightcont2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("tankercar"))) || !STREAMING::HAS_MODEL_LOADED(joaat("metrotrain")))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&iLocal_0);
				}
				iLocal_0 = VEHICLE::CREATE_MISSION_TRAIN(iLocal_2, Local_1, bLocal_4, 0, 0);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				Local_1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				iLocal_7 = 0;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_0, false))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_0, fLocal_3);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()//Position - 0x1A7
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

