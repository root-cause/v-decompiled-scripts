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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int* iLocal_46 = NULL;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_88(&iLocal_46))
	{
		while (!func_79())
		{
			func_67(&iLocal_46);
			if (func_57(&iLocal_46))
			{
			}
			else
			{
				func_17(&iLocal_46);
				SYSTEM::WAIT(0);
			}
		}
	}
	func_1(&iLocal_46);
}

void func_1(int* iParam0)//Position - 0xA8
{
	func_16();
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_8(&iLocal_46))
	{
		func_4(&iLocal_46);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::_SET_PLAYER_HOMING_ROCKET_DISABLED(PLAYER::PLAYER_ID(), 0);
	func_2();
}

void func_2()//Position - 0xE7
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0xF3
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 3);
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
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1582) || Global_2678393.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2678393.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2678393.f_1582 = -1;
		}
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)//Position - 0x1AE
{
	if ((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1598) || Global_2678393.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD()) || bParam1)
	{
		if (bParam0)
		{
			Global_2678393.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 23);
		}
		else
		{
			Global_2678393.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 23);
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
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()//Position - 0x2B0
{
	return "STEALTH_WARN";
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
		return "ANNIH_2_STEALTH";
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0);
}

void func_16()//Position - 0x324
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 1);
}

void func_17(int* iParam0)//Position - 0x33F
{
	func_54(iParam0);
	func_53(iParam0);
	if (func_52(iParam0))
	{
		if (((func_51(iParam0) && !func_50(iParam0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1)) && !func_49())
		{
			func_48(iParam0, 1, 0);
			func_47(iParam0);
		}
		else if (func_9(&(iParam0->f_6), 6) && func_50(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1) && !func_49())
			{
				func_48(iParam0, 0, 0);
				func_5(&(iParam0->f_6), 6);
				func_5(&(iParam0->f_6), 2);
			}
		}
	}
	if (func_46(iParam0))
	{
		PLAYER::_SET_PLAYER_HOMING_ROCKET_DISABLED(PLAYER::PLAYER_ID(), 1);
		func_45();
		func_44(iParam0);
	}
	else if (func_43(iParam0))
	{
		PLAYER::_SET_PLAYER_HOMING_ROCKET_DISABLED(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_44(iParam0);
		func_42(iParam0, 5);
	}
	if (func_50(iParam0) && !func_51(iParam0))
	{
		func_40(iParam0);
		func_39();
		func_42(iParam0, 2);
		if (func_36(iParam0))
		{
			func_34();
		}
	}
	else
	{
		func_18(iParam0);
	}
	func_3();
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 4);
}

void func_18(int* iParam0)//Position - 0x474
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 2)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_33(iParam0)) && !func_32(0)) && !func_31()) && func_29()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		func_25(iParam0, 1);
		func_24(&(iParam0->f_6), 3);
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			func_21(func_22(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		else
		{
			func_20(func_22(iParam0), func_15(iParam0->f_2), iVar0);
		}
		func_19(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

void func_19(int* iParam0)//Position - 0x552
{
	func_24(&(iParam0->f_6), 2);
}

void func_20(char* sParam0, char* sParam1, int iParam2)//Position - 0x563
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x580
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

char* func_22(int* iParam0)//Position - 0x5A3
{
	if (func_52(iParam0))
	{
		return "STEALTH_OFF";
	}
	return "STEALTH_OFF_P";
}

int func_23(bool bParam0, int iParam1, int iParam2)//Position - 0x5BF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_24(int* iParam0, int iParam1)//Position - 0x5D6
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_25(int* iParam0, int iParam1)//Position - 0x5E6
{
	int iVar0;
	
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				iVar0 = (func_28(19004, -1) + iParam1);
				if (iVar0 >= 0)
				{
					func_26(19004, iVar0, -1);
				}
				break;
			}
	}
}

void func_26(int iParam0, int iParam1, int iParam2)//Position - 0x62C
{
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_27()//Position - 0x654
{
	return Global_1574918;
}

int func_28(int iParam0, int iParam1)//Position - 0x660
{
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

bool func_29()//Position - 0x67C
{
	return (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 4) && !func_30());
}

bool func_30()//Position - 0x69F
{
	return ((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) && Global_4718592.f_2 == 20);
}

bool func_31()//Position - 0x6D3
{
	return Global_75485;
}

int func_32(int iParam0)//Position - 0x6DF
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

int func_33(int* iParam0)//Position - 0x736
{
	if (func_52(iParam0))
	{
		switch (iParam0->f_2)
		{
			case joaat("akula"):
				return func_28(19004, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_34()//Position - 0x764
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_35("STEALTH_WARN", 3000);
	}
}

void func_35(char* sParam0, int iParam1)//Position - 0x77E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_36(int* iParam0)//Position - 0x795
{
	int iVar0;
	
	if (func_32(0) || func_31())
	{
		return 0;
	}
	iVar0 = func_37(iParam0);
	switch (iVar0)
	{
		case 1:
			if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 99)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(int* iParam0)//Position - 0x839
{
	if (!func_38(iParam0))
	{
		return 4;
	}
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
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

bool func_38(int* iParam0)//Position - 0x889
{
	return (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
}

void func_39()//Position - 0x8A8
{
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 66, true);
	PAD::DISABLE_CONTROL_ACTION(0, 67, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
}

void func_40(int* iParam0)//Position - 0x910
{
	int iVar0;
	
	if (((((((!func_9(&(iParam0->f_6), 0) && !func_9(&(iParam0->f_6), 1)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_9(&(iParam0->f_6), 3)) && !func_32(0)) && !func_31()) && func_29()) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false)))
	{
		iVar0 = func_23(iParam0->f_6.f_2, 3333, 10000);
		iParam0->f_6.f_2 = 0;
		if (func_52(iParam0))
		{
			func_35(func_41(iParam0), iVar0);
		}
		else
		{
			func_21(func_41(iParam0), func_15(iParam0->f_2), func_15(iParam0->f_2), iVar0);
		}
		func_47(iParam0);
		func_24(&(iParam0->f_6), 0);
	}
}

char* func_41(int* iParam0)//Position - 0x9D9
{
	if (func_52(iParam0))
	{
		return "STEALTH_ON";
	}
	return "STEALTH_ON_P";
}

void func_42(int* iParam0, int iParam1)//Position - 0x9F6
{
	if (func_51(iParam0))
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

bool func_43(int* iParam0)//Position - 0xA31
{
	return (!func_9(iParam0, 0) && func_9(iParam0, 1));
}

void func_44(int* iParam0)//Position - 0xA4D
{
	func_5(&(iParam0->f_6), 0);
	if (func_10(iParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (!func_52(iParam0))
	{
		if (func_50(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
		}
	}
}

void func_45()//Position - 0xA94
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 1);
}

bool func_46(int* iParam0)//Position - 0xAAF
{
	return (func_9(iParam0, 0) && !func_9(iParam0, 1));
}

void func_47(int* iParam0)//Position - 0xACB
{
	func_24(&(iParam0->f_6), 1);
}

void func_48(int* iParam0, bool bParam1, bool bParam2)//Position - 0xADC
{
	switch (iParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			VEHICLE::_SET_DEPLOY_HELI_STUB_WINGS(iParam0->f_1, !bParam1, bParam2);
			break;
	}
}

bool func_49()//Position - 0xB09
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 3);
}

bool func_50(int* iParam0)//Position - 0xB21
{
	return func_9(iParam0, 0);
}

bool func_51(int* iParam0)//Position - 0xB30
{
	return func_9(iParam0, 2);
}

bool func_52(int* iParam0)//Position - 0xB3F
{
	return ((func_38(iParam0) && iParam0->f_3 == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID());
}

void func_53(int* iParam0)//Position - 0xB70
{
	if (func_10(iParam0) && (func_32(0) || func_31()))
	{
		iParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		func_5(&(iParam0->f_6), 0);
		if (func_50(iParam0))
		{
			func_5(&(iParam0->f_6), 1);
		}
		else
		{
			func_5(&(iParam0->f_6), 2);
			if (func_52(iParam0))
			{
				func_25(iParam0, -1);
			}
		}
	}
}

void func_54(int* iParam0)//Position - 0xBD8
{
	if (func_50(iParam0))
	{
		if (func_8(iParam0))
		{
			if (func_56())
			{
				func_4(iParam0);
			}
		}
		else if (!func_56())
		{
			func_55(iParam0);
		}
	}
	else if (func_8(iParam0))
	{
		func_4(iParam0);
	}
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809), 2);
}

void func_55(int* iParam0)//Position - 0xC35
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_24(&(iParam0->f_6), 5);
}

bool func_56()//Position - 0xC53
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 2);
}

int func_57(int* iParam0)//Position - 0xC6B
{
	if (!func_38(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (!func_65(iParam0->f_2))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (func_63(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_58(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0xCDE
{
	if (iParam0 > -1)
	{
		if (Global_2689235[iParam0 /*453*/].f_244 > -1)
		{
			if (func_59(Global_2689235[iParam0 /*453*/].f_244) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0xD27
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
	}
	return 6;
}

int func_60(int iParam0)//Position - 0x1036
{
	if (iParam0 != func_62() && func_61(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)//Position - 0x1067
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_62()//Position - 0x10C7
{
	return -1;
}

int func_63(int iParam0)//Position - 0x10D0
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x1109
{
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x116D
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_66(int* iParam0)//Position - 0x118D
{
	return (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_1, false));
}

void func_67(int* iParam0)//Position - 0x11AB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(iParam0, 4);
	bVar1 = func_9(iParam0, 0);
	func_78(iParam0);
	if (bVar0)
	{
		func_24(iParam0, 3);
	}
	else
	{
		func_5(iParam0, 3);
	}
	if (bVar1)
	{
		func_24(iParam0, 1);
	}
	else
	{
		func_5(iParam0, 1);
	}
	if (func_38(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (func_66(iParam0))
			{
				iParam0->f_2 = ENTITY::GET_ENTITY_MODEL(iParam0->f_1);
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					func_24(iParam0, 2);
				}
			}
		}
	}
	if (func_66(iParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_1, -1, false))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_1, -1, false);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false)) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iParam0->f_3 = iVar2;
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					func_24(iParam0, 4);
					if (!func_9(iParam0, 3))
					{
						func_24(&(iParam0->f_6), 6);
					}
				}
			}
		}
		if (func_38(iParam0))
		{
			iParam0->f_4 = func_77(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (func_52(iParam0))
		{
			if (func_76() && func_70(iParam0))
			{
				func_24(iParam0, 0);
			}
		}
		else
		{
			func_68(iParam0);
		}
	}
	if (func_46(iParam0))
	{
		iParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_68(int* iParam0)//Position - 0x1302
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && func_69(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0->f_3)))
	{
		func_24(iParam0, 0);
	}
	else
	{
		func_5(iParam0, 0);
	}
}

bool func_69(int iParam0)//Position - 0x1337
{
	return (iParam0 != -1 && BitTest(Global_1853348[iParam0 /*834*/].f_809, 1));
}

bool func_70(int* iParam0)//Position - 0x1356
{
	bool bVar0;
	
	bVar0 = func_75();
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
	{
		func_74(iParam0);
		switch (iParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !VEHICLE::_ARE_HELI_STUB_WINGS_DEPLOYED(iParam0->f_1);
				break;
		}
	}
	else if (func_73(iParam0))
	{
		if (func_72(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0->f_1);
		}
	}
	else
	{
		func_71(iParam0);
	}
	return bVar0;
}

void func_71(var uParam0)//Position - 0x13C1
{
	func_24(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
}

bool func_72(var uParam0)//Position - 0x13DC
{
	return (MISC::GET_GAME_TIMER() - uParam0->f_6.f_1) >= 200;
}

bool func_73(var uParam0)//Position - 0x13F2
{
	return func_9(&(uParam0->f_6), 4);
}

void func_74(var uParam0)//Position - 0x1403
{
	func_5(&(uParam0->f_6), 4);
}

var func_75()//Position - 0x1414
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_809, 1);
}

bool func_76()//Position - 0x142C
{
	return !func_30();
}

int func_77(int iParam0, bool bParam1)//Position - 0x1439
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

void func_78(var uParam0)//Position - 0x14BE
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_79()//Position - 0x14DE
{
	if (func_80())
	{
		return 1;
	}
	return 0;
}

int func_80()//Position - 0x14F2
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_87())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	if (func_85(159))
	{
		if (!func_84())
		{
			return 1;
		}
	}
	if (func_85(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_81() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_81()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x1576
{
	switch (func_83())
	{
		case 0:
			return func_82();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_82()//Position - 0x15A9
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_83()//Position - 0x15CD
{
	return Global_31959;
}

bool func_84()//Position - 0x15D8
{
	return Global_2714762.f_698;
}

int func_85(int iParam0)//Position - 0x15E7
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_86()//Position - 0x15FE
{
	return Global_2725403;
}

bool func_87()//Position - 0x160A
{
	return Global_2714762.f_693;
}

int func_88(int* iParam0)//Position - 0x1619
{
	func_67(iParam0);
	if (func_66(iParam0))
	{
		if (func_52(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0->f_1))
			{
				if (!func_49())
				{
					func_48(iParam0, 0, 0);
				}
				else
				{
					func_24(&(iParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_24(&(iParam0->f_6), 3);
		}
	}
	return 1;
}

