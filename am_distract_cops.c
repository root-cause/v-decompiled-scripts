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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<19> Local_85 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_86 = 0;
	struct<4> Local_87[32];
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<21> Local_96 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_283(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_273(ScriptParam_96);
	}
	else
	{
		func_270();
	}
	while (true)
	{
		func_269();
		if (func_262() || func_258(16))
		{
			func_270();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_270();
		}
		switch (func_257(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_256() == 1)
				{
					func_255();
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_256() == 4)
				{
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_256() == 1)
				{
					func_135();
				}
				else if (func_256() == 4)
				{
					func_14();
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_85.f_18));
				if (func_12(&(Local_85.f_18)))
				{
					Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_270();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_256())
			{
				case 0:
					Local_85.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_85.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1C4
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D8
{
	if (Local_85.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x1ED
{
	struct<14> Var0;
	
	switch (Local_85.f_7)
	{
		case 0:
			if (BitTest(Local_85.f_1, 0))
			{
				Local_85.f_7 = 1;
			}
			else if (func_9(&(Local_85.f_8), 480000, 0))
			{
				Var0.f_2 = 959808021;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_85.f_1), 1);
				Local_85.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()//Position - 0x263
{
	if (!func_9(&(Local_85.f_10), Local_85.f_12, 0))
	{
		if (func_9(&(Local_85.f_13), Local_85.f_15, 0))
		{
			Local_85.f_17++;
			Local_85.f_16 = func_6();
			func_5(&(Local_85.f_13));
		}
	}
	else
	{
		Local_85.f_7 = 2;
	}
}

void func_5(var uParam0)//Position - 0x2AE
{
	uParam0->f_1 = 0;
}

int func_6()//Position - 0x2BB
{
	switch (Local_85.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_85.f_16;
}

void func_7(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x31C
{
	Param0.f_0 = 548471420;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_8(int iParam0)//Position - 0x349
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_283(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x3A6
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x404
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()//Position - 0x449
{
	int iVar0;
	
	if (Local_85.f_0 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_94)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_94));
			if (func_283(iVar0, 1, 1))
			{
				if (!BitTest(Local_85.f_1, 0))
				{
					if (BitTest(Local_87[iLocal_94 /*4*/].f_1, 0))
					{
						iLocal_95 = 1;
						MISC::SET_BIT(&(Local_85.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_94++;
	if (iLocal_94 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_95 == 0)
		{
			if (BitTest(Local_85.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_85.f_1), 0);
			}
		}
		else
		{
			iLocal_95 = 0;
		}
		iLocal_94 = 0;
	}
}

int func_12(var uParam0)//Position - 0x4CE
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x4F7
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()//Position - 0x516
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!BitTest(uLocal_88, 1))
	{
		if ((BitTest(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_85.f_16 - 1)) && Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8566 /* Tunable: CASH_REWARD_EVENT_DISTRACT_COPS */);
			Global_2696873 = iVar0;
			func_113(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_110(iVar0, 1, 1, 0);
				if (func_109())
				{
					func_97(joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"), iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_96())
			{
				func_83(12, "DSC_PASS0" /* GXT: Good work. You'll get your money, and they got away with it. Everyone's a winner except small businesses, property owners, and emergency services in the area... */, 0, 0, -99);
			}
			else
			{
				func_83(12, "DSC_PASS1" /* GXT: Mission accomplished. I got paid, I'm transferring your small cut to you. You probably don't want to know what they were up to, but rest assured it wasn't as bad as what you were doing to distract the cops. */, 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH" /* GXT: $~1~ */, "DSC_BIGM" /* GXT: Distract Cops */, 1, -1, -1082130432, 2, 0);
			if (BitTest(uLocal_88, 4))
			{
				if (!BitTest(uLocal_88, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&uLocal_88, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x62D
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0x654
{
	int iVar0;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_18(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_17(int iParam0, int iParam1)//Position - 0x678
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2850192[iParam0 /*3*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x6A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2804739 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2804739 = 1;
		}
	}
	return iVar0;
}

int func_19()//Position - 0x6D8
{
	return Global_1574918;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x6E4
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_82(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_80(&(Var0.f_69), iParam8);
	}
	return func_21(&Var0);
}

int func_21(var uParam0)//Position - 0x765
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672505.f_2835)
		{
			return 0;
		}
	}
	func_36(uParam0, uParam0->f_17);
	func_33(uParam0);
	if (func_32())
	{
		func_33(uParam0);
	}
	if (func_31(uParam0->f_1))
	{
		func_24();
		if (Global_2672505.f_2513[0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[0 /*80*/] = { *uParam0 };
			if (func_23(uParam0->f_69, 8192))
			{
				Global_1935182 = 1;
			}
			return 1;
		}
		if (((Global_2672505.f_2513[0 /*80*/].f_1 == 13 || Global_2672505.f_2513[0 /*80*/].f_1 == 53) || Global_2672505.f_2513[0 /*80*/].f_1 == 54) || Global_2672505.f_2513[0 /*80*/].f_1 == 58)
		{
			Global_2672505.f_2513[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672505.f_2513[iVar0 + 1 /*80*/] = { Global_2672505.f_2513[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672505.f_2513[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672505.f_2513[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672505.f_2513[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_24();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_80(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 2);
				Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_23(uParam0->f_69, 128))
			{
				if (func_22(Global_2672505.f_2513[iVar0 /*80*/].f_1))
				{
					Global_2672505.f_2513[iVar0 /*80*/].f_2 = 5;
					func_80(&(Global_2672505.f_2513[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x94A
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)//Position - 0x9D0
{
	return (uParam0 && iParam1) != 0;
}

void func_24()//Position - 0x9DF
{
	bool bVar0;
	
	if (Global_2672505.f_2836)
	{
		return;
	}
	if (!Global_78827)
	{
		Global_78827 = 1;
		bVar0 = true;
	}
	func_25();
	if (bVar0)
	{
		Global_78827 = 0;
	}
}

void func_25()//Position - 0xA12
{
	Global_2672505.f_2837 = 0;
	Global_2672505.f_2837.f_582 = 0;
	func_29(&(Global_2672505.f_2837.f_1));
	Global_2672505.f_2837.f_1.f_1 = 0;
	func_26(&(Global_2672505.f_2837.f_1), 1);
}

void func_26(var uParam0, int iParam1)//Position - 0xA54
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78827)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78828)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_28(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_27(0);
}

void func_27(int iParam0)//Position - 0xB02
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
}

int func_28(bool bParam0)//Position - 0xB16
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78807, 0);
}

void func_29(var uParam0)//Position - 0xB3E
{
	func_30(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_30(var uParam0)//Position - 0xB68
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_31(int iParam0)//Position - 0xBE7
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_32()//Position - 0xCFF
{
	return Global_2683862.f_19;
}

void func_33(var uParam0)//Position - 0xD0D
{
	if (func_35(uParam0->f_1))
	{
		uParam0->f_72 = func_34();
	}
}

int func_34()//Position - 0xD28
{
	return 21;
}

int func_35(int iParam0)//Position - 0xD32
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0, int iParam1)//Position - 0xDC4
{
	if (func_35(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_79() || !func_283(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_37(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE1B
{
	int iVar0;
	int iVar1;
	
	if (func_77(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_108449[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_77(PLAYER::PLAYER_ID()) || (func_76() && func_75())) && !BitTest(Global_2793044.f_4690, 31)) && !bParam4)
	{
		iVar1 = func_74();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_283(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_108449[iParam1] != -1)
							{
								return func_72(iParam1, iParam0, 0);
							}
							else
							{
								return func_54(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_54(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_108449[iParam1] != -1)
				{
					return func_72(iParam1, iParam0, 0);
				}
				else
				{
					return func_38(0, -1, 0);
				}
			}
			else
			{
				return func_38(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_108449[iParam1] != -1)
		{
			return func_72(iParam1, iParam0, 0);
		}
		else
		{
			return func_54(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_54(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_38(bool bParam0, int iParam1, bool bParam2)//Position - 0xFF8
{
	return func_39(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x100E
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_53() || (func_52() && func_50())) && Global_1665699.f_1)
	{
		if (bParam1)
		{
			return func_49(iParam2, iVar0);
		}
		else
		{
			return func_49(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_44(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_43(1);
				}
				else
				{
					return func_43(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_40(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_40(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_43(1);
	}
	return func_43(0);
}

int func_40(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1110
{
	int iVar0;
	
	iVar0 = func_42(iParam0, iParam1, iParam3);
	if (func_41(Global_4718592.f_113724, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_41(int iParam0, bool bParam1)//Position - 0x1228
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_166301 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9486[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)//Position - 0x1279
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_44(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_43(bool bParam0)//Position - 0x12C1
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12D8
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058070.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23341, bVar0))
			{
				bVar1 = Global_1058070.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_45(iParam0, bVar0, iParam1, bVar1) || !func_45(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_45(iParam0, bVar0, iParam1, bVar1) || !func_45(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_45(iParam0, bVar0, iParam1, bVar1) || !func_45(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_45(iParam0, bVar0, iParam1, bVar1) || !func_45(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23343[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1214, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1214, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1214, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1214, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_45(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1623
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_23342, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1265[iParam2 /*23466*/].f_23342, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_283(iVar1, 1, 1) || func_47(iVar1, 0)) || BitTest(Global_2657589[iVar1 /*466*/].f_199, 2)) || func_46(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_46(int iParam0)//Position - 0x174F
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_36.f_18, 14);
}

bool func_47(int iParam0, int iParam1)//Position - 0x1767
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_48(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853910[iParam0 /*862*/].f_205 == 8;
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

int func_48(int iParam0, bool bParam1)//Position - 0x17B2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575040[iVar1] == 1)
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

int func_49(int iParam0, int iParam1)//Position - 0x17F3
{
	if (iParam0 == -1)
	{
		iParam0 = func_42(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_50()//Position - 0x1841
{
	if (func_51())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_170488, 4);
}

bool func_51()//Position - 0x1860
{
	return BitTest(Global_4718592.f_160050, 12);
}

bool func_52()//Position - 0x1875
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_170488, 0);
	}
	return ((BitTest(Global_4718592.f_170488, 0) || Global_1926644) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_53()//Position - 0x18BC
{
	if (func_51() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x18D9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853910[iVar2 /*862*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_63())
			{
				iVar3 = func_59(iParam0);
				if (!iVar3 == -1)
				{
					return func_57(iVar3);
				}
			}
			if ((func_56(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_44(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_43(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_55(1);
			}
			else
			{
				return func_39(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836597 || Global_1836587) || Global_1853910[iParam0 /*862*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836597 == 1 && Global_1836607 == 0))
			{
				return func_43(1);
			}
			else
			{
				return func_39(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836591 && Global_1836078.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_59(iParam0);
	if (!iVar4 == -1)
	{
		return func_57(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_55(bool bParam0)//Position - 0x1A71
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_56(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1A88
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_57(int iParam0)//Position - 0x1B00
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_58(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_58(int iParam0)//Position - 0x1BC3
{
	return Global_2648605.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_59(int iParam0)//Position - 0x1BDA
{
	if (!iParam0 == func_79())
	{
		if (func_61(iParam0, 1))
		{
			return Global_2648605.f_818.f_11[func_60(iParam0)];
		}
	}
	return -1;
}

int func_60(int iParam0)//Position - 0x1C0C
{
	if (iParam0 != func_79())
	{
		return Global_1894573[iParam0 /*608*/].f_10;
	}
	return func_79();
}

bool func_61(int iParam0, bool bParam1)//Position - 0x1C2F
{
	if (!bParam1)
	{
		if (func_62(iParam0))
		{
			return 0;
		}
	}
	return Global_1894573[iParam0 /*608*/].f_10 != func_79();
}

int func_62(int iParam0)//Position - 0x1C5A
{
	if (iParam0 != func_79())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_79())
		{
			return Global_1894573[iParam0 /*608*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_63()//Position - 0x1C8F
{
	if ((((((func_71() || func_70()) || func_32()) || func_69()) || func_68()) || func_66()) || func_64())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_64()//Position - 0x1CF7
{
	return func_65(Global_4718592.f_113724);
}

int func_65(int iParam0)//Position - 0x1D0D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31715[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66()//Position - 0x1D3C
{
	return func_67(Global_4718592.f_113724);
}

int func_67(int iParam0)//Position - 0x1D52
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31051[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_68()//Position - 0x1D8C
{
	return Global_2683862.f_24;
}

var func_69()//Position - 0x1D9A
{
	return Global_2683862.f_21;
}

var func_70()//Position - 0x1DA8
{
	return Global_2683862.f_18;
}

var func_71()//Position - 0x1DB6
{
	return Global_2683862.f_17;
}

int func_72(int iParam0, int iParam1, bool bParam2)//Position - 0x1DC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058070.f_14[iParam0];
	if (func_63())
	{
		iVar2 = func_59(iParam1);
		if (!iVar2 == -1)
		{
			return func_57(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1265[iParam0 /*23466*/].f_8067[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_79())
	{
		if (Global_4718592.f_108449[iParam0] != -1 && Global_4718592.f_108449[iParam0] <= 4)
		{
			if (Global_4718592.f_108449[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_108449[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_108449[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_108449[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_108449[iParam0];
			}
		}
		else
		{
			iVar0 = func_39(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_73(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_44(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_55(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_73(int iParam0)//Position - 0x1F44
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_166456;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_166457;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_166458;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_166459;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_74()//Position - 0x2019
{
	return Global_2621446.f_2;
}

var func_75()//Position - 0x2027
{
	return BitTest(Global_2621446, 4);
}

var func_76()//Position - 0x2035
{
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_77(int iParam0)//Position - 0x204F
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_78())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657589[iParam0 /*466*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_78()//Position - 0x208E
{
	return BitTest(Global_2621446, 3);
}

int func_79()//Position - 0x209C
{
	return -1;
}

void func_80(var uParam0, int iParam1)//Position - 0x20A5
{
	func_81(uParam0, iParam1);
}

void func_81(var uParam0, var uParam1)//Position - 0x20B5
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_82(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x20C6
{
	uParam1->f_17 = func_79();
	uParam1->f_18 = func_79();
	uParam1->f_19 = func_79();
	uParam1->f_20 = func_79();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_83(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x2144
{
	func_84(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_84(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x215B
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_85(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_85(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x217C
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_94();
	if (iVar0 == -1)
	{
		return;
	}
	func_93(iVar0);
	func_92(iVar0, uParam0);
	func_91(iVar0, uParam2, bParam3);
	func_90(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_89(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_87(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_86(iVar0, iParam6);
	}
}

void func_86(int iParam0, int iParam1)//Position - 0x2228
{
	Global_1649046.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_87(int iParam0, char* sParam1, bool bParam2)//Position - 0x223E
{
	StringCopy(&(Global_1649046.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_88(iParam0);
}

void func_88(int iParam0)//Position - 0x2265
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 5);
}

void func_89(int iParam0)//Position - 0x227C
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 4);
}

void func_90(int iParam0, char* sParam1)//Position - 0x2293
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1649046.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_91(int iParam0, var uParam1, bool bParam2)//Position - 0x22B3
{
	Global_1649046.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 2);
	}
}

void func_92(int iParam0, var uParam1)//Position - 0x230D
{
	Global_1649046.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_93(int iParam0)//Position - 0x2323
{
	MISC::SET_BIT(&(Global_1649046.f_59[iParam0 /*16*/]), 0);
}

int func_94()//Position - 0x233A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_95(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_95(int iParam0)//Position - 0x2368
{
	return BitTest(Global_1649046.f_59[iParam0 /*16*/], 0);
}

int func_96()//Position - 0x237C
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_97(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x239A
{
	int iVar0;
	
	if (!func_109())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_98(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_98(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28375 /* Tunable: 1103207774 */)
			{
				func_98(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			func_98(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_98(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2C3B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_109())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
		if (Global_2695819)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_105(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = iParam4;
			Global_4536678 = iParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_104(1, iParam4);
			Global_4536673 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_99(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2DE8
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_100(iParam0);
	}
}

void func_100(int iParam0)//Position - 0x2E20
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_109())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_103(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_101(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_101(var uParam0)//Position - 0x2E74
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_102(&(uParam0->f_14));
	func_102(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_102(var uParam0)//Position - 0x2F80
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_103(int iParam0)//Position - 0x2FC8
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_104(int iParam0, int iParam1)//Position - 0x2FF3
{
	Global_2697013 = iParam1;
	Global_2697012 = iParam0;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x3007
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_109())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_106(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_106(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x3144
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -444617715;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_108(Var0.f_1);
	if ((Global_262145.f_24076 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24077 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24078 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_107();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

void func_107()//Position - 0x31D6
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_108(int iParam0)//Position - 0x31E5
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_109()//Position - 0x31FD
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_110(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3214
{
	func_111(iParam0, iParam1, iParam2, fParam3);
}

void func_111(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3228
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_4 = iVar1;
	Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 = (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_112(iVar1, 0);
	}
}

void func_112(int iParam0, bool bParam1)//Position - 0x32AB
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_113(int iParam0, int iParam1)//Position - 0x32BC
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_134())
		{
			if (func_133(0))
			{
				if (!func_129(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_128()))
					{
						if (func_127() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_127());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_125(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_118("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_128(), iVar0, 0, 0, 1);
						}
						func_117(20);
						func_114(func_128(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_114(int iParam0, int iParam1, int iParam2)//Position - 0x335B
{
	struct<8> Var0;
	
	if (func_283(iParam0, 0, 1))
	{
		Var0.f_0 = -1597942809;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_116(iParam0);
		func_115(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_108(iParam0));
	}
}

void func_115(var uParam0, var uParam1)//Position - 0x33B1
{
	*uParam0 = Global_1923597.f_9;
	*uParam1 = Global_1923597.f_10;
}

var func_116(int iParam0)//Position - 0x33CB
{
	return Global_1894573[iParam0 /*608*/].f_510;
}

void func_117(int iParam0)//Position - 0x33DF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2793044.f_5225.f_7[iVar0]), iVar1);
}

int func_118(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x3408
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_37(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_123(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_119(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_119(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x34A0
{
	int iVar0;
	
	if ((!func_122() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_47(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_120(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944061.f_5[iVar0 /*53*/] = iParam0;
		Global_1944061.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944061.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944061.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_120(int iParam0)//Position - 0x35A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944061 - 1))
	{
		if (iParam0 > Global_1944061.f_5[iVar0 /*53*/].f_1)
		{
			func_121(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944061++;
	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}
	return (Global_1944061 - 1);
}

void func_121(int iParam0)//Position - 0x360A
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944061.f_5[iVar0 /*53*/] = { Global_1944061.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_122()//Position - 0x3643
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_123(char* sParam0)//Position - 0x3654
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_124(&cVar0);
}

var func_124(char[4] cParam0)//Position - 0x3676
{
	return cParam0;
}

void func_125(int iParam0, bool bParam1)//Position - 0x3680
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_126(1);
	}
	else
	{
		iVar1 = func_126(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_126(bool bParam0)//Position - 0x36B2
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12865 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_127()//Position - 0x36D8
{
	return Global_262145.f_12864 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_128()//Position - 0x36E7
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

bool func_129(bool bParam0)//Position - 0x36FC
{
	return func_130(PLAYER::PLAYER_ID(), bParam0);
}

int func_130(int iParam0, bool bParam1)//Position - 0x370E
{
	return func_131(iParam0, bParam1, 1);
}

int func_131(int iParam0, bool bParam1, int iParam2)//Position - 0x371F
{
	int iVar0;
	
	if (iParam0 == func_79())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_132(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1894573[iParam0 /*608*/].f_10;
	if (iVar0 != func_79() && Global_1894573[iVar0 /*608*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x377B
{
	if (iParam0 != func_79())
	{
		if (Global_1894573[iParam0 /*608*/].f_10 != func_79())
		{
			if (Global_1894573[iParam0 /*608*/].f_10 == iParam0 && Global_1894573[iParam0 /*608*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(bool bParam0)//Position - 0x37CA
{
	return func_61(PLAYER::PLAYER_ID(), bParam0);
}

bool func_134()//Position - 0x37DC
{
	return func_62(PLAYER::PLAYER_ID());
}

void func_135()//Position - 0x37EC
{
	func_253();
	if (HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		if (func_252() || func_251())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 4);
		}
	}
	switch (Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85.f_2, Local_85.f_5, Local_85.f_5, 1000f, false, true, 0))
			{
				func_228();
				MISC::SET_BIT(&(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_2793044.f_4692), 0);
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_85.f_7 > 1)
			{
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_202();
			func_136();
			if (Local_85.f_7 > 1)
			{
				Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_136()//Position - 0x38CA
{
	func_201();
	func_145();
	func_138();
	func_137();
}

void func_137()//Position - 0x38E2
{
	if (!BitTest(uLocal_88, 5))
	{
		if (!BitTest(uLocal_88, 4))
		{
			if (Local_85.f_17 == 0)
			{
				MISC::SET_BIT(&uLocal_88, 4);
			}
			else
			{
				MISC::SET_BIT(&uLocal_88, 5);
			}
		}
		else if (!func_283(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&uLocal_88, 5);
		}
	}
}

void func_138()//Position - 0x392B
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		func_144();
	}
	else
	{
		func_143();
	}
	if ((Local_85.f_12 - func_142(&(Local_85.f_10), 0, 0)) >= 0)
	{
		func_139((Local_85.f_12 - func_142(&(Local_85.f_10), 0, 0)), "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_139(0, "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_139(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x39CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_141(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655472.f_1 = 1;
		func_140(7, iVar0);
		Global_1655472.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655472.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655472.f_4659.f_172[iVar0] = iParam2;
		Global_1655472.f_4659.f_216[iVar0] = iParam3;
		Global_1655472.f_4659.f_183[iVar0] = iParam4;
		Global_1655472.f_4659.f_194[iVar0] = iParam5;
		Global_1655472.f_4659.f_249[iVar0] = iParam6;
		Global_1655472.f_4659.f_260[iVar0] = iParam7;
		Global_1655472.f_4659.f_205[iVar0] = iParam8;
		Global_1655472.f_4659.f_314[iVar0] = iParam9;
		Global_1655472.f_4659.f_325[iVar0] = iParam10;
		Global_1655472.f_4659.f_357[iVar0] = iParam11;
		Global_1655472.f_4659.f_238[iVar0] = iParam12;
		Global_1655472.f_4659.f_271[iVar0] = iParam13;
		Global_1655472.f_4659.f_368[iVar0] = iParam14;
		Global_1655472.f_4659.f_379[iVar0] = iParam15;
		Global_1655472.f_4659.f_390[iVar0] = iParam16;
		Global_1655472.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_140(int iParam0, int iParam1)//Position - 0x3B2C
{
	MISC::SET_BIT(&(Global_1655472.f_7009[iParam0]), iParam1);
}

int func_141(int iParam0, int iParam1)//Position - 0x3B45
{
	return BitTest(Global_1655472.f_7009[iParam0], iParam1);
}

int func_142(var uParam0, bool bParam1, bool bParam2)//Position - 0x3B5B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_143()//Position - 0x3BA2
{
	Global_1655472.f_1173 = 1;
}

void func_144()//Position - 0x3BB2
{
	Global_1655472.f_1172 = 1;
}

void func_145()//Position - 0x3BC2
{
	if (func_9(&uLocal_90, 30000, 0))
	{
		switch (Local_85.f_16)
		{
			case 2:
				func_198(2107, 1, -1);
				break;
			
			case 3:
				func_198(2108, 1, -1);
				break;
			
			case 4:
				func_198(2109, 1, -1);
				break;
			
			case 5:
				func_198(2110, 1, -1);
				break;
		}
		func_146(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC" /* GXT: Distract Cops */, joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DISTRACT_COPS"), (Global_262145.f_8567 /* Tunable: XP_REWARD_EVENT_DISTRACT_COPS */ * Local_85.f_16), 1, -1, 0, 0, 0);
		Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_90);
	}
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3C6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_156(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_152(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_147(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_147(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3CFF
{
	struct<3> Var0;
	
	Var0 = { func_150(iParam0, 1) };
	if (iParam0 == func_149(PLAYER::PLAYER_PED_ID()))
	{
		func_148(1);
	}
	func_152(Var0, iParam1, 0, sParam2, iParam3);
}

void func_148(int iParam0)//Position - 0x3D33
{
	Global_2672505.f_1681 = iParam0;
}

int func_149(int iParam0)//Position - 0x3D44
{
	return iParam0;
}

Vector3 func_150(int iParam0, bool bParam1)//Position - 0x3D4E
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_151(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_151(int iParam0)//Position - 0x3E12
{
	return iParam0;
}

void func_152(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x3E1C
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672505.f_1080[iVar0 /*30*/].f_6 == 0 || Global_2672505.f_1080[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672505.f_1080[iVar1 /*30*/] = { Param0 };
			Global_2672505.f_1080[iVar1 /*30*/].f_6 = 1;
			Global_2672505.f_1080[iVar1 /*30*/].f_4 = func_155(Global_2672505.f_1080[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672505.f_1080[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672505.f_1080[iVar1 /*30*/].f_3 = iParam1;
			Global_2672505.f_1080[iVar1 /*30*/].f_8 = iParam2;
			Global_2672505.f_1080[iVar1 /*30*/].f_9 = func_154();
			Global_2672505.f_1080[iVar1 /*30*/].f_10 = func_153();
			StringCopy(&(Global_2672505.f_1080[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2672505.f_1080[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_153()//Position - 0x3F33
{
	if (Global_2672505.f_1681)
	{
		Global_2672505.f_1681 = 0;
		return 1;
	}
	Global_2672505.f_1681 = 0;
	return 0;
}

var func_154()//Position - 0x3F5D
{
	var uVar0;
	
	uVar0 = Global_2672505.f_1683;
	Global_2672505.f_1683 = 1;
	return uVar0;
}

float func_155(struct<3> Param0, var uParam1, var uParam2)//Position - 0x3F78
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_156(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4013
{
	var uVar0;
	
	uVar0 = func_157(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4036
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_189();
	if (func_188(sParam2))
	{
	}
	if (func_187())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_185(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_184(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_181(0, &iVar1);
					break;
				
				case 3:
					func_181(1, &iVar1);
					break;
				
				case 1:
					func_178(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1961999)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_198(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_168((func_177(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_2 != -1)
				{
					func_198(1166, iVar1, -1);
				}
				func_162(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_158((func_160(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_158((func_160(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_158(int iParam0)//Position - 0x41A1
{
	if (func_187())
	{
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_5 = iParam0;
		func_159(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_159(int iParam0, int iParam1)//Position - 0x41CC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_160(int iParam0)//Position - 0x41E8
{
	if (iParam0 > -1)
	{
		if (func_283(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_161(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_5;
			}
		}
		else
		{
			return func_161(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x4239
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x4257
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_167(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_165(func_166(&Var0));
			if (iVar1 == 0)
			{
				func_164(&Global_1665493, iParam0);
				func_163(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1665493);
			}
			else if (iVar1 == 1)
			{
				func_164(&Global_1665494, iParam0);
				func_163(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1665494);
			}
			else if (iVar1 == 2)
			{
				func_164(&Global_1665495, iParam0);
				func_163(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1665495);
			}
			else if (iVar1 == 3)
			{
				func_164(&Global_1665496, iParam0);
				func_163(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1665496);
			}
			else if (iVar1 == 4)
			{
				func_164(&Global_1665497, iParam0);
				func_163(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1665497);
			}
		}
	}
}

void func_163(int iParam0, int iParam1)//Position - 0x432B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1665488 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1665490 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1665491 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1665492 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1665493 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1665494 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1665495 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1665496 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1665497 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1665498 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1665499 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1665500 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1665501 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1665502 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1665503 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1665504 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_164(var uParam0, int iParam1)//Position - 0x4450
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_165(int iParam0)//Position - 0x4461
{
	if (iParam0 == Global_1665488)
	{
		return 0;
	}
	else if (iParam0 == Global_1665489)
	{
		return 1;
	}
	else if (iParam0 == Global_1665490)
	{
		return 2;
	}
	else if (iParam0 == Global_1665491)
	{
		return 3;
	}
	else if (iParam0 == Global_1665492)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_166(var* uParam0)//Position - 0x44BE
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694466;
		}
	}
	return Global_2694466;
}

struct<13> func_167(int iParam0)//Position - 0x44E1
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_168(int iParam0, int iParam1, int iParam2)//Position - 0x44F8
{
	if (func_187())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10070 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1665638[func_18(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == Global_1665638[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_176(PLAYER::PLAYER_ID()))
		{
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_1 = iParam0;
			Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_205.f_6 = func_174(iParam0, 1);
		}
		func_173(640, iParam0, -1, 1);
		func_172(641, func_174(iParam0, 1), -1, 1, 0);
		Global_1665638[func_18(-1)] = iParam0;
		func_169(-1109644434, 7, 0);
	}
}

void func_169(int iParam0, int iParam1, int iParam2)//Position - 0x461E
{
	int iVar0;
	
	if (func_171(iParam1, iParam2))
	{
		iVar0 = func_170();
		Global_2694418[iVar0] = iParam1;
		Global_2694429[iVar0] = iParam0;
	}
}

int func_170()//Position - 0x464B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_171(int iParam0, var uParam1)//Position - 0x4680
{
	if (Global_1575048)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575060) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_172(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x4706
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2805027[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_173(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4736
{
	int iVar0;
	
	iVar0 = Global_2805027[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1665566[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1665572[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1665578[func_18(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1665584[func_18(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1665590[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1665536[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1665542[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1665548[func_18(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1665554[func_18(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1665560[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1665506[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1665512[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1665518[func_18(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1665524[func_18(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1665530[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1665596[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1665602[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1665608[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1665614[func_18(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1665620[func_18(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1665626[func_18(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1665632[func_18(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1665638[func_18(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1665644[func_18(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2851323[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2851323[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2851323[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2851323[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 12424:
			Global_2851502[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1665650[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1665656[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1665662[func_18(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1665668[func_18(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1665674[func_18(iParam2)] = iParam1;
			break;
		
		case 11803:
			Global_1665680[func_18(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1665686[func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2851411[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2851411[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2851411[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2851411[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2851411[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2851505[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2851505[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2851505[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2851505[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2851505[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2851521[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2851521[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2851521[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2851521[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2851521[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2851411[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2851323[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2851537[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2851546[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2851540[func_18(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2851549[func_18(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2851543[func_18(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2851552[func_18(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2851555[func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2851411[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2851323[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2851411[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2851323[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2851411[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2851323[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2851411[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2851323[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2851411[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2851323[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2851411[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2851323[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2851411[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2851323[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2851411[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2851323[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2851411[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2851323[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2851411[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2851323[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2851411[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2851323[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2851411[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2851323[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2851323[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2851323[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2851323[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2851323[20 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2851558[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2851561[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2851564[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2851567[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2851570[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2851573[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2851576[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2851579[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2851582[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2851585[func_18(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2851588[func_18(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2851591[func_18(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2851594[func_18(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2851597[func_18(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2851323[21 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2851411[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2851323[22 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2851411[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2851323[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2851323[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2851323[25 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2851411[27 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2851323[26 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2851411[28 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2851323[27 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_174(int iParam0, bool bParam1)//Position - 0x5268
{
	if (bParam1)
	{
	}
	return func_175(iParam0, 0);
}

int func_175(int iParam0, int iParam1)//Position - 0x527C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_297010[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_297010[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_176(int iParam0)//Position - 0x533B
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2672505.f_1, iParam0);
	}
	return 1;
}

int func_177(int iParam0)//Position - 0x535D
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1665638[func_18(-1)];
			}
			else if (func_176(iParam0))
			{
				return Global_1853910[iParam0 /*862*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1665638[func_18(-1)];
	}
	return 0;
}

void func_178(int iParam0)//Position - 0x53BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_44(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_180(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_179(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_179(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_179(int iParam0, int iParam1)//Position - 0x54A6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_180(int iParam0, int iParam1)//Position - 0x54C7
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764201 = { func_167(iParam0) };
		Global_2764214 = { func_167(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764201))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764214))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764131, 35, &Global_2764201);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764166, 35, &Global_2764214);
				if (Global_2764131 == Global_2764166)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_181(bool bParam0, int iParam1)//Position - 0x5534
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_283(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_180(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_283(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_182(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_180(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_179(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_179(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_182(int iParam0, int iParam1)//Position - 0x564C
{
	return SYSTEM::VDIST(func_183(iParam0), func_183(iParam1));
	return 0f;
}

Vector3 func_183(int iParam0)//Position - 0x5668
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_184(int iParam0)//Position - 0x567B
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_179(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_185(int iParam0)//Position - 0x56B2
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_177(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_177(PLAYER::PLAYER_ID());
		}
	}
	if (func_186(8000, 0, 0) > 0)
	{
		if (func_186(8000, 0, 0) < (iParam0 + func_177(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_186(8000, 0, 0) - func_177(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_186(int iParam0, bool bParam1, int iParam2)//Position - 0x5716
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_297010[iParam0];
}

int func_187()//Position - 0x573E
{
	return 1;
}

int func_188(char* sParam0)//Position - 0x5747
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_189()//Position - 0x577F
{
	int iVar0;
	
	if (func_197(PLAYER::PLAYER_ID()) || func_196(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10102 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_194() || func_190(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23282 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7095 /* Tunable: JOB_RP_CAP */ > 30000)
	{
		iVar0 = 30000;
	}
	else
	{
		iVar0 = Global_262145.f_7095 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_190(int iParam0)//Position - 0x5817
{
	return func_191(func_192(iParam0));
}

int func_191(int iParam0)//Position - 0x5829
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x5843
{
	if (func_193(iParam0, 0))
	{
		return Global_1894573[iParam0 /*608*/].f_10.f_33;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)//Position - 0x5866
{
	if (Global_1894573[iParam0 /*608*/].f_10.f_33 != -1 || (iParam1 && Global_1894573[iParam0 /*608*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_194()//Position - 0x58A1
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_32();
	}
	return func_195(Global_4718592.f_113724);
}

int func_195(int iParam0)//Position - 0x58C5
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5042[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_196(int iParam0)//Position - 0x58FF
{
	return Global_2657589[iParam0 /*466*/].f_121 == 2;
}

bool func_197(int iParam0)//Position - 0x5914
{
	return Global_2657589[iParam0 /*466*/].f_121 == 7;
}

void func_198(int iParam0, int iParam1, int iParam2)//Position - 0x5929
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_199(iParam0))
	{
		func_172(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_173(iParam0, iVar0, iParam2, 1);
	}
}

int func_199(int iParam0)//Position - 0x596B
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

int func_200(int iParam0, var uParam1, int iParam2)//Position - 0x5C3B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14192)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2805027[iParam0 /*3*/][func_18(uParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_201()//Position - 0x5C78
{
	if (func_9(&uLocal_92, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_85.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_85.f_16, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

void func_202()//Position - 0x5CBA
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85.f_2, Local_85.f_5, Local_85.f_5, 1000f, false, true, 0))
	{
		func_205();
		Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_85.f_2, Local_85.f_6, Local_85.f_6, 950f, false, true, 0))
	{
		if (!BitTest(uLocal_88, 0) && BitTest(uLocal_88, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_204())
			{
				if (!func_252())
				{
					func_203("DCP_LEAVE" /* GXT: You are leaving the area for distracting the Cops. */, -1);
				}
				MISC::SET_BIT(&uLocal_88, 0);
			}
		}
	}
	else
	{
		if (!BitTest(uLocal_88, 3))
		{
			MISC::SET_BIT(&uLocal_88, 3);
		}
		if (BitTest(uLocal_88, 0))
		{
			MISC::CLEAR_BIT(&uLocal_88, 0);
		}
	}
}

void func_203(char* sParam0, int iParam1)//Position - 0x5D72
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_204()//Position - 0x5D89
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

void func_205()//Position - 0x5D9E
{
	func_5(&uLocal_90);
	func_5(&uLocal_92);
	func_206();
	MISC::CLEAR_BIT(&(Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	MISC::CLEAR_BIT(&uLocal_88, 3);
	MISC::SET_BIT(&(Global_2793044.f_4692), 0);
	if (!BitTest(uLocal_88, 5))
	{
		MISC::SET_BIT(&uLocal_88, 5);
	}
}

void func_206()//Position - 0x5DE7
{
	if (BitTest(uLocal_88, 2))
	{
		func_207(1, 1, 0);
		MISC::CLEAR_BIT(&uLocal_88, 2);
	}
}

void func_207(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5E04
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_45), &Global_2639866, 323);
	}
	else
	{
		Global_2635559.f_45 = { Global_2639866 };
		Global_2635559.f_45.f_49 = { Global_2639866.f_49 };
		Global_2635559.f_45.f_52 = Global_2639866.f_52;
		Global_2635559.f_45.f_53 = Global_2639866.f_53;
	}
	if (bParam0)
	{
		func_227();
	}
	if (!bParam2)
	{
		func_210(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_209(0);
	func_208();
}

void func_208()//Position - 0x5EAA
{
	struct<6> Var0;
	
	if (Global_2635559.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635559.f_490 = { Var0 };
	}
}

void func_209(bool bParam0)//Position - 0x5ECF
{
	if (bParam0)
	{
		Global_2635559.f_713 = 0;
	}
	else
	{
		Global_2635559.f_713 = 1;
	}
}

void func_210(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x5EEF
{
	if (bParam0)
	{
		if (func_226())
		{
			func_225();
		}
		Global_2635559.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635559.f_714.f_504 = iParam1;
		Global_2635559.f_714.f_505 = iParam2;
		Global_2635559.f_714.f_506 = iParam10;
		func_223();
		func_214(8, 0, 0, 0, 0);
		Global_2635559.f_714.f_507 = iParam11;
		Global_2635559.f_714.f_512 = iParam3;
		Global_2635559.f_714.f_513 = iParam4;
		Global_2635559.f_714.f_510 = iParam5;
		Global_2635559.f_714.f_511 = iParam6;
		Global_2635559.f_714.f_514 = iParam7;
		Global_2635559.f_714.f_515 = iParam8;
		Global_2635559.f_714.f_516 = iParam9;
		Global_2635559.f_714.f_517 = iParam14;
		Global_2635559.f_714.f_508 = iParam12;
		Global_2635559.f_714.f_509 = iParam13;
		Global_2635559.f_1753 = 1;
	}
	else
	{
		func_211();
	}
}

void func_211()//Position - 0x5FDA
{
	if (func_226() && !func_213())
	{
		func_225();
	}
	if (func_213())
	{
		func_212();
	}
	else
	{
		func_223();
		func_214(0, 0, 0, 0, 0);
		Global_2635559.f_1753 = 0;
		Global_2635559.f_1752 = 0;
	}
}

void func_212()//Position - 0x6022
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_714), &(Global_2635559.f_1233), 519);
	Global_2635559.f_490 = { Global_2635559.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		Global_2635559.f_1752 = 0;
	}
}

int func_213()//Position - 0x606A
{
	if ((Global_2635559.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x60A9
{
	if (Global_2672505.f_1684.f_703.f_16 != func_79())
	{
		if (BitTest(Global_2657589[Global_2672505.f_1684.f_703.f_16 /*466*/].f_427, 0) && func_215())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643290 = 0;
	}
	Global_2635559.f_490 = iParam0;
	Global_2635559.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635559.f_490.f_2 = iParam1;
	Global_2635559.f_490.f_3 = iParam2;
	Global_2635559.f_490.f_4 = iParam3;
	Global_2635559.f_490.f_5 = iParam4;
}

int func_215()//Position - 0x6145
{
	if ((((((func_192(PLAYER::PLAYER_ID()) == 229 || func_192(PLAYER::PLAYER_ID()) == 191) || func_222()) || func_221()) || func_220()) || Global_2764906.f_227 == 1) || (Global_2635559.f_1753 && func_216(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0)//Position - 0x61B7
{
	if (func_219(iParam0))
	{
		return 1;
	}
	if (func_217(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_217(int iParam0)//Position - 0x61DA
{
	return func_218(iParam0, 20);
}

var func_218(int iParam0, int iParam1)//Position - 0x61EA
{
	return BitTest(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

int func_219(var uParam0)//Position - 0x6202
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1894573[iVar0 /*608*/].f_1, 7);
	}
	return 0;
}

var func_220()//Position - 0x6225
{
	return Global_2764905;
}

var func_221()//Position - 0x6231
{
	return Global_1836591;
}

int func_222()//Position - 0x623D
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_223()//Position - 0x6252
{
	if (func_226() && !func_213())
	{
		func_225();
	}
	func_224();
	Global_2635559.f_714 = 0;
}

void func_224()//Position - 0x627B
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635559.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_225()//Position - 0x62B6
{
	if (func_213())
	{
		if (Global_2635559.f_714.f_518 == Global_2635559.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_1233), &(Global_2635559.f_714), 519);
		Global_2635559.f_496 = { Global_2635559.f_490 };
		Global_2635559.f_1752 = 1;
	}
}

int func_226()//Position - 0x6324
{
	if ((Global_2635559.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635559.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2635559.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_227()//Position - 0x6363
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635559.f_368), &Global_2640189, 121);
}

void func_228()//Position - 0x637C
{
	if (!BitTest(uLocal_88, 2))
	{
		func_248(Local_85.f_2, (Local_85.f_6 * 1.5f), 0, 0, 1, 0);
		func_230(Local_85.f_2, Local_85.f_6, 0, 1);
		func_229(Local_85.f_2, 1, 0);
		MISC::SET_BIT(&uLocal_88, 2);
	}
}

void func_229(struct<3> Param0, int iParam1, int iParam2)//Position - 0x63C7
{
	Global_2635559.f_45.f_49 = { Param0 };
	Global_2635559.f_45.f_52 = iParam1;
	Global_2635559.f_45.f_53 = iParam2;
}

void func_230(struct<3> Param0, var uParam1, int iParam2, int iParam3)//Position - 0x63F1
{
	func_231(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_231(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x640B
{
	struct<12> Var0;
	
	if (func_240(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_239(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_234(Var0))
		{
			Global_2635559.f_45.f_64 = func_233(PLAYER::PLAYER_ID());
			func_232(Var0, iParam4);
		}
	}
}

void func_232(struct<12> Param0, int iParam1)//Position - 0x6481
{
	Global_2635559.f_368[iParam1 /*12*/] = { Param0 };
	Global_2635559.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_233(int iParam0)//Position - 0x64AA
{
	if (func_283(iParam0, 0, 1))
	{
		return Global_2657589[iParam0 /*466*/].f_1;
	}
	return 0;
}

int func_234(struct<12> Param0)//Position - 0x64CC
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2635559.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_235(Global_2635559.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_235(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x652C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_238(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_236(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_238(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_236(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_236(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x6665
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.70710677f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_237(Param0, Param1, Var0, Var1);
}

int func_237(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x66A9
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_238(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x6700
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, var uParam1)//Position - 0x672B
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var1.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var1.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_240(int iParam0)//Position - 0x67C2
{
	if (((func_243(iParam0, 1) || func_242(iParam0)) || func_193(iParam0, 0)) || func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)//Position - 0x67FE
{
	if (!func_283(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2);
}

int func_242(int iParam0)//Position - 0x6826
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1894573[iVar0 /*608*/] != -1;
	}
	return 0;
}

bool func_243(int iParam0, bool bParam1)//Position - 0x6847
{
	if (func_247() != 0)
	{
		return func_233(iParam0) != 0;
	}
	return func_244(iParam0, bParam1, 0);
}

int func_244(int iParam0, bool bParam1, bool bParam2)//Position - 0x686E
{
	if (bParam1)
	{
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853910[iParam0 /*862*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_245(int iParam0)//Position - 0x68A0
{
	return func_246(iParam0);
}

var func_246(int iParam0)//Position - 0x68AE
{
	return BitTest(Global_1853910[iParam0 /*862*/].f_11.f_1, 0);
}

int func_247()//Position - 0x68C5
{
	return Global_32163;
}

void func_248(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x68D0
{
	func_249(Param0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_249(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)//Position - 0x68EE
{
	struct<12> Var0;
	
	if (func_240(PLAYER::PLAYER_ID()) || uParam5)
	{
		if (Global_2635559.f_1753)
		{
			func_211();
		}
		if (Var0.f_10 == 1)
		{
			func_239(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		Var0.f_11 = uParam6;
		Var0.f_8 = uParam7;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2635559.f_45.f_64 = func_233(PLAYER::PLAYER_ID());
		func_250(Var0, iParam4);
	}
}

void func_250(struct<12> Param0, int iParam1)//Position - 0x697D
{
	Global_2635559.f_45[iParam1 /*12*/] = { Param0 };
	Global_2635559.f_45[iParam1 /*12*/].f_9 = 1;
}

var func_251()//Position - 0x69A4
{
	return Global_2646729.f_1869;
}

int func_252()//Position - 0x69B3
{
	return 1;
}

void func_253()//Position - 0x69BC
{
	if (!BitTest(uLocal_88, 6))
	{
		if (((((((func_254(60000) && func_256() == 1) && Local_85.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_283(PLAYER::PLAYER_ID(), 1, 1)) && !func_204()) && Local_85.f_16 != 5)
		{
			if (!func_252())
			{
				func_203("DCP_HELP1" /* GXT: Help Lester's contact by distracting the cops in the area marked by a purple circle. */, -1);
			}
			MISC::SET_BIT(&uLocal_88, 6);
		}
	}
}

bool func_254(int iParam0)//Position - 0x6A3C
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644545, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_255()//Position - 0x6A57
{
	if (HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		if (func_252() || func_251())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 4);
		}
	}
	else
	{
		iLocal_89 = HUD::ADD_BLIP_FOR_RADIUS(Local_85.f_2, Local_85.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_89, 50);
		HUD::SET_BLIP_ALPHA(iLocal_89, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_89, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_89, "DCP_BLIPN" /* GXT: Distract Cops */);
		if (func_252())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_89, 0);
		}
	}
}

int func_256()//Position - 0x6ACB
{
	return Local_85.f_0;
}

int func_257(int iParam0)//Position - 0x6AD5
{
	return Local_87[iParam0 /*4*/];
}

bool func_258(int iParam0)//Position - 0x6AE3
{
	return !func_259(iParam0);
}

int func_259(int iParam0)//Position - 0x6AF2
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7120 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7121 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7122 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7123 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 0) || BitTest(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_260(4))
			{
				return 0;
			}
			if (func_261(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_260(bool bParam0)//Position - 0x6E26
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_283(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657589[iVar0 /*466*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_261(int iParam0, int iParam1)//Position - 0x6E69
{
	return BitTest(Global_2657589[iParam0 /*466*/].f_218, iParam1);
}

int func_262()//Position - 0x6E7F
{
	if (Global_1575035 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_268())
	{
		return 1;
	}
	if (Global_2696915)
	{
		return 1;
	}
	if (func_267())
	{
		return 1;
	}
	if (func_266(159))
	{
		if (!func_265())
		{
			return 1;
		}
	}
	if (func_266(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_263() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_263()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_263()//Position - 0x6F03
{
	switch (func_247())
	{
		case 0:
			return func_264();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_264()//Position - 0x6F36
{
	switch (Global_2697019)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_265()//Position - 0x6F5A
{
	return Global_2683862.f_698;
}

int func_266(int iParam0)//Position - 0x6F69
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_267()//Position - 0x6F80
{
	return Global_2694524;
}

bool func_268()//Position - 0x6F8C
{
	return Global_2683862.f_693;
}

void func_269()//Position - 0x6F9B
{
	SYSTEM::WAIT(0);
}

void func_270()//Position - 0x6FA8
{
	if (HUD::DOES_BLIP_EXIST(iLocal_89))
	{
		HUD::REMOVE_BLIP(&iLocal_89);
	}
	if (BitTest(Local_85.f_1, 1))
	{
		func_83(12, "DSC_FAIL" /* GXT: Great. Thank you for your help. Now some horrible criminals are in jail for a crime they did commit and it's all your fault!! */, 0, 0, -99);
	}
	func_206();
	func_272(16, 0);
	MISC::SET_BIT(&(Global_2793044.f_4692), 0);
	func_271();
}

void func_271()//Position - 0x6FF0
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_272(bool bParam0, bool bParam1)//Position - 0x6FFC
{
	if (bParam1)
	{
		if (!BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_218), bParam0);
	}
}

void func_273(struct<21> Param0)//Position - 0x7059
{
	func_279(func_280(Param0.f_0), Param0);
	func_277(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_85, 20, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_87, 129, 0);
	if (!func_276())
	{
		func_270();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_274();
		}
		func_272(16, 1);
		Local_87[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_270();
	}
}

void func_274()//Position - 0x70C4
{
	Local_85.f_2 = { func_275() };
	Local_85.f_5 = 200f;
	Local_85.f_6 = 180f;
}

Vector3 func_275()//Position - 0x70E8
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_276()//Position - 0x71EF
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_268())
		{
			return 0;
		}
		if (func_266(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_277(int iParam0, int iParam1, bool bParam2)//Position - 0x7248
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_271();
			}
			else
			{
				return 0;
			}
		}
		if (!func_278(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_271();
					}
					else
					{
						return 0;
					}
				}
				if (func_268())
				{
					if (!bParam2)
					{
						func_271();
					}
					else
					{
						return 0;
					}
				}
				if (func_266(157))
				{
					if (!bParam2)
					{
						func_271();
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
					func_271();
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
				func_271();
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
			func_271();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_278(bool bParam0)//Position - 0x735E
{
	if (bParam0)
	{
	}
	return Global_1575035;
}

void func_279(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x736F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_271();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_280(int iParam0)//Position - 0x738E
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 173:
			return 32;
		
		case 174:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 175:
			return 32;
		
		case 176:
			return 32;
		
		case 180:
			return 32;
		
		case 178:
			return 32;
		
		case 179:
			return 32;
		
		case 183:
			return 32;
		
		case 184:
			return 32;
		
		case 181:
			return 32;
		
		case 182:
			return 32;
		
		case 187:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 2;
		
		case 196:
			return 1;
		
		case 192:
			return 2;
		
		case 193:
			return 4;
		
		case 194:
			return 2;
		
		case 195:
			return 2;
		
		case 177:
			return 1;
		
		case 197:
			return 2;
		
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
			return 0;
		
		case 219:
			return 1;
		
		case 204:
			return 4;
		
		case 207:
			return 4;
		
		case 208:
			return 1;
		
		case 209:
			return 1;
		
		case 215:
			return 1;
		
		case 211:
			return 2;
		
		case 216:
			return 1;
		
		case 212:
			return 1;
		
		case 210:
			return 2;
		
		case 213:
			return 8;
		
		case 214:
			return 8;
		
		case 217:
			return 1;
		
		case 218:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 205:
			return 16;
		
		case 206:
			return 32;
		
		default:
	}
	switch (func_281(func_282(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x7B0F
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		default:
	}
	return -1;
}

int func_282(int iParam0, bool bParam1)//Position - 0x7CD7
{
	switch (iParam0)
	{
		case 191:
			return 15;
		
		case 198:
			return 8;
		
		case 192:
			return 14;
		
		case 196:
			return 122;
		
		case 199:
			return 1;
		
		case 197:
			return 5;
		
		case 200:
			return 6;
		
		case 193:
			return 11;
		
		case 201:
			return 0;
		
		case 202:
			return 2;
		
		case 194:
			return 13;
		
		case 203:
			return 3;
		
		case 195:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		default:
	}
	if (bParam1)
	{
	}
	return 312;
}

int func_283(int iParam0, bool bParam1, bool bParam2)//Position - 0x829C
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
				if (iVar0 == Global_2672505.f_3)
				{
					return Global_2672505.f_2;
				}
				else if (Global_2657589[iVar0 /*466*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

