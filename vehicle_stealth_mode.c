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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int* iLocal_44 = NULL;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (func_92(&iLocal_44))
	{
		while (!func_83())
		{
			func_71(&iLocal_44);
			if (func_61(&iLocal_44))
			{
			}
			else
			{
				func_17(&iLocal_44);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1(&iLocal_44);
}

void func_1(int* iParam0)//Position - 0xA8
{
	func_16();
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_8(&iLocal_44))
	{
		func_4(&iLocal_44);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	func_2();
}

void func_2()//Position - 0xE7
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0xF3
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 3);
}

void func_4(int* iParam0)//Position - 0x10E
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(iParam0->f_6), 5);
}

void func_5(int* iParam0, int iParam1)//Position - 0x12C
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)//Position - 0x13C
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2647061.f_1582) || Global_2647061.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2647061.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2647061.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2647061.f_1582 = -1;
		}
		Global_2647061.f_1585 = iParam1;
		Global_2647061.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)//Position - 0x1AE
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2647061.f_1598) || Global_2647061.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2647061.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_74.f_2), 23);
		}
		else
		{
			Global_2647061.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_74.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(int* iParam0)//Position - 0x22D
{
	return func_9(&(iParam0->f_6), 5);
}

bool func_9(int* iParam0, int iParam1)//Position - 0x23E
{
	return BitTest(*iParam0, iParam1);
}

int func_10(var uParam0)//Position - 0x24C
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */, func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */) || func_12(func_11())) || func_12("STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */));
}

char* func_11()//Position - 0x2B0
{
	return "STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */;
}

bool func_12(char* sParam0)//Position - 0x2BB
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_13(char* sParam0, char* sParam1)//Position - 0x2CE
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_14(char* sParam0, char* sParam1, char* sParam2)//Position - 0x2E7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_15(int iParam0)//Position - 0x306
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH" /* GXT: Stealth Annihilator */;
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

void func_16()//Position - 0x324
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 1);
}

void func_17(int* iParam0)//Position - 0x33F
{
	func_58(iParam0);
	func_57(iParam0);
	if (func_56(iParam0))
	{
		if (((func_55(iParam0) && !func_54(iParam0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1)) && !func_53())
		{
			func_51(iParam0, 1);
			func_50(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_54(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1) && !func_53())
			{
				func_51(iParam0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_49(iParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_48();
		func_47(iParam0);
		if (func_46())
		{
			func_45(1);
		}
	}
	else if (func_44(iParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_47(iParam0);
		func_43(iParam0, 5);
		if (func_46())
		{
			func_45(0);
		}
	}
	if (func_54(iParam0) && !func_55(iParam0))
	{
		func_41(iParam0);
		func_40();
		func_43(iParam0, 2);
		if (func_37(iParam0))
		{
			func_35(iParam0);
		}
	}
	else
	{
		func_18(iParam0);
	}
	func_3();
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 4);
}

void func_18(int* iParam0)//Position - 0x48C
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_34(iParam0)) && !func_33(0)) && !func_32()) && func_30()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		func_26(iParam0, 1);
		func_25(&(iParam0->f_6), 3);
		iVar0 = func_24(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_56(iParam0))
		{
			func_21(func_22(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		else
		{
			func_20(func_22(iParam0), func_15(iParam0->f_2), iVar0);
		}
		func_19(iParam0);
		func_25(&(iParam0->f_6), 0);
	}
}

void func_19(int* iParam0)//Position - 0x56A
{
	func_25(&(iParam0->f_6), 2);
}

void func_20(char* sParam0, char* sParam1, int iParam2)//Position - 0x57B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x598
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

char* func_22(int* iParam0)//Position - 0x5BB
{
	if (func_56(iParam0))
	{
		if (func_23(iParam0->f_2))
		{
			return "STEALTH_OFF_S" /* GXT: Press ~INPUT_VEH_ROOF~ to enable Stealth Mode. All weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */;
		}
		else
		{
			return "STEALTH_OFF" /* GXT: Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps. */;
		}
	}
	return "STEALTH_OFF_P" /* GXT: The Pilot has disabled Stealth Mode. */;
}

int func_23(int iParam0)//Position - 0x5EB
{
	switch (iParam0)
	{
		case joaat("raiju"):
			return 1;
			break;
	}
	return 0;
}

int func_24(bool bParam0, int iParam1, int iParam2)//Position - 0x608
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_25(int* iParam0, int iParam1)//Position - 0x61F
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_26(int* iParam0, int iParam1)//Position - 0x62F
{
	int iVar0;
	int iVar1;
	
	if (func_56(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				iVar1 = 19004;
				break;
			
			case joaat("annihilator2"):
				iVar1 = 36624;
				break;
			
			case joaat("raiju"):
				iVar1 = 36625;
				break;
		}
		iVar0 = (func_29(iVar1, -1) + iParam1);
		if (iVar0 >= 0)
		{
			func_27(iVar1, iVar0, -1);
		}
	}
}

void func_27(int iParam0, int iParam1, int iParam2)//Position - 0x690
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_28()//Position - 0x6B8
{
	return Global_1574926;
}

int func_29(int iParam0, int iParam1)//Position - 0x6C4
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

bool func_30()//Position - 0x6E0
{
	return (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 4) && !func_31());
}

bool func_31()//Position - 0x703
{
	return ((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) && Global_4718592.f_2 == 20);
}

bool func_32()//Position - 0x737
{
	return Global_76498;
}

int func_33(int iParam0)//Position - 0x743
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_34(int* iParam0)//Position - 0x79A
{
	if (func_56(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				return func_29(19004, -1) < 3;
			
			case joaat("annihilator2"):
				return func_29(36624, -1) < 3;
			
			case joaat("raiju"):
				return func_29(36625, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_35(int* iParam0)//Position - 0x7F0
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_23(iParam0->f_2))
		{
			func_36("STEALTH_WARN_S" /* GXT: All weapons are unavailable while the vehicle is in Stealth Mode. */, 3000);
		}
		else
		{
			func_36("STEALTH_WARN" /* GXT: All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode. */, 3000);
		}
	}
}

void func_36(char* sParam0, int iParam1)//Position - 0x822
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_37(int* iParam0)//Position - 0x839
{
	int iVar0;
	
	if (func_33(0) || func_32())
	{
		return 0;
	}
	iVar0 = func_38(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/))
			{
				return 1;
			}
			break;
		
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/))
			{
				return 1;
			}
			break;
		
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/))
			{
				return 1;
			}
			break;
		
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_38(int* iParam0)//Position - 0x8DD
{
	if (!func_39(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case joaat("raiju"):
			switch (iParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_39(int* iParam0)//Position - 0x933
{
	return (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
}

void func_40()//Position - 0x952
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 66 /*INPUT_VEH_GUN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 67 /*INPUT_VEH_GUN_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
}

void func_41(int* iParam0)//Position - 0x9BA
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_9(&(iParam0->f_6), 3)) && !func_33(0)) && !func_32()) && func_30()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		iVar0 = func_24(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_56(iParam0))
		{
			func_36(func_42(iParam0), iVar0);
		}
		else
		{
			func_21(func_42(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		func_50(iParam0);
		func_25(&(iParam0->f_6), 0);
	}
}

char* func_42(int* iParam0)//Position - 0xA83
{
	if (func_56(iParam0))
	{
		if (func_23(iParam0->f_2))
		{
			return "STEALTH_ON_S" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */;
		}
		else
		{
			return "STEALTH_ON" /* GXT: Press ~INPUT_VEH_ROOF~ to disable Stealth Mode. */;
		}
	}
	return "STEALTH_ON_P" /* GXT: The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps. */;
}

void func_43(int* iParam0, int iParam1)//Position - 0xAB4
{
	if (func_55(iParam0))
	{
		return;
	}
	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, false);
	}
}

bool func_44(int* iParam0)//Position - 0xAEF
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_45(bool bParam0)//Position - 0xB0B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 6);
	}
}

int func_46()//Position - 0xB41
{
	if (Global_1845135)
	{
		return 0;
	}
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 5);
}

void func_47(int* iParam0)//Position - 0xB64
{
	func_5(&(iParam0->f_6), 0);
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_56(iParam0))
	{
		if (func_54(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_48()//Position - 0xBAB
{
	MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 1);
}

bool func_49(int* iParam0)//Position - 0xBC6
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_50(int* iParam0)//Position - 0xBE2
{
	func_25(&(iParam0->f_6), 1);
}

void func_51(int* iParam0, bool bParam1)//Position - 0xBF3
{
	func_52(iParam0->f_1, bParam1);
}

void func_52(int iParam0, bool bParam1)//Position - 0xC05
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				VEHICLE::SET_DEPLOY_FOLDING_WINGS(iParam0, !bParam1, false);
				break;
			
			case joaat("raiju"):
				VEHICLE::_SET_DEPLOY_MISSILE_BAYS(iParam0, !bParam1);
				break;
			}
	}
}

bool func_53()//Position - 0xC58
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 3);
}

bool func_54(int* iParam0)//Position - 0xC70
{
	return func_9(iParam0, 0);
}

bool func_55(int* iParam0)//Position - 0xC7F
{
	return func_9(iParam0, 2);
}

bool func_56(int* iParam0)//Position - 0xC8E
{
	return ((func_39(iParam0) && iParam0->f_3 == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID());
}

void func_57(int* iParam0)//Position - 0xCBF
{
	if (func_10(iParam0) && (func_33(0) || func_32()))
	{
		iParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		func_5(&(iParam0->f_6), 0);
		if (func_54(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_56(iParam0))
			{
				func_26(iParam0, -1);
			}
		}
	}
}

void func_58(int* iParam0)//Position - 0xD27
{
	if (func_54(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_60())
			{
				func_4(iParam0);
			}
		}
		else if (!func_60())
		{
			func_59(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865), 2);
}

void func_59(int* iParam0)//Position - 0xD84
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_25(&(iParam0->f_6), 5);
}

bool func_60()//Position - 0xDA2
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 2);
}

int func_61(int* iParam0)//Position - 0xDBA
{
	if (!func_39(iParam0))
	{
		return 1;
	}
	if (!func_70(iParam0))
	{
		return 1;
	}
	if (!func_69(iParam0->f_2))
	{
		return 1;
	}
	if (func_68(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (func_67(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_62(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0xE2D
{
	if (iParam0 > -1)
	{
		if (Global_2657971[iParam0 /*465*/].f_247 > -1)
		{
			if (func_63(Global_2657971[iParam0 /*465*/].f_247) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)//Position - 0xE76
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_64(int iParam0)//Position - 0x11AC
{
	if (iParam0 != func_66() && func_65(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)//Position - 0x11DD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_66()//Position - 0x123D
{
	return -1;
}

int func_67(int iParam0)//Position - 0x1246
{
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x127F
{
	if (iParam0 == func_66())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)//Position - 0x12E3
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_70(int* iParam0)//Position - 0x1309
{
	return (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1, false));
}

void func_71(int* iParam0)//Position - 0x1327
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_82(iParam0);
	if (bVar0)
	{
		func_25(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_25(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_39(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_70(iParam0))
			{
				iParam0->f_2 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1);
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					func_25(iParam0, 2);
				}
			}
		}
	}
	if (func_70(iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_1, -1, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false)) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					func_25(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_25(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_39(iParam0))
		{
			iParam0->f_4 = func_81(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_56(iParam0))
		{
			if (func_80() && func_74(iParam0))
			{
				func_25(iParam0, 0);
			}
		}
		else
		{
			func_72(iParam0);
		}
	}
	if (func_49(iParam0))
	{
		iParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_72(int* iParam0)//Position - 0x147E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && func_73(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0->f_3)))
	{
		func_25(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_73(int iParam0)//Position - 0x14B3
{
	return (iParam0 != -1 && BitTest(Global_1845281[iParam0 /*883*/].f_865, 1));
}

bool func_74(int* iParam0)//Position - 0x14D2
{
	bool bVar0;
	
	bVar0 = func_79();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
	{
		func_78(iParam0);
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(iParam0->f_1);
				break;
			
			case joaat("raiju"):
				bVar0 = !VEHICLE::_ARE_MISSILE_BAYS_DEPLOYED(iParam0->f_1);
				break;
		}
	}
	else if (func_77(iParam0))
	{
		if (func_76(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0->f_1);
		}
	}
	else
	{
		func_75(iParam0);
	}
	return bVar0;
}

void func_75(var uParam0)//Position - 0x1551
{
	func_25(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
}

bool func_76(var uParam0)//Position - 0x156C
{
	return (MISC::GET_GAME_TIMER() - uParam0->f_6.f_1) >= 200;
}

bool func_77(var uParam0)//Position - 0x1582
{
	return func_9(&(uParam0->f_6), 4);
}

void func_78(var uParam0)//Position - 0x1593
{
	func_5(&(uParam0->f_6), 4);
}

var func_79()//Position - 0x15A4
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 1);
}

bool func_80()//Position - 0x15BC
{
	return !func_31();
}

int func_81(int iParam0, bool bParam1)//Position - 0x15C9
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

void func_82(var uParam0)//Position - 0x164E
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_83()//Position - 0x166E
{
	if (func_84())
	{
		return 1;
	}
	return 0;
}

int func_84()//Position - 0x1682
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()//Position - 0x1706
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()//Position - 0x1739
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()//Position - 0x175D
{
	return Global_32948;
}

bool func_88()//Position - 0x1768
{
	return Global_2684504.f_700;
}

int func_89(int iParam0)//Position - 0x1777
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()//Position - 0x178E
{
	return Global_2696172;
}

bool func_91()//Position - 0x179A
{
	return Global_2684504.f_695;
}

int func_92(int* iParam0)//Position - 0x17A9
{
	bool bVar0;
	
	func_71(iParam0);
	if (func_70(iParam0))
	{
		if (func_56(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
			{
				bVar0 = true;
				if (func_53())
				{
					bVar0 = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(iParam0->f_6), 6);
					bVar0 = false;
				}
				if (bVar0)
				{
					func_51(iParam0, 0);
				}
				else
				{
					func_25(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_25(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

int func_93()//Position - 0x1823
{
	if (func_46() && func_94())
	{
		return 1;
	}
	return 0;
}

var func_94()//Position - 0x1840
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_865, 6);
}

