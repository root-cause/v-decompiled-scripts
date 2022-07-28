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
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	func_43(&uScriptParam_44);
	while (true)
	{
		func_42();
		if (func_33())
		{
		}
		else
		{
			func_14();
		}
	}
	func_1();
}

void func_1()//Position - 0x85
{
	func_3(&uLocal_37);
	func_2();
}

void func_2()//Position - 0x97
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)//Position - 0xA3
{
	struct<7> Var0;
	
	func_4(0, 1, 1, 0, 0, 0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_6))
	{
		CAM::DESTROY_CAM(uParam0->f_6, false);
	}
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	*uParam0 = { Var0 };
}

void func_4(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xDA
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_13(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_12())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_11(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_13(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_11(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID(), 0)) && !func_5()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_9(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_5()//Position - 0x21D
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_6(int iParam0, int iParam1)//Position - 0x237
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
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

int func_7(int iParam0, bool bParam1)//Position - 0x282
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()//Position - 0x2C3
{
	return Global_1574918;
}

int func_9(int iParam0)//Position - 0x2CF
{
	if (func_6(iParam0, 0))
	{
		return 1;
	}
	if (func_10())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_10()//Position - 0x30E
{
	return BitTest(Global_2621446, 3);
}

int func_11(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x31C
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()//Position - 0x34F
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)//Position - 0x376
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

void func_14()//Position - 0x399
{
	if (func_15(&uLocal_37))
	{
		func_1();
	}
}

int func_15(var uParam0)//Position - 0x3AE
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_30(1);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	func_24(0);
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::SET_PAUSE_MENU_ACTIVE(false);
	}
	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
		
		case 1:
			func_16(uParam0);
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

void func_16(var uParam0)//Position - 0x40C
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_5);
	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.9f)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
		func_17(uParam0, 2);
	}
}

void func_17(var uParam0, int iParam1)//Position - 0x457
{
	*uParam0 = iParam1;
}

void func_18(var uParam0)//Position - 0x464
{
	char* sVar0;
	
	sVar0 = func_20();
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
	{
		return;
	}
	CAM::DO_SCREEN_FADE_IN(800);
	func_17(uParam0, 1);
	func_19(uParam0);
}

void func_19(var uParam0)//Position - 0x499
{
	char* sVar0;
	
	sVar0 = func_20();
	uParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, false, false, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, sVar0, "action", 1000f, -1.5f, 0, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	uParam0->f_6 = CAM::CREATE_CAMERA(964613260, true);
	CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", sVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, false, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	STREAMING::REMOVE_ANIM_DICT(sVar0);
}

char* func_20()//Position - 0x545
{
	if (func_21())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_21()//Position - 0x55D
{
	return func_22(PLAYER::PLAYER_ID());
}

int func_22(int iParam0)//Position - 0x56D
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0)//Position - 0x58C
{
	return *uParam0;
}

void func_24(int iParam0)//Position - 0x597
{
	if (func_29())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_28(0))
		{
			func_25(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_25(int iParam0)//Position - 0x5CA
{
	if (func_29())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_27())
		{
			func_26(1, 1);
		}
		else
		{
			func_26(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_12())
	{
		Global_20266.f_1 = 3;
	}
}

void func_26(bool bParam0, bool bParam1)//Position - 0x654
{
	if (bParam0)
	{
		if (func_28(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

bool func_27()//Position - 0x6C8
{
	return BitTest(Global_1958711, 5);
}

int func_28(int iParam0)//Position - 0x6D6
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

bool func_29()//Position - 0x72D
{
	return BitTest(Global_1958711, 19);
}

void func_30(bool bParam0)//Position - 0x73C
{
	if (bParam0)
	{
		func_32();
	}
	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
}

void func_31(int iParam0, int iParam1)//Position - 0x78D
{
	MISC::SET_BIT(&(Global_1648034.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1648034.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_32()//Position - 0x7C3
{
	Global_2815059.f_4599 = 0;
}

int func_33()//Position - 0x7D3
{
	if (func_34())
	{
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x7E7
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x86B
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()//Position - 0x89E
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()//Position - 0x8C2
{
	return Global_31959;
}

bool func_38()//Position - 0x8CD
{
	return Global_2714762.f_698;
}

int func_39(int iParam0)//Position - 0x8DC
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()//Position - 0x8F3
{
	return Global_2725403;
}

bool func_41()//Position - 0x8FF
{
	return Global_2714762.f_693;
}

void func_42()//Position - 0x90E
{
	SYSTEM::WAIT(0);
}

void func_43(var uParam0)//Position - 0x91B
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_44(&uLocal_37, *uParam0, uParam0->f_3);
}

void func_44(var uParam0, struct<3> Param1, var uParam2)//Position - 0x939
{
	func_46(uParam0, Param1);
	func_45(uParam0, uParam2);
	func_4(1, 1, 1, 0, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
}

void func_45(var uParam0, var uParam1)//Position - 0x979
{
	uParam0->f_4 = uParam1;
}

void func_46(var uParam0, struct<3> Param1)//Position - 0x987
{
	uParam0->f_1 = { Param1 };
}

