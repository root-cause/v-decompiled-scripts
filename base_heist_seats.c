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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	var uLocal_44 = 0;
	struct<14> Local_45[30];
	var uLocal_466 = 0;
	var uLocal_467 = -1;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = -1;
	var uLocal_472 = -1;
	var uLocal_473 = -1;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	int iLocal_482 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (func_74())
	{
		while (!func_63())
		{
			func_11();
			SYSTEM::WAIT(0);
		}
	}
	func_1();
}

void func_1()//Position - 0x90
{
	MISC::CLEAR_BIT(&Global_1836224, 1);
	func_3(&Local_45);
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
	char* sVar4;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar4);
	return (func_6(&sVar0) || func_6(&sVar4));
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
		StringCopy(sParam2, "MPJAC_EXIT" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */, 16);
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
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
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
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()//Position - 0x213
{
	func_19(&Local_45);
	if (Global_1845118 == PLAYER::PLAYER_ID() && !BitTest(Global_1882632[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*146*/].f_43.f_27, 5))
	{
		if (func_18(&Local_45, 1, 1))
		{
			func_17(&Local_45);
		}
		if (func_18(&Local_45, 0, 0))
		{
			MISC::SET_BIT(&Global_1836224, 1);
			if ((((((iLocal_482 == 0 && !BitTest(Global_1882632[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*146*/].f_43.f_27, 3)) && !func_16()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_15(0)) && !func_14()) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/))
			{
				func_12(&Local_45);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1836224, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_1836224, 1);
	}
	iLocal_482 = 0;
	if (BitTest(Global_1882632[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*146*/].f_43.f_27, 3))
	{
		MISC::SET_BIT(&iLocal_482, 0);
	}
	if (func_16())
	{
		MISC::SET_BIT(&iLocal_482, 1);
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		MISC::SET_BIT(&iLocal_482, 2);
	}
	if (func_14())
	{
		MISC::SET_BIT(&iLocal_482, 4);
	}
	if (func_15(0))
	{
		MISC::SET_BIT(&iLocal_482, 3);
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
	return Global_76498;
}

int func_15(int iParam0)//Position - 0x364
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

int func_16()//Position - 0x3BB
{
	if (Global_2672855.f_990.f_5 == -1)
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
	char* sVar16;
	struct<14> Var20;
	struct<3> Var34;
	struct<3> Var37;
	float fVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	
	func_61(iParam0);
	func_59(iParam0);
	Var20.f_1.f_6 = 1061158912;
	Var20 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_58(&(iParam0->f_421), 11);
			func_57(iParam0, 1);
			break;
		
		case 1:
			if (func_56(iParam0))
			{
				iParam0->f_421.f_6 = MISC::GET_GAME_TIMER();
				func_57(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(PLAYER::PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_54(iParam0) || func_52(iParam0)) || !func_51(iParam0))
				{
					func_4(iParam0, 1);
					func_57(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_421.f_6) > 150)
					{
						func_50(&(iParam0->f_421.f_5), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					func_9(&(iParam0->f_421.f_5));
					func_47(iParam0);
					func_57(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 1);
			}
			break;
		
		case 3:
			func_46(iParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_57(iParam0, 4);
			}
			break;
		
		case 4:
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20.f_0 != 3)
			{
				Var34 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0f, 2) };
				Var37 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar16, func_44(iParam0), func_43(iParam0), 0f, 2) };
				fVar40 = Var37.f_2;
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var34, 1f, 500, fVar40, 0.15f);
			}
			func_57(iParam0, 5);
			break;
		
		case 5:
			func_32(iParam0);
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar16);
			if (Var20.f_0 == 3)
			{
				iVar41 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ACHIEVE_HEADING"));
			}
			else
			{
				iVar41 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
			}
			if (iVar41 != 1 && iVar41 != 0)
			{
				iParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar16, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = MISC::GET_GAME_TIMER();
				func_13(&(iParam0->f_421), 8);
				func_57(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_58(&(iParam0->f_421), 10);
				func_31(iParam0);
			}
			func_32(iParam0);
			func_26(iParam0);
			iVar42 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar42))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar42) >= 1f)
				{
					func_20(iParam0, 0);
					func_46(iParam0, &sVar0);
					func_45(iParam0, &sVar16);
					iParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(iParam0), func_43(iParam0), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_58(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_57(iParam0, 8);
			}
			break;
		
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			func_57(iParam0, 8);
			break;
		
		case 8:
			iVar43 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_421.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar43))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar43) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_57(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 0);
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
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)//Position - 0xA57
{
	struct<3> Var0;
	float fVar3;
	
	if (uParam0->f_421.f_4 == 6)
	{
		Var0 = { PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
		fVar3 = SYSTEM::VMAG(Var0);
		if ((uParam0->f_421.f_4 == 6 && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt"))) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar3 >= 0.35f)
			{
				func_30(uParam0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
		{
			func_4(uParam0, 1);
		}
		else if (func_29(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			if (((((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_16()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_50(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */, 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						func_31(uParam0);
					}
				}
			}
		}
	}
	func_58(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)//Position - 0xBD5
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_28(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23692.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
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
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_29(var uParam0)//Position - 0xD1D
{
	return func_8(&(uParam0->f_421), 9);
}

void func_30(var uParam0)//Position - 0xD30
{
	char* sVar0;
	char* sVar16;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_46(uParam0, &sVar0);
		func_45(uParam0, &sVar16);
		uParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, true, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, &sVar16, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	}
}

void func_31(var uParam0)//Position - 0xDF9
{
	char* sVar0;
	
	uParam0->f_421.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_44(uParam0), func_43(uParam0), 2, true, false, 1f, 0f, 1f);
	func_46(uParam0, &sVar0);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_57(uParam0, 8);
}

void func_32(var uParam0)//Position - 0xE6F
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_37(1);
		
		case 6:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			func_36();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			func_34(1);
			func_33();
			break;
	}
}

void func_33()//Position - 0xEF8
{
	Global_23692.f_6 = 1;
}

void func_34(bool bParam0)//Position - 0xF06
{
	if (bParam0)
	{
		if (func_35())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

bool func_35()//Position - 0xF2B
{
	return BitTest(Global_2684504.f_2, 11);
}

void func_36()//Position - 0xF3C
{
	MISC::SET_BIT(&Global_8801, 4);
}

void func_37(int iParam0)//Position - 0xF4C
{
	if (func_42())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_15(0))
		{
			func_38(iParam0);
		}
		MISC::SET_BIT(&Global_8801, 2);
	}
}

void func_38(int iParam0)//Position - 0xF7F
{
	if (func_42())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_41())
		{
			func_40(1, 1);
		}
		else
		{
			func_40(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_39())
	{
		Global_20930.f_1 = 3;
	}
}

int func_39()//Position - 0x1009
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40(bool bParam0, bool bParam1)//Position - 0x1030
{
	if (bParam0)
	{
		if (func_15(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_41()//Position - 0x10A4
{
	return BitTest(Global_1956920, 5);
}

bool func_42()//Position - 0x10B2
{
	return BitTest(Global_1956920, 19);
}

Vector3 func_43(var uParam0)//Position - 0x10C1
{
	struct<3> Var0;
	
	Var0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

Vector3 func_44(var uParam0)//Position - 0x1101
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_45(var uParam0, char* sParam1)//Position - 0x1118
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
			break;
	}
}

void func_46(var uParam0, char* sParam1)//Position - 0x1218
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

void func_47(var uParam0)//Position - 0x135C
{
	uParam0->f_421.f_8 = func_49((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_48(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_48(var uParam0)//Position - 0x139D
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
			break;
	}
	return iVar0;
}

int func_49(int iParam0)//Position - 0x13E5
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

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x142E
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
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
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_51(var uParam0)//Position - 0x1559
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_52(var uParam0)//Position - 0x158C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if ((iVar1 != PLAYER::PLAYER_ID() && func_53(iVar1, 1, 1)) && func_55(PLAYER::GET_PLAYER_PED(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)//Position - 0x15F8
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

bool func_54(var uParam0)//Position - 0x1658
{
	return uParam0->f_421 & 31 > 0;
}

bool func_55(int iParam0, var uParam1)//Position - 0x166A
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, false, true, 0);
}

int func_56(var uParam0)//Position - 0x168F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_55(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_421.f_2 /*14*/]))
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

void func_57(var uParam0, int iParam1)//Position - 0x16DA
{
	uParam0->f_421.f_4 = iParam1;
}

void func_58(int* iParam0, int iParam1)//Position - 0x16EB
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_59(var uParam0)//Position - 0x16FB
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_60(uParam0));
		uParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_60(uParam0));
		uParam0->f_421.f_7 = MISC::GET_FRAME_COUNT();
	}
	else if ((MISC::GET_FRAME_COUNT() - uParam0->f_421.f_7) < 5)
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), func_60(uParam0));
	}
}

float func_60(var uParam0)//Position - 0x1785
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

void func_61(var uParam0)//Position - 0x17D8
{
	func_62(&(uParam0->f_421), 4, func_14());
	func_62(&(uParam0->f_421), 1, ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false));
	func_62(&(uParam0->f_421), 3, PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true));
	func_62(&(uParam0->f_421), 0, func_15(0));
	func_62(&(uParam0->f_421), 2, TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()));
}

void func_62(int* iParam0, int iParam1, bool bParam2)//Position - 0x1835
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

int func_63()//Position - 0x1859
{
	if (!func_73(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (Global_1845118 == func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()//Position - 0x188C
{
	return -1;
}

int func_65()//Position - 0x1895
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_72())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	if (func_70(159))
	{
		if (!func_69())
		{
			return 1;
		}
	}
	if (func_70(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_66() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_66()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()//Position - 0x1919
{
	switch (func_68())
	{
		case 0:
			return func_67();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_67()//Position - 0x194C
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_68()//Position - 0x1970
{
	return Global_32948;
}

bool func_69()//Position - 0x197B
{
	return Global_2684504.f_700;
}

int func_70(int iParam0)//Position - 0x198A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_71()//Position - 0x19A1
{
	return Global_2696172;
}

bool func_72()//Position - 0x19AD
{
	return Global_2684504.f_695;
}

bool func_73(int iParam0)//Position - 0x19BC
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.43747f, 4877.1997f, -62.34054f, 345.1211f, 4864.095f, -55.111866f, 16f, false, true, 0);
}

int func_74()//Position - 0x19F0
{
	if (Global_1845118 != func_64())
	{
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_1845118, true, 0))
		{
			return 0;
		}
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Global_1845118);
		func_86(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_75();
		return 1;
	}
	return 0;
}

void func_75()//Position - 0x1A3C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_85() };
	Var3 = { func_84() };
	func_81(0, func_83(343.93f, 4875.389f, -60.44f, -90f), -90f, Var0, Var3);
	func_81(1, func_83(344.08f, 4874.239f, -60.44f, -86f), -86f, Var0, Var3);
	func_81(2, func_83(344.33f, 4873.189f, -60.44f, -78f), -78f, Var0, Var3);
	func_81(3, func_83(344.7f, 4872.239f, -60.44f, -72f), -72f, Var0, Var3);
	func_81(4, func_83(345.06f, 4871.48f, -60.44f, -67f), -67f, Var0, Var3);
	func_81(5, func_83(345.86f, 4870.289f, -60.44f, -60f), -60f, Var0, Var3);
	func_81(6, func_83(350.41f, 4867.05f, -60.44f, -26f), -26f, Var0, Var3);
	func_81(7, func_83(351.51f, 4866.75f, -60.44f, -17f), -17f, Var0, Var3);
	func_81(8, func_83(352.66f, 4866.6f, -60.44f, -10f), -10f, Var0, Var3);
	func_81(9, func_83(353.6f, 4866.58f, -60.44f, -4f), -4f, Var0, Var3);
	func_81(10, func_83(354.7f, 4866.68f, -60.44f, 4f), 4f, Var0, Var3);
	func_81(11, func_83(355.85f, 4866.91f, -60.44f, 10f), 10f, Var0, Var3);
	func_81(12, func_83(346.02f, 4876.871f, -60.838f, -102f), -102f, Var0, Var3);
	func_81(13, func_83(345.97f, 4875.721f, -60.838f, -93f), -93f, Var0, Var3);
	func_81(14, func_83(346.19f, 4874.21f, -60.838f, -81f), -81f, Var0, Var3);
	func_81(15, func_83(346.62f, 4873.01f, -60.838f, -73f), -73f, Var0, Var3);
	func_81(16, func_83(347.27f, 4871.86f, -60.838f, -62f), -62f, Var0, Var3);
	func_81(17, func_83(351.57f, 4868.86f, -60.838f, -20f), -20f, Var0, Var3);
	func_81(18, func_83(352.89f, 4868.65f, -60.838f, -9f), -9f, Var0, Var3);
	func_81(19, func_83(354.17f, 4868.68f, -60.838f, 0f), 0f, Var0, Var3);
	func_81(20, func_83(355.12f, 4868.85f, -60.838f, 10f), 8f, Var0, Var3);
	func_81(21, func_83(356.58f, 4869.38f, -60.838f, 10f), 20f, Var0, Var3);
	func_81(22, func_83(348.2f, 4876.56f, -61.24f, -101f), -101f, Var0, Var3);
	func_81(23, func_83(348.2f, 4875.31f, -61.24f, -88f), -88f, Var0, Var3);
	func_81(24, func_83(348.47f, 4874.28f, -61.24f, -76f), -76f, Var0, Var3);
	func_81(25, func_83(349.17f, 4872.97f, -61.24f, -60f), -60f, Var0, Var3);
	func_81(26, func_83(352.12f, 4870.98f, -61.24f, -20f), -20f, Var0, Var3);
	func_81(27, func_83(353.42f, 4870.84f, -61.24f, -6f), -6f, Var0, Var3);
	func_81(28, func_83(354.67f, 4870.995f, -61.24f, 8f), 8f, Var0, Var3);
	func_81(29, func_83(356.02f, 4871.545f, -61.24f, 25f), 25f, Var0, Var3);
	func_76(&Local_45, 8043/*func_77*/);
}

void func_76(int iParam0, int iParam1)//Position - 0x1F50
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_77(var uParam0, int iParam1)//Position - 0x1F6B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	bool bVar13;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_80(PLAYER::PLAYER_ID()) || BitTest(iLocal_482, 0))
	{
		return 0;
	}
	Var0 = { uParam0->f_1 };
	Var3 = { uParam0->f_1.f_3 };
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	Var6 = { func_79(Var0 - Var3) };
	Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	fVar12 = func_78(Var6, Var9);
	bVar13 = fVar12 > 0.36f;
	return bVar13;
}

float func_78(struct<3> Param0, struct<3> Param3)//Position - 0x200E
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_79(struct<3> Param0)//Position - 0x202F
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

int func_80(int iParam0)//Position - 0x206E
{
	if (iParam0 != func_64())
	{
		if (func_53(iParam0, 1, 1))
		{
			if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_81(int iParam0, struct<3> Param1, float fParam4, struct<3> Param5, struct<3> Param8)//Position - 0x20A0
{
	Local_45[iParam0 /*14*/] = 3;
	Local_45[iParam0 /*14*/].f_1 = { Param1 + func_82(Param5, (fParam4 - 180f)) };
	Local_45[iParam0 /*14*/].f_1.f_3 = { Param1 + func_82(Param8, (fParam4 - 180f)) };
	Local_45[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_45[iParam0 /*14*/].f_8 = { Param1 };
	Local_45[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam4 };
}

Vector3 func_82(struct<3> Param0, float fParam3)//Position - 0x2118
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_83(struct<3> Param0, float fParam3)//Position - 0x215C
{
	return Param0 + func_82(0f, 0.01f, 0.015f, fParam3);
}

Vector3 func_84()//Position - 0x217A
{
	return 0f, -0.7f, -1f;
}

Vector3 func_85()//Position - 0x2189
{
	return 0f, 0.1f, 1f;
}

int func_86(int iParam0, int iParam1, bool bParam2)//Position - 0x2198
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
		if (!func_87(0))
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
				if (func_72())
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
				if (func_70(157))
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
		Global_1574667 = iVar0;
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

bool func_87(bool bParam0)//Position - 0x22AE
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

