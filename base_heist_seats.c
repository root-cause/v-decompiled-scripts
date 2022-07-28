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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
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
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (func_75())
	{
		while (!func_64())
		{
			func_11();
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()//Position - 0x90
{
	MISC::CLEAR_BIT(&Global_1836144, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()//Position - 0xAB
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0)//Position - 0xB7
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)//Position - 0xD1
{
	if (func_5(uParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)//Position - 0xF7
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

bool func_6(char* sParam0)//Position - 0x12F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)//Position - 0x142
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)//Position - 0x173
{
	return BitTest(*uParam0, iParam1);
}

void func_9(var uParam0)//Position - 0x181
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)//Position - 0x1D8
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()//Position - 0x213
{
	func_19(&Local_47);
	if (Global_1853191 == PLAYER::PLAYER_ID() && !BitTest(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			MISC::SET_BIT(&Global_1836144, 1);
			if ((((((iLocal_64 == 0 && !BitTest(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27, 3)) && !func_16()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_15(0)) && !func_14()) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1836144, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1836144, 1);
	}
	iLocal_64 = 0;
	if (BitTest(Global_1888862[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*120*/].f_38.f_27, 3))
	{
		MISC::SET_BIT(&iLocal_64, 0);
	}
	if (func_16())
	{
		MISC::SET_BIT(&iLocal_64, 1);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		MISC::SET_BIT(&iLocal_64, 2);
	}
	if (func_14())
	{
		MISC::SET_BIT(&iLocal_64, 4);
	}
	if (func_15(0))
	{
		MISC::SET_BIT(&iLocal_64, 3);
	}
}

void func_12(int iParam0)//Position - 0x335
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(int* iParam0, int iParam1)//Position - 0x348
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_14()//Position - 0x358
{
	return Global_75485;
}

int func_15(int iParam0)//Position - 0x364
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

int func_16()//Position - 0x3BB
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)//Position - 0x3D5
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)//Position - 0x3E8
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)//Position - 0x428
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_62(iParam0);
	func_60(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_59(&(iParam0->f_421), 11);
			func_58(iParam0, 1);
			break;
		
		case 1:
			if (func_57(iParam0))
			{
				iParam0->f_421.f_6 = MISC::GET_GAME_TIMER();
				func_58(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_56(PLAYER::PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 1);
					func_58(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_421.f_6) > 150)
					{
						func_51(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_48(iParam0);
					func_58(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 1);
			}
			break;
		
		case 3:
			func_47(iParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_58(iParam0, 4);
			}
			break;
		
		case 4:
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2.f_0 != 3)
			{
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0f, 2) };
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0f, 2) };
				fVar5 = Var4.f_2;
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var3, 1f, 500, fVar5, 0.15f);
			}
			func_58(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2.f_0 == 3)
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1920390111);
			}
			else
			{
				iVar6 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073);
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_45(iParam0), func_44(iParam0), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = MISC::GET_GAME_TIMER();
				func_13(&(iParam0->f_421), 8);
				func_58(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_59(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar7 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar7))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_47(iParam0, &sVar0);
					func_46(iParam0, &sVar1);
					iParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_45(iParam0), func_44(iParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_59(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_58(iParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			func_58(iParam0, 8);
			break;
		
		case 8:
			iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar8))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 364629851)) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_58(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)//Position - 0x859
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((MISC::GET_GAME_TIMER() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)//Position - 0x9A4
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)//Position - 0x9DA
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)//Position - 0xA11
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()//Position - 0xA28
{
	return func_25(PLAYER::PLAYER_ID());
}

int func_25(int iParam0)//Position - 0xA38
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)//Position - 0xA57
{
	struct<3> Var0;
	float fVar1;
	
	if (uParam0->f_421.f_4 == 6)
	{
		Var0 = { PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f };
		fVar1 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_421.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar1 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			PAD::_0x7F4724035FDCA1DD(2);
			PAD::DISABLE_CONTROL_ACTION(0, 24, true);
			PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			PAD::DISABLE_CONTROL_ACTION(0, 142, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 263, true);
			PAD::DISABLE_CONTROL_ACTION(0, 264, true);
			PAD::DISABLE_CONTROL_ACTION(0, 143, true);
			PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_51(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_59(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)//Position - 0xBD5
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_28(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xCC0
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()//Position - 0xD1D
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)//Position - 0xD37
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)//Position - 0xD4A
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_47(uParam0, &sVar0);
		func_46(uParam0, &sVar1);
		uParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_45(uParam0), func_44(uParam0), 2, true, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	}
}

void func_32(var uParam0)//Position - 0xE13
{
	char* sVar0;
	
	uParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_45(uParam0), func_44(uParam0), 2, true, false, 1f, 0f, 1f);
	func_47(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_58(uParam0, 8);
}

void func_33(var uParam0)//Position - 0xE89
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
			func_37();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0, 37, true);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()//Position - 0xF12
{
	Global_23011.f_6 = 1;
}

void func_35(bool bParam0)//Position - 0xF20
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2714762.f_41 = 1;
		}
	}
	else
	{
		Global_2714762.f_41 = 0;
	}
}

bool func_36()//Position - 0xF45
{
	return BitTest(Global_2714762.f_2, 11);
}

void func_37()//Position - 0xF56
{
	MISC::SET_BIT(&Global_8137, 4);
}

void func_38(int iParam0)//Position - 0xF66
{
	if (func_43())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_39(int iParam0)//Position - 0xF99
{
	if (func_43())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_42())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
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
	if (!func_40())
	{
		Global_20266.f_1 = 3;
	}
}

int func_40()//Position - 0x1023
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)//Position - 0x104A
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_42()//Position - 0x10BE
{
	return BitTest(Global_1958711, 5);
}

bool func_43()//Position - 0x10CC
{
	return BitTest(Global_1958711, 19);
}

Vector3 func_44(var uParam0)//Position - 0x10DB
{
	struct<3> Var0;
	
	Var0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

Vector3 func_45(var uParam0)//Position - 0x111B
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_46(var uParam0, char* sParam1)//Position - 0x1132
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_47(var uParam0, char* sParam1)//Position - 0x122F
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(var uParam0)//Position - 0x1373
{
	uParam0->f_421.f_8 = func_50((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_49(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_49(var uParam0)//Position - 0x13B4
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_50(int iParam0)//Position - 0x13F9
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x1442
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/] = 1;
			Global_43792[iVar0 /*32*/].f_1 = Global_43993;
			Global_43993++;
			Global_43792[iVar0 /*32*/].f_4 = 0;
			Global_43792[iVar0 /*32*/].f_29 = 0;
			Global_43792[iVar0 /*32*/].f_5 = 0;
			Global_43792[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43792[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43792[iVar0 /*32*/].f_6 = iParam3;
			Global_43792[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_43792[iVar0 /*32*/].f_7 = 0;
			Global_43792[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_43792[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43792[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43792[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43792[iVar0 /*32*/].f_12 = 0;
				Global_43792[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_43792[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_52(var uParam0)//Position - 0x156D
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_53(var uParam0)//Position - 0x15A0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != PLAYER::PLAYER_ID() && func_54(iVar1, 1, 1)) && func_56(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)//Position - 0x160C
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

bool func_55(var uParam0)//Position - 0x166C
{
	return uParam0->f_421 & 31 > 0;
}

bool func_56(int iParam0, var uParam1)//Position - 0x167E
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_57(var uParam0)//Position - 0x16A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_58(var uParam0, int iParam1)//Position - 0x16EE
{
	uParam0->f_421.f_4 = iParam1;
}

void func_59(int* iParam0, int iParam1)//Position - 0x16FF
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_60(var uParam0)//Position - 0x170F
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(uParam0));
		uParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(uParam0));
		uParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_421.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_61(uParam0));
	}
}

float func_61(var uParam0)//Position - 0x1799
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_62(var uParam0)//Position - 0x17EC
{
	func_63(&(uParam0->f_421), 4, func_14());
	func_63(&(uParam0->f_421), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_63(&(uParam0->f_421), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_63(&(uParam0->f_421), 0, func_15(0));
	func_63(&(uParam0->f_421), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_63(int* iParam0, int iParam1, bool bParam2)//Position - 0x1849
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iVar0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar0);
	}
}

int func_64()//Position - 0x186D
{
	if (!func_74(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (Global_1853191 == func_65())
	{
		return 1;
	}
	return 0;
}

int func_65()//Position - 0x18A0
{
	return -1;
}

int func_66()//Position - 0x18A9
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_73())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71(159))
	{
		if (!func_70())
		{
			return 1;
		}
	}
	if (func_71(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_67() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_67()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()//Position - 0x192D
{
	switch (func_69())
	{
		case 0:
			return func_68();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_68()//Position - 0x1960
{
	switch (Global_2727899)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_69()//Position - 0x1984
{
	return Global_31959;
}

bool func_70()//Position - 0x198F
{
	return Global_2714762.f_698;
}

int func_71(int iParam0)//Position - 0x199E
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_72()//Position - 0x19B5
{
	return Global_2725403;
}

bool func_73()//Position - 0x19C1
{
	return Global_2714762.f_693;
}

bool func_74(int iParam0)//Position - 0x19D0
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, false, true, 0);
}

int func_75()//Position - 0x1A04
{
	if (Global_1853191 != func_65())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_1853191, true, 0))
		{
			return 0;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_1853191);
		func_87(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_76();
		return 1;
	}
	return 0;
}

void func_76()//Position - 0x1A50
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_86() };
	Var1 = { func_85() };
	func_82(0, func_84(343.93f, 4875.389f, -60.44f, -90f), -90f, Var0, Var1);
	func_82(1, func_84(344.08f, 4874.239f, -60.44f, -86f), -86f, Var0, Var1);
	func_82(2, func_84(344.33f, 4873.189f, -60.44f, -78f), -78f, Var0, Var1);
	func_82(3, func_84(344.7f, 4872.239f, -60.44f, -72f), -72f, Var0, Var1);
	func_82(4, func_84(345.06f, 4871.48f, -60.44f, -67f), -67f, Var0, Var1);
	func_82(5, func_84(345.86f, 4870.289f, -60.44f, -60f), -60f, Var0, Var1);
	func_82(6, func_84(350.41f, 4867.05f, -60.44f, -26f), -26f, Var0, Var1);
	func_82(7, func_84(351.51f, 4866.75f, -60.44f, -17f), -17f, Var0, Var1);
	func_82(8, func_84(352.66f, 4866.6f, -60.44f, -10f), -10f, Var0, Var1);
	func_82(9, func_84(353.6f, 4866.58f, -60.44f, -4f), -4f, Var0, Var1);
	func_82(10, func_84(354.7f, 4866.68f, -60.44f, 4f), 4f, Var0, Var1);
	func_82(11, func_84(355.85f, 4866.91f, -60.44f, 10f), 10f, Var0, Var1);
	func_82(12, func_84(346.02f, 4876.871f, -60.838f, -102f), -102f, Var0, Var1);
	func_82(13, func_84(345.97f, 4875.721f, -60.838f, -93f), -93f, Var0, Var1);
	func_82(14, func_84(346.19f, 4874.21f, -60.838f, -81f), -81f, Var0, Var1);
	func_82(15, func_84(346.62f, 4873.01f, -60.838f, -73f), -73f, Var0, Var1);
	func_82(16, func_84(347.27f, 4871.86f, -60.838f, -62f), -62f, Var0, Var1);
	func_82(17, func_84(351.57f, 4868.86f, -60.838f, -20f), -20f, Var0, Var1);
	func_82(18, func_84(352.89f, 4868.65f, -60.838f, -9f), -9f, Var0, Var1);
	func_82(19, func_84(354.17f, 4868.68f, -60.838f, 0f), 0f, Var0, Var1);
	func_82(20, func_84(355.12f, 4868.85f, -60.838f, 10f), 8f, Var0, Var1);
	func_82(21, func_84(356.58f, 4869.38f, -60.838f, 10f), 20f, Var0, Var1);
	func_82(22, func_84(348.2f, 4876.56f, -61.24f, -101f), -101f, Var0, Var1);
	func_82(23, func_84(348.2f, 4875.31f, -61.24f, -88f), -88f, Var0, Var1);
	func_82(24, func_84(348.47f, 4874.28f, -61.24f, -76f), -76f, Var0, Var1);
	func_82(25, func_84(349.17f, 4872.97f, -61.24f, -60f), -60f, Var0, Var1);
	func_82(26, func_84(352.12f, 4870.98f, -61.24f, -20f), -20f, Var0, Var1);
	func_82(27, func_84(353.42f, 4870.84f, -61.24f, -6f), -6f, Var0, Var1);
	func_82(28, func_84(354.67f, 4870.995f, -61.24f, 8f), 8f, Var0, Var1);
	func_82(29, func_84(356.02f, 4871.545f, -61.24f, 25f), 25f, Var0, Var1);
	func_77(&Local_47, 8063/*func_78*/);
}

void func_77(int iParam0, int iParam1)//Position - 0x1F64
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_78(var uParam0, int iParam1)//Position - 0x1F7F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_81(PLAYER::PLAYER_ID()) || BitTest(iLocal_64, 0))
	{
		return 0;
	}
	Var0 = { uParam0->f_1 };
	Var1 = { uParam0->f_1.f_3 };
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	Var2 = { func_80(Var0 - Var1) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	fVar4 = func_79(Var2, Var3);
	bVar5 = fVar4 > 0.36f;
	return bVar5;
}

float func_79(struct<3> Param0, struct<3> Param1)//Position - 0x2022
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_80(struct<3> Param0)//Position - 0x2043
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_81(int iParam0)//Position - 0x2082
{
	if (iParam0 != func_65())
	{
		if (func_54(iParam0, 1, 1))
		{
			if (BitTest(Global_1888862[iParam0 /*120*/].f_38.f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4)//Position - 0x20B4
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { Param1 + func_83(Param3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { Param1 + func_83(Param4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { Param1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_83(struct<3> Param0, float fParam1)//Position - 0x212C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_84(struct<3> Param0, float fParam1)//Position - 0x2170
{
	return Param0 + func_83(0f, 0.01f, 0.015f, fParam1);
}

Vector3 func_85()//Position - 0x218E
{
	return 0f, -0.7f, -1f;
}

Vector3 func_86()//Position - 0x219D
{
	return 0f, 0.1f, 1f;
}

int func_87(int iParam0, int iParam1, bool bParam2)//Position - 0x21AC
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_88(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_88(bool bParam0)//Position - 0x22C2
{
	if (bParam0)
	{
	}
	return Global_1575033;
}

