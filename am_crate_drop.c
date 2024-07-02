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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<189> Local_90 = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, -1357824103, -1, -1, -1, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, -1, 0, 0, 480000, -1, 0, 1, 0, 0, 0, 0, 0, 4, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 0, 832784782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 453432689, 30, 200, 100, 1, 0, 2006918058, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1000, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 3, 0, 1, 0, -1861623876, 0, 0, 0, 0, 0 } ;
	var uLocal_279 = 0;
	struct<4> Local_280[32];
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	int iLocal_411[1] = { 0 };
	int iLocal_413[1] = { 0 };
	struct<33> Local_415[1];
	var uLocal_449[1] = { 0 };
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	int iLocal_453[1] = { 0 };
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_470 = 0;
	bool bLocal_471 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_455 = joaat("prop_flare_01");
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_443(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_437(ScriptParam_0);
	}
	else
	{
		func_431();
	}
	while (true)
	{
		func_430();
		if (func_423() || func_420(4))
		{
			func_431();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_431();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_431();
		}
		if (func_418(PLAYER::PLAYER_ID()))
		{
			func_431();
		}
		if (func_416(PLAYER::PLAYER_ID()))
		{
			func_431();
		}
		func_415();
		switch (func_414(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				if (func_413() == 4)
				{
					Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_413() == 1)
				{
					func_78();
				}
				else if (func_413() == 4)
				{
					Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_77(&(Local_90.f_184));
				if (func_76(&(Local_90.f_184)))
				{
					Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_431();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_413())
			{
				case 0:
					if (func_62())
					{
						Local_90.f_0 = 1;
					}
					break;
				
				case 1:
					func_7();
					func_3();
					if (func_1())
					{
						Local_90.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1F5
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x209
{
	return 0;
}

void func_3()//Position - 0x212
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	MISC::SET_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 10);
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			bVar3 = false;
			while (bVar3 < 1)
			{
				if (!BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, 2))
				{
					if (BitTest(Local_280[iVar0 /*4*/].f_1, (0 + bVar3)))
					{
						MISC::SET_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 2);
					}
				}
				if (!BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, 11))
				{
					if (BitTest(Local_280[iVar0 /*4*/].f_1, (3 + bVar3)))
					{
						MISC::SET_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 11);
					}
				}
				if (!BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, 3))
				{
					if (BitTest(Local_280[iVar0 /*4*/].f_1, (6 + bVar3)))
					{
						MISC::SET_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 3);
					}
				}
				if (!BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, 15))
				{
					if (BitTest(Local_280[iVar0 /*4*/].f_1, (15 + bVar3)))
					{
						MISC::SET_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 15);
					}
				}
				if (func_443(iVar1, 1, 1))
				{
					if (Local_90.f_2.f_1[bVar3 /*66*/].f_64 == -1)
					{
						if (BitTest(Local_280[iVar0 /*4*/].f_1, (12 + bVar3)))
						{
							Local_90.f_2.f_1[bVar3 /*66*/].f_64 = iVar0;
							func_6(bVar3);
							func_5(bVar3);
							func_4(bVar3);
						}
					}
					if (!BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, (14 + bVar3)) && BitTest(Local_90.f_2.f_1[bVar3 /*66*/].f_65, (3 + bVar3)))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bVar3 /*66*/].f_1))
						{
							Local_90.f_179 = (Local_90.f_179 - 1);
							MISC::SET_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), (14 + bVar3));
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iVar2, Local_90.f_2.f_68[bVar3 /*104*/].f_1, 100f, 100f, 100f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 10);
						MISC::CLEAR_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 13);
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iVar2, Local_90.f_2.f_68[bVar3 /*104*/].f_1, 180f, 180f, 180f, false, true, 0))
					{
						MISC::CLEAR_BIT(&(Local_90.f_2.f_1[bVar3 /*66*/].f_65), 13);
					}
				}
				bVar3++;
			}
		}
		iVar0++;
	}
}

void func_4(bool bParam0)//Position - 0x47E
{
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_59 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_59))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_90.f_2.f_1[bParam0 /*66*/].f_59, false);
			Local_90.f_2.f_1[bParam0 /*66*/].f_59 = 0;
		}
	}
}

void func_5(bool bParam0)//Position - 0x4CD
{
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_58 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_58))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_90.f_2.f_1[bParam0 /*66*/].f_58, false);
		}
	}
}

void func_6(bool bParam0)//Position - 0x509
{
	if (AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60) != -1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60)))
			{
				AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60));
				AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60));
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60)))
		{
			AUDIO::STOP_SOUND(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60));
			AUDIO::RELEASE_SOUND_ID(AUDIO::GET_SOUND_ID_FROM_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_60));
		}
	}
}

void func_7()//Position - 0x5BB
{
	bool bVar0;
	
	switch (Local_90.f_180)
	{
		case 0:
			if ((func_60() && func_59()) && func_58())
			{
				Local_90.f_180 = 1;
			}
			break;
		
		case 1:
			MISC::SET_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 6);
			MISC::SET_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 7);
			MISC::SET_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 8);
			MISC::SET_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 9);
			bVar0 = false;
			while (bVar0 < Local_90.f_2)
			{
				func_51(bVar0);
				func_18(bVar0);
				func_11(bVar0);
				bVar0++;
			}
			if (BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 6) && BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 9))
			{
				if (BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 7))
				{
					if (BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_451, 60000, 0))
					{
						func_8();
						Local_90.f_180 = 2;
					}
				}
				else if (BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 8))
				{
					if (BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 10) || func_9(&uLocal_451, 60000, 0))
					{
						func_8();
						Local_90.f_180 = 2;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_8()//Position - 0x70D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_5(iVar0);
		iVar0++;
	}
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x72D
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

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x78B
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

void func_11(bool bParam0)//Position - 0x7D0
{
	struct<15> Var0;
	
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_64 == -1)
	{
		if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1))
		{
			if (!BitTest(Local_90.f_1, 11))
			{
				if (Local_90.f_2.f_1[bParam0 /*66*/].f_63 != func_17() && Local_90.f_2.f_1[bParam0 /*66*/].f_63 != func_16())
				{
					Local_90.f_2.f_1[bParam0 /*66*/].f_63 = func_17();
				}
			}
			else if (Local_90.f_2.f_1[bParam0 /*66*/].f_63 != func_15())
			{
				Local_90.f_2.f_1[bParam0 /*66*/].f_63 = func_15();
			}
			if (func_9(&(Local_90.f_2.f_1[bParam0 /*66*/].f_61), Local_90.f_2.f_1[bParam0 /*66*/].f_63, 0))
			{
				if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 13) || BitTest(Local_90.f_1, 14))
				{
					func_4(bParam0);
					Var0.f_3 = -537443435;
					func_13(Var0, func_14(1));
					Local_90.f_2.f_1[bParam0 /*66*/].f_64 = 9999;
				}
				else
				{
					func_12(&(Local_90.f_2.f_1[bParam0 /*66*/].f_61));
					Local_90.f_2.f_1[bParam0 /*66*/].f_63 = func_16();
					MISC::SET_BIT(&(Local_90.f_1), 14);
				}
			}
		}
		MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 13);
	}
}

void func_12(var uParam0)//Position - 0x90E
{
	uParam0->f_1 = 0;
}

void func_13(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)//Position - 0x91B
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_14(int iParam0)//Position - 0x94A
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
			if (func_443(iVar2, 0, 0))
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

int func_15()//Position - 0x9A7
{
	return Global_262145.f_11939 /* Tunable: CRATEDROPSPECIALCLEANUPTIME */;
}

int func_16()//Position - 0x9B6
{
	return Global_262145.f_11940 /* Tunable: CRATEDROPADDITIONALCLEANUPTIME */;
}

int func_17()//Position - 0x9C5
{
	return Global_262145.f_11938 /* Tunable: CRATEDROPSTANDARDCLEANUPTIME */;
}

void func_18(bool bParam0)//Position - 0x9D4
{
	if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 5))
	{
		MISC::CLEAR_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 9);
		if (Local_90.f_2.f_68[bParam0 /*104*/].f_4 == 2)
		{
			if (func_50())
			{
				Local_90.f_2.f_68[bParam0 /*104*/].f_4 = 0;
			}
			else
			{
				Local_90.f_2.f_68[bParam0 /*104*/].f_4 = 1;
				Local_90.f_177++;
			}
		}
		switch (Local_90.f_2.f_68[bParam0 /*104*/].f_4)
		{
			case 1:
				if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 2))
				{
					if (func_40(bParam0))
					{
						MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 5);
					}
				}
				break;
			
			case 0:
				if (func_19(bParam0))
				{
					MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 5);
				}
				break;
			
			default:
				MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 5);
				break;
			}
	}
}

int func_19(int iParam0)//Position - 0xAB9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_90.f_2.f_68[iParam0 /*104*/].f_96)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			if (func_39(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_1))
			{
				if (func_21(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_20(&(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 22, Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_1, Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_2, Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Global_1837312);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), joaat("WEAPON_PISTOL"), 25000, false);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_14, 25000, true);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/].f_15);
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), SYSTEM::ROUND((200f * Global_262145.f_156 /* Tunable: AI_HEALTH */)), 0, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), true);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_1, 150f, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_90.f_2.f_68[iParam0 /*104*/].f_96)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar0 /*18*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_20(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xDAA
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_21(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0xE09
{
	Global_2635563.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam14 > 0f)
	{
		if (func_32(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_22(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_22(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0xF1B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_443(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_443(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_23(iVar1) || !bParam10) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_28(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x10D3
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)//Position - 0x10FF
{
	bool bVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_25(int iParam0, bool bParam1)//Position - 0x1158
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()//Position - 0x1199
{
	return Global_1574926;
}

int func_27(int iParam0)//Position - 0x11A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

Vector3 func_28(int iParam0)//Position - 0x11C7
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_31() && Global_1845281[iVar0 /*883*/].f_860) && !func_30(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_29(iParam0);
}

Vector3 func_29(int iParam0)//Position - 0x121A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_30(struct<3> Param0)//Position - 0x122D
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_31()//Position - 0x1257
{
	return Global_2684504.f_19;
}

int func_32(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9, int iParam10)//Position - 0x1265
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_443(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_23(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_33(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_29(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1369
{
	if (func_38(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_37(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707307))
	{
		return 1;
	}
	if (func_34(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)//Position - 0x13B0
{
	int iVar0;
	
	iVar0 = func_35(iParam0);
	if (func_27(iVar0))
	{
		if (iVar0 == func_35(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x13D9
{
	if (func_27(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_36();
}

int func_36()//Position - 0x13FC
{
	return -1;
}

struct<13> func_37(int iParam0)//Position - 0x1405
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_38(int iParam0, int iParam1)//Position - 0x141C
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707307 = { func_37(iParam0) };
		Global_2707320 = { func_37(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707307))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707320))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707237, 35, &Global_2707307);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_39(int iParam0)//Position - 0x1489
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_40(int iParam0)//Position - 0x14A7
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_46(iParam0) && func_41(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x14D3
{
	int iVar0;
	int iVar1;
	
	if (func_44(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_43(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
		{
			iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/])) + 1;
			if (iVar0 > Local_90.f_2.f_68[iParam0 /*104*/].f_96)
			{
				iVar0 = Local_90.f_2.f_68[iParam0 /*104*/].f_96;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					if (func_39(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_1))
					{
						if (func_42(&(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/], 22, Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_1, (iVar1 - 1), 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Global_1837312);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), joaat("WEAPON_PISTOL"), 25000, false);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_14, 25000, true);
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/].f_15);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 2, true);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), SYSTEM::ROUND((200f * Global_262145.f_156 /* Tunable: AI_HEALTH */)), 0, 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), true);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_1, 250f, 0);
						}
					}
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iVar1 /*18*/]))
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

int func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x17E2
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x186A
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x188C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_45(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x18AC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x18E5
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		if (func_39(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1))
		{
			iVar5 = 0;
			while (iVar5 < 3)
			{
				if (func_21(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Var0 = { Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_2[iVar5 /*3*/] };
					fVar3 = Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_12[iVar5];
					iVar4 = 1;
					iVar5 = 3;
				}
				iVar5++;
			}
			if (iVar4 == 1)
			{
				if (func_47(&(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1, Var0, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), SYSTEM::TO_FLOAT(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16));
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), SYSTEM::TO_FLOAT(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_16));
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]));
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]), true, true, false);
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/]))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_90.f_2.f_68[iParam0 /*104*/].f_78[0 /*17*/].f_1);
	return 1;
}

int func_47(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x1AE1
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_48(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_48(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x1BEA
{
	int iVar0;
	
	if (func_49(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635563.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_49(int iParam0, struct<3> Param1, int iParam4)//Position - 0x1CBD
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_50()//Position - 0x1D5B
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_51(bool bParam0)//Position - 0x1D79
{
	struct<15> Var0;
	struct<15> Var15;
	
	if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 0))
	{
		if (func_9(&(Local_90.f_186), 60000, 0))
		{
			MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 0);
		}
	}
	else if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1))
	{
		if (func_56(bParam0))
		{
			if (func_54())
			{
				if (!BitTest(Local_90.f_1, 11))
				{
					Var0.f_3 = 1498778633;
				}
				else
				{
					Var0.f_3 = -2023231970;
				}
				func_13(Var0, func_14(1));
				func_52(bParam0);
				STATS::PLAYSTATS_CRATE_CREATED(Local_90.f_2.f_68[bParam0 /*104*/].f_1, Local_90.f_2.f_68[bParam0 /*104*/].f_1.f_1, Local_90.f_2.f_68[bParam0 /*104*/].f_1.f_2);
				MISC::SET_BIT(&(Local_90.f_2.f_1[bParam0 /*66*/].f_65), 1);
				Local_90.f_176++;
			}
		}
		if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1))
		{
			if (func_9(&(Local_90.f_188), 60000, 0))
			{
				func_8();
				Local_90.f_180 = 2;
				Var15.f_3 = 654590235;
				func_13(Var15, func_14(1));
			}
		}
	}
	if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1))
	{
		MISC::CLEAR_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 6);
	}
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_64 == -1)
	{
		MISC::CLEAR_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 7);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
	{
		MISC::CLEAR_BIT(&(Local_90.f_2.f_1[0 /*66*/].f_65), 8);
	}
}

int func_52(bool bParam0)//Position - 0x1EFD
{
	if (func_53())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_59))
		{
			Local_90.f_2.f_1[bParam0 /*66*/].f_59 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_crate_drop_beacon", NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			if (!BitTest(Local_90.f_1, 11))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_90.f_2.f_1[bParam0 /*66*/].f_59, 0.8f, 0.18f, 0.19f, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_90.f_2.f_1[bParam0 /*66*/].f_59, 1f, 0.84f, 0f, false);
			}
		}
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_59))
	{
		return 0;
	}
	return 1;
}

int func_53()//Position - 0x1FC3
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x1FDB
{
	int iVar0;
	
	if (BitTest(Local_90.f_1, 11))
	{
		MISC::SET_BIT(&(Global_2699047.f_10), 9);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		STREAMING::REQUEST_MODEL(Local_90.f_181[iVar0 /*2*/].f_1);
		if (STREAMING::HAS_MODEL_LOADED(Local_90.f_181[iVar0 /*2*/].f_1))
		{
			MISC::SET_BIT(&(Global_2699047.f_10), 10);
			if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[iVar0 /*2*/]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_1))
				{
					MISC::SET_BIT(&(Global_2699047.f_10), 12);
					if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
					{
						MISC::SET_BIT(&(Global_2699047.f_10), 13);
						if (func_43(Local_90.f_2.f_1[iVar0 /*66*/].f_1))
						{
							MISC::SET_BIT(&(Global_2699047.f_10), 14);
							if (func_55(&(Local_90.f_181[iVar0 /*2*/]), Local_90.f_181[iVar0 /*2*/].f_1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_1), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0, 0))
							{
								MISC::SET_BIT(&(Global_2699047.f_10), 15);
								NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_90.f_181[iVar0 /*2*/], true);
								ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_1)));
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_1), NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.35f, 0f, 0f, 0f, true, false, true, false, 2, true, 0);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), true);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), false);
								PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]));
								ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), 0f, 0f, -0.2f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2), NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2), true);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2), false);
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2), &(Local_90.f_2.f_1[iVar0 /*66*/].f_14), &(Local_90.f_2.f_1[iVar0 /*66*/].f_8), 1000f, false, false, false, 0f, 0);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2));
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_1), false);
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_2))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_181[iVar0 /*2*/]), NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iVar0 /*66*/].f_2), false);
								}
							}
						}
					}
					else
					{
						MISC::SET_BIT(&(Global_2699047.f_10), 17);
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[iVar0 /*2*/]))
		{
			return 0;
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_2699047.f_10), 16);
	return 1;
}

int func_55(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x22FA
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_56(bool bParam0)//Position - 0x23A1
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(Local_90.f_2.f_1[bParam0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_90.f_2.f_1[bParam0 /*66*/].f_4);
	if (!BitTest(Local_90.f_1, 11))
	{
		STREAMING::REQUEST_MODEL(Local_90.f_181[bParam0 /*2*/].f_1);
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_90.f_2.f_1[bParam0 /*66*/].f_3))
	{
		MISC::SET_BIT(&(Global_2699047.f_10), 0);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
		{
			MISC::SET_BIT(&(Global_2699047.f_10), 1);
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
			{
				MISC::SET_BIT(&(Global_2699047.f_10), 2);
				Local_90.f_2.f_1[bParam0 /*66*/].f_1 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED"), func_57(bParam0), false, Local_90.f_2.f_1[bParam0 /*66*/].f_3));
				ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_90.f_2.f_1[bParam0 /*66*/].f_1, true);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true);
				OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), false);
				PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1));
				ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), 0f, 0f, -0.2f);
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true, false);
				func_6(bParam0);
				iVar0 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar0, "Crate_Beeps", NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", true, 0);
				Local_90.f_2.f_1[bParam0 /*66*/].f_60 = AUDIO::GET_NETWORK_ID_FROM_SOUND_ID(iVar0);
			}
		}
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_90.f_2.f_1[bParam0 /*66*/].f_4))
	{
		MISC::SET_BIT(&(Global_2699047.f_10), 3);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
		{
			MISC::SET_BIT(&(Global_2699047.f_10), 4);
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_2))
			{
				MISC::SET_BIT(&(Global_2699047.f_10), 5);
				if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
				{
					MISC::SET_BIT(&(Global_2699047.f_10), 6);
					if (func_55(&(Local_90.f_2.f_1[bParam0 /*66*/].f_2), Local_90.f_2.f_1[bParam0 /*66*/].f_4, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true) + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0, 0))
					{
						MISC::SET_BIT(&(Global_2699047.f_10), 7);
						NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_90.f_2.f_1[bParam0 /*66*/].f_2, true);
						if (BitTest(Local_90.f_1, 11))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), true);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), false);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), &(Local_90.f_2.f_1[bParam0 /*66*/].f_14), &(Local_90.f_2.f_1[bParam0 /*66*/].f_8), 1000f, false, false, false, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2));
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_2))
	{
		MISC::SET_BIT(&(Global_2699047.f_10), 8);
		return 1;
	}
	return 0;
}

Vector3 func_57(int iParam0)//Position - 0x271C
{
	struct<3> Var0;
	
	Var0 = { Local_90.f_2.f_68[iParam0 /*104*/].f_1 };
	Var0.f_0 = (Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 7.5f));
	Var0.f_1 = (Var0.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 7.5f));
	Var0.f_2 = (Var0.f_2 + (PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(Var0.f_0, Var0.f_1) + 100f));
	return Var0;
}

int func_58()//Position - 0x2775
{
	int iVar0;
	
	if (func_53())
	{
		iVar0 = 0;
		while (iVar0 < Local_90.f_2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_453[iVar0]))
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_58))
				{
					Local_90.f_2.f_1[iVar0 /*66*/].f_58 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_crate_drop_flare", iLocal_453[iVar0], 0f, 0f, -0.2f, 0f, 0f, 0f, -1, 1f, false, false, false, 1f, 1f, 1f, 0f);
					if (!BitTest(Local_90.f_1, 11))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_90.f_2.f_1[iVar0 /*66*/].f_58, 0.8f, 0.18f, 0.19f, false);
					}
					else
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_90.f_2.f_1[iVar0 /*66*/].f_58, 1f, 0.84f, 0f, false);
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_90.f_2)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_90.f_2.f_1[iVar0 /*66*/].f_58))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_59()//Position - 0x286C
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_455);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_455))
	{
		iVar0 = 0;
		while (iVar0 < Local_90.f_2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_453[iVar0]))
			{
				MISC::CLEAR_AREA(Local_90.f_2.f_68[iVar0 /*104*/].f_1, 1f, false, true, false, false);
				iLocal_453[iVar0] = OBJECT::CREATE_OBJECT(iLocal_455, Local_90.f_2.f_68[iVar0 /*104*/].f_1, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_453[iVar0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_453[iVar0], true);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_90.f_2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_453[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_60()//Position - 0x2920
{
	STREAMING::REQUEST_MODEL(Local_90.f_2.f_1[0 /*66*/].f_3);
	STREAMING::REQUEST_MODEL(Local_90.f_2.f_1[0 /*66*/].f_4);
	if ((STREAMING::HAS_MODEL_LOADED(Local_90.f_2.f_1[0 /*66*/].f_3) && STREAMING::HAS_MODEL_LOADED(Local_90.f_2.f_1[0 /*66*/].f_4)) && func_61())
	{
		return 1;
	}
	return 0;
}

int func_61()//Position - 0x297A
{
	STREAMING::REQUEST_ANIM_DICT(&(Local_90.f_2.f_1[0 /*66*/].f_8));
	if (STREAMING::HAS_ANIM_DICT_LOADED(&(Local_90.f_2.f_1[0 /*66*/].f_8)))
	{
		return 1;
	}
	return 0;
}

int func_62()//Position - 0x29A8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_90.f_2)
	{
		func_74(&(Local_90.f_2.f_68[iVar0 /*104*/]));
		func_73(&(Local_90.f_2.f_68[iVar0 /*104*/]), &(Local_90.f_2.f_173));
		func_63(&(Local_90.f_2.f_1[iVar0 /*66*/]));
		Local_90.f_2.f_1[iVar0 /*66*/].f_60 = -1;
		Local_90.f_2.f_1[iVar0 /*66*/].f_59 = 0;
		iVar0++;
	}
	return 1;
}

void func_63(var uParam0)//Position - 0x2A10
{
	int iVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			uParam0->f_3 = joaat("prop_drug_package");
			uParam0->f_4 = joaat("p_cargo_chute_s");
			uParam0->f_5 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8), "P_cargo_chute_S", 24);
			StringCopy(&(uParam0->f_14), "P_cargo_chute_S_deploy", 32);
			StringCopy(&(uParam0->f_22), "P_cargo_chute_S_crumple", 32);
			uParam0->f_63 = func_17();
			if (!BitTest(Local_90.f_1, 11))
			{
				if (func_50())
				{
					uParam0->f_30 = 0;
				}
				else
				{
					uParam0->f_30 = 1;
				}
			}
			else
			{
				uParam0->f_30 = 8;
			}
			switch (uParam0->f_30)
			{
				case 0:
					uParam0->f_32 = (1000 * MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_40 /* Tunable: CRATE_DROP_CASH_MIN */, Global_262145.f_41 /* Tunable: CRATE_DROP_CASH_MAX */));
					if (uParam0->f_32 > Global_262145.f_46 /* Tunable: CRATE_DROP_CASH_TOTAL_MAX */)
					{
						uParam0->f_32 = Global_262145.f_46 /* Tunable: CRATE_DROP_CASH_TOTAL_MAX */;
					}
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (Global_262145.f_16[iVar0] != 0 && Global_262145.f_27[iVar0] > 0)
					{
						uParam0->f_32 = Global_262145.f_27[iVar0];
						uParam0->f_33 = Global_262145.f_16[iVar0];
						iLocal_458 = Global_262145.f_16[iVar0];
					}
					else if (iVar0 == 1)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_RPG");
					}
					else if (iVar0 == 2)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_HEAVYSNIPER");
					}
					else if (iVar0 == 3)
					{
						uParam0->f_32 = 8;
						uParam0->f_33 = joaat("WEAPON_ASSAULTSHOTGUN");
					}
					else if (iVar0 == 4)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_STICKYBOMB");
					}
					else if (iVar0 == 5)
					{
						uParam0->f_32 = 1;
						uParam0->f_33 = joaat("WEAPON_GRENADELAUNCHER");
					}
					else if (iVar0 == 6)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_ADVANCEDRIFLE");
					}
					else if (iVar0 == 7)
					{
						uParam0->f_32 = 2;
						uParam0->f_33 = joaat("WEAPON_COMBATMG");
					}
					else if (iVar0 == 8)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_MOLOTOV");
					}
					else if (iVar0 == 9)
					{
						uParam0->f_32 = 4;
						uParam0->f_33 = joaat("WEAPON_GRENADE");
					}
					else
					{
						uParam0->f_32 = 1;
						uParam0->f_33 = joaat("WEAPON_MINIGUN");
					}
					iLocal_458 = uParam0->f_33;
					break;
				
				case 8:
					if (Global_262145.f_42 /* Tunable: CRATE_DROP_SPECIAL_CASH */ > 0)
					{
						uParam0->f_32 = Global_262145.f_42 /* Tunable: CRATE_DROP_SPECIAL_CASH */;
					}
					else
					{
						uParam0->f_32 = 5000;
					}
					if (Global_262145.f_38 /* Tunable: CRATE_DROP_SPECIAL_WEAPON */ != 0 && Global_262145.f_39 /* Tunable: CRATE_DROP_SPEICAL_WEAPON_CLIPS */ > 0)
					{
						uParam0->f_33 = Global_262145.f_38 /* Tunable: CRATE_DROP_SPECIAL_WEAPON */;
					}
					else
					{
						uParam0->f_33 = joaat("WEAPON_MINIGUN");
					}
					iLocal_458 = uParam0->f_33;
					iLocal_459 = 0;
					if (func_66(joaat("MP_M_Freemode_01"), Global_262145.f_67 /* Tunable: CRATE_DROP_CLOTHING_MALE */, &(uParam0->f_34), &(uParam0->f_35)))
					{
						if (func_65(PLAYER::PLAYER_ID()))
						{
							iLocal_461[0] = Global_262145.f_67 /* Tunable: CRATE_DROP_CLOTHING_MALE */;
						}
					}
					if (func_66(joaat("MP_F_Freemode_01"), Global_262145.f_68 /* Tunable: CRATE_DROP_CLOTHING_FEMALE */, &(uParam0->f_36), &(uParam0->f_37)))
					{
						if (!func_65(PLAYER::PLAYER_ID()))
						{
							iLocal_461[0] = Global_262145.f_68 /* Tunable: CRATE_DROP_CLOTHING_FEMALE */;
						}
					}
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (func_66(joaat("MP_M_Freemode_01"), func_64(iVar1, 1), &(uParam0->f_38[iVar1]), &(uParam0->f_43[iVar1])))
						{
							if (func_65(PLAYER::PLAYER_ID()))
							{
								iLocal_461[iVar1 + 1] = func_64(iVar1, 1);
							}
						}
						if (func_66(joaat("MP_F_Freemode_01"), func_64(iVar1, 0), &(uParam0->f_48[iVar1]), &(uParam0->f_53[iVar1])))
						{
							if (!func_65(PLAYER::PLAYER_ID()))
							{
								iLocal_461[iVar1 + 1] = func_64(iVar1, 0);
							}
						}
						iVar1++;
					}
					break;
			}
			break;
	}
}

int func_64(int iParam0, bool bParam1)//Position - 0x2D76
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return Global_262145.f_10718 /* Tunable: CRATEDROPCLOTHINGMALE_COLLECTION_1 */;
			}
			else
			{
				return Global_262145.f_10719 /* Tunable: CRATEDROPCLOTHINGFEMALE_COLLECTION_1 */;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return Global_262145.f_10720 /* Tunable: CRATEDROPCLOTHINGMALE_COLLECTION_2 */;
			}
			else
			{
				return Global_262145.f_10721 /* Tunable: CRATEDROPCLOTHINGFEMALE_COLLECTION_2 */;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return Global_262145.f_10722 /* Tunable: CRATEDROPCLOTHINGMALE_COLLECTION_3 */;
			}
			else
			{
				return Global_262145.f_10723 /* Tunable: CRATEDROPCLOTHINGFEMALE_COLLECTION_3 */;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return Global_262145.f_10724 /* Tunable: CRATEDROPCLOTHINGMALE_COLLECTION_4 */;
			}
			else
			{
				return Global_262145.f_10725 /* Tunable: CRATEDROPCLOTHINGFEMALE_COLLECTION_4 */;
			}
			break;
	}
	if (bParam1)
	{
		return Global_262145.f_10718 /* Tunable: CRATEDROPCLOTHINGMALE_COLLECTION_1 */;
	}
	return Global_262145.f_10719 /* Tunable: CRATEDROPCLOTHINGFEMALE_COLLECTION_1 */;
}

int func_65(int iParam0)//Position - 0x2E2F
{
	if (!func_27(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657971[iParam0 /*465*/].f_241;
}

int func_66(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2E5F
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	struct<2> Var19;
	struct<2> Var36;
	int iVar51;
	
	if ((iParam1 != -1 && iParam1 != 0) && iParam1 != joaat("0"))
	{
		if (iParam0 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = 3;
			iVar1 = 3;
		}
		else
		{
			iVar0 = 4;
			iVar1 = 4;
		}
		FILES::GET_SHOP_PED_COMPONENT(iParam1, &Var2);
		if (Var2.f_1 == iParam1)
		{
			*uParam2 = Var2.f_6;
			*uParam3 = func_68(iParam0, iParam1, *uParam2, iVar0);
			return 1;
		}
		FILES::GET_SHOP_PED_PROP(iParam1, &Var19);
		if (Var19.f_1 == iParam1)
		{
			*uParam2 = 14;
			*uParam3 = func_68(iParam0, iParam1, *uParam2, iVar0);
			return 1;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam1, &Var36);
		if (Var36.f_1 == iParam1)
		{
			*uParam2 = 12;
			*uParam3 = func_68(iParam0, Var36.f_1, *uParam2, iVar0);
			return 1;
		}
		iVar51 = func_67(iParam1, iVar1);
		if (iVar51 != -1)
		{
			*uParam3 = iVar51;
			*uParam2 = 10;
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x2F3E
{
	int iVar0;
	
	iVar0 = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F60
{
	struct<2> Var0;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == 12)
	{
		iVar16 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar15 = 0;
		while (iVar15 < iVar16)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_72(iParam0) + iVar15);
			}
			iVar15++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar17 = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
		if (iVar17 != -1)
		{
			return (func_71(iParam0) + iVar17);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_70(iParam2));
		iVar18 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
		if (iVar18 != -1)
		{
			return (func_69(iParam0, func_70(iParam2)) + iVar18);
		}
	}
	return -99;
}

int func_69(int iParam0, int iParam1)//Position - 0x301B
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_70(int iParam0)//Position - 0x33C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x3472
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
			break;
		
		case joaat("Player_One"):
			return 175;
			break;
		
		case joaat("Player_Two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
			break;
		
		case joaat("MP_F_Freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_72(int iParam0)//Position - 0x34D3
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 53;
			break;
		
		case joaat("Player_One"):
			return 47;
			break;
		
		case joaat("Player_Two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
			break;
		
		case joaat("MP_F_Freemode_01"):
			return 28;
			break;
	}
	return -99;
}

void func_73(var uParam0, var uParam1)//Position - 0x3532
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == 6)
	{
		*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	}
	switch (*uParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("G_M_Y_MexGoon_03");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_MICROSMG");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_ASSAULTRIFLE");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("cavalcade");
				iVar0++;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("G_M_Y_Lost_03");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_SAWNOFFSHOTGUN");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_ASSAULTRIFLE");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("hexer");
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("G_M_Y_FamCA_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_MICROSMG");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_PUMPSHOTGUN");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("baller");
				iVar0++;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("MP_G_M_Pros_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_SMG");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_COMBATMG");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("granger");
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("G_M_M_ChiGoon_01");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_SMG");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_CARBINERIFLE");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("jackal");
				iVar0++;
			}
			break;
		
		case 5:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				uParam0->f_5[iVar0 /*18*/].f_1 = joaat("A_M_M_Hillbilly_02");
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar1 < 33)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_SAWNOFFSHOTGUN");
				}
				else if (iVar1 > 66)
				{
					uParam0->f_5[iVar0 /*18*/].f_14 = joaat("WEAPON_COMBATMG");
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				uParam0->f_78[iVar0 /*17*/].f_1 = joaat("rebel");
				iVar0++;
			}
			break;
	}
}

void func_74(var uParam0)//Position - 0x3876
{
	uParam0->f_96 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
	Local_90.f_178 = (Local_90.f_178 + uParam0->f_96);
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2320.8955f, 1452.7068f, 62.2404f };
			uParam0->f_5[0 /*18*/].f_5 = 354.4594f;
			uParam0->f_5[1 /*18*/].f_2 = { 2353.5745f, 1510.1249f, 53.1555f };
			uParam0->f_5[1 /*18*/].f_5 = 98.8266f;
			uParam0->f_5[2 /*18*/].f_2 = { 2294.4844f, 1508.458f, 61.1572f };
			uParam0->f_5[2 /*18*/].f_5 = 284.4314f;
			uParam0->f_5[3 /*18*/].f_2 = { 2287.7532f, 1476.692f, 69.8952f };
			uParam0->f_5[3 /*18*/].f_5 = 313.3356f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2330.363f, 1286.4026f, 65.6944f };
			uParam0->f_78[0 /*17*/].f_12[0] = 1.8055f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2380.0522f, 1486.7324f, 39.3839f };
			uParam0->f_78[0 /*17*/].f_12[1] = 173.8279f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2212.9277f, 1728.1342f, 88.8012f };
			uParam0->f_78[0 /*17*/].f_12[2] = 261.9384f;
			uParam0->f_97 = { 3319.8752f, 1396.2985f, 177.9103f };
			uParam0->f_100 = 84.3397f;
			break;
		
		case 1:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1063.9834f, 2338.2354f, 48.6123f };
			uParam0->f_5[0 /*18*/].f_5 = 350.1455f;
			uParam0->f_5[1 /*18*/].f_2 = { 1008.1833f, 2370.161f, 54.5713f };
			uParam0->f_5[1 /*18*/].f_5 = 265.6562f;
			uParam0->f_5[2 /*18*/].f_2 = { 1128.2953f, 2345.0315f, 52.2852f };
			uParam0->f_5[2 /*18*/].f_5 = 72.3582f;
			uParam0->f_5[3 /*18*/].f_2 = { 1075.6848f, 2394.358f, 51.4952f };
			uParam0->f_5[3 /*18*/].f_5 = 178.4742f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 934.3832f, 2377.9116f, 45.5848f };
			uParam0->f_78[0 /*17*/].f_12[0] = 302.7182f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1161.8107f, 2398.7354f, 56.8772f };
			uParam0->f_78[0 /*17*/].f_12[1] = 3.897f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1042.2733f, 2432.6003f, 44.1508f };
			uParam0->f_78[0 /*17*/].f_12[2] = 275.9303f;
			uParam0->f_97 = { -361.9944f, 2414.3076f, 471.9749f };
			uParam0->f_100 = 263.7351f;
			break;
		
		case 2:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1952.5647f, 2589.5254f, 1.6831f };
			uParam0->f_5[0 /*18*/].f_5 = 113.619f;
			uParam0->f_5[1 /*18*/].f_2 = { -1981.1171f, 2631.698f, 1.702f };
			uParam0->f_5[1 /*18*/].f_5 = 183.9359f;
			uParam0->f_5[2 /*18*/].f_2 = { -1992.6781f, 2632.7166f, 1.9292f };
			uParam0->f_5[2 /*18*/].f_5 = 197.8271f;
			uParam0->f_5[3 /*18*/].f_2 = { -1996.6942f, 2527.2024f, 1.8938f };
			uParam0->f_5[3 /*18*/].f_5 = 337.1221f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -2214.6255f, 2820.1028f, 2.034f };
			uParam0->f_78[0 /*17*/].f_12[0] = 215.3564f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1770.4023f, 2736.6287f, 4.4394f };
			uParam0->f_78[0 /*17*/].f_12[1] = 152.8846f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -2015.04f, 2702.4565f, 2.4495f };
			uParam0->f_78[0 /*17*/].f_12[2] = 273.5316f;
			uParam0->f_97 = { -3106.7798f, 2567.887f, 200f };
			uParam0->f_100 = 266.9502f;
			break;
		
		case 3:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1892.2335f, 592.2417f, 189.3747f };
			uParam0->f_5[0 /*18*/].f_5 = 249.6456f;
			uParam0->f_5[1 /*18*/].f_2 = { 1927.4362f, 591.7188f, 177.8152f };
			uParam0->f_5[1 /*18*/].f_5 = 159.7268f;
			uParam0->f_5[2 /*18*/].f_2 = { 1906.4452f, 577.1587f, 174.8717f };
			uParam0->f_5[2 /*18*/].f_5 = 198.8829f;
			uParam0->f_5[3 /*18*/].f_2 = { 1896.5363f, 584.7686f, 177.4033f };
			uParam0->f_5[3 /*18*/].f_5 = 211.7178f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1935.6045f, 669.2496f, 184.7174f };
			uParam0->f_78[0 /*17*/].f_12[0] = 224.7734f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1865.4637f, 478.8249f, 170.5025f };
			uParam0->f_78[0 /*17*/].f_12[1] = 261.0713f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1796.1036f, 298.5035f, 170.3443f };
			uParam0->f_78[0 /*17*/].f_12[2] = 337.5981f;
			uParam0->f_97 = { 2961.0596f, -102.1822f, 483.754f };
			uParam0->f_100 = 67.1375f;
			break;
		
		case 4:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1460.8676f, 1088.2786f, 113.334f };
			uParam0->f_5[0 /*18*/].f_5 = 10.3573f;
			uParam0->f_5[1 /*18*/].f_2 = { 1455.5161f, 1133.9879f, 113.334f };
			uParam0->f_5[1 /*18*/].f_5 = 186.5074f;
			uParam0->f_5[2 /*18*/].f_2 = { 1482.7466f, 1130.0945f, 113.334f };
			uParam0->f_5[2 /*18*/].f_5 = 116.289f;
			uParam0->f_5[3 /*18*/].f_2 = { 1464.9148f, 1134.7462f, 113.3225f };
			uParam0->f_5[3 /*18*/].f_5 = 181.0186f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1287.3431f, 1210.8739f, 106.6704f };
			uParam0->f_78[0 /*17*/].f_12[0] = 180.3493f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1310.3473f, 1073.4104f, 104.5521f };
			uParam0->f_78[0 /*17*/].f_12[1] = 2.8196f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1468.254f, 1176.5675f, 113.334f };
			uParam0->f_78[0 /*17*/].f_12[2] = 88.018f;
			uParam0->f_97 = { 2718.0764f, 844.5446f, 650.5612f };
			uParam0->f_100 = 86.5865f;
			break;
		
		case 5:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 781.7131f, 1296.3704f, 360.3558f };
			uParam0->f_5[0 /*18*/].f_5 = 298.7285f;
			uParam0->f_5[1 /*18*/].f_2 = { 817.8524f, 1342.5442f, 356.6494f };
			uParam0->f_5[1 /*18*/].f_5 = 2.4516f;
			uParam0->f_5[2 /*18*/].f_2 = { 837.4887f, 1296.438f, 363.3529f };
			uParam0->f_5[2 /*18*/].f_5 = 235.0403f;
			uParam0->f_5[3 /*18*/].f_2 = { 779.8301f, 1314.8702f, 359.3835f };
			uParam0->f_5[3 /*18*/].f_5 = 258.0066f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 842.7767f, 1338.9281f, 351.54f };
			uParam0->f_78[0 /*17*/].f_12[0] = 219.8066f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 834.7274f, 1247.0288f, 352.0706f };
			uParam0->f_78[0 /*17*/].f_12[1] = 289.2027f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 675.3398f, 1351.7742f, 327.9539f };
			uParam0->f_78[0 /*17*/].f_12[2] = 256.7171f;
			uParam0->f_97 = { 869.2994f, 2807.8108f, 770.8076f };
			uParam0->f_100 = 178.8456f;
			break;
		
		case 6:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1422.1013f, -2184.8596f, 61.8352f };
			uParam0->f_5[0 /*18*/].f_5 = 30.6842f;
			uParam0->f_5[1 /*18*/].f_2 = { 1394.916f, -2087.5803f, 53.4358f };
			uParam0->f_5[1 /*18*/].f_5 = 201.2894f;
			uParam0->f_5[2 /*18*/].f_2 = { 1391.63f, -2205.3735f, 60.4674f };
			uParam0->f_5[2 /*18*/].f_5 = 18.653f;
			uParam0->f_5[3 /*18*/].f_2 = { 1357.7871f, -2191.3162f, 58.6791f };
			uParam0->f_5[3 /*18*/].f_5 = 108.6812f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1347.645f, -2021.752f, 48.4312f };
			uParam0->f_78[0 /*17*/].f_12[0] = 298.7371f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1504.5457f, -1982.4602f, 69.9607f };
			uParam0->f_78[0 /*17*/].f_12[1] = 75.8727f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1524.3169f, -2293.6086f, 72.1833f };
			uParam0->f_78[0 /*17*/].f_12[2] = 30.4687f;
			uParam0->f_97 = { 2283.1023f, -1684.9219f, 109.8941f };
			uParam0->f_100 = 130.1306f;
			break;
		
		case 7:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1139.8286f, -3134.4072f, 15.0016f };
			uParam0->f_5[0 /*18*/].f_5 = 104.6551f;
			uParam0->f_5[1 /*18*/].f_2 = { 1139.6536f, -3149.986f, 22.1254f };
			uParam0->f_5[1 /*18*/].f_5 = 86.9869f;
			uParam0->f_5[2 /*18*/].f_2 = { 1083.7417f, -3163.0815f, 4.901f };
			uParam0->f_5[2 /*18*/].f_5 = 312.9454f;
			uParam0->f_5[3 /*18*/].f_2 = { 1106.5582f, -3120.7446f, 4.901f };
			uParam0->f_5[3 /*18*/].f_5 = 186.7521f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 983.3778f, -3091.903f, 4.9009f };
			uParam0->f_78[0 /*17*/].f_12[0] = 181.5385f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1241.7163f, -3095.0974f, 4.9016f };
			uParam0->f_78[0 /*17*/].f_12[1] = 88.178f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1020.3882f, -3218.3372f, 4.888f };
			uParam0->f_78[0 /*17*/].f_12[2] = 270.4624f;
			uParam0->f_97 = { 1082.7615f, -3913.5383f, 259.5345f };
			uParam0->f_100 = 357.1163f;
			break;
		
		case 8:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 550.9495f, -3046.577f, 12.2886f };
			uParam0->f_5[0 /*18*/].f_5 = 8.8327f;
			uParam0->f_5[1 /*18*/].f_2 = { 542.4202f, -3002.079f, 5.0443f };
			uParam0->f_5[1 /*18*/].f_5 = 197.559f;
			uParam0->f_5[2 /*18*/].f_2 = { 567.1848f, -3005.1763f, 22.0949f };
			uParam0->f_5[2 /*18*/].f_5 = 120.1645f;
			uParam0->f_5[3 /*18*/].f_2 = { 520.8234f, -3053.3242f, 5.0696f };
			uParam0->f_5[3 /*18*/].f_5 = 0.38f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 656.7521f, -2960.7344f, 5.0444f };
			uParam0->f_78[0 /*17*/].f_12[0] = 158.5572f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 586.759f, -2960.0942f, 5.0444f };
			uParam0->f_78[0 /*17*/].f_12[1] = 182.1605f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 524.9021f, -2962.5217f, 5.0453f };
			uParam0->f_78[0 /*17*/].f_12[2] = 175.0801f;
			uParam0->f_97 = { -378.6478f, -3677.8054f, 291.4673f };
			uParam0->f_100 = 314.9697f;
			break;
		
		case 9:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1409.3347f, -734.6124f, 66.6396f };
			uParam0->f_5[0 /*18*/].f_5 = 93.3841f;
			uParam0->f_5[1 /*18*/].f_2 = { 1395.7267f, -701.6596f, 66.4683f };
			uParam0->f_5[1 /*18*/].f_5 = 140.4233f;
			uParam0->f_5[2 /*18*/].f_2 = { 1383.7318f, -776.3151f, 66.4024f };
			uParam0->f_5[2 /*18*/].f_5 = 11.4037f;
			uParam0->f_5[3 /*18*/].f_2 = { 1361.3036f, -697.9785f, 65.3824f };
			uParam0->f_5[3 /*18*/].f_5 = 208.016f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1237.5015f, -761.1631f, 58.9825f };
			uParam0->f_78[0 /*17*/].f_12[0] = 287.8288f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1268.0238f, -615.4786f, 67.8305f };
			uParam0->f_78[0 /*17*/].f_12[1] = 208.6499f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1245.5123f, -711.1078f, 61.9082f };
			uParam0->f_78[0 /*17*/].f_12[2] = 180.0621f;
			uParam0->f_97 = { 2409.2908f, -1098.3512f, 496.8289f };
			uParam0->f_100 = 70.7044f;
			break;
		
		case 10:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1103.402f, 89.1884f, 79.8909f };
			uParam0->f_5[0 /*18*/].f_5 = 323.525f;
			uParam0->f_5[1 /*18*/].f_2 = { 1193.0503f, 149.3631f, 79.5353f };
			uParam0->f_5[1 /*18*/].f_5 = 115.8848f;
			uParam0->f_5[2 /*18*/].f_2 = { 1144.8881f, 82.5526f, 79.8909f };
			uParam0->f_5[2 /*18*/].f_5 = 345.2191f;
			uParam0->f_5[3 /*18*/].f_2 = { 1106.9523f, 128.1926f, 80.8914f };
			uParam0->f_5[3 /*18*/].f_5 = 255.009f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1065.0677f, 241.121f, 79.8555f };
			uParam0->f_78[0 /*17*/].f_12[0] = 326.5492f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 980.4287f, -68.106f, 73.9594f };
			uParam0->f_78[0 /*17*/].f_12[1] = 297.0119f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 967.2383f, 184.9293f, 79.8308f };
			uParam0->f_78[0 /*17*/].f_12[2] = 261.3374f;
			uParam0->f_97 = { 1742.1299f, 1556.5276f, 326.8489f };
			uParam0->f_100 = 158.5592f;
			break;
		
		case 11:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1725.837f, 3028.0696f, 61.2235f };
			uParam0->f_5[0 /*18*/].f_5 = 67.0086f;
			uParam0->f_5[1 /*18*/].f_2 = { 1609.8815f, 3047.9028f, 46.7991f };
			uParam0->f_5[1 /*18*/].f_5 = 263.2002f;
			uParam0->f_5[2 /*18*/].f_2 = { 1674.1287f, 3113.69f, 43.6611f };
			uParam0->f_5[2 /*18*/].f_5 = 30.7465f;
			uParam0->f_5[3 /*18*/].f_2 = { 1731.5975f, 3019.9277f, 61.4284f };
			uParam0->f_5[3 /*18*/].f_5 = 157.5899f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1741.0596f, 3156.46f, 42.1906f };
			uParam0->f_78[0 /*17*/].f_12[0] = 110.1921f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1601.5193f, 2890.423f, 55.9619f };
			uParam0->f_78[0 /*17*/].f_12[1] = 318.1643f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1571.932f, 3092.0444f, 39.8558f };
			uParam0->f_78[0 /*17*/].f_12[2] = 297.0444f;
			uParam0->f_97 = { 768.1101f, 4080.211f, 438.6512f };
			uParam0->f_100 = 199.9345f;
			break;
		
		case 12:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1002.5171f, 4324.697f, 39.1856f };
			uParam0->f_5[0 /*18*/].f_5 = 3.4408f;
			uParam0->f_5[1 /*18*/].f_2 = { 1019.2786f, 4405.1626f, 42.1815f };
			uParam0->f_5[1 /*18*/].f_5 = 73.8213f;
			uParam0->f_5[2 /*18*/].f_2 = { 995.6335f, 4394.1333f, 47.8651f };
			uParam0->f_5[2 /*18*/].f_5 = 355.3108f;
			uParam0->f_5[3 /*18*/].f_2 = { 972.6747f, 4352.731f, 43.7555f };
			uParam0->f_5[3 /*18*/].f_5 = 282.5687f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1125.1548f, 4429.3887f, 62.2158f };
			uParam0->f_78[0 /*17*/].f_12[0] = 82.7581f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 885.6168f, 4459.2446f, 50.8314f };
			uParam0->f_78[0 /*17*/].f_12[1] = 239.2189f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 993.9852f, 4460.117f, 49.8088f };
			uParam0->f_78[0 /*17*/].f_12[2] = 260.9623f;
			uParam0->f_97 = { -865.817f, 4403.5776f, 604.2233f };
			uParam0->f_100 = 268.7136f;
			break;
		
		case 13:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1714.584f, 4954.133f, 7.2482f };
			uParam0->f_5[0 /*18*/].f_5 = 116.3591f;
			uParam0->f_5[1 /*18*/].f_2 = { -1689.0546f, 4954.641f, 10.6516f };
			uParam0->f_5[1 /*18*/].f_5 = 102.0189f;
			uParam0->f_5[2 /*18*/].f_2 = { -1714.6119f, 4982.8916f, 7.9491f };
			uParam0->f_5[2 /*18*/].f_5 = 148.2065f;
			uParam0->f_5[3 /*18*/].f_2 = { -1733.6293f, 4983.355f, 5.2886f };
			uParam0->f_5[3 /*18*/].f_5 = 172.3626f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1850.0844f, 4774.3184f, 3.2752f };
			uParam0->f_78[0 /*17*/].f_12[0] = 22.5589f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1582.0511f, 5057.1255f, 33.7903f };
			uParam0->f_78[0 /*17*/].f_12[1] = 139.2498f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1555.5548f, 4921.68f, 60.363f };
			uParam0->f_78[0 /*17*/].f_12[2] = 307.6337f;
			uParam0->f_97 = { -688.8508f, 7607.529f, 349.1056f };
			uParam0->f_100 = 172.9232f;
			break;
		
		case 14:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -2405.702f, 4210.707f, 10.5095f };
			uParam0->f_5[0 /*18*/].f_5 = 146.9088f;
			uParam0->f_5[1 /*18*/].f_2 = { -2382.9556f, 4205.869f, 21.6201f };
			uParam0->f_5[1 /*18*/].f_5 = 121.7438f;
			uParam0->f_5[2 /*18*/].f_2 = { -2407.6528f, 4137.3716f, 17.563f };
			uParam0->f_5[2 /*18*/].f_5 = 35.8796f;
			uParam0->f_5[3 /*18*/].f_2 = { -2375.4534f, 4184.967f, 22.8146f };
			uParam0->f_5[3 /*18*/].f_5 = 93.1919f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -2309.1948f, 4291.07f, 30.5234f };
			uParam0->f_78[0 /*17*/].f_12[0] = 139.4109f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -2479.676f, 4007.82f, 5.868f };
			uParam0->f_78[0 /*17*/].f_12[1] = 345.5383f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -2368.0415f, 4077.4194f, 30.5281f };
			uParam0->f_78[0 /*17*/].f_12[2] = 326.4518f;
			uParam0->f_97 = { -3820.0557f, 4296.7773f, 220.0733f };
			uParam0->f_100 = 266.5256f;
			break;
		
		case 15:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -3131.2861f, 753.4323f, 5.3342f };
			uParam0->f_5[0 /*18*/].f_5 = 94.0004f;
			uParam0->f_5[1 /*18*/].f_2 = { -3177.3867f, 790.2584f, 3.0064f };
			uParam0->f_5[1 /*18*/].f_5 = 172.8542f;
			uParam0->f_5[2 /*18*/].f_2 = { -3183.7268f, 787.8382f, 2.8265f };
			uParam0->f_5[2 /*18*/].f_5 = 203.5908f;
			uParam0->f_5[3 /*18*/].f_2 = { -3140.7498f, 724.6806f, 1.2483f };
			uParam0->f_5[3 /*18*/].f_5 = 56.6538f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -3116.0188f, 647.4692f, 1.1468f };
			uParam0->f_78[0 /*17*/].f_12[0] = 41.7007f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -3235.4324f, 892.0785f, 2.3308f };
			uParam0->f_78[0 /*17*/].f_12[1] = 169.4398f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -3170.898f, 944.9553f, 13.5189f };
			uParam0->f_78[0 /*17*/].f_12[2] = 181.8572f;
			uParam0->f_97 = { -3996.097f, 1914.2437f, 219.9833f };
			uParam0->f_100 = 232.6708f;
			break;
		
		case 16:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1744.4012f, -966.3932f, 6.4026f };
			uParam0->f_5[0 /*18*/].f_5 = 300.0445f;
			uParam0->f_5[1 /*18*/].f_2 = { -1721.4326f, -1013.8647f, 4.2361f };
			uParam0->f_5[1 /*18*/].f_5 = 124.3674f;
			uParam0->f_5[2 /*18*/].f_2 = { -1710.1141f, -999.4743f, 5.1064f };
			uParam0->f_5[2 /*18*/].f_5 = 60.6101f;
			uParam0->f_5[3 /*18*/].f_2 = { -1673.7023f, -992.2216f, 6.3501f };
			uParam0->f_5[3 /*18*/].f_5 = 53.7375f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1708.4484f, -868.3484f, 7.4161f };
			uParam0->f_78[0 /*17*/].f_12[0] = 144.709f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1683.4683f, -1047.0608f, 3.2051f };
			uParam0->f_78[0 /*17*/].f_12[1] = 55.3434f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1619.0638f, -905.6519f, 7.9512f };
			uParam0->f_78[0 /*17*/].f_12[2] = 141.2538f;
			uParam0->f_97 = { -1902.6805f, -1889.5682f, 114.6166f };
			uParam0->f_100 = 358.7342f;
			break;
		
		case 17:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -813.9835f, 835.9732f, 201.4461f };
			uParam0->f_5[0 /*18*/].f_5 = 191.4548f;
			uParam0->f_5[1 /*18*/].f_2 = { -799.1475f, 838.1729f, 203.5733f };
			uParam0->f_5[1 /*18*/].f_5 = 198.4863f;
			uParam0->f_5[2 /*18*/].f_2 = { -833.4322f, 897.7642f, 212.0651f };
			uParam0->f_5[2 /*18*/].f_5 = 199.7569f;
			uParam0->f_5[3 /*18*/].f_2 = { -798.2678f, 886.1758f, 202.1105f };
			uParam0->f_5[3 /*18*/].f_5 = 143.6434f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -739.907f, 822.6394f, 213.0717f };
			uParam0->f_78[0 /*17*/].f_12[0] = 38.4355f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -869.4866f, 797.1853f, 189.8626f };
			uParam0->f_78[0 /*17*/].f_12[1] = 294.5416f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -707.6155f, 897.8837f, 228.5368f };
			uParam0->f_78[0 /*17*/].f_12[2] = 178.5833f;
			uParam0->f_97 = { -2203.2844f, 1580.0496f, 569.6727f };
			uParam0->f_100 = 228.5565f;
			break;
		
		case 18:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -423.9036f, 1226.6632f, 324.7588f };
			uParam0->f_5[0 /*18*/].f_5 = 232.6687f;
			uParam0->f_5[1 /*18*/].f_2 = { -382.1511f, 1228.8767f, 324.7606f };
			uParam0->f_5[1 /*18*/].f_5 = 156.8766f;
			uParam0->f_5[2 /*18*/].f_2 = { -385.6131f, 1187.1063f, 324.7588f };
			uParam0->f_5[2 /*18*/].f_5 = 154.8572f;
			uParam0->f_5[3 /*18*/].f_2 = { -429.266f, 1214.5746f, 324.7588f };
			uParam0->f_5[3 /*18*/].f_5 = 261.6925f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -509.5673f, 1228.719f, 320.3937f };
			uParam0->f_78[0 /*17*/].f_12[0] = 165.9902f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -321.2862f, 1201.1703f, 320.5964f };
			uParam0->f_78[0 /*17*/].f_12[1] = 132.4112f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -345.4358f, 1303.3269f, 335.4418f };
			uParam0->f_78[0 /*17*/].f_12[2] = 178.3955f;
			uParam0->f_97 = { -1468.0973f, 2146.7556f, 764.3748f };
			uParam0->f_100 = 233.1176f;
			break;
		
		case 19:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 721.5088f, -1510.8307f, 18.6862f };
			uParam0->f_5[0 /*18*/].f_5 = 196.9149f;
			uParam0->f_5[1 /*18*/].f_2 = { 753.9851f, -1520.3639f, 19.5089f };
			uParam0->f_5[1 /*18*/].f_5 = 100.5212f;
			uParam0->f_5[2 /*18*/].f_2 = { 703.6952f, -1539.9088f, 8.7089f };
			uParam0->f_5[2 /*18*/].f_5 = 114.8652f;
			uParam0->f_5[3 /*18*/].f_2 = { 733.1053f, -1535.687f, 18.647f };
			uParam0->f_5[3 /*18*/].f_5 = 173.8219f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 667.9203f, -1410.7107f, 8.7295f };
			uParam0->f_78[0 /*17*/].f_12[0] = 196.4158f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 787.4294f, -1396.0847f, 26.0718f };
			uParam0->f_78[0 /*17*/].f_12[1] = 179.2513f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 653.0773f, -1731.3872f, 8.6921f };
			uParam0->f_78[0 /*17*/].f_12[2] = 354.5085f;
			uParam0->f_97 = { 2206.5686f, -3593.5542f, 346.688f };
			uParam0->f_100 = 50.9998f;
			break;
		
		case 20:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1148.5785f, -1295.3044f, 33.6676f };
			uParam0->f_5[0 /*18*/].f_5 = 178.5031f;
			uParam0->f_5[1 /*18*/].f_2 = { 1124.733f, -1303.8645f, 33.7184f };
			uParam0->f_5[1 /*18*/].f_5 = 281.0662f;
			uParam0->f_5[2 /*18*/].f_2 = { 1149.9839f, -1280.695f, 33.6471f };
			uParam0->f_5[2 /*18*/].f_5 = 356.4931f;
			uParam0->f_5[3 /*18*/].f_2 = { 1155.6708f, -1277.5096f, 39.4394f };
			uParam0->f_5[3 /*18*/].f_5 = 134.7168f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1175.2524f, -1284.3097f, 33.7757f };
			uParam0->f_78[0 /*17*/].f_12[0] = 179.5388f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1179.9785f, -1373.488f, 33.87f };
			uParam0->f_78[0 /*17*/].f_12[1] = 75.5108f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1251.8861f, -1335.8915f, 34.2108f };
			uParam0->f_78[0 /*17*/].f_12[2] = 351.2707f;
			uParam0->f_97 = { 2534.7761f, -1420.1954f, 451.8415f };
			uParam0->f_100 = 83.05f;
			break;
		
		case 21:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2932.4224f, 790.123f, 24.9383f };
			uParam0->f_5[0 /*18*/].f_5 = 108.1342f;
			uParam0->f_5[1 /*18*/].f_2 = { 2927.7583f, 769.4883f, 23.6032f };
			uParam0->f_5[1 /*18*/].f_5 = 105.6544f;
			uParam0->f_5[2 /*18*/].f_2 = { 2880.078f, 715.3883f, 30.4501f };
			uParam0->f_5[2 /*18*/].f_5 = 341.9437f;
			uParam0->f_5[3 /*18*/].f_2 = { 2896.4841f, 764.3184f, 18.5266f };
			uParam0->f_5[3 /*18*/].f_5 = 326.4059f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2636.0046f, 543.1351f, 94.625f };
			uParam0->f_78[0 /*17*/].f_12[0] = 0.7481f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2619.153f, 639.2633f, 93.4987f };
			uParam0->f_78[0 /*17*/].f_12[1] = 18.6567f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2554.6047f, 405.6805f, 107.4526f };
			uParam0->f_78[0 /*17*/].f_12[2] = 312.7786f;
			uParam0->f_97 = { 3882.8372f, 1694.2062f, 365.5233f };
			uParam0->f_100 = 145.8588f;
			break;
		
		case 22:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2790.8098f, 2842.2656f, 35.1792f };
			uParam0->f_5[0 /*18*/].f_5 = 41.1631f;
			uParam0->f_5[1 /*18*/].f_2 = { 2796.6125f, 2874.4026f, 39.164f };
			uParam0->f_5[1 /*18*/].f_5 = 131.3994f;
			uParam0->f_5[2 /*18*/].f_2 = { 2778.4944f, 2831.8777f, 39.7195f };
			uParam0->f_5[2 /*18*/].f_5 = 35.0007f;
			uParam0->f_5[3 /*18*/].f_2 = { 2756.6267f, 2855.263f, 36.8614f };
			uParam0->f_5[3 /*18*/].f_5 = 279.8899f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2664.1719f, 2850.17f, 38.4106f };
			uParam0->f_78[0 /*17*/].f_12[0] = 252.0351f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2619.735f, 2726.4878f, 40.1266f };
			uParam0->f_78[0 /*17*/].f_12[1] = 286.5096f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2642.5693f, 2948.2598f, 37.3319f };
			uParam0->f_78[0 /*17*/].f_12[2] = 230.3495f;
			uParam0->f_97 = { 3896.2703f, 2191.8853f, 350.8098f };
			uParam0->f_100 = 74.6998f;
			break;
		
		case 23:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2466.8137f, 3784.9656f, 39.9763f };
			uParam0->f_5[0 /*18*/].f_5 = 150.9192f;
			uParam0->f_5[1 /*18*/].f_2 = { 2491.5894f, 3769.751f, 43.3539f };
			uParam0->f_5[1 /*18*/].f_5 = 88.8265f;
			uParam0->f_5[2 /*18*/].f_2 = { 2477.978f, 3761.751f, 40.9253f };
			uParam0->f_5[2 /*18*/].f_5 = 24.5861f;
			uParam0->f_5[3 /*18*/].f_2 = { 2450.1968f, 3755.6726f, 40.9738f };
			uParam0->f_5[3 /*18*/].f_5 = 67.7862f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2310.0176f, 3748.419f, 36.9374f };
			uParam0->f_78[0 /*17*/].f_12[0] = 311.6797f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2429.7969f, 3874.4253f, 36.0097f };
			uParam0->f_78[0 /*17*/].f_12[1] = 142.634f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2301.9558f, 3735.456f, 36.7863f };
			uParam0->f_78[0 /*17*/].f_12[2] = 339.1366f;
			uParam0->f_97 = { 1528.498f, 5012.703f, 555.9046f };
			uParam0->f_100 = 223.5092f;
			break;
		
		case 24:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1917.1881f, 4609.0024f, 37.6286f };
			uParam0->f_5[0 /*18*/].f_5 = 154.3076f;
			uParam0->f_5[1 /*18*/].f_2 = { 1932.6865f, 4649.7534f, 39.4995f };
			uParam0->f_5[1 /*18*/].f_5 = 244.4298f;
			uParam0->f_5[2 /*18*/].f_2 = { 1876.0381f, 4609.2046f, 36.2622f };
			uParam0->f_5[2 /*18*/].f_5 = 180.3719f;
			uParam0->f_5[3 /*18*/].f_2 = { 1927.8698f, 4635.5054f, 39.4275f };
			uParam0->f_5[3 /*18*/].f_5 = 88.5296f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1970.5175f, 4653.9937f, 39.8374f };
			uParam0->f_78[0 /*17*/].f_12[0] = 148.0159f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1797.508f, 4585.467f, 36.0648f };
			uParam0->f_78[0 /*17*/].f_12[1] = 186.4325f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 1990.0415f, 4601.6006f, 39.5506f };
			uParam0->f_78[0 /*17*/].f_12[2] = 117.1525f;
			uParam0->f_97 = { 3711.5488f, 4878.36f, 404.1502f };
			uParam0->f_100 = 101.3695f;
			break;
		
		case 25:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 574.2339f, 2924.3218f, 39.7349f };
			uParam0->f_5[0 /*18*/].f_5 = 213.2177f;
			uParam0->f_5[1 /*18*/].f_2 = { 541.8079f, 2870.4058f, 42.1283f };
			uParam0->f_5[1 /*18*/].f_5 = 288.7304f;
			uParam0->f_5[2 /*18*/].f_2 = { 625.1206f, 2877.8542f, 38.1618f };
			uParam0->f_5[2 /*18*/].f_5 = 87.2171f;
			uParam0->f_5[3 /*18*/].f_2 = { 598.0822f, 2930.7744f, 39.914f };
			uParam0->f_5[3 /*18*/].f_5 = 321.3549f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 591.658f, 2974.451f, 39.7528f };
			uParam0->f_78[0 /*17*/].f_12[0] = 258.7779f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 521.3518f, 2887.909f, 42.3507f };
			uParam0->f_78[0 /*17*/].f_12[1] = 194.5046f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 733.1032f, 2908.2554f, 46.4786f };
			uParam0->f_78[0 /*17*/].f_12[2] = 27.0771f;
			uParam0->f_97 = { -1071.6088f, 2496.11f, 332.6916f };
			uParam0->f_100 = 288.7392f;
			break;
		
		case 26:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 2805.8994f, -684.5618f, 2.7772f };
			uParam0->f_5[0 /*18*/].f_5 = 356.7281f;
			uParam0->f_5[1 /*18*/].f_2 = { 2792.4854f, -650.1158f, 3.6368f };
			uParam0->f_5[1 /*18*/].f_5 = 212.2862f;
			uParam0->f_5[2 /*18*/].f_2 = { 2815.2312f, -668.5212f, 0.2468f };
			uParam0->f_5[2 /*18*/].f_5 = 274.147f;
			uParam0->f_5[3 /*18*/].f_2 = { 2824.9724f, -694.6227f, 0.5617f };
			uParam0->f_5[3 /*18*/].f_5 = 106.0981f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 2733.123f, -774.2815f, 22.6375f };
			uParam0->f_78[0 /*17*/].f_12[0] = 7.3256f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 2659.8125f, -781.988f, 34.7736f };
			uParam0->f_78[0 /*17*/].f_12[1] = 191.9212f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 2669.105f, -686.0164f, 39.8963f };
			uParam0->f_78[0 /*17*/].f_12[2] = 207.926f;
			uParam0->f_97 = { 3835.9045f, -1895.431f, 621.9581f };
			uParam0->f_100 = 48.6187f;
			break;
		
		case 27:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -1725.3507f, -189.919f, 57.519f };
			uParam0->f_5[0 /*18*/].f_5 = 103.1486f;
			uParam0->f_5[1 /*18*/].f_2 = { -1746.5844f, -206.355f, 56.4266f };
			uParam0->f_5[1 /*18*/].f_5 = 132.9578f;
			uParam0->f_5[2 /*18*/].f_2 = { -1676.474f, -199.428f, 56.672f };
			uParam0->f_5[2 /*18*/].f_5 = 249.4169f;
			uParam0->f_5[3 /*18*/].f_2 = { -1681.5916f, -165.3771f, 56.7343f };
			uParam0->f_5[3 /*18*/].f_5 = 292.0603f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -1660.8077f, -131.8831f, 58.885f };
			uParam0->f_78[0 /*17*/].f_12[0] = 92.4984f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -1787.2028f, -265.7223f, 44.2972f };
			uParam0->f_78[0 /*17*/].f_12[1] = 231.4039f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -1603.282f, -201.1913f, 53.8901f };
			uParam0->f_78[0 /*17*/].f_12[2] = 143.5364f;
			uParam0->f_97 = { -2497.7766f, -1044.2947f, 247.0226f };
			uParam0->f_100 = 326.3715f;
			break;
		
		case 28:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -519.8322f, 3036.5803f, 34.8224f };
			uParam0->f_5[0 /*18*/].f_5 = 209.6163f;
			uParam0->f_5[1 /*18*/].f_2 = { -459.0498f, 2991.1235f, 25.7687f };
			uParam0->f_5[1 /*18*/].f_5 = 78.439f;
			uParam0->f_5[2 /*18*/].f_2 = { -531.2136f, 2980.925f, 25.18f };
			uParam0->f_5[2 /*18*/].f_5 = 168.7811f;
			uParam0->f_5[3 /*18*/].f_2 = { -461.0627f, 3029.61f, 27.943f };
			uParam0->f_5[3 /*18*/].f_5 = 297.2584f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -349.4192f, 2959.4827f, 24.8059f };
			uParam0->f_78[0 /*17*/].f_12[0] = 100.0125f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -405.8636f, 3068.0999f, 29.4591f };
			uParam0->f_78[0 /*17*/].f_12[1] = 112.6015f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -659.7894f, 3011.6826f, 23.5569f };
			uParam0->f_78[0 /*17*/].f_12[2] = 284.9224f;
			uParam0->f_97 = { -2460.682f, 2015.0172f, 839.101f };
			uParam0->f_100 = 296.1674f;
			break;
		
		case 29:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -417.435f, 4308.3926f, 63.3466f };
			uParam0->f_5[0 /*18*/].f_5 = 234.5174f;
			uParam0->f_5[1 /*18*/].f_2 = { -438.7067f, 4340.6475f, 61.0735f };
			uParam0->f_5[1 /*18*/].f_5 = 278.47f;
			uParam0->f_5[2 /*18*/].f_2 = { -368.8454f, 4339.037f, 57.1845f };
			uParam0->f_5[2 /*18*/].f_5 = 77.0994f;
			uParam0->f_5[3 /*18*/].f_2 = { -393.7048f, 4374.4287f, 54.2199f };
			uParam0->f_5[3 /*18*/].f_5 = 64.5219f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -465.3588f, 4334.785f, 60.7145f };
			uParam0->f_78[0 /*17*/].f_12[0] = 227.85f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -338.1241f, 4256.839f, 42.4494f };
			uParam0->f_78[0 /*17*/].f_12[1] = 51.2469f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -542.6022f, 4354.6436f, 64.1361f };
			uParam0->f_78[0 /*17*/].f_12[2] = 275.3314f;
			uParam0->f_97 = { -2603.9697f, 4864.047f, 631.5f };
			uParam0->f_100 = 253.7774f;
			break;
		
		case 30:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { -127.9382f, -865.4045f, 32.33f };
			uParam0->f_5[0 /*18*/].f_5 = 131.1114f;
			uParam0->f_5[1 /*18*/].f_2 = { -120.4006f, -839.0247f, 43.2158f };
			uParam0->f_5[1 /*18*/].f_5 = 303.7408f;
			uParam0->f_5[2 /*18*/].f_2 = { -99.936f, -877.1848f, 43.2164f };
			uParam0->f_5[2 /*18*/].f_5 = 313.9738f;
			uParam0->f_5[3 /*18*/].f_2 = { -85.6775f, -842.2723f, 39.5395f };
			uParam0->f_5[3 /*18*/].f_5 = 126.871f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { -62.7999f, -923.7296f, 28.1789f };
			uParam0->f_78[0 /*17*/].f_12[0] = 69.7026f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { -215.8648f, -1010.7717f, 28.1444f };
			uParam0->f_78[0 /*17*/].f_12[1] = 337.6824f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { -270.7842f, -887.5016f, 30.101f };
			uParam0->f_78[0 /*17*/].f_12[2] = 338.2989f;
			uParam0->f_97 = { -1532.0463f, -652.9149f, 637.4343f };
			uParam0->f_100 = 262.2055f;
			uParam0->f_101 = { -133.2166f, -871.6094f, 43.2173f };
			break;
		
		case 31:
			uParam0->f_1 = { func_75(*uParam0) };
			uParam0->f_4 = 2;
			uParam0->f_5[0 /*18*/].f_2 = { 1109.5618f, -544.2077f, 56.1076f };
			uParam0->f_5[0 /*18*/].f_5 = 174.9766f;
			uParam0->f_5[1 /*18*/].f_2 = { 1100.5092f, -529.1635f, 61.9093f };
			uParam0->f_5[1 /*18*/].f_5 = 356.8412f;
			uParam0->f_5[2 /*18*/].f_2 = { 1078.5105f, -554.7376f, 55.9086f };
			uParam0->f_5[2 /*18*/].f_5 = 263.975f;
			uParam0->f_5[3 /*18*/].f_2 = { 1130.4241f, -565.5107f, 55.7759f };
			uParam0->f_5[3 /*18*/].f_5 = 132.5288f;
			uParam0->f_78[0 /*17*/].f_2[0 /*3*/] = { 1077.1531f, -428.0514f, 65.6296f };
			uParam0->f_78[0 /*17*/].f_12[0] = 169.8658f;
			uParam0->f_78[0 /*17*/].f_2[1 /*3*/] = { 1176.2926f, -465.3253f, 65.0413f };
			uParam0->f_78[0 /*17*/].f_12[1] = 167.1621f;
			uParam0->f_78[0 /*17*/].f_2[2 /*3*/] = { 975.8554f, -567.0255f, 58.0341f };
			uParam0->f_78[0 /*17*/].f_12[2] = 307.5059f;
			uParam0->f_97 = { 1466.3054f, -2052.086f, 382.5888f };
			uParam0->f_100 = 23.7138f;
			uParam0->f_101 = { 1100.4607f, -546.2083f, 56.2259f };
			break;
	}
	if (BitTest(Local_90.f_1, 11))
	{
		uParam0->f_96 = 4;
		uParam0->f_4 = 0;
	}
}

Vector3 func_75(int iParam0)//Position - 0x653C
{
	switch (iParam0)
	{
		case 0:
			return 2312.7073f, 1531.2584f, 59.8792f;
		
		case 1:
			return 1069.5798f, 2366.3628f, 43.0396f;
		
		case 2:
			return -1979.7805f, 2584.161f, 2.2587f;
		
		case 3:
			return 1915.9016f, 563.9669f, 174.4925f;
		
		case 4:
			return 1458.3934f, 1113.0664f, 113.334f;
		
		case 5:
			return 817.5361f, 1316.5696f, 362.0491f;
		
		case 6:
			return 1402.8578f, -2148.4177f, 57.9675f;
		
		case 7:
			return 1104.8152f, -3142.3347f, 4.901f;
		
		case 8:
			return 545.7347f, -3025.3271f, 5.0591f;
		
		case 9:
			return 1376.0369f, -740.2166f, 66.2331f;
		
		case 10:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 11:
			return 1671.2318f, 3041.1763f, 53.0351f;
		
		case 12:
			return 1015.5989f, 4350.6685f, 41.484f;
		
		case 13:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 14:
			return -2436.2498f, 4181.913f, 7.7719f;
		
		case 15:
			return -3163.3643f, 756.8276f, 2.1183f;
		
		case 16:
			return -1731.0846f, -989.8386f, 4.4152f;
		
		case 17:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 18:
			return -401.2717f, 1211.6768f, 324.9297f;
		
		case 19:
			return 728.2132f, -1532.4799f, 18.7348f;
		
		case 20:
			return 1140.923f, -1285.6388f, 33.6091f;
		
		case 21:
			return 2909.1543f, 770.3181f, 21.1684f;
		
		case 22:
			return 2778.9092f, 2853.2659f, 34.7828f;
		
		case 23:
			return 2463.142f, 3769.6511f, 40.328f;
		
		case 24:
			return 1888.6101f, 4626.815f, 37.4665f;
		
		case 25:
			return 585.3987f, 2893.7783f, 38.5297f;
		
		case 26:
			return 2811.453f, -668.671f, 1.581f;
		
		case 27:
			return -1706.0131f, -183.4387f, 56.3712f;
		
		case 28:
			return -498.3305f, 3006.9062f, 27.4341f;
		
		case 29:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 30:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 31:
			return 1098.2463f, -544.2941f, 56.4061f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_76(var uParam0)//Position - 0x684E
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

void func_77(var uParam0)//Position - 0x6877
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_78()//Position - 0x6896
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	func_404();
	switch (Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (Local_90.f_180 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					Global_2738934.f_238[iVar0 /*3*/] = { Local_90.f_2.f_68[iVar0 /*104*/].f_1 };
					iVar0++;
				}
				if ((func_61() && func_59()) && func_53())
				{
					if (((!BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 1) && func_392(31, 0, 0)) && func_391(60000)) && !func_390())
					{
						if (!BitTest(Local_90.f_1, 11))
						{
							func_389("ACD_TICKS" /* GXT: Crate Drop inbound. */, 0);
						}
						else
						{
							func_389("ACD_TSC0" /* GXT: ~y~Special Crate Drop inbound. */, 0);
						}
					}
					func_388();
					Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
				}
			}
			break;
		
		case 1:
			func_382();
			func_381();
			bVar1 = false;
			while (bVar1 < Local_90.f_2)
			{
				func_202(bVar1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bVar1 /*66*/].f_1) && (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[bVar1 /*2*/]) || BitTest(Local_90.f_1, 11)))
				{
					func_200(bVar1);
					func_199(bVar1);
					func_193(bVar1, Local_90.f_2.f_68[bVar1 /*104*/].f_101);
				}
				func_186(bVar1);
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90.f_2.f_68[bVar1 /*104*/].f_1, 200f, 200f, 200f, false, true, 0))
				{
					func_185();
					func_125(bVar1);
					fVar2 = ((200f / 4f) * 3f);
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_90.f_2.f_68[bVar1 /*104*/].f_1, fVar2, fVar2, fVar2, false, true, 0))
					{
						func_104(bVar1, fVar2);
					}
				}
				else
				{
					func_79(1);
				}
				bVar1++;
			}
			if (Local_90.f_180 >= 2)
			{
				Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_431();
			break;
	}
}

void func_79(int iParam0)//Position - 0x6A83
{
	if (BitTest(uLocal_409, 13))
	{
		if (func_443(PLAYER::PLAYER_ID(), 1, 1) || iParam0 == 0)
		{
			func_80(1, 1, 0);
			MISC::CLEAR_BIT(&uLocal_409, 13);
		}
	}
}

void func_80(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6ABB
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_45), &Global_2640181, 323);
	}
	else
	{
		Global_2635563.f_45 = { Global_2640181 };
		Global_2635563.f_45.f_49 = { Global_2640181.f_49 };
		Global_2635563.f_45.f_52 = Global_2640181.f_52;
		Global_2635563.f_45.f_53 = Global_2640181.f_53;
	}
	if (bParam0)
	{
		func_103();
	}
	if (!bParam2)
	{
		func_83(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_82(0);
	func_81();
}

void func_81()//Position - 0x6B61
{
	struct<6> Var0;
	
	if (Global_2635563.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635563.f_490 = { Var0 };
	}
}

void func_82(bool bParam0)//Position - 0x6B86
{
	if (bParam0)
	{
		Global_2635563.f_713 = 0;
	}
	else
	{
		Global_2635563.f_713 = 1;
	}
}

void func_83(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x6BA6
{
	if (bParam0)
	{
		if (func_102())
		{
			func_101();
		}
		Global_2635563.f_714.f_668 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635563.f_714.f_654 = iParam1;
		Global_2635563.f_714.f_655 = iParam2;
		Global_2635563.f_714.f_656 = iParam10;
		func_99();
		func_87(8, 0, 0, 0, 0);
		Global_2635563.f_714.f_657 = iParam11;
		Global_2635563.f_714.f_662 = iParam3;
		Global_2635563.f_714.f_663 = iParam4;
		Global_2635563.f_714.f_660 = iParam5;
		Global_2635563.f_714.f_661 = iParam6;
		Global_2635563.f_714.f_664 = iParam7;
		Global_2635563.f_714.f_665 = iParam8;
		Global_2635563.f_714.f_666 = iParam9;
		Global_2635563.f_714.f_667 = iParam14;
		Global_2635563.f_714.f_658 = iParam12;
		Global_2635563.f_714.f_659 = iParam13;
		Global_2635563.f_2053 = 1;
	}
	else
	{
		func_84();
	}
}

void func_84()//Position - 0x6C91
{
	if (func_102() && !func_86())
	{
		func_101();
	}
	if (func_86())
	{
		func_85();
	}
	else
	{
		func_99();
		func_87(0, 0, 0, 0, 0);
		Global_2635563.f_2053 = 0;
		Global_2635563.f_2052 = 0;
	}
}

void func_85()//Position - 0x6CD9
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_714), &(Global_2635563.f_1383), 669);
	Global_2635563.f_490 = { Global_2635563.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668)
	{
		Global_2635563.f_2052 = 0;
	}
}

int func_86()//Position - 0x6D21
{
	if ((Global_2635563.f_2052 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_1383.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635563.f_1383.f_668))
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6D60
{
	if (Global_2672855.f_1728.f_703.f_16 != func_36())
	{
		if (BitTest(Global_2657971[Global_2672855.f_1728.f_703.f_16 /*465*/].f_426, 0) && func_88())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643622 = 0;
	}
	Global_2635563.f_490 = iParam0;
	Global_2635563.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635563.f_490.f_2 = iParam1;
	Global_2635563.f_490.f_3 = iParam2;
	Global_2635563.f_490.f_4 = iParam3;
	Global_2635563.f_490.f_5 = iParam4;
}

int func_88()//Position - 0x6DFC
{
	if (((((((func_97(PLAYER::PLAYER_ID()) == 229 || func_97(PLAYER::PLAYER_ID()) == 191) || func_96(Global_4718592.f_185586)) || func_95()) || func_94()) || func_93()) || Global_2708057.f_227 == 1) || (Global_2635563.f_2053 && func_89(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_89(int iParam0)//Position - 0x6E82
{
	if (func_92(iParam0))
	{
		return 1;
	}
	if (func_90(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90(int iParam0)//Position - 0x6EA5
{
	return func_91(iParam0, 20);
}

var func_91(int iParam0, int iParam1)//Position - 0x6EB5
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_92(var uParam0)//Position - 0x6ECD
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

var func_93()//Position - 0x6EF0
{
	return Global_2708056;
}

var func_94()//Position - 0x6EFC
{
	return Global_1836675;
}

int func_95()//Position - 0x6F08
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_96(int iParam0)//Position - 0x6F1D
{
	return iParam0 == 92;
}

int func_97(int iParam0)//Position - 0x6F2A
{
	if (func_27(iParam0))
	{
		if (func_98(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_98(int iParam0, int iParam1)//Position - 0x6F56
{
	if (func_27(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x6F9A
{
	if (func_102() && !func_86())
	{
		func_101();
	}
	func_100();
	Global_2635563.f_714 = 0;
	Global_2635563.f_714.f_602 = 0;
}

void func_100()//Position - 0x6FCE
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var7;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635563.f_714.f_1[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
	Var7 = -1;
	Var7.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635563.f_714.f_603[iVar0 /*3*/] = { Var7 };
		iVar0++;
	}
}

void func_101()//Position - 0x703F
{
	if (func_86())
	{
		if (Global_2635563.f_714.f_668 == Global_2635563.f_1383.f_668)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_1383), &(Global_2635563.f_714), 669);
		Global_2635563.f_496 = { Global_2635563.f_490 };
		Global_2635563.f_2052 = 1;
	}
}

int func_102()//Position - 0x70AD
{
	if ((Global_2635563.f_2053 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635563.f_714.f_668) && SCRIPT::IS_THREAD_ACTIVE(Global_2635563.f_714.f_668))
	{
		return 1;
	}
	return 0;
}

void func_103()//Position - 0x70EC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635563.f_368), &Global_2640504, 121);
}

void func_104(bool bParam0, float fParam1)//Position - 0x7105
{
	if (!BitTest(uLocal_409, 13))
	{
		if (func_443(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_122(Local_90.f_2.f_68[bParam0 /*104*/].f_1, fParam1, 0, 0, 1, 0);
			func_106(Local_90.f_2.f_68[bParam0 /*104*/].f_1, ((200f / 4f) * 2f), 0, 1);
			func_105(Local_90.f_2.f_68[bParam0 /*104*/].f_1, 1, 0);
			MISC::SET_BIT(&uLocal_409, 13);
		}
	}
}

void func_105(struct<3> Param0, int iParam3, int iParam4)//Position - 0x7176
{
	Global_2635563.f_45.f_49 = { Param0 };
	Global_2635563.f_45.f_52 = iParam3;
	Global_2635563.f_45.f_53 = iParam4;
}

void func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x71A0
{
	func_107(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam5);
}

void func_107(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0x71BA
{
	struct<12> Var0;
	
	if (func_116(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_115(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_110(Var0))
		{
			Global_2635563.f_45.f_64 = func_109(PLAYER::PLAYER_ID());
			func_108(Var0, iParam8);
		}
	}
}

void func_108(struct<12> Param0, int iParam12)//Position - 0x7230
{
	Global_2635563.f_368[iParam12 /*12*/] = { Param0 };
	Global_2635563.f_368[iParam12 /*12*/].f_9 = 1;
}

int func_109(int iParam0)//Position - 0x7259
{
	if (func_443(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_110(struct<12> Param0)//Position - 0x727B
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635563.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_111(Global_2635563.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_111(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x72DB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_114(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_112(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_114(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_112(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_112(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x7414
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.70710677f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_113(Param0, Param3, Var0, Var3);
}

int func_113(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x7458
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_114(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x74AF
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_115(var uParam0, var uParam1)//Position - 0x74DA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_116(int iParam0)//Position - 0x7571
{
	if (((func_119(iParam0, 1) || func_118(iParam0)) || func_98(iParam0, 0)) || func_117(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x75AD
{
	if (!func_443(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2);
}

int func_118(int iParam0)//Position - 0x75D5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

bool func_119(int iParam0, bool bParam1)//Position - 0x75F6
{
	if (func_121() != 0)
	{
		return func_109(iParam0) != 0;
	}
	return func_120(iParam0, bParam1, 0);
}

int func_120(int iParam0, bool bParam1, bool bParam2)//Position - 0x761D
{
	if (bParam1)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_121()//Position - 0x764F
{
	return Global_32948;
}

void func_122(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x765A
{
	func_123(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_123(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)//Position - 0x7678
{
	struct<12> Var0;
	
	if (func_116(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Global_2635563.f_2053)
		{
			func_84();
		}
		if (Var0.f_10 == 1)
		{
			func_115(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2635563.f_45.f_64 = func_109(PLAYER::PLAYER_ID());
		func_124(Var0, iParam8);
	}
}

void func_124(struct<12> Param0, int iParam12)//Position - 0x7707
{
	Global_2635563.f_45[iParam12 /*12*/] = { Param0 };
	Global_2635563.f_45[iParam12 /*12*/].f_9 = 1;
}

void func_125(bool bParam0)//Position - 0x772E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_90.f_2.f_68[bParam0 /*104*/].f_96)
	{
		func_181(Local_90.f_2.f_68[bParam0 /*104*/].f_5[iVar0 /*18*/], &(Local_415[bParam0 /*33*/][iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0, 0);
		func_126(bParam0, iVar0);
		iVar0++;
	}
}

void func_126(int iParam0, int iParam1)//Position - 0x7788
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]))
	{
		if (!BitTest(uLocal_449[iParam0], (0 + iParam1)))
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), false))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/], &uVar0))
				{
					func_127(0, NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/]), "XPT_KAIE" /* GXT: ~g~+~1~ ~a~:~s~ Killed Hostile */, joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_KILLS"), SYSTEM::ROUND((50f * Global_262145.f_3926 /* Tunable: XP_TUNABLE_CRATE_DROP_ENEMY_KILLS */)), 1, -1, 0, 0, 0);
					iLocal_456 += 50;
					iLocal_460++;
					MISC::SET_BIT(&(uLocal_449[iParam0]), (0 + iParam1));
				}
			}
		}
		else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_90.f_2.f_68[iParam0 /*104*/].f_5[iParam1 /*18*/])))
		{
			MISC::CLEAR_BIT(&(uLocal_449[iParam0]), (0 + iParam1));
		}
	}
}

int func_127(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x787A
{
	return func_128(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_128(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x789C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
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
				func_134(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_129(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_129(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x792F
{
	struct<3> Var0;
	
	Var0 = { func_132(iParam0, 1) };
	if (iParam0 == func_131(PLAYER::PLAYER_PED_ID()))
	{
		func_130(1);
	}
	func_134(Var0, iParam1, 0, sParam2, iParam3);
}

void func_130(int iParam0)//Position - 0x7963
{
	Global_2672855.f_1725 = iParam0;
}

int func_131(int iParam0)//Position - 0x7974
{
	return iParam0;
}

Vector3 func_132(int iParam0, bool bParam1)//Position - 0x797E
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_133(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_133(int iParam0)//Position - 0x7A42
{
	return iParam0;
}

void func_134(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x7A4C
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672855.f_1124[iVar0 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672855.f_1124[iVar1 /*30*/] = { Param0 };
			Global_2672855.f_1124[iVar1 /*30*/].f_6 = 1;
			Global_2672855.f_1124[iVar1 /*30*/].f_4 = func_137(Global_2672855.f_1124[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672855.f_1124[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1124[iVar1 /*30*/].f_3 = iParam3;
			Global_2672855.f_1124[iVar1 /*30*/].f_8 = iParam4;
			Global_2672855.f_1124[iVar1 /*30*/].f_9 = func_136();
			Global_2672855.f_1124[iVar1 /*30*/].f_10 = func_135();
			StringCopy(&(Global_2672855.f_1124[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672855.f_1124[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_135()//Position - 0x7B63
{
	if (Global_2672855.f_1725)
	{
		Global_2672855.f_1725 = 0;
		return 1;
	}
	Global_2672855.f_1725 = 0;
	return 0;
}

var func_136()//Position - 0x7B8D
{
	var uVar0;
	
	uVar0 = Global_2672855.f_1727;
	Global_2672855.f_1727 = 1;
	return uVar0;
}

float func_137(struct<3> Param0, var uParam3, var uParam4)//Position - 0x7BA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_138(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x7C41
{
	var uVar0;
	
	uVar0 = func_139(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x7C64
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_173();
	if (func_172(sParam2))
	{
	}
	if (func_171())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_169(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_168(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_166(0, &iVar1);
					break;
				
				case 3:
					func_166(1, &iVar1);
					break;
				
				case 1:
					func_161(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13369 /* Tunable: -9502162 */)
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
			func_160(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_147((func_159(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_2 != -1)
				{
					func_160(1166, iVar1, -1);
				}
				func_144(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_140((func_142(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_140((func_142(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_140(int iParam0)//Position - 0x7DD2
{
	if (func_171())
	{
		Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_5 = iParam0;
		func_141(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_141(int iParam0, int iParam1)//Position - 0x7DFD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_142(int iParam0)//Position - 0x7E19
{
	if (iParam0 > -1)
	{
		if (func_443(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_143(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_5;
			}
		}
		else
		{
			return func_143(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x7E6A
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

void func_144(int iParam0)//Position - 0x7E88
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_37(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_145(func_146(&Var0));
			if (iVar13 == 0)
			{
				func_141(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_143(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_141(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_143(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_141(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_143(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_141(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_143(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_141(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_143(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_145(int iParam0)//Position - 0x7F52
{
	if (iParam0 == func_143(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_143(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_143(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_143(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_143(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_146(var* uParam0)//Position - 0x7FC8
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2696114;
		}
	}
	return Global_2696114;
}

void func_147(int iParam0, int iParam1, int iParam2)//Position - 0x7FEB
{
	if (func_171())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10095 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_158(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_158(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_INITIALISE"), joaat("XPCATEGORY_LIVE_RP_RESET"));
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10094 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_157(PLAYER::PLAYER_ID()))
		{
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_1 = iParam0;
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_6 = func_154(iParam0, 1);
		}
		func_151(640, iParam0, -1, 1);
		func_151(641, func_154(iParam0, 1), -1, 1);
		func_148(-1109644434, 7, 0);
	}
}

void func_148(int iParam0, int iParam1, int iParam2)//Position - 0x80FF
{
	int iVar0;
	
	if (func_150(iParam1, iParam2))
	{
		iVar0 = func_149();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_149()//Position - 0x812C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_150(int iParam0, var uParam1)//Position - 0x8161
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_151(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x81E7
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_152(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_152(int iParam0, var uParam1)//Position - 0x8215
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_153(uParam1));
}

int func_153(var uParam0)//Position - 0x822A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_154(int iParam0, bool bParam1)//Position - 0x825E
{
	if (bParam1)
	{
	}
	return func_155(iParam0, 0);
}

int func_155(int iParam0, int iParam1)//Position - 0x8272
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
		if (func_156(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_156(iVar3) < iParam0)
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

int func_156(int iParam0)//Position - 0x832D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_157(int iParam0)//Position - 0x8868
{
	if (!func_27(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_158(int iParam0, int iParam1)//Position - 0x8887
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_152(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x88B6
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_158(640, -1);
			}
			else if (func_157(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_158(640, -1);
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2)//Position - 0x890D
{
	int iVar0;
	
	iVar0 = func_158(iParam0, func_153(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_151(iParam0, iVar0, iParam2, 1);
}

void func_161(int iParam0)//Position - 0x8935
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_163(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_38(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_162(*iParam0, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_162(*iParam0, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_162(int iParam0, int iParam1)//Position - 0x8A21
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8A42
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
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_164(iParam0, bVar0, iParam1, bVar1) || !func_164(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_164(iParam0, bVar0, iParam1, bVar1) || !func_164(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_164(iParam0, bVar0, iParam1, bVar1) || !func_164(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_164(iParam0, bVar0, iParam1, bVar1) || !func_164(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
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
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_164(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x8D8D
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
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
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
		if (((!func_443(iVar1, 1, 1) || func_24(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_165(iVar1))
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

var func_165(int iParam0)//Position - 0x8EB9
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

void func_166(bool bParam0, int iParam1)//Position - 0x8ED1
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
				if (func_443(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_38(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_443(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_167(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_38(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_162(*iParam1, 100) * (10f * Global_262145.f_3922 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_162(*iParam1, 100) * (20f * Global_262145.f_3920 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_167(int iParam0, int iParam1)//Position - 0x8FE9
{
	return SYSTEM::VDIST(func_29(iParam0), func_29(iParam1));
	return 0f;
}

int func_168(int iParam0)//Position - 0x9005
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_162(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_169(int iParam0)//Position - 0x903C
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_159(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_159(PLAYER::PLAYER_ID());
		}
	}
	if (func_170(8000, 0, 0) > 0)
	{
		if (func_170(8000, 0, 0) < (iParam0 + func_159(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_170(8000, 0, 0) - func_159(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_170(int iParam0, bool bParam1, int iParam2)//Position - 0x90A0
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
	return func_156(iParam0);
}

int func_171()//Position - 0x90C6
{
	return 1;
}

int func_172(char* sParam0)//Position - 0x90CF
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

int func_173()//Position - 0x9107
{
	int iVar0;
	
	if (func_180(PLAYER::PLAYER_ID()) || func_179(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10125 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_177() || func_175(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_22930 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (func_174(Global_4718592.f_185586))
	{
		if (Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */ > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7169 /* Tunable: ADVERSARY_LARGE_RP_CAP */;
		}
	}
	else if (Global_262145.f_7168 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7168 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

bool func_174(int iParam0)//Position - 0x91D5
{
	return iParam0 == 89;
}

int func_175(int iParam0)//Position - 0x91E2
{
	return func_176(func_97(iParam0));
}

int func_176(int iParam0)//Position - 0x91F4
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_177()//Position - 0x920E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_31();
	}
	return func_178(Global_4718592.f_127178);
}

int func_178(int iParam0)//Position - 0x9232
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_179(int iParam0)//Position - 0x926C
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

bool func_180(int iParam0)//Position - 0x9281
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

void func_181(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0x9296
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_184(0))
		{
			Global_2672855 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_183(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2672855, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_183(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2672855, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_182(iParam1);
	}
}

void func_182(int* iParam0)//Position - 0x931A
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_183(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)//Position - 0x938C
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_184(bool bParam0)//Position - 0x957E
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_185()//Position - 0x958F
{
	Global_1663776.f_2 = 1;
	Global_1663776.f_3 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 1000);
}

void func_186(bool bParam0)//Position - 0x95AF
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1) && Local_90.f_2.f_1[bParam0 /*66*/].f_64 == -1) && func_190())
	{
		func_187(bParam0);
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_413[bParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_413[bParam0]));
	}
}

void func_187(int iParam0)//Position - 0x9609
{
	if (HUD::DOES_BLIP_EXIST(iLocal_413[iParam0]))
	{
		if (func_189() || func_188())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_413[iParam0], 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_413[iParam0], 4);
		}
	}
	else
	{
		iLocal_413[iParam0] = HUD::ADD_BLIP_FOR_RADIUS(Local_90.f_2.f_68[iParam0 /*104*/].f_1, 200f);
		HUD::SET_BLIP_COLOUR(iLocal_413[iParam0], 2);
		HUD::SET_BLIP_ALPHA(iLocal_413[iParam0], 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_413[iParam0], false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_413[iParam0], "ACD_BLIPR" /* GXT: Crate Drop Zone */);
		if (func_189())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_413[iParam0], 0);
		}
	}
}

var func_188()//Position - 0x96B2
{
	return Global_2647061.f_1870;
}

int func_189()//Position - 0x96C1
{
	return 1;
}

int func_190()//Position - 0x96CA
{
	if (func_192())
	{
		return 0;
	}
	if ((func_191(PLAYER::PLAYER_ID(), 1) || func_191(PLAYER::PLAYER_ID(), 2)) || Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 5)
	{
		return 0;
	}
	if (!func_392(31, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_191(int iParam0, int iParam1)//Position - 0x9720
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_192()//Position - 0x9736
{
	int iVar0;
	
	iVar0 = Global_2672855;
	if (BitTest(Global_1882632[iVar0 /*146*/].f_17, 0) && Global_1882632[iVar0 /*146*/].f_27 == 2)
	{
		return 1;
	}
	return 0;
}

void func_193(bool bParam0, struct<3> Param1)//Position - 0x9769
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	var uVar8;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_1) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_2.f_1[bParam0 /*66*/].f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_2.f_1[bParam0 /*66*/].f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (func_43(Local_90.f_2.f_1[bParam0 /*66*/].f_1) && func_43(Local_90.f_2.f_1[bParam0 /*66*/].f_2))
					{
						if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 2) && !BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + bParam0)))
						{
							if (!BitTest(Local_90.f_1, 11))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[bParam0 /*2*/]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_181[bParam0 /*2*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_181[bParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (func_43(Local_90.f_181[bParam0 /*2*/]))
										{
											iVar4 = 1;
										}
									}
									iVar3 = NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]);
								}
							}
							else
							{
								BitTest(Local_90.f_1, 11);
								iVar3 = NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1);
								iVar4 = 1;
							}
							if ((BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 13) && ENTITY::IS_ENTITY_STATIC(iVar3)) && iVar4 == 1)
							{
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), true);
								ENTITY::SET_ENTITY_VELOCITY(iVar3, 0f, 0f, 0f);
								if (func_198(Param1, 0f, 0f, 0f, 0))
								{
									MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar3), &Var5, &uVar8);
									if (func_50())
									{
										Var5.f_0 = MISC::ABSF((Var5.f_0 * 2f));
									}
									else
									{
										Var5.f_0 = -MISC::ABSF((Var5.f_0 * 2f));
									}
									if (func_50())
									{
										Var5.f_1 = MISC::ABSF((Var5.f_1 * 2f));
									}
									else
									{
										Var5.f_1 = -MISC::ABSF((Var5.f_1 * 2f));
									}
									Var5.f_2 = MISC::ABSF(Var5.f_2);
									ENTITY::SET_ENTITY_COORDS(iVar3, Local_90.f_2.f_68[bParam0 /*104*/].f_1 + Var5, true, false, false, true);
								}
								else
								{
									ENTITY::SET_ENTITY_COORDS(iVar3, Param1, true, false, false, true);
								}
								MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (6 + bParam0));
								MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (3 + bParam0));
								MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (0 + bParam0));
								func_197(&(Local_90.f_2.f_1[bParam0 /*66*/].f_2));
								OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), false, false);
							}
						}
						if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 3) && !BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (6 + bParam0)))
						{
							if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 11) || BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (3 + bParam0)))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), &(Local_90.f_2.f_1[bParam0 /*66*/].f_8), &(Local_90.f_2.f_1[bParam0 /*66*/].f_22), 3))
								{
									MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (6 + bParam0));
									func_197(&(Local_90.f_2.f_1[bParam0 /*66*/].f_2));
									OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), false, false);
								}
							}
						}
						if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 11) && !BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (3 + bParam0)))
						{
							if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 2) || BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + bParam0)))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), &(Local_90.f_2.f_1[bParam0 /*66*/].f_8), &(Local_90.f_2.f_1[bParam0 /*66*/].f_22), 3))
								{
									MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (3 + bParam0));
								}
							}
						}
						if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 2) && !BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (0 + bParam0)))
						{
							if (func_195(bParam0))
							{
								ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_2), &(Local_90.f_2.f_1[bParam0 /*66*/].f_22), &(Local_90.f_2.f_1[bParam0 /*66*/].f_8), 1000f, false, false, false, 0f, 0);
								MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (0 + bParam0));
							}
							else
							{
								PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), 2, 0.0245f);
							}
						}
					}
				}
			}
			if (!BitTest(Local_90.f_1, 11))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[bParam0 /*2*/]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_181[bParam0 /*2*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_181[bParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (!BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 15) && !BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (15 + bParam0)))
						{
							if (func_43(Local_90.f_181[bParam0 /*2*/]))
							{
								PHYSICS::SET_DAMPING(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), 2, 0.1f);
								if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), 0))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_1) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_2.f_1[bParam0 /*66*/].f_1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
										{
											if (func_43(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
											{
												ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true, true);
												OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), false, false);
												if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_2))
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_90.f_2.f_1[bParam0 /*66*/].f_2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_2.f_1[bParam0 /*66*/].f_2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
													{
														func_197(&(Local_90.f_2.f_1[bParam0 /*66*/].f_2));
													}
												}
												MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (15 + bParam0));
											}
										}
									}
								}
								Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), true) };
								if (Var0.f_2 < 0f)
								{
									ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), Local_90.f_2.f_68[bParam0 /*104*/].f_1, true, false, false, true);
								}
							}
						}
						if (!BitTest(Local_90.f_1, 12))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])) < 1f)
							{
								if (func_43(Local_90.f_181[bParam0 /*2*/]))
								{
									PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), true);
									PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), true);
									MISC::SET_BIT(&(Local_90.f_1), 12);
								}
							}
						}
						else if (!BitTest(Local_90.f_1, 13))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])))
							{
								bVar11 = true;
							}
							if (BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (6 + bParam0)))
							{
								if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])) || ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])))
								{
									if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])) && ENTITY::IS_ENTITY_STATIC(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/])))
									{
										bVar11 = true;
									}
								}
							}
							if (bVar11)
							{
								if (func_43(Local_90.f_181[bParam0 /*2*/]))
								{
									PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), false);
									PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_90.f_181[bParam0 /*2*/]), false);
									MISC::SET_BIT(&(Local_90.f_1), 13);
								}
							}
						}
					}
				}
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true) };
			if (Var0.f_2 < 0f)
			{
				if (func_43(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
				{
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), Local_90.f_2.f_68[bParam0 /*104*/].f_1, true, false, false, true);
				}
			}
			func_194(bParam0);
		}
	}
}

void func_194(int iParam0)//Position - 0x9F68
{
	if (Local_90.f_2.f_1[iParam0 /*66*/].f_64 != -1)
	{
		if (func_43(Local_90.f_2.f_1[iParam0 /*66*/].f_1))
		{
			func_197(&(Local_90.f_2.f_1[iParam0 /*66*/].f_1));
		}
	}
}

int func_195(int iParam0)//Position - 0x9FA3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!BitTest(Local_90.f_1, 11))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_181[iParam0 /*2*/]))
		{
			if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_90.f_181[iParam0 /*2*/])))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_90.f_181[iParam0 /*2*/])))
			{
				iVar1 = 1;
			}
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(NETWORK::NET_TO_OBJ(Local_90.f_181[iParam0 /*2*/]), 0))
			{
				iVar2 = 1;
			}
		}
		if (func_196(iParam0))
		{
			iVar3 = 1;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_90.f_181[iParam0 /*2*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_90.f_181[iParam0 /*2*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			if (((!bVar0 || iVar1) || iVar2) || iVar3)
			{
				if (func_43(Local_90.f_181[iParam0 /*2*/]))
				{
					return 1;
				}
			}
		}
	}
	else if ((!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iParam0 /*66*/].f_1)) || ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iParam0 /*66*/].f_1))) || func_196(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)//Position - 0xA0BD
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iParam0 /*66*/].f_1));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

void func_197(var uParam0)//Position - 0xA12C
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_198(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xA165
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_199(bool bParam0)//Position - 0xA1AC
{
	int iVar0;
	
	if (!BitTest(uLocal_409, (1 + bParam0)))
	{
		if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1) && Local_90.f_2.f_1[bParam0 /*66*/].f_64 == -1)
		{
			iVar0 = bParam0 + 1;
			if (iVar0 > (Local_90.f_2 - 1))
			{
				iVar0 = (Local_90.f_2 - 1);
			}
			if (!BitTest(Local_90.f_2.f_1[iVar0 /*66*/].f_65, 1))
			{
				MISC::SET_BIT(&uLocal_409, (1 + bParam0));
			}
		}
	}
}

void func_200(bool bParam0)//Position - 0xA21A
{
	if (func_190() && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1)))
	{
		if ((!BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (9 + bParam0)) && BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 3)) && HUD::DOES_BLIP_EXIST(iLocal_411[bParam0]))
		{
			HUD::SET_BLIP_ALPHA(iLocal_411[bParam0], 255);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_411[bParam0], true);
			MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (9 + bParam0));
		}
		else if (BitTest(Local_90.f_2.f_1[bParam0 /*66*/].f_65, 1))
		{
			func_201(bParam0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_411[bParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_411[bParam0]));
	}
}

void func_201(int iParam0)//Position - 0xA2DE
{
	if (HUD::DOES_BLIP_EXIST(iLocal_411[iParam0]))
	{
		if (func_189() || func_188())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_411[iParam0], 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_411[iParam0], 4);
		}
	}
	else
	{
		iLocal_411[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[iParam0 /*66*/].f_1));
		HUD::SET_BLIP_SCALE(iLocal_411[iParam0], 1.2f);
		HUD::SET_BLIP_SPRITE(iLocal_411[iParam0], 306 /*RADAR_CRATEDROP*/);
		HUD::SET_BLIP_COLOUR(iLocal_411[iParam0], 2);
		HUD::SET_BLIP_ALPHA(iLocal_411[iParam0], 120);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_411[iParam0], "ACD_BLIPN" /* GXT: Crate */);
		HUD::SET_BLIP_PRIORITY(iLocal_411[iParam0], 5);
		if (func_189())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_411[iParam0], 0);
		}
	}
}

void func_202(bool bParam0)//Position - 0xA3A2
{
	struct<15> Var0;
	
	if (!BitTest(uLocal_410, bParam0))
	{
		if (Local_90.f_2.f_1[bParam0 /*66*/].f_64 == -1)
		{
			if (!BitTest(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, (12 + bParam0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), PLAYER::PLAYER_PED_ID()))
					{
						func_6(bParam0);
						func_4(bParam0);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Crate_Collect", NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), "MP_CRATE_DROP_SOUNDS", true, 15);
						func_208(bParam0);
						MISC::SET_BIT(&uLocal_410, bParam0);
						if (!BitTest(Local_90.f_1, 11))
						{
							Var0.f_3 = -46427861;
							func_207();
						}
						else
						{
							Var0.f_3 = -1707786097;
							func_205();
						}
						Var0.f_11 = PLAYER::PLAYER_ID();
						func_13(Var0, func_14(0));
						func_203(31, 1);
						MISC::SET_BIT(&(Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), (12 + bParam0));
					}
				}
			}
		}
		else if (Local_90.f_2.f_1[bParam0 /*66*/].f_64 == 9999)
		{
			func_6(bParam0);
			func_4(bParam0);
			MISC::SET_BIT(&uLocal_410, bParam0);
		}
		else
		{
			func_6(bParam0);
			func_4(bParam0);
			MISC::SET_BIT(&uLocal_410, bParam0);
		}
	}
}

void func_203(int iParam0, bool bParam1)//Position - 0xA4DB
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[func_204() /*5570*/].f_681.f_19 = iVar0;
			break;
		
		case 19:
			Global_2359296[func_204() /*5570*/].f_681.f_18 = iVar0;
			break;
		
		case 74:
			Global_2359296[func_204() /*5570*/].f_681.f_12 = iVar0;
			break;
		
		case 29:
			Global_2359296[func_204() /*5570*/].f_681.f_14 = iVar0;
			break;
		
		case 8:
			Global_2359296[func_204() /*5570*/].f_681.f_15 = iVar0;
			break;
		
		case 31:
			Global_2359296[func_204() /*5570*/].f_681.f_16 = iVar0;
			break;
		
		case 3:
			Global_2359296[func_204() /*5570*/].f_681.f_20 = iVar0;
			break;
		
		case 6:
			Global_2359296[func_204() /*5570*/].f_681.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_204() /*5570*/].f_681.f_23 = iVar0;
			break;
		
		case 76:
			Global_2359296[func_204() /*5570*/].f_681.f_24 = iVar0;
			break;
		
		case 93:
			Global_2359296[func_204() /*5570*/].f_681.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_204() /*5570*/].f_681.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2359296[func_204() /*5570*/].f_681.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2359296[func_204() /*5570*/].f_681.f_29 = iVar0;
			break;
		
		case 88:
			Global_2359296[func_204() /*5570*/].f_681.f_28 = iVar0;
			break;
		
		case 100:
			Global_2359296[func_204() /*5570*/].f_681.f_31 = iVar0;
			break;
		
		case 106:
			Global_2359296[func_204() /*5570*/].f_681.f_32 = iVar0;
			break;
		
		case 99:
			Global_2359296[func_204() /*5570*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_204()//Position - 0xA71A
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_205()//Position - 0xA727
{
	int iVar0;
	
	iVar0 = func_206(46);
	Global_2645400[iVar0 /*83*/] = 46;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_206(int iParam0)//Position - 0xA753
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645400[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645400[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_207()//Position - 0xA7A0
{
	int iVar0;
	
	iVar0 = func_206(45);
	Global_2645400[iVar0 /*83*/] = 45;
	StringCopy(&(Global_2645400[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_208(bool bParam0)//Position - 0xA7CC
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	int iVar24;
	var uVar25;
	
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_30 == 2)
	{
		Local_90.f_2.f_1[bParam0 /*66*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), true) };
	}
	else
	{
		Var2 = { func_29(PLAYER::PLAYER_ID()) };
	}
	iVar5 = func_380(PLAYER::PLAYER_PED_ID());
	if (iVar5 == joaat("WEAPON_UNARMED") || iVar5 == joaat("WEAPON_FLARE"))
	{
		iVar5 = Global_1574580;
	}
	func_378(iVar5, 3, 1);
	if (Local_90.f_2.f_1[bParam0 /*66*/].f_30 != 8)
	{
		if (Global_262145.f_64 /* Tunable: CRATE_DROP_XP */ < 0)
		{
			iVar6 = (250 * MISC::GET_RANDOM_INT_IN_RANGE(1, 5));
		}
		else
		{
			iVar6 = Global_262145.f_64 /* Tunable: CRATE_DROP_XP */;
		}
	}
	else if (Global_262145.f_65 /* Tunable: CRATE_DROP_SPECIAL_XP */ < 0)
	{
		iVar6 = (250 * MISC::GET_RANDOM_INT_IN_RANGE(1, 5));
	}
	else
	{
		iVar6 = Global_262145.f_65 /* Tunable: CRATE_DROP_SPECIAL_XP */;
	}
	iVar6 = SYSTEM::ROUND((IntToFloat(iVar6) * Global_262145.f_3925 /* Tunable: XP_TUNABLE_CRATE_DROP */));
	func_377(3);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_90.f_2.f_1[bParam0 /*66*/].f_1))
	{
		func_127(0, NETWORK::NET_TO_OBJ(Local_90.f_2.f_1[bParam0 /*66*/].f_1), "XPT_MEDIUMT", joaat("XPTYPE_COLLECT"), joaat("XPCATEGORY_COLLECT_CRATE_DROP"), iVar6, 1, -1, 0, 0, 0);
	}
	else
	{
		func_127(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", joaat("XPTYPE_COLLECT"), joaat("XPCATEGORY_COLLECT_CRATE_DROP"), iVar6, 1, -1, 0, 0, 0);
	}
	iLocal_456 = (iLocal_456 + iVar6);
	switch (Local_90.f_2.f_1[bParam0 /*66*/].f_30)
	{
		case 0:
			iVar1 = func_376(Local_90.f_2.f_1[bParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_46 /* Tunable: CRATE_DROP_CASH_TOTAL_MAX */)
			{
				iVar1 = Global_262145.f_46 /* Tunable: CRATE_DROP_CASH_TOTAL_MAX */;
			}
			func_316(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_315())
				{
					func_303(joaat("SERVICE_EARN_CRATE_DROP"), iVar1, &uVar7, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_302(Var2, iVar1);
				func_301("ACD_TCONT_CX" /* GXT: Crate Contents:~n~ + $~1~~n~ + ~1~RP */, iVar1, iVar6);
				iLocal_457 = (iLocal_457 + iVar1);
				func_299(2, iLocal_457);
			}
			break;
		
		case 1:
			if (Global_262145.f_4410 /* Tunable: CRATE_DROP_DISABLE_WEAPON_CHECK */ == 0)
			{
				if (func_292(Local_90.f_2.f_1[bParam0 /*66*/].f_33, &iVar8))
				{
				}
			}
			else
			{
				iVar8 = Local_90.f_2.f_1[bParam0 /*66*/].f_33;
			}
			if (iVar8 == joaat("WEAPON_MINIGUN"))
			{
				iVar0 = Local_90.f_2.f_1[bParam0 /*66*/].f_32 * 200;
			}
			else
			{
				iVar0 = (Local_90.f_2.f_1[bParam0 /*66*/].f_32 * WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar8, true));
			}
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iVar8, iVar0, true);
			func_288("ACD_TCONT_XW" /* GXT: Crate Contents:~n~ + ~1~RP~n~ + ~a~ */, func_289(iVar8, 0), iVar6);
			break;
		
		case 8:
			iVar1 = func_376(Local_90.f_2.f_1[bParam0 /*66*/].f_32, 1);
			if (iVar1 > Global_262145.f_42 /* Tunable: CRATE_DROP_SPECIAL_CASH */)
			{
				iVar1 = Global_262145.f_42 /* Tunable: CRATE_DROP_SPECIAL_CASH */;
			}
			func_316(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_315())
				{
					func_303(joaat("SERVICE_EARN_CRATE_DROP"), iVar1, &uVar9, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_302(Var2, iVar1);
				iLocal_457 = (iLocal_457 + iVar1);
				func_299(2, iLocal_457);
			}
			if (Local_90.f_2.f_1[bParam0 /*66*/].f_33 != 0)
			{
				if (Local_90.f_2.f_1[bParam0 /*66*/].f_33 != joaat("WEAPON_MINIGUN"))
				{
					iVar0 = (Global_262145.f_39 /* Tunable: CRATE_DROP_SPEICAL_WEAPON_CLIPS */ * WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), Local_90.f_2.f_1[bParam0 /*66*/].f_33, true));
				}
				else
				{
					iVar0 = Global_262145.f_39 /* Tunable: CRATE_DROP_SPEICAL_WEAPON_CLIPS */ * 300;
				}
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_90.f_2.f_1[bParam0 /*66*/].f_33, iVar0, true);
			}
			func_287();
			iLocal_470 = 1;
			iVar11 = -1;
			iVar12 = -1;
			if (func_65(PLAYER::PLAYER_ID()))
			{
				iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_34;
				iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_35;
			}
			else
			{
				iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_36;
				iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_37;
			}
			if (func_286(iVar11, iVar12))
			{
				iVar10 = 1;
			}
			if (iVar10 == 0)
			{
				iVar13 = 0;
				while (iVar13 < 3 && iVar10 == 0)
				{
					iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					if (func_65(PLAYER::PLAYER_ID()))
					{
						iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_38[iVar14];
						iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_43[iVar14];
					}
					else
					{
						iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_48[iVar14];
						iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_53[iVar14];
					}
					if (func_286(iVar11, iVar12))
					{
						iVar10 = 1;
					}
					iVar13++;
				}
			}
			if (iVar10 == 0)
			{
				iVar15 = 0;
				while (iVar15 < 4)
				{
					if (func_65(PLAYER::PLAYER_ID()))
					{
						iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_38[iVar15];
						iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_43[iVar15];
					}
					else
					{
						iVar11 = Local_90.f_2.f_1[bParam0 /*66*/].f_48[iVar15];
						iVar12 = Local_90.f_2.f_1[bParam0 /*66*/].f_53[iVar15];
					}
					if (func_286(iVar11, iVar12))
					{
						iVar10 = 1;
						iVar15 = 4;
					}
					iVar15++;
				}
			}
			if (iVar10 == 0)
			{
				iVar12 = -99;
			}
			iVar24 = func_222(iVar11, iVar12, &sVar16);
			switch (iVar24)
			{
				case 0:
					func_221("ACD_TCONT_CXWA" /* GXT: Crate Contents:~n~ + $~1~~n~ + ~1~RP~n~ + ~a~~n~ + Body Armor */, func_289(Local_90.f_2.f_1[bParam0 /*66*/].f_33, 0), iVar1, iVar6);
					break;
				
				case 1:
					func_216("ACD_TCONT_CXWAC" /* GXT: Crate Contents:~n~ + $~1~~n~ + ~1~RP~n~ + ~a~~n~ + Body Armor~n~ + ~a~ */, func_289(Local_90.f_2.f_1[bParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6);
					break;
				
				case 2:
					func_216("ACD_TCONT_CXWAC" /* GXT: Crate Contents:~n~ + $~1~~n~ + ~1~RP~n~ + ~a~~n~ + Body Armor~n~ + ~a~ */, func_289(Local_90.f_2.f_1[bParam0 /*66*/].f_33, 0), &sVar16, iVar1, iVar6);
					break;
			}
			func_160(1253, 1, -1);
			if (func_215(9, -1) == 0)
			{
				func_213(9, 1, -1);
			}
			break;
		
		default:
			iVar1 = func_376(Local_90.f_2.f_1[bParam0 /*66*/].f_32, 1);
			func_316(&iVar1, 1);
			if (iVar1 > 0)
			{
				if (func_315())
				{
					func_303(joaat("SERVICE_EARN_CRATE_DROP"), iVar1, &uVar25, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_CRATE_DROP(iVar1);
				}
				func_302(Var2, iVar1);
				func_301("ACD_TCONT_CX" /* GXT: Crate Contents:~n~ + $~1~~n~ + ~1~RP */, iVar1, iVar6);
				iLocal_457 = (iLocal_457 + iVar1);
				func_299(2, iLocal_457);
			}
			break;
	}
	func_209(50, 1, -1);
}

void func_209(int iParam0, int iParam1, int iParam2)//Position - 0xADD2
{
	int iVar0;
	
	iVar0 = func_212(iParam0, func_153(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_210(iParam0, iVar0, iParam2);
}

void func_210(int iParam0, int iParam1, var uParam2)//Position - 0xADF9
{
	int iVar0;
	
	iVar0 = func_211(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_211(int iParam0, var uParam1)//Position - 0xAE15
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_153(uParam1));
}

int func_212(int iParam0, int iParam1)//Position - 0xAE2B
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_211(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1, int iParam2)//Position - 0xAE4F
{
	int iVar0;
	
	iVar0 = func_214(iParam0, iParam2);
	STATS::STAT_SET_BOOL(iVar0, bParam1, true);
}

int func_214(int iParam0, var uParam1)//Position - 0xAE6B
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_153(uParam1));
}

int func_215(int iParam0, int iParam1)//Position - 0xAE81
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_214(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_216(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xAEA5
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_217(13, sParam0, 1, sParam1, iParam3, iParam4, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_217(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xAEEE
{
	int iVar0;
	
	if ((!func_220() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_24(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_218(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_218(int iParam0)//Position - 0xAFF6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_219(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_219(int iParam0)//Position - 0xB058
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_220()//Position - 0xB091
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_221(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xB0A2
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_217(10, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_222(int iParam0, int iParam1, var uParam2)//Position - 0xB0E4
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<14> Var15;
	bool bVar29;
	
	iVar0 = 0;
	Var15 = { func_235(func_285(), iParam0, iParam1, -1) };
	bVar29 = false;
	if ((iParam0 == 10 && iParam1 != -1) && iParam1 > 129)
	{
		if (func_65(PLAYER::PLAYER_ID()))
		{
			if (func_227(&Var2, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1))
			{
				bVar29 = true;
			}
		}
		else if (func_227(&Var2, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1))
		{
			bVar29 = true;
		}
	}
	if (bVar29)
	{
		iVar1 = func_226(Var2.f_5);
		if (iVar1 != -1)
		{
			func_225(iVar1, 1, -1);
			MemCopy(uParam2, {Var2}, 8);
			iVar0 = 1;
		}
	}
	else if ((((((iParam0 != -1 && (iParam0 != 10 || !bVar29)) && iParam1 != -1) && iParam1 != -99) && func_224(func_285(), iParam0, iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Var15.f_8))) && BitTest(Var15.f_6, 6))
	{
		iVar1 = func_226(Global_2883588);
		if (iVar1 != -1)
		{
			if (!func_223(iVar1, -1))
			{
				func_225(iVar1, 1, -1);
				MemCopy(uParam2, {Var15.f_8}, 8);
				iVar0 = 2;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_223(int iParam0, int iParam1)//Position - 0xB21A
{
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

var func_224(int iParam0, int iParam1, int iParam2)//Position - 0xB236
{
	Global_79172[1 /*14*/] = { func_235(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_79172[1 /*14*/].f_6, 1);
}

void func_225(int iParam0, bool bParam1, int iParam2)//Position - 0xB25E
{
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_226(int iParam0)//Position - 0xB27C
{
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM24_M_LEGS_3_0"):
		case joaat("DLC_MP_SUM24_F_LEGS_3_0"):
			return 51217;
			break;
		
		case joaat("DLC_MP_SUM24_M_TEETH_10_0"):
		case joaat("DLC_MP_SUM24_M_TEETH_11_0"):
		case joaat("DLC_MP_SUM24_F_TEETH_10_0"):
		case joaat("DLC_MP_SUM24_F_TEETH_11_0"):
			return 51240;
			break;
		
		case joaat("DLC_MP_SUM24_M_TEETH_10_1"):
		case joaat("DLC_MP_SUM24_M_TEETH_11_1"):
		case joaat("DLC_MP_SUM24_F_TEETH_10_1"):
		case joaat("DLC_MP_SUM24_F_TEETH_11_1"):
			return 51241;
			break;
		
		case joaat("DLC_MP_SUM24_M_TEETH_10_2"):
		case joaat("DLC_MP_SUM24_M_TEETH_11_2"):
		case joaat("DLC_MP_SUM24_F_TEETH_10_2"):
		case joaat("DLC_MP_SUM24_F_TEETH_11_2"):
			return 51242;
			break;
		
		case joaat("DLC_MP_SUM24_M_TEETH_10_3"):
		case joaat("DLC_MP_SUM24_M_TEETH_11_3"):
		case joaat("DLC_MP_SUM24_F_TEETH_10_3"):
		case joaat("DLC_MP_SUM24_F_TEETH_11_3"):
			return 51243;
			break;
		
		case joaat("DLC_MP_SUM24_M_TEETH_10_4"):
		case joaat("DLC_MP_SUM24_M_TEETH_11_4"):
		case joaat("DLC_MP_SUM24_F_TEETH_10_4"):
		case joaat("DLC_MP_SUM24_F_TEETH_11_4"):
			return 51244;
			break;
		
		case joaat("DLC_MP_SUM24_M_DECL_0_0"):
		case joaat("DLC_MP_SUM24_F_DECL_0_0"):
			return 51221;
			break;
		
		case joaat("DLC_MP_SUM24_M_DECL_1_0"):
		case joaat("DLC_MP_SUM24_F_DECL_1_0"):
			return 51216;
			break;
		
		case joaat("DLC_MP_SUM24_M_DECL_1_1"):
		case joaat("DLC_MP_SUM24_F_DECL_1_1"):
			return 51220;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_4_0"):
			return 51239;
			break;
		
		case joaat("DLC_MP_SUM24_F_JBIB_5_0"):
			return 51219;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_4_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_6_0"):
			return 51218;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_17_0"):
			return 51245;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_14_1"):
		case joaat("DLC_MP_SUM24_F_JBIB_17_1"):
			return 51246;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_14_2"):
		case joaat("DLC_MP_SUM24_F_JBIB_17_2"):
			return 51247;
			break;
		
		case joaat("DLC_MP_SUM24_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM24_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM24_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM24_F_PHEAD_4_0"):
		case joaat("DLC_MP_SUM24_M_OUTFIT_0"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_0"):
			return 42287;
			break;
		
		case joaat("DLC_MP_SUM24_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM24_F_PHEAD_5_0"):
			return 51215;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_1"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_1"):
			return 42257;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_2"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_2"):
			return 42268;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_3"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_3"):
			return 42286;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_4"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_4"):
			return 51215;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_5"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_5"):
			return 51237;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_6"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_6"):
			return 51238;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_7"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_7"):
			return 51234;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_8"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_8"):
			return 51235;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_9"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_9"):
			return 51236;
			break;
		
		case joaat("DLC_MP_SUM24_M_DECL_13_0"):
		case joaat("DLC_MP_SUM24_F_DECL_13_0"):
			return 51258;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM24_M_BERD_1_0"):
		case joaat("DLC_MP_SUM24_F_BERD_1_0"):
			return 51222;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_1_1"):
		case joaat("DLC_MP_SUM24_F_BERD_1_1"):
			return 51223;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_1_2"):
		case joaat("DLC_MP_SUM24_F_BERD_1_2"):
			return 51224;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_2_0"):
		case joaat("DLC_MP_SUM24_F_BERD_2_0"):
			return 51225;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_2_1"):
		case joaat("DLC_MP_SUM24_F_BERD_2_1"):
			return 51226;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_2_2"):
		case joaat("DLC_MP_SUM24_F_BERD_2_2"):
			return 51227;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_3_0"):
		case joaat("DLC_MP_SUM24_F_BERD_3_0"):
			return 51228;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_3_1"):
		case joaat("DLC_MP_SUM24_F_BERD_3_1"):
			return 51229;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_3_2"):
		case joaat("DLC_MP_SUM24_F_BERD_3_2"):
			return 51230;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_4_0"):
		case joaat("DLC_MP_SUM24_F_BERD_4_0"):
			return 51231;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_4_1"):
		case joaat("DLC_MP_SUM24_F_BERD_4_1"):
			return 51232;
			break;
		
		case joaat("DLC_MP_SUM24_M_BERD_4_2"):
		case joaat("DLC_MP_SUM24_F_BERD_4_2"):
			return 51233;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM24_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_19_0"):
			return 32407;
			break;
		
		case joaat("DLC_MP_SUM24_M_OUTFIT_10"):
		case joaat("DLC_MP_SUM24_F_OUTFIT_10"):
			return 32408;
			break;
		
		case joaat("DLC_MP_SUM24_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM24_F_LEGS_2_0"):
			return 51250;
			break;
		
		case joaat("DLC_MP_SUM24_M_LEGS_5_0"):
		case joaat("DLC_MP_SUM24_F_LEGS_5_0"):
			return 51251;
			break;
		
		case joaat("DLC_MP_SUM24_M_DECL_2_0"):
		case joaat("DLC_MP_SUM24_F_DECL_2_0"):
			return 51248;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_10_0"):
			return 51249;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_11_0"):
			return 51253;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_10_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_13_0"):
			return 51252;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_11_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_14_0"):
			return 51254;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_18_1"):
		case joaat("DLC_MP_SUM24_M_JBIB_19_1"):
		case joaat("DLC_MP_SUM24_F_JBIB_21_1"):
		case joaat("DLC_MP_SUM24_F_JBIB_22_1"):
			return 51255;
			break;
		
		case joaat("DLC_MP_SUM24_M_JBIB_18_0"):
		case joaat("DLC_MP_SUM24_M_JBIB_19_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_21_0"):
		case joaat("DLC_MP_SUM24_F_JBIB_22_0"):
			return 51256;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM24_M_BERD_6_0"):
		case joaat("DLC_MP_SUM24_F_BERD_6_0"):
			return 51257;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X23_M_BERD_2_0"):
		case joaat("DLC_MP_X23_F_BERD_2_0"):
			return 42192;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_5_0"):
		case joaat("DLC_MP_X23_F_BERD_5_0"):
			return 42212;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X23_M_DECL_10_0"):
		case joaat("DLC_MP_X23_F_DECL_10_0"):
			return 42052;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_11_0"):
		case joaat("DLC_MP_X23_F_DECL_11_0"):
			return 42211;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_3_0"):
		case joaat("DLC_MP_X23_F_DECL_3_0"):
			return 42209;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_3_1"):
		case joaat("DLC_MP_X23_F_DECL_3_1"):
			return 42213;
			break;
		
		case joaat("DLC_MP_X23_M_FEET_5_0"):
		case joaat("DLC_MP_X23_F_FEET_5_0"):
			return 42214;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_10_0"):
		case joaat("DLC_MP_X23_F_JBIB_10_0"):
		case joaat("DLC_MP_X23_M_JBIB_11_0"):
		case joaat("DLC_MP_X23_F_JBIB_11_0"):
			return 42203/*func_203*/;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_10_1"):
		case joaat("DLC_MP_X23_F_JBIB_10_1"):
		case joaat("DLC_MP_X23_M_JBIB_11_1"):
		case joaat("DLC_MP_X23_F_JBIB_11_1"):
			return 42197;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_10_2"):
		case joaat("DLC_MP_X23_F_JBIB_10_2"):
		case joaat("DLC_MP_X23_M_JBIB_11_2"):
		case joaat("DLC_MP_X23_F_JBIB_11_2"):
			return 42215;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_14_0"):
		case joaat("DLC_MP_X23_F_JBIB_14_0"):
			return 42207;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_16_0"):
		case joaat("DLC_MP_X23_F_JBIB_16_0"):
			return 42199;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_16_1"):
		case joaat("DLC_MP_X23_F_JBIB_16_1"):
			return 42201;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_5_0"):
		case joaat("DLC_MP_X23_F_JBIB_5_0"):
			return 42191;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_5_1"):
		case joaat("DLC_MP_X23_F_JBIB_5_1"):
			return 42208;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_8_0"):
		case joaat("DLC_MP_X23_F_JBIB_8_0"):
			return 42205;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_9_0"):
		case joaat("DLC_MP_X23_F_JBIB_9_0"):
			return 42193;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_9_1"):
		case joaat("DLC_MP_X23_F_JBIB_9_1"):
			return 42194;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_4_0"):
		case joaat("DLC_MP_X23_F_LEGS_4_0"):
			return 42206;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_5_0"):
		case joaat("DLC_MP_X23_F_LEGS_5_0"):
			return 42195;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_5_1"):
		case joaat("DLC_MP_X23_F_LEGS_5_1"):
			return 42196;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_6_0"):
		case joaat("DLC_MP_X23_F_LEGS_6_0"):
			return 42204;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_6_1"):
		case joaat("DLC_MP_X23_F_LEGS_6_1"):
			return 42198;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_6_2"):
		case joaat("DLC_MP_X23_F_LEGS_6_2"):
			return 42216;
			break;
		
		case joaat("DLC_MP_X23_M_LEGS_8_0"):
		case joaat("DLC_MP_X23_F_LEGS_8_0"):
			return 42200;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_0"):
		case joaat("DLC_MP_X23_F_OUTFIT_0"):
			return 42055;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_1"):
		case joaat("DLC_MP_X23_F_OUTFIT_1"):
			return 42058;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_2"):
		case joaat("DLC_MP_X23_F_OUTFIT_2"):
			return 42053;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_12"):
		case joaat("DLC_MP_X23_F_OUTFIT_12"):
			return 42057;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_13"):
		case joaat("DLC_MP_X23_F_OUTFIT_13"):
			return 42062;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_12_0"):
		case joaat("DLC_MP_X23_F_PHEAD_12_0"):
		case joaat("DLC_MP_X23_M_PHEAD_13_0"):
		case joaat("DLC_MP_X23_F_PHEAD_13_0"):
			return 42202;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_17_0"):
		case joaat("DLC_MP_X23_F_PHEAD_17_0"):
		case joaat("DLC_MP_X23_M_PHEAD_18_0"):
		case joaat("DLC_MP_X23_F_PHEAD_18_0"):
			return 42217;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_12_1"):
		case joaat("DLC_MP_X23_F_PHEAD_12_1"):
		case joaat("DLC_MP_X23_M_PHEAD_13_1"):
		case joaat("DLC_MP_X23_F_PHEAD_13_1"):
			return 42056;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_6_0"):
		case joaat("DLC_MP_X23_F_PHEAD_6_0"):
		case joaat("DLC_MP_X23_M_PHEAD_7_0"):
		case joaat("DLC_MP_X23_F_PHEAD_7_0"):
			return 42210;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_6_1"):
		case joaat("DLC_MP_X23_F_PHEAD_6_1"):
		case joaat("DLC_MP_X23_M_PHEAD_7_1"):
		case joaat("DLC_MP_X23_F_PHEAD_7_1"):
			return 42212;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X23_M_BERD_3_0"):
		case joaat("DLC_MP_X23_F_BERD_3_0"):
			return 42154;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_3_1"):
		case joaat("DLC_MP_X23_F_BERD_3_1"):
			return 42155;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_3_2"):
		case joaat("DLC_MP_X23_F_BERD_3_2"):
			return 42156;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_3_3"):
		case joaat("DLC_MP_X23_F_BERD_3_3"):
			return 42157;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_8_1"):
		case joaat("DLC_MP_X23_F_BERD_8_1"):
			return 42054;
			break;
		
		case joaat("DLC_MP_X23_M_BERD_9_0"):
		case joaat("DLC_MP_X23_F_BERD_9_0"):
			return 42188;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X23_M_OUTFIT_11"):
		case joaat("DLC_MP_X23_F_OUTFIT_11"):
			return 42152;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_3"):
		case joaat("DLC_MP_X23_F_OUTFIT_3"):
			return 42111;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_4"):
		case joaat("DLC_MP_X23_F_OUTFIT_4"):
			return 42063;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_5"):
		case joaat("DLC_MP_X23_F_OUTFIT_5"):
			return 42153;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_6"):
		case joaat("DLC_MP_X23_F_OUTFIT_6"):
			return 42119;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_7"):
		case joaat("DLC_MP_X23_F_OUTFIT_7"):
			return 34761;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_8"):
		case joaat("DLC_MP_X23_F_OUTFIT_8"):
			return 42177;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_9"):
		case joaat("DLC_MP_X23_F_OUTFIT_9"):
			return 42145;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_10"):
		case joaat("DLC_MP_X23_F_OUTFIT_10"):
			return 42146;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_0"):
		case joaat("DLC_MP_X23_F_PEYES_0_0"):
			return 42158;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_1"):
		case joaat("DLC_MP_X23_F_PEYES_0_1"):
			return 42159;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_2"):
		case joaat("DLC_MP_X23_F_PEYES_0_2"):
			return 42160;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_3"):
		case joaat("DLC_MP_X23_F_PEYES_0_3"):
			return 42161;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_4"):
		case joaat("DLC_MP_X23_F_PEYES_0_4"):
			return 42162;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_5"):
		case joaat("DLC_MP_X23_F_PEYES_0_5"):
			return 42163;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_6"):
		case joaat("DLC_MP_X23_F_PEYES_0_6"):
			return 42164;
			break;
		
		case joaat("DLC_MP_X23_M_PEYES_0_7"):
		case joaat("DLC_MP_X23_F_PEYES_0_7"):
			return 42165;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_0_0"):
		case joaat("DLC_MP_X23_F_PHEAD_0_0"):
		case joaat("DLC_MP_X23_M_PHEAD_1_0"):
		case joaat("DLC_MP_X23_F_PHEAD_1_0"):
			return 42178;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_0"):
		case joaat("DLC_MP_X23_F_PHEAD_11_0"):
			return 42130;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_1"):
		case joaat("DLC_MP_X23_F_PHEAD_11_1"):
			return 42131;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_2"):
		case joaat("DLC_MP_X23_F_PHEAD_11_2"):
			return 42132;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_3"):
		case joaat("DLC_MP_X23_F_PHEAD_11_3"):
			return 42133;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_4"):
		case joaat("DLC_MP_X23_F_PHEAD_11_4"):
			return 42134;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_5"):
		case joaat("DLC_MP_X23_F_PHEAD_11_5"):
			return 42135;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_6"):
		case joaat("DLC_MP_X23_F_PHEAD_11_6"):
			return 42136;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_7"):
		case joaat("DLC_MP_X23_F_PHEAD_11_7"):
			return 42137;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_8"):
		case joaat("DLC_MP_X23_F_PHEAD_11_8"):
			return 42138;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_9"):
		case joaat("DLC_MP_X23_F_PHEAD_11_9"):
			return 42139;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_10"):
		case joaat("DLC_MP_X23_F_PHEAD_11_10"):
			return 42140;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_11"):
		case joaat("DLC_MP_X23_F_PHEAD_11_11"):
			return 42141;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_12"):
		case joaat("DLC_MP_X23_F_PHEAD_11_12"):
			return 42142;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_13"):
		case joaat("DLC_MP_X23_F_PHEAD_11_13"):
			return 42143;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_11_14"):
		case joaat("DLC_MP_X23_F_PHEAD_11_14"):
			return 42144;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_14_0"):
		case joaat("DLC_MP_X23_F_PHEAD_14_0"):
			return 42173;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_14_1"):
		case joaat("DLC_MP_X23_F_PHEAD_14_1"):
			return 42174;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_14_2"):
		case joaat("DLC_MP_X23_F_PHEAD_14_2"):
			return 42175;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_15_3"):
		case joaat("DLC_MP_X23_M_PHEAD_16_3"):
		case joaat("DLC_MP_X23_F_PHEAD_15_3"):
		case joaat("DLC_MP_X23_F_PHEAD_16_3"):
			return 42054;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_3_0"):
		case joaat("DLC_MP_X23_F_PHEAD_3_0"):
			return 42166;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_3_1"):
		case joaat("DLC_MP_X23_F_PHEAD_3_1"):
			return 42167;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_3_2"):
		case joaat("DLC_MP_X23_F_PHEAD_3_2"):
			return 42168;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_8_0"):
		case joaat("DLC_MP_X23_F_PHEAD_8_0"):
			return 42171;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_8_1"):
		case joaat("DLC_MP_X23_F_PHEAD_8_1"):
			return 42172;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_9_0"):
		case joaat("DLC_MP_X23_F_PHEAD_9_0"):
			return 42169;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_9_1"):
		case joaat("DLC_MP_X23_F_PHEAD_9_1"):
			return 42170;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_27_0"):
		case joaat("DLC_MP_X23_F_JBIB_29_0"):
			return 42129;
			break;
		
		case joaat("DLC_MP_X23_M_JBIB_27_1"):
		case joaat("DLC_MP_X23_F_JBIB_29_1"):
			return 42128;
			break;
		
		case joaat("DLC_MP_X23_M_OUTFIT_14"):
		case joaat("DLC_MP_X23_F_OUTFIT_14"):
			return 42176;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_17_0"):
		case joaat("DLC_MP_X23_F_DECL_16_0"):
			return 42179;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_16_0"):
		case joaat("DLC_MP_X23_F_DECL_16_1"):
			return 42180;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_16_1"):
		case joaat("DLC_MP_X23_F_DECL_16_2"):
			return 42181;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_16_2"):
		case joaat("DLC_MP_X23_F_DECL_16_3"):
			return 42182;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_16_3"):
		case joaat("DLC_MP_X23_F_DECL_16_4"):
			return 42183;
			break;
		
		case joaat("DLC_MP_X23_M_DECL_17_1"):
		case joaat("DLC_MP_X23_F_DECL_16_5"):
			return 42184;
			break;
		
		case joaat("DLC_MP_X23_F_JBIB_28_0"):
			return 42185;
			break;
		
		case joaat("DLC_MP_X23_F_JBIB_28_1"):
			return 42186;
			break;
		
		case joaat("DLC_MP_X23_F_JBIB_26_0"):
			return 42187;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_3_3"):
		case joaat("DLC_MP_X23_F_PHEAD_3_3"):
			return 42189;
			break;
		
		case joaat("DLC_MP_X23_M_PHEAD_15_4"):
		case joaat("DLC_MP_X23_F_PHEAD_15_4"):
		case joaat("DLC_MP_X23_M_PHEAD_16_4"):
		case joaat("DLC_MP_X23_F_PHEAD_16_4"):
			return 42190;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H3_M_OUTFIT_SH_36"):
		case joaat("DLC_MP_H3_F_OUTFIT_SH_36"):
			return 41995;
			break;
		
		case joaat("DLC_MP_H3_M_OUTFIT_SH_16"):
		case joaat("DLC_MP_H3_F_OUTFIT_SH_16"):
			return 41675;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_3"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_4"):
			return 41994;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_4"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_5"):
			return 41593;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_10_0"):
		case joaat("DLC_MP_SUM23_F_DECL_15_0"):
			return 41996;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM23_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM23_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_1_0"):
			return 41915;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM23_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_5_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_6_0"):
			return 41916;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM23_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM23_F_PHEAD_5_1"):
		case joaat("DLC_MP_SUM23_F_PHEAD_6_1"):
			return 41917;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM23_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM23_F_PHEAD_5_2"):
		case joaat("DLC_MP_SUM23_F_PHEAD_6_2"):
			return 41918;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM23_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM23_F_PHEAD_5_3"):
		case joaat("DLC_MP_SUM23_F_PHEAD_6_3"):
			return 41919;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_2_0"):
			return 41920;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_14_0"):
		case joaat("DLC_MP_SUM23_F_LEGS_19_0"):
			return 41921;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_0_0"):
		case joaat("DLC_MP_SUM23_F_BERD_0_0"):
			return 41922;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_0_1"):
		case joaat("DLC_MP_SUM23_F_BERD_0_1"):
			return 41923;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_0_2"):
		case joaat("DLC_MP_SUM23_F_BERD_0_2"):
			return 41924;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_2_0"):
		case joaat("DLC_MP_SUM23_F_BERD_2_0"):
			return 41925;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_2_1"):
		case joaat("DLC_MP_SUM23_F_BERD_2_1"):
			return 41926;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_2_2"):
		case joaat("DLC_MP_SUM23_F_BERD_2_2"):
			return 41927;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_4_0"):
		case joaat("DLC_MP_SUM23_F_BERD_4_0"):
			return 41928;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_4_1"):
		case joaat("DLC_MP_SUM23_F_BERD_4_1"):
			return 41929;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_4_2"):
		case joaat("DLC_MP_SUM23_F_BERD_4_2"):
			return 41930;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_1_0"):
		case joaat("DLC_MP_SUM23_F_BERD_1_0"):
			return 41931;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_1_1"):
		case joaat("DLC_MP_SUM23_F_BERD_1_1"):
			return 41932;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_1_2"):
		case joaat("DLC_MP_SUM23_F_BERD_1_2"):
			return 41933;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_3_0"):
		case joaat("DLC_MP_SUM23_F_BERD_3_0"):
			return 41934;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_3_1"):
		case joaat("DLC_MP_SUM23_F_BERD_3_1"):
			return 41935;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_3_2"):
		case joaat("DLC_MP_SUM23_F_BERD_3_2"):
			return 41936;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_7_0"):
		case joaat("DLC_MP_SUM23_F_BERD_7_0"):
			return 41937;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_9_0"):
		case joaat("DLC_MP_SUM23_F_BERD_9_0"):
			return 41938;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_9_1"):
		case joaat("DLC_MP_SUM23_F_BERD_9_1"):
			return 41939;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_9_2"):
		case joaat("DLC_MP_SUM23_F_BERD_9_2"):
			return 41940;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_9_3"):
		case joaat("DLC_MP_SUM23_F_BERD_9_3"):
			return 41941;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_2"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_3"):
			return 41943;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_6"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_7"):
			return 41944;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_16"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_17"):
			return 41945;
			break;
		
		case joaat("DLC_MP_SUM23_F_JBIB_37_0"):
			return 41946;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_8"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_9"):
			return 41947;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_9"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_10"):
			return 41948;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM23_M_JBIB_9_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_10_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_11_0"):
			return 41949;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_22_1"):
		case joaat("DLC_MP_SUM23_F_JBIB_24_1"):
		case joaat("DLC_MP_SUM23_F_JBIB_25_1"):
			return 41950;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_22_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_25_0"):
			return 41951;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_22_2"):
		case joaat("DLC_MP_SUM23_F_JBIB_24_2"):
		case joaat("DLC_MP_SUM23_F_JBIB_25_2"):
			return 41952;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_13"):
		case joaat("DLC_MP_SUM23_F_DECL_25_13"):
		case joaat("DLC_MP_SUM23_F_DECL_27_13"):
			return 41953;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_10"):
		case joaat("DLC_MP_SUM23_F_DECL_25_10"):
		case joaat("DLC_MP_SUM23_F_DECL_27_10"):
			return 41954;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_8"):
		case joaat("DLC_MP_SUM23_F_DECL_25_8"):
		case joaat("DLC_MP_SUM23_F_DECL_27_8"):
			return 41955;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_9"):
		case joaat("DLC_MP_SUM23_F_DECL_25_9"):
		case joaat("DLC_MP_SUM23_F_DECL_27_9"):
			return 41956;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_23_2"):
		case joaat("DLC_MP_SUM23_F_DECL_26_2"):
		case joaat("DLC_MP_SUM23_F_DECL_28_2"):
			return 41957;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_23_4"):
		case joaat("DLC_MP_SUM23_F_DECL_26_4"):
		case joaat("DLC_MP_SUM23_F_DECL_28_4"):
			return 41958;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_7"):
		case joaat("DLC_MP_SUM23_F_DECL_25_7"):
		case joaat("DLC_MP_SUM23_F_DECL_27_7"):
			return 41959;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_11"):
		case joaat("DLC_MP_SUM23_F_DECL_25_11"):
		case joaat("DLC_MP_SUM23_F_DECL_27_11"):
			return 41960;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_23_3"):
		case joaat("DLC_MP_SUM23_F_DECL_26_3"):
		case joaat("DLC_MP_SUM23_F_DECL_28_3"):
			return 41961;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_12"):
		case joaat("DLC_MP_SUM23_F_DECL_25_12"):
		case joaat("DLC_MP_SUM23_F_DECL_27_12"):
			return 41962;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_23_1"):
		case joaat("DLC_MP_SUM23_F_DECL_26_1"):
		case joaat("DLC_MP_SUM23_F_DECL_28_1"):
			return 41963;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_6"):
		case joaat("DLC_MP_SUM23_F_DECL_25_6"):
		case joaat("DLC_MP_SUM23_F_DECL_27_6"):
			return 41964;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_1"):
		case joaat("DLC_MP_SUM23_F_DECL_25_1"):
		case joaat("DLC_MP_SUM23_F_DECL_27_1"):
			return 41965;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_23_0"):
		case joaat("DLC_MP_SUM23_F_DECL_26_0"):
		case joaat("DLC_MP_SUM23_F_DECL_28_0"):
			return 41966;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_0"):
		case joaat("DLC_MP_SUM23_F_DECL_25_0"):
		case joaat("DLC_MP_SUM23_F_DECL_27_0"):
			return 41967;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_3"):
		case joaat("DLC_MP_SUM23_F_DECL_25_3"):
		case joaat("DLC_MP_SUM23_F_DECL_27_3"):
			return 41968;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_2"):
		case joaat("DLC_MP_SUM23_F_DECL_25_2"):
		case joaat("DLC_MP_SUM23_F_DECL_27_2"):
			return 41969;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_4"):
		case joaat("DLC_MP_SUM23_F_DECL_25_4"):
		case joaat("DLC_MP_SUM23_F_DECL_27_4"):
			return 41970;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_22_5"):
		case joaat("DLC_MP_SUM23_F_DECL_25_5"):
		case joaat("DLC_MP_SUM23_F_DECL_27_5"):
			return 41971;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_12_0"):
		case joaat("DLC_MP_SUM23_M_DECL_14_0"):
		case joaat("DLC_MP_SUM23_F_DECL_11_0"):
		case joaat("DLC_MP_SUM23_F_DECL_13_0"):
			return 41972;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_13_0"):
		case joaat("DLC_MP_SUM23_M_DECL_15_0"):
		case joaat("DLC_MP_SUM23_F_DECL_12_0"):
		case joaat("DLC_MP_SUM23_F_DECL_14_0"):
			return 41973;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_12_1"):
		case joaat("DLC_MP_SUM23_M_DECL_14_1"):
		case joaat("DLC_MP_SUM23_F_DECL_11_1"):
		case joaat("DLC_MP_SUM23_F_DECL_13_1"):
			return 41974;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_13_1"):
		case joaat("DLC_MP_SUM23_M_DECL_15_1"):
		case joaat("DLC_MP_SUM23_F_DECL_12_1"):
		case joaat("DLC_MP_SUM23_F_DECL_14_1"):
			return 41975;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_17_1"):
		case joaat("DLC_MP_SUM23_F_DECL_20_1"):
			return 41976;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_17_0"):
		case joaat("DLC_MP_SUM23_F_DECL_20_0"):
			return 41977;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_31_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_35_0"):
			return 41978;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_3_0"):
		case joaat("DLC_MP_SUM23_F_DECL_3_0"):
			return 41979;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_2_0"):
			return 41980;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM23_F_OUTFIT_1"):
			return 41895;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_1_0"):
		case joaat("DLC_MP_SUM23_F_LEGS_3_0"):
			return 41885;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_1_1"):
		case joaat("DLC_MP_SUM23_F_LEGS_3_1"):
			return 41886;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM23_F_LEGS_4_0"):
			return 41887;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_3_0"):
		case joaat("DLC_MP_SUM23_F_LEGS_5_0"):
			return 41888;
			break;
		
		case joaat("DLC_MP_SUM23_M_LEGS_7_0"):
		case joaat("DLC_MP_SUM23_F_LEGS_10_0"):
			return 41889;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_12"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_13"):
			return 41890/*func_202*/;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_11"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_12"):
			return 41891;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_13"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_14"):
			return 41892;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_14"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_15"):
			return 41893;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_46_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_53_0"):
			return 41896;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_8_0"):
		case joaat("DLC_MP_SUM23_F_DECL_9_0"):
			return 41903;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_1_1"):
		case joaat("DLC_MP_SUM23_M_DECL_2_1"):
		case joaat("DLC_MP_SUM23_F_DECL_1_1"):
		case joaat("DLC_MP_SUM23_F_DECL_2_1"):
			return 41904;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_1_2"):
		case joaat("DLC_MP_SUM23_M_DECL_2_2"):
		case joaat("DLC_MP_SUM23_F_DECL_1_2"):
		case joaat("DLC_MP_SUM23_F_DECL_2_2"):
			return 41905;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_1_3"):
		case joaat("DLC_MP_SUM23_M_DECL_2_3"):
		case joaat("DLC_MP_SUM23_F_DECL_1_3"):
		case joaat("DLC_MP_SUM23_F_DECL_2_3"):
			return 41906;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_1_0"):
		case joaat("DLC_MP_SUM23_M_DECL_2_0"):
		case joaat("DLC_MP_SUM23_F_DECL_1_0"):
		case joaat("DLC_MP_SUM23_F_DECL_2_0"):
			return 41907;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_1_4"):
		case joaat("DLC_MP_SUM23_M_DECL_2_4"):
		case joaat("DLC_MP_SUM23_F_DECL_1_4"):
		case joaat("DLC_MP_SUM23_F_DECL_2_4"):
			return 41908;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_4_0"):
		case joaat("DLC_MP_SUM23_M_JBIB_5_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_5_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_6_0"):
			return 41909;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_8_0"):
			return 41910;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_6_1"):
		case joaat("DLC_MP_SUM23_F_JBIB_8_1"):
			return 41911;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_6_2"):
		case joaat("DLC_MP_SUM23_F_JBIB_8_2"):
			return 41912;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_6_3"):
		case joaat("DLC_MP_SUM23_F_JBIB_8_3"):
			return 41913;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM23_M_BERD_8_0"):
		case joaat("DLC_MP_SUM23_F_BERD_8_0"):
			return 41724;
			break;
		
		case joaat("DLC_MP_SUM23_M_BERD_6_0"):
		case joaat("DLC_MP_SUM23_F_BERD_6_0"):
			return 41784;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_5"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_5"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_5"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_5"):
			return 41720;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_3"):
		case joaat("DLC_MP_SUM23_F_DECL_19_3"):
			return 41721;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_3"):
		case joaat("DLC_MP_SUM23_M_DECL_26_3"):
		case joaat("DLC_MP_SUM23_F_DECL_29_3"):
		case joaat("DLC_MP_SUM23_F_DECL_31_3"):
			return 41722;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_0"):
		case joaat("DLC_MP_SUM23_F_DECL_19_0"):
			return 41723;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_6"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_6"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_6"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_6"):
			return 41725;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_4"):
		case joaat("DLC_MP_SUM23_F_DECL_19_4"):
			return 41726;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_4"):
		case joaat("DLC_MP_SUM23_M_DECL_26_4"):
		case joaat("DLC_MP_SUM23_F_DECL_29_4"):
		case joaat("DLC_MP_SUM23_F_DECL_31_4"):
			return 41728;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_4_0"):
		case joaat("DLC_MP_SUM23_F_DECL_4_0"):
			return 41729;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_25_0"):
		case joaat("DLC_MP_SUM23_M_DECL_27_0"):
		case joaat("DLC_MP_SUM23_F_DECL_30_0"):
		case joaat("DLC_MP_SUM23_F_DECL_32_0"):
			return 41731;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_0"):
			return 41732;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_5_0"):
		case joaat("DLC_MP_SUM23_M_DECL_6_0"):
		case joaat("DLC_MP_SUM23_F_DECL_5_0"):
		case joaat("DLC_MP_SUM23_F_DECL_6_0"):
			return 41733;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_1"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_1"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_1"):
			return 41734;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_42_11"):
		case joaat("DLC_MP_SUM23_F_JBIB_49_11"):
			return 41735;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_7"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_7"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_7"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_7"):
			return 41737;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_5"):
		case joaat("DLC_MP_SUM23_F_DECL_19_5"):
			return 41738;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_1"):
		case joaat("DLC_MP_SUM23_F_DECL_21_1"):
			return 41739;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_5"):
		case joaat("DLC_MP_SUM23_M_DECL_26_5"):
		case joaat("DLC_MP_SUM23_F_DECL_29_5"):
		case joaat("DLC_MP_SUM23_F_DECL_31_5"):
			return 41740;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_42_10"):
		case joaat("DLC_MP_SUM23_F_JBIB_49_10"):
			return 41741;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_2"):
		case joaat("DLC_MP_SUM23_F_DECL_21_2"):
			return 41742;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_6"):
		case joaat("DLC_MP_SUM23_M_DECL_26_6"):
		case joaat("DLC_MP_SUM23_F_DECL_29_6"):
		case joaat("DLC_MP_SUM23_F_DECL_31_6"):
			return 41743;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_12_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_14_0"):
			return 41745;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_25_1"):
		case joaat("DLC_MP_SUM23_M_DECL_27_1"):
		case joaat("DLC_MP_SUM23_F_DECL_30_1"):
		case joaat("DLC_MP_SUM23_F_DECL_32_1"):
			return 41746;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_0"):
		case joaat("DLC_MP_SUM23_F_DECL_21_0"):
			return 41748;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_0"):
		case joaat("DLC_MP_SUM23_M_DECL_26_0"):
		case joaat("DLC_MP_SUM23_F_DECL_29_0"):
		case joaat("DLC_MP_SUM23_F_DECL_31_0"):
			return 41750;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_8"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_8"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_8"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_8"):
			return 41751;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_6"):
		case joaat("DLC_MP_SUM23_F_DECL_19_6"):
			return 41752;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_3"):
		case joaat("DLC_MP_SUM23_F_DECL_21_3"):
			return 41753;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_7"):
		case joaat("DLC_MP_SUM23_M_DECL_26_7"):
		case joaat("DLC_MP_SUM23_F_DECL_29_7"):
		case joaat("DLC_MP_SUM23_F_DECL_31_7"):
			return 41754;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_11"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_11"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_11"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_11"):
			return 41755;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_9"):
		case joaat("DLC_MP_SUM23_F_DECL_19_9"):
			return 41756;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_4"):
		case joaat("DLC_MP_SUM23_F_DECL_21_4"):
			return 41757;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_51_10"):
		case joaat("DLC_MP_SUM23_M_JBIB_52_10"):
		case joaat("DLC_MP_SUM23_F_JBIB_59_10"):
		case joaat("DLC_MP_SUM23_F_JBIB_60_10"):
			return 41758;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_9"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_9"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_9"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_9"):
			return 41759;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_7"):
		case joaat("DLC_MP_SUM23_F_DECL_19_7"):
			return 41761;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_51_8"):
		case joaat("DLC_MP_SUM23_M_JBIB_52_8"):
		case joaat("DLC_MP_SUM23_F_JBIB_59_8"):
		case joaat("DLC_MP_SUM23_F_JBIB_60_8"):
			return 41762;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_2"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_2"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_2"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_2"):
			return 41763;
			break;
		
		case joaat("DLC_MP_SUM23_M_TEETH_6_0"):
		case joaat("DLC_MP_SUM23_M_TEETH_7_0"):
		case joaat("DLC_MP_SUM23_F_TEETH_7_0"):
		case joaat("DLC_MP_SUM23_F_TEETH_8_0"):
			return 41764;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_3"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_3"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_3"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_3"):
			return 41765;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_1"):
		case joaat("DLC_MP_SUM23_F_DECL_19_1"):
			return 41766;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_4"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_4"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_4"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_4"):
			return 41767;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_34_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_39_0"):
			return 41769;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_26_0"):
		case joaat("DLC_MP_SUM23_M_JBIB_27_0"):
		case joaat("DLC_MP_SUM23_M_JBIB__28_0"):
		case joaat("DLC_MP_SUM23_M_JBIB_29_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_30_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_31_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_32_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_33_0"):
			return 41770;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_1"):
		case joaat("DLC_MP_SUM23_M_DECL_26_1"):
		case joaat("DLC_MP_SUM23_F_DECL_29_1"):
		case joaat("DLC_MP_SUM23_F_DECL_31_1"):
			return 41771;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_2"):
		case joaat("DLC_MP_SUM23_M_DECL_26_2"):
		case joaat("DLC_MP_SUM23_F_DECL_29_2"):
		case joaat("DLC_MP_SUM23_F_DECL_31_2"):
			return 41772;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_20_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_22_0"):
			return 41773;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_19_0"):
		case joaat("DLC_MP_SUM23_F_DECL_22_0"):
			return 41774;
			break;
		
		case joaat("DLC_MP_SUM23_M_JBIB_40_0"):
		case joaat("DLC_MP_SUM23_M_JBIB_41_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_47_0"):
		case joaat("DLC_MP_SUM23_F_JBIB_48_0"):
			return 41776;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM23_M_DECL_19_1"):
		case joaat("DLC_MP_SUM23_F_DECL_22_1"):
			return 41777;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_9_0"):
		case joaat("DLC_MP_SUM23_F_DECL_10_0"):
			return 41778;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_10"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_10"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_10"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_10"):
			return 41780;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_8"):
		case joaat("DLC_MP_SUM23_F_DECL_19_8"):
			return 41782;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_8"):
		case joaat("DLC_MP_SUM23_M_DECL_26_8"):
		case joaat("DLC_MP_SUM23_F_DECL_29_8"):
		case joaat("DLC_MP_SUM23_F_DECL_31_8"):
			return 41783;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_2"):
		case joaat("DLC_MP_SUM23_F_DECL_19_2"):
			return 41785;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_12"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_12"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_12"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_12"):
			return 41786;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_10"):
		case joaat("DLC_MP_SUM23_F_DECL_19_10"):
			return 41787;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_9"):
		case joaat("DLC_MP_SUM23_M_DECL_26_9"):
		case joaat("DLC_MP_SUM23_F_DECL_29_9"):
		case joaat("DLC_MP_SUM23_F_DECL_31_9"):
			return 41788;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_13"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_13"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_13"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_13"):
			return 41789;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_19_2"):
		case joaat("DLC_MP_SUM23_F_DECL_22_2"):
			return 41790;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_10"):
		case joaat("DLC_MP_SUM23_M_DECL_26_10"):
		case joaat("DLC_MP_SUM23_F_DECL_29_10"):
		case joaat("DLC_MP_SUM23_F_DECL_31_10"):
			return 41791;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_15"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_15"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_15"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_15"):
			return 41792;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_7"):
		case joaat("DLC_MP_SUM23_F_DECL_21_7"):
			return 41793;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_13"):
		case joaat("DLC_MP_SUM23_M_DECL_26_13"):
		case joaat("DLC_MP_SUM23_F_DECL_29_13"):
		case joaat("DLC_MP_SUM23_F_DECL_31_13"):
			return 41795;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_16_11"):
		case joaat("DLC_MP_SUM23_F_DECL_19_11"):
			return 41796;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_5"):
		case joaat("DLC_MP_SUM23_F_DECL_21_5"):
			return 41797;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_11"):
		case joaat("DLC_MP_SUM23_M_DECL_26_11"):
		case joaat("DLC_MP_SUM23_F_DECL_29_11"):
		case joaat("DLC_MP_SUM23_F_DECL_31_11"):
			return 41799;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_18_6"):
		case joaat("DLC_MP_SUM23_F_DECL_21_6"):
			return 41800;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_24_12"):
		case joaat("DLC_MP_SUM23_M_DECL_26_12"):
		case joaat("DLC_MP_SUM23_F_DECL_29_12"):
		case joaat("DLC_MP_SUM23_F_DECL_31_12"):
			return 41801;
			break;
		
		case joaat("DLC_MP_SUM23_M_PHEAD_3_14"):
		case joaat("DLC_MP_SUM23_F_PHEAD_3_14"):
		case joaat("DLC_MP_SUM23_M_PHEAD_4_14"):
		case joaat("DLC_MP_SUM23_F_PHEAD_4_14"):
			return 41803;
			break;
		
		case joaat("DLC_MP_SUM23_M_DECL_25_2"):
		case joaat("DLC_MP_SUM23_M_DECL_27_2"):
		case joaat("DLC_MP_SUM23_F_DECL_30_2"):
		case joaat("DLC_MP_SUM23_F_DECL_32_2"):
			return 41805;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_5"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_6"):
			return 41806;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_1"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_2"):
			return 41807;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_15"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_16"):
			return 41808;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_0"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_0"):
			return 41809;
			break;
		
		case joaat("DLC_MP_SUM23_M_OUTFIT_7"):
		case joaat("DLC_MP_SUM23_F_OUTFIT_8"):
			return 41810;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_2023_01_Tee_000_M"):
		case joaat("MP_2023_01_Tee_000_F"):
			return 41897;
			break;
		
		case joaat("MP_2023_01_Tee_001_M"):
		case joaat("MP_2023_01_Tee_001_F"):
			return 41899;
			break;
		
		case joaat("MP_2023_01_Tee_002_M"):
		case joaat("MP_2023_01_Tee_002_F"):
			return 41898;
			break;
		
		case joaat("MP_2023_01_Tee_003_M"):
		case joaat("MP_2023_01_Tee_003_F"):
			return 41900;
			break;
		
		case joaat("MP_2023_01_Tee_004_M"):
		case joaat("MP_2023_01_Tee_004_F"):
			return 41901;
			break;
		
		case joaat("MP_2023_01_Tee_005_M"):
		case joaat("MP_2023_01_Tee_005_F"):
			return 41902;
			break;
		
		case joaat("MP_2023_01_Tee_006_M"):
		case joaat("MP_2023_01_Tee_006_F"):
			return 41894;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X22_M_BERD_0_2"):
		case joaat("DLC_MP_X22_F_BERD_0_2"):
			return 36759;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X22_M_JBIB_3_12"):
		case joaat("DLC_MP_X22_F_JBIB_3_12"):
			return 36703;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_2_12"):
		case joaat("DLC_MP_X22_F_JBIB_2_12"):
			return 36704;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_15_0"):
		case joaat("DLC_MP_X22_F_JBIB_18_0"):
			return 36718;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_16_0"):
		case joaat("DLC_MP_X22_F_JBIB_19_0"):
			return 36737;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_12_0"):
		case joaat("DLC_MP_X22_F_JBIB_14_0"):
		case joaat("DLC_MP_X22_F_JBIB_15_0"):
			return 36738;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_2_0"):
		case joaat("DLC_MP_X22_F_LEGS_3_0"):
			return 36751;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_3_0"):
		case joaat("DLC_MP_X22_F_LEGS_4_0"):
			return 36752;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_1_0"):
		case joaat("DLC_MP_X22_F_PEYES_1_0"):
			return 36763;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_7_0"):
		case joaat("DLC_MP_X22_F_PHEAD_7_0"):
			return 36783;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_13_0"):
		case joaat("DLC_MP_X22_F_JBIB_16_0"):
			return 36784;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_6_0"):
		case joaat("DLC_MP_X22_F_PHEAD_6_0"):
			return 36782;
			break;
		
		case joaat("DLC_MP_X22_M_OUTFIT_0"):
		case joaat("DLC_MP_X22_F_OUTFIT_0"):
			return 36769;
			break;
		
		case joaat("DLC_MP_X22_M_OUTFIT_2"):
		case joaat("DLC_MP_X22_F_OUTFIT_2"):
			return 36768;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X22_M_BERD_0_0"):
		case joaat("DLC_MP_X22_F_BERD_0_0"):
			return 36757;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_0_1"):
		case joaat("DLC_MP_X22_F_BERD_0_1"):
			return 36758;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_2_0"):
		case joaat("DLC_MP_X22_F_BERD_2_0"):
			return 36739;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_2_1"):
		case joaat("DLC_MP_X22_F_BERD_2_1"):
			return 36740;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_2_7"):
		case joaat("DLC_MP_X22_F_BERD_2_7"):
			return 36741;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_2_8"):
		case joaat("DLC_MP_X22_F_BERD_2_8"):
			return 36742;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_2_9"):
		case joaat("DLC_MP_X22_F_BERD_2_9"):
			return 36743;
			break;
		
		case joaat("DLC_MP_X22_M_BERD_4_0"):
		case joaat("DLC_MP_X22_F_BERD_4_0"):
			return 36775;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X22_M_JBIB_4_0"):
		case joaat("DLC_MP_X22_M_JBIB_4_1"):
		case joaat("DLC_MP_X22_M_JBIB_5_0"):
		case joaat("DLC_MP_X22_M_JBIB_5_1"):
		case joaat("DLC_MP_X22_F_JBIB_4_0"):
		case joaat("DLC_MP_X22_F_JBIB_4_1"):
		case joaat("DLC_MP_X22_F_JBIB_5_0"):
		case joaat("DLC_MP_X22_F_JBIB_5_1"):
		case joaat("DLC_MP_X22_F_JBIB_6_0"):
		case joaat("DLC_MP_X22_F_JBIB_6_1"):
		case joaat("DLC_MP_X22_F_JBIB_7_0"):
		case joaat("DLC_MP_X22_F_JBIB_7_1"):
			return 36809;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_3_3"):
		case joaat("DLC_MP_X22_F_JBIB_3_3"):
			return 36699;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_2_3"):
		case joaat("DLC_MP_X22_F_JBIB_2_3"):
			return 36700;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_3_9"):
		case joaat("DLC_MP_X22_F_JBIB_3_9"):
			return 36701;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_2_9"):
		case joaat("DLC_MP_X22_F_JBIB_2_9"):
			return 36702;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_8_0"):
		case joaat("DLC_MP_X22_M_JBIB_9_0"):
		case joaat("DLC_MP_X22_F_JBIB_10_0"):
		case joaat("DLC_MP_X22_F_JBIB_11_0"):
			return 36715;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_16"):
		case joaat("DLC_MP_X22_F_JBIB_12_16"):
			return 36719;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_0"):
		case joaat("DLC_MP_X22_F_JBIB_12_0"):
			return 36720;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_1"):
		case joaat("DLC_MP_X22_F_JBIB_12_1"):
			return 36721;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_2"):
		case joaat("DLC_MP_X22_F_JBIB_12_2"):
			return 36722;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_3"):
		case joaat("DLC_MP_X22_F_JBIB_12_3"):
			return 36723;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_4"):
		case joaat("DLC_MP_X22_F_JBIB_12_4"):
			return 36724;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_5"):
		case joaat("DLC_MP_X22_F_JBIB_12_5"):
			return 36725;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_6"):
		case joaat("DLC_MP_X22_F_JBIB_12_6"):
			return 36726;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_7"):
		case joaat("DLC_MP_X22_F_JBIB_12_7"):
			return 36727;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_8"):
		case joaat("DLC_MP_X22_F_JBIB_12_8"):
			return 36728;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_9"):
		case joaat("DLC_MP_X22_F_JBIB_12_9"):
			return 36729;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_10"):
		case joaat("DLC_MP_X22_F_JBIB_12_10"):
			return 36730;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_11"):
		case joaat("DLC_MP_X22_F_JBIB_12_11"):
			return 36731;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_12"):
		case joaat("DLC_MP_X22_F_JBIB_12_12"):
			return 36732;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_13"):
		case joaat("DLC_MP_X22_F_JBIB_12_13"):
			return 36733;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_14"):
		case joaat("DLC_MP_X22_F_JBIB_12_14"):
			return 36734;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_15"):
		case joaat("DLC_MP_X22_F_JBIB_12_15"):
			return 36735;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_10_17"):
		case joaat("DLC_MP_X22_F_JBIB_12_17"):
			return 36736;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_1_1"):
		case joaat("DLC_MP_X22_F_LEGS_2_1"):
			return 36753;
			break;
		
		case joaat("DLC_MP_X22_M_FEET_6_9"):
		case joaat("DLC_MP_X22_F_FEET_6_9"):
			return 36754;
			break;
		
		case joaat("DLC_MP_X22_M_FEET_6_13"):
		case joaat("DLC_MP_X22_F_FEET_6_13"):
			return 36755;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_4_0"):
		case joaat("DLC_MP_X22_F_PEYES_4_0"):
			return 36760;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_4_1"):
		case joaat("DLC_MP_X22_F_PEYES_4_1"):
			return 36761;
			break;
		
		case joaat("DLC_MP_X22_M_PLEFT_WRIST_1_2"):
		case joaat("DLC_MP_X22_F_PLEFT_WRIST_1_2"):
			return 36762;
			break;
		
		case joaat("DLC_MP_X22_M_TEETH_0_0"):
		case joaat("DLC_MP_X22_F_TEETH_0_0"):
			return 36764;
			break;
		
		case joaat("DLC_MP_X22_M_TEETH_4_0"):
		case joaat("DLC_MP_X22_F_TEETH_4_0"):
			return 36765;
			break;
		
		case joaat("DLC_MP_X22_M_DECL_3_0"):
		case joaat("DLC_MP_X22_F_DECL_3_0"):
			return 36774;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_2_0"):
		case joaat("DLC_MP_X22_F_PEYES_2_0"):
			return 36777;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_2_1"):
		case joaat("DLC_MP_X22_F_PEYES_2_1"):
			return 36778;
			break;
		
		case joaat("DLC_MP_X22_M_PEYES_2_2"):
		case joaat("DLC_MP_X22_F_PEYES_2_2"):
			return 36779;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_5_0"):
		case joaat("DLC_MP_X22_F_PHEAD_5_0"):
			return 36780;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_5_1"):
		case joaat("DLC_MP_X22_F_PHEAD_5_1"):
			return 36781;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_22_25"):
		case joaat("DLC_MP_X22_F_JBIB_26_25"):
			return 36705;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_22_23"):
		case joaat("DLC_MP_X22_F_JBIB_26_23"):
			return 36706;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_22_22"):
		case joaat("DLC_MP_X22_F_JBIB_26_22"):
			return 36707;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_20_22"):
		case joaat("DLC_MP_X22_F_JBIB_24_22"):
			return 36710;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_20_4"):
		case joaat("DLC_MP_X22_F_JBIB_24_4"):
			return 36711;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_20_5"):
		case joaat("DLC_MP_X22_F_JBIB_24_5"):
			return 36712;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_20_21"):
		case joaat("DLC_MP_X22_F_JBIB_24_21"):
			return 36713;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_22_0"):
		case joaat("DLC_MP_X22_F_JBIB_26_0"):
			return 36714;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_6_15"):
		case joaat("DLC_MP_X22_F_LEGS_7_15"):
			return 36746;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_6_4"):
		case joaat("DLC_MP_X22_F_LEGS_7_4"):
			return 36747;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_6_5"):
		case joaat("DLC_MP_X22_F_LEGS_7_5"):
			return 36748;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_8_9"):
		case joaat("DLC_MP_X22_F_PHEAD_8_9"):
		case joaat("DLC_MP_X22_M_PHEAD_10_9"):
		case joaat("DLC_MP_X22_F_PHEAD_10_9"):
			return 36744;
			break;
		
		case joaat("DLC_MP_X22_M_PHEAD_8_13"):
		case joaat("DLC_MP_X22_F_PHEAD_8_13"):
		case joaat("DLC_MP_X22_M_PHEAD_10_13"):
		case joaat("DLC_MP_X22_F_PHEAD_10_13"):
			return 36745;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_19_0"):
		case joaat("DLC_MP_X22_F_JBIB_23_0"):
			return 36716;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_8_0"):
		case joaat("DLC_MP_X22_F_LEGS_9_0"):
			return 36749;
			break;
		
		case joaat("DLC_MP_X22_M_LEGS_7_25"):
		case joaat("DLC_MP_X22_F_LEGS_8_25"):
			return 36750;
			break;
		
		case joaat("DLC_MP_X22_M_OUTFIT_1"):
		case joaat("DLC_MP_X22_F_OUTFIT_1"):
			return 36770;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_26_21"):
		case joaat("DLC_MP_X22_F_JBIB_30_21"):
			return 36708;
			break;
		
		case joaat("DLC_MP_X22_M_JBIB_26_23"):
		case joaat("DLC_MP_X22_F_JBIB_30_23"):
			return 36709;
			break;
		
		case joaat("DLC_MP_X22_M_FEET_14_6"):
		case joaat("DLC_MP_X22_M_FEET_15_6"):
		case joaat("DLC_MP_X22_F_FEET_14_6"):
		case joaat("DLC_MP_X22_F_FEET_15_6"):
			return 36756;
			break;
		
		case joaat("DLC_MP_X22_M_OUTFIT_3"):
		case joaat("DLC_MP_X22_F_OUTFIT_3"):
			return 36776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Sum2_Tee_000_M"):
		case joaat("MP_Sum2_Tee_000_F"):
			return 34505;
			break;
		
		case joaat("MP_Sum2_Tee_001_M"):
		case joaat("MP_Sum2_Tee_001_F"):
			return 34375;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
			return 34397;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
			return 34398;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
			return 34395;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
			return 34396;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
			return 34399;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
			return 34400;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
		case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
			return 34389;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
			return 34410;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
			return 34409;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
			return 34404;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
			return 34403;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
			return 34406;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
			return 34408;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
			return 34405;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
			return 34391;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
			return 34394;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
			return 34390;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
			return 34392;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
			return 34393;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
			return 34730;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
			return 34731;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
			return 34732;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
			return 34733;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
			return 34736;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
			return 34737;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
			return 34734;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
			return 34735;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
			return 34401;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
			return 34402;
			break;
		
		case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
			return 34407;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_BERD_5_0"):
		case joaat("DLC_MP_SUM2_F_BERD_5_0"):
			return 34451;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_5_1"):
		case joaat("DLC_MP_SUM2_F_BERD_5_1"):
			return 34452;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_5_2"):
		case joaat("DLC_MP_SUM2_F_BERD_5_2"):
			return 34453;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_5_3"):
		case joaat("DLC_MP_SUM2_F_BERD_5_3"):
			return 34454;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_6_0"):
		case joaat("DLC_MP_SUM2_F_BERD_6_0"):
			return 34418;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_6_1"):
		case joaat("DLC_MP_SUM2_F_BERD_6_1"):
			return 34419;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_6_2"):
		case joaat("DLC_MP_SUM2_F_BERD_6_2"):
			return 34420;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_7_0"):
		case joaat("DLC_MP_SUM2_F_BERD_7_0"):
			return 34372;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_8_0"):
		case joaat("DLC_MP_SUM2_F_BERD_8_0"):
			return 34421;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_9_0"):
		case joaat("DLC_MP_SUM2_F_BERD_9_0"):
			return 34415;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_9_1"):
		case joaat("DLC_MP_SUM2_F_BERD_9_1"):
			return 34416;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_9_2"):
		case joaat("DLC_MP_SUM2_F_BERD_9_2"):
			return 34417;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_0"):
		case joaat("DLC_MP_SUM2_F_BERD_10_0"):
			return 34425;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_1"):
		case joaat("DLC_MP_SUM2_F_BERD_10_1"):
			return 34426;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_2"):
		case joaat("DLC_MP_SUM2_F_BERD_10_2"):
			return 34427;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_3"):
		case joaat("DLC_MP_SUM2_F_BERD_10_3"):
			return 34428;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_4"):
		case joaat("DLC_MP_SUM2_F_BERD_10_4"):
			return 34429;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_5"):
		case joaat("DLC_MP_SUM2_F_BERD_10_5"):
			return 34430;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_6"):
		case joaat("DLC_MP_SUM2_F_BERD_10_6"):
			return 34431;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_7"):
		case joaat("DLC_MP_SUM2_F_BERD_10_7"):
			return 34432;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_8"):
		case joaat("DLC_MP_SUM2_F_BERD_10_8"):
			return 34433;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_9"):
		case joaat("DLC_MP_SUM2_F_BERD_10_9"):
			return 34434;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_10"):
		case joaat("DLC_MP_SUM2_F_BERD_10_10"):
			return 34435;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_11"):
		case joaat("DLC_MP_SUM2_F_BERD_10_11"):
			return 34436;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_12"):
		case joaat("DLC_MP_SUM2_F_BERD_10_12"):
			return 34437;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_13"):
		case joaat("DLC_MP_SUM2_F_BERD_10_13"):
			return 34438;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_14"):
		case joaat("DLC_MP_SUM2_F_BERD_10_14"):
			return 34439;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_15"):
		case joaat("DLC_MP_SUM2_F_BERD_10_15"):
			return 34440;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_16"):
		case joaat("DLC_MP_SUM2_F_BERD_10_16"):
			return 34441;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_17"):
		case joaat("DLC_MP_SUM2_F_BERD_10_17"):
			return 34442;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_18"):
		case joaat("DLC_MP_SUM2_F_BERD_10_18"):
			return 34443;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_19"):
		case joaat("DLC_MP_SUM2_F_BERD_10_19"):
			return 34444;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_20"):
		case joaat("DLC_MP_SUM2_F_BERD_10_20"):
			return 34445;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_21"):
		case joaat("DLC_MP_SUM2_F_BERD_10_21"):
			return 34446;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_22"):
		case joaat("DLC_MP_SUM2_F_BERD_10_22"):
			return 34447;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_23"):
		case joaat("DLC_MP_SUM2_F_BERD_10_23"):
			return 34448;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_24"):
		case joaat("DLC_MP_SUM2_F_BERD_10_24"):
			return 34449;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_10_25"):
		case joaat("DLC_MP_SUM2_F_BERD_10_25"):
			return 34450;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_F_BERD_0_0"):
			return 34423;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_F_BERD_1_0"):
			return 34703;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_F_BERD_1_1"):
			return 34704;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_1_2"):
		case joaat("DLC_MP_SUM2_F_BERD_1_2"):
			return 34705;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_3_0"):
		case joaat("DLC_MP_SUM2_F_BERD_3_0"):
			return 34424;
			break;
		
		case joaat("DLC_MP_SUM2_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_F_BERD_4_0"):
			return 34422;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
		case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
			return 34411;
			break;
		
		case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
			return 34506;
			break;
		
		case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
			return 34507;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
			return 34380;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
			return 34388;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
			return 34383;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
			return 34381;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
			return 34385;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
			return 34382;
			break;
		
		case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
			return 34384;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
			return 34455;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
			return 34456;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
			return 34457;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
			return 34458;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
			return 34459;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
			return 34460;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
			return 34461;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
			return 34462;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
			return 34463;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
			return 34464;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
			return 34465;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
			return 34466;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
			return 34467;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
			return 34468;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
			return 34375;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
			return 34508;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
			return 34509;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
			return 34510;
			break;
		
		case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
			return 34387;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
			return 34469;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
			return 34470;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
			return 34471;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
			return 34472;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
			return 34473;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
			return 34474;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
			return 34475;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
			return 34476;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
			return 34477;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
			return 34478;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
			return 34479;
			break;
		
		case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
			return 34480;
			break;
		
		case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
		case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
			return 34386;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_0"):
		case joaat("DLC_MP_SUM2_F_FEET_5_0"):
			return 34481;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_1"):
		case joaat("DLC_MP_SUM2_F_FEET_5_1"):
			return 34482;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_2"):
		case joaat("DLC_MP_SUM2_F_FEET_5_2"):
			return 34483;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_3"):
		case joaat("DLC_MP_SUM2_F_FEET_5_3"):
			return 34484;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_4"):
		case joaat("DLC_MP_SUM2_F_FEET_5_4"):
			return 34485;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_5"):
		case joaat("DLC_MP_SUM2_F_FEET_5_5"):
			return 34486;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_6"):
		case joaat("DLC_MP_SUM2_F_FEET_5_6"):
			return 34487;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_7"):
		case joaat("DLC_MP_SUM2_F_FEET_5_7"):
			return 34488;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_5_8"):
		case joaat("DLC_MP_SUM2_F_FEET_5_8"):
			return 34489;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_0"):
		case joaat("DLC_MP_SUM2_F_FEET_6_0"):
			return 34490;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_1"):
		case joaat("DLC_MP_SUM2_F_FEET_6_1"):
			return 34491;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_2"):
		case joaat("DLC_MP_SUM2_F_FEET_6_2"):
			return 34492;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_3"):
		case joaat("DLC_MP_SUM2_F_FEET_6_3"):
			return 34493;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_4"):
		case joaat("DLC_MP_SUM2_F_FEET_6_4"):
			return 34494;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_5"):
		case joaat("DLC_MP_SUM2_F_FEET_6_5"):
			return 34495;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_6"):
		case joaat("DLC_MP_SUM2_F_FEET_6_6"):
			return 34496;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_7"):
		case joaat("DLC_MP_SUM2_F_FEET_6_7"):
			return 34497;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_8"):
		case joaat("DLC_MP_SUM2_F_FEET_6_8"):
			return 34498;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_9"):
		case joaat("DLC_MP_SUM2_F_FEET_6_9"):
			return 34499;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_10"):
		case joaat("DLC_MP_SUM2_F_FEET_6_10"):
			return 34500;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_11"):
		case joaat("DLC_MP_SUM2_F_FEET_6_11"):
			return 34501;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_12"):
		case joaat("DLC_MP_SUM2_F_FEET_6_12"):
			return 34502;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_13"):
		case joaat("DLC_MP_SUM2_F_FEET_6_13"):
			return 34503;
			break;
		
		case joaat("DLC_MP_SUM2_M_FEET_6_14"):
		case joaat("DLC_MP_SUM2_F_FEET_6_14"):
			return 34504;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_2"):
			return 32309;
			break;
		
		case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_3"):
			return 32310;
			break;
		
		case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_10_4"):
			return 32311;
			break;
		
		case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
			return 32307;
			break;
		
		case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
			return 32308;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_0_0"):
		case joaat("DLC_MP_FIXER_F_BERD_0_0"):
			return 32295;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_0_1"):
		case joaat("DLC_MP_FIXER_F_BERD_0_1"):
			return 32296;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_0_2"):
		case joaat("DLC_MP_FIXER_F_BERD_0_2"):
			return 32297;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_0_3"):
		case joaat("DLC_MP_FIXER_F_BERD_0_3"):
			return 32298;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_1_0"):
		case joaat("DLC_MP_FIXER_F_BERD_1_0"):
			return 32299;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_1_1"):
		case joaat("DLC_MP_FIXER_F_BERD_1_1"):
			return 32300;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_1_2"):
		case joaat("DLC_MP_FIXER_F_BERD_1_2"):
			return 32301;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_1_3"):
		case joaat("DLC_MP_FIXER_F_BERD_1_3"):
			return 32302;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_2_0"):
		case joaat("DLC_MP_FIXER_F_BERD_2_0"):
			return 32303;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_2_1"):
		case joaat("DLC_MP_FIXER_F_BERD_2_1"):
			return 32304;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_2_2"):
		case joaat("DLC_MP_FIXER_F_BERD_2_2"):
			return 32305;
			break;
		
		case joaat("DLC_MP_FIXER_M_BERD_2_3"):
		case joaat("DLC_MP_FIXER_F_BERD_2_3"):
			return 32306;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_TUNER_M_DECL_30_1"):
		case joaat("DLC_MP_TUNER_F_DECL_29_1"):
			return 32273;
			break;
		
		case joaat("MP_Tuner_Tee_008_M"):
		case joaat("MP_Tuner_Tee_008_F"):
			return 31768;
			break;
		
		case joaat("MP_Tuner_Tee_010_M"):
		case joaat("MP_Tuner_Tee_010_F"):
			return 31769;
			break;
		
		case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
			return 31784;
			break;
		
		case joaat("MP_Tuner_Tee_011_M"):
		case joaat("MP_Tuner_Tee_011_F"):
			return 31770;
			break;
		
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
			return 31777;
			break;
		
		case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
		case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
			return 31788;
			break;
		
		case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
			return 31787;
			break;
		
		case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
			return 31786;
			break;
		
		case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
			return 31785;
			break;
		
		case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
			return 31766;
			break;
		
		case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
			return 31767;
			break;
		
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
			return 31789;
			break;
		
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
			return 31790;
			break;
		
		case -1372800957:
			return 31791;
			break;
		
		case -1125170035:
			return 31792;
			break;
		
		case 1276052663:
			return 31793;
			break;
		
		case joaat("MP_Tuner_Tee_012_M"):
		case joaat("MP_Tuner_Tee_012_F"):
			return 31771;
			break;
		
		case joaat("MP_Tuner_Tee_013_M"):
		case joaat("MP_Tuner_Tee_013_F"):
			return 31772;
			break;
		
		case joaat("MP_Tuner_Tee_014_M"):
		case joaat("MP_Tuner_Tee_014_F"):
			return 31773;
			break;
		
		case joaat("MP_Tuner_Tee_015_M"):
		case joaat("MP_Tuner_Tee_015_F"):
			return 31774;
			break;
		
		case joaat("MP_Tuner_Tee_016_M"):
		case joaat("MP_Tuner_Tee_016_F"):
			return 31775;
			break;
		
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
			return 31776;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_055_M"):
		case joaat("MP_Heist4_Tee_055_F"):
			return 30703;
			break;
		
		case joaat("MP_Heist4_Tee_057_M"):
		case joaat("MP_Heist4_Tee_057_F"):
			return 30704;
			break;
		
		case joaat("MP_Heist4_Tee_059_M"):
		case joaat("MP_Heist4_Tee_059_F"):
			return 30700;
			break;
		
		case joaat("MP_Heist4_Tee_061_M"):
		case joaat("MP_Heist4_Tee_061_F"):
			return 30701;
			break;
		
		case joaat("MP_Heist4_Tee_063_M"):
		case joaat("MP_Heist4_Tee_063_F"):
			return 30702;
			break;
		
		case joaat("MP_Heist4_Tee_065_M"):
		case joaat("MP_Heist4_Tee_065_F"):
			return 30699;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Heist4_Tee_030_M"):
		case joaat("MP_Heist4_Tee_030_F"):
			return 30533;
			break;
		
		case joaat("MP_Heist4_Tee_032_M"):
		case joaat("MP_Heist4_Tee_032_F"):
			return 30534;
			break;
		
		case joaat("MP_Heist4_Tee_028_M"):
		case joaat("MP_Heist4_Tee_028_F"):
			return 30535;
			break;
		
		case joaat("MP_Heist4_Tee_029_M"):
		case joaat("MP_Heist4_Tee_029_F"):
			return 30536;
			break;
		
		case joaat("MP_Heist4_Tee_031_M"):
		case joaat("MP_Heist4_Tee_031_F"):
			return 30537;
			break;
		
		case joaat("MP_Heist4_Tee_022_M"):
		case joaat("MP_Heist4_Tee_022_F"):
			return 30538;
			break;
		
		case joaat("MP_Heist4_Tee_023_M"):
		case joaat("MP_Heist4_Tee_023_F"):
			return 30539;
			break;
		
		case joaat("MP_Heist4_Tee_020_M"):
		case joaat("MP_Heist4_Tee_020_F"):
			return 30540;
			break;
		
		case joaat("MP_Heist4_Tee_021_M"):
		case joaat("MP_Heist4_Tee_021_F"):
			return 30541;
			break;
		
		case joaat("MP_Heist4_Tee_003_M"):
		case joaat("MP_Heist4_Tee_003_F"):
			return 30542;
			break;
		
		case joaat("MP_Heist4_Tee_004_M"):
		case joaat("MP_Heist4_Tee_004_F"):
			return 30543;
			break;
		
		case joaat("MP_Heist4_Tee_005_M"):
		case joaat("MP_Heist4_Tee_005_F"):
			return 30544;
			break;
		
		case joaat("MP_Heist4_Tee_006_M"):
		case joaat("MP_Heist4_Tee_006_F"):
			return 30545;
			break;
		
		case joaat("MP_Heist4_Tee_027_M"):
		case joaat("MP_Heist4_Tee_027_F"):
			return 30546;
			break;
		
		case joaat("MP_Heist4_Tee_026_M"):
		case joaat("MP_Heist4_Tee_026_F"):
			return 30547;
			break;
		
		case joaat("MP_Heist4_Tee_025_M"):
		case joaat("MP_Heist4_Tee_025_F"):
			return 30548;
			break;
		
		case joaat("MP_Heist4_Tee_024_M"):
		case joaat("MP_Heist4_Tee_024_F"):
			return 30549;
			break;
		
		case joaat("MP_Heist4_Tee_002_M"):
		case joaat("MP_Heist4_Tee_002_F"):
			return 30550;
			break;
		
		case joaat("MP_Heist4_Tee_001_M"):
		case joaat("MP_Heist4_Tee_001_F"):
			return 30551;
			break;
		
		case joaat("MP_Heist4_Tee_000_M"):
		case joaat("MP_Heist4_Tee_000_F"):
			return 30552;
			break;
		
		case joaat("MP_Heist4_Tee_007_M"):
		case joaat("MP_Heist4_Tee_007_F"):
			return 30553;
			break;
		
		case joaat("MP_Heist4_Tee_008_M"):
		case joaat("MP_Heist4_Tee_008_F"):
			return 30554;
			break;
		
		case joaat("MP_Heist4_Tee_009_M"):
		case joaat("MP_Heist4_Tee_009_F"):
			return 30555;
			break;
		
		case joaat("MP_Heist4_Tee_010_M"):
		case joaat("MP_Heist4_Tee_010_F"):
			return 30556;
			break;
		
		case joaat("MP_Heist4_Tee_011_M"):
		case joaat("MP_Heist4_Tee_011_F"):
			return 30557;
			break;
		
		case joaat("MP_Heist4_Tee_012_M"):
		case joaat("MP_Heist4_Tee_012_F"):
			return 30524;
			break;
		
		case joaat("MP_Heist4_Tee_013_M"):
		case joaat("MP_Heist4_Tee_013_F"):
			return 30525;
			break;
		
		case joaat("MP_Heist4_Tee_014_M"):
		case joaat("MP_Heist4_Tee_014_F"):
			return 30526;
			break;
		
		case joaat("MP_Heist4_Tee_015_M"):
		case joaat("MP_Heist4_Tee_015_F"):
			return 30527;
			break;
		
		case joaat("MP_Heist4_Tee_016_M"):
		case joaat("MP_Heist4_Tee_016_F"):
			return 30528;
			break;
		
		case joaat("MP_Heist4_Tee_017_M"):
		case joaat("MP_Heist4_Tee_017_F"):
			return 30529;
			break;
		
		case joaat("MP_Heist4_Tee_018_M"):
		case joaat("MP_Heist4_Tee_018_F"):
			return 30530;
			break;
		
		case joaat("MP_Heist4_Tee_019_M"):
		case joaat("MP_Heist4_Tee_019_F"):
			return 30531;
			break;
		
		case joaat("MP_Heist4_Tee_033_M"):
		case joaat("MP_Heist4_Tee_033_F"):
			return 30532;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			return 30563;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			return 30564;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			return 30565;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			return 30566;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			return 30567;
			break;
		
		case joaat("MP_Heist4_Tee_048_M"):
		case joaat("MP_Heist4_Tee_048_F"):
			return 30568;
			break;
		
		case joaat("MP_Heist4_Tee_047_M"):
		case joaat("MP_Heist4_Tee_047_F"):
			return 30569;
			break;
		
		case joaat("MP_Heist4_Tee_045_M"):
		case joaat("MP_Heist4_Tee_045_F"):
			return 30570;
			break;
		
		case joaat("MP_Heist4_Tee_046_M"):
		case joaat("MP_Heist4_Tee_046_F"):
			return 30571;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			return 30572;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			return 30573;
			break;
		
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			return 30574;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			return 30575;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			return 30576;
			break;
		
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			return 30577;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			return 30578;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			return 30579;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			return 30580;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			return 30581;
			break;
		
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			return 30582;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			return 30583;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			return 30584;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			return 30585;
			break;
		
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			return 30586;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			return 30587;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			return 30588;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			return 30589;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			return 30590;
			break;
		
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			return 30591;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			return 30592;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			return 30593;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			return 30594;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			return 30595;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			return 30596;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			return 30597;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			return 30598;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			return 30599;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			return 30600;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			return 30601;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			return 30602;
			break;
		
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			return 30603;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			return 30604;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			return 30605;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			return 30606;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			return 30607;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			return 30608;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			return 30609;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			return 30610;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			return 30611;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			return 30612;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_9"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			return 30613;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			return 30614;
			break;
		
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			return 30615;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			return 30616;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			return 30617;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			return 30618;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			return 30619;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			return 30620;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			return 30621;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			return 30622;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			return 30623;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			return 30624;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			return 30625;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			return 30626;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			return 30627;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			return 30628;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			return 30629;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			return 30630;
			break;
		
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			return 30631;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			return 30674;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			return 30675;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			return 30676;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			return 30677;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			return 30678;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			return 30679;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			return 30680;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			return 30681;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			return 30682;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			return 30683;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			return 30684;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			return 30685;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			return 30686;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			return 30687;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			return 30688;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			return 30689;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			return 30690;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			return 30691;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			return 30692;
			break;
		
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			return 30693;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			return 30638;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			return 30639;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			return 30640;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			return 30641;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			return 30642;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			return 30643;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			return 30644;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			return 30645;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			return 30646;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			return 30647;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			return 30648;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			return 30649;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			return 30650;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			return 30651;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			return 30652;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			return 30653;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			return 30654;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			return 30655;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			return 30656;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			return 30657;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			return 30658;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			return 30659;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			return 30660;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			return 30661;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			return 30662;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			return 30663;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			return 30664;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			return 30665;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			return 30666;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			return 30667;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			return 30668;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			return 30669;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			return 30670;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			return 30671;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			return 30672;
			break;
		
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			return 30673;
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_Tee_000_M"):
		case joaat("mpSum_Tee_000_F"):
			return 30260;
			break;
		
		case joaat("mpSum_Tee_001_M"):
		case joaat("mpSum_Tee_001_F"):
			return 30261;
			break;
		
		case joaat("mpSum_Tee_002_M"):
		case joaat("mpSum_Tee_002_F"):
			return 30262;
			break;
		
		case joaat("mpSum_Tee_003_M"):
		case joaat("mpSum_Tee_003_F"):
			return 30263;
			break;
		
		case joaat("mpSum_Tee_004_M"):
		case joaat("mpSum_Tee_004_F"):
			return 30264;
			break;
		
		case joaat("mpSum_Tee_005_M"):
		case joaat("mpSum_Tee_005_F"):
			return 30265;
			break;
		
		case joaat("mpSum_Tee_006_M"):
		case joaat("mpSum_Tee_006_F"):
			return 30266;
			break;
		
		case joaat("mpSum_Tee_007_M"):
		case joaat("mpSum_Tee_007_F"):
			return 30267;
			break;
		
		case joaat("mpSum_Tee_008_M"):
		case joaat("mpSum_Tee_008_F"):
			return 30268;
			break;
		
		case joaat("mpSum_Tee_009_M"):
		case joaat("mpSum_Tee_009_F"):
			return 30269;
			break;
		
		case joaat("mpSum_Tee_010_M"):
		case joaat("mpSum_Tee_010_F"):
			return 30270;
			break;
		
		case joaat("mpSum_Tee_011_M"):
		case joaat("mpSum_Tee_011_F"):
			return 30271;
			break;
		
		case joaat("mpSum_Tee_012_M"):
		case joaat("mpSum_Tee_012_F"):
			return 30272;
			break;
		
		case joaat("mpSum_Tee_013_M"):
		case joaat("mpSum_Tee_013_F"):
			return 30273;
			break;
		
		case joaat("mpSum_Tee_014_M"):
		case joaat("mpSum_Tee_014_F"):
			return 30274;
			break;
		
		case joaat("mpSum_Tee_015_M"):
		case joaat("mpSum_Tee_015_F"):
			return 30275;
			break;
		
		case joaat("mpSum_Tee_016_M"):
		case joaat("mpSum_Tee_016_F"):
			return 30276;
			break;
		
		case joaat("mpSum_Tee_017_M"):
		case joaat("mpSum_Tee_017_F"):
			return 30277;
			break;
		
		case joaat("mpSum_Tee_018_M"):
		case joaat("mpSum_Tee_018_F"):
			return 30278;
			break;
		
		case joaat("mpSum_Tee_019_M"):
		case joaat("mpSum_Tee_019_F"):
			return 30279;
			break;
		
		case joaat("mpSum_Tee_020_M"):
		case joaat("mpSum_Tee_020_F"):
			return 30280;
			break;
		
		case joaat("mpSum_Tee_021_M"):
		case joaat("mpSum_Tee_021_F"):
			return 30281;
			break;
		
		case joaat("mpSum_Tee_022_M"):
		case joaat("mpSum_Tee_022_F"):
			return 30282;
			break;
		
		case joaat("mpSum_Tee_023_M"):
		case joaat("mpSum_Tee_023_F"):
			return 30283;
			break;
		
		case joaat("mpSum_Tee_024_M"):
		case joaat("mpSum_Tee_024_F"):
			return 30284;
			break;
		
		case joaat("mpSum_Tee_025_M"):
		case joaat("mpSum_Tee_025_F"):
			return 30285;
			break;
		
		case joaat("mpSum_Tee_026_M"):
		case joaat("mpSum_Tee_026_F"):
			return 30286;
			break;
		
		case joaat("mpSum_Tee_027_M"):
		case joaat("mpSum_Tee_027_F"):
			return 30287;
			break;
		
		case joaat("mpSum_Tee_028_M"):
		case joaat("mpSum_Tee_028_F"):
			return 30288;
			break;
		
		case joaat("mpSum_Tee_029_M"):
		case joaat("mpSum_Tee_029_F"):
			return 30289;
			break;
		
		case joaat("DLC_MP_SUM_M_BERD_3_4"):
		case joaat("DLC_MP_SUM_F_BERD_3_4"):
			return 30290;
			break;
		
		case joaat("DLC_MP_SUM_M_BERD_3_5"):
		case joaat("DLC_MP_SUM_F_BERD_3_5"):
			return 30291;
			break;
		
		case joaat("DLC_MP_SUM_M_BERD_3_6"):
		case joaat("DLC_MP_SUM_F_BERD_3_6"):
			return 30292;
			break;
		
		case joaat("DLC_MP_SUM_M_BERD_3_7"):
		case joaat("DLC_MP_SUM_F_BERD_3_7"):
			return 30293;
			break;
		
		case joaat("DLC_MP_SUM_M_LEGS_1_25"):
		case joaat("DLC_MP_SUM_F_LEGS_2_25"):
			return 30294;
			break;
		
		case joaat("DLC_MP_SUM_M_JBIB_0_25"):
		case joaat("DLC_MP_SUM_F_JBIB_0_25"):
			return 30295;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			return 27194;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			return 27195;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			return 27196;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			return 27197;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			return 27198;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			return 27199;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			return 27200;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			return 27201;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			return 27202;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			return 27203;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			return 27204;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			return 27205;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			return 27206;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			return 27207;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			return 27208;
			break;
		
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			return 27209;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			return 27210;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			return 27211;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			return 27212;
			break;
		
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			return 27213;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			return 25032;
			break;
		
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			return 25033;
			break;
		
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			return 25034;
			break;
		
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			return 25035;
			break;
		
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			return 25036;
			break;
		
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			return 25037;
			break;
		
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			return 25038;
			break;
		
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			return 25039;
			break;
		
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			return 25040;
			break;
		
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			return 25041;
			break;
		
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			return 25042;
			break;
		
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			return 25043;
			break;
		
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			return 25044;
			break;
		
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			return 25045;
			break;
		
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			return 25046;
			break;
		
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			return 25047;
			break;
		
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			return 25048;
			break;
		
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			return 25049;
			break;
		
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			return 25050;
			break;
		
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			return 25051;
			break;
		
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			return 25052;
			break;
		
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			return 25053;
			break;
		
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			return 25054;
			break;
		
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			return 25055;
			break;
		
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			return 25056;
			break;
		
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			return 25057;
			break;
		
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			return 25058;
			break;
		
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			return 25059;
			break;
		
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			return 25060;
			break;
		
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			return 25061;
			break;
		
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			return 25062;
			break;
		
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			return 25063;
			break;
		
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			return 25064;
			break;
		
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			return 25065;
			break;
		
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			return 25066;
			break;
		
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			return 25067;
			break;
		
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			return 25068;
			break;
		
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			return 25069;
			break;
		
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			return 25070;
			break;
		
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			return 25071;
			break;
		
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			return 25072;
			break;
		
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			return 25073;
			break;
		
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			return 25074;
			break;
		
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			return 25075;
			break;
		
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			return 25076;
			break;
		
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			return 25077;
			break;
		
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			return 25078;
			break;
		
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			return 25079;
			break;
		
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			return 25080;
			break;
		
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			return 25081;
			break;
		
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			return 25082;
			break;
		
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			return 25083;
			break;
		
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			return 25084;
			break;
		
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			return 25085;
			break;
		
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			return 25086;
			break;
		
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			return 25087;
			break;
		
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			return 25088;
			break;
		
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			return 25089;
			break;
		
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			return 25090;
			break;
		
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			return 25091;
			break;
		
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			return 25092;
			break;
		
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			return 25093;
			break;
		
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			return 25094;
			break;
		
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			return 25095;
			break;
		
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			return 25096;
			break;
		
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			return 25097;
			break;
		
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			return 25098;
			break;
		
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			return 25099;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			return 25022;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			return 25023;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			return 25024;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			return 25025;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			return 25026;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			return 25027;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			return 25028;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			return 25019;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			return 25029;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			return 25021;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			return 25018;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			return 25020;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			return 25030;
		
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			return 25031;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return 25002;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			return 22108;
		
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			return 9481;
		
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			return 9470;
		
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			return 9475;
		
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			return 9472;
		
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			return 9465;
		
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			return 9463;
		
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			return 9464;
		
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			return 9468;
		
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			return 9469;
		
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			return 9479;
		
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			return 9473;
		
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			return 9480;
		
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			return 9476;
		
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			return 9477;
		
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			return 9471;
		
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			return 9474;
		
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			return 9467;
		
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			return 9478;
		
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			return 9462;
		
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			return 9466;
		
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			return 22126;
		
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			return 22127;
		
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			return 22128;
		
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			return 22124;
		
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			return 22130;
		
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			return 22125;
		
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			return 22129;
		
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			return 22131;
		
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			return 22132;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			return 22147;
		
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			return 22148;
		
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			return 22149;
		
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			return 22150;
		
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			return 22151;
		
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			return 22152;
		
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			return 22153;
		
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			return 22154;
		
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			return 22155;
		
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			return 22156;
		
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			return 22157;
		
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			return 22158;
		
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			return 22159;
		
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			return 22160;
		
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			return 22161;
		
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			return 22162;
		
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			return 22163;
		
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			return 22164;
		
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			return 22165;
		
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			return 22166;
		
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			return 22167;
		
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			return 22168;
		
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			return 22169;
		
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			return 22170;
		
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			return 22171;
		
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			return 22172;
		
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			return 22173;
		
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			return 22174;
		
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			return 22175;
		
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			return 22176;
		
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			return 22177;
		
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			return 22178;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			return 18099;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			return 18121;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			return 18122;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			return 18123;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			return 18124;
		
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			return 18125;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			return 18134;
		
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			return 18135;
		
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			return 18136;
		
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			return 18137;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			return 15417;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			return 15418;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			return 15425;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			return 15405;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			return 15393;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			return 15409;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			return 15396;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			return 15412;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			return 15403;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			return 15389;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			return 15398;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			return 15400;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			return 15408;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			return 15411;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			return 15397;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			return 15413;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			return 15391;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			return 15388;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			return 15401;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			return 15394;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			return 15406;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			return 15395;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			return 15410;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			return 15407;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			return 15414;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			return 15415;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			return 15399;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			return 15404;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			return 15392;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			return 15390;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			return 15402;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			return 15416;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			return 9443;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("MP_Biker_Tee_022_M"):
		case joaat("MP_Biker_Tee_022_F"):
			return 9366;
		
		case joaat("MP_Biker_Tee_023_M"):
		case joaat("MP_Biker_Tee_023_F"):
			return 9367;
		
		case joaat("MP_Biker_Tee_024_M"):
		case joaat("MP_Biker_Tee_024_F"):
			return 9369;
		
		case joaat("MP_Biker_Tee_025_M"):
		case joaat("MP_Biker_Tee_025_F"):
			return 9368;
		
		case joaat("MP_Biker_Tee_047_M"):
		case joaat("MP_Biker_Tee_047_F"):
			return 9365;
		
		case joaat("MP_Biker_Tee_048_M"):
		case joaat("MP_Biker_Tee_048_F"):
			return 9364;
		
		case joaat("MP_Biker_Tee_049_M"):
		case joaat("MP_Biker_Tee_049_F"):
			return 9363;
		
		case joaat("MP_Biker_Tee_050_M"):
		case joaat("MP_Biker_Tee_050_F"):
			return 9362;
		
		case joaat("MP_Biker_Tee_051_M"):
		case joaat("MP_Biker_Tee_051_F"):
			return 9370;
		
		case joaat("MP_Biker_Tee_052_M"):
		case joaat("MP_Biker_Tee_052_F"):
			return 9371;
		
		case joaat("MP_Biker_Tee_053_M"):
		case joaat("MP_Biker_Tee_053_F"):
			return 9372;
		
		case joaat("MP_Biker_Tee_054_M"):
		case joaat("MP_Biker_Tee_054_F"):
			return 9373;
		
		case joaat("MP_Biker_Tee_055_M"):
		case joaat("MP_Biker_Tee_055_F"):
			return 9374;
		
		case joaat("MP_Biker_Award_000_M"):
		case joaat("MP_Biker_Award_000_F"):
			return 9384;
		
		case joaat("MP_Biker_Award_001_M"):
		case joaat("MP_Biker_Award_001_F"):
			return 9385;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			return 9375;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			return 9376;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			return 9377;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			return 9378;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			return 9379;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			return 9380;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			return 9381;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			return 9382;
		
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			return 9383;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			return 7595;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			return 7596;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			return 7597;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			return 7599;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			return 7600;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			return 7598;
		
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			return 7601;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			return 7482;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			return 7483;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			return 7484;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			return 7485;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			return 7486;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			return 7487;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			return 7488;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			return 7489;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			return 7490;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			return 7491;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			return 7492;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			return 7493;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			return 7494;
		
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			return 7495;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			return 7515;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			return 7516;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			return 7517;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			return 7518;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			return 7519;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			return 7520;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			return 7521;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			return 7522;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			return 7523;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			return 7524;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			return 7525;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			return 7526;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			return 7527;
		
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			return 7528;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			return 4247;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			return 4248;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			return 4249;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			return 4250;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			return 4251;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			return 4252;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			return 4253;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			return 4254;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			return 4255;
		
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			return 4256;
		
		case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
			return 110;
		
		case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
			return 111;
		
		case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
			return 112;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
			return 4333;
		
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
			return 4334;
		
		case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
		case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
			return 4335;
		
		case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			return 3750;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			return 3594;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			return 3595;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			return 3596;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			return 3597;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			return 3598;
		
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			return 3599;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			return 3616;
		
		case joaat("FM_LTS_M_Tshirt_000"):
		case joaat("FM_LTS_F_Tshirt_000"):
			return 3615;
		
		case joaat("FM_Hip_M_Retro_010"):
		case joaat("FM_Hip_F_Retro_010"):
			return 9440;
		
		case joaat("FM_Hip_M_Retro_003"):
		case joaat("FM_Hip_F_Retro_003"):
			return 9430;
		
		case joaat("FM_Hip_M_Retro_000"):
		case joaat("FM_Hip_F_Retro_000"):
			return 9426;
		
		case joaat("FM_Hip_M_Retro_001"):
		case joaat("FM_Hip_F_Retro_001"):
			return 9427;
		
		case joaat("FM_Hip_M_Retro_002"):
		case joaat("FM_Hip_F_Retro_002"):
			return 9428;
		
		case joaat("FM_Hip_M_Retro_004"):
		case joaat("FM_Hip_F_Retro_004"):
			return 9431;
		
		case joaat("FM_Hip_M_Retro_005"):
		case joaat("FM_Hip_F_Retro_005"):
			return 9432;
		
		case joaat("FM_Hip_M_Retro_006"):
		case joaat("FM_Hip_F_Retro_006"):
			return 9433;
		
		case joaat("FM_Hip_M_Retro_007"):
		case joaat("FM_Hip_F_Retro_007"):
			return 9439;
		
		case joaat("FM_Hip_M_Retro_008"):
		case joaat("FM_Hip_F_Retro_008"):
			return 9434;
		
		case joaat("FM_Hip_M_Retro_009"):
		case joaat("FM_Hip_F_Retro_009"):
			return 9435;
		
		case joaat("FM_Hip_M_Retro_011"):
		case joaat("FM_Hip_F_Retro_011"):
			return 9436;
		
		case joaat("FM_Hip_M_Retro_012"):
		case joaat("FM_Hip_F_Retro_012"):
			return 9429;
		
		case joaat("FM_Hip_M_Retro_013"):
		case joaat("FM_Hip_F_Retro_013"):
			return 9437;
		
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			return 3593;
		
		default:
	}
	return -1;
}

bool func_227(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1183E
{
	int iVar0;
	int iVar1;
	
	func_234(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_233() || func_232())
					{
						iVar1 = 400;
						if (func_231() && (func_230() || func_229()))
						{
							iVar1 = 0;
						}
						func_234(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_234(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_228(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_233() || func_232())
					{
						iVar1 = 450;
						if (func_231() && (func_230() || func_229()))
						{
							iVar1 = 0;
						}
						func_234(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_234(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_228(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_233() || func_232())
					{
						iVar1 = 380;
						if (func_231() && (func_230() || func_229()))
						{
							iVar1 = 0;
						}
						func_234(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_234(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_228(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2825 /* Tunable: TATTOO_MP_FM_HEAD_BANGER_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 1:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2826 /* Tunable: TATTOO_MP_FM_SLAYER_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 2:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2827 /* Tunable: TATTOO_MP_FM_GANGHIDEOUT_CLEAR_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 3:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2828 /* Tunable: TATTOO_MP_FM_ARMOURED_VAN_TAKEDOWN_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 4:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2829 /* Tunable: TATTOO_MP_FM_HUSTLER_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 54:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2830 /* Tunable: TATTOO_MP_FM_WIN_EVER_MODE_ONCE_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 5:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2831 /* Tunable: TATTOO_MP_FM_BOUNTY_KILLER_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 6:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2832 /* Tunable: TATTOO_MP_FM_HOLD_WORLD_RECORD_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 55:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2833 /* Tunable: TATTOO_MP_FM_FULL_MODDED_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 7:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2834 /* Tunable: TATTOO_MP_FM_REVENGE_KILL_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 8:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2835 /* Tunable: TATTOO_MP_FM_KILL_3_RACERS_EXPENDITURE_TUNABLE */)), 7);
					break;
				
				case 9:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2836 /* Tunable: TATTOO_MP_FM_REACH_RANK_1_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 10:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2837 /* Tunable: TATTOO_MP_FM_REACH_RANK_2_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 11:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2838 /* Tunable: TATTOO_MP_FM_REACH_RANK_3_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 56:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2839 /* Tunable: TATTOO_MP_FM_FMKILLCHEATER_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 12:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2840 /* Tunable: TATTOO_MP_FM_RACES_WON_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 57:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2841 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_1_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 58:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2842 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_2_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 59:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2843 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_3_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 60:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2844 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_4_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 17:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2849 /* Tunable: TATTOO_MP_FM_01_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 18:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2850 /* Tunable: TATTOO_MP_FM_02_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 19:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2851 /* Tunable: TATTOO_MP_FM_03_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 20:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2852 /* Tunable: TATTOO_MP_FM_04_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 21:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2853 /* Tunable: TATTOO_MP_FM_05_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 22:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2854 /* Tunable: TATTOO_MP_FM_06_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 23:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2855 /* Tunable: TATTOO_MP_FM_07_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 24:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2856 /* Tunable: TATTOO_MP_FM_08_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 25:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2857 /* Tunable: TATTOO_MP_FM_09_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 26:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2858 /* Tunable: TATTOO_MP_FM_10_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 27:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2859 /* Tunable: TATTOO_MP_FM_11_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 28:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2860 /* Tunable: TATTOO_MP_FM_12_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 61:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2861 /* Tunable: TATTOO_MP_FM_13_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 62:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2862 /* Tunable: TATTOO_MP_FM_14_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 63:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2863 /* Tunable: TATTOO_MP_FM_15_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 64:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2864 /* Tunable: TATTOO_MP_FM_16_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 65:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2865 /* Tunable: TATTOO_MP_FM_17_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 29:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2866 /* Tunable: TATTOO_MP_FM_18_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 30:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2867 /* Tunable: TATTOO_MP_FM_19_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 31:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2868 /* Tunable: TATTOO_MP_FM_20_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 66:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2869 /* Tunable: TATTOO_MP_FM_21_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 32:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2870 /* Tunable: TATTOO_MP_FM_22_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 33:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2871 /* Tunable: TATTOO_MP_FM_23_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 34:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2872 /* Tunable: TATTOO_MP_FM_24_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 35:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2873 /* Tunable: TATTOO_MP_FM_25_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 36:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2874 /* Tunable: TATTOO_MP_FM_26_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 37:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2875 /* Tunable: TATTOO_MP_FM_27_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 38:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2876 /* Tunable: TATTOO_MP_FM_28_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 39:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2877 /* Tunable: TATTOO_MP_FM_29_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 40:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2878 /* Tunable: TATTOO_MP_FM_30_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 67:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2879 /* Tunable: TATTOO_MP_FM_31_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 41:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2880 /* Tunable: TATTOO_MP_FM_32_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 68:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2881 /* Tunable: TATTOO_MP_FM_33_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 42:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2882 /* Tunable: TATTOO_MP_FM_34_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 43:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2883 /* Tunable: TATTOO_MP_FM_35_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 44:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2884 /* Tunable: TATTOO_MP_FM_36_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 45:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2885 /* Tunable: TATTOO_MP_FM_37_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 46:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2886 /* Tunable: TATTOO_MP_FM_38_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 47:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2887 /* Tunable: TATTOO_MP_FM_39_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 48:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2888 /* Tunable: TATTOO_MP_FM_40_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 49:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2889 /* Tunable: TATTOO_MP_FM_41_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 50:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2890 /* Tunable: TATTOO_MP_FM_42_EXPENDITURE_TUNABLE */)), 2);
					break;
				
				case 51:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2891 /* Tunable: TATTOO_MP_FM_43_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 52:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2892 /* Tunable: TATTOO_MP_FM_44_EXPENDITURE_TUNABLE */)), 3);
					break;
				
				case 53:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2893 /* Tunable: TATTOO_MP_FM_45_EXPENDITURE_TUNABLE */)), 0);
					break;
				
				case 69:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2894 /* Tunable: TATTOO_MP_FM_46_EXPENDITURE_TUNABLE */)), 1);
					break;
				
				case 70:
					func_234(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2895 /* Tunable: TATTOO_MP_FM_47_EXPENDITURE_TUNABLE */)), 2);
					break;
			}
			if (iVar0 == joaat("MP_M_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 88:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 89:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 93:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2845 /* Tunable: TATTOO_MP_FM_CREW_A_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 14:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2846 /* Tunable: TATTOO_MP_FM_CREW_B_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 15:
						func_234(sParam0, iParam1, iParam3, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2847 /* Tunable: TATTOO_MP_FM_CREW_C_EXPENDITURE_TUNABLE */)), 2);
						break;
					
					case 16:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2848 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 71:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 72:
						func_234(sParam0, iParam1, iParam3, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */, "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("MP_F_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 88:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 89:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 93:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_234(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2845 /* Tunable: TATTOO_MP_FM_CREW_A_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 14:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2846 /* Tunable: TATTOO_MP_FM_CREW_B_EXPENDITURE_TUNABLE */)), 0);
						break;
					
					case 15:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2847 /* Tunable: TATTOO_MP_FM_CREW_C_EXPENDITURE_TUNABLE */)), 2);
						break;
					
					case 16:
						func_234(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2848 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_228(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_228(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x148DD
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2.f_0))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_229()//Position - 0x1496F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_26, 5))
	{
		if (BitTest(Global_26, 1) || BitTest(Global_26, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152850.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_26, 1);
				MISC::SET_BIT(&Global_26, 3);
				MISC::SET_BIT(&Global_26, 5);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_230()//Position - 0x14AA8
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (BitTest(Global_26, 6))
	{
		if (BitTest(Global_26, 2) || BitTest(Global_26, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152850.f_3)
		{
			iVar2 = joaat("MPPLY_PLAT_UP_LB_CHECK");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_231()//Position - 0x14B5E
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232()//Position - 0x14C16
{
	return 1;
}

int func_233()//Position - 0x14C1F
{
	return 1;
}

void func_234(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x14C28
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("MP_M_Freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("MP_M_Freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

struct<14> func_235(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x14EDE
{
	func_284();
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		func_268(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		func_236(iParam1, iParam2, iParam3);
	}
	return Global_79172[0 /*14*/];
}

void func_236(int iParam0, int iParam1, int iParam2)//Position - 0x14F1F
{
	switch (iParam0)
	{
		case 2:
			func_267(iParam1, iParam2);
			break;
		
		case 11:
			func_266(iParam1, iParam2);
			break;
		
		case 8:
			func_259(iParam1, iParam2);
			break;
		
		case 9:
			func_258(iParam1, iParam2);
			break;
		
		case 3:
			func_257(iParam1, iParam2);
			break;
		
		case 4:
			func_256(iParam1, iParam2);
			break;
		
		case 6:
			func_255(iParam1, iParam2);
			break;
		
		case 1:
			func_254(iParam1, iParam2);
			break;
		
		case 7:
			func_253(iParam1, iParam2);
			break;
		
		case 10:
			func_252(iParam1, iParam2);
			break;
		
		case 14:
			func_251(iParam1, iParam2);
			break;
		
		case 12:
			func_250(iParam1, iParam2);
			break;
		
		case 5:
			func_249(iParam1, iParam2);
			break;
		
		case 0:
			func_247(iParam1, iParam2);
			break;
		
		case 13:
			func_237(iParam1);
			break;
	}
}

void func_237(int iParam0)//Position - 0x1502B
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_238(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x151E6
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_246(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_245(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_243(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_243(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_243(Global_2883588, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2883588, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(uParam0->f_6), 1);
			MISC::CLEAR_BIT(&(uParam0->f_6), 0);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_242(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_242(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_242(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_245(14))
			{
				return;
			}
			iVar0 = func_158(func_241(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_158(func_240(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_239(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_158(iVar1, Global_79169);
				if (!BitTest(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_239(int iParam0, int iParam1, var uParam2)//Position - 0x15588
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_240(int iParam0, int iParam1)//Position - 0x1598D
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_241(int iParam0, int iParam1)//Position - 0x15D88
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x16183
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x17026
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_79169;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_244(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		iVar3 = func_158(iVar2, iVar0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

bool func_244(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x17064
{
	int iVar0;
	
	*uParam2 = 14835;
	if ((bParam4 && Global_4540270) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4540270)
		{
			iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
		else
		{
			iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	else
	{
		iVar0 = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10304;
					break;
				
				case 232:
					*uParam2 = 10305;
					break;
				
				case 233:
					*uParam2 = 10306;
					break;
				
				case 234:
					*uParam2 = 10307;
					break;
				
				case 235:
					*uParam2 = 10308;
					break;
				
				case 236:
					*uParam2 = 10309;
					break;
				
				case 237:
					*uParam2 = 10310;
					break;
				
				case 238:
					*uParam2 = 10311;
					break;
				
				case 239:
					*uParam2 = 10312;
					break;
				
				case 240:
					*uParam2 = 10313;
					break;
				
				case 241:
					*uParam2 = 10314;
					break;
				
				case 242:
					*uParam2 = 10315;
					break;
				
				case 243:
					*uParam2 = 10316;
					break;
				
				case 244:
					*uParam2 = 10317;
					break;
				
				case 245:
					*uParam2 = 10318;
					break;
				
				case 246:
					*uParam2 = 10319;
					break;
				
				case 247:
					*uParam2 = 10320;
					break;
				
				case 248:
					*uParam2 = 10321;
					break;
				
				case 249:
					*uParam2 = 10322;
					break;
				
				case 250:
					*uParam2 = 10323;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10420;
					break;
				
				case 252:
					*uParam2 = 10421;
					break;
				
				case 253:
					*uParam2 = 10422;
					break;
				
				case 254:
					*uParam2 = 10423;
					break;
				
				case 255:
					*uParam2 = 10424;
					break;
				
				case 256:
					*uParam2 = 10425;
					break;
				
				case 257:
					*uParam2 = 10426;
					break;
				
				case 258:
					*uParam2 = 10427;
					break;
				
				case 259:
					*uParam2 = 10428;
					break;
				
				case 260:
					*uParam2 = 10429;
					break;
				
				case 261:
					*uParam2 = 11847;
					break;
				
				case 262:
					*uParam2 = 11848;
					break;
				
				case 263:
					*uParam2 = 11849;
					break;
				
				case 264:
					*uParam2 = 11850;
					break;
				
				case 265:
					*uParam2 = 11851;
					break;
				
				case 266:
					*uParam2 = 11852;
					break;
				
				case 267:
					*uParam2 = 11853;
					break;
				
				case 268:
					*uParam2 = 11854;
					break;
				
				case 269:
					*uParam2 = 11855;
					break;
				
				case 270:
					*uParam2 = 11856;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11878;
					break;
				
				case 272:
					*uParam2 = 11879;
					break;
				
				case 273:
					*uParam2 = 11880;
					break;
				
				case 274:
					*uParam2 = 11881;
					break;
				
				case 275:
					*uParam2 = 11882;
					break;
				
				case 276:
					*uParam2 = 11883;
					break;
				
				case 277:
					*uParam2 = 11884;
					break;
				
				case 278:
					*uParam2 = 11885;
					break;
				
				case 279:
					*uParam2 = 11886;
					break;
				
				case 280:
					*uParam2 = 11887;
					break;
				
				case 281:
					*uParam2 = 11888;
					break;
				
				case 282:
					*uParam2 = 11889;
					break;
				
				case 283:
					*uParam2 = 11976;
					break;
				
				case 284:
					*uParam2 = 11977;
					break;
				
				case 285:
					*uParam2 = 11978;
					break;
				
				case 286:
					*uParam2 = 11979;
					break;
				
				case 287:
					*uParam2 = 11980;
					break;
				
				case 288:
					*uParam2 = 11981;
					break;
				
				case 289:
					*uParam2 = 11982;
					break;
				
				case 290:
					*uParam2 = 11983;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11984;
					break;
				
				case 292:
					*uParam2 = 11985;
					break;
				
				case 293:
					*uParam2 = 11986;
					break;
				
				case 294:
					*uParam2 = 11987;
					break;
				
				case 295:
					*uParam2 = 11988;
					break;
				
				case 296:
					*uParam2 = 11989;
					break;
				
				case 297:
					*uParam2 = 11990;
					break;
				
				case 298:
					*uParam2 = 12190;
					break;
				
				case 299:
					*uParam2 = 12191;
					break;
				
				case 300:
					*uParam2 = 12192;
					break;
				
				case 301:
					*uParam2 = 12193;
					break;
				
				case 302:
					*uParam2 = 12194;
					break;
				
				case 303:
					*uParam2 = 12195;
					break;
				
				case 304:
					*uParam2 = 12196;
					break;
				
				case 305:
					*uParam2 = 12197;
					break;
				
				case 306:
					*uParam2 = 12332;
					break;
				
				case 307:
					*uParam2 = 12333;
					break;
				
				case 308:
					*uParam2 = 12334;
					break;
				
				case 309:
					*uParam2 = 12335;
					break;
				
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10324;
					break;
				
				case 232:
					*uParam2 = 10325;
					break;
				
				case 233:
					*uParam2 = 10326;
					break;
				
				case 234:
					*uParam2 = 10327;
					break;
				
				case 235:
					*uParam2 = 10328;
					break;
				
				case 236:
					*uParam2 = 10329;
					break;
				
				case 237:
					*uParam2 = 10330;
					break;
				
				case 238:
					*uParam2 = 10331;
					break;
				
				case 239:
					*uParam2 = 10332;
					break;
				
				case 240:
					*uParam2 = 10333;
					break;
				
				case 241:
					*uParam2 = 10334;
					break;
				
				case 242:
					*uParam2 = 10335;
					break;
				
				case 243:
					*uParam2 = 10336;
					break;
				
				case 244:
					*uParam2 = 10337;
					break;
				
				case 245:
					*uParam2 = 10338;
					break;
				
				case 246:
					*uParam2 = 10339;
					break;
				
				case 247:
					*uParam2 = 10340;
					break;
				
				case 248:
					*uParam2 = 10341;
					break;
				
				case 249:
					*uParam2 = 10342;
					break;
				
				case 250:
					*uParam2 = 10343;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10430;
					break;
				
				case 252:
					*uParam2 = 10431;
					break;
				
				case 253:
					*uParam2 = 10432;
					break;
				
				case 254:
					*uParam2 = 10433;
					break;
				
				case 255:
					*uParam2 = 10434;
					break;
				
				case 256:
					*uParam2 = 10435;
					break;
				
				case 257:
					*uParam2 = 10436;
					break;
				
				case 258:
					*uParam2 = 10437;
					break;
				
				case 259:
					*uParam2 = 10438;
					break;
				
				case 260:
					*uParam2 = 10439;
					break;
				
				case 261:
					*uParam2 = 11857;
					break;
				
				case 262:
					*uParam2 = 11858;
					break;
				
				case 263:
					*uParam2 = 11859;
					break;
				
				case 264:
					*uParam2 = 11860;
					break;
				
				case 265:
					*uParam2 = 11861;
					break;
				
				case 266:
					*uParam2 = 11862;
					break;
				
				case 267:
					*uParam2 = 11863;
					break;
				
				case 268:
					*uParam2 = 11864;
					break;
				
				case 269:
					*uParam2 = 11865;
					break;
				
				case 270:
					*uParam2 = 11866;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11890;
					break;
				
				case 272:
					*uParam2 = 11891;
					break;
				
				case 273:
					*uParam2 = 11892;
					break;
				
				case 274:
					*uParam2 = 11893;
					break;
				
				case 275:
					*uParam2 = 11894;
					break;
				
				case 276:
					*uParam2 = 11895;
					break;
				
				case 277:
					*uParam2 = 11896;
					break;
				
				case 278:
					*uParam2 = 11897;
					break;
				
				case 279:
					*uParam2 = 11898;
					break;
				
				case 280:
					*uParam2 = 11899;
					break;
				
				case 281:
					*uParam2 = 11900;
					break;
				
				case 282:
					*uParam2 = 11901;
					break;
				
				case 283:
					*uParam2 = 11991;
					break;
				
				case 284:
					*uParam2 = 11992;
					break;
				
				case 285:
					*uParam2 = 11993;
					break;
				
				case 286:
					*uParam2 = 11994;
					break;
				
				case 287:
					*uParam2 = 11995;
					break;
				
				case 288:
					*uParam2 = 11996;
					break;
				
				case 289:
					*uParam2 = 11997;
					break;
				
				case 290:
					*uParam2 = 11998;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11999;
					break;
				
				case 292:
					*uParam2 = 12000;
					break;
				
				case 293:
					*uParam2 = 12001;
					break;
				
				case 294:
					*uParam2 = 12002;
					break;
				
				case 295:
					*uParam2 = 12003;
					break;
				
				case 296:
					*uParam2 = 12004;
					break;
				
				case 297:
					*uParam2 = 12005;
					break;
				
				case 298:
					*uParam2 = 12198;
					break;
				
				case 299:
					*uParam2 = 12199;
					break;
				
				case 300:
					*uParam2 = 12200;
					break;
				
				case 301:
					*uParam2 = 12201;
					break;
				
				case 302:
					*uParam2 = 12202;
					break;
				
				case 303:
					*uParam2 = 12203;
					break;
				
				case 304:
					*uParam2 = 12204;
					break;
				
				case 305:
					*uParam2 = 12205;
					break;
				
				case 306:
					*uParam2 = 12337;
					break;
				
				case 307:
					*uParam2 = 12338;
					break;
				
				case 308:
					*uParam2 = 12339;
					break;
				
				case 309:
					*uParam2 = 12340;
					break;
				
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14835;
}

bool func_245(int iParam0)//Position - 0x19BE7
{
	return Global_44042 == iParam0;
}

int func_246(int iParam0)//Position - 0x19BF5
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_247(int iParam0, int iParam1)//Position - 0x19CC9
{
	int iVar0;
	
	iVar0 = 0;
	Global_79172[0 /*14*/].f_5 = 4;
	func_248(iVar0, iParam0, 0, iParam1);
}

void func_248(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x19CE9
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_79172[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
			if (iVar18 > iVar17)
			{
				FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_238(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_238(&(Global_79172[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
			if (iVar38 > iVar37)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2883588 = Var19.f_1;
				Global_2883589 = Var19.f_0;
				func_238(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var39);
		if (iParam3 != -1 && Global_79370)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
			Global_2883588 = Var39.f_1;
			Global_2883589 = Var39.f_0;
			func_238(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_70(iParam0));
			if (iVar57 > iVar56)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
				Global_2883588 = Var39.f_1;
				Global_2883589 = Var39.f_0;
				func_238(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_249(int iParam0, int iParam1)//Position - 0x19F70
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0, int iParam1)//Position - 0x1A073
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1" /* GXT: The Indie Heart */, 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2" /* GXT: The Kitten */, 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3" /* GXT: The Vacation */, 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4" /* GXT: The Girly */, 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5" /* GXT: The Standout */, 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6" /* GXT: The Streetwise */, 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7" /* GXT: The Butterfly */, 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8" /* GXT: The Festival */, 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1" /* GXT: The Interview */, 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2" /* GXT: The Red Hot */, 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3" /* GXT: The Upmarket */, 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4" /* GXT: The Power Suit */, 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5" /* GXT: The Versatile */, 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6" /* GXT: The Egyptian */, 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7" /* GXT: The Chalet */, 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8" /* GXT: The Cougar */, 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9" /* GXT: The Spring Break */, 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10" /* GXT: The Yacht Club */, 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1" /* GXT: The Holla Over */, 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2" /* GXT: The Tough Chick */, 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3" /* GXT: The Chica */, 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4" /* GXT: The Tomboy */, 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5" /* GXT: The Basics */, 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6" /* GXT: The Young Luck */, 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7" /* GXT: The Workout */, 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8" /* GXT: The She Devil */, 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9" /* GXT: The Beach Beauty */, 16);
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_251(int iParam0, int iParam1)//Position - 0x1A352
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0" /* GXT: Red Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1" /* GXT: Magenta Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2" /* GXT: Green Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3" /* GXT: Yellow Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4" /* GXT: Desert Camo Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5" /* GXT: Blue Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6" /* GXT: Pale Blue Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7" /* GXT: Orange Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1" /* GXT: Pink Accent Cowgirl Hat */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7" /* GXT: Gray Plaid Canvas Hat */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0" /* GXT: Black LS Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1" /* GXT: Fruntalot Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2" /* GXT: Broker Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3" /* GXT: SA Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4" /* GXT: SA Boars Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5" /* GXT: Stank Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6" /* GXT: Red Mist XI Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7" /* GXT: LS Corkers Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0" /* GXT: Rearwall Black Beanie */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1" /* GXT: Crevis Ash Beanie */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2" /* GXT: Crevis Pink Beanie */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3" /* GXT: LS Panic Beanie */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4" /* GXT: SA Beanie */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5" /* GXT: Hawaiian Snow Blue Beanie */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6" /* GXT: Rearwall Lime Beanie */, 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7" /* GXT: Hawaiian Snow Plaid Beanie */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0" /* GXT: Black Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1" /* GXT: Green Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2" /* GXT: Leopard Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3" /* GXT: Tan Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4" /* GXT: Denim Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5" /* GXT: Field Camo Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6" /* GXT: Desert Camo Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7" /* GXT: Woodland Camo Military Cap */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0" /* GXT: Navy Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1" /* GXT: White Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2" /* GXT: Gray Plaid Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3" /* GXT: Brown Plaid Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4" /* GXT: Red Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5" /* GXT: Pink Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6" /* GXT: Green Plaid Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7" /* GXT: Fruity Plaid Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0" /* GXT: Fruit Cap */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1" /* GXT: 247 Cap */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2" /* GXT: Fred's Cap */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3" /* GXT: US Post LS Cap */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4" /* GXT: Swallow Cap */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5" /* GXT: CNT Cap */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6" /* GXT: Peachy Chics Snakeskin Cap */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7" /* GXT: Peachy Chics Leopard Cap */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7" /* GXT: Tan Patterned Cap */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1" /* GXT: Black Sun Hat */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0" /* GXT: Black Saggy Beanie */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6" /* GXT: Hawaiian Snow Saggy Beanie */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7" /* GXT: Yeti Saggy Beanie */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0" /* GXT: Tan Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1" /* GXT: Two-Tone Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2" /* GXT: Brown Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3" /* GXT: Safari Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4" /* GXT: Gray Patterned Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5" /* GXT: Brown Striped Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6" /* GXT: Gray Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7" /* GXT: Navy Straw Hat */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0" /* GXT: Black Beret */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1" /* GXT: Cherry Beret */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2" /* GXT: Purple Beret */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3" /* GXT: White Beret */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4" /* GXT: Gray Beret */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5" /* GXT: Navy Beret */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6" /* GXT: Tan Beret */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7" /* GXT: Magenta Beret */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0" /* GXT: Beat Off White Headphones */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1" /* GXT: Beat Off Black Headphones */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2" /* GXT: Beat Off Red Headphones */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3" /* GXT: Beat Off Gray Headphones */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4" /* GXT: Beat Off Navy Headphones */, 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5" /* GXT: Beat Off Purple Headphones */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6" /* GXT: Beat Off Pink Headphones */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7" /* GXT: Beat Off Orange Headphones */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0" /* GXT: Western MC Yellow Helmet */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1" /* GXT: Steel Horse Blue Helmet */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2" /* GXT: Steel Horse Orange Helmet */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3" /* GXT: Western MC Green Helmet */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4" /* GXT: Western MC Red Helmet */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5" /* GXT: Steel Horse Black Helmet */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6" /* GXT: Black Helmet */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7" /* GXT: Western MC Lilac Helmet */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0" /* GXT: Blue Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1" /* GXT: Orange Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2" /* GXT: Pale Blue Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3" /* GXT: Red Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4" /* GXT: Gray Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5" /* GXT: Black Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6" /* GXT: Pink Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7" /* GXT: White Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0" /* GXT: Shatter Pattern Helmet */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1" /* GXT: Stars Helmet */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2" /* GXT: Squared Helmet */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3" /* GXT: Crimson Helmet */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4" /* GXT: Skull Helmet */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5" /* GXT: Ace of Spades Helmet */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6" /* GXT: Flamejob Helmet */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7" /* GXT: White Helmet */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0" /* GXT: Hornet Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1" /* GXT: Two-Tone Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2" /* GXT: Orange Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3" /* GXT: Blue Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4" /* GXT: Marble Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5" /* GXT: Purple Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6" /* GXT: Topaz Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7" /* GXT: Beige Sports Shades */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8" /* GXT: Shell Sports Glasses */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9" /* GXT: Black Sports Glasses */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10" /* GXT: White Sports Glasses */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0" /* GXT: Copper Marbles */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1" /* GXT: Blue Tint Marbles */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2" /* GXT: Black Marbles */, 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3" /* GXT: Purple Marbles */, 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4" /* GXT: Teal Marbles */, 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5" /* GXT: Red Tint Marbles */, 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6" /* GXT: White Marbles */, 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7" /* GXT: Pink Tint Marbles */, 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8" /* GXT: Shell Marble Glasses */, 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9" /* GXT: Black Marble Glasses */, 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10" /* GXT: White Marble Glasses */, 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0" /* GXT: Marble Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1" /* GXT: Copper Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2" /* GXT: Orange Tint Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3" /* GXT: Pink Tint Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4" /* GXT: Walnut Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5" /* GXT: Black Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6" /* GXT: Vintage Red Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7" /* GXT: Gold Mademoiselles */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8" /* GXT: Shell Mademoiselle Glasses */, 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9" /* GXT: Black Mademoiselle Glasses */, 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10" /* GXT: White Mademoiselle Glasses */, 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0" /* GXT: Zebra Shields */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1" /* GXT: Ombre Shields */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2" /* GXT: Flame Shields */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3" /* GXT: Violet Shields */, 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4" /* GXT: Sun Shields */, 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5" /* GXT: Silver Accent Shields */, 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6" /* GXT: Party Shields */, 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7" /* GXT: Gold Shields */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8" /* GXT: Shell Shield Glasses */, 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9" /* GXT: Black Shield Glasses */, 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10" /* GXT: White Shield Glasses */, 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0" /* GXT: Deep Walnut Retro */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1" /* GXT: Marble Retro */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2" /* GXT: Beige Retro */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3" /* GXT: Aqua Retro */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4" /* GXT: Dice Retro */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5" /* GXT: Black Retro */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6" /* GXT: Toffee Retro */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7" /* GXT: Red Retro */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8" /* GXT: Shell Retro Glasses */, 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9" /* GXT: Black Retro Glasses */, 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10" /* GXT: White Retro Glasses */, 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0" /* GXT: Purple Tint Bugs */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8" /* GXT: Shell Bug Glasses */, 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9" /* GXT: Black Bug Glasses */, 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10" /* GXT: White Bug Glasses */, 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0" /* GXT: Champagne Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1" /* GXT: Platinum Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2" /* GXT: Sapphire Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3" /* GXT: Amethyst Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4" /* GXT: Gold Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5" /* GXT: White Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6" /* GXT: Gray Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7" /* GXT: Garnet Figure 8s */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8" /* GXT: Shell Figure 8 Glasses */, 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9" /* GXT: Black Figure 8 Glasses */, 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10" /* GXT: White Figure 8 Glasses */, 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0" /* GXT: Orange Tint Squared */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8" /* GXT: Shell Squared Glasses */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9" /* GXT: Black Squared Glasses */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10" /* GXT: White Squared Glasses */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0" /* GXT: Lime Tint Shooters */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1" /* GXT: Orange Tint Shooters */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2" /* GXT: Blue Shooters */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3" /* GXT: Tropic Shooters */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4" /* GXT: Fly Shooters */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5" /* GXT: Crimson Shooters */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6" /* GXT: Green Tint Shooters */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7" /* GXT: Pink Shooters */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8" /* GXT: Shell Shooter Glasses */, 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9" /* GXT: Black Shooter Glasses */, 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10" /* GXT: White Shooter Glasses */, 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0" /* GXT: Luxury Ice Sports */, 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1" /* GXT: Black Sports */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2" /* GXT: Green Sports */, 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3" /* GXT: Luxury Cowhide Sports */, 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4" /* GXT: Orange Sports */, 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5" /* GXT: Black Pattern Sports */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6" /* GXT: Blue Pattern Sports */, 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7" /* GXT: Pink Pattern Sports */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8" /* GXT: Shell HS Glasses */, 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9" /* GXT: Black HS Glasses */, 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10" /* GXT: White HS Glasses */, 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0" /* GXT: Pewter Aviators */, 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1" /* GXT: Steel Aviators */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2" /* GXT: Bronze Aviators */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3" /* GXT: Black Aviators */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4" /* GXT: Neon Aviators */, 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5" /* GXT: Copper Aviators */, 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6" /* GXT: Gold Aviators */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7" /* GXT: Slate Aviators */, 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0" /* GXT: Black Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1" /* GXT: Brown Marble Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2" /* GXT: Pink Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3" /* GXT: Green Marble Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4" /* GXT: Red Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5" /* GXT: Teal Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6" /* GXT: Purple Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7" /* GXT: Blue Cat Eyes */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8" /* GXT: Shell Cat Eye Glasses */, 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9" /* GXT: Black Cat Eye Glasses */, 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10" /* GXT: White Cat Eye Glasses */, 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4" /* GXT: Pewter Watch */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2039[iVar12]) * Global_298067.f_20));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2160[iVar13]) * Global_298067.f_21));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2185[iVar14]) * Global_298067.f_44));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2314[iVar15]) * Global_298067.f_22));
		}
	}
	if (iParam0 >= 327)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 327, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_20));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_44));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_22));
			}
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_252(int iParam0, int iParam1)//Position - 0x1D12A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0" /* GXT: No Crew Emblem */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0" /* GXT: Small Crew Emblem */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0" /* GXT: Small Crew Emblem */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_253(int iParam0, int iParam1)//Position - 0x1D22F
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_3853 /* Tunable: EXPENSE_MODIFIER_GOLD_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3853 /* Tunable: EXPENSE_MODIFIER_GOLD_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_3854 /* Tunable: EXPENSE_MODIFIER_SILVER_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3854 /* Tunable: EXPENSE_MODIFIER_SILVER_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_3855 /* Tunable: EXPENSE_MODIFIER_PEARL_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3855 /* Tunable: EXPENSE_MODIFIER_PEARL_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_3856 /* Tunable: EXPENSE_MODIFIER_COPPER_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3856 /* Tunable: EXPENSE_MODIFIER_COPPER_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_3857 /* Tunable: EXPENSE_MODIFIER_TWO_TONE_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3857 /* Tunable: EXPENSE_MODIFIER_TWO_TONE_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_3858 /* Tunable: EXPENSE_MODIFIER_SAPPHIRE_DECO_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3858 /* Tunable: EXPENSE_MODIFIER_SAPPHIRE_DECO_EARRINGS */;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_3859 /* Tunable: EXPENSE_MODIFIER_GOLD_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3859 /* Tunable: EXPENSE_MODIFIER_GOLD_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_3860 /* Tunable: EXPENSE_MODIFIER_SILVER_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3860 /* Tunable: EXPENSE_MODIFIER_SILVER_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_3861 /* Tunable: EXPENSE_MODIFIER_PINK_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3861 /* Tunable: EXPENSE_MODIFIER_PINK_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_3862 /* Tunable: EXPENSE_MODIFIER_COPPER_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3862 /* Tunable: EXPENSE_MODIFIER_COPPER_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_3863 /* Tunable: EXPENSE_MODIFIER_PURPLE_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3863 /* Tunable: EXPENSE_MODIFIER_PURPLE_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_3864 /* Tunable: EXPENSE_MODIFIER_WHITE_HOOP_EARRINGS */ != -1)
			{
				iVar1 = Global_262145.f_3864 /* Tunable: EXPENSE_MODIFIER_WHITE_HOOP_EARRINGS */;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_3865 /* Tunable: EXPENSE_MODIFIER_HARSH_SOULS_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3865 /* Tunable: EXPENSE_MODIFIER_HARSH_SOULS_SWEATBAND */;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_3866 /* Tunable: EXPENSE_MODIFIER_PROLAPS_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3866 /* Tunable: EXPENSE_MODIFIER_PROLAPS_SWEATBAND */;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_3867 /* Tunable: EXPENSE_MODIFIER_LC_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3867 /* Tunable: EXPENSE_MODIFIER_LC_SWEATBAND */;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_3868 /* Tunable: EXPENSE_MODIFIER_AQUA_STRIPED_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3868 /* Tunable: EXPENSE_MODIFIER_AQUA_STRIPED_SWEATBAND */;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_3869 /* Tunable: EXPENSE_MODIFIER_PINK_CHECK_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3869 /* Tunable: EXPENSE_MODIFIER_PINK_CHECK_SWEATBAND */;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_3870 /* Tunable: EXPENSE_MODIFIER_SQUEEZERS_SWEATBAND */ != -1)
			{
				iVar1 = Global_262145.f_3870 /* Tunable: EXPENSE_MODIFIER_SQUEEZERS_SWEATBAND */;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_3871 /* Tunable: EXPENSE_MODIFIER_SILVER_BANGLES */ != -1)
			{
				iVar1 = Global_262145.f_3871 /* Tunable: EXPENSE_MODIFIER_SILVER_BANGLES */;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_3872 /* Tunable: EXPENSE_MODIFIER_GOLD_BANGLES */ != -1)
			{
				iVar1 = Global_262145.f_3872 /* Tunable: EXPENSE_MODIFIER_GOLD_BANGLES */;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_3873 /* Tunable: EXPENSE_MODIFIER_WHITE_LEATHER_STRAPS */ != -1)
			{
				iVar1 = Global_262145.f_3873 /* Tunable: EXPENSE_MODIFIER_WHITE_LEATHER_STRAPS */;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_3874 /* Tunable: EXPENSE_MODIFIER_RAINBOW_LEATHER_STRAPS */ != -1)
			{
				iVar1 = Global_262145.f_3874 /* Tunable: EXPENSE_MODIFIER_RAINBOW_LEATHER_STRAPS */;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_3875 /* Tunable: EXPENSE_MODIFIER_ONYX_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3875 /* Tunable: EXPENSE_MODIFIER_ONYX_PENDANT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_3876 /* Tunable: EXPENSE_MODIFIER_PEARL_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3876 /* Tunable: EXPENSE_MODIFIER_PEARL_PENDANT */;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_3877 /* Tunable: EXPENSE_MODIFIER_JADE_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3877 /* Tunable: EXPENSE_MODIFIER_JADE_PENDANT */;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_3878 /* Tunable: EXPENSE_MODIFIER_CARNELIAN_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3878 /* Tunable: EXPENSE_MODIFIER_CARNELIAN_PENDANT */;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_3879 /* Tunable: EXPENSE_MODIFIER_AQUAMARINE_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3879 /* Tunable: EXPENSE_MODIFIER_AQUAMARINE_PENDANT */;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_3880 /* Tunable: EXPENSE_MODIFIER_AMETHYST_PENDANT */ != -1)
			{
				iVar1 = Global_262145.f_3880 /* Tunable: EXPENSE_MODIFIER_AMETHYST_PENDANT */;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_3881 /* Tunable: EXPENSE_MODIFIER_GOLD_NECKLACE */ != -1)
			{
				iVar1 = Global_262145.f_3881 /* Tunable: EXPENSE_MODIFIER_GOLD_NECKLACE */;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_3882 /* Tunable: EXPENSE_MODIFIER_SILVER_NECKLACE */ != -1)
			{
				iVar1 = Global_262145.f_3882 /* Tunable: EXPENSE_MODIFIER_SILVER_NECKLACE */;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_3883 /* Tunable: EXPENSE_MODIFIER_SCARF */ != -1)
			{
				iVar1 = Global_262145.f_3883 /* Tunable: EXPENSE_MODIFIER_SCARF */;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 55, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_46));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_298067.f_46));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_254(int iParam0, int iParam1)//Position - 0x1DA0B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 26, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_23));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2012[iVar11]) * Global_298067.f_23));
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_255(int iParam0, int iParam1)//Position - 0x1DCF0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1755[iVar11]) * Global_298067.f_19));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_19));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_256(int iParam0, int iParam1)//Position - 0x1F317
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1241[iVar11]) * Global_298067.f_17));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_17));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_257(int iParam0, int iParam1)//Position - 0x20978
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_258(int iParam0, int iParam1)//Position - 0x20AD3
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_259(int iParam0, int iParam1)//Position - 0x20D53
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1" /* GXT: Salamanders T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2" /* GXT: The Feud T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3" /* GXT: Yellow T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4" /* GXT: Red T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5" /* GXT: Cyan T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6" /* GXT: Blue T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7" /* GXT: Tan T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8" /* GXT: Pink T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9" /* GXT: Mint T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10" /* GXT: Ash T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11" /* GXT: Gray T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12" /* GXT: Leopard T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13" /* GXT: Two-Tone T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14" /* GXT: Baby Blue T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15" /* GXT: Two-Tone Striped T-Shirt */, 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13" /* GXT: Red Two-Tone Tank */, 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[77] /* Tunable: DISCOUNT_FEMALE_UPPERS_RED_TWO_TONE_TANK */));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14" /* GXT: Two-Tone Tank */, 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[78] /* Tunable: DISCOUNT_FEMALE_UPPERS_TWO_TONE_TANK */));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0" /* GXT: Off-White Cropped Tank */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[80] /* Tunable: DISCOUNT_FEMALE_UPPERS_OFF_WHITE_CROPPED_TANK */));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1" /* GXT: Ash Cropped Tank */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[81] /* Tunable: DISCOUNT_FEMALE_UPPERS_ASH_CROPPED_TANK */));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7" /* GXT: Snakeskin Cropped Tank */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[87] /* Tunable: DISCOUNT_FEMALE_UPPERS_SNAKESKIN_CROPPED_TANK */));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9" /* GXT: White Stripe Cropped Tank */, 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[89] /* Tunable: DISCOUNT_FEMALE_UPPERS_WHITE_STRIPE_CROPPED_TANK */));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0" /* GXT: Sky Blue Racerback */, 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[176] /* Tunable: DISCOUNT_FEMALE_UPPERS_SKY_BLUE_RACERBACK */));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1" /* GXT: Purple Racerback */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[177] /* Tunable: DISCOUNT_FEMALE_UPPERS_PURPLE_RACERBACK */));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2" /* GXT: Gray Racerback */, 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[178] /* Tunable: DISCOUNT_FEMALE_UPPERS_GRAY_RACERBACK */));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10" /* GXT: Los Santos 01 Racerback */, 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[186] /* Tunable: DISCOUNT_FEMALE_UPPERS_LOS_SANTOS_01_RACERBACK */));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11" /* GXT: LS Racerback */, 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[187] /* Tunable: DISCOUNT_FEMALE_UPPERS_LS_RACERBACK */));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15" /* GXT: LC Penetrators Racerback */, 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[191] /* Tunable: DISCOUNT_FEMALE_UPPERS_LC_PENETRATORS_RACERBACK */));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7" /* GXT: Neon Camisole */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[199] /* Tunable: DISCOUNT_FEMALE_UPPERS_NEON_LEOPARD_CAMISOLE */));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8" /* GXT: Red Spotted Camisole */, 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[200] /* Tunable: DISCOUNT_FEMALE_UPPERS_RED_SPOTTED_CAMISOLE */));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9" /* GXT: Black Spotted Camisole */, 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[201] /* Tunable: DISCOUNT_FEMALE_UPPERS_BLACK_SPOTTED_CAMISOLE */));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0" /* GXT: Black Bustier */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[208] /* Tunable: DISCOUNT_FEMALE_UPPERS_BLACK_BUSTIER */));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1" /* GXT: Pink Rose Bustier */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[209] /* Tunable: DISCOUNT_FEMALE_UPPERS_PINK_BUSTIER */));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2" /* GXT: Olive Bustier */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[210] /* Tunable: DISCOUNT_FEMALE_UPPERS_BLUE_BUSTIER */));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3" /* GXT: Gray Bustier */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[211] /* Tunable: DISCOUNT_FEMALE_UPPERS_WHITE_BUSTIER */));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4" /* GXT: Floral Bustier */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[212] /* Tunable: DISCOUNT_FEMALE_UPPERS_OLIVE_BUSTIER */));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5" /* GXT: Red Plaid Bustier */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[213] /* Tunable: DISCOUNT_FEMALE_UPPERS_TWO_TONE_BUSTIER */));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6" /* GXT: Studded Bustier */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[214] /* Tunable: DISCOUNT_FEMALE_UPPERS_PURPLE_BUSTIER */));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7" /* GXT: Pink Bustier */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[215] /* Tunable: DISCOUNT_FEMALE_UPPERS_RED_BUSTIER */));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8" /* GXT: White Bustier */, 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[216] /* Tunable: DISCOUNT_FEMALE_UPPERS_LEOPARD_BUSTIER */));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9" /* GXT: Vivid Blue Bustier */, 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[217] /* Tunable: DISCOUNT_FEMALE_UPPERS_PLAID_BUSTIER */));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10" /* GXT: Denim Bustier */, 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[218] /* Tunable: DISCOUNT_FEMALE_UPPERS_WOODLAND_CAMO_BUSTIER */));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11" /* GXT: Pink Tribal Bustier */, 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[219] /* Tunable: DISCOUNT_FEMALE_UPPERS_URBAN_CAMO_BUSTIER */));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12" /* GXT: Camo Bustier */, 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[220] /* Tunable: DISCOUNT_FEMALE_UPPERS_PINK_PATTERNED_BUSTIER */));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13" /* GXT: Blue Bustier */, 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[221] /* Tunable: DISCOUNT_FEMALE_UPPERS_DENIM_BUSTIER */));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14" /* GXT: Black & White Bustier */, 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[222] /* Tunable: DISCOUNT_FEMALE_UPPERS_DARK_FLORAL_BUSTIER */));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15" /* GXT: Leopard Bustier */, 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[223] /* Tunable: DISCOUNT_FEMALE_UPPERS_LIGHT_FLORAL_BUSTIER */));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0" /* GXT: Black Bikini */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[240] /* Tunable: DISCOUNT_FEMALE_UPPERS_BLACK_BIKINI */));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3" /* GXT: Gray Bikini */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[243] /* Tunable: DISCOUNT_FEMALE_UPPERS_GRAY_BIKINI */));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10" /* GXT: Aqua Bikini */, 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[250] /* Tunable: DISCOUNT_FEMALE_UPPERS_AQUA_BIKINI */));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11" /* GXT: Orange Bikini */, 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[251] /* Tunable: DISCOUNT_FEMALE_UPPERS_ORANGE_BIKINI */));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 136, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_18));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_260(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[4] /* Tunable: DISCOUNT_FEMALE_UPPERS_RED_T_SHIRT */));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_260(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[9] /* Tunable: DISCOUNT_FEMALE_UPPERS_MINT_T_SHIRT */));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_298067.f_18));
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

int func_260(int iParam0, int iParam1)//Position - 0x220F5
{
	var uVar0;
	int iVar1;
	
	if (func_263(iParam0) == 14835)
	{
		return 0;
	}
	uVar0 = func_262(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_261(iVar1));
}

int func_261(int iParam0)//Position - 0x22124
{
	return (iParam0 % 32);
}

int func_262(var uParam0, int iParam1)//Position - 0x22131
{
	int iVar0;
	
	iVar0 = func_158(func_263(uParam0), iParam1);
	return iVar0;
}

int func_263(var uParam0)//Position - 0x22149
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_265(iVar0);
	if ((func_121() == 0 || func_264() == 0) || (func_121() == 999 && func_264() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10288;
				break;
			
			case 47:
				return 10291;
				break;
			
			case 48:
				return 10414;
				break;
			
			case 49:
				return 10417;
				break;
			
			case 50:
				return 11826;
				break;
			
			case 51:
				return 11829;
				break;
			
			case 52:
				return 12222;
				break;
			
			case 53:
				return 12225;
				break;
		}
	}
	return 14835;
}

int func_264()//Position - 0x224C4
{
	return Global_32949;
}

int func_265(int iParam0)//Position - 0x224CF
{
	return (iParam0 / 32);
}

void func_266(int iParam0, int iParam1)//Position - 0x224DC
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_260(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_298067.f_18));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[4] /* Tunable: DISCOUNT_FEMALE_UPPERS_RED_T_SHIRT */) * Global_298067.f_18));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_298067.f_18));
	}
	else if (iParam0 == 9)
	{
		if (func_260(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_298067.f_18));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1498[9] /* Tunable: DISCOUNT_FEMALE_UPPERS_MINT_T_SHIRT */) * Global_298067.f_18));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1498[iVar11]) * Global_298067.f_18));
		}
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_248(iVar10, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_18));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_267(int iParam0, int iParam1)//Position - 0x23C41
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[0] /* Tunable: FEMALE_HAIR_CLOSE_SHAVE_EXPENDITURE_TUNABLE */));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[1] /* Tunable: FEMALE_HAIR_SHORT_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[2] /* Tunable: FEMALE_HAIR_SHORT_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[3] /* Tunable: FEMALE_HAIR_SHORT_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[4] /* Tunable: FEMALE_HAIR_SHORT_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[5] /* Tunable: FEMALE_HAIR_SHORT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[6] /* Tunable: FEMALE_HAIR_LAYERED_BOB_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[7] /* Tunable: FEMALE_HAIR_LAYERED_BOB_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[8] /* Tunable: FEMALE_HAIR_LAYERED_BOB_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[9] /* Tunable: FEMALE_HAIR_LAYERED_BOB_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[10] /* Tunable: FEMALE_HAIR_LAYERED_BOB_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[11] /* Tunable: FEMALE_HAIR_PIGTAILS_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[12] /* Tunable: FEMALE_HAIR_PIGTAILS_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[13] /* Tunable: FEMALE_HAIR_PIGTAILS_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[14] /* Tunable: FEMALE_HAIR_PIGTAILS_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[15] /* Tunable: FEMALE_HAIR_PIGTAILS_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[16] /* Tunable: FEMALE_HAIR_PONYTAIL_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[17] /* Tunable: FEMALE_HAIR_PONYTAIL_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[18] /* Tunable: FEMALE_HAIR_PONYTAIL_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[19] /* Tunable: FEMALE_HAIR_PONYTAIL_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[20] /* Tunable: FEMALE_HAIR_PONYTAIL_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[21] /* Tunable: FEMALE_HAIR_BRAIDED_MOHAWK_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[22] /* Tunable: FEMALE_HAIR_BRAIDED_MOHAWK_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[23] /* Tunable: FEMALE_HAIR_BRAIDED_MOHAWK_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[24] /* Tunable: FEMALE_HAIR_BRAIDED_MOHAWK_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[25] /* Tunable: FEMALE_HAIR_BRAIDED_MOHAWK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[26] /* Tunable: FEMALE_HAIR_BRAIDS_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[27] /* Tunable: FEMALE_HAIR_BRAIDS_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[28] /* Tunable: FEMALE_HAIR_BRAIDS_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[29] /* Tunable: FEMALE_HAIR_BRAIDS_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[30] /* Tunable: FEMALE_HAIR_BRAIDS_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[31] /* Tunable: FEMALE_HAIR_BOB_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[32] /* Tunable: FEMALE_HAIR_BOB_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[33] /* Tunable: FEMALE_HAIR_BOB_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[34] /* Tunable: FEMALE_HAIR_BOB_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[35] /* Tunable: FEMALE_HAIR_BOB_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[36] /* Tunable: FEMALE_HAIR_FAUX_HAWK_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[37] /* Tunable: FEMALE_HAIR_FAUX_HAWK_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[38] /* Tunable: FEMALE_HAIR_FAUX_HAWK_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[39] /* Tunable: FEMALE_HAIR_FAUX_HAWK_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[40] /* Tunable: FEMALE_HAIR_FAUX_HAWK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[41] /* Tunable: FEMALE_HAIR_FRENCH_TWIST_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[42] /* Tunable: FEMALE_HAIR_FRENCH_TWIST_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[43] /* Tunable: FEMALE_HAIR_FRENCH_TWIST_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[44] /* Tunable: FEMALE_HAIR_FRENCH_TWIST_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[45] /* Tunable: FEMALE_HAIR_FRENCH_TWIST_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[46] /* Tunable: FEMALE_HAIR_LONG_BOB_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[47] /* Tunable: FEMALE_HAIR_LONG_BOB_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[48] /* Tunable: FEMALE_HAIR_LONG_BOB_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[49] /* Tunable: FEMALE_HAIR_LONG_BOB_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[50] /* Tunable: FEMALE_HAIR_LONG_BOB_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[51] /* Tunable: FEMALE_HAIR_LOOSE_TIED_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[52] /* Tunable: FEMALE_HAIR_LOOSE_TIED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[53] /* Tunable: FEMALE_HAIR_LOOSE_TIED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[54] /* Tunable: FEMALE_HAIR_LOOSE_TIED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[55] /* Tunable: FEMALE_HAIR_LOOSE_TIED_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[56] /* Tunable: FEMALE_HAIR_PIXIE_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[57] /* Tunable: FEMALE_HAIR_PIXIE_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[58] /* Tunable: FEMALE_HAIR_PIXIE_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[59] /* Tunable: FEMALE_HAIR_PIXIE_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[60] /* Tunable: FEMALE_HAIR_PIXIE_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[61] /* Tunable: FEMALE_HAIR_SHAVED_BANGS_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[62] /* Tunable: FEMALE_HAIR_SHAVED_BANGS_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[63] /* Tunable: FEMALE_HAIR_SHAVED_BANGS_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[64] /* Tunable: FEMALE_HAIR_SHAVED_BANGS_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[65] /* Tunable: FEMALE_HAIR_SHAVED_BANGS_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[66] /* Tunable: FEMALE_HAIR_TOP_KNOT_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[67] /* Tunable: FEMALE_HAIR_TOP_KNOT_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[68] /* Tunable: FEMALE_HAIR_TOP_KNOT_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[69] /* Tunable: FEMALE_HAIR_TOP_KNOT_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[70] /* Tunable: FEMALE_HAIR_TOP_KNOT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[71] /* Tunable: FEMALE_HAIR_WAVY_BOB_CHESTNUT_EXPENDITURE_TUNABLE */));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[72] /* Tunable: FEMALE_HAIR_WAVY_BOB_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[73] /* Tunable: FEMALE_HAIR_WAVY_BOB_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[74] /* Tunable: FEMALE_HAIR_WAVY_BOB_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2435[75] /* Tunable: FEMALE_HAIR_WAVY_BOB_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_248(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_268(int iParam0, int iParam1, int iParam2)//Position - 0x24B13
{
	switch (iParam0)
	{
		case 2:
			func_283(iParam1, iParam2);
			break;
		
		case 11:
			func_282(iParam1, iParam2);
			break;
		
		case 8:
			func_281(iParam1, iParam2);
			break;
		
		case 9:
			func_280(iParam1, iParam2);
			break;
		
		case 3:
			func_279(iParam1, iParam2);
			break;
		
		case 4:
			func_278(iParam1, iParam2);
			break;
		
		case 6:
			func_277(iParam1, iParam2);
			break;
		
		case 1:
			func_276(iParam1, iParam2);
			break;
		
		case 7:
			func_275(iParam1, iParam2);
			break;
		
		case 10:
			func_274(iParam1, iParam2);
			break;
		
		case 14:
			func_273(iParam1, iParam2);
			break;
		
		case 12:
			func_272(iParam1, iParam2);
			break;
		
		case 5:
			func_271(iParam1, iParam2);
			break;
		
		case 0:
			func_270(iParam1, iParam2);
			break;
		
		case 13:
			func_269(iParam1);
			break;
	}
}

void func_269(int iParam0)//Position - 0x24C1F
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_270(int iParam0, int iParam1)//Position - 0x24DE9
{
	int iVar0;
	
	iVar0 = 0;
	Global_79172[0 /*14*/].f_5 = 3;
	func_248(iVar0, iParam0, 0, iParam1);
}

void func_271(int iParam0, int iParam1)//Position - 0x24E09
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_272(int iParam0, int iParam1)//Position - 0x24F0C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1" /* GXT: The Beat Maker */, 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2" /* GXT: The Brand */, 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3" /* GXT: The Skater */, 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4" /* GXT: The Roller */, 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5" /* GXT: The Camo Kid */, 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6" /* GXT: The Vibe */, 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7" /* GXT: The Color Junky */, 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8" /* GXT: The Classic T */, 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9" /* GXT: The Worker */, 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1" /* GXT: The Ladies Man */, 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2" /* GXT: The Office */, 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3" /* GXT: The After Party */, 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4" /* GXT: The Rebel */, 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5" /* GXT: The Trendsetter */, 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6" /* GXT: The Artist */, 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7" /* GXT: The Icon */, 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8" /* GXT: The Nightlife */, 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1" /* GXT: The Sun Bather */, 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2" /* GXT: The Stoop */, 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3" /* GXT: The Street G */, 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4" /* GXT: The Effortless */, 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5" /* GXT: The Everyday */, 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6" /* GXT: The Hood */, 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7" /* GXT: The Jock */, 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8" /* GXT: The Pounders Fan */, 16);
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_273(int iParam0, int iParam1)//Position - 0x251BD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0" /* GXT: Red Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1" /* GXT: Blue Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2" /* GXT: Green Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3" /* GXT: Yellow Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4" /* GXT: Desert Camo Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5" /* GXT: Black Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6" /* GXT: Gray Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7" /* GXT: White Ear Defenders */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0" /* GXT: White Dunce Cap */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0" /* GXT: Black Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1" /* GXT: Gray Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2" /* GXT: Blue Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3" /* GXT: Rasta Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4" /* GXT: Gray Striped Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5" /* GXT: Trio Knit Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6" /* GXT: White Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7" /* GXT: Maroon Winter Hat */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1" /* GXT: Black Canvas Hat */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2" /* GXT: Tan Canvas Hat */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0" /* GXT: Black LS Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1" /* GXT: Gray LS Fitted Cap */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0" /* GXT: Black Saggy Beanie */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1" /* GXT: Gray Saggy Beanie */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0" /* GXT: Green Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1" /* GXT: Black Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2" /* GXT: Gray Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3" /* GXT: Blue Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4" /* GXT: Desert Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5" /* GXT: Woodland Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6" /* GXT: Ranch Beige Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7" /* GXT: Ranch Brown Army Cap */, 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0" /* GXT: White Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1" /* GXT: Gray Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2" /* GXT: Black Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3" /* GXT: Navy Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4" /* GXT: Red Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5" /* GXT: Brown Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6" /* GXT: Green Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7" /* GXT: Yellow Flat Cap */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5" /* GXT: Fruntalot Green Cap */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7" /* GXT: Stank Purple Cap */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5" /* GXT: Fruntalot Green Cap */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7" /* GXT: Stank Purple Cap */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1" /* GXT: Black Pork Pie */, 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3" /* GXT: Olive Pork Pie */, 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6" /* GXT: Blue Pork Pie */, 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0" /* GXT: Black Fedora */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1" /* GXT: White Fedora */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2" /* GXT: Ash Fedora */, 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4" /* GXT: Brown Fedora */, 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6" /* GXT: Green Fedora */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7" /* GXT: Navy Fedora */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0" /* GXT: Black Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1" /* GXT: Brown Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2" /* GXT: Chocolate Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3" /* GXT: White Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4" /* GXT: Chestnut Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5" /* GXT: Beige Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6" /* GXT: Red Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7" /* GXT: Tan Cowboy Hat */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0" /* GXT: White Paisley Bandana */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1" /* GXT: Black Paisley Bandana */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2" /* GXT: Navy Bandana */, 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3" /* GXT: Red Bandana */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4" /* GXT: Green Bandana */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5" /* GXT: Purple Bandana */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6" /* GXT: Camo Bandana */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7" /* GXT: Yellow Bandana */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0" /* GXT: Beat Off White Headphones */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1" /* GXT: Beat Off Black Headphones */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2" /* GXT: Beat Off Red Headphones */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3" /* GXT: Beat Off Blue Headphones */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4" /* GXT: Beat Off Yellow Headphones */, 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5" /* GXT: Beat Off Purple Headphones */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6" /* GXT: Beat Off Gray Headphones */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7" /* GXT: Beat Off Green Headphones */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0" /* GXT: Western MC Yellow Helmet */, 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1" /* GXT: Steel Horse Blue Helmet */, 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2" /* GXT: Steel Horse Orange Helmet */, 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3" /* GXT: Western MC Green Helmet */, 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4" /* GXT: Western MC Red Helmet */, 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5" /* GXT: Steel Horse Black Helmet */, 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6" /* GXT: Black Helmet */, 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7" /* GXT: Western MC Lilac Helmet */, 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0" /* GXT: Blue Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1" /* GXT: Orange Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2" /* GXT: Pale Blue Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3" /* GXT: Red Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4" /* GXT: Gray Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5" /* GXT: Black Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6" /* GXT: Pink Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7" /* GXT: White Open-Face Helmet */, 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0" /* GXT: Shatter Pattern Helmet */, 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1" /* GXT: Stars Helmet */, 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2" /* GXT: Squared Helmet */, 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3" /* GXT: Crimson Helmet */, 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4" /* GXT: Skull Helmet */, 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5" /* GXT: Ace of Spades Helmet */, 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6" /* GXT: Flamejob Helmet */, 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7" /* GXT: White Helmet */, 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1" /* GXT: Black Wraparounds */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0" /* GXT: Black Winter Shades */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1" /* GXT: White Silver Shades */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2" /* GXT: Crimson Polarized Shades */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3" /* GXT: Black Summer Shades */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4" /* GXT: Black Autumn Shades */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5" /* GXT: White Rust Shades */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6" /* GXT: White Steel Shades */, 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7" /* GXT: Green Polarized Shades */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8" /* GXT: Shell Stank Glasses */, 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9" /* GXT: Black Stank Glasses */, 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10" /* GXT: White Stank Glasses */, 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0" /* GXT: Slate Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1" /* GXT: Black Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2" /* GXT: Gray Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3" /* GXT: Ash Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4" /* GXT: Tan Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5" /* GXT: Smoke Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6" /* GXT: Charcoal Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7" /* GXT: White Janitor Frames */, 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8" /* GXT: Shell Janitor Glasses */, 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9" /* GXT: Black Janitor Glasses */, 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10" /* GXT: White Janitor Glasses */, 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0" /* GXT: Enema Brown Glasses */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1" /* GXT: Enema Gray Glasses */, 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2" /* GXT: Enema Black Glasses */, 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3" /* GXT: Enema Tortoiseshell Glasses */, 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4" /* GXT: Enema Walnut Glasses */, 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5" /* GXT: Enema Marble Glasses */, 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6" /* GXT: Enema Smoke Glasses */, 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7" /* GXT: Enema Smoke Shades */, 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8" /* GXT: Shell Enema Glasses */, 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9" /* GXT: Black Enema Glasses */, 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10" /* GXT: White Enema Glasses */, 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0" /* GXT: Gold Aviators */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1" /* GXT: Steel Aviators */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2" /* GXT: Silver Aviators, Brown Tint */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3" /* GXT: Gray Aviators, Green Tint */, 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4" /* GXT: Silver Aviators, Blue Tint */, 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5" /* GXT: Tan Aviators, Dark Tint */, 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6" /* GXT: Steel Aviators, Blue Tint */, 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7" /* GXT: Silver Aviators, Copper Tint */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8" /* GXT: Shell Aviator Glasses */, 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9" /* GXT: Black Aviator Glasses */, 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10" /* GXT: White Aviator Glasses */, 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0" /* GXT: Black Casuals */, 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1" /* GXT: Zap Casuals */, 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2" /* GXT: Tortoiseshell Casuals */, 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3" /* GXT: Red Casuals */, 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4" /* GXT: White Casuals */, 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5" /* GXT: Camo Collection Casuals */, 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6" /* GXT: Lemon Casuals */, 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7" /* GXT: Blood Casuals */, 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8" /* GXT: Shell Casual Glasses */, 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9" /* GXT: Black Casual Glasses */, 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10" /* GXT: White Casual Glasses */, 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0" /* GXT: Brown Eyewear */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1" /* GXT: Silver Eyewear */, 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2" /* GXT: Gray Eyewear */, 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3" /* GXT: Smoke Cop Frames */, 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4" /* GXT: Coffee Cop Frames */, 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5" /* GXT: Black Cop Frames */, 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6" /* GXT: Slate Cop Frames */, 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7" /* GXT: Charcoal Cop Frames */, 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8" /* GXT: Shell Cop Glasses */, 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9" /* GXT: Black Cop Glasses */, 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10" /* GXT: White Cop Glasses */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0" /* GXT: Hawaiian Snow Black */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1" /* GXT: Hawaiian Snow Gray */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2" /* GXT: Hawaiian Snow White */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3" /* GXT: Hawaiian Snow Ash */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4" /* GXT: Hawaiian Snow Copper */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5" /* GXT: Hawaiian Snow Tortoiseshell */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6" /* GXT: Hawaiian Snow Marble */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7" /* GXT: Hawaiian Snow Walnut */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8" /* GXT: Shell HS Glasses */, 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9" /* GXT: Black HS Glasses */, 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10" /* GXT: White HS Glasses */, 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0" /* GXT: Gold Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1" /* GXT: Gray Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2" /* GXT: Silver Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3" /* GXT: Black Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4" /* GXT: Brown Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5" /* GXT: Slate Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6" /* GXT: White Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7" /* GXT: Purple Tint Bull Emic */, 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8" /* GXT: Shell Bull Emic Glasses */, 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9" /* GXT: Black Bull Emic Glasses */, 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10" /* GXT: White Bull Emic Glasses */, 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0" /* GXT: Orange Elvis */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1" /* GXT: Gray Elvis */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2" /* GXT: Slate Elvis */, 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3" /* GXT: Black Elvis */, 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4" /* GXT: White Elvis */, 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5" /* GXT: Blue Tint Elvis */, 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6" /* GXT: Pink Tint Elvis */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7" /* GXT: Copper Elvis */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8" /* GXT: Shell Elvis Glasses */, 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9" /* GXT: Black Elvis Glasses */, 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10" /* GXT: White Elvis Glasses */, 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0" /* GXT: Broker Black Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1" /* GXT: White Polarized Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2" /* GXT: Choco Polarized Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3" /* GXT: Slate Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4" /* GXT: Charcoal Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5" /* GXT: Olive Polarized Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6" /* GXT: Gold Polarized Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7" /* GXT: Candy Polarized Hipsters */, 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8" /* GXT: Shell Hipster Glasses */, 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9" /* GXT: Black Hipster Glasses */, 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10" /* GXT: White Hipster Glasses */, 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0" /* GXT: Yellow Guns */, 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1" /* GXT: White Guns */, 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2" /* GXT: Gray Guns */, 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3" /* GXT: Red Guns */, 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4" /* GXT: Blue Guns */, 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5" /* GXT: Hornet Guns */, 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6" /* GXT: Orange Guns */, 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7" /* GXT: Pink Guns */, 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8" /* GXT: Shell Gun Glasses */, 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9" /* GXT: Black Gun Glasses */, 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10" /* GXT: White Gun Glasses */, 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0" /* GXT: Deep Sea Watch */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1" /* GXT: Gold Watch */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2" /* GXT: Silver Watch */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3" /* GXT: Black Watch */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4" /* GXT: Gold Faced Silver Watch */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0" /* GXT: White LED, Black Strap */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1" /* GXT: Red LED, White Strap */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2" /* GXT: Red LED, Brown Strap */, 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_950[iVar12]) * Global_298067.f_12));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1071[iVar13]) * Global_298067.f_13));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1096[iVar14]) * Global_298067.f_14));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1225[iVar15]) * Global_298067.f_15));
		}
	}
	if (iParam0 >= 327)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_248(iVar10, iParam0, 327, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HAT"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_12));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("GLASSES"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_14));
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("WATCH"), 1))
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_15));
			}
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_274(int iParam0, int iParam1)//Position - 0x27F7C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0" /* GXT: No Crew Emblem */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0" /* GXT: Small Crew Emblem */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0" /* GXT: Small Crew Emblem */, 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0" /* GXT: Small Crew Emblem */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0" /* GXT: Large Crew Emblem */, 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_275(int iParam0, int iParam1)//Position - 0x2809E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_3884 /* Tunable: EXPENSE_MODIFIER_WHITE_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3884 /* Tunable: EXPENSE_MODIFIER_WHITE_TIE */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_3885 /* Tunable: EXPENSE_MODIFIER_GRAY_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3885 /* Tunable: EXPENSE_MODIFIER_GRAY_TIE */;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_3886 /* Tunable: EXPENSE_MODIFIER_BLACK_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3886 /* Tunable: EXPENSE_MODIFIER_BLACK_TIE */;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_3890 /* Tunable: EXPENSE_MODIFIER_BLACK_BOWTIE */ != -1)
			{
				iVar1 = Global_262145.f_3890 /* Tunable: EXPENSE_MODIFIER_BLACK_BOWTIE */;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_3887 /* Tunable: EXPENSE_MODIFIER_WHITE_SKINNY_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3887 /* Tunable: EXPENSE_MODIFIER_WHITE_SKINNY_TIE */;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_3888 /* Tunable: EXPENSE_MODIFIER_GRAY_SKINNY_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3888 /* Tunable: EXPENSE_MODIFIER_GRAY_SKINNY_TIE */;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_3889 /* Tunable: EXPENSE_MODIFIER_BLACK_SKINNY_TIE */ != -1)
			{
				iVar1 = Global_262145.f_3889 /* Tunable: EXPENSE_MODIFIER_BLACK_SKINNY_TIE */;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 92, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_45));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_298067.f_45));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_276(int iParam0, int iParam1)//Position - 0x28996
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_923[iVar11]) * Global_298067.f_16));
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_277(int iParam0, int iParam1)//Position - 0x28C4D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_666[iVar11]) * Global_298067.f_11));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_248(iVar10, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_11));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_278(int iParam0, int iParam1)//Position - 0x2A28A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_171[iVar11]) * Global_298067.f_9));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_248(iVar10, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_9));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_279(int iParam0, int iParam1)//Position - 0x2B8BD
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_280(int iParam0, int iParam1)//Position - 0x2BA14
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_281(int iParam0, int iParam1)//Position - 0x2BD30
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0" /* GXT: Crew T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1" /* GXT: Yeti T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2" /* GXT: Charcoal T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3" /* GXT: Stank T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4" /* GXT: Ranch T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5" /* GXT: Pikeys T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7" /* GXT: Multi-Logo T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8" /* GXT: Sweatbox T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11" /* GXT: Eris T-Shirt */, 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_3893 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3893 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_3901 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3901 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_3896 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3896 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0" /* GXT: Black Vest */, 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_3893 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3893 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_VEST */;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1" /* GXT: Gray Vest */, 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_3901 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3901 /* Tunable: DISCOUNT_MALE_SPECIAL_GRAY_VEST */;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2" /* GXT: Blue Vest */, 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_3896 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */ != -1)
			{
				iVar1 = Global_262145.f_3896 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_VEST */;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0" /* GXT: White Tank */, 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[80] /* Tunable: DISCOUNT_MALE_UPPERS_WHITE_TANK */));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1" /* GXT: Gray Tank */, 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[81] /* Tunable: DISCOUNT_MALE_UPPERS_GRAY_TANK */));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2" /* GXT: Black Tank */, 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[82] /* Tunable: DISCOUNT_MALE_UPPERS_BLACK_TANK */));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7" /* GXT: Red Tank */, 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[87] /* Tunable: DISCOUNT_MALE_UPPERS_PINK_TANK */));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_3892 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3892 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_3899 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3899 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_3894 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3894 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_3909 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3909 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_3902 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3902 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0" /* GXT: White Shirt */, 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1" /* GXT: Silver Shirt */, 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_3892 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3892 /* Tunable: DISCOUNT_MALE_SPECIAL_BLACK_SHIRT */;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3" /* GXT: Pale Blue Shirt */, 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4" /* GXT: Barely Blue Shirt */, 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5" /* GXT: Pink Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6" /* GXT: Salmon Shirt */, 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7" /* GXT: Pale Olive Shirt */, 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8" /* GXT: Fuchsia Shirt */, 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9" /* GXT: Off-White Shirt */, 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10" /* GXT: Mint Shirt */, 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11" /* GXT: Tan Shirt */, 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12" /* GXT: Dark Salmon Shirt */, 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_3899 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3899 /* Tunable: DISCOUNT_MALE_SPECIAL_DARK_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13" /* GXT: Blue Check Shirt */, 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_3894 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3894 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14" /* GXT: Pink Shirt */, 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_3909 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3909 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15" /* GXT: Lemon Shirt */, 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_3902 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3902 /* Tunable: DISCOUNT_MALE_SPECIAL_LEMON_SHIRT */;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0" /* GXT: Red Accent Tee */, 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10" /* GXT: Sky Blue Tee */, 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13" /* GXT: Slate Tee */, 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14" /* GXT: Gray Two-Tone Tee */, 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0" /* GXT: White Striped Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1" /* GXT: Metal Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2" /* GXT: Night Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3" /* GXT: Cupcake Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4" /* GXT: Blue Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5" /* GXT: Vibe Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6" /* GXT: Salmon Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7" /* GXT: Royale Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10" /* GXT: Pro Lite Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11" /* GXT: Ice Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12" /* GXT: Money Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13" /* GXT: Hunter Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14" /* GXT: Red Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15" /* GXT: Sunshine Polo Shirt */, 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_3898 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3898 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_3897 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3897 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_3895 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3895 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_3910 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3910 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_3904 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3904 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0" /* GXT: White Shirt */, 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3914 /* Tunable: DISCOUNT_MALE_SPECIAL_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1" /* GXT: Silver Shirt */, 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3912 /* Tunable: DISCOUNT_MALE_SPECIAL_SILVER_SHIRT */;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2" /* GXT: Charcoal Shirt */, 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_3898 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3898 /* Tunable: DISCOUNT_MALE_SPECIAL_CHARCOAL_SHIRT */;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3" /* GXT: Pale Blue Shirt */, 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3906 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4" /* GXT: Barely Blue Shirt */, 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3891 /* Tunable: DISCOUNT_MALE_SPECIAL_BARELY_BLUE_SHIRT */;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5" /* GXT: Pink Check Shirt */, 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3908 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_CHECK_SHIRT */;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6" /* GXT: Blue Woven Shirt */, 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_3897 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3897 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_WOVEN_SHIRT */;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7" /* GXT: Salmon Shirt */, 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3911 /* Tunable: DISCOUNT_MALE_SPECIAL_SALMON_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8" /* GXT: Pale Olive Shirt */, 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3907 /* Tunable: DISCOUNT_MALE_SPECIAL_PALE_OLIVE_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9" /* GXT: Fuchsia Shirt */, 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3900 /* Tunable: DISCOUNT_MALE_SPECIAL_FUCHSIA_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10" /* GXT: Off-White Shirt */, 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3905 /* Tunable: DISCOUNT_MALE_SPECIAL_OFF_WHITE_SHIRT */;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11" /* GXT: Mint Shirt */, 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3903 /* Tunable: DISCOUNT_MALE_SPECIAL_MINT_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12" /* GXT: Blue Striped Shirt */, 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_3895 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3895 /* Tunable: DISCOUNT_MALE_SPECIAL_BLUE_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13" /* GXT: Pink Striped Shirt */, 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_3910 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3910 /* Tunable: DISCOUNT_MALE_SPECIAL_PINK_STRIPED_SHIRT */;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14" /* GXT: Tan Shirt */, 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3913 /* Tunable: DISCOUNT_MALE_SPECIAL_TAN_SHIRT */;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15" /* GXT: Ocean Stripe Shirt */, 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_3904 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */ != -1)
			{
				iVar1 = Global_262145.f_3904 /* Tunable: DISCOUNT_MALE_SPECIAL_OCEAN_STRIPE_SHIRT */;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0" /* GXT: White Untucked */, 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1" /* GXT: Steel Untucked */, 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2" /* GXT: Black Untucked */, 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3" /* GXT: Sky Untucked */, 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4" /* GXT: Navy Untucked */, 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5" /* GXT: Red Untucked */, 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6" /* GXT: Moss Untucked */, 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7" /* GXT: Ash Untucked */, 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8" /* GXT: Mustard Untucked */, 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9" /* GXT: Butter Untucked */, 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10" /* GXT: Forest Untucked */, 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11" /* GXT: Azure Untucked */, 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0" /* GXT: White Tucked */, 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1" /* GXT: Silver Tucked */, 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2" /* GXT: Black Tucked */, 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3" /* GXT: Blue Tucked */, 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5" /* GXT: Burgundy Tucked */, 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13" /* GXT: Green Plaid Tucked */, 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0" /* GXT: White V Neck */, 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[16] /* Tunable: DISCOUNT_MALE_UPPERS_WHITE_V_NECK */));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1" /* GXT: Ash V Neck */, 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[17] /* Tunable: DISCOUNT_MALE_UPPERS_ASH_V_NECK */));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3" /* GXT: Swallow V Neck */, 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[19] /* Tunable: DISCOUNT_MALE_UPPERS_SWALLOW_V_NECK */));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4" /* GXT: Harsh Souls V Neck */, 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[20] /* Tunable: DISCOUNT_MALE_UPPERS_HARSH_SOULS_V_NECK */));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5" /* GXT: Broker V Neck */, 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[21] /* Tunable: DISCOUNT_MALE_UPPERS_BROKER_V_NECK */));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6" /* GXT: Hip-Hop Royalty V Neck */, 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[22] /* Tunable: DISCOUNT_MALE_UPPERS_HIP_HOP_ROYALTY_V_NECK */));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7" /* GXT: Green V Neck */, 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[23] /* Tunable: DISCOUNT_MALE_UPPERS_CHARCOAL_V_NECK */));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8" /* GXT: G&B V Neck */, 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[24] /* Tunable: DISCOUNT_MALE_UPPERS_GANDB_V_NECK */));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11" /* GXT: Orange V Neck */, 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[27] /* Tunable: DISCOUNT_MALE_UPPERS_DARK_TEAL_V_NECK */));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12" /* GXT: Brown V Neck */, 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[28] /* Tunable: DISCOUNT_MALE_UPPERS_BROWN_V_NECK */));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14" /* GXT: Signs V Neck */, 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[30] /* Tunable: DISCOUNT_MALE_UPPERS_SIGNS_V_NECK */));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15" /* GXT: Blue Striped V Neck */, 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[32] /* Tunable: DISCOUNT_MALE_UPPERS_LC_PENETRATORS_AWAY_TOP */));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_260(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_428[23] /* Tunable: DISCOUNT_MALE_UPPERS_CHARCOAL_V_NECK */));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_260(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(55) * Global_262145.f_428[28] /* Tunable: DISCOUNT_MALE_UPPERS_BROWN_V_NECK */));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[iVar14]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_298067.f_10));
	if (iParam0 >= 241)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_248(iVar10, iParam0, 241, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_10));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_282(int iParam0, int iParam1)//Position - 0x2E223
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_260(89, -1))
		{
			StringCopy(&Var2, "REW_RS" /* GXT: Rockstar V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2898 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */) * Global_298067.f_10));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(45) * Global_262145.f_428[23] /* Tunable: DISCOUNT_MALE_UPPERS_CHARCOAL_V_NECK */) * Global_298067.f_10));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB" /* GXT: Los Santos Belle V Neck */, 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2897 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */) * Global_298067.f_10));
	}
	else if (iParam0 == 28)
	{
		if (func_260(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK" /* GXT: Red Skull V Neck */, 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2896 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */) * Global_298067.f_10));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(55) * Global_262145.f_428[28] /* Tunable: DISCOUNT_MALE_UPPERS_BROWN_V_NECK */) * Global_298067.f_10));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_428[iVar11]) * Global_298067.f_10));
		}
	}
	if (iParam0 >= 237)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_248(iVar10, iParam0, 237, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_79172[0 /*14*/].f_7) * Global_298067.f_10));
		}
	}
	else
	{
		func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_283(int iParam0, int iParam1)//Position - 0x2F7AE
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[0] /* Tunable: MALE_HAIR_CLOSE_SHAVE_EXPENDITURE_TUNABLE */));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[1] /* Tunable: MALE_HAIR_BUZZCUT_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[2] /* Tunable: MALE_HAIR_BUZZCUT_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[3] /* Tunable: MALE_HAIR_BUZZCUT_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[4] /* Tunable: MALE_HAIR_BUZZCUT_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[5] /* Tunable: MALE_HAIR_BUZZCUT_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[6] /* Tunable: MALE_HAIR_FAUX_HAWK_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[7] /* Tunable: MALE_HAIR_FAUX_HAWK_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[8] /* Tunable: MALE_HAIR_FAUX_HAWK_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[9] /* Tunable: MALE_HAIR_FAUX_HAWK_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[10] /* Tunable: MALE_HAIR_FAUX_HAWK_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[11] /* Tunable: MALE_HAIR_HIPSTER_SHAVED_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[12] /* Tunable: MALE_HAIR_HIPSTER_SHAVED_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[13] /* Tunable: MALE_HAIR_HIPSTER_SHAVED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[14] /* Tunable: MALE_HAIR_HIPSTER_SHAVED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[15] /* Tunable: MALE_HAIR_HIPSTER_SHAVED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[16] /* Tunable: MALE_HAIR_SIDE_PARTING_SPIKED_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[17] /* Tunable: MALE_HAIR_SIDE_PARTING_SPIKED_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[18] /* Tunable: MALE_HAIR_SIDE_PARTING_SPIKED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[19] /* Tunable: MALE_HAIR_SIDE_PARTING_SPIKED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[20] /* Tunable: MALE_HAIR_SIDE_PARTING_SPIKED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[21] /* Tunable: MALE_HAIR_SHORTER_CUT_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[22] /* Tunable: MALE_HAIR_SHORTER_CUT_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[23] /* Tunable: MALE_HAIR_SHORTER_CUT_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[24] /* Tunable: MALE_HAIR_SHORTER_CUT_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[25] /* Tunable: MALE_HAIR_SHORTER_CUT_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[26] /* Tunable: MALE_HAIR_BIKER_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[27] /* Tunable: MALE_HAIR_BIKER_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[28] /* Tunable: MALE_HAIR_BIKER_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[29] /* Tunable: MALE_HAIR_BIKER_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[30] /* Tunable: MALE_HAIR_BIKER_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[31] /* Tunable: MALE_HAIR_PONYTAIL_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[32] /* Tunable: MALE_HAIR_PONYTAIL_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[33] /* Tunable: MALE_HAIR_PONYTAIL_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[34] /* Tunable: MALE_HAIR_PONYTAIL_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[35] /* Tunable: MALE_HAIR_PONYTAIL_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[36] /* Tunable: MALE_HAIR_CORNROWS_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[37] /* Tunable: MALE_HAIR_CORNROWS_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[38] /* Tunable: MALE_HAIR_CORNROWS_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[39] /* Tunable: MALE_HAIR_CORNROWS_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[40] /* Tunable: MALE_HAIR_CORNROWS_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[41] /* Tunable: MALE_HAIR_SLICKED_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[42] /* Tunable: MALE_HAIR_SLICKED_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[43] /* Tunable: MALE_HAIR_SLICKED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[44] /* Tunable: MALE_HAIR_SLICKED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[45] /* Tunable: MALE_HAIR_SLICKED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[46] /* Tunable: MALE_HAIR_SHORT_BRUSHED_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[47] /* Tunable: MALE_HAIR_SHORT_BRUSHED_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[48] /* Tunable: MALE_HAIR_SHORT_BRUSHED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[49] /* Tunable: MALE_HAIR_SHORT_BRUSHED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[50] /* Tunable: MALE_HAIR_SHORT_BRUSHED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[51] /* Tunable: MALE_HAIR_SPIKEY_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[52] /* Tunable: MALE_HAIR_SPIKEY_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[53] /* Tunable: MALE_HAIR_SPIKEY_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[54] /* Tunable: MALE_HAIR_SPIKEY_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[55] /* Tunable: MALE_HAIR_SPIKEY_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[56] /* Tunable: MALE_HAIR_CAESAR_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[57] /* Tunable: MALE_HAIR_CAESAR_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[58] /* Tunable: MALE_HAIR_CAESAR_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[59] /* Tunable: MALE_HAIR_CAESAR_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[60] /* Tunable: MALE_HAIR_CAESAR_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[61] /* Tunable: MALE_HAIR_CHOPPED_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[62] /* Tunable: MALE_HAIR_CHOPPED_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[63] /* Tunable: MALE_HAIR_CHOPPED_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[64] /* Tunable: MALE_HAIR_CHOPPED_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[65] /* Tunable: MALE_HAIR_CHOPPED_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[66] /* Tunable: MALE_HAIR_DREADS_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[67] /* Tunable: MALE_HAIR_DREADS_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[68] /* Tunable: MALE_HAIR_DREADS_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[69] /* Tunable: MALE_HAIR_DREADS_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[70] /* Tunable: MALE_HAIR_DREADS_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[71] /* Tunable: MALE_HAIR_LONG_HAIR_DARK_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[72] /* Tunable: MALE_HAIR_LONG_HAIR_LIGHT_BROWN_EXPENDITURE_TUNABLE */));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[73] /* Tunable: MALE_HAIR_LONG_HAIR_AUBURN_EXPENDITURE_TUNABLE */));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[74] /* Tunable: MALE_HAIR_LONG_HAIR_BLONDE_EXPENDITURE_TUNABLE */));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2512[75] /* Tunable: MALE_HAIR_LONG_HAIR_BLACK_EXPENDITURE_TUNABLE */));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_248(iVar10, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_238(&(Global_79172[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_284()//Position - 0x3066A
{
	Global_79172[0 /*14*/].f_1 = -1;
	Global_79172[0 /*14*/].f_2 = -1;
	Global_79172[0 /*14*/].f_5 = -1;
	Global_79172[0 /*14*/].f_3 = -1;
	Global_79172[0 /*14*/].f_4 = -1;
	Global_79172[0 /*14*/].f_7 = 0;
	Global_79172[0 /*14*/].f_6 = 0;
	Global_79172[0 /*14*/].f_13 = -1;
	Global_79172[0 /*14*/].f_12 = 0;
	Global_79172[0 /*14*/] = 0;
	StringCopy(&(Global_79172[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_285()//Position - 0x306E3
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_286(int iParam0, int iParam1)//Position - 0x306F3
{
	struct<6> Var0;
	struct<14> Var13;
	int iVar27;
	int iVar28;
	
	if (iParam0 == 10)
	{
		if ((func_65(PLAYER::PLAYER_ID()) && func_227(&Var0, iParam1, 3, PLAYER::PLAYER_PED_ID(), -1)) || (!func_65(PLAYER::PLAYER_ID()) && func_227(&Var0, iParam1, 4, PLAYER::PLAYER_PED_ID(), -1)))
		{
			iVar27 = func_226(Var0.f_5);
			if (iVar27 != -1 && !func_223(iVar27, -1))
			{
				return 1;
			}
		}
	}
	if (iParam0 != -1)
	{
		if ((iParam1 != -1 && iParam1 != -99) && func_224(func_285(), iParam0, iParam1))
		{
			Var13 = { func_235(func_285(), iParam0, iParam1, -1) };
			if (BitTest(Var13.f_6, 6))
			{
				iVar28 = func_226(Global_2883588);
				if (iVar28 != -1 && !func_223(iVar28, -1))
				{
					return 1;
				}
			}
			return 0;
		}
	}
	return 0;
}

void func_287()//Position - 0x307CF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_108 /* Tunable: MAX_ARMOR_MULTIPLIER */));
		func_151(817, iVar0, -1, 1);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

int func_288(char* sParam0, char* sParam1, int iParam2)//Position - 0x30828
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_217(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_289(int iParam0, bool bParam1)//Position - 0x30863
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID" /* GXT: Invalid */;
			}
			break;
		
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED" /* GXT: UNARMED */;
			}
			else
			{
				return "WT_UNARMED" /* GXT: Unarmed */;
			}
			break;
		
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT" /* GXT: COMBAT PISTOL */;
			}
			else
			{
				return "WT_PIST_CBT" /* GXT: Combat Pistol */;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP" /* GXT: AP PISTOL */;
			}
			else
			{
				return "WT_PIST_AP" /* GXT: AP Pistol */;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG" /* GXT: SMG */;
			}
			else
			{
				return "WT_SMG" /* GXT: SMG */;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR" /* GXT: MICRO SMG */;
			}
			else
			{
				return "WT_SMG_MCR" /* GXT: Micro SMG */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL" /* GXT: ASSAULT RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ASL" /* GXT: Assault Rifle */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN" /* GXT: CARBINE RIFLE */;
			}
			else
			{
				return "WT_RIFLE_CBN" /* GXT: Carbine Rifle */;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV" /* GXT: ADVANCED RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ADV" /* GXT: Advanced Rifle */;
			}
			break;
		
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG" /* GXT: MG */;
			}
			else
			{
				return "WT_MG" /* GXT: MG */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT" /* GXT: COMBAT MG */;
			}
			else
			{
				return "WT_MG_CBT" /* GXT: Combat MG */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP" /* GXT: PUMP SHOTGUN */;
			}
			else
			{
				return "WT_SG_PMP" /* GXT: Pump Shotgun */;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF" /* GXT: SAWED-OFF SHOTGUN */;
			}
			else
			{
				return "WT_SG_SOF" /* GXT: Sawed-Off Shotgun */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL" /* GXT: ASSAULT SHOTGUN */;
			}
			else
			{
				return "WT_SG_ASL" /* GXT: Assault Shotgun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY" /* GXT: HEAVY SNIPER */;
			}
			else
			{
				return "WT_SNIP_HVY" /* GXT: Heavy Sniper */;
			}
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT" /* GXT: REMOTE SNIPER */;
			}
			else
			{
				return "WT_SNIP_RMT" /* GXT: Remote Sniper */;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF" /* GXT: SNIPER RIFLE */;
			}
			else
			{
				return "WT_SNIP_RIF" /* GXT: Sniper Rifle */;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL" /* GXT: GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_GL" /* GXT: Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG" /* GXT: RPG */;
			}
			else
			{
				return "WT_RPG" /* GXT: RPG */;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN" /* GXT: MINIGUN */;
			}
			else
			{
				return "WT_MINIGUN" /* GXT: Minigun */;
			}
			break;
		
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE" /* GXT: GRENADE */;
			}
			else
			{
				return "WT_GNADE" /* GXT: Grenade */;
			}
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK" /* GXT: TEAR GAS */;
			}
			else
			{
				return "WT_GNADE_SMK" /* GXT: Tear Gas */;
			}
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK" /* GXT: STICKY BOMB */;
			}
			else
			{
				return "WT_GNADE_STK" /* GXT: Sticky Bomb */;
			}
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV" /* GXT: MOLOTOV */;
			}
			else
			{
				return "WT_MOLOTOV" /* GXT: Molotov */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STUN" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL" /* GXT: JERRY CAN */;
			}
			else
			{
				return "WT_PETROL" /* GXT: Jerry Can */;
			}
			break;
		
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK" /* GXT: TANK CANNON */;
			}
			else
			{
				return "WT_V_TANK" /* GXT: Tank Cannon */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT" /* GXT: ROCKETS */;
			}
			else
			{
				return "WT_V_SPACERKT" /* GXT: Rockets */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_V_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT" /* GXT: Object */;
			}
			break;
		
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA" /* GXT: PARACHUTE */;
			}
			else
			{
				return "WT_PARA" /* GXT: Parachute */;
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_RPG" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK" /* GXT: TANK */;
			}
			else
			{
				return "WT_A_TANK" /* GXT: Tank */;
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_SPACERKT" /* GXT: Rocket */;
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_PLRLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_ENMYLSR" /* GXT: Laser */;
			}
			break;
		
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE" /* GXT: KNIFE */;
			}
			else
			{
				return "WT_KNIFE" /* GXT: Knife */;
			}
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK" /* GXT: NIGHTSTICK */;
			}
			else
			{
				return "WT_NGTSTK" /* GXT: Nightstick */;
			}
			break;
		
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER" /* GXT: HAMMER */;
			}
			else
			{
				return "WT_HAMMER" /* GXT: Hammer */;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT" /* GXT: BASEBALL BAT */;
			}
			else
			{
				return "WT_BAT" /* GXT: Baseball Bat */;
			}
			break;
		
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR" /* GXT: CROWBAR */;
			}
			else
			{
				return "WT_CROWBAR" /* GXT: Crowbar */;
			}
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB" /* GXT: GOLF CLUB */;
			}
			else
			{
				return "WT_GOLFCLUB" /* GXT: Golf Club */;
			}
			break;
		
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL" /* GXT: ASSAULT SMG */;
			}
			else
			{
				return "WT_SMG_ASL" /* GXT: Assault SMG */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP" /* GXT: BULLPUP SHOTGUN */;
			}
			else
			{
				return "WT_SG_BLP" /* GXT: Bullpup Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50" /* GXT: PISTOL .50 */;
			}
			else
			{
				return "WT_PIST_50" /* GXT: Pistol .50 */;
			}
			break;
		
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE" /* GXT: BOTTLE */;
			}
			else
			{
				return "WT_BOTTLE" /* GXT: Bottle */;
			}
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG" /* GXT: GUSENBERG SWEEPER */;
			}
			else
			{
				return "WT_GUSENBERG" /* GXT: Gusenberg Sweeper */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL" /* GXT: SNS PISTOL */;
			}
			else
			{
				return "WT_SNSPISTOL" /* GXT: SNS Pistol */;
			}
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			if (bParam1)
			{
				return "WTU_VPISTOL" /* GXT: VINTAGE PISTOL */;
			}
			else
			{
				return "WT_VPISTOL" /* GXT: Vintage Pistol */;
			}
			break;
		
		case joaat("WEAPON_DAGGER"):
			if (bParam1)
			{
				return "WTU_DAGGER" /* GXT: ANTIQUE CAVALRY DAGGER */;
			}
			else
			{
				return "WT_DAGGER" /* GXT: Antique Cavalry Dagger */;
			}
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			if (bParam1)
			{
				return "WTU_FLAREGUN" /* GXT: FLARE GUN */;
			}
			else
			{
				return "WT_FLAREGUN" /* GXT: Flare Gun */;
			}
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL" /* GXT: HEAVY PISTOL */;
			}
			else
			{
				return "WT_HEAVYPSTL" /* GXT: Heavy Pistol */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN" /* GXT: SPECIAL CARBINE */;
			}
			else
			{
				return "WT_RIFLE_SCBN" /* GXT: Special Carbine */;
			}
			break;
		
		case joaat("WEAPON_MUSKET"):
			if (bParam1)
			{
				return "WTU_MUSKET" /* GXT: MUSKET */;
			}
			else
			{
				return "WT_MUSKET" /* GXT: Musket */;
			}
			break;
		
		case joaat("WEAPON_FIREWORK"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR" /* GXT: FIREWORK LAUNCHER */;
			}
			else
			{
				return "WT_FWRKLNCHR" /* GXT: Firework Launcher */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			if (bParam1)
			{
				return "WTU_MKRIFLE" /* GXT: MARKSMAN RIFLE */;
			}
			else
			{
				return "WT_MKRIFLE" /* GXT: Marksman Rifle */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			if (bParam1)
			{
				return "WTU_HVYSHOT" /* GXT: HEAVY SHOTGUN */;
			}
			else
			{
				return "WT_HVYSHOT" /* GXT: Heavy Shotgun */;
			}
			break;
		
		case joaat("WEAPON_PROXMINE"):
			if (bParam1)
			{
				return "WTU_PRXMINE" /* GXT: PROXIMITY MINE */;
			}
			else
			{
				return "WT_PRXMINE" /* GXT: Proximity Mine */;
			}
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			if (bParam1)
			{
				return "WTU_HOMLNCH" /* GXT: HOMING LAUNCHER */;
			}
			else
			{
				return "WT_HOMLNCH" /* GXT: Homing Launcher */;
			}
			break;
		
		case joaat("WEAPON_HATCHET"):
			if (bParam1)
			{
				return "WTU_HATCHET" /* GXT: HATCHET */;
			}
			else
			{
				return "WT_HATCHET" /* GXT: Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAILGUN"):
			if (bParam1)
			{
				return "WTU_RAILGUN" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUN" /* GXT: Railgun */;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			if (bParam1)
			{
				return "WTU_COMBATPDW" /* GXT: COMBAT PDW */;
			}
			else
			{
				return "WT_COMBATPDW" /* GXT: Combat PDW */;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			if (bParam1)
			{
				return "WTU_KNUCKLE" /* GXT: KNUCKLE DUSTER */;
			}
			else
			{
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			if (bParam1)
			{
				return "WTU_MKPISTOL" /* GXT: MARKSMAN PISTOL */;
			}
			else
			{
				return "WT_MKPISTOL" /* GXT: Marksman Pistol */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE" /* GXT: BULLPUP RIFLE */;
			}
			else
			{
				return "WT_BULLRIFLE" /* GXT: Bullpup Rifle */;
			}
			break;
		
		case joaat("WEAPON_MACHETE"):
			if (bParam1)
			{
				return "WTU_MACHETE" /* GXT: MACHETE */;
			}
			else
			{
				return "WT_MACHETE" /* GXT: Machete */;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			if (bParam1)
			{
				return "WTU_MCHPIST" /* GXT: MACHINE PISTOL */;
			}
			else
			{
				return "WT_MCHPIST" /* GXT: Machine Pistol */;
			}
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT" /* GXT: FLASHLIGHT */;
			}
			else
			{
				return "WT_FLASHLIGHT" /* GXT: Flashlight */;
			}
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			if (bParam1)
			{
				return "WTU_DBSHGN" /* GXT: DOUBLE BARREL SHOTGUN */;
			}
			else
			{
				return "WT_DBSHGN" /* GXT: Double Barrel Shotgun */;
			}
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE" /* GXT: COMPACT RIFLE */;
			}
			else
			{
				return "WT_CMPRIFLE" /* GXT: Compact Rifle */;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			if (bParam1)
			{
				return "WTU_SWBLADE" /* GXT: SWITCHBLADE */;
			}
			else
			{
				return "WT_SWBLADE" /* GXT: Switchblade */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			if (bParam1)
			{
				return "WTU_REVOLVER" /* GXT: HEAVY REVOLVER */;
			}
			else
			{
				return "WT_REVOLVER" /* GXT: Heavy Revolver */;
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN" /* GXT: SWEEPER SHOTGUN */;
			}
			else
			{
				return "WT_AUTOSHGN" /* GXT: Sweeper Shotgun */;
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE" /* GXT: BATTLE AXE */;
			}
			else
			{
				return "WT_BATTLEAXE" /* GXT: Battle Axe */;
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL" /* GXT: COMPACT GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_CMPGL" /* GXT: Compact Grenade Launcher */;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG" /* GXT: MINI SMG */;
			}
			else
			{
				return "WT_MINISMG" /* GXT: Mini SMG */;
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB" /* GXT: PIPE BOMB */;
			}
			else
			{
				return "WT_PIPEBOMB" /* GXT: Pipe Bomb */;
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE" /* GXT: POOL CUE */;
			}
			else
			{
				return "WT_POOLCUE" /* GXT: Pool Cue */;
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH" /* GXT: PIPE WRENCH */;
			}
			else
			{
				return "WT_WRENCH" /* GXT: Pipe Wrench */;
			}
			break;
		
		case joaat("WEAPON_COUGAR"):
			return "WT_RAGE" /* GXT: Rage Pickup */;
			break;
		
		case joaat("VEHICLE_WEAPON_TORPEDO"):
			return "WT_VEH_WEP" /* GXT: Vehicle Weapon */;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2" /* GXT: PISTOL MK II */;
			}
			else
			{
				return "WT_PIST2" /* GXT: Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2" /* GXT: SMG MK II */;
			}
			else
			{
				return "WT_SMG2" /* GXT: SMG Mk II */;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2" /* GXT: HEAVY SNIPER MK II */;
			}
			else
			{
				return "WT_SNIP_HVY2" /* GXT: Heavy Sniper Mk II */;
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2" /* GXT: COMBAT MG MK II */;
			}
			else
			{
				return "WT_MG_CBT2" /* GXT: Combat MG Mk II */;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2" /* GXT: ASSAULT RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_ASL2" /* GXT: Assault Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2" /* GXT: CARBINE RIFLE MK II */;
			}
			else
			{
				return "WT_RIFLE_CBN2" /* GXT: Carbine Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2" /* GXT: PUMP SHOTGUN MK II */;
			}
			else
			{
				return "WT_SG_PMP2" /* GXT: Pump Shotgun Mk II */;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2" /* GXT: SPECIAL CARBINE MK II */;
			}
			else
			{
				return "WT_SPCARBINE2" /* GXT: Special Carbine Mk II */;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2" /* GXT: SNS PISTOL MK II */;
			}
			else
			{
				return "WT_SNSPISTOL2" /* GXT: SNS Pistol Mk II */;
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2" /* GXT: MARKSMAN RIFLE MK II */;
			}
			else
			{
				return "WT_MKRIFLE2" /* GXT: Marksman Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2" /* GXT: HEAVY REVOLVER MK II */;
			}
			else
			{
				return "WT_REVOLVER2" /* GXT: Heavy Revolver Mk II */;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2" /* GXT: BULLPUP RIFLE MK II */;
			}
			else
			{
				return "WT_BULLRIFLE2" /* GXT: Bullpup Rifle Mk II */;
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA" /* GXT: DOUBLE-ACTION REVOLVER */;
			}
			else
			{
				return "WT_REV_DA" /* GXT: Double-Action Revolver */;
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET" /* GXT: STONE HATCHET */;
			}
			else
			{
				return "WT_SHATCHET" /* GXT: Stone Hatchet */;
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL" /* GXT: UP-N-ATOMIZER */;
			}
			else
			{
				return "WT_RAYPISTOL" /* GXT: Up-n-Atomizer */;
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE" /* GXT: UNHOLY HELLBRINGER */;
			}
			else
			{
				return "WT_RAYCARBINE" /* GXT: Unholy Hellbringer */;
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN" /* GXT: WIDOWMAKER */;
			}
			else
			{
				return "WT_RAYMINIGUN" /* GXT: Widowmaker */;
			}
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV" /* GXT: NAVY REVOLVER */;
			}
			else
			{
				return "WT_REV_NV" /* GXT: Navy Revolver */;
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST" /* GXT: CERAMIC PISTOL */;
			}
			else
			{
				return "WT_CERPST" /* GXT: Ceramic Pistol */;
			}
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			if (bParam1)
			{
				return "WTU_GDGTPST" /* GXT: PERICO PISTOL */;
			}
			else
			{
				return "WT_GDGTPST" /* GXT: Perico Pistol */;
			}
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL" /* GXT: MILITARY RIFLE */;
			}
			else
			{
				return "WT_MLTRYRFL" /* GXT: Military Rifle */;
			}
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			if (bParam1)
			{
				return "WTU_CMBSHGN" /* GXT: COMBAT SHOTGUN */;
			}
			else
			{
				return "WT_CMBSHGN" /* GXT: Combat Shotgun */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TURRET_DINGHY5_50CAL"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			if (bParam1)
			{
				return "WTU_FERTCAN" /* GXT: FERTILIZER CAN */;
			}
			else
			{
				return "WT_FERTCAN" /* GXT: Fertilizer Can */;
			}
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE" /* GXT: HEAVY RIFLE */;
			}
			else
			{
				return "WT_HEAVYRIFLE" /* GXT: Heavy Rifle */;
			}
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			if (bParam1)
			{
				return "WTU_EMPL" /* GXT: COMPACT EMP LAUNCHER */;
			}
			else
			{
				return "WT_EMPL" /* GXT: Compact EMP Launcher */;
			}
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			if (bParam1)
			{
				return "WTU_STNGUNMP" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STNGUNMP" /* GXT: Stun Gun */;
			}
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			if (bParam1)
			{
				return "WTU_TACRIFLE" /* GXT: SERVICE CARBINE */;
			}
			else
			{
				return "WT_TACRIFLE" /* GXT: Service Carbine */;
			}
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE" /* GXT: PRECISION RIFLE */;
			}
			else
			{
				return "WT_PRCSRIFLE" /* GXT: Precision Rifle */;
			}
			break;
		
		case joaat("WEAPON_BZGAS"):
			if (bParam1)
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			else
			{
				return "WTU_BZGAS" /* GXT: BZ GAS */;
			}
			break;
		
		case joaat("WEAPON_STINGER"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			else
			{
				return "WT_PISTOLXM3" /* GXT: WM 29 Pistol */;
			}
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			if (bParam1)
			{
				return "WTU_CANDYCANE" /* GXT: CANDY CANE */;
			}
			else
			{
				return "WT_CANDYCANE" /* GXT: Candy Cane */;
			}
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3" /* GXT: RAILGUN */;
			}
			else
			{
				return "WT_RAILGUNXM3" /* GXT: Railgun */;
			}
			break;
		
		case joaat("WEAPON_TECPISTOL"):
			if (bParam1)
			{
				return "WTU_TECPISTOL" /* GXT: TACTICAL SMG */;
			}
			else
			{
				return "WT_TECPISTOL" /* GXT: Tactical SMG */;
			}
			break;
		
		case joaat("VEHICLE_WEAPON_TRAILER_DUALAA"):
			if (bParam1)
			{
				return "WT_UV_DUALAA" /* GXT: TRAILER DUAL AA */;
			}
			else
			{
				return "WT_V_DUALAA" /* GXT: Trailer Dual AA */;
			}
			break;
		
		case joaat("WEAPON_SNOWBALL"):
			if (bParam1)
			{
				return "FMMC_U_SNOWBALL" /* GXT: SNOWBALL */;
			}
			else
			{
				return "FMMC_SNOWBALL" /* GXT: Snowball */;
			}
			break;
		
		case joaat("WEAPON_BATTLERIFLE"):
			if (bParam1)
			{
				return "WTU_BATTLERIFLE" /* GXT: BATTLE RIFLE */;
			}
			else
			{
				return "WT_BATTLERIFLE" /* GXT: Battle Rifle */;
			}
			break;
		
		case joaat("WEAPON_SNOWLAUNCHER"):
			if (bParam1)
			{
				return "WTU_SNOWLNCHR" /* GXT: SNOWBALL LAUNCHER */;
			}
			else
			{
				return "WT_SNOWLNCHR" /* GXT: Snowball Launcher */;
			}
			break;
		
		case joaat("WEAPON_STUNROD"):
			if (bParam1)
			{
				return "WTU_STUNROD" /* GXT: THE SHOCKER */;
			}
			else
			{
				return "WT_STUNROD" /* GXT: The Shocker */;
			}
			break;
		
		default:
			if (func_291(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_290(&(Var0.f_31));
				}
				else
				{
					return func_290(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

var func_290(var uParam0)//Position - 0x317C7
{
	return uParam0;
}

int func_291(int iParam0, var* uParam1)//Position - 0x317D1
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_292(var uParam0, var uParam1)//Position - 0x3180C
{
	bool bVar0;
	
	bVar0 = false;
	*uParam1 = uParam0;
	while (!func_293(*uParam1, -1, 0))
	{
		switch (*uParam1)
		{
			case joaat("WEAPON_MINIGUN"):
				*uParam1 = joaat("WEAPON_RPG");
				break;
			
			case joaat("WEAPON_RPG"):
				*uParam1 = joaat("WEAPON_GRENADELAUNCHER");
				break;
			
			case joaat("WEAPON_GRENADELAUNCHER"):
				*uParam1 = joaat("WEAPON_MG");
				break;
			
			case joaat("WEAPON_MOLOTOV"):
				*uParam1 = joaat("WEAPON_GRENADE");
				break;
			
			case joaat("WEAPON_GRENADE"):
				*uParam1 = joaat("WEAPON_SMOKEGRENADE");
				break;
			
			case joaat("WEAPON_SMOKEGRENADE"):
				*uParam1 = joaat("WEAPON_PETROLCAN");
				break;
			
			case joaat("WEAPON_PETROLCAN"):
				*uParam1 = joaat("WEAPON_STICKYBOMB");
				break;
			
			case joaat("WEAPON_STICKYBOMB"):
				*uParam1 = joaat("WEAPON_PISTOL");
				break;
			
			case joaat("WEAPON_COMBATMG"):
				*uParam1 = joaat("WEAPON_MG");
				break;
			
			case joaat("WEAPON_MG"):
				*uParam1 = joaat("WEAPON_ASSAULTRIFLE");
				break;
			
			case joaat("WEAPON_HEAVYSNIPER"):
				*uParam1 = joaat("WEAPON_SNIPERRIFLE");
				break;
			
			case joaat("WEAPON_SNIPERRIFLE"):
				*uParam1 = joaat("WEAPON_ASSAULTRIFLE");
				break;
			
			case joaat("WEAPON_ADVANCEDRIFLE"):
				*uParam1 = joaat("WEAPON_CARBINERIFLE");
				break;
			
			case joaat("WEAPON_CARBINERIFLE"):
				*uParam1 = joaat("WEAPON_ASSAULTRIFLE");
				break;
			
			case joaat("WEAPON_ASSAULTRIFLE"):
				*uParam1 = joaat("WEAPON_SMG");
				break;
			
			case joaat("WEAPON_SMG"):
				*uParam1 = joaat("WEAPON_MICROSMG");
				break;
			
			case joaat("WEAPON_MICROSMG"):
				*uParam1 = joaat("WEAPON_PISTOL");
				break;
			
			case joaat("WEAPON_ASSAULTSHOTGUN"):
				*uParam1 = joaat("WEAPON_PUMPSHOTGUN");
				break;
			
			case joaat("WEAPON_PUMPSHOTGUN"):
				*uParam1 = joaat("WEAPON_SAWNOFFSHOTGUN");
				break;
			
			case joaat("WEAPON_SAWNOFFSHOTGUN"):
				*uParam1 = joaat("WEAPON_PISTOL");
				break;
			
			case joaat("WEAPON_APPISTOL"):
				*uParam1 = joaat("WEAPON_COMBATPISTOL");
				break;
			
			case joaat("WEAPON_COMBATPISTOL"):
				*uParam1 = joaat("WEAPON_PISTOL");
				break;
			
			case joaat("WEAPON_PISTOL"):
				*uParam1 = joaat("WEAPON_KNIFE");
				break;
			
			default:
				*uParam1 = joaat("WEAPON_PISTOL");
				break;
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2)//Position - 0x319D3
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_298())
	{
		return 0;
	}
	uVar0 = func_296(iParam0, iParam1);
	iVar1 = func_294(iParam0);
	return BitTest(uVar0, func_261(iVar1));
}

int func_294(int iParam0)//Position - 0x31A07
{
	return func_295(iParam0);
}

int func_295(int iParam0)//Position - 0x31A15
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		
		case joaat("WEAPON_MG"):
			return 12;
			break;
		
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
			break;
		
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
			break;
		
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
			break;
		
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
			break;
		
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
			break;
		
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
			break;
		
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
			break;
		
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
			break;
		
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
			break;
		
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
			break;
		
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
		
		case joaat("WEAPON_PISTOLXM3"):
			return 95;
			break;
		
		case joaat("WEAPON_CANDYCANE"):
			return 96;
			break;
		
		case joaat("WEAPON_RAILGUNXM3"):
			return 97;
			break;
		
		case joaat("WEAPON_TECPISTOL"):
			return 98;
			break;
		
		case joaat("WEAPON_BATTLERIFLE"):
			return 99;
			break;
		
		case joaat("WEAPON_SNOWLAUNCHER"):
			return 100;
			break;
		
		case joaat("WEAPON_STUNROD"):
			return 101;
			break;
	}
	return 0;
}

int func_296(int iParam0, int iParam1)//Position - 0x32057
{
	int iVar0;
	
	iVar0 = func_158(func_297(iParam0), iParam1);
	return iVar0;
}

int func_297(int iParam0)//Position - 0x3206F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_294(iParam0);
	iVar1 = func_265(iVar0);
	if (((func_121() == 0 || func_264() == 0) || (func_121() == 999 && func_264() == 999)) || (func_121() == 1000 && func_264() == 1000))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 2429;
				break;
			
			case 3:
				return 10280;
				break;
			
			case 4:
				return 12217;
				break;
			
			case 5:
				return 12305;
				break;
		}
	}
	return 14835;
}

bool func_298()//Position - 0x32139
{
	return Global_1575062;
}

void func_299(int iParam0, int iParam1)//Position - 0x32145
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23639 /* Tunable: SETTINGFORCASHSHARE */ != -1)
		{
			if (func_300())
			{
				Global_2738934.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7119 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2738934.f_284 = iParam1;
				Global_2738934.f_285 = 0;
			}
		}
	}
}

int func_300()//Position - 0x3219A
{
	if (MISC::IS_PC_VERSION() && Global_1979285 == 0)
	{
		return 0;
	}
	return 0;
}

int func_301(char* sParam0, int iParam1, int iParam2)//Position - 0x321B9
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_217(4, sParam0, 1, "", iParam1, iParam2, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_302(struct<3> Param0, int iParam3)//Position - 0x321F5
{
	func_134(Param0, iParam3, 6, 0, 0);
}

void func_303(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3220A
{
	int iVar0;
	
	if (!func_315())
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_VEH_ROB_SETUP"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_304(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_304(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
			if (iParam1 > 0 || Global_262145.f_27935 /* Tunable: ALLOW_ZERO_SPEND_SERVICE_TELEM */)
			{
				func_304(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
		case 2131157548:
		case joaat("SERVICE_EARN_BAIL_OFFICE_PRISONER"):
		case joaat("SERVICE_EARN_BAIL_OFFICE_HIGH_VALUE_PRISONER"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_STANDARD_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_BOSS"):
		case joaat("SERVICE_EARN_BOUNTY_HIGH_VALUE_TARGET_GOON"):
		case joaat("SERVICE_EARN_BOUNTY24_DISPATCH_WORK"):
		case joaat("SERVICE_EARN_BOUNTY24_PIZZA_DELIVERY"):
		case joaat("SERVICE_EARN_BOUNTY24_UFO_ABDUCTION"):
		case joaat("SERVICE_EARN_BOUNTY24_AWARD"):
			func_304(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x32B53
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_315())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_26()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_311(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_310(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_305(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_305(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32D00
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_306(iParam0);
	}
}

void func_306(int iParam0)//Position - 0x32D38
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_315())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_309(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_307(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_307(var uParam0)//Position - 0x32D8C
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
	func_308(&(uParam0->f_14));
	func_308(&(uParam0->f_14.f_13));
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

void func_308(var uParam0)//Position - 0x32E98
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

int func_309(int iParam0)//Position - 0x32EE0
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_310(int iParam0, int iParam1)//Position - 0x32F0B
{
	Global_2698855 = iParam1;
	Global_2698854 = iParam0;
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x32F1F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_315())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_312(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_312(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x3305C
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_314(Var0.f_1);
	if ((Global_262145.f_23711 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_23712 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_23713 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_313();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_313()//Position - 0x330F0
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_314(int iParam0)//Position - 0x33100
{
	var uVar0;
	
	if (func_27(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_315()//Position - 0x3311B
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_316(int iParam0, int iParam1)//Position - 0x33132
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_375())
		{
			if (func_374(0))
			{
				if (!func_370(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_369()))
					{
						if (func_368() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_368());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_366(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_321("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_369(), iVar0, 0, 0, 1);
						}
						func_320(20);
						func_317(func_369(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_317(int iParam0, int iParam1, int iParam2)//Position - 0x331D2
{
	struct<9> Var0;
	
	if (func_443(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_3 = iParam1;
		Var0.f_5 = iParam2;
		Var0.f_6 = func_319(iParam0);
		func_318(&(Var0.f_7), &(Var0.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 9, func_314(iParam0), Var0.f_0);
	}
}

void func_318(var uParam0, var uParam1)//Position - 0x3322A
{
	*uParam0 = Global_1916617.f_9;
	*uParam1 = Global_1916617.f_10;
}

var func_319(int iParam0)//Position - 0x33244
{
	return Global_1887305[iParam0 /*610*/].f_512;
}

void func_320(int iParam0)//Position - 0x33258
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2738934.f_5249.f_7[iVar0]), iVar1);
}

int func_321(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x33281
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_324(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_322(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_217(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_322(char* sParam0)//Position - 0x33319
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_323(&cVar0);
}

var func_323(char[4] cParam0)//Position - 0x3333D
{
	return cParam0;
}

int func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x33347
{
	int iVar0;
	int iVar1;
	
	if (!func_27(iParam0))
	{
		return 1;
	}
	if (func_364(iParam0) && !bParam4)
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
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_364(PLAYER::PLAYER_ID()) || (func_363() && func_362())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		iVar1 = func_361();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_443(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_359(iParam1, iParam0, 0);
							}
							else
							{
								return func_336(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_336(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_359(iParam1, iParam0, 0);
				}
				else
				{
					return func_325(0, -1, 0);
				}
			}
			else
			{
				return func_325(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_359(iParam1, iParam0, 0);
		}
		else
		{
			return func_336(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_336(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_325(bool bParam0, int iParam1, bool bParam2)//Position - 0x33532
{
	return func_326(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_326(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x33548
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_335() || (func_334() && func_332())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_331(iParam2, iVar0);
		}
		else
		{
			return func_331(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_163(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_330(1);
				}
				else
				{
					return func_330(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_327(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_327(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_330(1);
	}
	return func_330(0);
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3364A
{
	int iVar0;
	
	iVar0 = func_329(iParam0, iParam1, iParam3);
	if (func_328(Global_4718592.f_127178, 1))
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

int func_328(int iParam0, bool bParam1)//Position - 0x33762
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
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
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2)//Position - 0x337B3
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
			if (!func_163(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_330(bool bParam0)//Position - 0x337FB
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_331(int iParam0, int iParam1)//Position - 0x33812
{
	if (iParam0 == -1)
	{
		iParam0 = func_329(iParam1, iParam0, 4);
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

int func_332()//Position - 0x33860
{
	if (func_333())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_333()//Position - 0x3387F
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_334()//Position - 0x33894
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_335()//Position - 0x338DB
{
	if (func_333() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_336(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x338F8
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
	if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_344())
			{
				iVar3 = func_341(iParam0);
				if (!iVar3 == -1)
				{
					return func_339(iVar3);
				}
			}
			if ((func_338(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_163(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_330(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_337(1);
			}
			else
			{
				return func_326(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_330(1);
			}
			else
			{
				return func_326(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_341(iParam0);
	if (!iVar4 == -1)
	{
		return func_339(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_337(bool bParam0)//Position - 0x33A90
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_338(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33AA7
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

int func_339(int iParam0)//Position - 0x33B1F
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_340(iParam0);
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

var func_340(int iParam0)//Position - 0x33BE2
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_341(int iParam0)//Position - 0x33BF9
{
	if (func_27(iParam0))
	{
		if (func_342(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_35(iParam0)];
		}
	}
	return -1;
}

int func_342(int iParam0, bool bParam1)//Position - 0x33C29
{
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_343(iParam0))
		{
			return 0;
		}
	}
	return func_27(Global_1887305[iParam0 /*610*/].f_10);
}

int func_343(int iParam0)//Position - 0x33C61
{
	if (func_27(iParam0))
	{
		if (func_27(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_344()//Position - 0x33C96
{
	if ((((((((func_358() || func_357()) || func_31()) || func_356()) || func_355()) || func_353()) || func_351()) || func_348()) || func_345())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_345()//Position - 0x33D12
{
	return func_346(Global_4718592.f_127178);
}

int func_346(int iParam0)//Position - 0x33D28
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_347(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_347(int iParam0)//Position - 0x33D5C
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_348()//Position - 0x33D7B
{
	return func_349(Global_4718592.f_127178);
}

int func_349(int iParam0)//Position - 0x33D91
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_350(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x33DC5
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_351()//Position - 0x33DE4
{
	return func_352(Global_4718592.f_127178);
}

int func_352(int iParam0)//Position - 0x33DFA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353()//Position - 0x33E33
{
	return func_354(Global_4718592.f_127178);
}

int func_354(int iParam0)//Position - 0x33E49
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_355()//Position - 0x33E83
{
	return Global_2684504.f_24;
}

var func_356()//Position - 0x33E91
{
	return Global_2684504.f_21;
}

var func_357()//Position - 0x33E9F
{
	return Global_2684504.f_18;
}

var func_358()//Position - 0x33EAD
{
	return Global_2684504.f_17;
}

int func_359(int iParam0, int iParam1, bool bParam2)//Position - 0x33EBB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_344())
	{
		iVar2 = func_341(iParam1);
		if (!iVar2 == -1)
		{
			return func_339(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_36())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
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
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_326(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_360(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_163(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_337(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_360(int iParam0)//Position - 0x3403D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
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

var func_361()//Position - 0x34112
{
	return Global_2621446.f_2;
}

var func_362()//Position - 0x34120
{
	return BitTest(Global_2621446, 4);
}

var func_363()//Position - 0x3412E
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

int func_364(int iParam0)//Position - 0x34148
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_365())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_365()//Position - 0x34187
{
	return BitTest(Global_2621446, 3);
}

void func_366(int iParam0, bool bParam1)//Position - 0x34195
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_367(1);
	}
	else
	{
		iVar1 = func_367(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_367(bool bParam0)//Position - 0x341C7
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12843 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_368()//Position - 0x341ED
{
	return Global_262145.f_12842 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_369()//Position - 0x341FC
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

bool func_370(bool bParam0)//Position - 0x34211
{
	return func_371(PLAYER::PLAYER_ID(), bParam0);
}

int func_371(int iParam0, bool bParam1)//Position - 0x34223
{
	return func_372(iParam0, bParam1, 1);
}

int func_372(int iParam0, bool bParam1, int iParam2)//Position - 0x34234
{
	int iVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_373(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_27(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_373(int iParam0, int iParam1)//Position - 0x34290
{
	if (func_27(iParam0))
	{
		if (func_27(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_374(bool bParam0)//Position - 0x342DF
{
	return func_342(PLAYER::PLAYER_ID(), bParam0);
}

bool func_375()//Position - 0x342F1
{
	return func_343(PLAYER::PLAYER_ID());
}

int func_376(int iParam0, int iParam1)//Position - 0x34301
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

void func_377(int iParam0)//Position - 0x34342
{
	Global_2672855.f_1727 = iParam0;
}

void func_378(int iParam0, int iParam1, int iParam2)//Position - 0x34353
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 0)
	{
		iVar0 = (WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, true) * iParam1);
		WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar1);
		iVar2 = (iVar1 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0));
		if (iVar0 > iVar2)
		{
			iVar0 = iVar2;
		}
		WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar0);
		if (iParam2 == 1)
		{
			func_379(PLAYER::PLAYER_PED_ID(), iVar0);
		}
	}
}

void func_379(int iParam0, int iParam1)//Position - 0x343B4
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (iParam1 > 0)
	{
		if (func_30(ENTITY::GET_ENTITY_COORDS(iParam0, false)))
		{
		}
		func_130(1);
		Var0 = { func_132(PLAYER::PLAYER_PED_ID(), 1) };
		iVar4 = -1;
		iVar3 = 0;
		while (iVar3 < 20)
		{
			if (Global_2672855.f_1124[iVar3 /*30*/].f_6 == 0 || Global_2672855.f_1124[iVar3 /*30*/].f_6 == 7)
			{
				iVar4 = iVar3;
				iVar3 = 20;
			}
			iVar3++;
		}
		if (iVar4 != -1)
		{
			Global_2672855.f_1124[iVar4 /*30*/] = { Var0 };
			Global_2672855.f_1124[iVar4 /*30*/].f_6 = 1;
			Global_2672855.f_1124[iVar4 /*30*/].f_4 = func_137(Global_2672855.f_1124[iVar4 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672855.f_1124[iVar4 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1124[iVar4 /*30*/].f_3 = iParam1;
			Global_2672855.f_1124[iVar4 /*30*/].f_8 = 1;
			Global_2672855.f_1124[iVar4 /*30*/].f_9 = func_136();
			Global_2672855.f_1124[iVar4 /*30*/].f_10 = func_135();
			Global_1938775 = 1;
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		}
	}
}

var func_380(int iParam0)//Position - 0x344D0
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

void func_381()//Position - 0x344E4
{
}

void func_382()//Position - 0x344EC
{
	if (func_443(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!BitTest(Global_2738934.f_206.f_1, 0))
		{
			if ((((((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_387()) && !func_386()) && !func_385()) && func_392(31, 0, 0)) && !func_416(PLAYER::PLAYER_ID())) && !func_384())
			{
				if (func_391(60000))
				{
					if (!func_189())
					{
						func_383("ACD_HELP1" /* GXT: ~s~A plane is on its way to drop a Crate ~HUD_COLOUR_GREEN~~BLIP_CRATEDROP~ ~s~which contains useful equipment. Be the first to collect it. */, -1);
					}
					MISC::SET_BIT(&(Global_2738934.f_206.f_1), 0);
				}
				else
				{
					MISC::SET_BIT(&(Global_2738934.f_206.f_1), 0);
				}
			}
		}
	}
}

void func_383(char* sParam0, int iParam1)//Position - 0x34593
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_384()//Position - 0x345AA
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

bool func_385()//Position - 0x345C1
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 0);
}

bool func_386()//Position - 0x345DA
{
	return Global_101585.f_394 > 0;
}

bool func_387()//Position - 0x345EB
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

void func_388()//Position - 0x34600
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = (1 - iVar0);
		if (iVar1 > 0)
		{
			Global_2738934.f_206.f_25[iVar1 /*3*/] = { Global_2738934.f_206.f_25[(iVar1 - 1) /*3*/] };
		}
		else
		{
			Global_2738934.f_206.f_25[iVar1 /*3*/] = { func_75(Local_90.f_2.f_68[0 /*104*/]) };
		}
		iVar0++;
	}
}

int func_389(char* sParam0, bool bParam1)//Position - 0x34662
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_217(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_390()//Position - 0x3469A
{
	return Global_1575083;
}

bool func_391(int iParam0)//Position - 0x346A6
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644877, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

int func_392(int iParam0, bool bParam1, bool bParam2)//Position - 0x346C1
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8337 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_396(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4408 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (func_395() || func_394())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_393())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836944[iVar1], iVar0);
}

int func_393()//Position - 0x3482C
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_1846, 23))
	{
		return 1;
	}
	if (func_395())
	{
		return 1;
	}
	if (func_394())
	{
		return 1;
	}
	uVar0 = func_158(1304, -1);
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2738934.f_1846), 23);
		return 1;
	}
	return 0;
}

bool func_394()//Position - 0x34889
{
	return Global_1575071;
}

bool func_395()//Position - 0x34895
{
	return Global_1575073;
}

int func_396(int iParam0, int iParam1)//Position - 0x348A1
{
	if (!func_400())
	{
		return 0;
	}
	if (func_399())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_397(&(Global_1845281[iParam0 /*883*/].f_819), func_398(iParam1));
}

var func_397(var uParam0, var uParam1)//Position - 0x348E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_398(int iParam0)//Position - 0x34904
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		case 201:
			return 44;
		
		default:
	}
	return 1;
}

bool func_399()//Position - 0x34AF0
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3);
}

int func_400()//Position - 0x34B07
{
	if (!func_401())
	{
		return 0;
	}
	return 1;
}

int func_401()//Position - 0x34B1C
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_395())
	{
		return 1;
	}
	if (func_394())
	{
		return 1;
	}
	return func_402(120, -1);
}

int func_402(int iParam0, int iParam1)//Position - 0x34B4C
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_403(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_403(int iParam0, var uParam1)//Position - 0x34B70
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_153(uParam1));
}

void func_404()//Position - 0x34B85
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0);
	if (Local_90.f_177 != iVar0)
	{
		if (Local_90.f_177 < iVar0 || func_412(Local_90.f_177, 0, 1))
		{
			if (Local_90.f_177 >= NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false))
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_90.f_177);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_90.f_178 != iVar0)
	{
		if (Local_90.f_178 < iVar0 || func_411(Local_90.f_178, 0, 1))
		{
			if (Local_90.f_178 >= NETWORK::GET_NUM_CREATED_MISSION_PEDS(false))
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_90.f_178);
			}
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_90.f_179 != iVar0)
	{
		if (Local_90.f_179 < iVar0 || func_405(Local_90.f_179, 0, 1))
		{
			if (Local_90.f_179 >= NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false))
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_90.f_179);
			}
		}
	}
}

int func_405(int iParam0, bool bParam1, bool bParam2)//Position - 0x34C4A
{
	return func_406(2, iParam0, 1, bParam1, bParam2);
}

int func_406(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x34C5E
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_410(iParam0) - func_409(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_409(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_410(iParam0) - func_408(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_409(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_410(iParam0) - func_409(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_407(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x34D24
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_408(int iParam0)//Position - 0x34D5E
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_409(int iParam0, bool bParam1)//Position - 0x34DA4
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_410(int iParam0)//Position - 0x34E41
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

int func_411(int iParam0, bool bParam1, bool bParam2)//Position - 0x34E81
{
	return func_406(0, iParam0, 1, bParam1, bParam2);
}

int func_412(int iParam0, bool bParam1, bool bParam2)//Position - 0x34E95
{
	return func_406(1, iParam0, 1, bParam1, bParam2);
}

int func_413()//Position - 0x34EA9
{
	return Local_90.f_0;
}

int func_414(int iParam0)//Position - 0x34EB3
{
	return Local_280[iParam0 /*4*/];
}

void func_415()//Position - 0x34EC2
{
	Global_2699047 = Local_90.f_0;
	Global_2699047.f_1 = Local_90.f_180;
	Global_2699047.f_2 = Local_90.f_2.f_1[0 /*66*/].f_64;
	Global_2699047.f_3 = BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 0);
	Global_2699047.f_4 = BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 1);
	Global_2699047.f_5 = BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 13);
	Global_2699047.f_6 = BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 3);
	Global_2699047.f_7 = BitTest(Local_90.f_2.f_1[0 /*66*/].f_65, 5);
	Global_2699047.f_8 = BitTest(Local_90.f_1, 11);
	Global_2699047.f_9 = Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3;
}

bool func_416(int iParam0)//Position - 0x34F69
{
	return func_417(iParam0);
}

var func_417(int iParam0)//Position - 0x34F77
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_418(int iParam0)//Position - 0x34F8E
{
	switch (func_419(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 26:
		case 27:
		case 29:
		case 28:
		case 30:
		case 31:
		case 32:
		case 35:
		case 25:
		case 33:
		case 34:
			return 1;
		
		default:
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x34FFA
{
	return Global_1845281[iParam0 /*883*/].f_193;
}

bool func_420(int iParam0)//Position - 0x3500D
{
	return !func_421(iParam0);
}

int func_421(int iParam0)//Position - 0x3501C
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
			if (Global_262145.f_7192 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7193 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7194 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7195 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 0) || BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_422(4))
			{
				return 0;
			}
			if (func_191(PLAYER::PLAYER_ID(), 7))
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

int func_422(bool bParam0)//Position - 0x35350
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_443(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657971[iVar0 /*465*/].f_219, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_423()//Position - 0x35393
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_429())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_428())
	{
		return 1;
	}
	if (func_427(159))
	{
		if (!func_426())
		{
			return 1;
		}
	}
	if (func_427(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_424() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_424()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_424()//Position - 0x35417
{
	switch (func_121())
	{
		case 0:
			return func_425();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_425()//Position - 0x3544A
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_426()//Position - 0x3546E
{
	return Global_2684504.f_700;
}

int func_427(int iParam0)//Position - 0x3547D
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_428()//Position - 0x35494
{
	return Global_2696172;
}

bool func_429()//Position - 0x354A0
{
	return Global_2684504.f_695;
}

void func_430()//Position - 0x354AF
{
	SYSTEM::WAIT(0);
}

void func_431()//Position - 0x354BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_411[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_411[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_413[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_413[iVar0]));
		}
		func_4(iVar0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_413() == 4)
				{
					func_8();
					func_6(iVar0);
				}
			}
		}
		Global_2738934.f_238[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	func_79(1);
	func_436(4, 0);
	if (bLocal_471)
	{
		func_434(0f, 0f, 0f, func_435(31), 1);
	}
	if (func_433("ACD_HELP1" /* GXT: ~s~A plane is on its way to drop a Crate ~HUD_COLOUR_GREEN~~BLIP_CRATEDROP~ ~s~which contains useful equipment. Be the first to collect it. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(uLocal_410, 0))
		{
			iLocal_458 = 0;
			iLocal_459 = 0;
			iLocal_461[0] = 0;
			iLocal_470 = 0;
		}
		if ((((((iLocal_456 != 0 || iLocal_457 != 0) || iLocal_458 != 0) || iLocal_459 != 0) || iLocal_460 != 0) || iLocal_461[0] != 0) || iLocal_470 == 1)
		{
			STATS::PLAYSTATS_CRATE_DROP_MISSION_DONE(31, iLocal_456, iLocal_457, iLocal_458, iLocal_459, iLocal_460, &iLocal_461, iLocal_470);
		}
	}
	Global_2699047.f_10 = 0;
	func_432();
}

void func_432()//Position - 0x35602
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

bool func_433(char* sParam0)//Position - 0x3560E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_434(struct<3> Param0, char* sParam3, int iParam4)//Position - 0x35621
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_198(Global_2738934.f_4085[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2738934.f_4085[iVar0 /*26*/] = 0;
					Global_2738934.f_4085[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2738934.f_4085[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_435(int iParam0)//Position - 0x356C1
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_436(bool bParam0, bool bParam1)//Position - 0x356D3
{
	if (bParam1)
	{
		if (!BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
		{
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
		}
	}
	else if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_219), bParam0);
	}
}

void func_437(struct<21> Param0)//Position - 0x35730
{
	func_442(32, Param0);
	func_441(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_90, 190, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_280, 129, 0);
	if (!func_440())
	{
		func_431();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_438();
			func_62();
		}
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((4 * Local_90.f_2));
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES((1 * Local_90.f_2));
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((3 * Local_90.f_2));
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		func_436(4, 1);
		Local_280[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_431();
	}
}

void func_438()//Position - 0x357BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */ >= 0 && Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */ < 32)
	{
		iVar1 = 1;
		if (Global_262145.f_7127 /* Tunable: CRATEDROPLOCATION5 */ >= 0 && Global_262145.f_7127 /* Tunable: CRATEDROPLOCATION5 */ < 32)
		{
			iVar1 = 5;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_7126 /* Tunable: CRATEDROPLOCATION4 */ >= 0 && Global_262145.f_7126 /* Tunable: CRATEDROPLOCATION4 */ < 32)
		{
			iVar1 = 4;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_7125 /* Tunable: CRATEDROPLOCATION3 */ >= 0 && Global_262145.f_7125 /* Tunable: CRATEDROPLOCATION3 */ < 32)
		{
			iVar1 = 3;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else if (Global_262145.f_7124 /* Tunable: CRATEDROPLOCATION2 */ >= 0 && Global_262145.f_7124 /* Tunable: CRATEDROPLOCATION2 */ < 32)
		{
			iVar1 = 2;
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
		else
		{
			iVar1 = 1;
			iVar2 = 0;
		}
		switch (iVar2)
		{
			case 0:
				Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */;
				break;
			
			case 1:
				Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7124 /* Tunable: CRATEDROPLOCATION2 */;
				break;
			
			case 2:
				Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7125 /* Tunable: CRATEDROPLOCATION3 */;
				break;
			
			case 3:
				Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7126 /* Tunable: CRATEDROPLOCATION4 */;
				break;
			
			case 4:
				Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7127 /* Tunable: CRATEDROPLOCATION5 */;
				break;
		}
		if (iVar1 > 1)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (func_439(Global_2738934.f_206.f_25[iVar0 /*3*/], func_75(Local_90.f_2.f_68[0 /*104*/]), 50f, 0))
				{
					iVar2++;
					if (iVar2 >= iVar1)
					{
						iVar2 = 0;
					}
					switch (iVar2)
					{
						case 0:
							Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */;
							break;
						
						case 1:
							Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7124 /* Tunable: CRATEDROPLOCATION2 */;
							break;
						
						case 2:
							Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7125 /* Tunable: CRATEDROPLOCATION3 */;
							break;
						
						case 3:
							Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7126 /* Tunable: CRATEDROPLOCATION4 */;
							break;
						
						case 4:
							Local_90.f_2.f_68[0 /*104*/] = Global_262145.f_7127 /* Tunable: CRATEDROPLOCATION5 */;
							break;
						}
				}
				iVar0++;
			}
		}
	}
	if (((Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */ < 0 || Global_262145.f_66 /* Tunable: CRATE_DROP_LOCATION */ >= 32) || Local_90.f_2.f_68[0 /*104*/] < 0) || Local_90.f_2.f_68[0 /*104*/] >= 32)
	{
		Local_90.f_2.f_68[0 /*104*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 32);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_439(Global_2738934.f_206.f_25[iVar0 /*3*/], func_75(Local_90.f_2.f_68[0 /*104*/]), 50f, 0))
			{
				Local_90.f_2.f_68[0 /*104*/]++;
				if (Local_90.f_2.f_68[0 /*104*/] >= 32)
				{
					Local_90.f_2.f_68[0 /*104*/] = 0;
				}
			}
			iVar0++;
		}
	}
	if (Global_2650436.f_84.f_2 == 1)
	{
		MISC::SET_BIT(&(Local_90.f_1), 11);
		Local_90.f_2 = 1;
	}
	else
	{
		Local_90.f_2 = 1;
	}
	func_388();
}

int func_439(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x35ABC
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_440()//Position - 0x35B37
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
		if (func_429())
		{
			return 0;
		}
		if (func_427(157))
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

int func_441(int iParam0, int iParam1, bool bParam2)//Position - 0x35B90
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_432();
			}
			else
			{
				return 0;
			}
		}
		if (!func_184(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_432();
					}
					else
					{
						return 0;
					}
				}
				if (func_429())
				{
					if (!bParam2)
					{
						func_432();
					}
					else
					{
						return 0;
					}
				}
				if (func_427(157))
				{
					if (!bParam2)
					{
						func_432();
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
					func_432();
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
				func_432();
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
			func_432();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_442(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x35CA6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_432();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_443(int iParam0, bool bParam1, bool bParam2)//Position - 0x35CC5
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

