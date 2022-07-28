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
	int* iLocal_40 = NULL;
	int* iLocal_41 = NULL;
	int* iLocal_42 = NULL;
	int iLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
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
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_50 = { 190.2424f, -956.379f, 28.63f };
	PAD::DISABLE_CONTROL_ACTION(0, 26, true);
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
	STREAMING::REQUEST_ANIM_DICT(sLocal_44);
	HUD::REQUEST_ADDITIONAL_TEXT("BARY1", 7);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_44) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 26, true);
	func_25(PLAYER::PLAYER_PED_ID());
	iLocal_46 = MISC::GET_GAME_TIMER() + 13000;
	iLocal_47 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	func_19();
	while (!func_13(&iLocal_43, 49, Local_50, func_18(1.12f), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, true);
		SYSTEM::WAIT(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 26, true);
	func_12();
	iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
	PAD::DISABLE_CONTROL_ACTION(0, 26, true);
	while (true)
	{
		func_25(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_GAME_TIMER() < iLocal_48)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 26, true);
		}
		func_11();
		if (!func_25(iLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(PLAYER::PLAYER_PED_ID(), Local_50, 1) > 70f)
		{
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
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
			OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

float func_2(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x214
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

int func_3()//Position - 0x24E
{
	var uVar0;
	
	if (((((func_10(PLAYER::PLAYER_PED_ID()) && func_10(iLocal_43)) && !func_9()) && MISC::GET_GAME_TIMER() > iLocal_46) && func_8(PLAYER::PLAYER_PED_ID(), iLocal_43, 1) < 20f) && !MISC::GET_MISSION_FLAG())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 18000));
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
	MISC::SET_BIT(&Global_20471, 0);
	Global_21608 = iParam3;
	StringCopy(&Global_21595, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x319
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

char* func_6()//Position - 0x36F
{
	char* sVar0;
	
	switch (iLocal_47)
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
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
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
	if (!Global_78319)
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
	struct<3> Var1;
	
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
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

int func_9()//Position - 0x4CE
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
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
		if (func_10(iLocal_43))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, false);
			PED::APPLY_DAMAGE_TO_PED(iLocal_43, 1000, true, 0);
		}
		if (func_10(iLocal_41))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
		}
		if (func_10(iLocal_40))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
		}
	}
}

void func_12()//Position - 0x561
{
	if (func_10(iLocal_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_43, true, false);
		}
		PED::SET_PED_PROP_INDEX(iLocal_43, 1, 0, 0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_43, true);
		PED::SET_PED_MONEY(iLocal_43, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_43, false);
		PED::SET_PED_NAME_DEBUG(iLocal_43, "POSTBARRY");
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_43, joaat("player"));
		ENTITY::SET_ENTITY_COLLISION(iLocal_43, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_43, Local_50, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_43, func_18(1.12f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, true);
		TASK::TASK_PLAY_ANIM(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_43, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
}

int func_13(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x612
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)//Position - 0x6A0
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
	Global_96275[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)//Position - 0x6E6
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

var func_16(int iParam0)//Position - 0x70C
{
	return Global_1998[iParam0 /*29*/];
}

bool func_17(int iParam0)//Position - 0x71B
{
	return iParam0 < 3;
}

float func_18(float fParam0)//Position - 0x727
{
	return (fParam0 * 57.29578f);
}

void func_19()//Position - 0x737
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false))
	{
		iLocal_41 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), false, false, true);
		if (func_25(iLocal_41))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_41))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_41, true, false);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			ENTITY::SET_ENTITY_COORDS(iLocal_41, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_41, func_18(-2.01f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, true);
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false))
	{
		iLocal_40 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), false, false, true);
		if (func_25(iLocal_40))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_40))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_40, true, false);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_40, func_18(-1.68f));
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, true);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&iLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		ENTITY::SET_ENTITY_COORDS(iLocal_40, Local_49, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_40, func_18(-1.68f));
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, true);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_49, 25f, joaat("prop_protest_sign_01"), false))
	{
		iLocal_42 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_49, 25f, joaat("prop_protest_sign_01"), false, false, true);
		if (func_25(iLocal_42))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_42))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_42, true, false);
			}
			Local_49.f_2 = 29.603f;
			ENTITY::SET_ENTITY_COORDS(iLocal_42, Local_49, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&iLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		ENTITY::SET_ENTITY_COORDS(iLocal_42, Local_49, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_42, 23.45f);
	}
}

void func_20(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x968
{
	func_21(iParam0);
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
}

void func_21(int* iParam0)//Position - 0x98F
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

void func_22(bool bParam0)//Position - 0x9BA
{
	if (bParam0)
	{
		func_24(&iLocal_43);
	}
	else
	{
		func_23(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, false);
	}
	if (func_10(iLocal_40))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_40, false);
	}
	if (bParam0)
	{
		func_21(&iLocal_40);
		func_21(&iLocal_41);
		func_21(&iLocal_42);
	}
	else
	{
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_44);
	HUD::CLEAR_ADDITIONAL_TEXT(7, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_23(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA38
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

void func_24(int* iParam0)//Position - 0xA88
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

bool func_25(int iParam0)//Position - 0xAC9
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

