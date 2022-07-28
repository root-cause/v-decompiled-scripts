#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3.f_0;
	iLocal_1 = ScriptParam_3.f_1;
	while (!BitTest(uLocal_2, 1))
	{
		if (!BitTest(uLocal_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_0, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_0, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_0, true, true, true, true, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1, true, true, true, true, true, false, false, false);
					}
					MISC::SET_BIT(&uLocal_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, false))
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					MISC::SET_BIT(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_0))
				{
					MISC::SET_BIT(&uLocal_2, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()//Position - 0x105
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

