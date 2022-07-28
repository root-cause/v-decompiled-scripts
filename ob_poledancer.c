#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	float fLocal_3 = 0f;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_8, true);
		Local_2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_8, 0f, 0f, 0f) };
		fLocal_3 = ENTITY::GET_ENTITY_HEADING(iScriptParam_8);
		ENTITY::SET_ENTITY_COLLISION(iScriptParam_8, false, false);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_8))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							ENTITY::SET_ENTITY_COLLISION(iScriptParam_8, true, false);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(iLocal_1))
						{
							TASK::TASK_COWER(iLocal_1, -1);
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_KEEP_TASK(iLocal_1, true);
							SCRIPT::TERMINATE_THIS_THREAD();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xDC
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1, false))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1))
		{
			PED::DELETE_PED(&iLocal_1);
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iLocal_1, true);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2()//Position - 0x10D
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_1))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1, Var0, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1))
			{
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()//Position - 0x181
{
	if (!PED::IS_PED_INJURED(iLocal_1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1, -2017877118) == 7)
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iLocal_1, sLocal_6, sLocal_4, 3))
		{
			TASK::TASK_PLAY_ANIM(iLocal_1, sLocal_6, sLocal_4, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (!iLocal_7)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1, sLocal_6, sLocal_4, 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1, sLocal_6, sLocal_4, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()//Position - 0x215
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1, false))
	{
		iLocal_1 = PED::CREATE_PED(5, iLocal_5, Local_2.f_0, Local_2.f_1, Local_2.f_2, fLocal_3, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_1, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_1, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1, true);
	}
}

int func_5()//Position - 0x253
{
	STREAMING::REQUEST_MODEL(iLocal_5);
	STREAMING::REQUEST_ANIM_DICT(sLocal_6);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_5) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_6))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_5);
		STREAMING::REQUEST_ANIM_DICT(sLocal_6);
	}
	return 0;
}

