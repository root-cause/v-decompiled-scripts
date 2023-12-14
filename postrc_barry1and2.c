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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	int* iLocal_38 = NULL;
	int* iLocal_39 = NULL;
	int* iLocal_40 = NULL;
	int iLocal_41 = 0;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	sLocal_42 = "RCMBarryLeadInOut";
	sLocal_43 = "idle";
	Local_47 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	if (func_25(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_22(0);
	}
	STREAMING::REQUEST_ANIM_DICT(sLocal_42);
	HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_42) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	func_25(PLAYER::PLAYER_PED_ID());
	iLocal_44 = MISC::GET_GAME_TIMER() + 13000;
	iLocal_45 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	func_19();
	while (!func_13(&iLocal_41, 49, Local_50, func_18(1.12f), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	func_12();
	iLocal_46 = MISC::GET_GAME_TIMER() + 1000;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	while (true)
	{
		func_25(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_GAME_TIMER() < iLocal_46)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		}
		func_11();
		if (!func_25(iLocal_41))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(PLAYER::PLAYER_PED_ID(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_38, 0);
			func_1(&iLocal_39, 0);
			func_1(&iLocal_40, 0);
			func_22(0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int* iParam0, bool bParam1)//Position - 0x1D9
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x214
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

int func_3()//Position - 0x24E
{
	var uVar0;
	
	if (((((func_10(PLAYER::PLAYER_PED_ID()) && func_10(iLocal_41)) && !func_9()) && MISC::GET_GAME_TIMER() > iLocal_44) && func_8(PLAYER::PLAYER_PED_ID(), iLocal_41, 1) < 20f) && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_41, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_44 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2DE
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_21032, 0);
	Global_22169 = iParam3;
	StringCopy(&Global_22156, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x319
{
	Global_21620 = { *uParam0 };
	Global_7999 = iParam1;
	StringCopy(&Global_22236, sParam2, 24);
	Global_23155 = iParam5;
	if (iParam3 == 0)
	{
		Global_23153 = 1;
		Global_23151 = 0;
	}
	else
	{
		Global_23153 = 0;
		Global_23151 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23154 = 1;
		Global_23152 = 0;
	}
	else
	{
		Global_23154 = 0;
		Global_23152 = 1;
	}
}

char* func_6()//Position - 0x36F
{
	char* sVar0;
	
	switch (iLocal_45)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_45++;
	if (iLocal_45 > 4)
	{
		iLocal_45 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3D5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79248)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

float func_8(int iParam0, int iParam1, bool bParam2)//Position - 0x470
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_9()//Position - 0x4CE
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x4F0
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

void func_11()//Position - 0x511
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_50, 5f))
	{
		if (func_10(iLocal_41))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
			PED::APPLY_DAMAGE_TO_PED(iLocal_41, 1000, true, 0, 0);
		}
		if (func_10(iLocal_39))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_39, false);
		}
		if (func_10(iLocal_38))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_38, false);
		}
	}
}

void func_12()//Position - 0x562
{
	if (func_10(iLocal_41))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_41))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_41, true, false);
		}
		PED::SET_PED_PROP_INDEX(iLocal_41, 1, 0, 0, false, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_41, true);
		PED::SET_PED_MONEY(iLocal_41, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_41, false);
		PED::SET_PED_NAME_DEBUG(iLocal_41, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_41, joaat("PLAYER"));
		ENTITY::SET_ENTITY_COLLISION(iLocal_41, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_41, Local_50, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_41, func_18(1.12f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
		TASK::TASK_PLAY_ANIM(iLocal_41, sLocal_42, sLocal_43, 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_41, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

int func_13(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x614
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)//Position - 0x6A2
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97206[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)//Position - 0x6E8
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)//Position - 0x70E
{
	return Global_2139[iParam0 /*29*/];
}

bool func_17(int iParam0)//Position - 0x71D
{
	return iParam0 < 3;
}

float func_18(float fParam0)//Position - 0x729
{
	return (fParam0 * 57.29578f);
}

void func_19()//Position - 0x739
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_39 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_25(iLocal_39))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_39))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_39, true, false);
			}
			Local_47 = { 189.5964f, -956.0344f, 29.54f };
			ENTITY::SET_ENTITY_COORDS(iLocal_39, Local_47, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_39, func_18(-2.01f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_39, true);
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_38 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_25(iLocal_38))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_38))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, true, false);
			}
			Local_47 = { 190.2574f, -956.3513f, 29.621f };
			ENTITY::SET_ENTITY_COORDS(iLocal_38, Local_47, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_38, func_18(-1.68f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_38, true);
		}
	}
	else
	{
		Local_47 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_38, joaat("prop_chair_08"), Local_47, func_18(-1.68f));
		ENTITY::SET_ENTITY_COORDS(iLocal_38, Local_47, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_38, func_18(-1.68f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_38, true);
	}
	Local_47 = { 192.4462f, -953.5946f, 29.0919f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_47, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_47, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_25(iLocal_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_40))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_40, true, false);
			}
			Local_47.f_2 = 29.603f;
			ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_47, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_40, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_40, joaat("prop_protest_sign_01"), Local_47, 23.45f);
		ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_47, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_40, 23.45f);
	}
}

void func_20(int* iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x96A
{
	func_21(iParam0);
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
}

void func_21(int* iParam0)//Position - 0x991
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_22(bool bParam0)//Position - 0x9BC
{
	if (bParam0)
	{
		func_24(&iLocal_41);
	}
	else
	{
		func_23(&iLocal_41, 1, 0, 1);
	}
	if (func_10(iLocal_39))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_39, false);
	}
	if (func_10(iLocal_38))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_38, false);
	}
	if (bParam0)
	{
		func_21(&iLocal_38);
		func_21(&iLocal_39);
		func_21(&iLocal_40);
	}
	else
	{
		func_1(&iLocal_38, 0);
		func_1(&iLocal_39, 0);
		func_1(&iLocal_40, 0);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_42);
	HUD::CLEAR_ADDITIONAL_TEXT(7, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_23(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA3A
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

void func_24(int* iParam0)//Position - 0xA8A
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

bool func_25(int iParam0)//Position - 0xACB
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

